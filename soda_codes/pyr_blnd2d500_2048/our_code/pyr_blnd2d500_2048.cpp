#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: local_laplacian_filters_compute.h_merged_compute_units.h_merged_compute_units.h
#include "local_laplacian_filters_compute.h_merged_compute_units.h_merged_compute_units.h"

struct gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_to_gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_5164167_74_cache {
	// RAM Box: {[3, 34], [3, 34]}
	// Capacity: 37
	// # of read delays: 37
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36
	fifo<hw_uint<32> , 37> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(36 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_to_gp_in_on_chip_1_buf4_us47_7_cache {
	// RAM Box: {[3, 34], [3, 34]}
	// Capacity: 32
	// # of read delays: 33
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31
	fifo<hw_uint<32> , 32> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(31 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_merged_banks_9_cache {
	// RAM Box: {[0, 34], [0, 34]}
	// Capacity: 73
	// # of read delays: 9
  // 0, 1, 2, 35, 36, 37, 70, 71, 72
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 32> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 32> f11;
	hw_uint<32>  f12;
	hw_uint<32>  f14;
	hw_uint<32>  f16;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_34() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_35() {
		return f6;
	}

	inline hw_uint<32>  peek_36() {
		return f8;
	}

	inline hw_uint<32>  peek_37() {
		return f10;
	}

	inline hw_uint<32>  peek_69() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_70() {
		return f12;
	}

	inline hw_uint<32>  peek_71() {
		return f14;
	}

	inline hw_uint<32>  peek_72() {
		return f16;
	}



	inline void push(const hw_uint<32>  value) {
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
    // cap: 1 reading from capacity: 32
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
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
    // cap: 1 reading from capacity: 32
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
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

struct gp_in_on_chip_1_buf4_cache {
  // Reader addrs...
    // { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4[2gp_in_on_chip_214, 2 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
    // { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4[1 + 2gp_in_on_chip_214, 2 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
    // { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4[2 + 2gp_in_on_chip_214, 2 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
    // { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4[2gp_in_on_chip_214, 1 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
    // { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4[1 + 2gp_in_on_chip_214, 1 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
    // { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4[2 + 2gp_in_on_chip_214, 1 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
    // { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4[2gp_in_on_chip_214, 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
    // { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4[1 + 2gp_in_on_chip_214, 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
    // { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4[2 + 2gp_in_on_chip_214, 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
    // { load_to_gp_in_on_chip_1_buf4_to_gp_5164167[root = 0, gp_in_on_chip_1_buf4_ld166, gp_in_on_chip_1_buf4_ld165] -> gp_in_on_chip_1_buf4[gp_in_on_chip_1_buf4_ld165, gp_in_on_chip_1_buf4_ld166] : 3 <= gp_in_on_chip_1_buf4_ld166 <= 34 and 3 <= gp_in_on_chip_1_buf4_ld165 <= 34 }
    // { us47[root = 0, us_gp_in_on_chip_1_buf445, us_gp_in_on_chip_1_buf446] -> gp_in_on_chip_1_buf4[o0, o1] : 0 <= us_gp_in_on_chip_1_buf445 <= 63 and 0 <= us_gp_in_on_chip_1_buf446 <= 63 and 5 + us_gp_in_on_chip_1_buf446 <= 2o0 <= 6 + us_gp_in_on_chip_1_buf446 and 5 + us_gp_in_on_chip_1_buf445 <= 2o1 <= 6 + us_gp_in_on_chip_1_buf445 }
  // # of banks: 3
  gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_to_gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_5164167_74_cache gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_to_gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_5164167_74;
  gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_to_gp_in_on_chip_1_buf4_us47_7_cache gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_to_gp_in_on_chip_1_buf4_us47_7;
  gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_merged_banks_9_cache gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_merged_banks_9;
};



inline void gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_write(hw_uint<32> & gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97, gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
  gp_in_on_chip_1_buf4.gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_to_gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_5164167_74.push(gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97);
  gp_in_on_chip_1_buf4.gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_to_gp_in_on_chip_1_buf4_us47_7.push(gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97);
  gp_in_on_chip_1_buf4.gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_merged_banks_9.push(gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97);
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_88_select(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_88 read pattern: { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4[2gp_in_on_chip_214, 2 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Read schedule : { gp_in_on_chip_214_merged160[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 3] : 0 <= d1 <= 16 and 0 <= d2 <= 16 }
  // Write schedule: { gp_in_on_chip_16_merged157[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 34 and 0 <= d2 <= 34 }
  auto value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97 = gp_in_on_chip_1_buf4.gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_merged_banks_9.peek_2();
  return value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_89_select(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_89 read pattern: { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4[1 + 2gp_in_on_chip_214, 2 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Read schedule : { gp_in_on_chip_214_merged160[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 3] : 0 <= d1 <= 16 and 0 <= d2 <= 16 }
  // Write schedule: { gp_in_on_chip_16_merged157[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 34 and 0 <= d2 <= 34 }
  auto value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97 = gp_in_on_chip_1_buf4.gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_merged_banks_9.peek_1();
  return value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_90_select(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_90 read pattern: { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4[2 + 2gp_in_on_chip_214, 2 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Read schedule : { gp_in_on_chip_214_merged160[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 3] : 0 <= d1 <= 16 and 0 <= d2 <= 16 }
  // Write schedule: { gp_in_on_chip_16_merged157[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 34 and 0 <= d2 <= 34 }
  auto value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97 = gp_in_on_chip_1_buf4.gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_merged_banks_9.peek_0();
  return value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_91_select(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_91 read pattern: { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4[2gp_in_on_chip_214, 1 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Read schedule : { gp_in_on_chip_214_merged160[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 3] : 0 <= d1 <= 16 and 0 <= d2 <= 16 }
  // Write schedule: { gp_in_on_chip_16_merged157[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 34 and 0 <= d2 <= 34 }
  auto value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97 = gp_in_on_chip_1_buf4.gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_merged_banks_9.peek_37();
  return value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_92_select(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_92 read pattern: { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4[1 + 2gp_in_on_chip_214, 1 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Read schedule : { gp_in_on_chip_214_merged160[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 3] : 0 <= d1 <= 16 and 0 <= d2 <= 16 }
  // Write schedule: { gp_in_on_chip_16_merged157[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 34 and 0 <= d2 <= 34 }
  auto value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97 = gp_in_on_chip_1_buf4.gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_merged_banks_9.peek_36();
  return value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_93_select(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_93 read pattern: { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4[2 + 2gp_in_on_chip_214, 1 + 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Read schedule : { gp_in_on_chip_214_merged160[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 3] : 0 <= d1 <= 16 and 0 <= d2 <= 16 }
  // Write schedule: { gp_in_on_chip_16_merged157[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 34 and 0 <= d2 <= 34 }
  auto value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97 = gp_in_on_chip_1_buf4.gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_merged_banks_9.peek_35();
  return value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_94_select(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_94 read pattern: { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4[2gp_in_on_chip_214, 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Read schedule : { gp_in_on_chip_214_merged160[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 3] : 0 <= d1 <= 16 and 0 <= d2 <= 16 }
  // Write schedule: { gp_in_on_chip_16_merged157[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 34 and 0 <= d2 <= 34 }
  auto value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97 = gp_in_on_chip_1_buf4.gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_merged_banks_9.peek_72();
  return value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_95_select(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_95 read pattern: { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4[1 + 2gp_in_on_chip_214, 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Read schedule : { gp_in_on_chip_214_merged160[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 3] : 0 <= d1 <= 16 and 0 <= d2 <= 16 }
  // Write schedule: { gp_in_on_chip_16_merged157[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 34 and 0 <= d2 <= 34 }
  auto value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97 = gp_in_on_chip_1_buf4.gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_merged_banks_9.peek_71();
  return value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_96_select(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_96 read pattern: { gp_in_on_chip_214_merged160[root = 0, gp_in_on_chip_213, gp_in_on_chip_214] -> gp_in_on_chip_1_buf4[2 + 2gp_in_on_chip_214, 2gp_in_on_chip_213] : 0 <= gp_in_on_chip_213 <= 16 and 0 <= gp_in_on_chip_214 <= 16 }
  // Read schedule : { gp_in_on_chip_214_merged160[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 3] : 0 <= d1 <= 16 and 0 <= d2 <= 16 }
  // Write schedule: { gp_in_on_chip_16_merged157[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 34 and 0 <= d2 <= 34 }
  auto value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97 = gp_in_on_chip_1_buf4.gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_merged_banks_9.peek_70();
  return value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_5164167_74_select(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_1_buf4_ld166, int gp_in_on_chip_1_buf4_ld165, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_5164167_74 read pattern: { load_to_gp_in_on_chip_1_buf4_to_gp_5164167[root = 0, gp_in_on_chip_1_buf4_ld166, gp_in_on_chip_1_buf4_ld165] -> gp_in_on_chip_1_buf4[gp_in_on_chip_1_buf4_ld165, gp_in_on_chip_1_buf4_ld166] : 3 <= gp_in_on_chip_1_buf4_ld166 <= 34 and 3 <= gp_in_on_chip_1_buf4_ld165 <= 34 }
  // Read schedule : { load_to_gp_in_on_chip_1_buf4_to_gp_5164167[d0 = 0, d1, d2] -> [0, 4 + 2d1, 4 + 2d2, 5] : 3 <= d1 <= 34 and 3 <= d2 <= 34 }
  // Write schedule: { gp_in_on_chip_16_merged157[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 34 and 0 <= d2 <= 34 }
  auto value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97 = gp_in_on_chip_1_buf4.gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_to_gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_5164167_74.peek(/* one reader or all rams */ (33 - gp_in_on_chip_1_buf4_ld165 >= 0 && 33 - gp_in_on_chip_1_buf4_ld166 >= 0) ? (36) : (-34 + gp_in_on_chip_1_buf4_ld165 == 0 && 33 - gp_in_on_chip_1_buf4_ld166 >= 0) ? (35) : (-34 + gp_in_on_chip_1_buf4_ld166 == 0 && 33 - gp_in_on_chip_1_buf4_ld165 >= 0) ? ((34 - gp_in_on_chip_1_buf4_ld165)) : 0);
  return value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_us47_7_select(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int us_gp_in_on_chip_1_buf445, int us_gp_in_on_chip_1_buf446, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_us47_7 read pattern: { us47[root = 0, us_gp_in_on_chip_1_buf445, us_gp_in_on_chip_1_buf446] -> gp_in_on_chip_1_buf4[o0, o1] : 0 <= us_gp_in_on_chip_1_buf445 <= 63 and 0 <= us_gp_in_on_chip_1_buf446 <= 63 and 5 + us_gp_in_on_chip_1_buf446 <= 2o0 <= 6 + us_gp_in_on_chip_1_buf446 and 5 + us_gp_in_on_chip_1_buf445 <= 2o1 <= 6 + us_gp_in_on_chip_1_buf445 }
  // Read schedule : { us47[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 10] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { gp_in_on_chip_16_merged157[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 34 and 0 <= d2 <= 34 }
  auto value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97 = gp_in_on_chip_1_buf4.gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_to_gp_in_on_chip_1_buf4_us47_7.peek(/* one reader or all rams */ ((-1 - us_gp_in_on_chip_1_buf445) % 2 == 0 && 61 - us_gp_in_on_chip_1_buf446 >= 0) ? ((31 - floord(2*us_gp_in_on_chip_1_buf446, 4))) : 0);
  return value_gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97;
  return 0;
}

// # of bundles = 4
// gp_in_on_chip_16_merged157_write
//	gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97
inline void gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_write_bundle_write(hw_uint<32>& gp_in_on_chip_16_merged157_write, gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_res = gp_in_on_chip_16_merged157_write.extract<0, 31>();
	gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_write(gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_97_res, gp_in_on_chip_1_buf4, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
}

// gp_in_on_chip_214_merged160_read
//	gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_88
//	gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_89
//	gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_90
//	gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_91
//	gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_92
//	gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_93
//	gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_94
//	gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_95
//	gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_96
inline hw_uint<288> gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_read_bundle_read(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
  // # of ports in bundle: 9
    // gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_88
    // gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_89
    // gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_90
    // gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_91
    // gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_92
    // gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_93
    // gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_94
    // gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_95
    // gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_96

	hw_uint<288> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_88_res = gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_88_select(gp_in_on_chip_1_buf4, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<0, 288>(result, gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_88_res);
	hw_uint<32>  gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_89_res = gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_89_select(gp_in_on_chip_1_buf4, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<32, 288>(result, gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_89_res);
	hw_uint<32>  gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_90_res = gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_90_select(gp_in_on_chip_1_buf4, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<64, 288>(result, gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_90_res);
	hw_uint<32>  gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_91_res = gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_91_select(gp_in_on_chip_1_buf4, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<96, 288>(result, gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_91_res);
	hw_uint<32>  gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_92_res = gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_92_select(gp_in_on_chip_1_buf4, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<128, 288>(result, gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_92_res);
	hw_uint<32>  gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_93_res = gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_93_select(gp_in_on_chip_1_buf4, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<160, 288>(result, gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_93_res);
	hw_uint<32>  gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_94_res = gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_94_select(gp_in_on_chip_1_buf4, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<192, 288>(result, gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_94_res);
	hw_uint<32>  gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_95_res = gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_95_select(gp_in_on_chip_1_buf4, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<224, 288>(result, gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_95_res);
	hw_uint<32>  gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_96_res = gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_96_select(gp_in_on_chip_1_buf4, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
	set_at<256, 288>(result, gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_96_res);
	return result;
}

// load_to_gp_in_on_chip_1_buf4_to_gp_5164167_read
//	gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_5164167_74
inline hw_uint<32> gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_5164167_read_bundle_read(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int gp_in_on_chip_1_buf4_ld166, int gp_in_on_chip_1_buf4_ld165, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_5164167_74

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_5164167_74_res = gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_5164167_74_select(gp_in_on_chip_1_buf4, root, gp_in_on_chip_1_buf4_ld166, gp_in_on_chip_1_buf4_ld165, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_5164167_74_res);
	return result;
}

// us47_read
//	gp_in_on_chip_1_buf4_us47_7
inline hw_uint<32> gp_in_on_chip_1_buf4_us47_read_bundle_read(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int root, int us_gp_in_on_chip_1_buf445, int us_gp_in_on_chip_1_buf446, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_us47_7

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_us47_7_res = gp_in_on_chip_1_buf4_us47_7_select(gp_in_on_chip_1_buf4, root, us_gp_in_on_chip_1_buf445, us_gp_in_on_chip_1_buf446, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_us47_7_res);
	return result;
}

struct gp_in_on_chip_1_buf4_FIFO_buf168_load_to_gp_in_on_chip_1_buf4_FIFO_buf168171_75_to_gp_in_on_chip_1_buf4_FIFO_buf168_diff43_111_cache {
	// RAM Box: {[3, 34], [3, 34]}
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

struct gp_in_on_chip_1_buf4_FIFO_buf168_cache {
  // Reader addrs...
    // { diff43[root = 0, lp_in_on_chip_141, lp_in_on_chip_142] -> gp_in_on_chip_1_buf4_FIFO_buf168[3 + lp_in_on_chip_142, 3 + lp_in_on_chip_141] : 0 <= lp_in_on_chip_141 <= 31 and 0 <= lp_in_on_chip_142 <= 31 }
  // # of banks: 1
  gp_in_on_chip_1_buf4_FIFO_buf168_load_to_gp_in_on_chip_1_buf4_FIFO_buf168171_75_to_gp_in_on_chip_1_buf4_FIFO_buf168_diff43_111_cache gp_in_on_chip_1_buf4_FIFO_buf168_load_to_gp_in_on_chip_1_buf4_FIFO_buf168171_75_to_gp_in_on_chip_1_buf4_FIFO_buf168_diff43_111;
};



inline void gp_in_on_chip_1_buf4_FIFO_buf168_load_to_gp_in_on_chip_1_buf4_FIFO_buf168171_75_write(hw_uint<32> & gp_in_on_chip_1_buf4_FIFO_buf168_load_to_gp_in_on_chip_1_buf4_FIFO_buf168171_75, gp_in_on_chip_1_buf4_FIFO_buf168_cache& gp_in_on_chip_1_buf4_FIFO_buf168, int root, int gp_in_on_chip_1_buf4_to_gp_5164_ld170, int gp_in_on_chip_1_buf4_to_gp_5164_ld169, int dynamic_address) {
  gp_in_on_chip_1_buf4_FIFO_buf168.gp_in_on_chip_1_buf4_FIFO_buf168_load_to_gp_in_on_chip_1_buf4_FIFO_buf168171_75_to_gp_in_on_chip_1_buf4_FIFO_buf168_diff43_111.push(gp_in_on_chip_1_buf4_FIFO_buf168_load_to_gp_in_on_chip_1_buf4_FIFO_buf168171_75);
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf168_diff43_111_select(gp_in_on_chip_1_buf4_FIFO_buf168_cache& gp_in_on_chip_1_buf4_FIFO_buf168, int root, int lp_in_on_chip_141, int lp_in_on_chip_142, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_FIFO_buf168_diff43_111 read pattern: { diff43[root = 0, lp_in_on_chip_141, lp_in_on_chip_142] -> gp_in_on_chip_1_buf4_FIFO_buf168[3 + lp_in_on_chip_142, 3 + lp_in_on_chip_141] : 0 <= lp_in_on_chip_141 <= 31 and 0 <= lp_in_on_chip_142 <= 31 }
  // Read schedule : { diff43[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 24] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_FIFO_buf168171[d0 = 0, d1, d2] -> [0, 4 + 2d1, 4 + 2d2, 7] : 3 <= d1 <= 34 and 3 <= d2 <= 34 }
  auto value_gp_in_on_chip_1_buf4_FIFO_buf168_load_to_gp_in_on_chip_1_buf4_FIFO_buf168171_75 = gp_in_on_chip_1_buf4_FIFO_buf168.gp_in_on_chip_1_buf4_FIFO_buf168_load_to_gp_in_on_chip_1_buf4_FIFO_buf168171_75_to_gp_in_on_chip_1_buf4_FIFO_buf168_diff43_111.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_1_buf4_FIFO_buf168_load_to_gp_in_on_chip_1_buf4_FIFO_buf168171_75;
  return 0;
}

// # of bundles = 2
// diff43_read
//	gp_in_on_chip_1_buf4_FIFO_buf168_diff43_111
inline hw_uint<32> gp_in_on_chip_1_buf4_FIFO_buf168_diff43_read_bundle_read(gp_in_on_chip_1_buf4_FIFO_buf168_cache& gp_in_on_chip_1_buf4_FIFO_buf168, int root, int lp_in_on_chip_141, int lp_in_on_chip_142, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_FIFO_buf168_diff43_111

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf168_diff43_111_res = gp_in_on_chip_1_buf4_FIFO_buf168_diff43_111_select(gp_in_on_chip_1_buf4_FIFO_buf168, root, lp_in_on_chip_141, lp_in_on_chip_142, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_FIFO_buf168_diff43_111_res);
	return result;
}

// load_to_gp_in_on_chip_1_buf4_FIFO_buf168171_write
//	gp_in_on_chip_1_buf4_FIFO_buf168_load_to_gp_in_on_chip_1_buf4_FIFO_buf168171_75
inline void gp_in_on_chip_1_buf4_FIFO_buf168_load_to_gp_in_on_chip_1_buf4_FIFO_buf168171_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_1_buf4_FIFO_buf168171_write, gp_in_on_chip_1_buf4_FIFO_buf168_cache& gp_in_on_chip_1_buf4_FIFO_buf168, int root, int gp_in_on_chip_1_buf4_to_gp_5164_ld170, int gp_in_on_chip_1_buf4_to_gp_5164_ld169, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_1_buf4_FIFO_buf168_load_to_gp_in_on_chip_1_buf4_FIFO_buf168171_75_res = load_to_gp_in_on_chip_1_buf4_FIFO_buf168171_write.extract<0, 31>();
	gp_in_on_chip_1_buf4_FIFO_buf168_load_to_gp_in_on_chip_1_buf4_FIFO_buf168171_75_write(gp_in_on_chip_1_buf4_FIFO_buf168_load_to_gp_in_on_chip_1_buf4_FIFO_buf168171_75_res, gp_in_on_chip_1_buf4_FIFO_buf168, root, gp_in_on_chip_1_buf4_to_gp_5164_ld170, gp_in_on_chip_1_buf4_to_gp_5164_ld169, dynamic_address);
}

struct gp_in_on_chip_1_buf4_us44_us47_6_to_gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3172175_70_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct gp_in_on_chip_1_buf4_us44_cache {
  // Reader addrs...
    // { load_to_gp_in_on_chip_1_buf4_us44_to_gp_3172175[root = 0, gp_in_on_chip_1_buf4_us44_ld174, gp_in_on_chip_1_buf4_us44_ld173] -> gp_in_on_chip_1_buf4_us44[gp_in_on_chip_1_buf4_us44_ld173, gp_in_on_chip_1_buf4_us44_ld174] : 0 <= gp_in_on_chip_1_buf4_us44_ld174 <= 63 and 0 <= gp_in_on_chip_1_buf4_us44_ld173 <= 63 }
  // # of banks: 1
  gp_in_on_chip_1_buf4_us44_us47_6_to_gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3172175_70_cache gp_in_on_chip_1_buf4_us44_us47_6_to_gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3172175_70;
};



inline void gp_in_on_chip_1_buf4_us44_us47_6_write(hw_uint<32> & gp_in_on_chip_1_buf4_us44_us47_6, gp_in_on_chip_1_buf4_us44_cache& gp_in_on_chip_1_buf4_us44, int root, int us_gp_in_on_chip_1_buf445, int us_gp_in_on_chip_1_buf446, int dynamic_address) {
  gp_in_on_chip_1_buf4_us44.gp_in_on_chip_1_buf4_us44_us47_6_to_gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3172175_70.push(gp_in_on_chip_1_buf4_us44_us47_6);
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3172175_70_select(gp_in_on_chip_1_buf4_us44_cache& gp_in_on_chip_1_buf4_us44, int root, int gp_in_on_chip_1_buf4_us44_ld174, int gp_in_on_chip_1_buf4_us44_ld173, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3172175_70 read pattern: { load_to_gp_in_on_chip_1_buf4_us44_to_gp_3172175[root = 0, gp_in_on_chip_1_buf4_us44_ld174, gp_in_on_chip_1_buf4_us44_ld173] -> gp_in_on_chip_1_buf4_us44[gp_in_on_chip_1_buf4_us44_ld173, gp_in_on_chip_1_buf4_us44_ld174] : 0 <= gp_in_on_chip_1_buf4_us44_ld174 <= 63 and 0 <= gp_in_on_chip_1_buf4_us44_ld173 <= 63 }
  // Read schedule : { load_to_gp_in_on_chip_1_buf4_us44_to_gp_3172175[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 11] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { us47[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 10] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_gp_in_on_chip_1_buf4_us44_us47_6 = gp_in_on_chip_1_buf4_us44.gp_in_on_chip_1_buf4_us44_us47_6_to_gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3172175_70.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_1_buf4_us44_us47_6;
  return 0;
}

// # of bundles = 2
// load_to_gp_in_on_chip_1_buf4_us44_to_gp_3172175_read
//	gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3172175_70
inline hw_uint<32> gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3172175_read_bundle_read(gp_in_on_chip_1_buf4_us44_cache& gp_in_on_chip_1_buf4_us44, int root, int gp_in_on_chip_1_buf4_us44_ld174, int gp_in_on_chip_1_buf4_us44_ld173, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3172175_70

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3172175_70_res = gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3172175_70_select(gp_in_on_chip_1_buf4_us44, root, gp_in_on_chip_1_buf4_us44_ld174, gp_in_on_chip_1_buf4_us44_ld173, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3172175_70_res);
	return result;
}

// us47_write
//	gp_in_on_chip_1_buf4_us44_us47_6
inline void gp_in_on_chip_1_buf4_us44_us47_write_bundle_write(hw_uint<32>& us47_write, gp_in_on_chip_1_buf4_us44_cache& gp_in_on_chip_1_buf4_us44, int root, int us_gp_in_on_chip_1_buf445, int us_gp_in_on_chip_1_buf446, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_1_buf4_us44_us47_6_res = us47_write.extract<0, 31>();
	gp_in_on_chip_1_buf4_us44_us47_6_write(gp_in_on_chip_1_buf4_us44_us47_6_res, gp_in_on_chip_1_buf4_us44, root, us_gp_in_on_chip_1_buf445, us_gp_in_on_chip_1_buf446, dynamic_address);
}

struct gp_in_on_chip_1_buf4_us44_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176179_71_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176_diff51_109_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct gp_in_on_chip_1_buf4_us44_FIFO_buf176_cache {
  // Reader addrs...
    // { diff51[root = 0, lp_in_on_chip_049, lp_in_on_chip_050] -> gp_in_on_chip_1_buf4_us44_FIFO_buf176[lp_in_on_chip_050, lp_in_on_chip_049] : 0 <= lp_in_on_chip_049 <= 63 and 0 <= lp_in_on_chip_050 <= 63 }
  // # of banks: 1
  gp_in_on_chip_1_buf4_us44_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176179_71_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176_diff51_109_cache gp_in_on_chip_1_buf4_us44_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176179_71_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176_diff51_109;
};



inline void gp_in_on_chip_1_buf4_us44_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176179_71_write(hw_uint<32> & gp_in_on_chip_1_buf4_us44_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176179_71, gp_in_on_chip_1_buf4_us44_FIFO_buf176_cache& gp_in_on_chip_1_buf4_us44_FIFO_buf176, int root, int gp_in_on_chip_1_buf4_us44_to_gp_3172_ld178, int gp_in_on_chip_1_buf4_us44_to_gp_3172_ld177, int dynamic_address) {
  gp_in_on_chip_1_buf4_us44_FIFO_buf176.gp_in_on_chip_1_buf4_us44_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176179_71_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176_diff51_109.push(gp_in_on_chip_1_buf4_us44_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176179_71);
}

inline hw_uint<32>  gp_in_on_chip_1_buf4_us44_FIFO_buf176_diff51_109_select(gp_in_on_chip_1_buf4_us44_FIFO_buf176_cache& gp_in_on_chip_1_buf4_us44_FIFO_buf176, int root, int lp_in_on_chip_049, int lp_in_on_chip_050, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_1_buf4_us44_FIFO_buf176_diff51_109 read pattern: { diff51[root = 0, lp_in_on_chip_049, lp_in_on_chip_050] -> gp_in_on_chip_1_buf4_us44_FIFO_buf176[lp_in_on_chip_050, lp_in_on_chip_049] : 0 <= lp_in_on_chip_049 <= 63 and 0 <= lp_in_on_chip_050 <= 63 }
  // Read schedule : { diff51[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 19] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176179[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 15] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_gp_in_on_chip_1_buf4_us44_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176179_71 = gp_in_on_chip_1_buf4_us44_FIFO_buf176.gp_in_on_chip_1_buf4_us44_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176179_71_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176_diff51_109.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_1_buf4_us44_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176179_71;
  return 0;
}

// # of bundles = 2
// diff51_read
//	gp_in_on_chip_1_buf4_us44_FIFO_buf176_diff51_109
inline hw_uint<32> gp_in_on_chip_1_buf4_us44_FIFO_buf176_diff51_read_bundle_read(gp_in_on_chip_1_buf4_us44_FIFO_buf176_cache& gp_in_on_chip_1_buf4_us44_FIFO_buf176, int root, int lp_in_on_chip_049, int lp_in_on_chip_050, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_1_buf4_us44_FIFO_buf176_diff51_109

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_1_buf4_us44_FIFO_buf176_diff51_109_res = gp_in_on_chip_1_buf4_us44_FIFO_buf176_diff51_109_select(gp_in_on_chip_1_buf4_us44_FIFO_buf176, root, lp_in_on_chip_049, lp_in_on_chip_050, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_1_buf4_us44_FIFO_buf176_diff51_109_res);
	return result;
}

// load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176179_write
//	gp_in_on_chip_1_buf4_us44_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176179_71
inline void gp_in_on_chip_1_buf4_us44_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176179_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176179_write, gp_in_on_chip_1_buf4_us44_FIFO_buf176_cache& gp_in_on_chip_1_buf4_us44_FIFO_buf176, int root, int gp_in_on_chip_1_buf4_us44_to_gp_3172_ld178, int gp_in_on_chip_1_buf4_us44_to_gp_3172_ld177, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_1_buf4_us44_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176179_71_res = load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176179_write.extract<0, 31>();
	gp_in_on_chip_1_buf4_us44_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176179_71_write(gp_in_on_chip_1_buf4_us44_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176179_71_res, gp_in_on_chip_1_buf4_us44_FIFO_buf176, root, gp_in_on_chip_1_buf4_us44_to_gp_3172_ld178, gp_in_on_chip_1_buf4_us44_to_gp_3172_ld177, dynamic_address);
}

struct gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87_to_gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2180183_64_cache {
	// RAM Box: {[0, 16], [0, 16]}
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

struct gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87_to_gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_62_cache {
	// RAM Box: {[1, 16], [1, 16]}
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

struct gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87_to_gp_in_on_chip_2_buf12_us39_9_cache {
	// RAM Box: {[1, 16], [1, 16]}
	// Capacity: 16
	// # of read delays: 17
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15
	fifo<hw_uint<32> , 16> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(15 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_2_buf12_cache {
  // Reader addrs...
    // { load_to_gp_in_on_chip_2_buf12_to_gp_2180183[root = 0, gp_in_on_chip_2_buf12_ld182, gp_in_on_chip_2_buf12_ld181] -> gp_in_on_chip_2_buf12[gp_in_on_chip_2_buf12_ld181, gp_in_on_chip_2_buf12_ld182] : 0 <= gp_in_on_chip_2_buf12_ld182 <= 16 and 0 <= gp_in_on_chip_2_buf12_ld181 <= 16 }
    // { load_to_gp_in_on_chip_2_buf12_to_gp_7188191[root = 0, gp_in_on_chip_2_buf12_ld190, gp_in_on_chip_2_buf12_ld189] -> gp_in_on_chip_2_buf12[gp_in_on_chip_2_buf12_ld189, gp_in_on_chip_2_buf12_ld190] : 0 < gp_in_on_chip_2_buf12_ld190 <= 16 and 0 < gp_in_on_chip_2_buf12_ld189 <= 16 }
    // { us39[root = 0, us_gp_in_on_chip_2_buf1237, us_gp_in_on_chip_2_buf1238] -> gp_in_on_chip_2_buf12[o0, o1] : 0 <= us_gp_in_on_chip_2_buf1237 <= 31 and 0 <= us_gp_in_on_chip_2_buf1238 <= 31 and us_gp_in_on_chip_2_buf1238 < 2o0 <= 2 + us_gp_in_on_chip_2_buf1238 and us_gp_in_on_chip_2_buf1237 < 2o1 <= 2 + us_gp_in_on_chip_2_buf1237 }
  // # of banks: 3
  gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87_to_gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2180183_64_cache gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87_to_gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2180183_64;
  gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87_to_gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_62_cache gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87_to_gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_62;
  gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87_to_gp_in_on_chip_2_buf12_us39_9_cache gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87_to_gp_in_on_chip_2_buf12_us39_9;
};



inline void gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87_write(hw_uint<32> & gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87, gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
  gp_in_on_chip_2_buf12.gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87_to_gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2180183_64.push(gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87);
  gp_in_on_chip_2_buf12.gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87_to_gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_62.push(gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87);
  gp_in_on_chip_2_buf12.gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87_to_gp_in_on_chip_2_buf12_us39_9.push(gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87);
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2180183_64_select(gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, int root, int gp_in_on_chip_2_buf12_ld182, int gp_in_on_chip_2_buf12_ld181, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2180183_64 read pattern: { load_to_gp_in_on_chip_2_buf12_to_gp_2180183[root = 0, gp_in_on_chip_2_buf12_ld182, gp_in_on_chip_2_buf12_ld181] -> gp_in_on_chip_2_buf12[gp_in_on_chip_2_buf12_ld181, gp_in_on_chip_2_buf12_ld182] : 0 <= gp_in_on_chip_2_buf12_ld182 <= 16 and 0 <= gp_in_on_chip_2_buf12_ld181 <= 16 }
  // Read schedule : { load_to_gp_in_on_chip_2_buf12_to_gp_2180183[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 12] : 0 <= d1 <= 16 and 0 <= d2 <= 16 }
  // Write schedule: { gp_in_on_chip_214_merged160[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 3] : 0 <= d1 <= 16 and 0 <= d2 <= 16 }
  auto value_gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87 = gp_in_on_chip_2_buf12.gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87_to_gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2180183_64.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_62_select(gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, int root, int gp_in_on_chip_2_buf12_ld190, int gp_in_on_chip_2_buf12_ld189, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_62 read pattern: { load_to_gp_in_on_chip_2_buf12_to_gp_7188191[root = 0, gp_in_on_chip_2_buf12_ld190, gp_in_on_chip_2_buf12_ld189] -> gp_in_on_chip_2_buf12[gp_in_on_chip_2_buf12_ld189, gp_in_on_chip_2_buf12_ld190] : 0 < gp_in_on_chip_2_buf12_ld190 <= 16 and 0 < gp_in_on_chip_2_buf12_ld189 <= 16 }
  // Read schedule : { load_to_gp_in_on_chip_2_buf12_to_gp_7188191[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 4] : 0 < d1 <= 16 and 0 < d2 <= 16 }
  // Write schedule: { gp_in_on_chip_214_merged160[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 3] : 0 <= d1 <= 16 and 0 <= d2 <= 16 }
  auto value_gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87 = gp_in_on_chip_2_buf12.gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87_to_gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_62.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_us39_9_select(gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, int root, int us_gp_in_on_chip_2_buf1237, int us_gp_in_on_chip_2_buf1238, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_us39_9 read pattern: { us39[root = 0, us_gp_in_on_chip_2_buf1237, us_gp_in_on_chip_2_buf1238] -> gp_in_on_chip_2_buf12[o0, o1] : 0 <= us_gp_in_on_chip_2_buf1237 <= 31 and 0 <= us_gp_in_on_chip_2_buf1238 <= 31 and us_gp_in_on_chip_2_buf1238 < 2o0 <= 2 + us_gp_in_on_chip_2_buf1238 and us_gp_in_on_chip_2_buf1237 < 2o1 <= 2 + us_gp_in_on_chip_2_buf1237 }
  // Read schedule : { us39[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 9] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  // Write schedule: { gp_in_on_chip_214_merged160[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 3] : 0 <= d1 <= 16 and 0 <= d2 <= 16 }
  auto value_gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87 = gp_in_on_chip_2_buf12.gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87_to_gp_in_on_chip_2_buf12_us39_9.peek(/* one reader or all rams */ ((-1 - us_gp_in_on_chip_2_buf1237) % 2 == 0 && 29 - us_gp_in_on_chip_2_buf1238 >= 0) ? ((15 - floord(2*us_gp_in_on_chip_2_buf1238, 4))) : 0);
  return value_gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87;
  return 0;
}

// # of bundles = 4
// gp_in_on_chip_214_merged160_write
//	gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87
inline void gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_write_bundle_write(hw_uint<32>& gp_in_on_chip_214_merged160_write, gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, int root, int gp_in_on_chip_213, int gp_in_on_chip_214, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87_res = gp_in_on_chip_214_merged160_write.extract<0, 31>();
	gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87_write(gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_87_res, gp_in_on_chip_2_buf12, root, gp_in_on_chip_213, gp_in_on_chip_214, dynamic_address);
}

// load_to_gp_in_on_chip_2_buf12_to_gp_2180183_read
//	gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2180183_64
inline hw_uint<32> gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2180183_read_bundle_read(gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, int root, int gp_in_on_chip_2_buf12_ld182, int gp_in_on_chip_2_buf12_ld181, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2180183_64

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2180183_64_res = gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2180183_64_select(gp_in_on_chip_2_buf12, root, gp_in_on_chip_2_buf12_ld182, gp_in_on_chip_2_buf12_ld181, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2180183_64_res);
	return result;
}

// load_to_gp_in_on_chip_2_buf12_to_gp_7188191_read
//	gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_62
inline hw_uint<32> gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_read_bundle_read(gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, int root, int gp_in_on_chip_2_buf12_ld190, int gp_in_on_chip_2_buf12_ld189, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_62

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_62_res = gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_62_select(gp_in_on_chip_2_buf12, root, gp_in_on_chip_2_buf12_ld190, gp_in_on_chip_2_buf12_ld189, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_62_res);
	return result;
}

// us39_read
//	gp_in_on_chip_2_buf12_us39_9
inline hw_uint<32> gp_in_on_chip_2_buf12_us39_read_bundle_read(gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, int root, int us_gp_in_on_chip_2_buf1237, int us_gp_in_on_chip_2_buf1238, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_2_buf12_us39_9

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_2_buf12_us39_9_res = gp_in_on_chip_2_buf12_us39_9_select(gp_in_on_chip_2_buf12, root, us_gp_in_on_chip_2_buf1237, us_gp_in_on_chip_2_buf1238, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_2_buf12_us39_9_res);
	return result;
}

struct gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67_merged_banks_9_cache {
	// RAM Box: {[0, 16], [0, 16]}
	// Capacity: 37
	// # of read delays: 9
  // 0, 1, 2, 17, 18, 19, 34, 35, 36
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 14> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 14> f11;
	hw_uint<32>  f12;
	hw_uint<32>  f14;
	hw_uint<32>  f16;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_16() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_17() {
		return f6;
	}

	inline hw_uint<32>  peek_18() {
		return f8;
	}

	inline hw_uint<32>  peek_19() {
		return f10;
	}

	inline hw_uint<32>  peek_33() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_34() {
		return f12;
	}

	inline hw_uint<32>  peek_35() {
		return f14;
	}

	inline hw_uint<32>  peek_36() {
		return f16;
	}



	inline void push(const hw_uint<32>  value) {
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
    // cap: 1 reading from capacity: 14
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 14 reading from capacity: 1
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
    // cap: 1 reading from capacity: 14
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 14 reading from capacity: 1
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

struct gp_in_on_chip_2_buf12_FIFO_buf184_cache {
  // Reader addrs...
    // { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf184[2gp_in_on_chip_322, 2 + 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
    // { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf184[1 + 2gp_in_on_chip_322, 2 + 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
    // { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf184[2 + 2gp_in_on_chip_322, 2 + 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
    // { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf184[2gp_in_on_chip_322, 1 + 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
    // { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf184[1 + 2gp_in_on_chip_322, 1 + 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
    // { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf184[2 + 2gp_in_on_chip_322, 1 + 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
    // { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf184[2gp_in_on_chip_322, 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
    // { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf184[1 + 2gp_in_on_chip_322, 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
    // { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf184[2 + 2gp_in_on_chip_322, 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // # of banks: 1
  gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67_merged_banks_9_cache gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67_merged_banks_9;
};



inline void gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67_write(hw_uint<32> & gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67, gp_in_on_chip_2_buf12_FIFO_buf184_cache& gp_in_on_chip_2_buf12_FIFO_buf184, int root, int gp_in_on_chip_2_buf12_to_gp_2180_ld186, int gp_in_on_chip_2_buf12_to_gp_2180_ld185, int dynamic_address) {
  gp_in_on_chip_2_buf12_FIFO_buf184.gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67_merged_banks_9.push(gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67);
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_78_select(gp_in_on_chip_2_buf12_FIFO_buf184_cache& gp_in_on_chip_2_buf12_FIFO_buf184, int root, int gp_in_on_chip_321, int gp_in_on_chip_322, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_78 read pattern: { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf184[2gp_in_on_chip_322, 2 + 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Read schedule : { gp_in_on_chip_322_merged163[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 16] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_FIFO_buf184187[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 14] : 0 <= d1 <= 16 and 0 <= d2 <= 16 }
  auto value_gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67 = gp_in_on_chip_2_buf12_FIFO_buf184.gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67_merged_banks_9.peek_2();
  return value_gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_79_select(gp_in_on_chip_2_buf12_FIFO_buf184_cache& gp_in_on_chip_2_buf12_FIFO_buf184, int root, int gp_in_on_chip_321, int gp_in_on_chip_322, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_79 read pattern: { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf184[1 + 2gp_in_on_chip_322, 2 + 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Read schedule : { gp_in_on_chip_322_merged163[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 16] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_FIFO_buf184187[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 14] : 0 <= d1 <= 16 and 0 <= d2 <= 16 }
  auto value_gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67 = gp_in_on_chip_2_buf12_FIFO_buf184.gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67_merged_banks_9.peek_1();
  return value_gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_80_select(gp_in_on_chip_2_buf12_FIFO_buf184_cache& gp_in_on_chip_2_buf12_FIFO_buf184, int root, int gp_in_on_chip_321, int gp_in_on_chip_322, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_80 read pattern: { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf184[2 + 2gp_in_on_chip_322, 2 + 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Read schedule : { gp_in_on_chip_322_merged163[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 16] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_FIFO_buf184187[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 14] : 0 <= d1 <= 16 and 0 <= d2 <= 16 }
  auto value_gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67 = gp_in_on_chip_2_buf12_FIFO_buf184.gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67_merged_banks_9.peek_0();
  return value_gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_81_select(gp_in_on_chip_2_buf12_FIFO_buf184_cache& gp_in_on_chip_2_buf12_FIFO_buf184, int root, int gp_in_on_chip_321, int gp_in_on_chip_322, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_81 read pattern: { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf184[2gp_in_on_chip_322, 1 + 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Read schedule : { gp_in_on_chip_322_merged163[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 16] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_FIFO_buf184187[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 14] : 0 <= d1 <= 16 and 0 <= d2 <= 16 }
  auto value_gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67 = gp_in_on_chip_2_buf12_FIFO_buf184.gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67_merged_banks_9.peek_19();
  return value_gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_82_select(gp_in_on_chip_2_buf12_FIFO_buf184_cache& gp_in_on_chip_2_buf12_FIFO_buf184, int root, int gp_in_on_chip_321, int gp_in_on_chip_322, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_82 read pattern: { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf184[1 + 2gp_in_on_chip_322, 1 + 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Read schedule : { gp_in_on_chip_322_merged163[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 16] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_FIFO_buf184187[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 14] : 0 <= d1 <= 16 and 0 <= d2 <= 16 }
  auto value_gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67 = gp_in_on_chip_2_buf12_FIFO_buf184.gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67_merged_banks_9.peek_18();
  return value_gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_83_select(gp_in_on_chip_2_buf12_FIFO_buf184_cache& gp_in_on_chip_2_buf12_FIFO_buf184, int root, int gp_in_on_chip_321, int gp_in_on_chip_322, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_83 read pattern: { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf184[2 + 2gp_in_on_chip_322, 1 + 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Read schedule : { gp_in_on_chip_322_merged163[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 16] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_FIFO_buf184187[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 14] : 0 <= d1 <= 16 and 0 <= d2 <= 16 }
  auto value_gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67 = gp_in_on_chip_2_buf12_FIFO_buf184.gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67_merged_banks_9.peek_17();
  return value_gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_84_select(gp_in_on_chip_2_buf12_FIFO_buf184_cache& gp_in_on_chip_2_buf12_FIFO_buf184, int root, int gp_in_on_chip_321, int gp_in_on_chip_322, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_84 read pattern: { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf184[2gp_in_on_chip_322, 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Read schedule : { gp_in_on_chip_322_merged163[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 16] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_FIFO_buf184187[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 14] : 0 <= d1 <= 16 and 0 <= d2 <= 16 }
  auto value_gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67 = gp_in_on_chip_2_buf12_FIFO_buf184.gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67_merged_banks_9.peek_36();
  return value_gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_85_select(gp_in_on_chip_2_buf12_FIFO_buf184_cache& gp_in_on_chip_2_buf12_FIFO_buf184, int root, int gp_in_on_chip_321, int gp_in_on_chip_322, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_85 read pattern: { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf184[1 + 2gp_in_on_chip_322, 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Read schedule : { gp_in_on_chip_322_merged163[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 16] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_FIFO_buf184187[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 14] : 0 <= d1 <= 16 and 0 <= d2 <= 16 }
  auto value_gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67 = gp_in_on_chip_2_buf12_FIFO_buf184.gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67_merged_banks_9.peek_35();
  return value_gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_86_select(gp_in_on_chip_2_buf12_FIFO_buf184_cache& gp_in_on_chip_2_buf12_FIFO_buf184, int root, int gp_in_on_chip_321, int gp_in_on_chip_322, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_86 read pattern: { gp_in_on_chip_322_merged163[root = 0, gp_in_on_chip_321, gp_in_on_chip_322] -> gp_in_on_chip_2_buf12_FIFO_buf184[2 + 2gp_in_on_chip_322, 2gp_in_on_chip_321] : 0 <= gp_in_on_chip_321 <= 7 and 0 <= gp_in_on_chip_322 <= 7 }
  // Read schedule : { gp_in_on_chip_322_merged163[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 16] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_FIFO_buf184187[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 14] : 0 <= d1 <= 16 and 0 <= d2 <= 16 }
  auto value_gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67 = gp_in_on_chip_2_buf12_FIFO_buf184.gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67_merged_banks_9.peek_34();
  return value_gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67;
  return 0;
}

// # of bundles = 2
// gp_in_on_chip_322_merged163_read
//	gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_78
//	gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_79
//	gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_80
//	gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_81
//	gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_82
//	gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_83
//	gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_84
//	gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_85
//	gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_86
inline hw_uint<288> gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_read_bundle_read(gp_in_on_chip_2_buf12_FIFO_buf184_cache& gp_in_on_chip_2_buf12_FIFO_buf184, int root, int gp_in_on_chip_321, int gp_in_on_chip_322, int dynamic_address) {
  // # of ports in bundle: 9
    // gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_78
    // gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_79
    // gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_80
    // gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_81
    // gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_82
    // gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_83
    // gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_84
    // gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_85
    // gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_86

	hw_uint<288> result;
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_78_res = gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_78_select(gp_in_on_chip_2_buf12_FIFO_buf184, root, gp_in_on_chip_321, gp_in_on_chip_322, dynamic_address);
	set_at<0, 288>(result, gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_78_res);
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_79_res = gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_79_select(gp_in_on_chip_2_buf12_FIFO_buf184, root, gp_in_on_chip_321, gp_in_on_chip_322, dynamic_address);
	set_at<32, 288>(result, gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_79_res);
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_80_res = gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_80_select(gp_in_on_chip_2_buf12_FIFO_buf184, root, gp_in_on_chip_321, gp_in_on_chip_322, dynamic_address);
	set_at<64, 288>(result, gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_80_res);
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_81_res = gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_81_select(gp_in_on_chip_2_buf12_FIFO_buf184, root, gp_in_on_chip_321, gp_in_on_chip_322, dynamic_address);
	set_at<96, 288>(result, gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_81_res);
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_82_res = gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_82_select(gp_in_on_chip_2_buf12_FIFO_buf184, root, gp_in_on_chip_321, gp_in_on_chip_322, dynamic_address);
	set_at<128, 288>(result, gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_82_res);
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_83_res = gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_83_select(gp_in_on_chip_2_buf12_FIFO_buf184, root, gp_in_on_chip_321, gp_in_on_chip_322, dynamic_address);
	set_at<160, 288>(result, gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_83_res);
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_84_res = gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_84_select(gp_in_on_chip_2_buf12_FIFO_buf184, root, gp_in_on_chip_321, gp_in_on_chip_322, dynamic_address);
	set_at<192, 288>(result, gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_84_res);
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_85_res = gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_85_select(gp_in_on_chip_2_buf12_FIFO_buf184, root, gp_in_on_chip_321, gp_in_on_chip_322, dynamic_address);
	set_at<224, 288>(result, gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_85_res);
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_86_res = gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_86_select(gp_in_on_chip_2_buf12_FIFO_buf184, root, gp_in_on_chip_321, gp_in_on_chip_322, dynamic_address);
	set_at<256, 288>(result, gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_86_res);
	return result;
}

// load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_write
//	gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67
inline void gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_write, gp_in_on_chip_2_buf12_FIFO_buf184_cache& gp_in_on_chip_2_buf12_FIFO_buf184, int root, int gp_in_on_chip_2_buf12_to_gp_2180_ld186, int gp_in_on_chip_2_buf12_to_gp_2180_ld185, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67_res = load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_write.extract<0, 31>();
	gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67_write(gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_67_res, gp_in_on_chip_2_buf12_FIFO_buf184, root, gp_in_on_chip_2_buf12_to_gp_2180_ld186, gp_in_on_chip_2_buf12_to_gp_2180_ld185, dynamic_address);
}

struct gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_65_to_gp_in_on_chip_2_buf12_FIFO_buf192_diff35_114_cache {
	// RAM Box: {[1, 16], [1, 16]}
	// Capacity: 18
	// # of read delays: 18
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17
	fifo<hw_uint<32> , 18> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(17 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_2_buf12_FIFO_buf192_cache {
  // Reader addrs...
    // { diff35[root = 0, lp_in_on_chip_233, lp_in_on_chip_234] -> gp_in_on_chip_2_buf12_FIFO_buf192[1 + lp_in_on_chip_234, 1 + lp_in_on_chip_233] : 0 <= lp_in_on_chip_233 <= 15 and 0 <= lp_in_on_chip_234 <= 15 }
  // # of banks: 1
  gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_65_to_gp_in_on_chip_2_buf12_FIFO_buf192_diff35_114_cache gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_65_to_gp_in_on_chip_2_buf12_FIFO_buf192_diff35_114;
};



inline void gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_65_write(hw_uint<32> & gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_65, gp_in_on_chip_2_buf12_FIFO_buf192_cache& gp_in_on_chip_2_buf12_FIFO_buf192, int root, int gp_in_on_chip_2_buf12_to_gp_7188_ld194, int gp_in_on_chip_2_buf12_to_gp_7188_ld193, int dynamic_address) {
  gp_in_on_chip_2_buf12_FIFO_buf192.gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_65_to_gp_in_on_chip_2_buf12_FIFO_buf192_diff35_114.push(gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_65);
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf192_diff35_114_select(gp_in_on_chip_2_buf12_FIFO_buf192_cache& gp_in_on_chip_2_buf12_FIFO_buf192, int root, int lp_in_on_chip_233, int lp_in_on_chip_234, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_FIFO_buf192_diff35_114 read pattern: { diff35[root = 0, lp_in_on_chip_233, lp_in_on_chip_234] -> gp_in_on_chip_2_buf12_FIFO_buf192[1 + lp_in_on_chip_234, 1 + lp_in_on_chip_233] : 0 <= lp_in_on_chip_233 <= 15 and 0 <= lp_in_on_chip_234 <= 15 }
  // Read schedule : { diff35[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 30] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_FIFO_buf192195[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 8] : 0 < d1 <= 16 and 0 < d2 <= 16 }
  auto value_gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_65 = gp_in_on_chip_2_buf12_FIFO_buf192.gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_65_to_gp_in_on_chip_2_buf12_FIFO_buf192_diff35_114.peek(/* one reader or all rams */ (14 - lp_in_on_chip_234 >= 0 && 14 - lp_in_on_chip_233 >= 0) ? (17) : (-15 + lp_in_on_chip_234 == 0 && 14 - lp_in_on_chip_233 >= 0) ? (16) : (-15 + lp_in_on_chip_233 == 0 && 14 - lp_in_on_chip_234 >= 0) ? ((15 - lp_in_on_chip_234)) : 0);
  return value_gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_65;
  return 0;
}

// # of bundles = 2
// diff35_read
//	gp_in_on_chip_2_buf12_FIFO_buf192_diff35_114
inline hw_uint<32> gp_in_on_chip_2_buf12_FIFO_buf192_diff35_read_bundle_read(gp_in_on_chip_2_buf12_FIFO_buf192_cache& gp_in_on_chip_2_buf12_FIFO_buf192, int root, int lp_in_on_chip_233, int lp_in_on_chip_234, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_2_buf12_FIFO_buf192_diff35_114

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf192_diff35_114_res = gp_in_on_chip_2_buf12_FIFO_buf192_diff35_114_select(gp_in_on_chip_2_buf12_FIFO_buf192, root, lp_in_on_chip_233, lp_in_on_chip_234, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_2_buf12_FIFO_buf192_diff35_114_res);
	return result;
}

// load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_write
//	gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_65
inline void gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_write, gp_in_on_chip_2_buf12_FIFO_buf192_cache& gp_in_on_chip_2_buf12_FIFO_buf192, int root, int gp_in_on_chip_2_buf12_to_gp_7188_ld194, int gp_in_on_chip_2_buf12_to_gp_7188_ld193, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_65_res = load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_write.extract<0, 31>();
	gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_65_write(gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_65_res, gp_in_on_chip_2_buf12_FIFO_buf192, root, gp_in_on_chip_2_buf12_to_gp_7188_ld194, gp_in_on_chip_2_buf12_to_gp_7188_ld193, dynamic_address);
}

struct gp_in_on_chip_2_buf12_us36_us39_8_to_gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5196199_58_cache {
	// RAM Box: {[0, 31], [0, 31]}
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

struct gp_in_on_chip_2_buf12_us36_cache {
  // Reader addrs...
    // { load_to_gp_in_on_chip_2_buf12_us36_to_gp_5196199[root = 0, gp_in_on_chip_2_buf12_us36_ld198, gp_in_on_chip_2_buf12_us36_ld197] -> gp_in_on_chip_2_buf12_us36[gp_in_on_chip_2_buf12_us36_ld197, gp_in_on_chip_2_buf12_us36_ld198] : 0 <= gp_in_on_chip_2_buf12_us36_ld198 <= 31 and 0 <= gp_in_on_chip_2_buf12_us36_ld197 <= 31 }
  // # of banks: 1
  gp_in_on_chip_2_buf12_us36_us39_8_to_gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5196199_58_cache gp_in_on_chip_2_buf12_us36_us39_8_to_gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5196199_58;
};



inline void gp_in_on_chip_2_buf12_us36_us39_8_write(hw_uint<32> & gp_in_on_chip_2_buf12_us36_us39_8, gp_in_on_chip_2_buf12_us36_cache& gp_in_on_chip_2_buf12_us36, int root, int us_gp_in_on_chip_2_buf1237, int us_gp_in_on_chip_2_buf1238, int dynamic_address) {
  gp_in_on_chip_2_buf12_us36.gp_in_on_chip_2_buf12_us36_us39_8_to_gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5196199_58.push(gp_in_on_chip_2_buf12_us36_us39_8);
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5196199_58_select(gp_in_on_chip_2_buf12_us36_cache& gp_in_on_chip_2_buf12_us36, int root, int gp_in_on_chip_2_buf12_us36_ld198, int gp_in_on_chip_2_buf12_us36_ld197, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5196199_58 read pattern: { load_to_gp_in_on_chip_2_buf12_us36_to_gp_5196199[root = 0, gp_in_on_chip_2_buf12_us36_ld198, gp_in_on_chip_2_buf12_us36_ld197] -> gp_in_on_chip_2_buf12_us36[gp_in_on_chip_2_buf12_us36_ld197, gp_in_on_chip_2_buf12_us36_ld198] : 0 <= gp_in_on_chip_2_buf12_us36_ld198 <= 31 and 0 <= gp_in_on_chip_2_buf12_us36_ld197 <= 31 }
  // Read schedule : { load_to_gp_in_on_chip_2_buf12_us36_to_gp_5196199[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 13] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  // Write schedule: { us39[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 9] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  auto value_gp_in_on_chip_2_buf12_us36_us39_8 = gp_in_on_chip_2_buf12_us36.gp_in_on_chip_2_buf12_us36_us39_8_to_gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5196199_58.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_2_buf12_us36_us39_8;
  return 0;
}

// # of bundles = 2
// load_to_gp_in_on_chip_2_buf12_us36_to_gp_5196199_read
//	gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5196199_58
inline hw_uint<32> gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5196199_read_bundle_read(gp_in_on_chip_2_buf12_us36_cache& gp_in_on_chip_2_buf12_us36, int root, int gp_in_on_chip_2_buf12_us36_ld198, int gp_in_on_chip_2_buf12_us36_ld197, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5196199_58

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5196199_58_res = gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5196199_58_select(gp_in_on_chip_2_buf12_us36, root, gp_in_on_chip_2_buf12_us36_ld198, gp_in_on_chip_2_buf12_us36_ld197, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5196199_58_res);
	return result;
}

// us39_write
//	gp_in_on_chip_2_buf12_us36_us39_8
inline void gp_in_on_chip_2_buf12_us36_us39_write_bundle_write(hw_uint<32>& us39_write, gp_in_on_chip_2_buf12_us36_cache& gp_in_on_chip_2_buf12_us36, int root, int us_gp_in_on_chip_2_buf1237, int us_gp_in_on_chip_2_buf1238, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_2_buf12_us36_us39_8_res = us39_write.extract<0, 31>();
	gp_in_on_chip_2_buf12_us36_us39_8_write(gp_in_on_chip_2_buf12_us36_us39_8_res, gp_in_on_chip_2_buf12_us36, root, us_gp_in_on_chip_2_buf1237, us_gp_in_on_chip_2_buf1238, dynamic_address);
}

struct gp_in_on_chip_2_buf12_us36_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200203_59_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200_diff43_112_cache {
	// RAM Box: {[0, 31], [0, 31]}
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

struct gp_in_on_chip_2_buf12_us36_FIFO_buf200_cache {
  // Reader addrs...
    // { diff43[root = 0, lp_in_on_chip_141, lp_in_on_chip_142] -> gp_in_on_chip_2_buf12_us36_FIFO_buf200[lp_in_on_chip_142, lp_in_on_chip_141] : 0 <= lp_in_on_chip_141 <= 31 and 0 <= lp_in_on_chip_142 <= 31 }
  // # of banks: 1
  gp_in_on_chip_2_buf12_us36_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200203_59_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200_diff43_112_cache gp_in_on_chip_2_buf12_us36_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200203_59_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200_diff43_112;
};



inline void gp_in_on_chip_2_buf12_us36_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200203_59_write(hw_uint<32> & gp_in_on_chip_2_buf12_us36_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200203_59, gp_in_on_chip_2_buf12_us36_FIFO_buf200_cache& gp_in_on_chip_2_buf12_us36_FIFO_buf200, int root, int gp_in_on_chip_2_buf12_us36_to_gp_5196_ld202, int gp_in_on_chip_2_buf12_us36_to_gp_5196_ld201, int dynamic_address) {
  gp_in_on_chip_2_buf12_us36_FIFO_buf200.gp_in_on_chip_2_buf12_us36_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200203_59_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200_diff43_112.push(gp_in_on_chip_2_buf12_us36_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200203_59);
}

inline hw_uint<32>  gp_in_on_chip_2_buf12_us36_FIFO_buf200_diff43_112_select(gp_in_on_chip_2_buf12_us36_FIFO_buf200_cache& gp_in_on_chip_2_buf12_us36_FIFO_buf200, int root, int lp_in_on_chip_141, int lp_in_on_chip_142, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_2_buf12_us36_FIFO_buf200_diff43_112 read pattern: { diff43[root = 0, lp_in_on_chip_141, lp_in_on_chip_142] -> gp_in_on_chip_2_buf12_us36_FIFO_buf200[lp_in_on_chip_142, lp_in_on_chip_141] : 0 <= lp_in_on_chip_141 <= 31 and 0 <= lp_in_on_chip_142 <= 31 }
  // Read schedule : { diff43[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 24] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  // Write schedule: { load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200203[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 17] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  auto value_gp_in_on_chip_2_buf12_us36_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200203_59 = gp_in_on_chip_2_buf12_us36_FIFO_buf200.gp_in_on_chip_2_buf12_us36_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200203_59_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200_diff43_112.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_2_buf12_us36_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200203_59;
  return 0;
}

// # of bundles = 2
// diff43_read
//	gp_in_on_chip_2_buf12_us36_FIFO_buf200_diff43_112
inline hw_uint<32> gp_in_on_chip_2_buf12_us36_FIFO_buf200_diff43_read_bundle_read(gp_in_on_chip_2_buf12_us36_FIFO_buf200_cache& gp_in_on_chip_2_buf12_us36_FIFO_buf200, int root, int lp_in_on_chip_141, int lp_in_on_chip_142, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_2_buf12_us36_FIFO_buf200_diff43_112

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_2_buf12_us36_FIFO_buf200_diff43_112_res = gp_in_on_chip_2_buf12_us36_FIFO_buf200_diff43_112_select(gp_in_on_chip_2_buf12_us36_FIFO_buf200, root, lp_in_on_chip_141, lp_in_on_chip_142, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_2_buf12_us36_FIFO_buf200_diff43_112_res);
	return result;
}

// load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200203_write
//	gp_in_on_chip_2_buf12_us36_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200203_59
inline void gp_in_on_chip_2_buf12_us36_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200203_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200203_write, gp_in_on_chip_2_buf12_us36_FIFO_buf200_cache& gp_in_on_chip_2_buf12_us36_FIFO_buf200, int root, int gp_in_on_chip_2_buf12_us36_to_gp_5196_ld202, int gp_in_on_chip_2_buf12_us36_to_gp_5196_ld201, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_2_buf12_us36_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200203_59_res = load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200203_write.extract<0, 31>();
	gp_in_on_chip_2_buf12_us36_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200203_59_write(gp_in_on_chip_2_buf12_us36_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200203_59_res, gp_in_on_chip_2_buf12_us36_FIFO_buf200, root, gp_in_on_chip_2_buf12_us36_to_gp_5196_ld202, gp_in_on_chip_2_buf12_us36_to_gp_5196_ld201, dynamic_address);
}

struct gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_77_to_gp_in_on_chip_3_buf20_us31_11_cache {
	// RAM Box: {[0, 7], [0, 7]}
	// Capacity: 8
	// # of read delays: 9
  // 0, 0, 1, 2, 3, 4, 5, 6, 7
	fifo<hw_uint<32> , 8> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_77_to_gp_in_on_chip_3_buf20_us59_5_cache {
	// RAM Box: {[0, 7], [0, 7]}
	// Capacity: 8
	// # of read delays: 9
  // 0, 0, 1, 2, 3, 4, 5, 6, 7
	fifo<hw_uint<32> , 8> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(7 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct gp_in_on_chip_3_buf20_cache {
  // Reader addrs...
    // { us31[root = 0, us_gp_in_on_chip_3_buf2029, us_gp_in_on_chip_3_buf2030] -> gp_in_on_chip_3_buf20[o0, o1] : 0 <= us_gp_in_on_chip_3_buf2029 <= 15 and 0 <= us_gp_in_on_chip_3_buf2030 <= 15 and -1 + us_gp_in_on_chip_3_buf2030 <= 2o0 <= us_gp_in_on_chip_3_buf2030 and -1 + us_gp_in_on_chip_3_buf2029 <= 2o1 <= us_gp_in_on_chip_3_buf2029 }
    // { us59[root = 0, us_gp_in_on_chip_3_buf2057, us_gp_in_on_chip_3_buf2058] -> gp_in_on_chip_3_buf20[o0, o1] : 0 <= us_gp_in_on_chip_3_buf2057 <= 15 and 0 <= us_gp_in_on_chip_3_buf2058 <= 15 and -1 + us_gp_in_on_chip_3_buf2058 <= 2o0 <= us_gp_in_on_chip_3_buf2058 and -1 + us_gp_in_on_chip_3_buf2057 <= 2o1 <= us_gp_in_on_chip_3_buf2057 }
  // # of banks: 2
  gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_77_to_gp_in_on_chip_3_buf20_us31_11_cache gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_77_to_gp_in_on_chip_3_buf20_us31_11;
  gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_77_to_gp_in_on_chip_3_buf20_us59_5_cache gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_77_to_gp_in_on_chip_3_buf20_us59_5;
};



inline void gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_77_write(hw_uint<32> & gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_77, gp_in_on_chip_3_buf20_cache& gp_in_on_chip_3_buf20, int root, int gp_in_on_chip_321, int gp_in_on_chip_322, int dynamic_address) {
  gp_in_on_chip_3_buf20.gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_77_to_gp_in_on_chip_3_buf20_us31_11.push(gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_77);
  gp_in_on_chip_3_buf20.gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_77_to_gp_in_on_chip_3_buf20_us59_5.push(gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_77);
}

inline hw_uint<32>  gp_in_on_chip_3_buf20_us31_11_select(gp_in_on_chip_3_buf20_cache& gp_in_on_chip_3_buf20, int root, int us_gp_in_on_chip_3_buf2029, int us_gp_in_on_chip_3_buf2030, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_3_buf20_us31_11 read pattern: { us31[root = 0, us_gp_in_on_chip_3_buf2029, us_gp_in_on_chip_3_buf2030] -> gp_in_on_chip_3_buf20[o0, o1] : 0 <= us_gp_in_on_chip_3_buf2029 <= 15 and 0 <= us_gp_in_on_chip_3_buf2030 <= 15 and -1 + us_gp_in_on_chip_3_buf2030 <= 2o0 <= us_gp_in_on_chip_3_buf2030 and -1 + us_gp_in_on_chip_3_buf2029 <= 2o1 <= us_gp_in_on_chip_3_buf2029 }
  // Read schedule : { us31[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 18] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  // Write schedule: { gp_in_on_chip_322_merged163[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 16] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  auto value_gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_77 = gp_in_on_chip_3_buf20.gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_77_to_gp_in_on_chip_3_buf20_us31_11.peek(/* one reader or all rams */ ((-1 - us_gp_in_on_chip_3_buf2029) % 2 == 0 && 13 - us_gp_in_on_chip_3_buf2030 >= 0) ? ((7 - floord(2*us_gp_in_on_chip_3_buf2030, 4))) : 0);
  return value_gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_77;
  return 0;
}

inline hw_uint<32>  gp_in_on_chip_3_buf20_us59_5_select(gp_in_on_chip_3_buf20_cache& gp_in_on_chip_3_buf20, int root, int us_gp_in_on_chip_3_buf2057, int us_gp_in_on_chip_3_buf2058, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_3_buf20_us59_5 read pattern: { us59[root = 0, us_gp_in_on_chip_3_buf2057, us_gp_in_on_chip_3_buf2058] -> gp_in_on_chip_3_buf20[o0, o1] : 0 <= us_gp_in_on_chip_3_buf2057 <= 15 and 0 <= us_gp_in_on_chip_3_buf2058 <= 15 and -1 + us_gp_in_on_chip_3_buf2058 <= 2o0 <= us_gp_in_on_chip_3_buf2058 and -1 + us_gp_in_on_chip_3_buf2057 <= 2o1 <= us_gp_in_on_chip_3_buf2057 }
  // Read schedule : { us59[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 20] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  // Write schedule: { gp_in_on_chip_322_merged163[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 16] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
  auto value_gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_77 = gp_in_on_chip_3_buf20.gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_77_to_gp_in_on_chip_3_buf20_us59_5.peek(/* one reader or all rams */ ((-1 - us_gp_in_on_chip_3_buf2057) % 2 == 0 && 13 - us_gp_in_on_chip_3_buf2058 >= 0) ? ((7 - floord(2*us_gp_in_on_chip_3_buf2058, 4))) : 0);
  return value_gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_77;
  return 0;
}

// # of bundles = 3
// gp_in_on_chip_322_merged163_write
//	gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_77
inline void gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_write_bundle_write(hw_uint<32>& gp_in_on_chip_322_merged163_write, gp_in_on_chip_3_buf20_cache& gp_in_on_chip_3_buf20, int root, int gp_in_on_chip_321, int gp_in_on_chip_322, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_77_res = gp_in_on_chip_322_merged163_write.extract<0, 31>();
	gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_77_write(gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_77_res, gp_in_on_chip_3_buf20, root, gp_in_on_chip_321, gp_in_on_chip_322, dynamic_address);
}

// us31_read
//	gp_in_on_chip_3_buf20_us31_11
inline hw_uint<32> gp_in_on_chip_3_buf20_us31_read_bundle_read(gp_in_on_chip_3_buf20_cache& gp_in_on_chip_3_buf20, int root, int us_gp_in_on_chip_3_buf2029, int us_gp_in_on_chip_3_buf2030, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_3_buf20_us31_11

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_3_buf20_us31_11_res = gp_in_on_chip_3_buf20_us31_11_select(gp_in_on_chip_3_buf20, root, us_gp_in_on_chip_3_buf2029, us_gp_in_on_chip_3_buf2030, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_3_buf20_us31_11_res);
	return result;
}

// us59_read
//	gp_in_on_chip_3_buf20_us59_5
inline hw_uint<32> gp_in_on_chip_3_buf20_us59_read_bundle_read(gp_in_on_chip_3_buf20_cache& gp_in_on_chip_3_buf20, int root, int us_gp_in_on_chip_3_buf2057, int us_gp_in_on_chip_3_buf2058, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_3_buf20_us59_5

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_3_buf20_us59_5_res = gp_in_on_chip_3_buf20_us59_5_select(gp_in_on_chip_3_buf20, root, us_gp_in_on_chip_3_buf2057, us_gp_in_on_chip_3_buf2058, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_3_buf20_us59_5_res);
	return result;
}

struct gp_in_on_chip_3_buf20_us28_us31_10_to_gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_54_cache {
	// RAM Box: {[0, 15], [0, 15]}
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

struct gp_in_on_chip_3_buf20_us28_cache {
  // Reader addrs...
    // { load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207[root = 0, gp_in_on_chip_3_buf20_us28_ld206, gp_in_on_chip_3_buf20_us28_ld205] -> gp_in_on_chip_3_buf20_us28[gp_in_on_chip_3_buf20_us28_ld205, gp_in_on_chip_3_buf20_us28_ld206] : 0 <= gp_in_on_chip_3_buf20_us28_ld206 <= 15 and 0 <= gp_in_on_chip_3_buf20_us28_ld205 <= 15 }
  // # of banks: 1
  gp_in_on_chip_3_buf20_us28_us31_10_to_gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_54_cache gp_in_on_chip_3_buf20_us28_us31_10_to_gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_54;
};



inline void gp_in_on_chip_3_buf20_us28_us31_10_write(hw_uint<32> & gp_in_on_chip_3_buf20_us28_us31_10, gp_in_on_chip_3_buf20_us28_cache& gp_in_on_chip_3_buf20_us28, int root, int us_gp_in_on_chip_3_buf2029, int us_gp_in_on_chip_3_buf2030, int dynamic_address) {
  gp_in_on_chip_3_buf20_us28.gp_in_on_chip_3_buf20_us28_us31_10_to_gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_54.push(gp_in_on_chip_3_buf20_us28_us31_10);
}

inline hw_uint<32>  gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_54_select(gp_in_on_chip_3_buf20_us28_cache& gp_in_on_chip_3_buf20_us28, int root, int gp_in_on_chip_3_buf20_us28_ld206, int gp_in_on_chip_3_buf20_us28_ld205, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_54 read pattern: { load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207[root = 0, gp_in_on_chip_3_buf20_us28_ld206, gp_in_on_chip_3_buf20_us28_ld205] -> gp_in_on_chip_3_buf20_us28[gp_in_on_chip_3_buf20_us28_ld205, gp_in_on_chip_3_buf20_us28_ld206] : 0 <= gp_in_on_chip_3_buf20_us28_ld206 <= 15 and 0 <= gp_in_on_chip_3_buf20_us28_ld205 <= 15 }
  // Read schedule : { load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 23] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  // Write schedule: { us31[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 18] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  auto value_gp_in_on_chip_3_buf20_us28_us31_10 = gp_in_on_chip_3_buf20_us28.gp_in_on_chip_3_buf20_us28_us31_10_to_gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_54.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_3_buf20_us28_us31_10;
  return 0;
}

// # of bundles = 2
// load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_read
//	gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_54
inline hw_uint<32> gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_read_bundle_read(gp_in_on_chip_3_buf20_us28_cache& gp_in_on_chip_3_buf20_us28, int root, int gp_in_on_chip_3_buf20_us28_ld206, int gp_in_on_chip_3_buf20_us28_ld205, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_54

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_54_res = gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_54_select(gp_in_on_chip_3_buf20_us28, root, gp_in_on_chip_3_buf20_us28_ld206, gp_in_on_chip_3_buf20_us28_ld205, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_54_res);
	return result;
}

// us31_write
//	gp_in_on_chip_3_buf20_us28_us31_10
inline void gp_in_on_chip_3_buf20_us28_us31_write_bundle_write(hw_uint<32>& us31_write, gp_in_on_chip_3_buf20_us28_cache& gp_in_on_chip_3_buf20_us28, int root, int us_gp_in_on_chip_3_buf2029, int us_gp_in_on_chip_3_buf2030, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_3_buf20_us28_us31_10_res = us31_write.extract<0, 31>();
	gp_in_on_chip_3_buf20_us28_us31_10_write(gp_in_on_chip_3_buf20_us28_us31_10_res, gp_in_on_chip_3_buf20_us28, root, us_gp_in_on_chip_3_buf2029, us_gp_in_on_chip_3_buf2030, dynamic_address);
}

struct gp_in_on_chip_3_buf20_us28_FIFO_buf208_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208211_55_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208_diff35_115_cache {
	// RAM Box: {[0, 15], [0, 15]}
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

struct gp_in_on_chip_3_buf20_us28_FIFO_buf208_cache {
  // Reader addrs...
    // { diff35[root = 0, lp_in_on_chip_233, lp_in_on_chip_234] -> gp_in_on_chip_3_buf20_us28_FIFO_buf208[lp_in_on_chip_234, lp_in_on_chip_233] : 0 <= lp_in_on_chip_233 <= 15 and 0 <= lp_in_on_chip_234 <= 15 }
  // # of banks: 1
  gp_in_on_chip_3_buf20_us28_FIFO_buf208_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208211_55_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208_diff35_115_cache gp_in_on_chip_3_buf20_us28_FIFO_buf208_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208211_55_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208_diff35_115;
};



inline void gp_in_on_chip_3_buf20_us28_FIFO_buf208_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208211_55_write(hw_uint<32> & gp_in_on_chip_3_buf20_us28_FIFO_buf208_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208211_55, gp_in_on_chip_3_buf20_us28_FIFO_buf208_cache& gp_in_on_chip_3_buf20_us28_FIFO_buf208, int root, int gp_in_on_chip_3_buf20_us28_to_gp_7204_ld210, int gp_in_on_chip_3_buf20_us28_to_gp_7204_ld209, int dynamic_address) {
  gp_in_on_chip_3_buf20_us28_FIFO_buf208.gp_in_on_chip_3_buf20_us28_FIFO_buf208_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208211_55_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208_diff35_115.push(gp_in_on_chip_3_buf20_us28_FIFO_buf208_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208211_55);
}

inline hw_uint<32>  gp_in_on_chip_3_buf20_us28_FIFO_buf208_diff35_115_select(gp_in_on_chip_3_buf20_us28_FIFO_buf208_cache& gp_in_on_chip_3_buf20_us28_FIFO_buf208, int root, int lp_in_on_chip_233, int lp_in_on_chip_234, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_3_buf20_us28_FIFO_buf208_diff35_115 read pattern: { diff35[root = 0, lp_in_on_chip_233, lp_in_on_chip_234] -> gp_in_on_chip_3_buf20_us28_FIFO_buf208[lp_in_on_chip_234, lp_in_on_chip_233] : 0 <= lp_in_on_chip_233 <= 15 and 0 <= lp_in_on_chip_234 <= 15 }
  // Read schedule : { diff35[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 30] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  // Write schedule: { load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208211[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 28] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  auto value_gp_in_on_chip_3_buf20_us28_FIFO_buf208_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208211_55 = gp_in_on_chip_3_buf20_us28_FIFO_buf208.gp_in_on_chip_3_buf20_us28_FIFO_buf208_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208211_55_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208_diff35_115.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_3_buf20_us28_FIFO_buf208_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208211_55;
  return 0;
}

// # of bundles = 2
// diff35_read
//	gp_in_on_chip_3_buf20_us28_FIFO_buf208_diff35_115
inline hw_uint<32> gp_in_on_chip_3_buf20_us28_FIFO_buf208_diff35_read_bundle_read(gp_in_on_chip_3_buf20_us28_FIFO_buf208_cache& gp_in_on_chip_3_buf20_us28_FIFO_buf208, int root, int lp_in_on_chip_233, int lp_in_on_chip_234, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_3_buf20_us28_FIFO_buf208_diff35_115

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_3_buf20_us28_FIFO_buf208_diff35_115_res = gp_in_on_chip_3_buf20_us28_FIFO_buf208_diff35_115_select(gp_in_on_chip_3_buf20_us28_FIFO_buf208, root, lp_in_on_chip_233, lp_in_on_chip_234, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_3_buf20_us28_FIFO_buf208_diff35_115_res);
	return result;
}

// load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208211_write
//	gp_in_on_chip_3_buf20_us28_FIFO_buf208_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208211_55
inline void gp_in_on_chip_3_buf20_us28_FIFO_buf208_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208211_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208211_write, gp_in_on_chip_3_buf20_us28_FIFO_buf208_cache& gp_in_on_chip_3_buf20_us28_FIFO_buf208, int root, int gp_in_on_chip_3_buf20_us28_to_gp_7204_ld210, int gp_in_on_chip_3_buf20_us28_to_gp_7204_ld209, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_3_buf20_us28_FIFO_buf208_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208211_55_res = load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208211_write.extract<0, 31>();
	gp_in_on_chip_3_buf20_us28_FIFO_buf208_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208211_55_write(gp_in_on_chip_3_buf20_us28_FIFO_buf208_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208211_55_res, gp_in_on_chip_3_buf20_us28_FIFO_buf208, root, gp_in_on_chip_3_buf20_us28_to_gp_7204_ld210, gp_in_on_chip_3_buf20_us28_to_gp_7204_ld209, dynamic_address);
}

struct gp_in_on_chip_3_buf20_us56_us59_4_to_gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8212215_50_cache {
	// RAM Box: {[0, 15], [0, 15]}
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

struct gp_in_on_chip_3_buf20_us56_cache {
  // Reader addrs...
    // { load_to_gp_in_on_chip_3_buf20_us56_to_gp_8212215[root = 0, gp_in_on_chip_3_buf20_us56_ld214, gp_in_on_chip_3_buf20_us56_ld213] -> gp_in_on_chip_3_buf20_us56[gp_in_on_chip_3_buf20_us56_ld213, gp_in_on_chip_3_buf20_us56_ld214] : 0 <= gp_in_on_chip_3_buf20_us56_ld214 <= 15 and 0 <= gp_in_on_chip_3_buf20_us56_ld213 <= 15 }
  // # of banks: 1
  gp_in_on_chip_3_buf20_us56_us59_4_to_gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8212215_50_cache gp_in_on_chip_3_buf20_us56_us59_4_to_gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8212215_50;
};



inline void gp_in_on_chip_3_buf20_us56_us59_4_write(hw_uint<32> & gp_in_on_chip_3_buf20_us56_us59_4, gp_in_on_chip_3_buf20_us56_cache& gp_in_on_chip_3_buf20_us56, int root, int us_gp_in_on_chip_3_buf2057, int us_gp_in_on_chip_3_buf2058, int dynamic_address) {
  gp_in_on_chip_3_buf20_us56.gp_in_on_chip_3_buf20_us56_us59_4_to_gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8212215_50.push(gp_in_on_chip_3_buf20_us56_us59_4);
}

inline hw_uint<32>  gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8212215_50_select(gp_in_on_chip_3_buf20_us56_cache& gp_in_on_chip_3_buf20_us56, int root, int gp_in_on_chip_3_buf20_us56_ld214, int gp_in_on_chip_3_buf20_us56_ld213, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8212215_50 read pattern: { load_to_gp_in_on_chip_3_buf20_us56_to_gp_8212215[root = 0, gp_in_on_chip_3_buf20_us56_ld214, gp_in_on_chip_3_buf20_us56_ld213] -> gp_in_on_chip_3_buf20_us56[gp_in_on_chip_3_buf20_us56_ld213, gp_in_on_chip_3_buf20_us56_ld214] : 0 <= gp_in_on_chip_3_buf20_us56_ld214 <= 15 and 0 <= gp_in_on_chip_3_buf20_us56_ld213 <= 15 }
  // Read schedule : { load_to_gp_in_on_chip_3_buf20_us56_to_gp_8212215[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 21] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  // Write schedule: { us59[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 20] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  auto value_gp_in_on_chip_3_buf20_us56_us59_4 = gp_in_on_chip_3_buf20_us56.gp_in_on_chip_3_buf20_us56_us59_4_to_gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8212215_50.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_3_buf20_us56_us59_4;
  return 0;
}

// # of bundles = 2
// load_to_gp_in_on_chip_3_buf20_us56_to_gp_8212215_read
//	gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8212215_50
inline hw_uint<32> gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8212215_read_bundle_read(gp_in_on_chip_3_buf20_us56_cache& gp_in_on_chip_3_buf20_us56, int root, int gp_in_on_chip_3_buf20_us56_ld214, int gp_in_on_chip_3_buf20_us56_ld213, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8212215_50

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8212215_50_res = gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8212215_50_select(gp_in_on_chip_3_buf20_us56, root, gp_in_on_chip_3_buf20_us56_ld214, gp_in_on_chip_3_buf20_us56_ld213, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8212215_50_res);
	return result;
}

// us59_write
//	gp_in_on_chip_3_buf20_us56_us59_4
inline void gp_in_on_chip_3_buf20_us56_us59_write_bundle_write(hw_uint<32>& us59_write, gp_in_on_chip_3_buf20_us56_cache& gp_in_on_chip_3_buf20_us56, int root, int us_gp_in_on_chip_3_buf2057, int us_gp_in_on_chip_3_buf2058, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_3_buf20_us56_us59_4_res = us59_write.extract<0, 31>();
	gp_in_on_chip_3_buf20_us56_us59_4_write(gp_in_on_chip_3_buf20_us56_us59_4_res, gp_in_on_chip_3_buf20_us56, root, us_gp_in_on_chip_3_buf2057, us_gp_in_on_chip_3_buf2058, dynamic_address);
}

struct gp_in_on_chip_3_buf20_us56_FIFO_buf216_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216219_51_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216_rc60_20_cache {
	// RAM Box: {[0, 15], [0, 15]}
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

struct gp_in_on_chip_3_buf20_us56_FIFO_buf216_cache {
  // Reader addrs...
    // { rc60[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp5253, lp_in_on_chip_2_buf32_reconstruct_lp5254] -> gp_in_on_chip_3_buf20_us56_FIFO_buf216[lp_in_on_chip_2_buf32_reconstruct_lp5254, lp_in_on_chip_2_buf32_reconstruct_lp5253] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp5253 <= 15 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp5254 <= 15 }
  // # of banks: 1
  gp_in_on_chip_3_buf20_us56_FIFO_buf216_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216219_51_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216_rc60_20_cache gp_in_on_chip_3_buf20_us56_FIFO_buf216_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216219_51_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216_rc60_20;
};



inline void gp_in_on_chip_3_buf20_us56_FIFO_buf216_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216219_51_write(hw_uint<32> & gp_in_on_chip_3_buf20_us56_FIFO_buf216_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216219_51, gp_in_on_chip_3_buf20_us56_FIFO_buf216_cache& gp_in_on_chip_3_buf20_us56_FIFO_buf216, int root, int gp_in_on_chip_3_buf20_us56_to_gp_8212_ld218, int gp_in_on_chip_3_buf20_us56_to_gp_8212_ld217, int dynamic_address) {
  gp_in_on_chip_3_buf20_us56_FIFO_buf216.gp_in_on_chip_3_buf20_us56_FIFO_buf216_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216219_51_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216_rc60_20.push(gp_in_on_chip_3_buf20_us56_FIFO_buf216_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216219_51);
}

inline hw_uint<32>  gp_in_on_chip_3_buf20_us56_FIFO_buf216_rc60_20_select(gp_in_on_chip_3_buf20_us56_FIFO_buf216_cache& gp_in_on_chip_3_buf20_us56_FIFO_buf216, int root, int lp_in_on_chip_2_buf32_reconstruct_lp5253, int lp_in_on_chip_2_buf32_reconstruct_lp5254, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_in_on_chip_3_buf20_us56_FIFO_buf216_rc60_20 read pattern: { rc60[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp5253, lp_in_on_chip_2_buf32_reconstruct_lp5254] -> gp_in_on_chip_3_buf20_us56_FIFO_buf216[lp_in_on_chip_2_buf32_reconstruct_lp5254, lp_in_on_chip_2_buf32_reconstruct_lp5253] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp5253 <= 15 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp5254 <= 15 }
  // Read schedule : { rc60[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 33] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  // Write schedule: { load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216219[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 22] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  auto value_gp_in_on_chip_3_buf20_us56_FIFO_buf216_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216219_51 = gp_in_on_chip_3_buf20_us56_FIFO_buf216.gp_in_on_chip_3_buf20_us56_FIFO_buf216_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216219_51_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216_rc60_20.peek(/* one reader or all rams */ 0);
  return value_gp_in_on_chip_3_buf20_us56_FIFO_buf216_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216219_51;
  return 0;
}

// # of bundles = 2
// load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216219_write
//	gp_in_on_chip_3_buf20_us56_FIFO_buf216_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216219_51
inline void gp_in_on_chip_3_buf20_us56_FIFO_buf216_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216219_write_bundle_write(hw_uint<32>& load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216219_write, gp_in_on_chip_3_buf20_us56_FIFO_buf216_cache& gp_in_on_chip_3_buf20_us56_FIFO_buf216, int root, int gp_in_on_chip_3_buf20_us56_to_gp_8212_ld218, int gp_in_on_chip_3_buf20_us56_to_gp_8212_ld217, int dynamic_address) {
	hw_uint<32>  gp_in_on_chip_3_buf20_us56_FIFO_buf216_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216219_51_res = load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216219_write.extract<0, 31>();
	gp_in_on_chip_3_buf20_us56_FIFO_buf216_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216219_51_write(gp_in_on_chip_3_buf20_us56_FIFO_buf216_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216219_51_res, gp_in_on_chip_3_buf20_us56_FIFO_buf216, root, gp_in_on_chip_3_buf20_us56_to_gp_8212_ld218, gp_in_on_chip_3_buf20_us56_to_gp_8212_ld217, dynamic_address);
}

// rc60_read
//	gp_in_on_chip_3_buf20_us56_FIFO_buf216_rc60_20
inline hw_uint<32> gp_in_on_chip_3_buf20_us56_FIFO_buf216_rc60_read_bundle_read(gp_in_on_chip_3_buf20_us56_FIFO_buf216_cache& gp_in_on_chip_3_buf20_us56_FIFO_buf216, int root, int lp_in_on_chip_2_buf32_reconstruct_lp5253, int lp_in_on_chip_2_buf32_reconstruct_lp5254, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_in_on_chip_3_buf20_us56_FIFO_buf216_rc60_20

	hw_uint<32> result;
	hw_uint<32>  gp_in_on_chip_3_buf20_us56_FIFO_buf216_rc60_20_res = gp_in_on_chip_3_buf20_us56_FIFO_buf216_rc60_20_select(gp_in_on_chip_3_buf20_us56_FIFO_buf216, root, lp_in_on_chip_2_buf32_reconstruct_lp5253, lp_in_on_chip_2_buf32_reconstruct_lp5254, dynamic_address);
	set_at<0, 32>(result, gp_in_on_chip_3_buf20_us56_FIFO_buf216_rc60_20_res);
	return result;
}

struct in_on_chip_pw_math_in03_23_to_in_on_chip_load_to_in_on_chip_to_gp_3220223_46_cache {
	// RAM Box: {[7, 70], [7, 70]}
	// Capacity: 73
	// # of read delays: 73
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72
	fifo<hw_uint<32> , 73> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(72 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct in_on_chip_pw_math_in03_23_merged_banks_9_cache {
	// RAM Box: {[0, 70], [0, 70]}
	// Capacity: 145
	// # of read delays: 9
  // 0, 1, 2, 71, 72, 73, 142, 143, 144
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 68> f5;
	hw_uint<32>  f6;
	hw_uint<32>  f8;
	hw_uint<32>  f10;
	fifo<hw_uint<32> , 68> f11;
	hw_uint<32>  f12;
	hw_uint<32>  f14;
	hw_uint<32>  f16;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_2() {
		return f4;
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_71() {
		return f6;
	}

	inline hw_uint<32>  peek_72() {
		return f8;
	}

	inline hw_uint<32>  peek_73() {
		return f10;
	}

	inline hw_uint<32>  peek_141() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<32>  peek_142() {
		return f12;
	}

	inline hw_uint<32>  peek_143() {
		return f14;
	}

	inline hw_uint<32>  peek_144() {
		return f16;
	}



	inline void push(const hw_uint<32>  value) {
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
    // cap: 1 reading from capacity: 68
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 68 reading from capacity: 1
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
    // cap: 1 reading from capacity: 68
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 68 reading from capacity: 1
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

struct in_on_chip_cache {
  // Reader addrs...
    // { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip[2 + 2gp_in_on_chip_16, 2 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
    // { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip[2gp_in_on_chip_16, 1 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
    // { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip[1 + 2gp_in_on_chip_16, 1 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
    // { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip[2 + 2gp_in_on_chip_16, 1 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
    // { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip[2gp_in_on_chip_16, 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
    // { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip[1 + 2gp_in_on_chip_16, 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
    // { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip[2 + 2gp_in_on_chip_16, 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
    // { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip[2gp_in_on_chip_16, 2 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
    // { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip[1 + 2gp_in_on_chip_16, 2 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
    // { load_to_in_on_chip_to_gp_3220223[root = 0, in_on_chip_ld222, in_on_chip_ld221] -> in_on_chip[in_on_chip_ld221, in_on_chip_ld222] : 7 <= in_on_chip_ld222 <= 70 and 7 <= in_on_chip_ld221 <= 70 }
  // # of banks: 2
  in_on_chip_pw_math_in03_23_to_in_on_chip_load_to_in_on_chip_to_gp_3220223_46_cache in_on_chip_pw_math_in03_23_to_in_on_chip_load_to_in_on_chip_to_gp_3220223_46;
  in_on_chip_pw_math_in03_23_merged_banks_9_cache in_on_chip_pw_math_in03_23_merged_banks_9;
};



inline void in_on_chip_pw_math_in03_23_write(hw_uint<32> & in_on_chip_pw_math_in03_23, in_on_chip_cache& in_on_chip, int root, int pw_math_in01, int pw_math_in02, int dynamic_address) {
  in_on_chip.in_on_chip_pw_math_in03_23_to_in_on_chip_load_to_in_on_chip_to_gp_3220223_46.push(in_on_chip_pw_math_in03_23);
  in_on_chip.in_on_chip_pw_math_in03_23_merged_banks_9.push(in_on_chip_pw_math_in03_23);
}

inline hw_uint<32>  in_on_chip_gp_in_on_chip_16_merged157_100_select(in_on_chip_cache& in_on_chip, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_gp_in_on_chip_16_merged157_100 read pattern: { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip[2 + 2gp_in_on_chip_16, 2 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Read schedule : { gp_in_on_chip_16_merged157[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 34 and 0 <= d2 <= 34 }
  // Write schedule: { pw_math_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 70 and 0 <= d2 <= 70 }
  auto value_in_on_chip_pw_math_in03_23 = in_on_chip.in_on_chip_pw_math_in03_23_merged_banks_9.peek_0();
  return value_in_on_chip_pw_math_in03_23;
  return 0;
}

inline hw_uint<32>  in_on_chip_gp_in_on_chip_16_merged157_101_select(in_on_chip_cache& in_on_chip, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_gp_in_on_chip_16_merged157_101 read pattern: { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip[2gp_in_on_chip_16, 1 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Read schedule : { gp_in_on_chip_16_merged157[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 34 and 0 <= d2 <= 34 }
  // Write schedule: { pw_math_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 70 and 0 <= d2 <= 70 }
  auto value_in_on_chip_pw_math_in03_23 = in_on_chip.in_on_chip_pw_math_in03_23_merged_banks_9.peek_73();
  return value_in_on_chip_pw_math_in03_23;
  return 0;
}

inline hw_uint<32>  in_on_chip_gp_in_on_chip_16_merged157_102_select(in_on_chip_cache& in_on_chip, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_gp_in_on_chip_16_merged157_102 read pattern: { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip[1 + 2gp_in_on_chip_16, 1 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Read schedule : { gp_in_on_chip_16_merged157[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 34 and 0 <= d2 <= 34 }
  // Write schedule: { pw_math_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 70 and 0 <= d2 <= 70 }
  auto value_in_on_chip_pw_math_in03_23 = in_on_chip.in_on_chip_pw_math_in03_23_merged_banks_9.peek_72();
  return value_in_on_chip_pw_math_in03_23;
  return 0;
}

inline hw_uint<32>  in_on_chip_gp_in_on_chip_16_merged157_103_select(in_on_chip_cache& in_on_chip, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_gp_in_on_chip_16_merged157_103 read pattern: { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip[2 + 2gp_in_on_chip_16, 1 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Read schedule : { gp_in_on_chip_16_merged157[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 34 and 0 <= d2 <= 34 }
  // Write schedule: { pw_math_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 70 and 0 <= d2 <= 70 }
  auto value_in_on_chip_pw_math_in03_23 = in_on_chip.in_on_chip_pw_math_in03_23_merged_banks_9.peek_71();
  return value_in_on_chip_pw_math_in03_23;
  return 0;
}

inline hw_uint<32>  in_on_chip_gp_in_on_chip_16_merged157_104_select(in_on_chip_cache& in_on_chip, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_gp_in_on_chip_16_merged157_104 read pattern: { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip[2gp_in_on_chip_16, 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Read schedule : { gp_in_on_chip_16_merged157[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 34 and 0 <= d2 <= 34 }
  // Write schedule: { pw_math_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 70 and 0 <= d2 <= 70 }
  auto value_in_on_chip_pw_math_in03_23 = in_on_chip.in_on_chip_pw_math_in03_23_merged_banks_9.peek_144();
  return value_in_on_chip_pw_math_in03_23;
  return 0;
}

inline hw_uint<32>  in_on_chip_gp_in_on_chip_16_merged157_105_select(in_on_chip_cache& in_on_chip, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_gp_in_on_chip_16_merged157_105 read pattern: { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip[1 + 2gp_in_on_chip_16, 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Read schedule : { gp_in_on_chip_16_merged157[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 34 and 0 <= d2 <= 34 }
  // Write schedule: { pw_math_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 70 and 0 <= d2 <= 70 }
  auto value_in_on_chip_pw_math_in03_23 = in_on_chip.in_on_chip_pw_math_in03_23_merged_banks_9.peek_143();
  return value_in_on_chip_pw_math_in03_23;
  return 0;
}

inline hw_uint<32>  in_on_chip_gp_in_on_chip_16_merged157_106_select(in_on_chip_cache& in_on_chip, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_gp_in_on_chip_16_merged157_106 read pattern: { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip[2 + 2gp_in_on_chip_16, 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Read schedule : { gp_in_on_chip_16_merged157[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 34 and 0 <= d2 <= 34 }
  // Write schedule: { pw_math_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 70 and 0 <= d2 <= 70 }
  auto value_in_on_chip_pw_math_in03_23 = in_on_chip.in_on_chip_pw_math_in03_23_merged_banks_9.peek_142();
  return value_in_on_chip_pw_math_in03_23;
  return 0;
}

inline hw_uint<32>  in_on_chip_gp_in_on_chip_16_merged157_98_select(in_on_chip_cache& in_on_chip, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_gp_in_on_chip_16_merged157_98 read pattern: { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip[2gp_in_on_chip_16, 2 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Read schedule : { gp_in_on_chip_16_merged157[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 34 and 0 <= d2 <= 34 }
  // Write schedule: { pw_math_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 70 and 0 <= d2 <= 70 }
  auto value_in_on_chip_pw_math_in03_23 = in_on_chip.in_on_chip_pw_math_in03_23_merged_banks_9.peek_2();
  return value_in_on_chip_pw_math_in03_23;
  return 0;
}

inline hw_uint<32>  in_on_chip_gp_in_on_chip_16_merged157_99_select(in_on_chip_cache& in_on_chip, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_gp_in_on_chip_16_merged157_99 read pattern: { gp_in_on_chip_16_merged157[root = 0, gp_in_on_chip_15, gp_in_on_chip_16] -> in_on_chip[1 + 2gp_in_on_chip_16, 2 + 2gp_in_on_chip_15] : 0 <= gp_in_on_chip_15 <= 34 and 0 <= gp_in_on_chip_16 <= 34 }
  // Read schedule : { gp_in_on_chip_16_merged157[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 34 and 0 <= d2 <= 34 }
  // Write schedule: { pw_math_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 70 and 0 <= d2 <= 70 }
  auto value_in_on_chip_pw_math_in03_23 = in_on_chip.in_on_chip_pw_math_in03_23_merged_banks_9.peek_1();
  return value_in_on_chip_pw_math_in03_23;
  return 0;
}

inline hw_uint<32>  in_on_chip_load_to_in_on_chip_to_gp_3220223_46_select(in_on_chip_cache& in_on_chip, int root, int in_on_chip_ld222, int in_on_chip_ld221, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_load_to_in_on_chip_to_gp_3220223_46 read pattern: { load_to_in_on_chip_to_gp_3220223[root = 0, in_on_chip_ld222, in_on_chip_ld221] -> in_on_chip[in_on_chip_ld221, in_on_chip_ld222] : 7 <= in_on_chip_ld222 <= 70 and 7 <= in_on_chip_ld221 <= 70 }
  // Read schedule : { load_to_in_on_chip_to_gp_3220223[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 1] : 7 <= d1 <= 70 and 7 <= d2 <= 70 }
  // Write schedule: { pw_math_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 70 and 0 <= d2 <= 70 }
  auto value_in_on_chip_pw_math_in03_23 = in_on_chip.in_on_chip_pw_math_in03_23_to_in_on_chip_load_to_in_on_chip_to_gp_3220223_46.peek(/* one reader or all rams */ (69 - in_on_chip_ld221 >= 0 && 69 - in_on_chip_ld222 >= 0) ? (72) : (-70 + in_on_chip_ld221 == 0 && 69 - in_on_chip_ld222 >= 0) ? (71) : (-70 + in_on_chip_ld222 == 0 && 69 - in_on_chip_ld221 >= 0) ? ((70 - in_on_chip_ld221)) : 0);
  return value_in_on_chip_pw_math_in03_23;
  return 0;
}

// # of bundles = 3
// gp_in_on_chip_16_merged157_read
//	in_on_chip_gp_in_on_chip_16_merged157_98
//	in_on_chip_gp_in_on_chip_16_merged157_99
//	in_on_chip_gp_in_on_chip_16_merged157_100
//	in_on_chip_gp_in_on_chip_16_merged157_101
//	in_on_chip_gp_in_on_chip_16_merged157_102
//	in_on_chip_gp_in_on_chip_16_merged157_103
//	in_on_chip_gp_in_on_chip_16_merged157_104
//	in_on_chip_gp_in_on_chip_16_merged157_105
//	in_on_chip_gp_in_on_chip_16_merged157_106
inline hw_uint<288> in_on_chip_gp_in_on_chip_16_merged157_read_bundle_read(in_on_chip_cache& in_on_chip, int root, int gp_in_on_chip_15, int gp_in_on_chip_16, int dynamic_address) {
  // # of ports in bundle: 9
    // in_on_chip_gp_in_on_chip_16_merged157_98
    // in_on_chip_gp_in_on_chip_16_merged157_99
    // in_on_chip_gp_in_on_chip_16_merged157_100
    // in_on_chip_gp_in_on_chip_16_merged157_101
    // in_on_chip_gp_in_on_chip_16_merged157_102
    // in_on_chip_gp_in_on_chip_16_merged157_103
    // in_on_chip_gp_in_on_chip_16_merged157_104
    // in_on_chip_gp_in_on_chip_16_merged157_105
    // in_on_chip_gp_in_on_chip_16_merged157_106

	hw_uint<288> result;
	hw_uint<32>  in_on_chip_gp_in_on_chip_16_merged157_98_res = in_on_chip_gp_in_on_chip_16_merged157_98_select(in_on_chip, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<0, 288>(result, in_on_chip_gp_in_on_chip_16_merged157_98_res);
	hw_uint<32>  in_on_chip_gp_in_on_chip_16_merged157_99_res = in_on_chip_gp_in_on_chip_16_merged157_99_select(in_on_chip, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<32, 288>(result, in_on_chip_gp_in_on_chip_16_merged157_99_res);
	hw_uint<32>  in_on_chip_gp_in_on_chip_16_merged157_100_res = in_on_chip_gp_in_on_chip_16_merged157_100_select(in_on_chip, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<64, 288>(result, in_on_chip_gp_in_on_chip_16_merged157_100_res);
	hw_uint<32>  in_on_chip_gp_in_on_chip_16_merged157_101_res = in_on_chip_gp_in_on_chip_16_merged157_101_select(in_on_chip, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<96, 288>(result, in_on_chip_gp_in_on_chip_16_merged157_101_res);
	hw_uint<32>  in_on_chip_gp_in_on_chip_16_merged157_102_res = in_on_chip_gp_in_on_chip_16_merged157_102_select(in_on_chip, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<128, 288>(result, in_on_chip_gp_in_on_chip_16_merged157_102_res);
	hw_uint<32>  in_on_chip_gp_in_on_chip_16_merged157_103_res = in_on_chip_gp_in_on_chip_16_merged157_103_select(in_on_chip, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<160, 288>(result, in_on_chip_gp_in_on_chip_16_merged157_103_res);
	hw_uint<32>  in_on_chip_gp_in_on_chip_16_merged157_104_res = in_on_chip_gp_in_on_chip_16_merged157_104_select(in_on_chip, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<192, 288>(result, in_on_chip_gp_in_on_chip_16_merged157_104_res);
	hw_uint<32>  in_on_chip_gp_in_on_chip_16_merged157_105_res = in_on_chip_gp_in_on_chip_16_merged157_105_select(in_on_chip, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<224, 288>(result, in_on_chip_gp_in_on_chip_16_merged157_105_res);
	hw_uint<32>  in_on_chip_gp_in_on_chip_16_merged157_106_res = in_on_chip_gp_in_on_chip_16_merged157_106_select(in_on_chip, root, gp_in_on_chip_15, gp_in_on_chip_16, dynamic_address);
	set_at<256, 288>(result, in_on_chip_gp_in_on_chip_16_merged157_106_res);
	return result;
}

// load_to_in_on_chip_to_gp_3220223_read
//	in_on_chip_load_to_in_on_chip_to_gp_3220223_46
inline hw_uint<32> in_on_chip_load_to_in_on_chip_to_gp_3220223_read_bundle_read(in_on_chip_cache& in_on_chip, int root, int in_on_chip_ld222, int in_on_chip_ld221, int dynamic_address) {
  // # of ports in bundle: 1
    // in_on_chip_load_to_in_on_chip_to_gp_3220223_46

	hw_uint<32> result;
	hw_uint<32>  in_on_chip_load_to_in_on_chip_to_gp_3220223_46_res = in_on_chip_load_to_in_on_chip_to_gp_3220223_46_select(in_on_chip, root, in_on_chip_ld222, in_on_chip_ld221, dynamic_address);
	set_at<0, 32>(result, in_on_chip_load_to_in_on_chip_to_gp_3220223_46_res);
	return result;
}

// pw_math_in03_write
//	in_on_chip_pw_math_in03_23
inline void in_on_chip_pw_math_in03_write_bundle_write(hw_uint<32>& pw_math_in03_write, in_on_chip_cache& in_on_chip, int root, int pw_math_in01, int pw_math_in02, int dynamic_address) {
	hw_uint<32>  in_on_chip_pw_math_in03_23_res = pw_math_in03_write.extract<0, 31>();
	in_on_chip_pw_math_in03_23_write(in_on_chip_pw_math_in03_23_res, in_on_chip, root, pw_math_in01, pw_math_in02, dynamic_address);
}

struct in_on_chip_FIFO_buf224_load_to_in_on_chip_FIFO_buf224227_47_to_in_on_chip_FIFO_buf224_diff51_108_cache {
	// RAM Box: {[7, 70], [7, 70]}
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

struct in_on_chip_FIFO_buf224_cache {
  // Reader addrs...
    // { diff51[root = 0, lp_in_on_chip_049, lp_in_on_chip_050] -> in_on_chip_FIFO_buf224[7 + lp_in_on_chip_050, 7 + lp_in_on_chip_049] : 0 <= lp_in_on_chip_049 <= 63 and 0 <= lp_in_on_chip_050 <= 63 }
  // # of banks: 1
  in_on_chip_FIFO_buf224_load_to_in_on_chip_FIFO_buf224227_47_to_in_on_chip_FIFO_buf224_diff51_108_cache in_on_chip_FIFO_buf224_load_to_in_on_chip_FIFO_buf224227_47_to_in_on_chip_FIFO_buf224_diff51_108;
};



inline void in_on_chip_FIFO_buf224_load_to_in_on_chip_FIFO_buf224227_47_write(hw_uint<32> & in_on_chip_FIFO_buf224_load_to_in_on_chip_FIFO_buf224227_47, in_on_chip_FIFO_buf224_cache& in_on_chip_FIFO_buf224, int root, int in_on_chip_to_gp_3220_ld226, int in_on_chip_to_gp_3220_ld225, int dynamic_address) {
  in_on_chip_FIFO_buf224.in_on_chip_FIFO_buf224_load_to_in_on_chip_FIFO_buf224227_47_to_in_on_chip_FIFO_buf224_diff51_108.push(in_on_chip_FIFO_buf224_load_to_in_on_chip_FIFO_buf224227_47);
}

inline hw_uint<32>  in_on_chip_FIFO_buf224_diff51_108_select(in_on_chip_FIFO_buf224_cache& in_on_chip_FIFO_buf224, int root, int lp_in_on_chip_049, int lp_in_on_chip_050, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_on_chip_FIFO_buf224_diff51_108 read pattern: { diff51[root = 0, lp_in_on_chip_049, lp_in_on_chip_050] -> in_on_chip_FIFO_buf224[7 + lp_in_on_chip_050, 7 + lp_in_on_chip_049] : 0 <= lp_in_on_chip_049 <= 63 and 0 <= lp_in_on_chip_050 <= 63 }
  // Read schedule : { diff51[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 19] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { load_to_in_on_chip_FIFO_buf224227[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 6] : 7 <= d1 <= 70 and 7 <= d2 <= 70 }
  auto value_in_on_chip_FIFO_buf224_load_to_in_on_chip_FIFO_buf224227_47 = in_on_chip_FIFO_buf224.in_on_chip_FIFO_buf224_load_to_in_on_chip_FIFO_buf224227_47_to_in_on_chip_FIFO_buf224_diff51_108.peek(/* one reader or all rams */ 0);
  return value_in_on_chip_FIFO_buf224_load_to_in_on_chip_FIFO_buf224227_47;
  return 0;
}

// # of bundles = 2
// diff51_read
//	in_on_chip_FIFO_buf224_diff51_108
inline hw_uint<32> in_on_chip_FIFO_buf224_diff51_read_bundle_read(in_on_chip_FIFO_buf224_cache& in_on_chip_FIFO_buf224, int root, int lp_in_on_chip_049, int lp_in_on_chip_050, int dynamic_address) {
  // # of ports in bundle: 1
    // in_on_chip_FIFO_buf224_diff51_108

	hw_uint<32> result;
	hw_uint<32>  in_on_chip_FIFO_buf224_diff51_108_res = in_on_chip_FIFO_buf224_diff51_108_select(in_on_chip_FIFO_buf224, root, lp_in_on_chip_049, lp_in_on_chip_050, dynamic_address);
	set_at<0, 32>(result, in_on_chip_FIFO_buf224_diff51_108_res);
	return result;
}

// load_to_in_on_chip_FIFO_buf224227_write
//	in_on_chip_FIFO_buf224_load_to_in_on_chip_FIFO_buf224227_47
inline void in_on_chip_FIFO_buf224_load_to_in_on_chip_FIFO_buf224227_write_bundle_write(hw_uint<32>& load_to_in_on_chip_FIFO_buf224227_write, in_on_chip_FIFO_buf224_cache& in_on_chip_FIFO_buf224, int root, int in_on_chip_to_gp_3220_ld226, int in_on_chip_to_gp_3220_ld225, int dynamic_address) {
	hw_uint<32>  in_on_chip_FIFO_buf224_load_to_in_on_chip_FIFO_buf224227_47_res = load_to_in_on_chip_FIFO_buf224227_write.extract<0, 31>();
	in_on_chip_FIFO_buf224_load_to_in_on_chip_FIFO_buf224227_47_write(in_on_chip_FIFO_buf224_load_to_in_on_chip_FIFO_buf224227_47_res, in_on_chip_FIFO_buf224, root, in_on_chip_to_gp_3220_ld226, in_on_chip_to_gp_3220_ld225, dynamic_address);
}

struct lp_in_on_chip_0_buf48_diff51_107_to_lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4228231_42_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct lp_in_on_chip_0_buf48_cache {
  // Reader addrs...
    // { load_to_lp_in_on_chip_0_buf48_to_gp_4228231[root = 0, lp_in_on_chip_0_buf48_ld230, lp_in_on_chip_0_buf48_ld229] -> lp_in_on_chip_0_buf48[lp_in_on_chip_0_buf48_ld229, lp_in_on_chip_0_buf48_ld230] : 0 <= lp_in_on_chip_0_buf48_ld230 <= 63 and 0 <= lp_in_on_chip_0_buf48_ld229 <= 63 }
  // # of banks: 1
  lp_in_on_chip_0_buf48_diff51_107_to_lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4228231_42_cache lp_in_on_chip_0_buf48_diff51_107_to_lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4228231_42;
};



inline void lp_in_on_chip_0_buf48_diff51_107_write(hw_uint<32> & lp_in_on_chip_0_buf48_diff51_107, lp_in_on_chip_0_buf48_cache& lp_in_on_chip_0_buf48, int root, int lp_in_on_chip_049, int lp_in_on_chip_050, int dynamic_address) {
  lp_in_on_chip_0_buf48.lp_in_on_chip_0_buf48_diff51_107_to_lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4228231_42.push(lp_in_on_chip_0_buf48_diff51_107);
}

inline hw_uint<32>  lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4228231_42_select(lp_in_on_chip_0_buf48_cache& lp_in_on_chip_0_buf48, int root, int lp_in_on_chip_0_buf48_ld230, int lp_in_on_chip_0_buf48_ld229, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4228231_42 read pattern: { load_to_lp_in_on_chip_0_buf48_to_gp_4228231[root = 0, lp_in_on_chip_0_buf48_ld230, lp_in_on_chip_0_buf48_ld229] -> lp_in_on_chip_0_buf48[lp_in_on_chip_0_buf48_ld229, lp_in_on_chip_0_buf48_ld230] : 0 <= lp_in_on_chip_0_buf48_ld230 <= 63 and 0 <= lp_in_on_chip_0_buf48_ld229 <= 63 }
  // Read schedule : { load_to_lp_in_on_chip_0_buf48_to_gp_4228231[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 26] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { diff51[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 19] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_lp_in_on_chip_0_buf48_diff51_107 = lp_in_on_chip_0_buf48.lp_in_on_chip_0_buf48_diff51_107_to_lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4228231_42.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_0_buf48_diff51_107;
  return 0;
}

// # of bundles = 2
// diff51_write
//	lp_in_on_chip_0_buf48_diff51_107
inline void lp_in_on_chip_0_buf48_diff51_write_bundle_write(hw_uint<32>& diff51_write, lp_in_on_chip_0_buf48_cache& lp_in_on_chip_0_buf48, int root, int lp_in_on_chip_049, int lp_in_on_chip_050, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_0_buf48_diff51_107_res = diff51_write.extract<0, 31>();
	lp_in_on_chip_0_buf48_diff51_107_write(lp_in_on_chip_0_buf48_diff51_107_res, lp_in_on_chip_0_buf48, root, lp_in_on_chip_049, lp_in_on_chip_050, dynamic_address);
}

// load_to_lp_in_on_chip_0_buf48_to_gp_4228231_read
//	lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4228231_42
inline hw_uint<32> lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4228231_read_bundle_read(lp_in_on_chip_0_buf48_cache& lp_in_on_chip_0_buf48, int root, int lp_in_on_chip_0_buf48_ld230, int lp_in_on_chip_0_buf48_ld229, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4228231_42

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4228231_42_res = lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4228231_42_select(lp_in_on_chip_0_buf48, root, lp_in_on_chip_0_buf48_ld230, lp_in_on_chip_0_buf48_ld229, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4228231_42_res);
	return result;
}

struct lp_in_on_chip_0_buf48_FIFO_buf232_load_to_lp_in_on_chip_0_buf48_FIFO_buf232235_43_to_lp_in_on_chip_0_buf48_FIFO_buf232_rc78_13_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct lp_in_on_chip_0_buf48_FIFO_buf232_cache {
  // Reader addrs...
    // { rc78[root = 0, lp_in_on_chip_0_buf48_reconstruct_lp7071, lp_in_on_chip_0_buf48_reconstruct_lp7072] -> lp_in_on_chip_0_buf48_FIFO_buf232[lp_in_on_chip_0_buf48_reconstruct_lp7072, lp_in_on_chip_0_buf48_reconstruct_lp7071] : 0 <= lp_in_on_chip_0_buf48_reconstruct_lp7071 <= 63 and 0 <= lp_in_on_chip_0_buf48_reconstruct_lp7072 <= 63 }
  // # of banks: 1
  lp_in_on_chip_0_buf48_FIFO_buf232_load_to_lp_in_on_chip_0_buf48_FIFO_buf232235_43_to_lp_in_on_chip_0_buf48_FIFO_buf232_rc78_13_cache lp_in_on_chip_0_buf48_FIFO_buf232_load_to_lp_in_on_chip_0_buf48_FIFO_buf232235_43_to_lp_in_on_chip_0_buf48_FIFO_buf232_rc78_13;
};



inline void lp_in_on_chip_0_buf48_FIFO_buf232_load_to_lp_in_on_chip_0_buf48_FIFO_buf232235_43_write(hw_uint<32> & lp_in_on_chip_0_buf48_FIFO_buf232_load_to_lp_in_on_chip_0_buf48_FIFO_buf232235_43, lp_in_on_chip_0_buf48_FIFO_buf232_cache& lp_in_on_chip_0_buf48_FIFO_buf232, int root, int lp_in_on_chip_0_buf48_to_gp_4228_ld234, int lp_in_on_chip_0_buf48_to_gp_4228_ld233, int dynamic_address) {
  lp_in_on_chip_0_buf48_FIFO_buf232.lp_in_on_chip_0_buf48_FIFO_buf232_load_to_lp_in_on_chip_0_buf48_FIFO_buf232235_43_to_lp_in_on_chip_0_buf48_FIFO_buf232_rc78_13.push(lp_in_on_chip_0_buf48_FIFO_buf232_load_to_lp_in_on_chip_0_buf48_FIFO_buf232235_43);
}

inline hw_uint<32>  lp_in_on_chip_0_buf48_FIFO_buf232_rc78_13_select(lp_in_on_chip_0_buf48_FIFO_buf232_cache& lp_in_on_chip_0_buf48_FIFO_buf232, int root, int lp_in_on_chip_0_buf48_reconstruct_lp7071, int lp_in_on_chip_0_buf48_reconstruct_lp7072, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_0_buf48_FIFO_buf232_rc78_13 read pattern: { rc78[root = 0, lp_in_on_chip_0_buf48_reconstruct_lp7071, lp_in_on_chip_0_buf48_reconstruct_lp7072] -> lp_in_on_chip_0_buf48_FIFO_buf232[lp_in_on_chip_0_buf48_reconstruct_lp7072, lp_in_on_chip_0_buf48_reconstruct_lp7071] : 0 <= lp_in_on_chip_0_buf48_reconstruct_lp7071 <= 63 and 0 <= lp_in_on_chip_0_buf48_reconstruct_lp7072 <= 63 }
  // Read schedule : { rc78[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 41] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { load_to_lp_in_on_chip_0_buf48_FIFO_buf232235[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 29] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_lp_in_on_chip_0_buf48_FIFO_buf232_load_to_lp_in_on_chip_0_buf48_FIFO_buf232235_43 = lp_in_on_chip_0_buf48_FIFO_buf232.lp_in_on_chip_0_buf48_FIFO_buf232_load_to_lp_in_on_chip_0_buf48_FIFO_buf232235_43_to_lp_in_on_chip_0_buf48_FIFO_buf232_rc78_13.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_0_buf48_FIFO_buf232_load_to_lp_in_on_chip_0_buf48_FIFO_buf232235_43;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_0_buf48_FIFO_buf232235_write
//	lp_in_on_chip_0_buf48_FIFO_buf232_load_to_lp_in_on_chip_0_buf48_FIFO_buf232235_43
inline void lp_in_on_chip_0_buf48_FIFO_buf232_load_to_lp_in_on_chip_0_buf48_FIFO_buf232235_write_bundle_write(hw_uint<32>& load_to_lp_in_on_chip_0_buf48_FIFO_buf232235_write, lp_in_on_chip_0_buf48_FIFO_buf232_cache& lp_in_on_chip_0_buf48_FIFO_buf232, int root, int lp_in_on_chip_0_buf48_to_gp_4228_ld234, int lp_in_on_chip_0_buf48_to_gp_4228_ld233, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_0_buf48_FIFO_buf232_load_to_lp_in_on_chip_0_buf48_FIFO_buf232235_43_res = load_to_lp_in_on_chip_0_buf48_FIFO_buf232235_write.extract<0, 31>();
	lp_in_on_chip_0_buf48_FIFO_buf232_load_to_lp_in_on_chip_0_buf48_FIFO_buf232235_43_write(lp_in_on_chip_0_buf48_FIFO_buf232_load_to_lp_in_on_chip_0_buf48_FIFO_buf232235_43_res, lp_in_on_chip_0_buf48_FIFO_buf232, root, lp_in_on_chip_0_buf48_to_gp_4228_ld234, lp_in_on_chip_0_buf48_to_gp_4228_ld233, dynamic_address);
}

// rc78_read
//	lp_in_on_chip_0_buf48_FIFO_buf232_rc78_13
inline hw_uint<32> lp_in_on_chip_0_buf48_FIFO_buf232_rc78_read_bundle_read(lp_in_on_chip_0_buf48_FIFO_buf232_cache& lp_in_on_chip_0_buf48_FIFO_buf232, int root, int lp_in_on_chip_0_buf48_reconstruct_lp7071, int lp_in_on_chip_0_buf48_reconstruct_lp7072, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_0_buf48_FIFO_buf232_rc78_13

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_0_buf48_FIFO_buf232_rc78_13_res = lp_in_on_chip_0_buf48_FIFO_buf232_rc78_13_select(lp_in_on_chip_0_buf48_FIFO_buf232, root, lp_in_on_chip_0_buf48_reconstruct_lp7071, lp_in_on_chip_0_buf48_reconstruct_lp7072, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_0_buf48_FIFO_buf232_rc78_13_res);
	return result;
}

struct lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_22_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_cache {
  // Reader addrs...
    // { pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982[root = 0, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981] -> lp_in_on_chip_0_buf48_reconstruct_lp70_buf73[pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980] : 0 <= pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980 <= 63 and 0 <= pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981 <= 63 }
  // # of banks: 1
  lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_22_cache lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_22;
};



inline void lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12_write(hw_uint<32> & lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_cache& lp_in_on_chip_0_buf48_reconstruct_lp70_buf73, int root, int lp_in_on_chip_0_buf48_reconstruct_lp7071, int lp_in_on_chip_0_buf48_reconstruct_lp7072, int dynamic_address) {
  lp_in_on_chip_0_buf48_reconstruct_lp70_buf73.lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_22.push(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12);
}

inline hw_uint<32>  lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_22_select(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_cache& lp_in_on_chip_0_buf48_reconstruct_lp70_buf73, int root, int pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980, int pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_22 read pattern: { pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982[root = 0, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981] -> lp_in_on_chip_0_buf48_reconstruct_lp70_buf73[pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980] : 0 <= pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980 <= 63 and 0 <= pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981 <= 63 }
  // Read schedule : { pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 42] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { rc78[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 41] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12 = lp_in_on_chip_0_buf48_reconstruct_lp70_buf73.lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12_to_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_22.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12;
  return 0;
}

// # of bundles = 2
// pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_read
//	lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_22
inline hw_uint<32> lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_read_bundle_read(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_cache& lp_in_on_chip_0_buf48_reconstruct_lp70_buf73, int root, int pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980, int pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_22

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_22_res = lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_22_select(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73, root, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_22_res);
	return result;
}

// rc78_write
//	lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12
inline void lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_write_bundle_write(hw_uint<32>& rc78_write, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_cache& lp_in_on_chip_0_buf48_reconstruct_lp70_buf73, int root, int lp_in_on_chip_0_buf48_reconstruct_lp7071, int lp_in_on_chip_0_buf48_reconstruct_lp7072, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12_res = rc78_write.extract<0, 31>();
	lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12_write(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_12_res, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73, root, lp_in_on_chip_0_buf48_reconstruct_lp7071, lp_in_on_chip_0_buf48_reconstruct_lp7072, dynamic_address);
}

struct lp_in_on_chip_1_buf40_diff43_110_to_lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6236239_34_cache {
	// RAM Box: {[0, 31], [0, 31]}
	// Capacity: 67
	// # of read delays: 67
  // 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66
	fifo<hw_uint<32> , 67> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(66 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct lp_in_on_chip_1_buf40_cache {
  // Reader addrs...
    // { load_to_lp_in_on_chip_1_buf40_to_gp_6236239[root = 0, lp_in_on_chip_1_buf40_ld238, lp_in_on_chip_1_buf40_ld237] -> lp_in_on_chip_1_buf40[lp_in_on_chip_1_buf40_ld237, lp_in_on_chip_1_buf40_ld238] : 0 <= lp_in_on_chip_1_buf40_ld238 <= 31 and 0 <= lp_in_on_chip_1_buf40_ld237 <= 31 }
  // # of banks: 1
  lp_in_on_chip_1_buf40_diff43_110_to_lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6236239_34_cache lp_in_on_chip_1_buf40_diff43_110_to_lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6236239_34;
};



inline void lp_in_on_chip_1_buf40_diff43_110_write(hw_uint<32> & lp_in_on_chip_1_buf40_diff43_110, lp_in_on_chip_1_buf40_cache& lp_in_on_chip_1_buf40, int root, int lp_in_on_chip_141, int lp_in_on_chip_142, int dynamic_address) {
  lp_in_on_chip_1_buf40.lp_in_on_chip_1_buf40_diff43_110_to_lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6236239_34.push(lp_in_on_chip_1_buf40_diff43_110);
}

inline hw_uint<32>  lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6236239_34_select(lp_in_on_chip_1_buf40_cache& lp_in_on_chip_1_buf40, int root, int lp_in_on_chip_1_buf40_ld238, int lp_in_on_chip_1_buf40_ld237, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6236239_34 read pattern: { load_to_lp_in_on_chip_1_buf40_to_gp_6236239[root = 0, lp_in_on_chip_1_buf40_ld238, lp_in_on_chip_1_buf40_ld237] -> lp_in_on_chip_1_buf40[lp_in_on_chip_1_buf40_ld237, lp_in_on_chip_1_buf40_ld238] : 0 <= lp_in_on_chip_1_buf40_ld238 <= 31 and 0 <= lp_in_on_chip_1_buf40_ld237 <= 31 }
  // Read schedule : { load_to_lp_in_on_chip_1_buf40_to_gp_6236239[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 25] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  // Write schedule: { diff43[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 24] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  auto value_lp_in_on_chip_1_buf40_diff43_110 = lp_in_on_chip_1_buf40.lp_in_on_chip_1_buf40_diff43_110_to_lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6236239_34.peek(/* one reader or all rams */ (-31 + lp_in_on_chip_1_buf40_ld237 == 0 && -30 + lp_in_on_chip_1_buf40_ld238 == 0) ? (32) : (-31 + lp_in_on_chip_1_buf40_ld237 == 0 && 29 - lp_in_on_chip_1_buf40_ld238 >= 0) ? (64) : (-30 + lp_in_on_chip_1_buf40_ld237 == 0 && 29 - lp_in_on_chip_1_buf40_ld238 >= 0) ? (65) : (29 - lp_in_on_chip_1_buf40_ld237 >= 0 && 29 - lp_in_on_chip_1_buf40_ld238 >= 0) ? (66) : (-31 + lp_in_on_chip_1_buf40_ld238 == 0 && 30 - lp_in_on_chip_1_buf40_ld237 >= 0) ? ((31 - lp_in_on_chip_1_buf40_ld237)) : (-30 + lp_in_on_chip_1_buf40_ld238 == 0 && 30 - lp_in_on_chip_1_buf40_ld237 >= 0) ? ((63 - lp_in_on_chip_1_buf40_ld237)) : 0);
  return value_lp_in_on_chip_1_buf40_diff43_110;
  return 0;
}

// # of bundles = 2
// diff43_write
//	lp_in_on_chip_1_buf40_diff43_110
inline void lp_in_on_chip_1_buf40_diff43_write_bundle_write(hw_uint<32>& diff43_write, lp_in_on_chip_1_buf40_cache& lp_in_on_chip_1_buf40, int root, int lp_in_on_chip_141, int lp_in_on_chip_142, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_1_buf40_diff43_110_res = diff43_write.extract<0, 31>();
	lp_in_on_chip_1_buf40_diff43_110_write(lp_in_on_chip_1_buf40_diff43_110_res, lp_in_on_chip_1_buf40, root, lp_in_on_chip_141, lp_in_on_chip_142, dynamic_address);
}

// load_to_lp_in_on_chip_1_buf40_to_gp_6236239_read
//	lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6236239_34
inline hw_uint<32> lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6236239_read_bundle_read(lp_in_on_chip_1_buf40_cache& lp_in_on_chip_1_buf40, int root, int lp_in_on_chip_1_buf40_ld238, int lp_in_on_chip_1_buf40_ld237, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6236239_34

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6236239_34_res = lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6236239_34_select(lp_in_on_chip_1_buf40, root, lp_in_on_chip_1_buf40_ld238, lp_in_on_chip_1_buf40_ld237, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6236239_34_res);
	return result;
}

struct lp_in_on_chip_1_buf40_FIFO_buf240_load_to_lp_in_on_chip_1_buf40_FIFO_buf240243_39_to_lp_in_on_chip_1_buf40_FIFO_buf240_rc69_16_cache {
	// RAM Box: {[0, 31], [0, 31]}
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

struct lp_in_on_chip_1_buf40_FIFO_buf240_cache {
  // Reader addrs...
    // { rc69[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp6162, lp_in_on_chip_1_buf40_reconstruct_lp6163] -> lp_in_on_chip_1_buf40_FIFO_buf240[lp_in_on_chip_1_buf40_reconstruct_lp6163, lp_in_on_chip_1_buf40_reconstruct_lp6162] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp6162 <= 31 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp6163 <= 31 }
  // # of banks: 1
  lp_in_on_chip_1_buf40_FIFO_buf240_load_to_lp_in_on_chip_1_buf40_FIFO_buf240243_39_to_lp_in_on_chip_1_buf40_FIFO_buf240_rc69_16_cache lp_in_on_chip_1_buf40_FIFO_buf240_load_to_lp_in_on_chip_1_buf40_FIFO_buf240243_39_to_lp_in_on_chip_1_buf40_FIFO_buf240_rc69_16;
};



inline void lp_in_on_chip_1_buf40_FIFO_buf240_load_to_lp_in_on_chip_1_buf40_FIFO_buf240243_39_write(hw_uint<32> & lp_in_on_chip_1_buf40_FIFO_buf240_load_to_lp_in_on_chip_1_buf40_FIFO_buf240243_39, lp_in_on_chip_1_buf40_FIFO_buf240_cache& lp_in_on_chip_1_buf40_FIFO_buf240, int root, int lp_in_on_chip_1_buf40_to_gp_6236_ld242, int lp_in_on_chip_1_buf40_to_gp_6236_ld241, int dynamic_address) {
  lp_in_on_chip_1_buf40_FIFO_buf240.lp_in_on_chip_1_buf40_FIFO_buf240_load_to_lp_in_on_chip_1_buf40_FIFO_buf240243_39_to_lp_in_on_chip_1_buf40_FIFO_buf240_rc69_16.push(lp_in_on_chip_1_buf40_FIFO_buf240_load_to_lp_in_on_chip_1_buf40_FIFO_buf240243_39);
}

inline hw_uint<32>  lp_in_on_chip_1_buf40_FIFO_buf240_rc69_16_select(lp_in_on_chip_1_buf40_FIFO_buf240_cache& lp_in_on_chip_1_buf40_FIFO_buf240, int root, int lp_in_on_chip_1_buf40_reconstruct_lp6162, int lp_in_on_chip_1_buf40_reconstruct_lp6163, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_1_buf40_FIFO_buf240_rc69_16 read pattern: { rc69[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp6162, lp_in_on_chip_1_buf40_reconstruct_lp6163] -> lp_in_on_chip_1_buf40_FIFO_buf240[lp_in_on_chip_1_buf40_reconstruct_lp6163, lp_in_on_chip_1_buf40_reconstruct_lp6162] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp6162 <= 31 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp6163 <= 31 }
  // Read schedule : { rc69[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 37] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  // Write schedule: { load_to_lp_in_on_chip_1_buf40_FIFO_buf240243[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 27] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  auto value_lp_in_on_chip_1_buf40_FIFO_buf240_load_to_lp_in_on_chip_1_buf40_FIFO_buf240243_39 = lp_in_on_chip_1_buf40_FIFO_buf240.lp_in_on_chip_1_buf40_FIFO_buf240_load_to_lp_in_on_chip_1_buf40_FIFO_buf240243_39_to_lp_in_on_chip_1_buf40_FIFO_buf240_rc69_16.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_1_buf40_FIFO_buf240_load_to_lp_in_on_chip_1_buf40_FIFO_buf240243_39;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_1_buf40_FIFO_buf240243_write
//	lp_in_on_chip_1_buf40_FIFO_buf240_load_to_lp_in_on_chip_1_buf40_FIFO_buf240243_39
inline void lp_in_on_chip_1_buf40_FIFO_buf240_load_to_lp_in_on_chip_1_buf40_FIFO_buf240243_write_bundle_write(hw_uint<32>& load_to_lp_in_on_chip_1_buf40_FIFO_buf240243_write, lp_in_on_chip_1_buf40_FIFO_buf240_cache& lp_in_on_chip_1_buf40_FIFO_buf240, int root, int lp_in_on_chip_1_buf40_to_gp_6236_ld242, int lp_in_on_chip_1_buf40_to_gp_6236_ld241, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_1_buf40_FIFO_buf240_load_to_lp_in_on_chip_1_buf40_FIFO_buf240243_39_res = load_to_lp_in_on_chip_1_buf40_FIFO_buf240243_write.extract<0, 31>();
	lp_in_on_chip_1_buf40_FIFO_buf240_load_to_lp_in_on_chip_1_buf40_FIFO_buf240243_39_write(lp_in_on_chip_1_buf40_FIFO_buf240_load_to_lp_in_on_chip_1_buf40_FIFO_buf240243_39_res, lp_in_on_chip_1_buf40_FIFO_buf240, root, lp_in_on_chip_1_buf40_to_gp_6236_ld242, lp_in_on_chip_1_buf40_to_gp_6236_ld241, dynamic_address);
}

// rc69_read
//	lp_in_on_chip_1_buf40_FIFO_buf240_rc69_16
inline hw_uint<32> lp_in_on_chip_1_buf40_FIFO_buf240_rc69_read_bundle_read(lp_in_on_chip_1_buf40_FIFO_buf240_cache& lp_in_on_chip_1_buf40_FIFO_buf240, int root, int lp_in_on_chip_1_buf40_reconstruct_lp6162, int lp_in_on_chip_1_buf40_reconstruct_lp6163, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_1_buf40_FIFO_buf240_rc69_16

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_1_buf40_FIFO_buf240_rc69_16_res = lp_in_on_chip_1_buf40_FIFO_buf240_rc69_16_select(lp_in_on_chip_1_buf40_FIFO_buf240, root, lp_in_on_chip_1_buf40_reconstruct_lp6162, lp_in_on_chip_1_buf40_reconstruct_lp6163, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_1_buf40_FIFO_buf240_rc69_16_res);
	return result;
}

struct lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us77_1_cache {
	// RAM Box: {[0, 31], [0, 31]}
	// Capacity: 32
	// # of read delays: 33
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31
	fifo<hw_uint<32> , 32> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(31 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_cache {
  // Reader addrs...
    // { us77[root = 0, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476] -> lp_in_on_chip_1_buf40_reconstruct_lp61_buf64[o0, o1] : 0 <= us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475 <= 63 and 0 <= us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476 <= 63 and -1 + us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476 <= 2o0 <= us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476 and -1 + us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475 <= 2o1 <= us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475 }
  // # of banks: 1
  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us77_1_cache lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us77_1;
};



inline void lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15_write(hw_uint<32> & lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64, int root, int lp_in_on_chip_1_buf40_reconstruct_lp6162, int lp_in_on_chip_1_buf40_reconstruct_lp6163, int dynamic_address) {
  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64.lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us77_1.push(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15);
}

inline hw_uint<32>  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us77_1_select(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64, int root, int us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, int us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us77_1 read pattern: { us77[root = 0, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476] -> lp_in_on_chip_1_buf40_reconstruct_lp61_buf64[o0, o1] : 0 <= us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475 <= 63 and 0 <= us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476 <= 63 and -1 + us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476 <= 2o0 <= us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476 and -1 + us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475 <= 2o1 <= us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475 }
  // Read schedule : { us77[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 38] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { rc69[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 37] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  auto value_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15 = lp_in_on_chip_1_buf40_reconstruct_lp61_buf64.lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us77_1.peek(/* one reader or all rams */ ((-1 - us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475) % 2 == 0 && 61 - us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476 >= 0) ? ((31 - floord(2*us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476, 4))) : 0);
  return value_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15;
  return 0;
}

// # of bundles = 2
// rc69_write
//	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15
inline void lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_write_bundle_write(hw_uint<32>& rc69_write, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64, int root, int lp_in_on_chip_1_buf40_reconstruct_lp6162, int lp_in_on_chip_1_buf40_reconstruct_lp6163, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15_res = rc69_write.extract<0, 31>();
	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15_write(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_15_res, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64, root, lp_in_on_chip_1_buf40_reconstruct_lp6162, lp_in_on_chip_1_buf40_reconstruct_lp6163, dynamic_address);
}

// us77_read
//	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us77_1
inline hw_uint<32> lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us77_read_bundle_read(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64, int root, int us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, int us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us77_1

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us77_1_res = lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us77_1_select(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64, root, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us77_1_res);
	return result;
}

struct lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244247_36_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_cache {
  // Reader addrs...
    // { load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244247[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld246, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld245] -> lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74[lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld245, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld246] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld246 <= 63 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld245 <= 63 }
  // # of banks: 1
  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244247_36_cache lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244247_36;
};



inline void lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0_write(hw_uint<32> & lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74, int root, int us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, int us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476, int dynamic_address) {
  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74.lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244247_36.push(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0);
}

inline hw_uint<32>  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244247_36_select(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74, int root, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld246, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld245, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244247_36 read pattern: { load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244247[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld246, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld245] -> lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74[lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld245, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld246] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld246 <= 63 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld245 <= 63 }
  // Read schedule : { load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244247[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 39] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { us77[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 38] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0 = lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74.lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244247_36.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244247_read
//	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244247_36
inline hw_uint<32> lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244247_read_bundle_read(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74, int root, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld246, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld245, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244247_36

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244247_36_res = lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244247_36_select(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74, root, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld246, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld245, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244247_36_res);
	return result;
}

// us77_write
//	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0
inline void lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_write_bundle_write(hw_uint<32>& us77_write, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74, int root, int us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, int us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0_res = us77_write.extract<0, 31>();
	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0_write(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_0_res, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74, root, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475, us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476, dynamic_address);
}

struct lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248251_37_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_rc78_14_cache {
	// RAM Box: {[0, 63], [0, 63]}
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

struct lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_cache {
  // Reader addrs...
    // { rc78[root = 0, lp_in_on_chip_0_buf48_reconstruct_lp7071, lp_in_on_chip_0_buf48_reconstruct_lp7072] -> lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248[lp_in_on_chip_0_buf48_reconstruct_lp7072, lp_in_on_chip_0_buf48_reconstruct_lp7071] : 0 <= lp_in_on_chip_0_buf48_reconstruct_lp7071 <= 63 and 0 <= lp_in_on_chip_0_buf48_reconstruct_lp7072 <= 63 }
  // # of banks: 1
  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248251_37_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_rc78_14_cache lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248251_37_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_rc78_14;
};



inline void lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248251_37_write(hw_uint<32> & lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248251_37, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248, int root, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244_ld250, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244_ld249, int dynamic_address) {
  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248.lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248251_37_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_rc78_14.push(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248251_37);
}

inline hw_uint<32>  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_rc78_14_select(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248, int root, int lp_in_on_chip_0_buf48_reconstruct_lp7071, int lp_in_on_chip_0_buf48_reconstruct_lp7072, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_rc78_14 read pattern: { rc78[root = 0, lp_in_on_chip_0_buf48_reconstruct_lp7071, lp_in_on_chip_0_buf48_reconstruct_lp7072] -> lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248[lp_in_on_chip_0_buf48_reconstruct_lp7072, lp_in_on_chip_0_buf48_reconstruct_lp7071] : 0 <= lp_in_on_chip_0_buf48_reconstruct_lp7071 <= 63 and 0 <= lp_in_on_chip_0_buf48_reconstruct_lp7072 <= 63 }
  // Read schedule : { rc78[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 41] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248251[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 40] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  auto value_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248251_37 = lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248.lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248251_37_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_rc78_14.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248251_37;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248251_write
//	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248251_37
inline void lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248251_write_bundle_write(hw_uint<32>& load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248251_write, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248, int root, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244_ld250, int lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244_ld249, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248251_37_res = load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248251_write.extract<0, 31>();
	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248251_37_write(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248251_37_res, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248, root, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244_ld250, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244_ld249, dynamic_address);
}

// rc78_read
//	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_rc78_14
inline hw_uint<32> lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_rc78_read_bundle_read(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248, int root, int lp_in_on_chip_0_buf48_reconstruct_lp7071, int lp_in_on_chip_0_buf48_reconstruct_lp7072, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_rc78_14

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_rc78_14_res = lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_rc78_14_select(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248, root, lp_in_on_chip_0_buf48_reconstruct_lp7071, lp_in_on_chip_0_buf48_reconstruct_lp7072, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_rc78_14_res);
	return result;
}

struct lp_in_on_chip_2_buf32_diff35_113_to_lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8252255_26_cache {
	// RAM Box: {[0, 15], [0, 15]}
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

struct lp_in_on_chip_2_buf32_cache {
  // Reader addrs...
    // { load_to_lp_in_on_chip_2_buf32_to_gp_8252255[root = 0, lp_in_on_chip_2_buf32_ld254, lp_in_on_chip_2_buf32_ld253] -> lp_in_on_chip_2_buf32[lp_in_on_chip_2_buf32_ld253, lp_in_on_chip_2_buf32_ld254] : 0 <= lp_in_on_chip_2_buf32_ld254 <= 15 and 0 <= lp_in_on_chip_2_buf32_ld253 <= 15 }
  // # of banks: 1
  lp_in_on_chip_2_buf32_diff35_113_to_lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8252255_26_cache lp_in_on_chip_2_buf32_diff35_113_to_lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8252255_26;
};



inline void lp_in_on_chip_2_buf32_diff35_113_write(hw_uint<32> & lp_in_on_chip_2_buf32_diff35_113, lp_in_on_chip_2_buf32_cache& lp_in_on_chip_2_buf32, int root, int lp_in_on_chip_233, int lp_in_on_chip_234, int dynamic_address) {
  lp_in_on_chip_2_buf32.lp_in_on_chip_2_buf32_diff35_113_to_lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8252255_26.push(lp_in_on_chip_2_buf32_diff35_113);
}

inline hw_uint<32>  lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8252255_26_select(lp_in_on_chip_2_buf32_cache& lp_in_on_chip_2_buf32, int root, int lp_in_on_chip_2_buf32_ld254, int lp_in_on_chip_2_buf32_ld253, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8252255_26 read pattern: { load_to_lp_in_on_chip_2_buf32_to_gp_8252255[root = 0, lp_in_on_chip_2_buf32_ld254, lp_in_on_chip_2_buf32_ld253] -> lp_in_on_chip_2_buf32[lp_in_on_chip_2_buf32_ld253, lp_in_on_chip_2_buf32_ld254] : 0 <= lp_in_on_chip_2_buf32_ld254 <= 15 and 0 <= lp_in_on_chip_2_buf32_ld253 <= 15 }
  // Read schedule : { load_to_lp_in_on_chip_2_buf32_to_gp_8252255[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 31] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  // Write schedule: { diff35[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 30] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  auto value_lp_in_on_chip_2_buf32_diff35_113 = lp_in_on_chip_2_buf32.lp_in_on_chip_2_buf32_diff35_113_to_lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8252255_26.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_2_buf32_diff35_113;
  return 0;
}

// # of bundles = 2
// diff35_write
//	lp_in_on_chip_2_buf32_diff35_113
inline void lp_in_on_chip_2_buf32_diff35_write_bundle_write(hw_uint<32>& diff35_write, lp_in_on_chip_2_buf32_cache& lp_in_on_chip_2_buf32, int root, int lp_in_on_chip_233, int lp_in_on_chip_234, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_2_buf32_diff35_113_res = diff35_write.extract<0, 31>();
	lp_in_on_chip_2_buf32_diff35_113_write(lp_in_on_chip_2_buf32_diff35_113_res, lp_in_on_chip_2_buf32, root, lp_in_on_chip_233, lp_in_on_chip_234, dynamic_address);
}

// load_to_lp_in_on_chip_2_buf32_to_gp_8252255_read
//	lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8252255_26
inline hw_uint<32> lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8252255_read_bundle_read(lp_in_on_chip_2_buf32_cache& lp_in_on_chip_2_buf32, int root, int lp_in_on_chip_2_buf32_ld254, int lp_in_on_chip_2_buf32_ld253, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8252255_26

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8252255_26_res = lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8252255_26_select(lp_in_on_chip_2_buf32, root, lp_in_on_chip_2_buf32_ld254, lp_in_on_chip_2_buf32_ld253, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8252255_26_res);
	return result;
}

struct lp_in_on_chip_2_buf32_FIFO_buf256_load_to_lp_in_on_chip_2_buf32_FIFO_buf256259_31_to_lp_in_on_chip_2_buf32_FIFO_buf256_rc60_19_cache {
	// RAM Box: {[0, 15], [0, 15]}
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

struct lp_in_on_chip_2_buf32_FIFO_buf256_cache {
  // Reader addrs...
    // { rc60[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp5253, lp_in_on_chip_2_buf32_reconstruct_lp5254] -> lp_in_on_chip_2_buf32_FIFO_buf256[lp_in_on_chip_2_buf32_reconstruct_lp5254, lp_in_on_chip_2_buf32_reconstruct_lp5253] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp5253 <= 15 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp5254 <= 15 }
  // # of banks: 1
  lp_in_on_chip_2_buf32_FIFO_buf256_load_to_lp_in_on_chip_2_buf32_FIFO_buf256259_31_to_lp_in_on_chip_2_buf32_FIFO_buf256_rc60_19_cache lp_in_on_chip_2_buf32_FIFO_buf256_load_to_lp_in_on_chip_2_buf32_FIFO_buf256259_31_to_lp_in_on_chip_2_buf32_FIFO_buf256_rc60_19;
};



inline void lp_in_on_chip_2_buf32_FIFO_buf256_load_to_lp_in_on_chip_2_buf32_FIFO_buf256259_31_write(hw_uint<32> & lp_in_on_chip_2_buf32_FIFO_buf256_load_to_lp_in_on_chip_2_buf32_FIFO_buf256259_31, lp_in_on_chip_2_buf32_FIFO_buf256_cache& lp_in_on_chip_2_buf32_FIFO_buf256, int root, int lp_in_on_chip_2_buf32_to_gp_8252_ld258, int lp_in_on_chip_2_buf32_to_gp_8252_ld257, int dynamic_address) {
  lp_in_on_chip_2_buf32_FIFO_buf256.lp_in_on_chip_2_buf32_FIFO_buf256_load_to_lp_in_on_chip_2_buf32_FIFO_buf256259_31_to_lp_in_on_chip_2_buf32_FIFO_buf256_rc60_19.push(lp_in_on_chip_2_buf32_FIFO_buf256_load_to_lp_in_on_chip_2_buf32_FIFO_buf256259_31);
}

inline hw_uint<32>  lp_in_on_chip_2_buf32_FIFO_buf256_rc60_19_select(lp_in_on_chip_2_buf32_FIFO_buf256_cache& lp_in_on_chip_2_buf32_FIFO_buf256, int root, int lp_in_on_chip_2_buf32_reconstruct_lp5253, int lp_in_on_chip_2_buf32_reconstruct_lp5254, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_2_buf32_FIFO_buf256_rc60_19 read pattern: { rc60[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp5253, lp_in_on_chip_2_buf32_reconstruct_lp5254] -> lp_in_on_chip_2_buf32_FIFO_buf256[lp_in_on_chip_2_buf32_reconstruct_lp5254, lp_in_on_chip_2_buf32_reconstruct_lp5253] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp5253 <= 15 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp5254 <= 15 }
  // Read schedule : { rc60[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 33] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  // Write schedule: { load_to_lp_in_on_chip_2_buf32_FIFO_buf256259[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 32] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  auto value_lp_in_on_chip_2_buf32_FIFO_buf256_load_to_lp_in_on_chip_2_buf32_FIFO_buf256259_31 = lp_in_on_chip_2_buf32_FIFO_buf256.lp_in_on_chip_2_buf32_FIFO_buf256_load_to_lp_in_on_chip_2_buf32_FIFO_buf256259_31_to_lp_in_on_chip_2_buf32_FIFO_buf256_rc60_19.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_2_buf32_FIFO_buf256_load_to_lp_in_on_chip_2_buf32_FIFO_buf256259_31;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_2_buf32_FIFO_buf256259_write
//	lp_in_on_chip_2_buf32_FIFO_buf256_load_to_lp_in_on_chip_2_buf32_FIFO_buf256259_31
inline void lp_in_on_chip_2_buf32_FIFO_buf256_load_to_lp_in_on_chip_2_buf32_FIFO_buf256259_write_bundle_write(hw_uint<32>& load_to_lp_in_on_chip_2_buf32_FIFO_buf256259_write, lp_in_on_chip_2_buf32_FIFO_buf256_cache& lp_in_on_chip_2_buf32_FIFO_buf256, int root, int lp_in_on_chip_2_buf32_to_gp_8252_ld258, int lp_in_on_chip_2_buf32_to_gp_8252_ld257, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_2_buf32_FIFO_buf256_load_to_lp_in_on_chip_2_buf32_FIFO_buf256259_31_res = load_to_lp_in_on_chip_2_buf32_FIFO_buf256259_write.extract<0, 31>();
	lp_in_on_chip_2_buf32_FIFO_buf256_load_to_lp_in_on_chip_2_buf32_FIFO_buf256259_31_write(lp_in_on_chip_2_buf32_FIFO_buf256_load_to_lp_in_on_chip_2_buf32_FIFO_buf256259_31_res, lp_in_on_chip_2_buf32_FIFO_buf256, root, lp_in_on_chip_2_buf32_to_gp_8252_ld258, lp_in_on_chip_2_buf32_to_gp_8252_ld257, dynamic_address);
}

// rc60_read
//	lp_in_on_chip_2_buf32_FIFO_buf256_rc60_19
inline hw_uint<32> lp_in_on_chip_2_buf32_FIFO_buf256_rc60_read_bundle_read(lp_in_on_chip_2_buf32_FIFO_buf256_cache& lp_in_on_chip_2_buf32_FIFO_buf256, int root, int lp_in_on_chip_2_buf32_reconstruct_lp5253, int lp_in_on_chip_2_buf32_reconstruct_lp5254, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_2_buf32_FIFO_buf256_rc60_19

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_2_buf32_FIFO_buf256_rc60_19_res = lp_in_on_chip_2_buf32_FIFO_buf256_rc60_19_select(lp_in_on_chip_2_buf32_FIFO_buf256, root, lp_in_on_chip_2_buf32_reconstruct_lp5253, lp_in_on_chip_2_buf32_reconstruct_lp5254, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_2_buf32_FIFO_buf256_rc60_19_res);
	return result;
}

struct lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us68_3_cache {
	// RAM Box: {[0, 15], [0, 15]}
	// Capacity: 16
	// # of read delays: 17
  // 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15
	fifo<hw_uint<32> , 16> f;
	inline hw_uint<32>  peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(15 - offset);
  }



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_cache {
  // Reader addrs...
    // { us68[root = 0, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567] -> lp_in_on_chip_2_buf32_reconstruct_lp52_buf55[o0, o1] : 0 <= us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566 <= 31 and 0 <= us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567 <= 31 and -1 + us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567 <= 2o0 <= us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567 and -1 + us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566 <= 2o1 <= us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566 }
  // # of banks: 1
  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us68_3_cache lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us68_3;
};



inline void lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18_write(hw_uint<32> & lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55, int root, int lp_in_on_chip_2_buf32_reconstruct_lp5253, int lp_in_on_chip_2_buf32_reconstruct_lp5254, int dynamic_address) {
  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55.lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us68_3.push(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18);
}

inline hw_uint<32>  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us68_3_select(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55, int root, int us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, int us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us68_3 read pattern: { us68[root = 0, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567] -> lp_in_on_chip_2_buf32_reconstruct_lp52_buf55[o0, o1] : 0 <= us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566 <= 31 and 0 <= us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567 <= 31 and -1 + us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567 <= 2o0 <= us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567 and -1 + us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566 <= 2o1 <= us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566 }
  // Read schedule : { us68[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 34] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  // Write schedule: { rc60[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 33] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
  auto value_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18 = lp_in_on_chip_2_buf32_reconstruct_lp52_buf55.lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us68_3.peek(/* one reader or all rams */ ((-1 - us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566) % 2 == 0 && 29 - us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567 >= 0) ? ((15 - floord(2*us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567, 4))) : 0);
  return value_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18;
  return 0;
}

// # of bundles = 2
// rc60_write
//	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18
inline void lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_write_bundle_write(hw_uint<32>& rc60_write, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55, int root, int lp_in_on_chip_2_buf32_reconstruct_lp5253, int lp_in_on_chip_2_buf32_reconstruct_lp5254, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18_res = rc60_write.extract<0, 31>();
	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18_write(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_18_res, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55, root, lp_in_on_chip_2_buf32_reconstruct_lp5253, lp_in_on_chip_2_buf32_reconstruct_lp5254, dynamic_address);
}

// us68_read
//	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us68_3
inline hw_uint<32> lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us68_read_bundle_read(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55, int root, int us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, int us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us68_3

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us68_3_res = lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us68_3_select(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55, root, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us68_3_res);
	return result;
}

struct lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260263_28_cache {
	// RAM Box: {[0, 31], [0, 31]}
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

struct lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_cache {
  // Reader addrs...
    // { load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260263[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld262, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld261] -> lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65[lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld261, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld262] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld262 <= 31 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld261 <= 31 }
  // # of banks: 1
  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260263_28_cache lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260263_28;
};



inline void lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2_write(hw_uint<32> & lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65, int root, int us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, int us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567, int dynamic_address) {
  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65.lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260263_28.push(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2);
}

inline hw_uint<32>  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260263_28_select(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65, int root, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld262, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld261, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260263_28 read pattern: { load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260263[root = 0, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld262, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld261] -> lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65[lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld261, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld262] : 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld262 <= 31 and 0 <= lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld261 <= 31 }
  // Read schedule : { load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260263[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 35] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  // Write schedule: { us68[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 34] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  auto value_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2 = lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65.lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260263_28.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260263_read
//	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260263_28
inline hw_uint<32> lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260263_read_bundle_read(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65, int root, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld262, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld261, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260263_28

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260263_28_res = lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260263_28_select(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65, root, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld262, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld261, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260263_28_res);
	return result;
}

// us68_write
//	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2
inline void lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_write_bundle_write(hw_uint<32>& us68_write, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65, int root, int us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, int us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2_res = us68_write.extract<0, 31>();
	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2_write(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_2_res, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65, root, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566, us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567, dynamic_address);
}

struct lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264267_29_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_rc69_17_cache {
	// RAM Box: {[0, 31], [0, 31]}
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

struct lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_cache {
  // Reader addrs...
    // { rc69[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp6162, lp_in_on_chip_1_buf40_reconstruct_lp6163] -> lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264[lp_in_on_chip_1_buf40_reconstruct_lp6163, lp_in_on_chip_1_buf40_reconstruct_lp6162] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp6162 <= 31 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp6163 <= 31 }
  // # of banks: 1
  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264267_29_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_rc69_17_cache lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264267_29_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_rc69_17;
};



inline void lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264267_29_write(hw_uint<32> & lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264267_29, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264, int root, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260_ld266, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260_ld265, int dynamic_address) {
  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264.lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264267_29_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_rc69_17.push(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264267_29);
}

inline hw_uint<32>  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_rc69_17_select(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264, int root, int lp_in_on_chip_1_buf40_reconstruct_lp6162, int lp_in_on_chip_1_buf40_reconstruct_lp6163, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_rc69_17 read pattern: { rc69[root = 0, lp_in_on_chip_1_buf40_reconstruct_lp6162, lp_in_on_chip_1_buf40_reconstruct_lp6163] -> lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264[lp_in_on_chip_1_buf40_reconstruct_lp6163, lp_in_on_chip_1_buf40_reconstruct_lp6162] : 0 <= lp_in_on_chip_1_buf40_reconstruct_lp6162 <= 31 and 0 <= lp_in_on_chip_1_buf40_reconstruct_lp6163 <= 31 }
  // Read schedule : { rc69[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 37] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  // Write schedule: { load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264267[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 36] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
  auto value_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264267_29 = lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264.lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264267_29_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_rc69_17.peek(/* one reader or all rams */ 0);
  return value_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264267_29;
  return 0;
}

// # of bundles = 2
// load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264267_write
//	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264267_29
inline void lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264267_write_bundle_write(hw_uint<32>& load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264267_write, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264, int root, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260_ld266, int lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260_ld265, int dynamic_address) {
	hw_uint<32>  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264267_29_res = load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264267_write.extract<0, 31>();
	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264267_29_write(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264267_29_res, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264, root, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260_ld266, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260_ld265, dynamic_address);
}

// rc69_read
//	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_rc69_17
inline hw_uint<32> lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_rc69_read_bundle_read(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264, int root, int lp_in_on_chip_1_buf40_reconstruct_lp6162, int lp_in_on_chip_1_buf40_reconstruct_lp6163, int dynamic_address) {
  // # of ports in bundle: 1
    // lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_rc69_17

	hw_uint<32> result;
	hw_uint<32>  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_rc69_17_res = lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_rc69_17_select(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264, root, lp_in_on_chip_1_buf40_reconstruct_lp6162, lp_in_on_chip_1_buf40_reconstruct_lp6163, dynamic_address);
	set_at<0, 32>(result, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_rc69_17_res);
	return result;
}

// Total re-use buffer capacity: 17568 bits
// Operation logic
inline void load_to_gp_in_on_chip_2_buf12_FIFO_buf184187(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_2180, gp_in_on_chip_2_buf12_FIFO_buf184_cache& gp_in_on_chip_2_buf12_FIFO_buf184, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12_to_gp_2180
	auto gp_in_on_chip_2_buf12_to_gp_2180_gp_in_on_chip_2_buf12_to_gp_2180_ld185_c__gp_in_on_chip_2_buf12_to_gp_2180_ld186_value = gp_in_on_chip_2_buf12_to_gp_2180.read();
	// Produce: gp_in_on_chip_2_buf12_FIFO_buf184
	gp_in_on_chip_2_buf12_FIFO_buf184_load_to_gp_in_on_chip_2_buf12_FIFO_buf184187_write_bundle_write(/* arg names */gp_in_on_chip_2_buf12_to_gp_2180_gp_in_on_chip_2_buf12_to_gp_2180_ld185_c__gp_in_on_chip_2_buf12_to_gp_2180_ld186_value, gp_in_on_chip_2_buf12_FIFO_buf184, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in_on_chip_322_merged163(gp_in_on_chip_2_buf12_FIFO_buf184_cache& gp_in_on_chip_2_buf12_FIFO_buf184, gp_in_on_chip_3_buf20_cache& gp_in_on_chip_3_buf20, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12_FIFO_buf184
	auto gp_in_on_chip_2_buf12_FIFO_buf184_2_m_gp_in_on_chip_322__p___m_1_p_1_c_____2_m_gp_in_on_chip_321__p__1_p_1_value = gp_in_on_chip_2_buf12_FIFO_buf184_gp_in_on_chip_322_merged163_read_bundle_read(gp_in_on_chip_2_buf12_FIFO_buf184/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in_on_chip_322_cu161(gp_in_on_chip_2_buf12_FIFO_buf184_2_m_gp_in_on_chip_322__p___m_1_p_1_c_____2_m_gp_in_on_chip_321__p__1_p_1_value);
	// Produce: gp_in_on_chip_3_buf20
	gp_in_on_chip_3_buf20_gp_in_on_chip_322_merged163_write_bundle_write(/* arg names */compute_result, gp_in_on_chip_3_buf20, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us31(gp_in_on_chip_3_buf20_cache& gp_in_on_chip_3_buf20, gp_in_on_chip_3_buf20_us28_cache& gp_in_on_chip_3_buf20_us28, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_3_buf20
	auto gp_in_on_chip_3_buf20_floor_lp_us_gp_in_on_chip_3_buf2030__div__2_rp__p_0_c___floor_lp_us_gp_in_on_chip_3_buf2029__div__2_rp__p_0_value = gp_in_on_chip_3_buf20_us31_read_bundle_read(gp_in_on_chip_3_buf20/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_3_buf20_us28
	gp_in_on_chip_3_buf20_us28_us31_write_bundle_write(/* arg names */gp_in_on_chip_3_buf20_floor_lp_us_gp_in_on_chip_3_buf2030__div__2_rp__p_0_c___floor_lp_us_gp_in_on_chip_3_buf2029__div__2_rp__p_0_value, gp_in_on_chip_3_buf20_us28, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207(gp_in_on_chip_3_buf20_us28_cache& gp_in_on_chip_3_buf20_us28, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_3_buf20_us28_to_gp_7204, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_3_buf20_us28
	auto gp_in_on_chip_3_buf20_us28_gp_in_on_chip_3_buf20_us28_ld205_c__gp_in_on_chip_3_buf20_us28_ld206_value = gp_in_on_chip_3_buf20_us28_load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207_read_bundle_read(gp_in_on_chip_3_buf20_us28/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_3_buf20_us28_to_gp_7204
	gp_in_on_chip_3_buf20_us28_to_gp_7204.write(gp_in_on_chip_3_buf20_us28_gp_in_on_chip_3_buf20_us28_ld205_c__gp_in_on_chip_3_buf20_us28_ld206_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us59(gp_in_on_chip_3_buf20_cache& gp_in_on_chip_3_buf20, gp_in_on_chip_3_buf20_us56_cache& gp_in_on_chip_3_buf20_us56, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_3_buf20
	auto gp_in_on_chip_3_buf20_floor_lp_us_gp_in_on_chip_3_buf2058__div__2_rp__p_0_c___floor_lp_us_gp_in_on_chip_3_buf2057__div__2_rp__p_0_value = gp_in_on_chip_3_buf20_us59_read_bundle_read(gp_in_on_chip_3_buf20/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_3_buf20_us56
	gp_in_on_chip_3_buf20_us56_us59_write_bundle_write(/* arg names */gp_in_on_chip_3_buf20_floor_lp_us_gp_in_on_chip_3_buf2058__div__2_rp__p_0_c___floor_lp_us_gp_in_on_chip_3_buf2057__div__2_rp__p_0_value, gp_in_on_chip_3_buf20_us56, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_3_buf20_us56_to_gp_8212215(gp_in_on_chip_3_buf20_us56_cache& gp_in_on_chip_3_buf20_us56, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_3_buf20_us56_to_gp_8212, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_3_buf20_us56
	auto gp_in_on_chip_3_buf20_us56_gp_in_on_chip_3_buf20_us56_ld213_c__gp_in_on_chip_3_buf20_us56_ld214_value = gp_in_on_chip_3_buf20_us56_load_to_gp_in_on_chip_3_buf20_us56_to_gp_8212215_read_bundle_read(gp_in_on_chip_3_buf20_us56/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_3_buf20_us56_to_gp_8212
	gp_in_on_chip_3_buf20_us56_to_gp_8212.write(gp_in_on_chip_3_buf20_us56_gp_in_on_chip_3_buf20_us56_ld213_c__gp_in_on_chip_3_buf20_us56_ld214_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_2_buf12_to_gp_2180_ld186_gp_in_on_chip_321_gp_in_on_chip_3_buf20_us28_ld206_gp_in_on_chip_3_buf20_us56_ld214_us_gp_in_on_chip_3_buf2029_us_gp_in_on_chip_3_buf2057_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_2180, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_3_buf20_us28_to_gp_7204, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_3_buf20_us56_to_gp_8212) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_2_buf12_to_gp_2180_ld186_gp_in_on_chip_321_gp_in_on_chip_3_buf20_us28_ld206_gp_in_on_chip_3_buf20_us56_ld214_us_gp_in_on_chip_3_buf2029_us_gp_in_on_chip_3_buf2057__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_2_buf12_FIFO_buf184_cache gp_in_on_chip_2_buf12_FIFO_buf184;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_3_buf20_cache gp_in_on_chip_3_buf20;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_3_buf20_us28_cache gp_in_on_chip_3_buf20_us28;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_3_buf20_us56_cache gp_in_on_chip_3_buf20_us56;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { us59[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 20] : 0 <= d1 <= 15 and 0 <= d2 <= 15; us31[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 18] : 0 <= d1 <= 15 and 0 <= d2 <= 15; load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 23] : 0 <= d1 <= 15 and 0 <= d2 <= 15; gp_in_on_chip_322_merged163[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 16] : 0 <= d1 <= 7 and 0 <= d2 <= 7; load_to_gp_in_on_chip_3_buf20_us56_to_gp_8212215[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 21] : 0 <= d1 <= 15 and 0 <= d2 <= 15; load_to_gp_in_on_chip_2_buf12_FIFO_buf184187[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 14] : 0 <= d1 <= 16 and 0 <= d2 <= 16 }
//   { us59[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 20] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
// Condition for us59(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-20 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((74 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((74 + -1*i2)) >= 0)))
//   { us31[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 18] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
// Condition for us31(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-18 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((74 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((74 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 23] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
// Condition for load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-23 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((74 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((74 + -1*i2)) >= 0)))
//   { gp_in_on_chip_322_merged163[d0 = 0, d1, d2] -> [0, 14 + 8d1, 14 + 8d2, 16] : 0 <= d1 <= 7 and 0 <= d2 <= 7 }
// Condition for gp_in_on_chip_322_merged163(((((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-16 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((70 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_3_buf20_us56_to_gp_8212215[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 21] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
// Condition for load_to_gp_in_on_chip_3_buf20_us56_to_gp_8212215(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-21 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((74 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((74 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_2_buf12_FIFO_buf184187[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 14] : 0 <= d1 <= 16 and 0 <= d2 <= 16 }
// Condition for load_to_gp_in_on_chip_2_buf12_FIFO_buf184187(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-14 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((70 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 14 <= i1 <= 74 and 14 <= i2 <= 74 and 20 <= i3 <= 21; [0, i1, i2, 23] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 14 <= i1 <= 74 and 14 <= i2 <= 74; [0, i1, i2, 18] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 14 <= i1 <= 74 and 14 <= i2 <= 74; [0, i1, i2, 16] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and 14 <= i1 <= 70 and 14 <= i2 <= 70; [0, i1, i2, 14] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 6 <= i1 <= 70 and 6 <= i2 <= 70 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 6; i1 <= 74; i1++) {
	    for (int i2 = 6; i2 <= 74; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 <= 70 and i2 <= 70 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 <= 70 and i2 <= 70 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : 70 - i1 >= 0 }
	          // { [i0, i1, i2] : 70 - i2 >= 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((70 + -1*i1)) >= 0) && (((70 + -1*i2)) >= 0)))) {
	          load_to_gp_in_on_chip_2_buf12_FIFO_buf184187(gp_in_on_chip_2_buf12_to_gp_2180 /* buf name */, gp_in_on_chip_2_buf12_FIFO_buf184, 0, ((-2 + (1*(((2 + 1*i1)) >> 2)))), ((-2 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and i1 >= 14 and i2 >= 14 }
	        // { [i0, i1, i2] : (2 + i1) mod 8 = 0 and (2 + i2) mod 8 = 0 and i1 >= 14 and i2 >= 14 }
	          // { [i0, i1, i2] : -2 - i2 + 8*floor((2 + i2)/8) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 8*floor((2 + i1)/8) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-2 + -1*i2 + (8*(((2 + 1*i2)) >> 3)))) == 0) && (((-2 + -1*i1 + (8*(((2 + 1*i1)) >> 3)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          gp_in_on_chip_322_merged163(gp_in_on_chip_2_buf12_FIFO_buf184 /* buf name */, gp_in_on_chip_3_buf20, 0, ((-2 + (1*(((2 + 1*i1)) >> 3)))), ((-2 + (1*(((2 + 1*i2)) >> 3)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 14 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 14 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          us31(gp_in_on_chip_3_buf20 /* buf name */, gp_in_on_chip_3_buf20_us28, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 14 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 14 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          us59(gp_in_on_chip_3_buf20 /* buf name */, gp_in_on_chip_3_buf20_us56, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 14 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 14 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          load_to_gp_in_on_chip_3_buf20_us56_to_gp_8212215(gp_in_on_chip_3_buf20_us56 /* buf name */, gp_in_on_chip_3_buf20_us56_to_gp_8212, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 14 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 14 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          load_to_gp_in_on_chip_3_buf20_us28_to_gp_7204207(gp_in_on_chip_3_buf20_us28 /* buf name */, gp_in_on_chip_3_buf20_us28_to_gp_7204, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176179(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_us44_to_gp_3172, gp_in_on_chip_1_buf4_us44_FIFO_buf176_cache& gp_in_on_chip_1_buf4_us44_FIFO_buf176, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_us44_to_gp_3172
	auto gp_in_on_chip_1_buf4_us44_to_gp_3172_gp_in_on_chip_1_buf4_us44_to_gp_3172_ld177_c__gp_in_on_chip_1_buf4_us44_to_gp_3172_ld178_value = gp_in_on_chip_1_buf4_us44_to_gp_3172.read();
	// Produce: gp_in_on_chip_1_buf4_us44_FIFO_buf176
	gp_in_on_chip_1_buf4_us44_FIFO_buf176_load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176179_write_bundle_write(/* arg names */gp_in_on_chip_1_buf4_us44_to_gp_3172_gp_in_on_chip_1_buf4_us44_to_gp_3172_ld177_c__gp_in_on_chip_1_buf4_us44_to_gp_3172_ld178_value, gp_in_on_chip_1_buf4_us44_FIFO_buf176, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_in_on_chip_FIFO_buf224227(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_on_chip_to_gp_3220, in_on_chip_FIFO_buf224_cache& in_on_chip_FIFO_buf224, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_on_chip_to_gp_3220
	auto in_on_chip_to_gp_3220_in_on_chip_to_gp_3220_ld225_c__in_on_chip_to_gp_3220_ld226_value = in_on_chip_to_gp_3220.read();
	// Produce: in_on_chip_FIFO_buf224
	in_on_chip_FIFO_buf224_load_to_in_on_chip_FIFO_buf224227_write_bundle_write(/* arg names */in_on_chip_to_gp_3220_in_on_chip_to_gp_3220_ld225_c__in_on_chip_to_gp_3220_ld226_value, in_on_chip_FIFO_buf224, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff51(in_on_chip_FIFO_buf224_cache& in_on_chip_FIFO_buf224, gp_in_on_chip_1_buf4_us44_FIFO_buf176_cache& gp_in_on_chip_1_buf4_us44_FIFO_buf176, lp_in_on_chip_0_buf48_cache& lp_in_on_chip_0_buf48, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_on_chip_FIFO_buf224
	auto in_on_chip_FIFO_buf224_lp_in_on_chip_050_p_7_c___lp_in_on_chip_049_p_7_value = in_on_chip_FIFO_buf224_diff51_read_bundle_read(in_on_chip_FIFO_buf224/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in_on_chip_1_buf4_us44_FIFO_buf176
	auto gp_in_on_chip_1_buf4_us44_FIFO_buf176_lp_in_on_chip_050_p_0_c___lp_in_on_chip_049_p_0_value = gp_in_on_chip_1_buf4_us44_FIFO_buf176_diff51_read_bundle_read(gp_in_on_chip_1_buf4_us44_FIFO_buf176/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_diff_float_32(in_on_chip_FIFO_buf224_lp_in_on_chip_050_p_7_c___lp_in_on_chip_049_p_7_value, gp_in_on_chip_1_buf4_us44_FIFO_buf176_lp_in_on_chip_050_p_0_c___lp_in_on_chip_049_p_0_value);
	// Produce: lp_in_on_chip_0_buf48
	lp_in_on_chip_0_buf48_diff51_write_bundle_write(/* arg names */compute_result, lp_in_on_chip_0_buf48, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_0_buf48_to_gp_4228231(lp_in_on_chip_0_buf48_cache& lp_in_on_chip_0_buf48, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_0_buf48_to_gp_4228, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_0_buf48
	auto lp_in_on_chip_0_buf48_lp_in_on_chip_0_buf48_ld229_c__lp_in_on_chip_0_buf48_ld230_value = lp_in_on_chip_0_buf48_load_to_lp_in_on_chip_0_buf48_to_gp_4228231_read_bundle_read(lp_in_on_chip_0_buf48/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in_on_chip_0_buf48_to_gp_4228
	lp_in_on_chip_0_buf48_to_gp_4228.write(lp_in_on_chip_0_buf48_lp_in_on_chip_0_buf48_ld229_c__lp_in_on_chip_0_buf48_ld230_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_1_buf4_us44_to_gp_3172_ld178_in_on_chip_to_gp_3220_ld226_lp_in_on_chip_049_lp_in_on_chip_0_buf48_ld230_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_us44_to_gp_3172, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_on_chip_to_gp_3220, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_0_buf48_to_gp_4228) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_1_buf4_us44_to_gp_3172_ld178_in_on_chip_to_gp_3220_ld226_lp_in_on_chip_049_lp_in_on_chip_0_buf48_ld230__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_1_buf4_us44_FIFO_buf176_cache gp_in_on_chip_1_buf4_us44_FIFO_buf176;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_on_chip_FIFO_buf224_cache in_on_chip_FIFO_buf224;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_0_buf48_cache lp_in_on_chip_0_buf48;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { diff51[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 19] : 0 <= d1 <= 63 and 0 <= d2 <= 63; load_to_lp_in_on_chip_0_buf48_to_gp_4228231[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 26] : 0 <= d1 <= 63 and 0 <= d2 <= 63; load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176179[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 15] : 0 <= d1 <= 63 and 0 <= d2 <= 63; load_to_in_on_chip_FIFO_buf224227[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 6] : 7 <= d1 <= 70 and 7 <= d2 <= 70 }
//   { diff51[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 19] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for diff51(((((-19 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((71 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((71 + -1*i2)) >= 0)))
//   { load_to_lp_in_on_chip_0_buf48_to_gp_4228231[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 26] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for load_to_lp_in_on_chip_0_buf48_to_gp_4228231(((((-26 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((71 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((71 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176179[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 15] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176179(((((-15 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((71 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((71 + -1*i2)) >= 0)))
//   { load_to_in_on_chip_FIFO_buf224227[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 6] : 7 <= d1 <= 70 and 7 <= d2 <= 70 }
// Condition for load_to_in_on_chip_FIFO_buf224227(((((-6 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((71 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((71 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 26] : 8 <= i1 <= 71 and 8 <= i2 <= 71; [0, i1, i2, 19] : 8 <= i1 <= 71 and 8 <= i2 <= 71; [0, i1, i2, 15] : 8 <= i1 <= 71 and 8 <= i2 <= 71; [0, i1, i2, 6] : 8 <= i1 <= 71 and 8 <= i2 <= 71 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 8; i1 <= 71; i1++) {
	    for (int i2 = 8; i2 <= 71; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_in_on_chip_FIFO_buf224227(in_on_chip_to_gp_3220 /* buf name */, in_on_chip_FIFO_buf224, 0, ((-1 + 1*i1)), ((-1 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_gp_in_on_chip_1_buf4_us44_FIFO_buf176179(gp_in_on_chip_1_buf4_us44_to_gp_3172 /* buf name */, gp_in_on_chip_1_buf4_us44_FIFO_buf176, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          diff51(in_on_chip_FIFO_buf224 /* buf name */, gp_in_on_chip_1_buf4_us44_FIFO_buf176 /* buf name */, lp_in_on_chip_0_buf48, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_lp_in_on_chip_0_buf48_to_gp_4228231(lp_in_on_chip_0_buf48 /* buf name */, lp_in_on_chip_0_buf48_to_gp_4228, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_lp_in_on_chip_0_buf48_FIFO_buf232235(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_0_buf48_to_gp_4228, lp_in_on_chip_0_buf48_FIFO_buf232_cache& lp_in_on_chip_0_buf48_FIFO_buf232, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_0_buf48_to_gp_4228
	auto lp_in_on_chip_0_buf48_to_gp_4228_lp_in_on_chip_0_buf48_to_gp_4228_ld233_c__lp_in_on_chip_0_buf48_to_gp_4228_ld234_value = lp_in_on_chip_0_buf48_to_gp_4228.read();
	// Produce: lp_in_on_chip_0_buf48_FIFO_buf232
	lp_in_on_chip_0_buf48_FIFO_buf232_load_to_lp_in_on_chip_0_buf48_FIFO_buf232235_write_bundle_write(/* arg names */lp_in_on_chip_0_buf48_to_gp_4228_lp_in_on_chip_0_buf48_to_gp_4228_ld233_c__lp_in_on_chip_0_buf48_to_gp_4228_ld234_value, lp_in_on_chip_0_buf48_FIFO_buf232, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248251(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244
	auto lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244_ld249_c__lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244_ld250_value = lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244.read();
	// Produce: lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248
	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248251_write_bundle_write(/* arg names */lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244_ld249_c__lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244_ld250_value, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void rc78(lp_in_on_chip_0_buf48_FIFO_buf232_cache& lp_in_on_chip_0_buf48_FIFO_buf232, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_cache& lp_in_on_chip_0_buf48_reconstruct_lp70_buf73, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_0_buf48_FIFO_buf232
	auto lp_in_on_chip_0_buf48_FIFO_buf232_lp_in_on_chip_0_buf48_reconstruct_lp7072_p_0_c___lp_in_on_chip_0_buf48_reconstruct_lp7071_p_0_value = lp_in_on_chip_0_buf48_FIFO_buf232_rc78_read_bundle_read(lp_in_on_chip_0_buf48_FIFO_buf232/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248
	auto lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_lp_in_on_chip_0_buf48_reconstruct_lp7072_p_0_c___lp_in_on_chip_0_buf48_reconstruct_lp7071_p_0_value = lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_rc78_read_bundle_read(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_add_float_32(lp_in_on_chip_0_buf48_FIFO_buf232_lp_in_on_chip_0_buf48_reconstruct_lp7072_p_0_c___lp_in_on_chip_0_buf48_reconstruct_lp7071_p_0_value, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_lp_in_on_chip_0_buf48_reconstruct_lp7072_p_0_c___lp_in_on_chip_0_buf48_reconstruct_lp7071_p_0_value);
	// Produce: lp_in_on_chip_0_buf48_reconstruct_lp70_buf73
	lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_rc78_write_bundle_write(/* arg names */compute_result, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_cache& lp_in_on_chip_0_buf48_reconstruct_lp70_buf73, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */out, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_0_buf48_reconstruct_lp70_buf73
	auto lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981_p_0_c___pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980_p_0_value = lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_read_bundle_read(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981_p_0_c___pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980_p_0_value);
	// Produce: out
	out.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_lp_in_on_chip_0_buf48_reconstruct_lp7071_lp_in_on_chip_0_buf48_to_gp_4228_ld234_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244_ld250_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_0_buf48_to_gp_4228, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_lp_in_on_chip_0_buf48_reconstruct_lp7071_lp_in_on_chip_0_buf48_to_gp_4228_ld234_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244_ld250_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_0_buf48_FIFO_buf232_cache lp_in_on_chip_0_buf48_FIFO_buf232;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_0_buf48_reconstruct_lp70_buf73_cache lp_in_on_chip_0_buf48_reconstruct_lp70_buf73;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248_cache lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_lp_in_on_chip_0_buf48_FIFO_buf232235[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 29] : 0 <= d1 <= 63 and 0 <= d2 <= 63; load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248251[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 40] : 0 <= d1 <= 63 and 0 <= d2 <= 63; rc78[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 41] : 0 <= d1 <= 63 and 0 <= d2 <= 63; pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 42] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
//   { load_to_lp_in_on_chip_0_buf48_FIFO_buf232235[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 29] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for load_to_lp_in_on_chip_0_buf48_FIFO_buf232235(((((-29 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((77 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((77 + -1*i2)) >= 0)))
//   { load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248251[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 40] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248251(((((-40 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((77 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((77 + -1*i2)) >= 0)))
//   { rc78[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 41] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for rc78(((((-41 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((77 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((77 + -1*i2)) >= 0)))
//   { pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 42] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982(((((-42 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((77 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((77 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 14 <= i1 <= 77 and 14 <= i2 <= 77 and 40 <= i3 <= 42; [0, i1, i2, 29] : 14 <= i1 <= 77 and 14 <= i2 <= 77 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 77; i1++) {
	    for (int i2 = 14; i2 <= 77; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_lp_in_on_chip_0_buf48_FIFO_buf232235(lp_in_on_chip_0_buf48_to_gp_4228 /* buf name */, lp_in_on_chip_0_buf48_FIFO_buf232, 0, ((-14 + 1*i1)), ((-14 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248251(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244 /* buf name */, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248, 0, ((-14 + 1*i1)), ((-14 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          rc78(lp_in_on_chip_0_buf48_FIFO_buf232 /* buf name */, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_FIFO_buf248 /* buf name */, lp_in_on_chip_0_buf48_reconstruct_lp70_buf73, 0, ((-14 + 1*i1)), ((-14 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982(lp_in_on_chip_0_buf48_reconstruct_lp70_buf73 /* buf name */, out, 0, ((-14 + 1*i1)), ((-14 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in_on_chip_1_buf4_FIFO_buf168171(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_5164, gp_in_on_chip_1_buf4_FIFO_buf168_cache& gp_in_on_chip_1_buf4_FIFO_buf168, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_to_gp_5164
	auto gp_in_on_chip_1_buf4_to_gp_5164_gp_in_on_chip_1_buf4_to_gp_5164_ld169_c__gp_in_on_chip_1_buf4_to_gp_5164_ld170_value = gp_in_on_chip_1_buf4_to_gp_5164.read();
	// Produce: gp_in_on_chip_1_buf4_FIFO_buf168
	gp_in_on_chip_1_buf4_FIFO_buf168_load_to_gp_in_on_chip_1_buf4_FIFO_buf168171_write_bundle_write(/* arg names */gp_in_on_chip_1_buf4_to_gp_5164_gp_in_on_chip_1_buf4_to_gp_5164_ld169_c__gp_in_on_chip_1_buf4_to_gp_5164_ld170_value, gp_in_on_chip_1_buf4_FIFO_buf168, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200203(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_2_buf12_us36_to_gp_5196, gp_in_on_chip_2_buf12_us36_FIFO_buf200_cache& gp_in_on_chip_2_buf12_us36_FIFO_buf200, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12_us36_to_gp_5196
	auto gp_in_on_chip_2_buf12_us36_to_gp_5196_gp_in_on_chip_2_buf12_us36_to_gp_5196_ld201_c__gp_in_on_chip_2_buf12_us36_to_gp_5196_ld202_value = gp_in_on_chip_2_buf12_us36_to_gp_5196.read();
	// Produce: gp_in_on_chip_2_buf12_us36_FIFO_buf200
	gp_in_on_chip_2_buf12_us36_FIFO_buf200_load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200203_write_bundle_write(/* arg names */gp_in_on_chip_2_buf12_us36_to_gp_5196_gp_in_on_chip_2_buf12_us36_to_gp_5196_ld201_c__gp_in_on_chip_2_buf12_us36_to_gp_5196_ld202_value, gp_in_on_chip_2_buf12_us36_FIFO_buf200, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff43(gp_in_on_chip_1_buf4_FIFO_buf168_cache& gp_in_on_chip_1_buf4_FIFO_buf168, gp_in_on_chip_2_buf12_us36_FIFO_buf200_cache& gp_in_on_chip_2_buf12_us36_FIFO_buf200, lp_in_on_chip_1_buf40_cache& lp_in_on_chip_1_buf40, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_FIFO_buf168
	auto gp_in_on_chip_1_buf4_FIFO_buf168_lp_in_on_chip_142_p_3_c___lp_in_on_chip_141_p_3_value = gp_in_on_chip_1_buf4_FIFO_buf168_diff43_read_bundle_read(gp_in_on_chip_1_buf4_FIFO_buf168/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in_on_chip_2_buf12_us36_FIFO_buf200
	auto gp_in_on_chip_2_buf12_us36_FIFO_buf200_lp_in_on_chip_142_p_0_c___lp_in_on_chip_141_p_0_value = gp_in_on_chip_2_buf12_us36_FIFO_buf200_diff43_read_bundle_read(gp_in_on_chip_2_buf12_us36_FIFO_buf200/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_diff_float_32(gp_in_on_chip_1_buf4_FIFO_buf168_lp_in_on_chip_142_p_3_c___lp_in_on_chip_141_p_3_value, gp_in_on_chip_2_buf12_us36_FIFO_buf200_lp_in_on_chip_142_p_0_c___lp_in_on_chip_141_p_0_value);
	// Produce: lp_in_on_chip_1_buf40
	lp_in_on_chip_1_buf40_diff43_write_bundle_write(/* arg names */compute_result, lp_in_on_chip_1_buf40, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_1_buf40_to_gp_6236239(lp_in_on_chip_1_buf40_cache& lp_in_on_chip_1_buf40, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_1_buf40_to_gp_6236, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_1_buf40
	auto lp_in_on_chip_1_buf40_lp_in_on_chip_1_buf40_ld237_c__lp_in_on_chip_1_buf40_ld238_value = lp_in_on_chip_1_buf40_load_to_lp_in_on_chip_1_buf40_to_gp_6236239_read_bundle_read(lp_in_on_chip_1_buf40/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in_on_chip_1_buf40_to_gp_6236
	lp_in_on_chip_1_buf40_to_gp_6236.write(lp_in_on_chip_1_buf40_lp_in_on_chip_1_buf40_ld237_c__lp_in_on_chip_1_buf40_ld238_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_1_buf4_to_gp_5164_ld170_gp_in_on_chip_2_buf12_us36_to_gp_5196_ld202_lp_in_on_chip_141_lp_in_on_chip_1_buf40_ld238_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_5164, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_2_buf12_us36_to_gp_5196, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_1_buf40_to_gp_6236) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_1_buf4_to_gp_5164_ld170_gp_in_on_chip_2_buf12_us36_to_gp_5196_ld202_lp_in_on_chip_141_lp_in_on_chip_1_buf40_ld238__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_1_buf4_FIFO_buf168_cache gp_in_on_chip_1_buf4_FIFO_buf168;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_2_buf12_us36_FIFO_buf200_cache gp_in_on_chip_2_buf12_us36_FIFO_buf200;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_1_buf40_cache lp_in_on_chip_1_buf40;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_lp_in_on_chip_1_buf40_to_gp_6236239[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 25] : 0 <= d1 <= 31 and 0 <= d2 <= 31; load_to_gp_in_on_chip_1_buf4_FIFO_buf168171[d0 = 0, d1, d2] -> [0, 4 + 2d1, 4 + 2d2, 7] : 3 <= d1 <= 34 and 3 <= d2 <= 34; load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200203[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 17] : 0 <= d1 <= 31 and 0 <= d2 <= 31; diff43[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 24] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
//   { load_to_lp_in_on_chip_1_buf40_to_gp_6236239[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 25] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
// Condition for load_to_lp_in_on_chip_1_buf40_to_gp_6236239(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-25 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((76 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((76 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_1_buf4_FIFO_buf168171[d0 = 0, d1, d2] -> [0, 4 + 2d1, 4 + 2d2, 7] : 3 <= d1 <= 34 and 3 <= d2 <= 34 }
// Condition for load_to_gp_in_on_chip_1_buf4_FIFO_buf168171(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-7 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((72 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((72 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200203[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 17] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
// Condition for load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200203(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-17 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((72 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((72 + -1*i2)) >= 0)))
//   { diff43[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 24] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
// Condition for diff43(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-24 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((72 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((72 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, 25] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 14 <= i1 <= 76 and 14 <= i2 <= 76; [0, i1, i2, 24] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 10 <= i1 <= 72 and 10 <= i2 <= 72; [0, i1, i2, 17] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 10 <= i1 <= 72 and 10 <= i2 <= 72; [0, i1, i2, 7] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 10 <= i1 <= 72 and 10 <= i2 <= 72 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 10; i1 <= 76; i1++) {
	    for (int i2 = 10; i2 <= 76; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 <= 72 and i2 <= 72 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 <= 72 and i2 <= 72 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : 72 - i1 >= 0 }
	          // { [i0, i1, i2] : 72 - i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((72 + -1*i1)) >= 0) && (((72 + -1*i2)) >= 0)))) {
	          load_to_gp_in_on_chip_1_buf4_FIFO_buf168171(gp_in_on_chip_1_buf4_to_gp_5164 /* buf name */, gp_in_on_chip_1_buf4_FIFO_buf168, 0, ((-2 + (1*(((1*i1)) >> 1)))), ((-2 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 <= 72 and i2 <= 72 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 <= 72 and i2 <= 72 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : 72 - i1 >= 0 }
	          // { [i0, i1, i2] : 72 - i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((72 + -1*i1)) >= 0) && (((72 + -1*i2)) >= 0)))) {
	          load_to_gp_in_on_chip_2_buf12_us36_FIFO_buf200203(gp_in_on_chip_2_buf12_us36_to_gp_5196 /* buf name */, gp_in_on_chip_2_buf12_us36_FIFO_buf200, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 <= 72 and i2 <= 72 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 <= 72 and i2 <= 72 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : 72 - i1 >= 0 }
	          // { [i0, i1, i2] : 72 - i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((72 + -1*i1)) >= 0) && (((72 + -1*i2)) >= 0)))) {
	          diff43(gp_in_on_chip_1_buf4_FIFO_buf168 /* buf name */, gp_in_on_chip_2_buf12_us36_FIFO_buf200 /* buf name */, lp_in_on_chip_1_buf40, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 >= 14 and i2 >= 14 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 >= 14 and i2 >= 14 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          load_to_lp_in_on_chip_1_buf40_to_gp_6236239(lp_in_on_chip_1_buf40 /* buf name */, lp_in_on_chip_1_buf40_to_gp_6236, 0, ((-7 + (1*(((1*i1)) >> 1)))), ((-7 + (1*(((1*i2)) >> 1)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_lp_in_on_chip_1_buf40_FIFO_buf240243(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_1_buf40_to_gp_6236, lp_in_on_chip_1_buf40_FIFO_buf240_cache& lp_in_on_chip_1_buf40_FIFO_buf240, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_1_buf40_to_gp_6236
	auto lp_in_on_chip_1_buf40_to_gp_6236_lp_in_on_chip_1_buf40_to_gp_6236_ld241_c__lp_in_on_chip_1_buf40_to_gp_6236_ld242_value = lp_in_on_chip_1_buf40_to_gp_6236.read();
	// Produce: lp_in_on_chip_1_buf40_FIFO_buf240
	lp_in_on_chip_1_buf40_FIFO_buf240_load_to_lp_in_on_chip_1_buf40_FIFO_buf240243_write_bundle_write(/* arg names */lp_in_on_chip_1_buf40_to_gp_6236_lp_in_on_chip_1_buf40_to_gp_6236_ld241_c__lp_in_on_chip_1_buf40_to_gp_6236_ld242_value, lp_in_on_chip_1_buf40_FIFO_buf240, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264267(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260
	auto lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260_ld265_c__lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260_ld266_value = lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260.read();
	// Produce: lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264
	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264267_write_bundle_write(/* arg names */lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260_ld265_c__lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260_ld266_value, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void rc69(lp_in_on_chip_1_buf40_FIFO_buf240_cache& lp_in_on_chip_1_buf40_FIFO_buf240, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_1_buf40_FIFO_buf240
	auto lp_in_on_chip_1_buf40_FIFO_buf240_lp_in_on_chip_1_buf40_reconstruct_lp6163_p_0_c___lp_in_on_chip_1_buf40_reconstruct_lp6162_p_0_value = lp_in_on_chip_1_buf40_FIFO_buf240_rc69_read_bundle_read(lp_in_on_chip_1_buf40_FIFO_buf240/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264
	auto lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_lp_in_on_chip_1_buf40_reconstruct_lp6163_p_0_c___lp_in_on_chip_1_buf40_reconstruct_lp6162_p_0_value = lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_rc69_read_bundle_read(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_add_float_32(lp_in_on_chip_1_buf40_FIFO_buf240_lp_in_on_chip_1_buf40_reconstruct_lp6163_p_0_c___lp_in_on_chip_1_buf40_reconstruct_lp6162_p_0_value, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_lp_in_on_chip_1_buf40_reconstruct_lp6163_p_0_c___lp_in_on_chip_1_buf40_reconstruct_lp6162_p_0_value);
	// Produce: lp_in_on_chip_1_buf40_reconstruct_lp61_buf64
	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_rc69_write_bundle_write(/* arg names */compute_result, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us77(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_1_buf40_reconstruct_lp61_buf64
	auto lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_floor_lp_us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476__div__2_rp__p_0_c___floor_lp_us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475__div__2_rp__p_0_value = lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us77_read_bundle_read(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74
	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_us77_write_bundle_write(/* arg names */lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_floor_lp_us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6476__div__2_rp__p_0_c___floor_lp_us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475__div__2_rp__p_0_value, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244247(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_cache& lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74
	auto lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld245_c__lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld246_value = lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244247_read_bundle_read(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244
	lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244.write(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld245_c__lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld246_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_lp_in_on_chip_1_buf40_reconstruct_lp6162_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld246_lp_in_on_chip_1_buf40_to_gp_6236_ld242_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260_ld266_us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_1_buf40_to_gp_6236, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_lp_in_on_chip_1_buf40_reconstruct_lp6162_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld246_lp_in_on_chip_1_buf40_to_gp_6236_ld242_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260_ld266_us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_1_buf40_FIFO_buf240_cache lp_in_on_chip_1_buf40_FIFO_buf240;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_cache lp_in_on_chip_1_buf40_reconstruct_lp61_buf64;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_cache lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264_cache lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { rc69[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 37] : 0 <= d1 <= 31 and 0 <= d2 <= 31; us77[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 38] : 0 <= d1 <= 63 and 0 <= d2 <= 63; load_to_lp_in_on_chip_1_buf40_FIFO_buf240243[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 27] : 0 <= d1 <= 31 and 0 <= d2 <= 31; load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244247[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 39] : 0 <= d1 <= 63 and 0 <= d2 <= 63; load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264267[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 36] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
//   { rc69[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 37] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
// Condition for rc69(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-37 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((76 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((76 + -1*i2)) >= 0)))
//   { us77[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 38] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for us77(((((-38 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((77 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((77 + -1*i2)) >= 0)))
//   { load_to_lp_in_on_chip_1_buf40_FIFO_buf240243[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 27] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
// Condition for load_to_lp_in_on_chip_1_buf40_FIFO_buf240243(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-27 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((76 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((76 + -1*i2)) >= 0)))
//   { load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244247[d0 = 0, d1, d2] -> [0, 14 + d1, 14 + d2, 39] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244247(((((-39 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((77 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((77 + -1*i2)) >= 0)))
//   { load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264267[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 36] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
// Condition for load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264267(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-36 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((76 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((76 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 14 <= i1 <= 77 and 14 <= i2 <= 77 and 36 <= i3 <= 39 and (i3 >= 38 or ((i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 <= 76 and i2 <= 76 and i3 <= 37)); [0, i1, i2, 27] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 14 <= i1 <= 76 and 14 <= i2 <= 76 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 77; i1++) {
	    for (int i2 = 14; i2 <= 77; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_lp_in_on_chip_1_buf40_FIFO_buf240243(lp_in_on_chip_1_buf40_to_gp_6236 /* buf name */, lp_in_on_chip_1_buf40_FIFO_buf240, 0, ((-7 + (1*(((1*i1)) >> 1)))), ((-7 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264267(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260 /* buf name */, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264, 0, ((-7 + (1*(((1*i1)) >> 1)))), ((-7 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          rc69(lp_in_on_chip_1_buf40_FIFO_buf240 /* buf name */, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_FIFO_buf264 /* buf name */, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64, 0, ((-7 + (1*(((1*i1)) >> 1)))), ((-7 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          us77(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64 /* buf name */, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74, 0, ((-14 + 1*i1)), ((-14 + 1*i2)));
	        }
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          load_to_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244247(lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74 /* buf name */, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244, 0, ((-14 + 1*i1)), ((-14 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in_on_chip_2_buf12_FIFO_buf192195(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_7188, gp_in_on_chip_2_buf12_FIFO_buf192_cache& gp_in_on_chip_2_buf12_FIFO_buf192, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12_to_gp_7188
	auto gp_in_on_chip_2_buf12_to_gp_7188_gp_in_on_chip_2_buf12_to_gp_7188_ld193_c__gp_in_on_chip_2_buf12_to_gp_7188_ld194_value = gp_in_on_chip_2_buf12_to_gp_7188.read();
	// Produce: gp_in_on_chip_2_buf12_FIFO_buf192
	gp_in_on_chip_2_buf12_FIFO_buf192_load_to_gp_in_on_chip_2_buf12_FIFO_buf192195_write_bundle_write(/* arg names */gp_in_on_chip_2_buf12_to_gp_7188_gp_in_on_chip_2_buf12_to_gp_7188_ld193_c__gp_in_on_chip_2_buf12_to_gp_7188_ld194_value, gp_in_on_chip_2_buf12_FIFO_buf192, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208211(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_3_buf20_us28_to_gp_7204, gp_in_on_chip_3_buf20_us28_FIFO_buf208_cache& gp_in_on_chip_3_buf20_us28_FIFO_buf208, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_3_buf20_us28_to_gp_7204
	auto gp_in_on_chip_3_buf20_us28_to_gp_7204_gp_in_on_chip_3_buf20_us28_to_gp_7204_ld209_c__gp_in_on_chip_3_buf20_us28_to_gp_7204_ld210_value = gp_in_on_chip_3_buf20_us28_to_gp_7204.read();
	// Produce: gp_in_on_chip_3_buf20_us28_FIFO_buf208
	gp_in_on_chip_3_buf20_us28_FIFO_buf208_load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208211_write_bundle_write(/* arg names */gp_in_on_chip_3_buf20_us28_to_gp_7204_gp_in_on_chip_3_buf20_us28_to_gp_7204_ld209_c__gp_in_on_chip_3_buf20_us28_to_gp_7204_ld210_value, gp_in_on_chip_3_buf20_us28_FIFO_buf208, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void diff35(gp_in_on_chip_2_buf12_FIFO_buf192_cache& gp_in_on_chip_2_buf12_FIFO_buf192, gp_in_on_chip_3_buf20_us28_FIFO_buf208_cache& gp_in_on_chip_3_buf20_us28_FIFO_buf208, lp_in_on_chip_2_buf32_cache& lp_in_on_chip_2_buf32, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12_FIFO_buf192
	auto gp_in_on_chip_2_buf12_FIFO_buf192_lp_in_on_chip_234_p_1_c___lp_in_on_chip_233_p_1_value = gp_in_on_chip_2_buf12_FIFO_buf192_diff35_read_bundle_read(gp_in_on_chip_2_buf12_FIFO_buf192/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in_on_chip_3_buf20_us28_FIFO_buf208
	auto gp_in_on_chip_3_buf20_us28_FIFO_buf208_lp_in_on_chip_234_p_0_c___lp_in_on_chip_233_p_0_value = gp_in_on_chip_3_buf20_us28_FIFO_buf208_diff35_read_bundle_read(gp_in_on_chip_3_buf20_us28_FIFO_buf208/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_diff_float_32(gp_in_on_chip_2_buf12_FIFO_buf192_lp_in_on_chip_234_p_1_c___lp_in_on_chip_233_p_1_value, gp_in_on_chip_3_buf20_us28_FIFO_buf208_lp_in_on_chip_234_p_0_c___lp_in_on_chip_233_p_0_value);
	// Produce: lp_in_on_chip_2_buf32
	lp_in_on_chip_2_buf32_diff35_write_bundle_write(/* arg names */compute_result, lp_in_on_chip_2_buf32, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_2_buf32_to_gp_8252255(lp_in_on_chip_2_buf32_cache& lp_in_on_chip_2_buf32, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_2_buf32_to_gp_8252, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_2_buf32
	auto lp_in_on_chip_2_buf32_lp_in_on_chip_2_buf32_ld253_c__lp_in_on_chip_2_buf32_ld254_value = lp_in_on_chip_2_buf32_load_to_lp_in_on_chip_2_buf32_to_gp_8252255_read_bundle_read(lp_in_on_chip_2_buf32/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in_on_chip_2_buf32_to_gp_8252
	lp_in_on_chip_2_buf32_to_gp_8252.write(lp_in_on_chip_2_buf32_lp_in_on_chip_2_buf32_ld253_c__lp_in_on_chip_2_buf32_ld254_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_2_buf12_to_gp_7188_ld194_gp_in_on_chip_3_buf20_us28_to_gp_7204_ld210_lp_in_on_chip_233_lp_in_on_chip_2_buf32_ld254_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_7188, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_3_buf20_us28_to_gp_7204, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_2_buf32_to_gp_8252) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_2_buf12_to_gp_7188_ld194_gp_in_on_chip_3_buf20_us28_to_gp_7204_ld210_lp_in_on_chip_233_lp_in_on_chip_2_buf32_ld254__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_2_buf12_FIFO_buf192_cache gp_in_on_chip_2_buf12_FIFO_buf192;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_3_buf20_us28_FIFO_buf208_cache gp_in_on_chip_3_buf20_us28_FIFO_buf208;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_2_buf32_cache lp_in_on_chip_2_buf32;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_lp_in_on_chip_2_buf32_to_gp_8252255[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 31] : 0 <= d1 <= 15 and 0 <= d2 <= 15; diff35[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 30] : 0 <= d1 <= 15 and 0 <= d2 <= 15; load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208211[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 28] : 0 <= d1 <= 15 and 0 <= d2 <= 15; load_to_gp_in_on_chip_2_buf12_FIFO_buf192195[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 8] : 0 < d1 <= 16 and 0 < d2 <= 16 }
//   { load_to_lp_in_on_chip_2_buf32_to_gp_8252255[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 31] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
// Condition for load_to_lp_in_on_chip_2_buf32_to_gp_8252255(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-31 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((74 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((74 + -1*i2)) >= 0)))
//   { diff35[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 30] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
// Condition for diff35(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-30 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((74 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((74 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208211[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 28] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
// Condition for load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208211(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-28 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((74 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((74 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_2_buf12_FIFO_buf192195[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 8] : 0 < d1 <= 16 and 0 < d2 <= 16 }
// Condition for load_to_gp_in_on_chip_2_buf12_FIFO_buf192195(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-8 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((70 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 14 <= i1 <= 74 and 14 <= i2 <= 74 and 30 <= i3 <= 31; [0, i1, i2, 28] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 14 <= i1 <= 74 and 14 <= i2 <= 74; [0, i1, i2, 8] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 10 <= i1 <= 70 and 10 <= i2 <= 70 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 10; i1 <= 74; i1++) {
	    for (int i2 = 10; i2 <= 74; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 <= 70 and i2 <= 70 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 <= 70 and i2 <= 70 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : 70 - i1 >= 0 }
	          // { [i0, i1, i2] : 70 - i2 >= 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((70 + -1*i1)) >= 0) && (((70 + -1*i2)) >= 0)))) {
	          load_to_gp_in_on_chip_2_buf12_FIFO_buf192195(gp_in_on_chip_2_buf12_to_gp_7188 /* buf name */, gp_in_on_chip_2_buf12_FIFO_buf192, 0, ((-2 + (1*(((2 + 1*i1)) >> 2)))), ((-2 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 14 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 14 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          load_to_gp_in_on_chip_3_buf20_us28_FIFO_buf208211(gp_in_on_chip_3_buf20_us28_to_gp_7204 /* buf name */, gp_in_on_chip_3_buf20_us28_FIFO_buf208, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 14 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 14 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          diff35(gp_in_on_chip_2_buf12_FIFO_buf192 /* buf name */, gp_in_on_chip_3_buf20_us28_FIFO_buf208 /* buf name */, lp_in_on_chip_2_buf32, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 14 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 14 and i2 >= 14 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -14 + i1 >= 0 }
	          // { [i0, i1, i2] : -14 + i2 >= 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-14 + 1*i1)) >= 0) && (((-14 + 1*i2)) >= 0)))) {
	          load_to_lp_in_on_chip_2_buf32_to_gp_8252255(lp_in_on_chip_2_buf32 /* buf name */, lp_in_on_chip_2_buf32_to_gp_8252, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216219(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_3_buf20_us56_to_gp_8212, gp_in_on_chip_3_buf20_us56_FIFO_buf216_cache& gp_in_on_chip_3_buf20_us56_FIFO_buf216, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_3_buf20_us56_to_gp_8212
	auto gp_in_on_chip_3_buf20_us56_to_gp_8212_gp_in_on_chip_3_buf20_us56_to_gp_8212_ld217_c__gp_in_on_chip_3_buf20_us56_to_gp_8212_ld218_value = gp_in_on_chip_3_buf20_us56_to_gp_8212.read();
	// Produce: gp_in_on_chip_3_buf20_us56_FIFO_buf216
	gp_in_on_chip_3_buf20_us56_FIFO_buf216_load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216219_write_bundle_write(/* arg names */gp_in_on_chip_3_buf20_us56_to_gp_8212_gp_in_on_chip_3_buf20_us56_to_gp_8212_ld217_c__gp_in_on_chip_3_buf20_us56_to_gp_8212_ld218_value, gp_in_on_chip_3_buf20_us56_FIFO_buf216, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_2_buf32_FIFO_buf256259(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_2_buf32_to_gp_8252, lp_in_on_chip_2_buf32_FIFO_buf256_cache& lp_in_on_chip_2_buf32_FIFO_buf256, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_2_buf32_to_gp_8252
	auto lp_in_on_chip_2_buf32_to_gp_8252_lp_in_on_chip_2_buf32_to_gp_8252_ld257_c__lp_in_on_chip_2_buf32_to_gp_8252_ld258_value = lp_in_on_chip_2_buf32_to_gp_8252.read();
	// Produce: lp_in_on_chip_2_buf32_FIFO_buf256
	lp_in_on_chip_2_buf32_FIFO_buf256_load_to_lp_in_on_chip_2_buf32_FIFO_buf256259_write_bundle_write(/* arg names */lp_in_on_chip_2_buf32_to_gp_8252_lp_in_on_chip_2_buf32_to_gp_8252_ld257_c__lp_in_on_chip_2_buf32_to_gp_8252_ld258_value, lp_in_on_chip_2_buf32_FIFO_buf256, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void rc60(lp_in_on_chip_2_buf32_FIFO_buf256_cache& lp_in_on_chip_2_buf32_FIFO_buf256, gp_in_on_chip_3_buf20_us56_FIFO_buf216_cache& gp_in_on_chip_3_buf20_us56_FIFO_buf216, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_2_buf32_FIFO_buf256
	auto lp_in_on_chip_2_buf32_FIFO_buf256_lp_in_on_chip_2_buf32_reconstruct_lp5254_p_0_c___lp_in_on_chip_2_buf32_reconstruct_lp5253_p_0_value = lp_in_on_chip_2_buf32_FIFO_buf256_rc60_read_bundle_read(lp_in_on_chip_2_buf32_FIFO_buf256/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: gp_in_on_chip_3_buf20_us56_FIFO_buf216
	auto gp_in_on_chip_3_buf20_us56_FIFO_buf216_lp_in_on_chip_2_buf32_reconstruct_lp5254_p_0_c___lp_in_on_chip_2_buf32_reconstruct_lp5253_p_0_value = gp_in_on_chip_3_buf20_us56_FIFO_buf216_rc60_read_bundle_read(gp_in_on_chip_3_buf20_us56_FIFO_buf216/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = llf_add_float_32(lp_in_on_chip_2_buf32_FIFO_buf256_lp_in_on_chip_2_buf32_reconstruct_lp5254_p_0_c___lp_in_on_chip_2_buf32_reconstruct_lp5253_p_0_value, gp_in_on_chip_3_buf20_us56_FIFO_buf216_lp_in_on_chip_2_buf32_reconstruct_lp5254_p_0_c___lp_in_on_chip_2_buf32_reconstruct_lp5253_p_0_value);
	// Produce: lp_in_on_chip_2_buf32_reconstruct_lp52_buf55
	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_rc60_write_bundle_write(/* arg names */compute_result, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us68(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_2_buf32_reconstruct_lp52_buf55
	auto lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_floor_lp_us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567__div__2_rp__p_0_c___floor_lp_us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566__div__2_rp__p_0_value = lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us68_read_bundle_read(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65
	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_us68_write_bundle_write(/* arg names */lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_floor_lp_us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5567__div__2_rp__p_0_c___floor_lp_us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566__div__2_rp__p_0_value, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260263(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_cache& lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65
	auto lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld261_c__lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld262_value = lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260263_read_bundle_read(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260
	lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260.write(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld261_c__lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld262_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_3_buf20_us56_to_gp_8212_ld218_lp_in_on_chip_2_buf32_reconstruct_lp5253_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld262_lp_in_on_chip_2_buf32_to_gp_8252_ld258_us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_3_buf20_us56_to_gp_8212, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_2_buf32_to_gp_8252, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_3_buf20_us56_to_gp_8212_ld218_lp_in_on_chip_2_buf32_reconstruct_lp5253_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld262_lp_in_on_chip_2_buf32_to_gp_8252_ld258_us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_3_buf20_us56_FIFO_buf216_cache gp_in_on_chip_3_buf20_us56_FIFO_buf216;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_2_buf32_FIFO_buf256_cache lp_in_on_chip_2_buf32_FIFO_buf256;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_cache lp_in_on_chip_2_buf32_reconstruct_lp52_buf55;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_cache lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_lp_in_on_chip_2_buf32_FIFO_buf256259[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 32] : 0 <= d1 <= 15 and 0 <= d2 <= 15; rc60[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 33] : 0 <= d1 <= 15 and 0 <= d2 <= 15; load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216219[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 22] : 0 <= d1 <= 15 and 0 <= d2 <= 15; load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260263[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 35] : 0 <= d1 <= 31 and 0 <= d2 <= 31; us68[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 34] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
//   { load_to_lp_in_on_chip_2_buf32_FIFO_buf256259[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 32] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
// Condition for load_to_lp_in_on_chip_2_buf32_FIFO_buf256259(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-32 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((74 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((74 + -1*i2)) >= 0)))
//   { rc60[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 33] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
// Condition for rc60(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-33 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((74 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((74 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216219[d0 = 0, d1, d2] -> [0, 14 + 4d1, 14 + 4d2, 22] : 0 <= d1 <= 15 and 0 <= d2 <= 15 }
// Condition for load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216219(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-22 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((74 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((74 + -1*i2)) >= 0)))
//   { load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260263[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 35] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
// Condition for load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260263(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-35 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((76 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((76 + -1*i2)) >= 0)))
//   { us68[d0 = 0, d1, d2] -> [0, 14 + 2d1, 14 + 2d2, 34] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
// Condition for us68(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-34 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-14 + 1*i1)) >= 0) && (((76 + -1*i1)) >= 0) && (((-14 + 1*i2)) >= 0) && (((76 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 14 <= i1 <= 76 and 14 <= i2 <= 76 and 32 <= i3 <= 35 and (((2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 <= 74 and i2 <= 74 and i3 <= 33) or ((i1) mod 2 = 0 and (i2) mod 2 = 0 and i3 >= 34)); [0, i1, i2, 22] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 14 <= i1 <= 74 and 14 <= i2 <= 74 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 14; i1 <= 76; i1++) {
	    for (int i2 = 14; i2 <= 76; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_gp_in_on_chip_3_buf20_us56_FIFO_buf216219(gp_in_on_chip_3_buf20_us56_to_gp_8212 /* buf name */, gp_in_on_chip_3_buf20_us56_FIFO_buf216, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          load_to_lp_in_on_chip_2_buf32_FIFO_buf256259(lp_in_on_chip_2_buf32_to_gp_8252 /* buf name */, lp_in_on_chip_2_buf32_FIFO_buf256, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0)))) {
	          rc60(lp_in_on_chip_2_buf32_FIFO_buf256 /* buf name */, gp_in_on_chip_3_buf20_us56_FIFO_buf216 /* buf name */, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55, 0, ((-4 + (1*(((2 + 1*i1)) >> 2)))), ((-4 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          us68(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55 /* buf name */, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65, 0, ((-7 + (1*(((1*i1)) >> 1)))), ((-7 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0)))) {
	          load_to_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260263(lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65 /* buf name */, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260, 0, ((-7 + (1*(((1*i1)) >> 1)))), ((-7 + (1*(((1*i2)) >> 1)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Operation logic
inline void pw_math_in03(HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in, in_on_chip_cache& in_on_chip, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in
	auto in__lp_pw_math_in02__p___m_7_rp__p_7_c______lp_pw_math_in01__p___m_7_rp__p_7_value = in.read();
	auto compute_result = id(in__lp_pw_math_in02__p___m_7_rp__p_7_c______lp_pw_math_in01__p___m_7_rp__p_7_value);
	// Produce: in_on_chip
	in_on_chip_pw_math_in03_write_bundle_write(/* arg names */compute_result, in_on_chip, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_in_on_chip_to_gp_3220223(in_on_chip_cache& in_on_chip, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */in_on_chip_to_gp_3220, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_on_chip
	auto in_on_chip_in_on_chip_ld221_c__in_on_chip_ld222_value = in_on_chip_load_to_in_on_chip_to_gp_3220223_read_bundle_read(in_on_chip/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: in_on_chip_to_gp_3220
	in_on_chip_to_gp_3220.write(in_on_chip_in_on_chip_ld221_c__in_on_chip_ld222_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in_on_chip_16_merged157(in_on_chip_cache& in_on_chip, gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_on_chip
	auto in_on_chip_2_m__lp_gp_in_on_chip_16__p___m_3_rp___p___m_1_p_7_c_______2_m__lp_gp_in_on_chip_15__p___m_3_rp___p__1_p_7_value = in_on_chip_gp_in_on_chip_16_merged157_read_bundle_read(in_on_chip/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in_on_chip_16_cu155(in_on_chip_2_m__lp_gp_in_on_chip_16__p___m_3_rp___p___m_1_p_7_c_______2_m__lp_gp_in_on_chip_15__p___m_3_rp___p__1_p_7_value);
	// Produce: gp_in_on_chip_1_buf4
	gp_in_on_chip_1_buf4_gp_in_on_chip_16_merged157_write_bundle_write(/* arg names */compute_result, gp_in_on_chip_1_buf4, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_1_buf4_to_gp_5164167(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_5164, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4
	auto gp_in_on_chip_1_buf4_gp_in_on_chip_1_buf4_ld165_c__gp_in_on_chip_1_buf4_ld166_value = gp_in_on_chip_1_buf4_load_to_gp_in_on_chip_1_buf4_to_gp_5164167_read_bundle_read(gp_in_on_chip_1_buf4/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_1_buf4_to_gp_5164
	gp_in_on_chip_1_buf4_to_gp_5164.write(gp_in_on_chip_1_buf4_gp_in_on_chip_1_buf4_ld165_c__gp_in_on_chip_1_buf4_ld166_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_in_on_chip_214_merged160(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4
	auto gp_in_on_chip_1_buf4_2_m__lp_gp_in_on_chip_214__p___m_1_rp___p___m_1_p_3_c_______2_m__lp_gp_in_on_chip_213__p___m_1_rp___p__1_p_3_value = gp_in_on_chip_1_buf4_gp_in_on_chip_214_merged160_read_bundle_read(gp_in_on_chip_1_buf4/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = gp_in_on_chip_214_cu158(gp_in_on_chip_1_buf4_2_m__lp_gp_in_on_chip_214__p___m_1_rp___p___m_1_p_3_c_______2_m__lp_gp_in_on_chip_213__p___m_1_rp___p__1_p_3_value);
	// Produce: gp_in_on_chip_2_buf12
	gp_in_on_chip_2_buf12_gp_in_on_chip_214_merged160_write_bundle_write(/* arg names */compute_result, gp_in_on_chip_2_buf12, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_2_buf12_to_gp_7188191(gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_7188, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12
	auto gp_in_on_chip_2_buf12_gp_in_on_chip_2_buf12_ld189_c__gp_in_on_chip_2_buf12_ld190_value = gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_7188191_read_bundle_read(gp_in_on_chip_2_buf12/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_2_buf12_to_gp_7188
	gp_in_on_chip_2_buf12_to_gp_7188.write(gp_in_on_chip_2_buf12_gp_in_on_chip_2_buf12_ld189_c__gp_in_on_chip_2_buf12_ld190_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_2_buf12_to_gp_2180183(gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_2180, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12
	auto gp_in_on_chip_2_buf12_gp_in_on_chip_2_buf12_ld181_c__gp_in_on_chip_2_buf12_ld182_value = gp_in_on_chip_2_buf12_load_to_gp_in_on_chip_2_buf12_to_gp_2180183_read_bundle_read(gp_in_on_chip_2_buf12/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_2_buf12_to_gp_2180
	gp_in_on_chip_2_buf12_to_gp_2180.write(gp_in_on_chip_2_buf12_gp_in_on_chip_2_buf12_ld181_c__gp_in_on_chip_2_buf12_ld182_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us47(gp_in_on_chip_1_buf4_cache& gp_in_on_chip_1_buf4, gp_in_on_chip_1_buf4_us44_cache& gp_in_on_chip_1_buf4_us44, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4
	auto gp_in_on_chip_1_buf4_floor_lp_us_gp_in_on_chip_1_buf446__div__2_rp__p_3_c___floor_lp_us_gp_in_on_chip_1_buf445__div__2_rp__p_3_value = gp_in_on_chip_1_buf4_us47_read_bundle_read(gp_in_on_chip_1_buf4/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_1_buf4_us44
	gp_in_on_chip_1_buf4_us44_us47_write_bundle_write(/* arg names */gp_in_on_chip_1_buf4_floor_lp_us_gp_in_on_chip_1_buf446__div__2_rp__p_3_c___floor_lp_us_gp_in_on_chip_1_buf445__div__2_rp__p_3_value, gp_in_on_chip_1_buf4_us44, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_1_buf4_us44_to_gp_3172175(gp_in_on_chip_1_buf4_us44_cache& gp_in_on_chip_1_buf4_us44, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_1_buf4_us44_to_gp_3172, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_1_buf4_us44
	auto gp_in_on_chip_1_buf4_us44_gp_in_on_chip_1_buf4_us44_ld173_c__gp_in_on_chip_1_buf4_us44_ld174_value = gp_in_on_chip_1_buf4_us44_load_to_gp_in_on_chip_1_buf4_us44_to_gp_3172175_read_bundle_read(gp_in_on_chip_1_buf4_us44/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_1_buf4_us44_to_gp_3172
	gp_in_on_chip_1_buf4_us44_to_gp_3172.write(gp_in_on_chip_1_buf4_us44_gp_in_on_chip_1_buf4_us44_ld173_c__gp_in_on_chip_1_buf4_us44_ld174_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void us39(gp_in_on_chip_2_buf12_cache& gp_in_on_chip_2_buf12, gp_in_on_chip_2_buf12_us36_cache& gp_in_on_chip_2_buf12_us36, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12
	auto gp_in_on_chip_2_buf12_floor_lp_us_gp_in_on_chip_2_buf1238__div__2_rp__p_1_c___floor_lp_us_gp_in_on_chip_2_buf1237__div__2_rp__p_1_value = gp_in_on_chip_2_buf12_us39_read_bundle_read(gp_in_on_chip_2_buf12/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_2_buf12_us36
	gp_in_on_chip_2_buf12_us36_us39_write_bundle_write(/* arg names */gp_in_on_chip_2_buf12_floor_lp_us_gp_in_on_chip_2_buf1238__div__2_rp__p_1_c___floor_lp_us_gp_in_on_chip_2_buf1237__div__2_rp__p_1_value, gp_in_on_chip_2_buf12_us36, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void load_to_gp_in_on_chip_2_buf12_us36_to_gp_5196199(gp_in_on_chip_2_buf12_us36_cache& gp_in_on_chip_2_buf12_us36, HWStream<hw_uint<32> >& /* buffer_args num ports = 1 */gp_in_on_chip_2_buf12_us36_to_gp_5196, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: gp_in_on_chip_2_buf12_us36
	auto gp_in_on_chip_2_buf12_us36_gp_in_on_chip_2_buf12_us36_ld197_c__gp_in_on_chip_2_buf12_us36_ld198_value = gp_in_on_chip_2_buf12_us36_load_to_gp_in_on_chip_2_buf12_us36_to_gp_5196199_read_bundle_read(gp_in_on_chip_2_buf12_us36/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Produce: gp_in_on_chip_2_buf12_us36_to_gp_5196
	gp_in_on_chip_2_buf12_us36_to_gp_5196.write(gp_in_on_chip_2_buf12_us36_gp_in_on_chip_2_buf12_us36_ld197_c__gp_in_on_chip_2_buf12_us36_ld198_value);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void Extracted_gp_in_on_chip_15_gp_in_on_chip_1_buf4_ld166_gp_in_on_chip_1_buf4_us44_ld174_gp_in_on_chip_213_gp_in_on_chip_2_buf12_ld182_gp_in_on_chip_2_buf12_ld190_gp_in_on_chip_2_buf12_us36_ld198_in_on_chip_ld222_pw_math_in01_us_gp_in_on_chip_1_buf445_us_gp_in_on_chip_2_buf1237_(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_to_gp_5164, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_1_buf4_us44_to_gp_3172, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_2180, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_2_buf12_to_gp_7188, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */gp_in_on_chip_2_buf12_us36_to_gp_5196, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in_on_chip_to_gp_3220) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("Extracted_gp_in_on_chip_15_gp_in_on_chip_1_buf4_ld166_gp_in_on_chip_1_buf4_us44_ld174_gp_in_on_chip_213_gp_in_on_chip_2_buf12_ld182_gp_in_on_chip_2_buf12_ld190_gp_in_on_chip_2_buf12_us36_ld198_in_on_chip_ld222_pw_math_in01_us_gp_in_on_chip_1_buf445_us_gp_in_on_chip_2_buf1237__debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_1_buf4_cache gp_in_on_chip_1_buf4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_1_buf4_us44_cache gp_in_on_chip_1_buf4_us44;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_2_buf12_cache gp_in_on_chip_2_buf12;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  gp_in_on_chip_2_buf12_us36_cache gp_in_on_chip_2_buf12_us36;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_on_chip_cache in_on_chip;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { load_to_gp_in_on_chip_1_buf4_to_gp_5164167[d0 = 0, d1, d2] -> [0, 4 + 2d1, 4 + 2d2, 5] : 3 <= d1 <= 34 and 3 <= d2 <= 34; load_to_gp_in_on_chip_1_buf4_us44_to_gp_3172175[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 11] : 0 <= d1 <= 63 and 0 <= d2 <= 63; us47[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 10] : 0 <= d1 <= 63 and 0 <= d2 <= 63; load_to_gp_in_on_chip_2_buf12_to_gp_2180183[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 12] : 0 <= d1 <= 16 and 0 <= d2 <= 16; load_to_in_on_chip_to_gp_3220223[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 1] : 7 <= d1 <= 70 and 7 <= d2 <= 70; load_to_gp_in_on_chip_2_buf12_us36_to_gp_5196199[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 13] : 0 <= d1 <= 31 and 0 <= d2 <= 31; pw_math_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 70 and 0 <= d2 <= 70; gp_in_on_chip_16_merged157[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 34 and 0 <= d2 <= 34; load_to_gp_in_on_chip_2_buf12_to_gp_7188191[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 4] : 0 < d1 <= 16 and 0 < d2 <= 16; gp_in_on_chip_214_merged160[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 3] : 0 <= d1 <= 16 and 0 <= d2 <= 16; us39[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 9] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
//   { load_to_gp_in_on_chip_1_buf4_to_gp_5164167[d0 = 0, d1, d2] -> [0, 4 + 2d1, 4 + 2d2, 5] : 3 <= d1 <= 34 and 3 <= d2 <= 34 }
// Condition for load_to_gp_in_on_chip_1_buf4_to_gp_5164167(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-5 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((72 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((72 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_1_buf4_us44_to_gp_3172175[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 11] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for load_to_gp_in_on_chip_1_buf4_us44_to_gp_3172175(((((-11 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((71 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((71 + -1*i2)) >= 0)))
//   { us47[d0 = 0, d1, d2] -> [0, 8 + d1, 8 + d2, 10] : 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for us47(((((-10 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((71 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((71 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_2_buf12_to_gp_2180183[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 12] : 0 <= d1 <= 16 and 0 <= d2 <= 16 }
// Condition for load_to_gp_in_on_chip_2_buf12_to_gp_2180183(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-12 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((70 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))
//   { load_to_in_on_chip_to_gp_3220223[d0 = 0, d1, d2] -> [0, 1 + d1, 1 + d2, 1] : 7 <= d1 <= 70 and 7 <= d2 <= 70 }
// Condition for load_to_in_on_chip_to_gp_3220223(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-8 + 1*i1)) >= 0) && (((71 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((71 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_2_buf12_us36_to_gp_5196199[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 13] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
// Condition for load_to_gp_in_on_chip_2_buf12_us36_to_gp_5196199(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-13 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((72 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((72 + -1*i2)) >= 0)))
//   { pw_math_in03[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 70 and 0 <= d2 <= 70 }
// Condition for pw_math_in03(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((70 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))
//   { gp_in_on_chip_16_merged157[d0 = 0, d1, d2] -> [0, 2 + 2d1, 2 + 2d2, 2] : 0 <= d1 <= 34 and 0 <= d2 <= 34 }
// Condition for gp_in_on_chip_16_merged157(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((70 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))
//   { load_to_gp_in_on_chip_2_buf12_to_gp_7188191[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 4] : 0 < d1 <= 16 and 0 < d2 <= 16 }
// Condition for load_to_gp_in_on_chip_2_buf12_to_gp_7188191(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-4 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((70 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))
//   { gp_in_on_chip_214_merged160[d0 = 0, d1, d2] -> [0, 6 + 4d1, 6 + 4d2, 3] : 0 <= d1 <= 16 and 0 <= d2 <= 16 }
// Condition for gp_in_on_chip_214_merged160(((((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-6 + 1*i1)) >= 0) && (((70 + -1*i1)) >= 0) && (((-6 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))
//   { us39[d0 = 0, d1, d2] -> [0, 10 + 2d1, 10 + 2d2, 9] : 0 <= d1 <= 31 and 0 <= d2 <= 31 }
// Condition for us39(((((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-9 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-10 + 1*i1)) >= 0) && (((72 + -1*i1)) >= 0) && (((-10 + 1*i2)) >= 0) && (((72 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : i1 <= 71 and i2 <= 71 and 3 <= i3 <= 11 and ((i1 >= 8 and i2 >= 8 and i3 >= 10) or ((2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 <= 70 and i2 <= 70 and i3 <= 4 and 4i3 <= 6 + i2 and 4i3 <= 6 + i1)); [0, i1, i2, 0] : 0 <= i1 <= 70 and 0 <= i2 <= 70; [0, i1, i2, 13] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 10 <= i1 <= 72 and 10 <= i2 <= 72; [0, i1, i2, 12] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and 6 <= i1 <= 70 and 6 <= i2 <= 70; [0, i1, i2, 9] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 10 <= i1 <= 72 and 10 <= i2 <= 72; [0, i1, i2, 5] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 10 <= i1 <= 72 and 10 <= i2 <= 72; [0, i1, i2, 2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 2 <= i1 <= 70 and 2 <= i2 <= 70; [0, i1, i2, 1] : 8 <= i1 <= 71 and 8 <= i2 <= 71 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 72; i1++) {
	    for (int i2 = 0; i2 <= 72; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] : i1 <= 70 and i2 <= 70 }
	        // { [i0, i1, i2] : i1 <= 70 and i2 <= 70 }
	          // { [i0, i1, i2] : 70 - i1 >= 0 }
	          // { [i0, i1, i2] : 70 - i2 >= 0 }
	        if ((((((70 + -1*i1)) >= 0) && (((70 + -1*i2)) >= 0)))) {
	          pw_math_in03(in /* buf name */, in_on_chip, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : 8 <= i1 <= 71 and 8 <= i2 <= 71 }
	        // { [i0, i1, i2] : 8 <= i1 <= 71 and 8 <= i2 <= 71 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : 71 - i1 >= 0 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	          // { [i0, i1, i2] : 71 - i2 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0) && (((71 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((71 + -1*i2)) >= 0)))) {
	          load_to_in_on_chip_to_gp_3220223(in_on_chip /* buf name */, in_on_chip_to_gp_3220, 0, ((-1 + 1*i1)), ((-1 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 2 <= i1 <= 70 and 2 <= i2 <= 70 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and 2 <= i1 <= 70 and 2 <= i2 <= 70 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : 70 - i1 >= 0 }
	          // { [i0, i1, i2] : -2 + i2 >= 0 }
	          // { [i0, i1, i2] : 70 - i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-2 + 1*i1)) >= 0) && (((70 + -1*i1)) >= 0) && (((-2 + 1*i2)) >= 0) && (((70 + -1*i2)) >= 0)))) {
	          gp_in_on_chip_16_merged157(in_on_chip /* buf name */, gp_in_on_chip_1_buf4, 0, ((-1 + (1*(((1*i1)) >> 1)))), ((-1 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 6 and i2 >= 6 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 6 and i2 >= 6 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-6 + 1*i1)) >= 0) && (((-6 + 1*i2)) >= 0)))) {
	          gp_in_on_chip_214_merged160(gp_in_on_chip_1_buf4 /* buf name */, gp_in_on_chip_2_buf12, 0, ((-2 + (1*(((2 + 1*i1)) >> 2)))), ((-2 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 10 and i2 >= 10 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 10 and i2 >= 10 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	          // { [i0, i1, i2] : -10 + i2 >= 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-10 + 1*i1)) >= 0) && (((-10 + 1*i2)) >= 0)))) {
	          load_to_gp_in_on_chip_2_buf12_to_gp_7188191(gp_in_on_chip_2_buf12 /* buf name */, gp_in_on_chip_2_buf12_to_gp_7188, 0, ((-2 + (1*(((2 + 1*i1)) >> 2)))), ((-2 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 >= 10 and i2 >= 10 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 >= 10 and i2 >= 10 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	          // { [i0, i1, i2] : -10 + i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-10 + 1*i1)) >= 0) && (((-10 + 1*i2)) >= 0)))) {
	          load_to_gp_in_on_chip_1_buf4_to_gp_5164167(gp_in_on_chip_1_buf4 /* buf name */, gp_in_on_chip_1_buf4_to_gp_5164, 0, ((-2 + (1*(((1*i1)) >> 1)))), ((-2 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 >= 10 and i2 >= 10 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 >= 10 and i2 >= 10 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	          // { [i0, i1, i2] : -10 + i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-10 + 1*i1)) >= 0) && (((-10 + 1*i2)) >= 0)))) {
	          us39(gp_in_on_chip_2_buf12 /* buf name */, gp_in_on_chip_2_buf12_us36, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + (1*(((1*i2)) >> 1)))));
	        }
	        // { [i0, i1, i2] : 8 <= i1 <= 71 and 8 <= i2 <= 71 }
	        // { [i0, i1, i2] : 8 <= i1 <= 71 and 8 <= i2 <= 71 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : 71 - i1 >= 0 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	          // { [i0, i1, i2] : 71 - i2 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0) && (((71 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((71 + -1*i2)) >= 0)))) {
	          us47(gp_in_on_chip_1_buf4 /* buf name */, gp_in_on_chip_1_buf4_us44, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : 8 <= i1 <= 71 and 8 <= i2 <= 71 }
	        // { [i0, i1, i2] : 8 <= i1 <= 71 and 8 <= i2 <= 71 }
	          // { [i0, i1, i2] : -8 + i1 >= 0 }
	          // { [i0, i1, i2] : 71 - i1 >= 0 }
	          // { [i0, i1, i2] : -8 + i2 >= 0 }
	          // { [i0, i1, i2] : 71 - i2 >= 0 }
	        if ((((((-8 + 1*i1)) >= 0) && (((71 + -1*i1)) >= 0) && (((-8 + 1*i2)) >= 0) && (((71 + -1*i2)) >= 0)))) {
	          load_to_gp_in_on_chip_1_buf4_us44_to_gp_3172175(gp_in_on_chip_1_buf4_us44 /* buf name */, gp_in_on_chip_1_buf4_us44_to_gp_3172, 0, ((-8 + 1*i1)), ((-8 + 1*i2)));
	        }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 6 and i2 >= 6 }
	        // { [i0, i1, i2] : (2 + i1) mod 4 = 0 and (2 + i2) mod 4 = 0 and i1 >= 6 and i2 >= 6 }
	          // { [i0, i1, i2] : -2 - i2 + 4*floor((2 + i2)/4) = 0 }
	          // { [i0, i1, i2] : -2 - i1 + 4*floor((2 + i1)/4) = 0 }
	          // { [i0, i1, i2] : -6 + i1 >= 0 }
	          // { [i0, i1, i2] : -6 + i2 >= 0 }
	        if ((((((-2 + -1*i2 + (4*(((2 + 1*i2)) >> 2)))) == 0) && (((-2 + -1*i1 + (4*(((2 + 1*i1)) >> 2)))) == 0) && (((-6 + 1*i1)) >= 0) && (((-6 + 1*i2)) >= 0)))) {
	          load_to_gp_in_on_chip_2_buf12_to_gp_2180183(gp_in_on_chip_2_buf12 /* buf name */, gp_in_on_chip_2_buf12_to_gp_2180, 0, ((-2 + (1*(((2 + 1*i1)) >> 2)))), ((-2 + (1*(((2 + 1*i2)) >> 2)))));
	        }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 >= 10 and i2 >= 10 }
	        // { [i0, i1, i2] : (i1) mod 2 = 0 and (i2) mod 2 = 0 and i1 >= 10 and i2 >= 10 }
	          // { [i0, i1, i2] : -i2 + 2*floor((i2)/2) = 0 }
	          // { [i0, i1, i2] : -i1 + 2*floor((i1)/2) = 0 }
	          // { [i0, i1, i2] : -10 + i1 >= 0 }
	          // { [i0, i1, i2] : -10 + i2 >= 0 }
	        if ((((((-1*i2 + (2*(((1*i2)) >> 1)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-10 + 1*i1)) >= 0) && (((-10 + 1*i2)) >= 0)))) {
	          load_to_gp_in_on_chip_2_buf12_us36_to_gp_5196199(gp_in_on_chip_2_buf12_us36 /* buf name */, gp_in_on_chip_2_buf12_us36_to_gp_5196, 0, ((-5 + (1*(((1*i1)) >> 1)))), ((-5 + (1*(((1*i2)) >> 1)))));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

// Driver function
void pyr_blnd2d500_2048(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("pyr_blnd2d500_2048_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__

#ifdef __VIVADO_SYNTH__
#pragma HLS dataflow
#endif //__VIVADO_SYNTH__

  // channel width: 1
  // port width   : 32
  // dag size     : 500
// Bits to slack match gp_in_on_chip_1_buf4_to_gp_5164 = 16000
// Bits to slack match gp_in_on_chip_1_buf4_to_gp_5164 = 16000
  // channel width: 1
  // port width   : 32
  // dag size     : 500
// Bits to slack match gp_in_on_chip_1_buf4_us44_to_gp_3172 = 16000
// Bits to slack match gp_in_on_chip_1_buf4_us44_to_gp_3172 = 16000
  // channel width: 1
  // port width   : 32
  // dag size     : 500
// Bits to slack match gp_in_on_chip_2_buf12_to_gp_2180 = 16000
// Bits to slack match gp_in_on_chip_2_buf12_to_gp_2180 = 16000
  // channel width: 1
  // port width   : 32
  // dag size     : 500
// Bits to slack match gp_in_on_chip_2_buf12_to_gp_7188 = 16000
// Bits to slack match gp_in_on_chip_2_buf12_to_gp_7188 = 16000
  // channel width: 1
  // port width   : 32
  // dag size     : 500
// Bits to slack match gp_in_on_chip_2_buf12_us36_to_gp_5196 = 16000
// Bits to slack match gp_in_on_chip_2_buf12_us36_to_gp_5196 = 16000
  // channel width: 1
  // port width   : 32
  // dag size     : 500
// Bits to slack match gp_in_on_chip_3_buf20_us28_to_gp_7204 = 16000
// Bits to slack match gp_in_on_chip_3_buf20_us28_to_gp_7204 = 16000
  // channel width: 1
  // port width   : 32
  // dag size     : 500
// Bits to slack match gp_in_on_chip_3_buf20_us56_to_gp_8212 = 16000
// Bits to slack match gp_in_on_chip_3_buf20_us56_to_gp_8212 = 16000
  // channel width: 1
  // port width   : 32
  // dag size     : 500
// Bits to slack match in_on_chip_to_gp_3220 = 16000
// Bits to slack match in_on_chip_to_gp_3220 = 16000
  // channel width: 1
  // port width   : 32
  // dag size     : 500
// Bits to slack match lp_in_on_chip_0_buf48_to_gp_4228 = 16000
// Bits to slack match lp_in_on_chip_0_buf48_to_gp_4228 = 16000
  // channel width: 1
  // port width   : 32
  // dag size     : 500
// Bits to slack match lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244 = 16000
// Bits to slack match lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244 = 16000
  // channel width: 1
  // port width   : 32
  // dag size     : 500
// Bits to slack match lp_in_on_chip_1_buf40_to_gp_6236 = 16000
// Bits to slack match lp_in_on_chip_1_buf40_to_gp_6236 = 16000
  // channel width: 1
  // port width   : 32
  // dag size     : 500
// Bits to slack match lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260 = 16000
// Bits to slack match lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260 = 16000
  // channel width: 1
  // port width   : 32
  // dag size     : 500
// Bits to slack match lp_in_on_chip_2_buf32_to_gp_8252 = 16000
// Bits to slack match lp_in_on_chip_2_buf32_to_gp_8252 = 16000
// Bits in internal re-use buffers               : 17568 bits
// Bits in channels needed to guarantee causality: 12480
// Bits in channels needed to match slack        : 208000
  HWStream< hw_uint<32> > gp_in_on_chip_2_buf12_to_gp_2180;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_2_buf12_to_gp_2180.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_3_buf20_us28_to_gp_7204;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_3_buf20_us28_to_gp_7204.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_3_buf20_us56_to_gp_8212;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_3_buf20_us56_to_gp_8212.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_1_buf4_us44_to_gp_3172;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_1_buf4_us44_to_gp_3172.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > in_on_chip_to_gp_3220;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=in_on_chip_to_gp_3220.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in_on_chip_0_buf48_to_gp_4228;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in_on_chip_0_buf48_to_gp_4228.values depth=890
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_1_buf4_to_gp_5164;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_1_buf4_to_gp_5164.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_2_buf12_us36_to_gp_5196;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_2_buf12_us36_to_gp_5196.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in_on_chip_1_buf40_to_gp_6236;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in_on_chip_1_buf40_to_gp_6236.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > gp_in_on_chip_2_buf12_to_gp_7188;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=gp_in_on_chip_2_buf12_to_gp_7188.values depth=500
#endif //__VIVADO_SYNTH__
  HWStream< hw_uint<32> > lp_in_on_chip_2_buf32_to_gp_8252;
#ifdef __VIVADO_SYNTH__
#pragma HLS stream variable=lp_in_on_chip_2_buf32_to_gp_8252.values depth=500
#endif //__VIVADO_SYNTH__


  Extracted_gp_in_on_chip_15_gp_in_on_chip_1_buf4_ld166_gp_in_on_chip_1_buf4_us44_ld174_gp_in_on_chip_213_gp_in_on_chip_2_buf12_ld182_gp_in_on_chip_2_buf12_ld190_gp_in_on_chip_2_buf12_us36_ld198_in_on_chip_ld222_pw_math_in01_us_gp_in_on_chip_1_buf445_us_gp_in_on_chip_2_buf1237_(in, gp_in_on_chip_1_buf4_to_gp_5164, gp_in_on_chip_1_buf4_us44_to_gp_3172, gp_in_on_chip_2_buf12_to_gp_2180, gp_in_on_chip_2_buf12_to_gp_7188, gp_in_on_chip_2_buf12_us36_to_gp_5196, in_on_chip_to_gp_3220);
  Extracted_gp_in_on_chip_2_buf12_to_gp_2180_ld186_gp_in_on_chip_321_gp_in_on_chip_3_buf20_us28_ld206_gp_in_on_chip_3_buf20_us56_ld214_us_gp_in_on_chip_3_buf2029_us_gp_in_on_chip_3_buf2057_(gp_in_on_chip_2_buf12_to_gp_2180, gp_in_on_chip_3_buf20_us28_to_gp_7204, gp_in_on_chip_3_buf20_us56_to_gp_8212);
  Extracted_gp_in_on_chip_1_buf4_us44_to_gp_3172_ld178_in_on_chip_to_gp_3220_ld226_lp_in_on_chip_049_lp_in_on_chip_0_buf48_ld230_(gp_in_on_chip_1_buf4_us44_to_gp_3172, in_on_chip_to_gp_3220, lp_in_on_chip_0_buf48_to_gp_4228);
  Extracted_gp_in_on_chip_1_buf4_to_gp_5164_ld170_gp_in_on_chip_2_buf12_us36_to_gp_5196_ld202_lp_in_on_chip_141_lp_in_on_chip_1_buf40_ld238_(gp_in_on_chip_1_buf4_to_gp_5164, gp_in_on_chip_2_buf12_us36_to_gp_5196, lp_in_on_chip_1_buf40_to_gp_6236);
  Extracted_gp_in_on_chip_2_buf12_to_gp_7188_ld194_gp_in_on_chip_3_buf20_us28_to_gp_7204_ld210_lp_in_on_chip_233_lp_in_on_chip_2_buf32_ld254_(gp_in_on_chip_2_buf12_to_gp_7188, gp_in_on_chip_3_buf20_us28_to_gp_7204, lp_in_on_chip_2_buf32_to_gp_8252);
  Extracted_gp_in_on_chip_3_buf20_us56_to_gp_8212_ld218_lp_in_on_chip_2_buf32_reconstruct_lp5253_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_ld262_lp_in_on_chip_2_buf32_to_gp_8252_ld258_us_lp_in_on_chip_2_buf32_reconstruct_lp52_buf5566_(gp_in_on_chip_3_buf20_us56_to_gp_8212, lp_in_on_chip_2_buf32_to_gp_8252, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260);
  Extracted_lp_in_on_chip_1_buf40_reconstruct_lp6162_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_ld246_lp_in_on_chip_1_buf40_to_gp_6236_ld242_lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260_ld266_us_lp_in_on_chip_1_buf40_reconstruct_lp61_buf6475_(lp_in_on_chip_1_buf40_to_gp_6236, lp_in_on_chip_2_buf32_reconstruct_lp52_buf55_us65_to_gp_6260, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244);
  Extracted_lp_in_on_chip_0_buf48_reconstruct_lp7071_lp_in_on_chip_0_buf48_to_gp_4228_ld234_lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244_ld250_pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980_(lp_in_on_chip_0_buf48_to_gp_4228, lp_in_on_chip_1_buf40_reconstruct_lp61_buf64_us74_to_gp_4244, out);

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void pyr_blnd2d500_2048_wrapper(HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */in, HWStream<hw_uint<32> >& /* no bundle get_args num ports = 1 */out, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    pyr_blnd2d500_2048(in, out);
  }
}
#ifdef __VIVADO_SYNTH__
  // { pw_math_in03[root = 0, pw_math_in01, pw_math_in02] -> in[pw_math_in02, pw_math_in01] : 0 <= pw_math_in01 <= 70 and 0 <= pw_math_in02 <= 70 }
const int pw_math_in03_read_pipe0_num_transfers = 5041;
  // { pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982[root = 0, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981] -> out[pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980] : 0 <= pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737980 <= 63 and 0 <= pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737981 <= 63 }
const int pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_write_pipe0_num_transfers = 4096;


extern "C" {

void pyr_blnd2d500_2048_accel(hw_uint<32>* pw_math_in03_read_pipe0, hw_uint<32>* pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = pw_math_in03_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = pw_math_in03_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > pw_math_in03_read_pipe0_channel;
  static HWStream<hw_uint<32> > pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_write_pipe0_channel;

  burst_read<32>(pw_math_in03_read_pipe0, pw_math_in03_read_pipe0_channel, pw_math_in03_read_pipe0_num_transfers*size);

  pyr_blnd2d500_2048_wrapper(pw_math_in03_read_pipe0_channel, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_write_pipe0_channel, size);

  burst_write<32>(pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_write_pipe0, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_write_pipe0_channel, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_write_pipe0_num_transfers*size);
}

}
extern "C" {

void pyr_blnd2d500_2048_rdai(HWStream<hw_uint<32> >& pw_math_in03_read_pipe0, HWStream<hw_uint<32> >&  pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = pw_math_in03_read_pipe0
#pragma HLS INTERFACE axis register port = pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  pyr_blnd2d500_2048(pw_math_in03_read_pipe0, pw_math_lp_in_on_chip_0_buf48_reconstruct_lp70_buf737982_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

