#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: heat3d_11_1_opt_compute_units.h
#include "heat3d_11_1_opt_compute_units.h"

struct h3_0_h3_0_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-10, 521], [-9, 520], [-9, 520]}
	// Capacity: 566582
	// # of read delays: 8
  // 0, 533, 283025, 283556, 283557, 283558, 284089, 566581
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 532> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 282491> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 530> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 530> f11;
	hw_uint<32>  f12;
	fifo<hw_uint<32> , 282491> f13;
	hw_uint<32>  f14;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_532() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_533() {
		return f2;
	}

	inline hw_uint<32>  peek_283024() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_283025() {
		return f4;
	}

	inline hw_uint<32>  peek_283555() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_283556() {
		return f6;
	}

	inline hw_uint<32>  peek_283557() {
		return f8;
	}

	inline hw_uint<32>  peek_283558() {
		return f10;
	}

	inline hw_uint<32>  peek_284088() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_284089() {
		return f12;
	}

	inline hw_uint<32>  peek_566580() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f13.back();
	}

	inline hw_uint<32>  peek_566581() {
		return f14;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 282491
    f14 = f13.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 282491 reading from capacity: 1
    f13.push(f12);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 530
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 530 reading from capacity: 1
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
    // cap: 1 reading from capacity: 530
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 530 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 282491
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 282491 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 532
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 532 reading from capacity: 1
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
  // h3_1_rd0 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[-1 + d0, d1, d2] : -9 <= d0 <= 520 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 520 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 521 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_283558();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd1_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd1 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[d0, -1 + d1, d2] : -9 <= d0 <= 520 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 520 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 521 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_284089();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd2_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd2 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[d0, d1, -1 + d2] : -9 <= d0 <= 520 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 520 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 521 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_566581();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd3_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd3 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[d0, d1, d2] : -9 <= d0 <= 520 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 520 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 521 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_283557();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd4_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd4 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[d0, d1, 1 + d2] : -9 <= d0 <= 520 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 520 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 521 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_533();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd5_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd5 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[d0, 1 + d1, d2] : -9 <= d0 <= 520 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 520 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 521 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_283025();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd6_select(h3_0_cache& h3_0, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd6 read pattern: { h3_1_update_0[d0, d1, d2] -> h3_0[1 + d0, d1, d2] : -9 <= d0 <= 520 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Read schedule : { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 520 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  // Write schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 521 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_7.peek_283556();
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
	// RAM Box: {[-9, 520], [-8, 519], [-8, 519]}
	// Capacity: 562332
	// # of read delays: 8
  // 0, 531, 280901, 281430, 281431, 281432, 281961, 562331
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 530> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 280369> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 528> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 528> f11;
	hw_uint<32>  f12;
	fifo<hw_uint<32> , 280369> f13;
	hw_uint<32>  f14;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_530() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_531() {
		return f2;
	}

	inline hw_uint<32>  peek_280900() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_280901() {
		return f4;
	}

	inline hw_uint<32>  peek_281429() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_281430() {
		return f6;
	}

	inline hw_uint<32>  peek_281431() {
		return f8;
	}

	inline hw_uint<32>  peek_281432() {
		return f10;
	}

	inline hw_uint<32>  peek_281960() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_281961() {
		return f12;
	}

	inline hw_uint<32>  peek_562330() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f13.back();
	}

	inline hw_uint<32>  peek_562331() {
		return f14;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 280369
    f14 = f13.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 280369 reading from capacity: 1
    f13.push(f12);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 528
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 528 reading from capacity: 1
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
    // cap: 1 reading from capacity: 528
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 528 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 280369
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 280369 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 530
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 530 reading from capacity: 1
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
  // h3_2_rd0 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[-1 + d0, d1, d2] : -8 <= d0 <= 519 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 519 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 520 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_281432();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd1_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd1 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[d0, -1 + d1, d2] : -8 <= d0 <= 519 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 519 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 520 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_281961();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd2_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd2 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[d0, d1, -1 + d2] : -8 <= d0 <= 519 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 519 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 520 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_562331();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd3_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd3 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[d0, d1, d2] : -8 <= d0 <= 519 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 519 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 520 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_281431();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd4_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd4 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[d0, d1, 1 + d2] : -8 <= d0 <= 519 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 519 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 520 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_531();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd5_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd5 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[d0, 1 + d1, d2] : -8 <= d0 <= 519 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 519 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 520 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_280901();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd6_select(h3_1_cache& h3_1, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd6 read pattern: { h3_2_update_0[d0, d1, d2] -> h3_1[1 + d0, d1, d2] : -8 <= d0 <= 519 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Read schedule : { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 519 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  // Write schedule: { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 520 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_7.peek_281430();
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

struct h3_10_h3_10_update_0_write0_to_heat3d_11_1_rd0_cache {
	// RAM Box: {[0, 511], [0, 511], [0, 511]}
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

struct h3_10_cache {
  // # of banks: 1
  h3_10_h3_10_update_0_write0_to_heat3d_11_1_rd0_cache h3_10_h3_10_update_0_write0_to_heat3d_11_1_rd0;
};



inline void h3_10_h3_10_update_0_write0_write(hw_uint<32> & h3_10_h3_10_update_0_write0, h3_10_cache& h3_10, int d0, int d1, int d2, int dynamic_address) {
  h3_10.h3_10_h3_10_update_0_write0_to_heat3d_11_1_rd0.push(h3_10_h3_10_update_0_write0);
}

inline hw_uint<32>  heat3d_11_1_rd0_select(h3_10_cache& h3_10, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // heat3d_11_1_rd0 read pattern: { heat3d_11_1_update_0[d0, d1, d2] -> h3_10[d0, d1, d2] : 0 <= d0 <= 511 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { heat3d_11_1_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 13] : 0 <= d0 <= 511 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 511 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  auto value_h3_10_h3_10_update_0_write0 = h3_10.h3_10_h3_10_update_0_write0_to_heat3d_11_1_rd0.peek(/* one reader or all rams */ 0);
  return value_h3_10_h3_10_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_10_update_0_write
//	h3_10_h3_10_update_0_write0
inline void h3_10_h3_10_update_0_write_bundle_write(hw_uint<32>& h3_10_update_0_write, h3_10_cache& h3_10, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_10_h3_10_update_0_write0_res = h3_10_update_0_write.extract<0, 31>();
	h3_10_h3_10_update_0_write0_write(h3_10_h3_10_update_0_write0_res, h3_10, d0, d1, d2, dynamic_address);
}

// heat3d_11_1_update_0_read
//	heat3d_11_1_rd0
inline hw_uint<32> h3_10_heat3d_11_1_update_0_read_bundle_read(h3_10_cache& h3_10, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 1
    // heat3d_11_1_rd0

	hw_uint<32> result;
	hw_uint<32>  heat3d_11_1_rd0_res = heat3d_11_1_rd0_select(h3_10, d0, d1, d2, dynamic_address);
	set_at<0, 32>(result, heat3d_11_1_rd0_res);
	return result;
}

struct h3_2_h3_2_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-8, 519], [-7, 518], [-7, 518]}
	// Capacity: 558098
	// # of read delays: 8
  // 0, 529, 278785, 279312, 279313, 279314, 279841, 558097
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 528> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 278255> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 526> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 526> f11;
	hw_uint<32>  f12;
	fifo<hw_uint<32> , 278255> f13;
	hw_uint<32>  f14;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_528() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_529() {
		return f2;
	}

	inline hw_uint<32>  peek_278784() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_278785() {
		return f4;
	}

	inline hw_uint<32>  peek_279311() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_279312() {
		return f6;
	}

	inline hw_uint<32>  peek_279313() {
		return f8;
	}

	inline hw_uint<32>  peek_279314() {
		return f10;
	}

	inline hw_uint<32>  peek_279840() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_279841() {
		return f12;
	}

	inline hw_uint<32>  peek_558096() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f13.back();
	}

	inline hw_uint<32>  peek_558097() {
		return f14;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 278255
    f14 = f13.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 278255 reading from capacity: 1
    f13.push(f12);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 526
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 526 reading from capacity: 1
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
    // cap: 1 reading from capacity: 526
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 526 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 278255
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 278255 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 528
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 528 reading from capacity: 1
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
  // h3_3_rd0 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[-1 + d0, d1, d2] : -7 <= d0 <= 518 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 518 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 519 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_279314();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd1_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd1 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[d0, -1 + d1, d2] : -7 <= d0 <= 518 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 518 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 519 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_279841();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd2_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd2 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[d0, d1, -1 + d2] : -7 <= d0 <= 518 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 518 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 519 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_558097();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd3_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd3 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[d0, d1, d2] : -7 <= d0 <= 518 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 518 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 519 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_279313();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd4_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd4 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[d0, d1, 1 + d2] : -7 <= d0 <= 518 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 518 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 519 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_529();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd5_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd5 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[d0, 1 + d1, d2] : -7 <= d0 <= 518 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 518 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 519 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_278785();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd6_select(h3_2_cache& h3_2, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd6 read pattern: { h3_3_update_0[d0, d1, d2] -> h3_2[1 + d0, d1, d2] : -7 <= d0 <= 518 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Read schedule : { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 518 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  // Write schedule: { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 519 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_7.peek_279312();
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
	// RAM Box: {[-7, 518], [-6, 517], [-6, 517]}
	// Capacity: 553880
	// # of read delays: 8
  // 0, 527, 276677, 277202, 277203, 277204, 277729, 553879
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 526> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 276149> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 524> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 524> f11;
	hw_uint<32>  f12;
	fifo<hw_uint<32> , 276149> f13;
	hw_uint<32>  f14;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_526() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_527() {
		return f2;
	}

	inline hw_uint<32>  peek_276676() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_276677() {
		return f4;
	}

	inline hw_uint<32>  peek_277201() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_277202() {
		return f6;
	}

	inline hw_uint<32>  peek_277203() {
		return f8;
	}

	inline hw_uint<32>  peek_277204() {
		return f10;
	}

	inline hw_uint<32>  peek_277728() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_277729() {
		return f12;
	}

	inline hw_uint<32>  peek_553878() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f13.back();
	}

	inline hw_uint<32>  peek_553879() {
		return f14;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 276149
    f14 = f13.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 276149 reading from capacity: 1
    f13.push(f12);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 524
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 524 reading from capacity: 1
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
    // cap: 1 reading from capacity: 524
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 524 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 276149
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 276149 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 526
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 526 reading from capacity: 1
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
  // h3_4_rd0 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[-1 + d0, d1, d2] : -6 <= d0 <= 517 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 517 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 518 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_277204();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd1_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd1 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[d0, -1 + d1, d2] : -6 <= d0 <= 517 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 517 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 518 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_277729();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd2_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd2 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[d0, d1, -1 + d2] : -6 <= d0 <= 517 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 517 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 518 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_553879();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd3_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd3 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[d0, d1, d2] : -6 <= d0 <= 517 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 517 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 518 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_277203();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd4_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd4 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[d0, d1, 1 + d2] : -6 <= d0 <= 517 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 517 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 518 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_527();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd5_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd5 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[d0, 1 + d1, d2] : -6 <= d0 <= 517 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 517 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 518 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_276677();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd6_select(h3_3_cache& h3_3, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd6 read pattern: { h3_4_update_0[d0, d1, d2] -> h3_3[1 + d0, d1, d2] : -6 <= d0 <= 517 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Read schedule : { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 517 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  // Write schedule: { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 518 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_7.peek_277202();
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
	// RAM Box: {[-6, 517], [-5, 516], [-5, 516]}
	// Capacity: 549678
	// # of read delays: 8
  // 0, 525, 274577, 275100, 275101, 275102, 275625, 549677
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 524> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 274051> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 522> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 522> f11;
	hw_uint<32>  f12;
	fifo<hw_uint<32> , 274051> f13;
	hw_uint<32>  f14;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_524() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_525() {
		return f2;
	}

	inline hw_uint<32>  peek_274576() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_274577() {
		return f4;
	}

	inline hw_uint<32>  peek_275099() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_275100() {
		return f6;
	}

	inline hw_uint<32>  peek_275101() {
		return f8;
	}

	inline hw_uint<32>  peek_275102() {
		return f10;
	}

	inline hw_uint<32>  peek_275624() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_275625() {
		return f12;
	}

	inline hw_uint<32>  peek_549676() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f13.back();
	}

	inline hw_uint<32>  peek_549677() {
		return f14;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 274051
    f14 = f13.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 274051 reading from capacity: 1
    f13.push(f12);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 522
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 522 reading from capacity: 1
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
    // cap: 1 reading from capacity: 522
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 522 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 274051
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 274051 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 524
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 524 reading from capacity: 1
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
  // h3_5_rd0 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[-1 + d0, d1, d2] : -5 <= d0 <= 516 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 516 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 517 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_275102();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd1_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd1 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[d0, -1 + d1, d2] : -5 <= d0 <= 516 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 516 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 517 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_275625();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd2_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd2 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[d0, d1, -1 + d2] : -5 <= d0 <= 516 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 516 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 517 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_549677();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd3_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd3 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[d0, d1, d2] : -5 <= d0 <= 516 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 516 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 517 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_275101();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd4_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd4 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[d0, d1, 1 + d2] : -5 <= d0 <= 516 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 516 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 517 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_525();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd5_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd5 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[d0, 1 + d1, d2] : -5 <= d0 <= 516 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 516 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 517 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_274577();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd6_select(h3_4_cache& h3_4, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd6 read pattern: { h3_5_update_0[d0, d1, d2] -> h3_4[1 + d0, d1, d2] : -5 <= d0 <= 516 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Read schedule : { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 516 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  // Write schedule: { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 517 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_7.peek_275100();
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
	// RAM Box: {[-5, 516], [-4, 515], [-4, 515]}
	// Capacity: 545492
	// # of read delays: 8
  // 0, 523, 272485, 273006, 273007, 273008, 273529, 545491
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 522> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 271961> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 520> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 520> f11;
	hw_uint<32>  f12;
	fifo<hw_uint<32> , 271961> f13;
	hw_uint<32>  f14;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_522() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_523() {
		return f2;
	}

	inline hw_uint<32>  peek_272484() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_272485() {
		return f4;
	}

	inline hw_uint<32>  peek_273005() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_273006() {
		return f6;
	}

	inline hw_uint<32>  peek_273007() {
		return f8;
	}

	inline hw_uint<32>  peek_273008() {
		return f10;
	}

	inline hw_uint<32>  peek_273528() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_273529() {
		return f12;
	}

	inline hw_uint<32>  peek_545490() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f13.back();
	}

	inline hw_uint<32>  peek_545491() {
		return f14;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 271961
    f14 = f13.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 271961 reading from capacity: 1
    f13.push(f12);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 520
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 520 reading from capacity: 1
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
    // cap: 1 reading from capacity: 520
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 520 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 271961
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 271961 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 522
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 522 reading from capacity: 1
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
  // h3_6_rd0 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[-1 + d0, d1, d2] : -4 <= d0 <= 515 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 515 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 516 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_273008();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd1_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd1 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[d0, -1 + d1, d2] : -4 <= d0 <= 515 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 515 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 516 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_273529();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd2_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd2 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[d0, d1, -1 + d2] : -4 <= d0 <= 515 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 515 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 516 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_545491();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd3_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd3 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[d0, d1, d2] : -4 <= d0 <= 515 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 515 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 516 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_273007();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd4_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd4 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[d0, d1, 1 + d2] : -4 <= d0 <= 515 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 515 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 516 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_523();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd5_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd5 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[d0, 1 + d1, d2] : -4 <= d0 <= 515 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 515 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 516 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_272485();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd6_select(h3_5_cache& h3_5, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd6 read pattern: { h3_6_update_0[d0, d1, d2] -> h3_5[1 + d0, d1, d2] : -4 <= d0 <= 515 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Read schedule : { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 515 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  // Write schedule: { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 516 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_7.peek_273006();
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
	// RAM Box: {[-4, 515], [-3, 514], [-3, 514]}
	// Capacity: 541322
	// # of read delays: 8
  // 0, 521, 270401, 270920, 270921, 270922, 271441, 541321
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 520> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 269879> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 518> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 518> f11;
	hw_uint<32>  f12;
	fifo<hw_uint<32> , 269879> f13;
	hw_uint<32>  f14;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_520() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_521() {
		return f2;
	}

	inline hw_uint<32>  peek_270400() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_270401() {
		return f4;
	}

	inline hw_uint<32>  peek_270919() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_270920() {
		return f6;
	}

	inline hw_uint<32>  peek_270921() {
		return f8;
	}

	inline hw_uint<32>  peek_270922() {
		return f10;
	}

	inline hw_uint<32>  peek_271440() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_271441() {
		return f12;
	}

	inline hw_uint<32>  peek_541320() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f13.back();
	}

	inline hw_uint<32>  peek_541321() {
		return f14;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 269879
    f14 = f13.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 269879 reading from capacity: 1
    f13.push(f12);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 518
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 518 reading from capacity: 1
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
    // cap: 1 reading from capacity: 518
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 518 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 269879
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 269879 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 520
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 520 reading from capacity: 1
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
  // h3_7_rd0 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[-1 + d0, d1, d2] : -3 <= d0 <= 514 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 514 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 515 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_270922();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd1_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd1 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[d0, -1 + d1, d2] : -3 <= d0 <= 514 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 514 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 515 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_271441();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd2_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd2 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[d0, d1, -1 + d2] : -3 <= d0 <= 514 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 514 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 515 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_541321();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd3_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd3 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[d0, d1, d2] : -3 <= d0 <= 514 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 514 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 515 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_270921();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd4_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd4 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[d0, d1, 1 + d2] : -3 <= d0 <= 514 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 514 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 515 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_521();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd5_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd5 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[d0, 1 + d1, d2] : -3 <= d0 <= 514 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 514 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 515 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_270401();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd6_select(h3_6_cache& h3_6, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd6 read pattern: { h3_7_update_0[d0, d1, d2] -> h3_6[1 + d0, d1, d2] : -3 <= d0 <= 514 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Read schedule : { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 514 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  // Write schedule: { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 515 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_7.peek_270920();
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

struct h3_7_h3_7_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-3, 514], [-2, 513], [-2, 513]}
	// Capacity: 537168
	// # of read delays: 8
  // 0, 519, 268325, 268842, 268843, 268844, 269361, 537167
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 518> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 267805> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 516> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 516> f11;
	hw_uint<32>  f12;
	fifo<hw_uint<32> , 267805> f13;
	hw_uint<32>  f14;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_518() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_519() {
		return f2;
	}

	inline hw_uint<32>  peek_268324() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_268325() {
		return f4;
	}

	inline hw_uint<32>  peek_268841() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_268842() {
		return f6;
	}

	inline hw_uint<32>  peek_268843() {
		return f8;
	}

	inline hw_uint<32>  peek_268844() {
		return f10;
	}

	inline hw_uint<32>  peek_269360() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_269361() {
		return f12;
	}

	inline hw_uint<32>  peek_537166() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f13.back();
	}

	inline hw_uint<32>  peek_537167() {
		return f14;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 267805
    f14 = f13.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 267805 reading from capacity: 1
    f13.push(f12);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 516
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 516 reading from capacity: 1
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
    // cap: 1 reading from capacity: 516
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 516 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 267805
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 267805 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 518
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 518 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_7_cache {
  // # of banks: 1
  h3_7_h3_7_update_0_write0_merged_banks_7_cache h3_7_h3_7_update_0_write0_merged_banks_7;
};



inline void h3_7_h3_7_update_0_write0_write(hw_uint<32> & h3_7_h3_7_update_0_write0, h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write0_merged_banks_7.push(h3_7_h3_7_update_0_write0);
}

inline hw_uint<32>  h3_8_rd0_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd0 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[-1 + d0, d1, d2] : -2 <= d0 <= 513 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 513 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 514 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_7.peek_268844();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd1_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd1 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[d0, -1 + d1, d2] : -2 <= d0 <= 513 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 513 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 514 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_7.peek_269361();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd2_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd2 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[d0, d1, -1 + d2] : -2 <= d0 <= 513 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 513 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 514 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_7.peek_537167();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd3_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd3 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[d0, d1, d2] : -2 <= d0 <= 513 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 513 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 514 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_7.peek_268843();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd4_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd4 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[d0, d1, 1 + d2] : -2 <= d0 <= 513 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 513 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 514 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_7.peek_519();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd5_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd5 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[d0, 1 + d1, d2] : -2 <= d0 <= 513 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 513 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 514 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_7.peek_268325();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd6_select(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd6 read pattern: { h3_8_update_0[d0, d1, d2] -> h3_7[1 + d0, d1, d2] : -2 <= d0 <= 513 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Read schedule : { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 513 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  // Write schedule: { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 514 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_7.peek_268842();
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

// h3_8_update_0_read
//	h3_8_rd0
//	h3_8_rd1
//	h3_8_rd2
//	h3_8_rd3
//	h3_8_rd4
//	h3_8_rd5
//	h3_8_rd6
inline hw_uint<224> h3_7_h3_8_update_0_read_bundle_read(h3_7_cache& h3_7, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 7
    // h3_8_rd0
    // h3_8_rd1
    // h3_8_rd2
    // h3_8_rd3
    // h3_8_rd4
    // h3_8_rd5
    // h3_8_rd6

	hw_uint<224> result;
	hw_uint<32>  h3_8_rd0_res = h3_8_rd0_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<0, 224>(result, h3_8_rd0_res);
	hw_uint<32>  h3_8_rd1_res = h3_8_rd1_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<32, 224>(result, h3_8_rd1_res);
	hw_uint<32>  h3_8_rd2_res = h3_8_rd2_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<64, 224>(result, h3_8_rd2_res);
	hw_uint<32>  h3_8_rd3_res = h3_8_rd3_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<96, 224>(result, h3_8_rd3_res);
	hw_uint<32>  h3_8_rd4_res = h3_8_rd4_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<128, 224>(result, h3_8_rd4_res);
	hw_uint<32>  h3_8_rd5_res = h3_8_rd5_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<160, 224>(result, h3_8_rd5_res);
	hw_uint<32>  h3_8_rd6_res = h3_8_rd6_select(h3_7, d0, d1, d2, dynamic_address);
	set_at<192, 224>(result, h3_8_rd6_res);
	return result;
}

struct h3_8_h3_8_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-2, 513], [-1, 512], [-1, 512]}
	// Capacity: 533030
	// # of read delays: 8
  // 0, 517, 266257, 266772, 266773, 266774, 267289, 533029
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 516> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 265739> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 514> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 514> f11;
	hw_uint<32>  f12;
	fifo<hw_uint<32> , 265739> f13;
	hw_uint<32>  f14;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_516() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_517() {
		return f2;
	}

	inline hw_uint<32>  peek_266256() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_266257() {
		return f4;
	}

	inline hw_uint<32>  peek_266771() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_266772() {
		return f6;
	}

	inline hw_uint<32>  peek_266773() {
		return f8;
	}

	inline hw_uint<32>  peek_266774() {
		return f10;
	}

	inline hw_uint<32>  peek_267288() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_267289() {
		return f12;
	}

	inline hw_uint<32>  peek_533028() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f13.back();
	}

	inline hw_uint<32>  peek_533029() {
		return f14;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 265739
    f14 = f13.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 265739 reading from capacity: 1
    f13.push(f12);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 514
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 514 reading from capacity: 1
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
    // cap: 1 reading from capacity: 514
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 514 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 265739
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 265739 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 516
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 516 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_8_cache {
  // # of banks: 1
  h3_8_h3_8_update_0_write0_merged_banks_7_cache h3_8_h3_8_update_0_write0_merged_banks_7;
};



inline void h3_8_h3_8_update_0_write0_write(hw_uint<32> & h3_8_h3_8_update_0_write0, h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write0_merged_banks_7.push(h3_8_h3_8_update_0_write0);
}

inline hw_uint<32>  h3_9_rd0_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd0 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[-1 + d0, d1, d2] : -1 <= d0 <= 512 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 512 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 513 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_7.peek_266774();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd1_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd1 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[d0, -1 + d1, d2] : -1 <= d0 <= 512 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 512 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 513 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_7.peek_267289();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd2_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd2 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[d0, d1, -1 + d2] : -1 <= d0 <= 512 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 512 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 513 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_7.peek_533029();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd3_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd3 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[d0, d1, d2] : -1 <= d0 <= 512 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 512 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 513 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_7.peek_266773();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd4_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd4 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[d0, d1, 1 + d2] : -1 <= d0 <= 512 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 512 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 513 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_7.peek_517();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd5_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd5 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[d0, 1 + d1, d2] : -1 <= d0 <= 512 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 512 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 513 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_7.peek_266257();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd6_select(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd6 read pattern: { h3_9_update_0[d0, d1, d2] -> h3_8[1 + d0, d1, d2] : -1 <= d0 <= 512 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Read schedule : { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 512 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  // Write schedule: { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 513 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_7.peek_266772();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_8_update_0_write
//	h3_8_h3_8_update_0_write0
inline void h3_8_h3_8_update_0_write_bundle_write(hw_uint<32>& h3_8_update_0_write, h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_8_h3_8_update_0_write0_res = h3_8_update_0_write.extract<0, 31>();
	h3_8_h3_8_update_0_write0_write(h3_8_h3_8_update_0_write0_res, h3_8, d0, d1, d2, dynamic_address);
}

// h3_9_update_0_read
//	h3_9_rd0
//	h3_9_rd1
//	h3_9_rd2
//	h3_9_rd3
//	h3_9_rd4
//	h3_9_rd5
//	h3_9_rd6
inline hw_uint<224> h3_8_h3_9_update_0_read_bundle_read(h3_8_cache& h3_8, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 7
    // h3_9_rd0
    // h3_9_rd1
    // h3_9_rd2
    // h3_9_rd3
    // h3_9_rd4
    // h3_9_rd5
    // h3_9_rd6

	hw_uint<224> result;
	hw_uint<32>  h3_9_rd0_res = h3_9_rd0_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<0, 224>(result, h3_9_rd0_res);
	hw_uint<32>  h3_9_rd1_res = h3_9_rd1_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<32, 224>(result, h3_9_rd1_res);
	hw_uint<32>  h3_9_rd2_res = h3_9_rd2_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<64, 224>(result, h3_9_rd2_res);
	hw_uint<32>  h3_9_rd3_res = h3_9_rd3_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<96, 224>(result, h3_9_rd3_res);
	hw_uint<32>  h3_9_rd4_res = h3_9_rd4_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<128, 224>(result, h3_9_rd4_res);
	hw_uint<32>  h3_9_rd5_res = h3_9_rd5_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<160, 224>(result, h3_9_rd5_res);
	hw_uint<32>  h3_9_rd6_res = h3_9_rd6_select(h3_8, d0, d1, d2, dynamic_address);
	set_at<192, 224>(result, h3_9_rd6_res);
	return result;
}

struct h3_9_h3_9_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-1, 512], [0, 511], [0, 511]}
	// Capacity: 528908
	// # of read delays: 8
  // 0, 515, 264197, 264710, 264711, 264712, 265225, 528907
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 514> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 263681> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 512> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 512> f11;
	hw_uint<32>  f12;
	fifo<hw_uint<32> , 263681> f13;
	hw_uint<32>  f14;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_514() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_515() {
		return f2;
	}

	inline hw_uint<32>  peek_264196() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_264197() {
		return f4;
	}

	inline hw_uint<32>  peek_264709() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_264710() {
		return f6;
	}

	inline hw_uint<32>  peek_264711() {
		return f8;
	}

	inline hw_uint<32>  peek_264712() {
		return f10;
	}

	inline hw_uint<32>  peek_265224() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_265225() {
		return f12;
	}

	inline hw_uint<32>  peek_528906() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f13.back();
	}

	inline hw_uint<32>  peek_528907() {
		return f14;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 263681
    f14 = f13.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 263681 reading from capacity: 1
    f13.push(f12);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 512
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 512 reading from capacity: 1
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
    // cap: 1 reading from capacity: 512
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 512 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 263681
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 263681 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 514
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 514 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct h3_9_cache {
  // # of banks: 1
  h3_9_h3_9_update_0_write0_merged_banks_7_cache h3_9_h3_9_update_0_write0_merged_banks_7;
};



inline void h3_9_h3_9_update_0_write0_write(hw_uint<32> & h3_9_h3_9_update_0_write0, h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write0_merged_banks_7.push(h3_9_h3_9_update_0_write0);
}

inline hw_uint<32>  h3_10_rd0_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd0 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[-1 + d0, d1, d2] : 0 <= d0 <= 511 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 511 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 512 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write0 = h3_9.h3_9_h3_9_update_0_write0_merged_banks_7.peek_264712();
  return value_h3_9_h3_9_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_10_rd1_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd1 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[d0, -1 + d1, d2] : 0 <= d0 <= 511 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 511 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 512 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write0 = h3_9.h3_9_h3_9_update_0_write0_merged_banks_7.peek_265225();
  return value_h3_9_h3_9_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_10_rd2_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd2 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[d0, d1, -1 + d2] : 0 <= d0 <= 511 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 511 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 512 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write0 = h3_9.h3_9_h3_9_update_0_write0_merged_banks_7.peek_528907();
  return value_h3_9_h3_9_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_10_rd3_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd3 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[d0, d1, d2] : 0 <= d0 <= 511 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 511 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 512 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write0 = h3_9.h3_9_h3_9_update_0_write0_merged_banks_7.peek_264711();
  return value_h3_9_h3_9_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_10_rd4_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd4 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[d0, d1, 1 + d2] : 0 <= d0 <= 511 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 511 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 512 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write0 = h3_9.h3_9_h3_9_update_0_write0_merged_banks_7.peek_515();
  return value_h3_9_h3_9_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_10_rd5_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd5 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[d0, 1 + d1, d2] : 0 <= d0 <= 511 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 511 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 512 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write0 = h3_9.h3_9_h3_9_update_0_write0_merged_banks_7.peek_264197();
  return value_h3_9_h3_9_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_10_rd6_select(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_10_rd6 read pattern: { h3_10_update_0[d0, d1, d2] -> h3_9[1 + d0, d1, d2] : 0 <= d0 <= 511 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Read schedule : { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 511 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
  // Write schedule: { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 512 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
  auto value_h3_9_h3_9_update_0_write0 = h3_9.h3_9_h3_9_update_0_write0_merged_banks_7.peek_264710();
  return value_h3_9_h3_9_update_0_write0;
  return 0;
}

// # of bundles = 2
// h3_10_update_0_read
//	h3_10_rd0
//	h3_10_rd1
//	h3_10_rd2
//	h3_10_rd3
//	h3_10_rd4
//	h3_10_rd5
//	h3_10_rd6
inline hw_uint<224> h3_9_h3_10_update_0_read_bundle_read(h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 7
    // h3_10_rd0
    // h3_10_rd1
    // h3_10_rd2
    // h3_10_rd3
    // h3_10_rd4
    // h3_10_rd5
    // h3_10_rd6

	hw_uint<224> result;
	hw_uint<32>  h3_10_rd0_res = h3_10_rd0_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<0, 224>(result, h3_10_rd0_res);
	hw_uint<32>  h3_10_rd1_res = h3_10_rd1_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<32, 224>(result, h3_10_rd1_res);
	hw_uint<32>  h3_10_rd2_res = h3_10_rd2_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<64, 224>(result, h3_10_rd2_res);
	hw_uint<32>  h3_10_rd3_res = h3_10_rd3_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<96, 224>(result, h3_10_rd3_res);
	hw_uint<32>  h3_10_rd4_res = h3_10_rd4_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<128, 224>(result, h3_10_rd4_res);
	hw_uint<32>  h3_10_rd5_res = h3_10_rd5_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<160, 224>(result, h3_10_rd5_res);
	hw_uint<32>  h3_10_rd6_res = h3_10_rd6_select(h3_9, d0, d1, d2, dynamic_address);
	set_at<192, 224>(result, h3_10_rd6_res);
	return result;
}

// h3_9_update_0_write
//	h3_9_h3_9_update_0_write0
inline void h3_9_h3_9_update_0_write_bundle_write(hw_uint<32>& h3_9_update_0_write, h3_9_cache& h3_9, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  h3_9_h3_9_update_0_write0_res = h3_9_update_0_write.extract<0, 31>();
	h3_9_h3_9_update_0_write0_write(h3_9_h3_9_update_0_write0_res, h3_9, d0, d1, d2, dynamic_address);
}

struct in_cc_in_cc_update_0_write0_merged_banks_7_cache {
	// RAM Box: {[-11, 522], [-10, 521], [-10, 521]}
	// Capacity: 570848
	// # of read delays: 8
  // 0, 535, 285157, 285690, 285691, 285692, 286225, 570847
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 534> f1;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 284621> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 532> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 532> f11;
	hw_uint<32>  f12;
	fifo<hw_uint<32> , 284621> f13;
	hw_uint<32>  f14;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_534() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_535() {
		return f2;
	}

	inline hw_uint<32>  peek_285156() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_285157() {
		return f4;
	}

	inline hw_uint<32>  peek_285689() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_285690() {
		return f6;
	}

	inline hw_uint<32>  peek_285691() {
		return f8;
	}

	inline hw_uint<32>  peek_285692() {
		return f10;
	}

	inline hw_uint<32>  peek_286224() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_286225() {
		return f12;
	}

	inline hw_uint<32>  peek_570846() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f13.back();
	}

	inline hw_uint<32>  peek_570847() {
		return f14;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 284621
    f14 = f13.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 284621 reading from capacity: 1
    f13.push(f12);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 532
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 532 reading from capacity: 1
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
    // cap: 1 reading from capacity: 532
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 532 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 284621
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 284621 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 534
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 534 reading from capacity: 1
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
  // h3_0_rd0 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[-1 + d0, d1, d2] : -10 <= d0 <= 521 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 521 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 522 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_285692();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd1_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd1 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[d0, -1 + d1, d2] : -10 <= d0 <= 521 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 521 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 522 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_286225();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd2_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd2 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[d0, d1, -1 + d2] : -10 <= d0 <= 521 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 521 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 522 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_570847();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd3_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd3 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[d0, d1, d2] : -10 <= d0 <= 521 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 521 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 522 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_285691();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd4_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd4 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[d0, d1, 1 + d2] : -10 <= d0 <= 521 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 521 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 522 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_535();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd5_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd5 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[d0, 1 + d1, d2] : -10 <= d0 <= 521 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 521 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 522 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_285157();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd6_select(in_cc_cache& in_cc, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd6 read pattern: { h3_0_update_0[d0, d1, d2] -> in_cc[1 + d0, d1, d2] : -10 <= d0 <= 521 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Read schedule : { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 521 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
  // Write schedule: { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 522 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_7.peek_285690();
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

// Total re-use buffer capacity: 193514464 bits


// Operation logic
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

inline void h3_9_update_0(h3_8_cache& h3_8, h3_9_cache& h3_9, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_8
	auto h3_8_0_c__0_value = h3_8_h3_9_update_0_read_bundle_read(h3_8/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_9_generated_compute_unrolled_1(h3_8_0_c__0_value);
	// Produce: h3_9
	h3_9_h3_9_update_0_write_bundle_write(/* arg names */compute_result, h3_9, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void heat3d_11_1_update_0(h3_10_cache& h3_10, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */heat3d_11_1, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_10
	auto h3_10_0_c__0_value = h3_10_heat3d_11_1_update_0_read_bundle_read(h3_10/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = heat3d_11_1_generated_compute_unrolled_1(h3_10_0_c__0_value);
	// Produce: heat3d_11_1
	heat3d_11_1.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_8_update_0(h3_7_cache& h3_7, h3_8_cache& h3_8, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_7
	auto h3_7_0_c__0_value = h3_7_h3_8_update_0_read_bundle_read(h3_7/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_8_generated_compute_unrolled_1(h3_7_0_c__0_value);
	// Produce: h3_8
	h3_8_h3_8_update_0_write_bundle_write(/* arg names */compute_result, h3_8, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_10_update_0(h3_9_cache& h3_9, h3_10_cache& h3_10, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: h3_9
	auto h3_9_0_c__0_value = h3_9_h3_10_update_0_read_bundle_read(h3_9/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_10_generated_compute_unrolled_1(h3_9_0_c__0_value);
	// Produce: h3_10
	h3_10_h3_10_update_0_write_bundle_write(/* arg names */compute_result, h3_10, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void heat3d_11_1_opt(HWStream<hw_uint<32> >& /* get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* get_args num ports = 1 */heat3d_11_1) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("heat3d_11_1_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  h3_0_cache h3_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_1_cache h3_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  h3_10_cache h3_10;
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

// schedule: { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 521 and -10 <= d1 <= 521 and -10 <= d2 <= 521; h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 517 and -6 <= d1 <= 517 and -6 <= d2 <= 517; h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 513 and -2 <= d1 <= 513 and -2 <= d2 <= 513; h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 512 and -1 <= d1 <= 512 and -1 <= d2 <= 512; h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 519 and -8 <= d1 <= 519 and -8 <= d2 <= 519; h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 518 and -7 <= d1 <= 518 and -7 <= d2 <= 518; in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 522 and -11 <= d1 <= 522 and -11 <= d2 <= 522; h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 511 and 0 <= d1 <= 511 and 0 <= d2 <= 511; h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 516 and -5 <= d1 <= 516 and -5 <= d2 <= 516; h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 520 and -9 <= d1 <= 520 and -9 <= d2 <= 520; h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 514 and -3 <= d1 <= 514 and -3 <= d2 <= 514; heat3d_11_1_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 13] : 0 <= d0 <= 511 and 0 <= d1 <= 511 and 0 <= d2 <= 511; h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 515 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
//   { h3_0_update_0[d0, d1, d2] -> [1 + d2, 1 + d1, 1 + d0, 2] : -10 <= d0 <= 521 and -10 <= d1 <= 521 and -10 <= d2 <= 521 }
// Condition for h3_0_update_0(((-2 + i3 == 0) && (9 + i2 >= 0) && (522 - i2 >= 0) && (9 + i1 >= 0) && (522 - i1 >= 0) && (9 + i0 >= 0) && (522 - i0 >= 0)))
//   { h3_4_update_0[d0, d1, d2] -> [5 + d2, 5 + d1, 5 + d0, 6] : -6 <= d0 <= 517 and -6 <= d1 <= 517 and -6 <= d2 <= 517 }
// Condition for h3_4_update_0(((-6 + i3 == 0) && (1 + i2 >= 0) && (522 - i2 >= 0) && (1 + i1 >= 0) && (522 - i1 >= 0) && (1 + i0 >= 0) && (522 - i0 >= 0)))
//   { h3_8_update_0[d0, d1, d2] -> [9 + d2, 9 + d1, 9 + d0, 10] : -2 <= d0 <= 513 and -2 <= d1 <= 513 and -2 <= d2 <= 513 }
// Condition for h3_8_update_0(((-10 + i3 == 0) && (-7 + i2 >= 0) && (522 - i2 >= 0) && (-7 + i1 >= 0) && (522 - i1 >= 0) && (-7 + i0 >= 0) && (522 - i0 >= 0)))
//   { h3_9_update_0[d0, d1, d2] -> [10 + d2, 10 + d1, 10 + d0, 11] : -1 <= d0 <= 512 and -1 <= d1 <= 512 and -1 <= d2 <= 512 }
// Condition for h3_9_update_0(((-11 + i3 == 0) && (-9 + i2 >= 0) && (522 - i2 >= 0) && (-9 + i1 >= 0) && (522 - i1 >= 0) && (-9 + i0 >= 0) && (522 - i0 >= 0)))
//   { h3_2_update_0[d0, d1, d2] -> [3 + d2, 3 + d1, 3 + d0, 4] : -8 <= d0 <= 519 and -8 <= d1 <= 519 and -8 <= d2 <= 519 }
// Condition for h3_2_update_0(((-4 + i3 == 0) && (5 + i2 >= 0) && (522 - i2 >= 0) && (5 + i1 >= 0) && (522 - i1 >= 0) && (5 + i0 >= 0) && (522 - i0 >= 0)))
//   { h3_3_update_0[d0, d1, d2] -> [4 + d2, 4 + d1, 4 + d0, 5] : -7 <= d0 <= 518 and -7 <= d1 <= 518 and -7 <= d2 <= 518 }
// Condition for h3_3_update_0(((-5 + i3 == 0) && (3 + i2 >= 0) && (522 - i2 >= 0) && (3 + i1 >= 0) && (522 - i1 >= 0) && (3 + i0 >= 0) && (522 - i0 >= 0)))
//   { in_cc_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : -11 <= d0 <= 522 and -11 <= d1 <= 522 and -11 <= d2 <= 522 }
// Condition for in_cc_update_0(((-1 + i3 == 0) && (11 + i2 >= 0) && (522 - i2 >= 0) && (11 + i1 >= 0) && (522 - i1 >= 0) && (11 + i0 >= 0) && (522 - i0 >= 0)))
//   { h3_10_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 12] : 0 <= d0 <= 511 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for h3_10_update_0(((-12 + i3 == 0) && (-11 + i2 >= 0) && (522 - i2 >= 0) && (-11 + i1 >= 0) && (522 - i1 >= 0) && (-11 + i0 >= 0) && (522 - i0 >= 0)))
//   { h3_5_update_0[d0, d1, d2] -> [6 + d2, 6 + d1, 6 + d0, 7] : -5 <= d0 <= 516 and -5 <= d1 <= 516 and -5 <= d2 <= 516 }
// Condition for h3_5_update_0(((-7 + i3 == 0) && (-1 + i2 >= 0) && (522 - i2 >= 0) && (-1 + i1 >= 0) && (522 - i1 >= 0) && (-1 + i0 >= 0) && (522 - i0 >= 0)))
//   { h3_1_update_0[d0, d1, d2] -> [2 + d2, 2 + d1, 2 + d0, 3] : -9 <= d0 <= 520 and -9 <= d1 <= 520 and -9 <= d2 <= 520 }
// Condition for h3_1_update_0(((-3 + i3 == 0) && (7 + i2 >= 0) && (522 - i2 >= 0) && (7 + i1 >= 0) && (522 - i1 >= 0) && (7 + i0 >= 0) && (522 - i0 >= 0)))
//   { h3_7_update_0[d0, d1, d2] -> [8 + d2, 8 + d1, 8 + d0, 9] : -3 <= d0 <= 514 and -3 <= d1 <= 514 and -3 <= d2 <= 514 }
// Condition for h3_7_update_0(((-9 + i3 == 0) && (-5 + i2 >= 0) && (522 - i2 >= 0) && (-5 + i1 >= 0) && (522 - i1 >= 0) && (-5 + i0 >= 0) && (522 - i0 >= 0)))
//   { heat3d_11_1_update_0[d0, d1, d2] -> [11 + d2, 11 + d1, 11 + d0, 13] : 0 <= d0 <= 511 and 0 <= d1 <= 511 and 0 <= d2 <= 511 }
// Condition for heat3d_11_1_update_0(((-13 + i3 == 0) && (-11 + i2 >= 0) && (522 - i2 >= 0) && (-11 + i1 >= 0) && (522 - i1 >= 0) && (-11 + i0 >= 0) && (522 - i0 >= 0)))
//   { h3_6_update_0[d0, d1, d2] -> [7 + d2, 7 + d1, 7 + d0, 8] : -4 <= d0 <= 515 and -4 <= d1 <= 515 and -4 <= d2 <= 515 }
// Condition for h3_6_update_0(((-8 + i3 == 0) && (-3 + i2 >= 0) && (522 - i2 >= 0) && (-3 + i1 >= 0) && (522 - i1 >= 0) && (-3 + i0 >= 0) && (522 - i0 >= 0)))

  /*
  // Schedules...
    // h3_0_update_0 -> [1*d2*1*1 + 1*1,1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
    // h3_10_update_0 -> [1*d2*1*1 + 1*11,1*d1*1*1 + 1*11,1*d0*1*1 + 1*11,1*12]
    // h3_1_update_0 -> [1*d2*1*1 + 1*2,1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
    // h3_2_update_0 -> [1*d2*1*1 + 1*3,1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*4]
    // h3_3_update_0 -> [1*d2*1*1 + 1*4,1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*5]
    // h3_4_update_0 -> [1*d2*1*1 + 1*5,1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*6]
    // h3_5_update_0 -> [1*d2*1*1 + 1*6,1*d1*1*1 + 1*6,1*d0*1*1 + 1*6,1*7]
    // h3_6_update_0 -> [1*d2*1*1 + 1*7,1*d1*1*1 + 1*7,1*d0*1*1 + 1*7,1*8]
    // h3_7_update_0 -> [1*d2*1*1 + 1*8,1*d1*1*1 + 1*8,1*d0*1*1 + 1*8,1*9]
    // h3_8_update_0 -> [1*d2*1*1 + 1*9,1*d1*1*1 + 1*9,1*d0*1*1 + 1*9,1*10]
    // h3_9_update_0 -> [1*d2*1*1 + 1*10,1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*11]
    // heat3d_11_1_update_0 -> [1*d2*1*1 + 1*11,1*d1*1*1 + 1*11,1*d0*1*1 + 1*11,1*13]
    // in_cc_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // in_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
for (int c0 = -11; c0 <= 522; c0++) {
  for (int c1 = -11; c1 <= 522; c1++) {
    for (int c2 = -11; c2 <= 522; c2++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

      if ((-11 <= c2 && c2 <= 522) && ((c2 - 0) % 1 == 0) && (-11 <= c1 && c1 <= 522) && ((c1 - 0) % 1 == 0) && (-11 <= c0 && c0 <= 522) && ((c0 - 0) % 1 == 0)) {
        in_cc_update_0((c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
      }

      if ((-9 <= c2 && c2 <= 522) && ((c2 - 1) % 1 == 0) && (-9 <= c1 && c1 <= 522) && ((c1 - 1) % 1 == 0) && (-9 <= c0 && c0 <= 522) && ((c0 - 1) % 1 == 0)) {
        h3_0_update_0((c2 - 1) / 1, (c1 - 1) / 1, (c0 - 1) / 1);
      }

      if ((-7 <= c2 && c2 <= 522) && ((c2 - 2) % 1 == 0) && (-7 <= c1 && c1 <= 522) && ((c1 - 2) % 1 == 0) && (-7 <= c0 && c0 <= 522) && ((c0 - 2) % 1 == 0)) {
        h3_1_update_0((c2 - 2) / 1, (c1 - 2) / 1, (c0 - 2) / 1);
      }

      if ((-5 <= c2 && c2 <= 522) && ((c2 - 3) % 1 == 0) && (-5 <= c1 && c1 <= 522) && ((c1 - 3) % 1 == 0) && (-5 <= c0 && c0 <= 522) && ((c0 - 3) % 1 == 0)) {
        h3_2_update_0((c2 - 3) / 1, (c1 - 3) / 1, (c0 - 3) / 1);
      }

      if ((-3 <= c2 && c2 <= 522) && ((c2 - 4) % 1 == 0) && (-3 <= c1 && c1 <= 522) && ((c1 - 4) % 1 == 0) && (-3 <= c0 && c0 <= 522) && ((c0 - 4) % 1 == 0)) {
        h3_3_update_0((c2 - 4) / 1, (c1 - 4) / 1, (c0 - 4) / 1);
      }

      if ((-1 <= c2 && c2 <= 522) && ((c2 - 5) % 1 == 0) && (-1 <= c1 && c1 <= 522) && ((c1 - 5) % 1 == 0) && (-1 <= c0 && c0 <= 522) && ((c0 - 5) % 1 == 0)) {
        h3_4_update_0((c2 - 5) / 1, (c1 - 5) / 1, (c0 - 5) / 1);
      }

      if ((1 <= c2 && c2 <= 522) && ((c2 - 6) % 1 == 0) && (1 <= c1 && c1 <= 522) && ((c1 - 6) % 1 == 0) && (1 <= c0 && c0 <= 522) && ((c0 - 6) % 1 == 0)) {
        h3_5_update_0((c2 - 6) / 1, (c1 - 6) / 1, (c0 - 6) / 1);
      }

      if ((3 <= c2 && c2 <= 522) && ((c2 - 7) % 1 == 0) && (3 <= c1 && c1 <= 522) && ((c1 - 7) % 1 == 0) && (3 <= c0 && c0 <= 522) && ((c0 - 7) % 1 == 0)) {
        h3_6_update_0((c2 - 7) / 1, (c1 - 7) / 1, (c0 - 7) / 1);
      }

      if ((5 <= c2 && c2 <= 522) && ((c2 - 8) % 1 == 0) && (5 <= c1 && c1 <= 522) && ((c1 - 8) % 1 == 0) && (5 <= c0 && c0 <= 522) && ((c0 - 8) % 1 == 0)) {
        h3_7_update_0((c2 - 8) / 1, (c1 - 8) / 1, (c0 - 8) / 1);
      }

      if ((7 <= c2 && c2 <= 522) && ((c2 - 9) % 1 == 0) && (7 <= c1 && c1 <= 522) && ((c1 - 9) % 1 == 0) && (7 <= c0 && c0 <= 522) && ((c0 - 9) % 1 == 0)) {
        h3_8_update_0((c2 - 9) / 1, (c1 - 9) / 1, (c0 - 9) / 1);
      }

      if ((9 <= c2 && c2 <= 522) && ((c2 - 10) % 1 == 0) && (9 <= c1 && c1 <= 522) && ((c1 - 10) % 1 == 0) && (9 <= c0 && c0 <= 522) && ((c0 - 10) % 1 == 0)) {
        h3_9_update_0((c2 - 10) / 1, (c1 - 10) / 1, (c0 - 10) / 1);
      }

      if ((11 <= c2 && c2 <= 522) && ((c2 - 11) % 1 == 0) && (11 <= c1 && c1 <= 522) && ((c1 - 11) % 1 == 0) && (11 <= c0 && c0 <= 522) && ((c0 - 11) % 1 == 0)) {
        h3_10_update_0((c2 - 11) / 1, (c1 - 11) / 1, (c0 - 11) / 1);
      }

      if ((11 <= c2 && c2 <= 522) && ((c2 - 11) % 1 == 0) && (11 <= c1 && c1 <= 522) && ((c1 - 11) % 1 == 0) && (11 <= c0 && c0 <= 522) && ((c0 - 11) % 1 == 0)) {
        heat3d_11_1_update_0((c2 - 11) / 1, (c1 - 11) / 1, (c0 - 11) / 1);
      }

    }
  }
}

  */
	  // Schedules...
	    // h3_0_update_0 -> [1*d2*1*1 + 1*1,1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // h3_10_update_0 -> [1*d2*1*1 + 1*11,1*d1*1*1 + 1*11,1*d0*1*1 + 1*11,1*12]
	    // h3_1_update_0 -> [1*d2*1*1 + 1*2,1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
	    // h3_2_update_0 -> [1*d2*1*1 + 1*3,1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*4]
	    // h3_3_update_0 -> [1*d2*1*1 + 1*4,1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*5]
	    // h3_4_update_0 -> [1*d2*1*1 + 1*5,1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*6]
	    // h3_5_update_0 -> [1*d2*1*1 + 1*6,1*d1*1*1 + 1*6,1*d0*1*1 + 1*6,1*7]
	    // h3_6_update_0 -> [1*d2*1*1 + 1*7,1*d1*1*1 + 1*7,1*d0*1*1 + 1*7,1*8]
	    // h3_7_update_0 -> [1*d2*1*1 + 1*8,1*d1*1*1 + 1*8,1*d0*1*1 + 1*8,1*9]
	    // h3_8_update_0 -> [1*d2*1*1 + 1*9,1*d1*1*1 + 1*9,1*d0*1*1 + 1*9,1*10]
	    // h3_9_update_0 -> [1*d2*1*1 + 1*10,1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*11]
	    // heat3d_11_1_update_0 -> [1*d2*1*1 + 1*11,1*d1*1*1 + 1*11,1*d0*1*1 + 1*11,1*13]
	    // in_cc_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // in_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	for (int c0 = -11; c0 <= 522; c0++) {
	  for (int c1 = -11; c1 <= 522; c1++) {
	    for (int c2 = -11; c2 <= 522; c2++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	      if ((-11 <= c2 && c2 <= 522) && ((c2 - 0) % 1 == 0) && (-11 <= c1 && c1 <= 522) && ((c1 - 0) % 1 == 0) && (-11 <= c0 && c0 <= 522) && ((c0 - 0) % 1 == 0)) {
	        in_cc_update_0(in /* buf name */, in_cc, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((-9 <= c2 && c2 <= 522) && ((c2 - 1) % 1 == 0) && (-9 <= c1 && c1 <= 522) && ((c1 - 1) % 1 == 0) && (-9 <= c0 && c0 <= 522) && ((c0 - 1) % 1 == 0)) {
	        h3_0_update_0(in_cc /* buf name */, h3_0, (c2 - 1) / 1, (c1 - 1) / 1, (c0 - 1) / 1);
	      }
	
	      if ((-7 <= c2 && c2 <= 522) && ((c2 - 2) % 1 == 0) && (-7 <= c1 && c1 <= 522) && ((c1 - 2) % 1 == 0) && (-7 <= c0 && c0 <= 522) && ((c0 - 2) % 1 == 0)) {
	        h3_1_update_0(h3_0 /* buf name */, h3_1, (c2 - 2) / 1, (c1 - 2) / 1, (c0 - 2) / 1);
	      }
	
	      if ((-5 <= c2 && c2 <= 522) && ((c2 - 3) % 1 == 0) && (-5 <= c1 && c1 <= 522) && ((c1 - 3) % 1 == 0) && (-5 <= c0 && c0 <= 522) && ((c0 - 3) % 1 == 0)) {
	        h3_2_update_0(h3_1 /* buf name */, h3_2, (c2 - 3) / 1, (c1 - 3) / 1, (c0 - 3) / 1);
	      }
	
	      if ((-3 <= c2 && c2 <= 522) && ((c2 - 4) % 1 == 0) && (-3 <= c1 && c1 <= 522) && ((c1 - 4) % 1 == 0) && (-3 <= c0 && c0 <= 522) && ((c0 - 4) % 1 == 0)) {
	        h3_3_update_0(h3_2 /* buf name */, h3_3, (c2 - 4) / 1, (c1 - 4) / 1, (c0 - 4) / 1);
	      }
	
	      if ((-1 <= c2 && c2 <= 522) && ((c2 - 5) % 1 == 0) && (-1 <= c1 && c1 <= 522) && ((c1 - 5) % 1 == 0) && (-1 <= c0 && c0 <= 522) && ((c0 - 5) % 1 == 0)) {
	        h3_4_update_0(h3_3 /* buf name */, h3_4, (c2 - 5) / 1, (c1 - 5) / 1, (c0 - 5) / 1);
	      }
	
	      if ((1 <= c2 && c2 <= 522) && ((c2 - 6) % 1 == 0) && (1 <= c1 && c1 <= 522) && ((c1 - 6) % 1 == 0) && (1 <= c0 && c0 <= 522) && ((c0 - 6) % 1 == 0)) {
	        h3_5_update_0(h3_4 /* buf name */, h3_5, (c2 - 6) / 1, (c1 - 6) / 1, (c0 - 6) / 1);
	      }
	
	      if ((3 <= c2 && c2 <= 522) && ((c2 - 7) % 1 == 0) && (3 <= c1 && c1 <= 522) && ((c1 - 7) % 1 == 0) && (3 <= c0 && c0 <= 522) && ((c0 - 7) % 1 == 0)) {
	        h3_6_update_0(h3_5 /* buf name */, h3_6, (c2 - 7) / 1, (c1 - 7) / 1, (c0 - 7) / 1);
	      }
	
	      if ((5 <= c2 && c2 <= 522) && ((c2 - 8) % 1 == 0) && (5 <= c1 && c1 <= 522) && ((c1 - 8) % 1 == 0) && (5 <= c0 && c0 <= 522) && ((c0 - 8) % 1 == 0)) {
	        h3_7_update_0(h3_6 /* buf name */, h3_7, (c2 - 8) / 1, (c1 - 8) / 1, (c0 - 8) / 1);
	      }
	
	      if ((7 <= c2 && c2 <= 522) && ((c2 - 9) % 1 == 0) && (7 <= c1 && c1 <= 522) && ((c1 - 9) % 1 == 0) && (7 <= c0 && c0 <= 522) && ((c0 - 9) % 1 == 0)) {
	        h3_8_update_0(h3_7 /* buf name */, h3_8, (c2 - 9) / 1, (c1 - 9) / 1, (c0 - 9) / 1);
	      }
	
	      if ((9 <= c2 && c2 <= 522) && ((c2 - 10) % 1 == 0) && (9 <= c1 && c1 <= 522) && ((c1 - 10) % 1 == 0) && (9 <= c0 && c0 <= 522) && ((c0 - 10) % 1 == 0)) {
	        h3_9_update_0(h3_8 /* buf name */, h3_9, (c2 - 10) / 1, (c1 - 10) / 1, (c0 - 10) / 1);
	      }
	
	      if ((11 <= c2 && c2 <= 522) && ((c2 - 11) % 1 == 0) && (11 <= c1 && c1 <= 522) && ((c1 - 11) % 1 == 0) && (11 <= c0 && c0 <= 522) && ((c0 - 11) % 1 == 0)) {
	        h3_10_update_0(h3_9 /* buf name */, h3_10, (c2 - 11) / 1, (c1 - 11) / 1, (c0 - 11) / 1);
	      }
	
	      if ((11 <= c2 && c2 <= 522) && ((c2 - 11) % 1 == 0) && (11 <= c1 && c1 <= 522) && ((c1 - 11) % 1 == 0) && (11 <= c0 && c0 <= 522) && ((c0 - 11) % 1 == 0)) {
	        heat3d_11_1_update_0(h3_10 /* buf name */, heat3d_11_1, (c2 - 11) / 1, (c1 - 11) / 1, (c0 - 11) / 1);
	      }
	
	    }
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void heat3d_11_1_opt_wrapper(HWStream<hw_uint<32> >& /* get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* get_args num ports = 1 */heat3d_11_1, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    heat3d_11_1_opt(in, heat3d_11_1);
  }
}
#ifdef __VIVADO_SYNTH__
  // { heat3d_11_1_update_0[root = 0, heat3d_11_1_0, heat3d_11_1_1, heat3d_11_1_2] -> heat3d_11_1[0, 0] : 0 <= heat3d_11_1_0 <= 511 and 0 <= heat3d_11_1_1 <= 511 and 0 <= heat3d_11_1_2 <= 511 }
const int heat3d_11_1_update_0_write_pipe0_num_transfers = 134217728;
  // { in_cc_update_0[root = 0, in_cc_0, in_cc_1, in_cc_2] -> in[0, 0] : -11 <= in_cc_0 <= 522 and -11 <= in_cc_1 <= 522 and -11 <= in_cc_2 <= 522 }
const int in_cc_update_0_read_pipe0_num_transfers = 152273304;


extern "C" {

void heat3d_11_1_opt_accel(hw_uint<32>* in_cc_update_0_read_pipe0, hw_uint<32>* heat3d_11_1_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_cc_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = heat3d_11_1_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_cc_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = heat3d_11_1_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > in_cc_update_0_read_pipe0_channel;
  static HWStream<hw_uint<32> > heat3d_11_1_update_0_write_pipe0_channel;

  burst_read<32>(in_cc_update_0_read_pipe0, in_cc_update_0_read_pipe0_channel, in_cc_update_0_read_pipe0_num_transfers*size);

  heat3d_11_1_opt_wrapper(in_cc_update_0_read_pipe0_channel, heat3d_11_1_update_0_write_pipe0_channel, size);

  burst_write<32>(heat3d_11_1_update_0_write_pipe0, heat3d_11_1_update_0_write_pipe0_channel, heat3d_11_1_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void heat3d_11_1_opt_rdai(HWStream<hw_uint<32> >& in_cc_update_0_read_pipe0, HWStream<hw_uint<32> >&  heat3d_11_1_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_cc_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = heat3d_11_1_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  heat3d_11_1_opt(in_cc_update_0_read_pipe0, heat3d_11_1_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

