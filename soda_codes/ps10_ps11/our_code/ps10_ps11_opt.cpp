#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: ps10_ps11_opt_compute_units.h
#include "ps10_ps11_opt_compute_units.h"

#include "hw_classes.h"

struct bright_bright_update_0_write0_merged_banks_11_cache {
	// RAM Box: {[0, 1926], [0, 1086]}
	// Capacity: 1930
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 962> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 962> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_963() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_964() {
		return f4;
	}

	inline hw_uint<16> peek_965() {
		return f6;
	}

	inline hw_uint<16> peek_1927() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1928() {
		return f8;
	}

	inline hw_uint<16> peek_1929() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 962
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 962 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 962
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 962 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct bright_bright_update_0_write1_merged_banks_11_cache {
	// RAM Box: {[1, 1927], [0, 1086]}
	// Capacity: 1930
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 962> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 962> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_963() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_964() {
		return f4;
	}

	inline hw_uint<16> peek_965() {
		return f6;
	}

	inline hw_uint<16> peek_1927() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1928() {
		return f8;
	}

	inline hw_uint<16> peek_1929() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 962
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 962 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 962
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 962 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct bright_cache {
  // # of banks: 2
  bright_bright_update_0_write0_merged_banks_11_cache bright_bright_update_0_write0_merged_banks_11;
  bright_bright_update_0_write1_merged_banks_11_cache bright_bright_update_0_write1_merged_banks_11;
};



inline void bright_bright_update_0_write0_write(hw_uint<16>& bright_bright_update_0_write0, bright_cache& bright, int d0, int d1, int dynamic_address) {
  bright.bright_bright_update_0_write0_merged_banks_11.push(bright_bright_update_0_write0);
}

inline void bright_bright_update_0_write1_write(hw_uint<16>& bright_bright_update_0_write1, bright_cache& bright, int d0, int d1, int dynamic_address) {
  bright.bright_bright_update_0_write1_merged_banks_11.push(bright_bright_update_0_write1);
}

inline hw_uint<16> bright_gauss_blur_1_rd0_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd0 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2d0, d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_1929();
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd1_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd1 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2d0, 1 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_965();
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd10_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd10 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + 2d0, 1 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_11.peek_965();
  return value_bright_bright_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd11_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd11 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + 2d0, 2 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_11.peek_1();
  return value_bright_bright_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd12_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd12 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + 2d0, d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_1928();
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd13_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd13 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + 2d0, 1 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_964();
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd14_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd14 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + 2d0, 2 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_0();
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd15_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd15 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[3 + 2d0, d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_11.peek_1928();
  return value_bright_bright_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd16_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd16 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[3 + 2d0, 1 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_11.peek_964();
  return value_bright_bright_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd17_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd17 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[3 + 2d0, 2 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_11.peek_0();
  return value_bright_bright_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd2_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd2 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2d0, 2 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_1();
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd3_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd3 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + 2d0, d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_11.peek_1929();
  return value_bright_bright_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd4_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd4 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + 2d0, 1 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_11.peek_965();
  return value_bright_bright_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd5_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd5 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + 2d0, 2 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_11.peek_1();
  return value_bright_bright_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd6_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd6 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + 2d0, d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_1928();
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd7_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd7 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + 2d0, 1 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_964();
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd8_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd8 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[2 + 2d0, 2 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_0();
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_1_rd9_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_1_rd9 read pattern: { bright_gauss_blur_1_update_0[d0, d1] -> bright[1 + 2d0, d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_11.peek_1929();
  return value_bright_bright_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_laplace_diff_0_rd0_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_0_rd0 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { bright_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_1929();
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_laplace_diff_0_rd1_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_0_rd1 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { bright_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_11.peek_1929();
  return value_bright_bright_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_weights_rd0_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_rd0 read pattern: { bright_weights_update_0[d0, d1] -> bright[2d0, d1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Read schedule : { bright_weights_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_bright_update_0_write0 = bright.bright_bright_update_0_write0_merged_banks_11.peek_0();
  return value_bright_bright_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_rd1_select(bright_cache& bright, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_rd1 read pattern: { bright_weights_update_0[d0, d1] -> bright[1 + 2d0, d1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Read schedule : { bright_weights_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Write schedule: { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_bright_update_0_write1 = bright.bright_bright_update_0_write1_merged_banks_11.peek_0();
  return value_bright_bright_update_0_write1;
  return 0;
}

// # of bundles = 4
// bright_gauss_blur_1_update_0_read
//	bright_gauss_blur_1_rd0
//	bright_gauss_blur_1_rd1
//	bright_gauss_blur_1_rd2
//	bright_gauss_blur_1_rd3
//	bright_gauss_blur_1_rd4
//	bright_gauss_blur_1_rd5
//	bright_gauss_blur_1_rd6
//	bright_gauss_blur_1_rd7
//	bright_gauss_blur_1_rd8
//	bright_gauss_blur_1_rd9
//	bright_gauss_blur_1_rd10
//	bright_gauss_blur_1_rd11
//	bright_gauss_blur_1_rd12
//	bright_gauss_blur_1_rd13
//	bright_gauss_blur_1_rd14
//	bright_gauss_blur_1_rd15
//	bright_gauss_blur_1_rd16
//	bright_gauss_blur_1_rd17
inline hw_uint<288> bright_bright_gauss_blur_1_update_0_read_bundle_read(bright_cache& bright, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 18
    // bright_gauss_blur_1_rd0
    // bright_gauss_blur_1_rd1
    // bright_gauss_blur_1_rd2
    // bright_gauss_blur_1_rd3
    // bright_gauss_blur_1_rd4
    // bright_gauss_blur_1_rd5
    // bright_gauss_blur_1_rd6
    // bright_gauss_blur_1_rd7
    // bright_gauss_blur_1_rd8
    // bright_gauss_blur_1_rd9
    // bright_gauss_blur_1_rd10
    // bright_gauss_blur_1_rd11
    // bright_gauss_blur_1_rd12
    // bright_gauss_blur_1_rd13
    // bright_gauss_blur_1_rd14
    // bright_gauss_blur_1_rd15
    // bright_gauss_blur_1_rd16
    // bright_gauss_blur_1_rd17

	hw_uint<288> result;
	hw_uint<16> bright_gauss_blur_1_rd0_res = bright_gauss_blur_1_rd0_select(bright, d0, d1, dynamic_address);
	set_at<0, 288>(result, bright_gauss_blur_1_rd0_res);
	hw_uint<16> bright_gauss_blur_1_rd1_res = bright_gauss_blur_1_rd1_select(bright, d0, d1, dynamic_address);
	set_at<16, 288>(result, bright_gauss_blur_1_rd1_res);
	hw_uint<16> bright_gauss_blur_1_rd2_res = bright_gauss_blur_1_rd2_select(bright, d0, d1, dynamic_address);
	set_at<32, 288>(result, bright_gauss_blur_1_rd2_res);
	hw_uint<16> bright_gauss_blur_1_rd3_res = bright_gauss_blur_1_rd3_select(bright, d0, d1, dynamic_address);
	set_at<48, 288>(result, bright_gauss_blur_1_rd3_res);
	hw_uint<16> bright_gauss_blur_1_rd4_res = bright_gauss_blur_1_rd4_select(bright, d0, d1, dynamic_address);
	set_at<64, 288>(result, bright_gauss_blur_1_rd4_res);
	hw_uint<16> bright_gauss_blur_1_rd5_res = bright_gauss_blur_1_rd5_select(bright, d0, d1, dynamic_address);
	set_at<80, 288>(result, bright_gauss_blur_1_rd5_res);
	hw_uint<16> bright_gauss_blur_1_rd6_res = bright_gauss_blur_1_rd6_select(bright, d0, d1, dynamic_address);
	set_at<96, 288>(result, bright_gauss_blur_1_rd6_res);
	hw_uint<16> bright_gauss_blur_1_rd7_res = bright_gauss_blur_1_rd7_select(bright, d0, d1, dynamic_address);
	set_at<112, 288>(result, bright_gauss_blur_1_rd7_res);
	hw_uint<16> bright_gauss_blur_1_rd8_res = bright_gauss_blur_1_rd8_select(bright, d0, d1, dynamic_address);
	set_at<128, 288>(result, bright_gauss_blur_1_rd8_res);
	hw_uint<16> bright_gauss_blur_1_rd9_res = bright_gauss_blur_1_rd9_select(bright, d0, d1, dynamic_address);
	set_at<144, 288>(result, bright_gauss_blur_1_rd9_res);
	hw_uint<16> bright_gauss_blur_1_rd10_res = bright_gauss_blur_1_rd10_select(bright, d0, d1, dynamic_address);
	set_at<160, 288>(result, bright_gauss_blur_1_rd10_res);
	hw_uint<16> bright_gauss_blur_1_rd11_res = bright_gauss_blur_1_rd11_select(bright, d0, d1, dynamic_address);
	set_at<176, 288>(result, bright_gauss_blur_1_rd11_res);
	hw_uint<16> bright_gauss_blur_1_rd12_res = bright_gauss_blur_1_rd12_select(bright, d0, d1, dynamic_address);
	set_at<192, 288>(result, bright_gauss_blur_1_rd12_res);
	hw_uint<16> bright_gauss_blur_1_rd13_res = bright_gauss_blur_1_rd13_select(bright, d0, d1, dynamic_address);
	set_at<208, 288>(result, bright_gauss_blur_1_rd13_res);
	hw_uint<16> bright_gauss_blur_1_rd14_res = bright_gauss_blur_1_rd14_select(bright, d0, d1, dynamic_address);
	set_at<224, 288>(result, bright_gauss_blur_1_rd14_res);
	hw_uint<16> bright_gauss_blur_1_rd15_res = bright_gauss_blur_1_rd15_select(bright, d0, d1, dynamic_address);
	set_at<240, 288>(result, bright_gauss_blur_1_rd15_res);
	hw_uint<16> bright_gauss_blur_1_rd16_res = bright_gauss_blur_1_rd16_select(bright, d0, d1, dynamic_address);
	set_at<256, 288>(result, bright_gauss_blur_1_rd16_res);
	hw_uint<16> bright_gauss_blur_1_rd17_res = bright_gauss_blur_1_rd17_select(bright, d0, d1, dynamic_address);
	set_at<272, 288>(result, bright_gauss_blur_1_rd17_res);
	return result;
}

// bright_laplace_diff_0_update_0_read
//	bright_laplace_diff_0_rd0
//	bright_laplace_diff_0_rd1
inline hw_uint<32> bright_bright_laplace_diff_0_update_0_read_bundle_read(bright_cache& bright, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // bright_laplace_diff_0_rd0
    // bright_laplace_diff_0_rd1

	hw_uint<32> result;
	hw_uint<16> bright_laplace_diff_0_rd0_res = bright_laplace_diff_0_rd0_select(bright, d0, d1, dynamic_address);
	set_at<0, 32>(result, bright_laplace_diff_0_rd0_res);
	hw_uint<16> bright_laplace_diff_0_rd1_res = bright_laplace_diff_0_rd1_select(bright, d0, d1, dynamic_address);
	set_at<16, 32>(result, bright_laplace_diff_0_rd1_res);
	return result;
}

// bright_update_0_write
//	bright_bright_update_0_write0
//	bright_bright_update_0_write1
inline void bright_bright_update_0_write_bundle_write(hw_uint<32>& bright_update_0_write, bright_cache& bright, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_bright_update_0_write0_res = bright_update_0_write.extract<0, 15>();
	bright_bright_update_0_write0_write(bright_bright_update_0_write0_res, bright, d0, d1, dynamic_address);
	hw_uint<16> bright_bright_update_0_write1_res = bright_update_0_write.extract<16, 31>();
	bright_bright_update_0_write1_write(bright_bright_update_0_write1_res, bright, d0, d1, dynamic_address);
}

// bright_weights_update_0_read
//	bright_weights_rd0
//	bright_weights_rd1
inline hw_uint<32> bright_bright_weights_update_0_read_bundle_read(bright_cache& bright, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // bright_weights_rd0
    // bright_weights_rd1

	hw_uint<32> result;
	hw_uint<16> bright_weights_rd0_res = bright_weights_rd0_select(bright, d0, d1, dynamic_address);
	set_at<0, 32>(result, bright_weights_rd0_res);
	hw_uint<16> bright_weights_rd1_res = bright_weights_rd1_select(bright, d0, d1, dynamic_address);
	set_at<16, 32>(result, bright_weights_rd1_res);
	return result;
}

#include "hw_classes.h"

struct bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_to_bright_gauss_ds_1_rd0_cache {
	// RAM Box: {[0, 1924], [0, 1084]}
	// Capacity: 1
	// # of read delays: 2
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

struct bright_gauss_blur_1_cache {
  // # of banks: 1
  bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_to_bright_gauss_ds_1_rd0_cache bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_to_bright_gauss_ds_1_rd0;
};



inline void bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_write(hw_uint<16>& bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1, int dynamic_address) {
  bright_gauss_blur_1.bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_to_bright_gauss_ds_1_rd0.push(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0);
}

inline void bright_gauss_blur_1_bright_gauss_blur_1_update_0_write1_write(hw_uint<16>& bright_gauss_blur_1_bright_gauss_blur_1_update_0_write1, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline hw_uint<16> bright_gauss_ds_1_rd0_select(bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_ds_1_rd0 read pattern: { bright_gauss_ds_1_update_0[d0, d1] -> bright_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  // Read schedule : { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 19] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  // Write schedule: { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  auto value_bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0 = bright_gauss_blur_1.bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_to_bright_gauss_ds_1_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_gauss_blur_1_update_0_write
//	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0
//	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write1
inline void bright_gauss_blur_1_bright_gauss_blur_1_update_0_write_bundle_write(hw_uint<32>& bright_gauss_blur_1_update_0_write, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_res = bright_gauss_blur_1_update_0_write.extract<0, 15>();
	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_write(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write0_res, bright_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> bright_gauss_blur_1_bright_gauss_blur_1_update_0_write1_res = bright_gauss_blur_1_update_0_write.extract<16, 31>();
	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write1_write(bright_gauss_blur_1_bright_gauss_blur_1_update_0_write1_res, bright_gauss_blur_1, d0, d1, dynamic_address);
}

// bright_gauss_ds_1_update_0_read
//	bright_gauss_ds_1_rd0
inline hw_uint<16> bright_gauss_blur_1_bright_gauss_ds_1_update_0_read_bundle_read(bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_gauss_ds_1_rd0

	hw_uint<16> result;
	hw_uint<16> bright_gauss_ds_1_rd0_res = bright_gauss_ds_1_rd0_select(bright_gauss_blur_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_gauss_ds_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_to_bright_gauss_ds_2_rd0_cache {
	// RAM Box: {[0, 960], [0, 540]}
	// Capacity: 1
	// # of read delays: 2
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

struct bright_gauss_blur_2_cache {
  // # of banks: 1
  bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_to_bright_gauss_ds_2_rd0_cache bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_to_bright_gauss_ds_2_rd0;
};



inline void bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_write(hw_uint<16>& bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0, bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1, int dynamic_address) {
  bright_gauss_blur_2.bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_to_bright_gauss_ds_2_rd0.push(bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0);
}

inline hw_uint<16> bright_gauss_ds_2_rd0_select(bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_ds_2_rd0 read pattern: { bright_gauss_ds_2_update_0[d0, d1] -> bright_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  // Read schedule : { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 27] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  // Write schedule: { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 20] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0 = bright_gauss_blur_2.bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_to_bright_gauss_ds_2_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_gauss_blur_2_update_0_write
//	bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0
inline void bright_gauss_blur_2_bright_gauss_blur_2_update_0_write_bundle_write(hw_uint<16>& bright_gauss_blur_2_update_0_write, bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_res = bright_gauss_blur_2_update_0_write.extract<0, 15>();
	bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_write(bright_gauss_blur_2_bright_gauss_blur_2_update_0_write0_res, bright_gauss_blur_2, d0, d1, dynamic_address);
}

// bright_gauss_ds_2_update_0_read
//	bright_gauss_ds_2_rd0
inline hw_uint<16> bright_gauss_blur_2_bright_gauss_ds_2_update_0_read_bundle_read(bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_gauss_ds_2_rd0

	hw_uint<16> result;
	hw_uint<16> bright_gauss_ds_2_rd0_res = bright_gauss_ds_2_rd0_select(bright_gauss_blur_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_gauss_ds_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_to_bright_gauss_ds_3_rd0_cache {
	// RAM Box: {[0, 478], [0, 268]}
	// Capacity: 1
	// # of read delays: 2
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

struct bright_gauss_blur_3_cache {
  // # of banks: 1
  bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_to_bright_gauss_ds_3_rd0_cache bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_to_bright_gauss_ds_3_rd0;
};



inline void bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_write(hw_uint<16>& bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0, bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1, int dynamic_address) {
  bright_gauss_blur_3.bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_to_bright_gauss_ds_3_rd0.push(bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0);
}

inline hw_uint<16> bright_gauss_ds_3_rd0_select(bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_ds_3_rd0 read pattern: { bright_gauss_ds_3_update_0[d0, d1] -> bright_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Read schedule : { bright_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 7 + 4d0, 34] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Write schedule: { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 28] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0 = bright_gauss_blur_3.bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_to_bright_gauss_ds_3_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_gauss_blur_3_update_0_write
//	bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0
inline void bright_gauss_blur_3_bright_gauss_blur_3_update_0_write_bundle_write(hw_uint<16>& bright_gauss_blur_3_update_0_write, bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_res = bright_gauss_blur_3_update_0_write.extract<0, 15>();
	bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_write(bright_gauss_blur_3_bright_gauss_blur_3_update_0_write0_res, bright_gauss_blur_3, d0, d1, dynamic_address);
}

// bright_gauss_ds_3_update_0_read
//	bright_gauss_ds_3_rd0
inline hw_uint<16> bright_gauss_blur_3_bright_gauss_ds_3_update_0_read_bundle_read(bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_gauss_ds_3_rd0

	hw_uint<16> result;
	hw_uint<16> bright_gauss_ds_3_rd0_res = bright_gauss_ds_3_rd0_select(bright_gauss_blur_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_gauss_ds_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_cache {
	// RAM Box: {[0, 962], [0, 542]}
	// Capacity: 963
	// # of read delays: 961
	fifo<hw_uint<16>, 963> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(962 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd1_cache {
	// RAM Box: {[0, 962], [0, 542]}
	// Capacity: 963
	// # of read delays: 961
	fifo<hw_uint<16>, 963> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(962 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10_cache {
	// RAM Box: {[0, 962], [0, 542]}
	// Capacity: 1929
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 960> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 960> f11;
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

	inline hw_uint<16> peek_962() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_963() {
		return f6;
	}

	inline hw_uint<16> peek_964() {
		return f8;
	}

	inline hw_uint<16> peek_965() {
		return f10;
	}

	inline hw_uint<16> peek_1925() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_1926() {
		return f12;
	}

	inline hw_uint<16> peek_1927() {
		return f14;
	}

	inline hw_uint<16> peek_1928() {
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
    // cap: 1 reading from capacity: 960
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
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
    // cap: 1 reading from capacity: 960
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
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

struct bright_gauss_ds_1_cache {
  // # of banks: 3
  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0_cache bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0;
  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd1_cache bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd1;
  bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10_cache bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10;
};



inline void bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_write(hw_uint<16>& bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0, bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
  bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0.push(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0);
  bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd1.push(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0);
  bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.push(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0);
}

inline hw_uint<16> bright_gauss_blur_2_rd0_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd0 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 20] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 19] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_1928();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_2_rd1_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd1 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 20] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 19] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_965();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_2_rd2_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd2 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 20] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 19] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_2();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_2_rd3_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd3 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 20] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 19] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_1927();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_2_rd4_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd4 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 20] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 19] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_964();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_2_rd5_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd5 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 20] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 19] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_1();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_2_rd6_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd6 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 20] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 19] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_1926();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_2_rd7_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd7 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 20] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 19] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_963();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_2_rd8_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_2_rd8 read pattern: { bright_gauss_blur_2_update_0[d0, d1] -> bright_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 20] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 19] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_0();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_laplace_diff_1_rd0_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_1_rd0 read pattern: { bright_laplace_diff_1_update_0[d0, d1] -> bright_gauss_ds_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Read schedule : { bright_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 47] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 19] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_merged_banks_10.peek_1928();
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_laplace_us_0_rd0_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_us_0_rd0 read pattern: { bright_laplace_us_0_update_0[d0, d1] -> bright_gauss_ds_1[d0, o1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 45] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 19] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((962 - d0)) : 0);
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_laplace_us_0_rd1_select(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_us_0_rd1 read pattern: { bright_laplace_us_0_update_0[d0, d1] -> bright_gauss_ds_1[d0, o1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 45] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 19] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0 = bright_gauss_ds_1.bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_to_bright_laplace_us_0_rd1.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((962 - d0)) : 0);
  return value_bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0;
  return 0;
}

// # of bundles = 4
// bright_gauss_blur_2_update_0_read
//	bright_gauss_blur_2_rd0
//	bright_gauss_blur_2_rd1
//	bright_gauss_blur_2_rd2
//	bright_gauss_blur_2_rd3
//	bright_gauss_blur_2_rd4
//	bright_gauss_blur_2_rd5
//	bright_gauss_blur_2_rd6
//	bright_gauss_blur_2_rd7
//	bright_gauss_blur_2_rd8
inline hw_uint<144> bright_gauss_ds_1_bright_gauss_blur_2_update_0_read_bundle_read(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // bright_gauss_blur_2_rd0
    // bright_gauss_blur_2_rd1
    // bright_gauss_blur_2_rd2
    // bright_gauss_blur_2_rd3
    // bright_gauss_blur_2_rd4
    // bright_gauss_blur_2_rd5
    // bright_gauss_blur_2_rd6
    // bright_gauss_blur_2_rd7
    // bright_gauss_blur_2_rd8

	hw_uint<144> result;
	hw_uint<16> bright_gauss_blur_2_rd0_res = bright_gauss_blur_2_rd0_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 144>(result, bright_gauss_blur_2_rd0_res);
	hw_uint<16> bright_gauss_blur_2_rd1_res = bright_gauss_blur_2_rd1_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<16, 144>(result, bright_gauss_blur_2_rd1_res);
	hw_uint<16> bright_gauss_blur_2_rd2_res = bright_gauss_blur_2_rd2_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<32, 144>(result, bright_gauss_blur_2_rd2_res);
	hw_uint<16> bright_gauss_blur_2_rd3_res = bright_gauss_blur_2_rd3_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<48, 144>(result, bright_gauss_blur_2_rd3_res);
	hw_uint<16> bright_gauss_blur_2_rd4_res = bright_gauss_blur_2_rd4_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<64, 144>(result, bright_gauss_blur_2_rd4_res);
	hw_uint<16> bright_gauss_blur_2_rd5_res = bright_gauss_blur_2_rd5_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<80, 144>(result, bright_gauss_blur_2_rd5_res);
	hw_uint<16> bright_gauss_blur_2_rd6_res = bright_gauss_blur_2_rd6_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<96, 144>(result, bright_gauss_blur_2_rd6_res);
	hw_uint<16> bright_gauss_blur_2_rd7_res = bright_gauss_blur_2_rd7_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<112, 144>(result, bright_gauss_blur_2_rd7_res);
	hw_uint<16> bright_gauss_blur_2_rd8_res = bright_gauss_blur_2_rd8_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<128, 144>(result, bright_gauss_blur_2_rd8_res);
	return result;
}

// bright_gauss_ds_1_update_0_write
//	bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0
inline void bright_gauss_ds_1_bright_gauss_ds_1_update_0_write_bundle_write(hw_uint<16>& bright_gauss_ds_1_update_0_write, bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_res = bright_gauss_ds_1_update_0_write.extract<0, 15>();
	bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_write(bright_gauss_ds_1_bright_gauss_ds_1_update_0_write0_res, bright_gauss_ds_1, d0, d1, dynamic_address);
}

// bright_laplace_diff_1_update_0_read
//	bright_laplace_diff_1_rd0
inline hw_uint<16> bright_gauss_ds_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_laplace_diff_1_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_diff_1_rd0_res = bright_laplace_diff_1_rd0_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_laplace_diff_1_rd0_res);
	return result;
}

// bright_laplace_us_0_update_0_read
//	bright_laplace_us_0_rd0
//	bright_laplace_us_0_rd1
inline hw_uint<32> bright_gauss_ds_1_bright_laplace_us_0_update_0_read_bundle_read(bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // bright_laplace_us_0_rd0
    // bright_laplace_us_0_rd1

	hw_uint<32> result;
	hw_uint<16> bright_laplace_us_0_rd0_res = bright_laplace_us_0_rd0_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 32>(result, bright_laplace_us_0_rd0_res);
	hw_uint<16> bright_laplace_us_0_rd1_res = bright_laplace_us_0_rd1_select(bright_gauss_ds_1, d0, d1, dynamic_address);
	set_at<16, 32>(result, bright_laplace_us_0_rd1_res);
	return result;
}

#include "hw_classes.h"

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_cache {
	// RAM Box: {[0, 480], [0, 270]}
	// Capacity: 965
	// # of read delays: 484
	fifo<hw_uint<16>, 965> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(964 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_cache {
	// RAM Box: {[0, 480], [0, 270]}
	// Capacity: 481
	// # of read delays: 482
	fifo<hw_uint<16>, 481> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(480 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 480], [0, 270]}
	// Capacity: 965
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 478> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 478> f11;
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

	inline hw_uint<16> peek_480() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_481() {
		return f6;
	}

	inline hw_uint<16> peek_482() {
		return f8;
	}

	inline hw_uint<16> peek_483() {
		return f10;
	}

	inline hw_uint<16> peek_961() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_962() {
		return f12;
	}

	inline hw_uint<16> peek_963() {
		return f14;
	}

	inline hw_uint<16> peek_964() {
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
    // cap: 1 reading from capacity: 478
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 478 reading from capacity: 1
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
    // cap: 1 reading from capacity: 478
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 478 reading from capacity: 1
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

struct bright_gauss_ds_2_cache {
  // # of banks: 3
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0;
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0;
  bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9_cache bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9;
};



inline void bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_write(hw_uint<16>& bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0, bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
  bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.push(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0);
}

inline hw_uint<16> bright_gauss_blur_3_rd0_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd0 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 28] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 27] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_964();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_3_rd1_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd1 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 28] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 27] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_483();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_3_rd2_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd2 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 28] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 27] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_2();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_3_rd3_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd3 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 28] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 27] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_963();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_3_rd4_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd4 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 28] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 27] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_482();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_3_rd5_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd5 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 28] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 27] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_3_rd6_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd6 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 28] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 27] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_962();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_3_rd7_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd7 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 28] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 27] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_481();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_gauss_blur_3_rd8_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_gauss_blur_3_rd8 read pattern: { bright_gauss_blur_3_update_0[d0, d1] -> bright_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 28] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 27] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_laplace_diff_2_rd0_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_2_rd0 read pattern: { bright_laplace_diff_2_update_0[d0, d1] -> bright_gauss_ds_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Read schedule : { bright_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 46] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 27] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_diff_2_rd0.peek(/* one reader or all rams */ (-479 + d0 == 0 && 268 - d1 >= 0) ? (963) : (268 - d1 >= 0 && 478 - d0 >= 0) ? (964) : (-269 + d1 == 0) ? ((961 - d0)) : 0);
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_laplace_us_1_rd0_select(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_us_1_rd0 read pattern: { bright_laplace_us_1_update_0[d0, d1] -> bright_gauss_ds_2[o0, o1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_laplace_us_1_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 44] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Write schedule: { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 27] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0 = bright_gauss_ds_2.bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_to_bright_laplace_us_1_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((480 - floord(2*d0, 4))) : 0);
  return value_bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0;
  return 0;
}

// # of bundles = 4
// bright_gauss_blur_3_update_0_read
//	bright_gauss_blur_3_rd0
//	bright_gauss_blur_3_rd1
//	bright_gauss_blur_3_rd2
//	bright_gauss_blur_3_rd3
//	bright_gauss_blur_3_rd4
//	bright_gauss_blur_3_rd5
//	bright_gauss_blur_3_rd6
//	bright_gauss_blur_3_rd7
//	bright_gauss_blur_3_rd8
inline hw_uint<144> bright_gauss_ds_2_bright_gauss_blur_3_update_0_read_bundle_read(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // bright_gauss_blur_3_rd0
    // bright_gauss_blur_3_rd1
    // bright_gauss_blur_3_rd2
    // bright_gauss_blur_3_rd3
    // bright_gauss_blur_3_rd4
    // bright_gauss_blur_3_rd5
    // bright_gauss_blur_3_rd6
    // bright_gauss_blur_3_rd7
    // bright_gauss_blur_3_rd8

	hw_uint<144> result;
	hw_uint<16> bright_gauss_blur_3_rd0_res = bright_gauss_blur_3_rd0_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 144>(result, bright_gauss_blur_3_rd0_res);
	hw_uint<16> bright_gauss_blur_3_rd1_res = bright_gauss_blur_3_rd1_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<16, 144>(result, bright_gauss_blur_3_rd1_res);
	hw_uint<16> bright_gauss_blur_3_rd2_res = bright_gauss_blur_3_rd2_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<32, 144>(result, bright_gauss_blur_3_rd2_res);
	hw_uint<16> bright_gauss_blur_3_rd3_res = bright_gauss_blur_3_rd3_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<48, 144>(result, bright_gauss_blur_3_rd3_res);
	hw_uint<16> bright_gauss_blur_3_rd4_res = bright_gauss_blur_3_rd4_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<64, 144>(result, bright_gauss_blur_3_rd4_res);
	hw_uint<16> bright_gauss_blur_3_rd5_res = bright_gauss_blur_3_rd5_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<80, 144>(result, bright_gauss_blur_3_rd5_res);
	hw_uint<16> bright_gauss_blur_3_rd6_res = bright_gauss_blur_3_rd6_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<96, 144>(result, bright_gauss_blur_3_rd6_res);
	hw_uint<16> bright_gauss_blur_3_rd7_res = bright_gauss_blur_3_rd7_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<112, 144>(result, bright_gauss_blur_3_rd7_res);
	hw_uint<16> bright_gauss_blur_3_rd8_res = bright_gauss_blur_3_rd8_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<128, 144>(result, bright_gauss_blur_3_rd8_res);
	return result;
}

// bright_gauss_ds_2_update_0_write
//	bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0
inline void bright_gauss_ds_2_bright_gauss_ds_2_update_0_write_bundle_write(hw_uint<16>& bright_gauss_ds_2_update_0_write, bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_res = bright_gauss_ds_2_update_0_write.extract<0, 15>();
	bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_write(bright_gauss_ds_2_bright_gauss_ds_2_update_0_write0_res, bright_gauss_ds_2, d0, d1, dynamic_address);
}

// bright_laplace_diff_2_update_0_read
//	bright_laplace_diff_2_rd0
inline hw_uint<16> bright_gauss_ds_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_laplace_diff_2_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_diff_2_rd0_res = bright_laplace_diff_2_rd0_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_laplace_diff_2_rd0_res);
	return result;
}

// bright_laplace_us_1_update_0_read
//	bright_laplace_us_1_rd0
inline hw_uint<16> bright_gauss_ds_2_bright_laplace_us_1_update_0_read_bundle_read(bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_laplace_us_1_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_us_1_rd0_res = bright_laplace_us_1_rd0_select(bright_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_laplace_us_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_cache {
	// RAM Box: {[0, 239], [0, 134]}
	// Capacity: 240
	// # of read delays: 241
	fifo<hw_uint<16>, 240> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(239 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_fused_level_3_rd0_cache {
	// RAM Box: {[0, 239], [0, 134]}
	// Capacity: 1
	// # of read delays: 2
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

struct bright_gauss_ds_3_cache {
  // # of banks: 2
  bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0_cache bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0;
  bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_fused_level_3_rd0_cache bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_fused_level_3_rd0;
};



inline void bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_write(hw_uint<16>& bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0, bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1, int dynamic_address) {
  bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0.push(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0);
  bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_fused_level_3_rd0.push(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0);
}

inline hw_uint<16> bright_laplace_us_2_rd0_select(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_us_2_rd0 read pattern: { bright_laplace_us_2_update_0[d0, d1] -> bright_gauss_ds_3[o0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { bright_laplace_us_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 43] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Write schedule: { bright_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 7 + 4d0, 34] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  auto value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0 = bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_bright_laplace_us_2_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 477 - d0 >= 0) ? ((239 - floord(2*d0, 4))) : 0);
  return value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_3_rd0_select(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> bright_gauss_ds_3[d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Read schedule : { fused_level_3_update_0[d0, d1] -> [14 + 8d1, 7 + 4d0, 49] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Write schedule: { bright_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 7 + 4d0, 34] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  auto value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0 = bright_gauss_ds_3.bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_to_fused_level_3_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0;
  return 0;
}

// # of bundles = 3
// bright_gauss_ds_3_update_0_write
//	bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0
inline void bright_gauss_ds_3_bright_gauss_ds_3_update_0_write_bundle_write(hw_uint<16>& bright_gauss_ds_3_update_0_write, bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_res = bright_gauss_ds_3_update_0_write.extract<0, 15>();
	bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_write(bright_gauss_ds_3_bright_gauss_ds_3_update_0_write0_res, bright_gauss_ds_3, d0, d1, dynamic_address);
}

// bright_laplace_us_2_update_0_read
//	bright_laplace_us_2_rd0
inline hw_uint<16> bright_gauss_ds_3_bright_laplace_us_2_update_0_read_bundle_read(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_laplace_us_2_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_us_2_rd0_res = bright_laplace_us_2_rd0_select(bright_gauss_ds_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_laplace_us_2_rd0_res);
	return result;
}

// fused_level_3_update_0_read
//	fused_level_3_rd0
inline hw_uint<16> bright_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_3_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_3_rd0_res = fused_level_3_rd0_select(bright_gauss_ds_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_to_fused_level_0_rd0_cache {
	// RAM Box: {[0, 1918], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
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

struct bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_to_fused_level_0_rd1_cache {
	// RAM Box: {[1, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
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

struct bright_laplace_diff_0_cache {
  // # of banks: 2
  bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_to_fused_level_0_rd0_cache bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_to_fused_level_0_rd0;
  bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_to_fused_level_0_rd1_cache bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_to_fused_level_0_rd1;
};



inline void bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_write(hw_uint<16>& bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1, int dynamic_address) {
  bright_laplace_diff_0.bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_to_fused_level_0_rd0.push(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0);
}

inline void bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_write(hw_uint<16>& bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1, int dynamic_address) {
  bright_laplace_diff_0.bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_to_fused_level_0_rd1.push(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1);
}

inline hw_uint<16> fused_level_0_rd0_select(bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> bright_laplace_diff_0[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 52] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { bright_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0 = bright_laplace_diff_0.bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_to_fused_level_0_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_0_rd1_select(bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd1 read pattern: { fused_level_0_update_0[d0, d1] -> bright_laplace_diff_0[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 52] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { bright_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1 = bright_laplace_diff_0.bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_to_fused_level_0_rd1.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1;
  return 0;
}

// # of bundles = 2
// bright_laplace_diff_0_update_0_write
//	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0
//	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1
inline void bright_laplace_diff_0_bright_laplace_diff_0_update_0_write_bundle_write(hw_uint<32>& bright_laplace_diff_0_update_0_write, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_res = bright_laplace_diff_0_update_0_write.extract<0, 15>();
	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_write(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write0_res, bright_laplace_diff_0, d0, d1, dynamic_address);
	hw_uint<16> bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_res = bright_laplace_diff_0_update_0_write.extract<16, 31>();
	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_write(bright_laplace_diff_0_bright_laplace_diff_0_update_0_write1_res, bright_laplace_diff_0, d0, d1, dynamic_address);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
//	fused_level_0_rd1
inline hw_uint<32> bright_laplace_diff_0_fused_level_0_update_0_read_bundle_read(bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // fused_level_0_rd0
    // fused_level_0_rd1

	hw_uint<32> result;
	hw_uint<16> fused_level_0_rd0_res = fused_level_0_rd0_select(bright_laplace_diff_0, d0, d1, dynamic_address);
	set_at<0, 32>(result, fused_level_0_rd0_res);
	hw_uint<16> fused_level_0_rd1_res = fused_level_0_rd1_select(bright_laplace_diff_0, d0, d1, dynamic_address);
	set_at<16, 32>(result, fused_level_0_rd1_res);
	return result;
}

#include "hw_classes.h"

struct bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_to_fused_level_1_rd0_cache {
	// RAM Box: {[0, 959], [0, 539]}
	// Capacity: 1
	// # of read delays: 2
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

struct bright_laplace_diff_1_cache {
  // # of banks: 1
  bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_to_fused_level_1_rd0_cache bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_to_fused_level_1_rd0;
};



inline void bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_write(hw_uint<16>& bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0, bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1, int dynamic_address) {
  bright_laplace_diff_1.bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_to_fused_level_1_rd0.push(bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0);
}

inline hw_uint<16> fused_level_1_rd0_select(bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> bright_laplace_diff_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Read schedule : { fused_level_1_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 51] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Write schedule: { bright_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 47] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  auto value_bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0 = bright_laplace_diff_1.bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_to_fused_level_1_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_laplace_diff_1_update_0_write
//	bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0
inline void bright_laplace_diff_1_bright_laplace_diff_1_update_0_write_bundle_write(hw_uint<16>& bright_laplace_diff_1_update_0_write, bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_res = bright_laplace_diff_1_update_0_write.extract<0, 15>();
	bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_write(bright_laplace_diff_1_bright_laplace_diff_1_update_0_write0_res, bright_laplace_diff_1, d0, d1, dynamic_address);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
inline hw_uint<16> bright_laplace_diff_1_fused_level_1_update_0_read_bundle_read(bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_1_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_1_rd0_res = fused_level_1_rd0_select(bright_laplace_diff_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_to_fused_level_2_rd0_cache {
	// RAM Box: {[0, 479], [0, 269]}
	// Capacity: 1
	// # of read delays: 2
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

struct bright_laplace_diff_2_cache {
  // # of banks: 1
  bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_to_fused_level_2_rd0_cache bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_to_fused_level_2_rd0;
};



inline void bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_write(hw_uint<16>& bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0, bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1, int dynamic_address) {
  bright_laplace_diff_2.bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_to_fused_level_2_rd0.push(bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0);
}

inline hw_uint<16> fused_level_2_rd0_select(bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> bright_laplace_diff_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Read schedule : { fused_level_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 50] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Write schedule: { bright_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 46] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  auto value_bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0 = bright_laplace_diff_2.bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_to_fused_level_2_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_laplace_diff_2_update_0_write
//	bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0
inline void bright_laplace_diff_2_bright_laplace_diff_2_update_0_write_bundle_write(hw_uint<16>& bright_laplace_diff_2_update_0_write, bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_res = bright_laplace_diff_2_update_0_write.extract<0, 15>();
	bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_write(bright_laplace_diff_2_bright_laplace_diff_2_update_0_write0_res, bright_laplace_diff_2, d0, d1, dynamic_address);
}

// fused_level_2_update_0_read
//	fused_level_2_rd0
inline hw_uint<16> bright_laplace_diff_2_fused_level_2_update_0_read_bundle_read(bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_2_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_2_rd0_res = fused_level_2_rd0_select(bright_laplace_diff_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_laplace_us_0_bright_laplace_us_0_update_0_write0_to_bright_laplace_diff_0_rd0_cache {
	// RAM Box: {[0, 1918], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
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

struct bright_laplace_us_0_bright_laplace_us_0_update_0_write1_to_bright_laplace_diff_0_rd1_cache {
	// RAM Box: {[1, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
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

struct bright_laplace_us_0_cache {
  // # of banks: 2
  bright_laplace_us_0_bright_laplace_us_0_update_0_write0_to_bright_laplace_diff_0_rd0_cache bright_laplace_us_0_bright_laplace_us_0_update_0_write0_to_bright_laplace_diff_0_rd0;
  bright_laplace_us_0_bright_laplace_us_0_update_0_write1_to_bright_laplace_diff_0_rd1_cache bright_laplace_us_0_bright_laplace_us_0_update_0_write1_to_bright_laplace_diff_0_rd1;
};



inline void bright_laplace_us_0_bright_laplace_us_0_update_0_write0_write(hw_uint<16>& bright_laplace_us_0_bright_laplace_us_0_update_0_write0, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1, int dynamic_address) {
  bright_laplace_us_0.bright_laplace_us_0_bright_laplace_us_0_update_0_write0_to_bright_laplace_diff_0_rd0.push(bright_laplace_us_0_bright_laplace_us_0_update_0_write0);
}

inline void bright_laplace_us_0_bright_laplace_us_0_update_0_write1_write(hw_uint<16>& bright_laplace_us_0_bright_laplace_us_0_update_0_write1, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1, int dynamic_address) {
  bright_laplace_us_0.bright_laplace_us_0_bright_laplace_us_0_update_0_write1_to_bright_laplace_diff_0_rd1.push(bright_laplace_us_0_bright_laplace_us_0_update_0_write1);
}

inline hw_uint<16> bright_laplace_diff_0_rd0_select(bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_0_rd0 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright_laplace_us_0[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { bright_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { bright_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 45] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_bright_laplace_us_0_bright_laplace_us_0_update_0_write0 = bright_laplace_us_0.bright_laplace_us_0_bright_laplace_us_0_update_0_write0_to_bright_laplace_diff_0_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_us_0_bright_laplace_us_0_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_laplace_diff_0_rd1_select(bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_0_rd1 read pattern: { bright_laplace_diff_0_update_0[d0, d1] -> bright_laplace_us_0[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { bright_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { bright_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 45] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_bright_laplace_us_0_bright_laplace_us_0_update_0_write1 = bright_laplace_us_0.bright_laplace_us_0_bright_laplace_us_0_update_0_write1_to_bright_laplace_diff_0_rd1.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_us_0_bright_laplace_us_0_update_0_write1;
  return 0;
}

// # of bundles = 2
// bright_laplace_diff_0_update_0_read
//	bright_laplace_diff_0_rd0
//	bright_laplace_diff_0_rd1
inline hw_uint<32> bright_laplace_us_0_bright_laplace_diff_0_update_0_read_bundle_read(bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // bright_laplace_diff_0_rd0
    // bright_laplace_diff_0_rd1

	hw_uint<32> result;
	hw_uint<16> bright_laplace_diff_0_rd0_res = bright_laplace_diff_0_rd0_select(bright_laplace_us_0, d0, d1, dynamic_address);
	set_at<0, 32>(result, bright_laplace_diff_0_rd0_res);
	hw_uint<16> bright_laplace_diff_0_rd1_res = bright_laplace_diff_0_rd1_select(bright_laplace_us_0, d0, d1, dynamic_address);
	set_at<16, 32>(result, bright_laplace_diff_0_rd1_res);
	return result;
}

// bright_laplace_us_0_update_0_write
//	bright_laplace_us_0_bright_laplace_us_0_update_0_write0
//	bright_laplace_us_0_bright_laplace_us_0_update_0_write1
inline void bright_laplace_us_0_bright_laplace_us_0_update_0_write_bundle_write(hw_uint<32>& bright_laplace_us_0_update_0_write, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_laplace_us_0_bright_laplace_us_0_update_0_write0_res = bright_laplace_us_0_update_0_write.extract<0, 15>();
	bright_laplace_us_0_bright_laplace_us_0_update_0_write0_write(bright_laplace_us_0_bright_laplace_us_0_update_0_write0_res, bright_laplace_us_0, d0, d1, dynamic_address);
	hw_uint<16> bright_laplace_us_0_bright_laplace_us_0_update_0_write1_res = bright_laplace_us_0_update_0_write.extract<16, 31>();
	bright_laplace_us_0_bright_laplace_us_0_update_0_write1_write(bright_laplace_us_0_bright_laplace_us_0_update_0_write1_res, bright_laplace_us_0, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct bright_laplace_us_1_bright_laplace_us_1_update_0_write0_to_bright_laplace_diff_1_rd0_cache {
	// RAM Box: {[0, 959], [0, 539]}
	// Capacity: 1
	// # of read delays: 2
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

struct bright_laplace_us_1_cache {
  // # of banks: 1
  bright_laplace_us_1_bright_laplace_us_1_update_0_write0_to_bright_laplace_diff_1_rd0_cache bright_laplace_us_1_bright_laplace_us_1_update_0_write0_to_bright_laplace_diff_1_rd0;
};



inline void bright_laplace_us_1_bright_laplace_us_1_update_0_write0_write(hw_uint<16>& bright_laplace_us_1_bright_laplace_us_1_update_0_write0, bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1, int dynamic_address) {
  bright_laplace_us_1.bright_laplace_us_1_bright_laplace_us_1_update_0_write0_to_bright_laplace_diff_1_rd0.push(bright_laplace_us_1_bright_laplace_us_1_update_0_write0);
}

inline hw_uint<16> bright_laplace_diff_1_rd0_select(bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_1_rd0 read pattern: { bright_laplace_diff_1_update_0[d0, d1] -> bright_laplace_us_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Read schedule : { bright_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 47] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Write schedule: { bright_laplace_us_1_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 44] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  auto value_bright_laplace_us_1_bright_laplace_us_1_update_0_write0 = bright_laplace_us_1.bright_laplace_us_1_bright_laplace_us_1_update_0_write0_to_bright_laplace_diff_1_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_us_1_bright_laplace_us_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_laplace_diff_1_update_0_read
//	bright_laplace_diff_1_rd0
inline hw_uint<16> bright_laplace_us_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_laplace_diff_1_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_diff_1_rd0_res = bright_laplace_diff_1_rd0_select(bright_laplace_us_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_laplace_diff_1_rd0_res);
	return result;
}

// bright_laplace_us_1_update_0_write
//	bright_laplace_us_1_bright_laplace_us_1_update_0_write0
inline void bright_laplace_us_1_bright_laplace_us_1_update_0_write_bundle_write(hw_uint<16>& bright_laplace_us_1_update_0_write, bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_laplace_us_1_bright_laplace_us_1_update_0_write0_res = bright_laplace_us_1_update_0_write.extract<0, 15>();
	bright_laplace_us_1_bright_laplace_us_1_update_0_write0_write(bright_laplace_us_1_bright_laplace_us_1_update_0_write0_res, bright_laplace_us_1, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct bright_laplace_us_2_bright_laplace_us_2_update_0_write0_to_bright_laplace_diff_2_rd0_cache {
	// RAM Box: {[0, 479], [0, 269]}
	// Capacity: 1
	// # of read delays: 2
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

struct bright_laplace_us_2_cache {
  // # of banks: 1
  bright_laplace_us_2_bright_laplace_us_2_update_0_write0_to_bright_laplace_diff_2_rd0_cache bright_laplace_us_2_bright_laplace_us_2_update_0_write0_to_bright_laplace_diff_2_rd0;
};



inline void bright_laplace_us_2_bright_laplace_us_2_update_0_write0_write(hw_uint<16>& bright_laplace_us_2_bright_laplace_us_2_update_0_write0, bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1, int dynamic_address) {
  bright_laplace_us_2.bright_laplace_us_2_bright_laplace_us_2_update_0_write0_to_bright_laplace_diff_2_rd0.push(bright_laplace_us_2_bright_laplace_us_2_update_0_write0);
}

inline hw_uint<16> bright_laplace_diff_2_rd0_select(bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_laplace_diff_2_rd0 read pattern: { bright_laplace_diff_2_update_0[d0, d1] -> bright_laplace_us_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Read schedule : { bright_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 46] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Write schedule: { bright_laplace_us_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 43] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  auto value_bright_laplace_us_2_bright_laplace_us_2_update_0_write0 = bright_laplace_us_2.bright_laplace_us_2_bright_laplace_us_2_update_0_write0_to_bright_laplace_diff_2_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_laplace_us_2_bright_laplace_us_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_laplace_diff_2_update_0_read
//	bright_laplace_diff_2_rd0
inline hw_uint<16> bright_laplace_us_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_laplace_diff_2_rd0

	hw_uint<16> result;
	hw_uint<16> bright_laplace_diff_2_rd0_res = bright_laplace_diff_2_rd0_select(bright_laplace_us_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_laplace_diff_2_rd0_res);
	return result;
}

// bright_laplace_us_2_update_0_write
//	bright_laplace_us_2_bright_laplace_us_2_update_0_write0
inline void bright_laplace_us_2_bright_laplace_us_2_update_0_write_bundle_write(hw_uint<16>& bright_laplace_us_2_update_0_write, bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_laplace_us_2_bright_laplace_us_2_update_0_write0_res = bright_laplace_us_2_update_0_write.extract<0, 15>();
	bright_laplace_us_2_bright_laplace_us_2_update_0_write0_write(bright_laplace_us_2_bright_laplace_us_2_update_0_write0_res, bright_laplace_us_2, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct bright_weights_bright_weights_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 1926], [0, 1086]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct bright_weights_bright_weights_update_0_write1_merged_banks_2_cache {
	// RAM Box: {[1, 1927], [0, 1086]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct bright_weights_cache {
  // # of banks: 2
  bright_weights_bright_weights_update_0_write0_merged_banks_2_cache bright_weights_bright_weights_update_0_write0_merged_banks_2;
  bright_weights_bright_weights_update_0_write1_merged_banks_2_cache bright_weights_bright_weights_update_0_write1_merged_banks_2;
};



inline void bright_weights_bright_weights_update_0_write0_write(hw_uint<16>& bright_weights_bright_weights_update_0_write0, bright_weights_cache& bright_weights, int d0, int d1, int dynamic_address) {
  bright_weights.bright_weights_bright_weights_update_0_write0_merged_banks_2.push(bright_weights_bright_weights_update_0_write0);
}

inline void bright_weights_bright_weights_update_0_write1_write(hw_uint<16>& bright_weights_bright_weights_update_0_write1, bright_weights_cache& bright_weights, int d0, int d1, int dynamic_address) {
  bright_weights.bright_weights_bright_weights_update_0_write1_merged_banks_2.push(bright_weights_bright_weights_update_0_write1);
}

inline hw_uint<16> bright_weights_normed_rd0_select(bright_weights_cache& bright_weights, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_rd0 read pattern: { bright_weights_normed_update_0[d0, d1] -> bright_weights[2d0, d1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Read schedule : { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 13] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Write schedule: { bright_weights_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_weights_bright_weights_update_0_write0 = bright_weights.bright_weights_bright_weights_update_0_write0_merged_banks_2.peek_0();
  return value_bright_weights_bright_weights_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_rd1_select(bright_weights_cache& bright_weights, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_rd1 read pattern: { bright_weights_normed_update_0[d0, d1] -> bright_weights[1 + 2d0, d1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Read schedule : { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 13] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Write schedule: { bright_weights_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_weights_bright_weights_update_0_write1 = bright_weights.bright_weights_bright_weights_update_0_write1_merged_banks_2.peek_0();
  return value_bright_weights_bright_weights_update_0_write1;
  return 0;
}

inline hw_uint<16> weight_sums_rd0_select(bright_weights_cache& bright_weights, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // weight_sums_rd0 read pattern: { weight_sums_update_0[d0, d1] -> bright_weights[2d0, d1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Read schedule : { weight_sums_update_0[d0, d1] -> [d1, d0, 10] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Write schedule: { bright_weights_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_weights_bright_weights_update_0_write0 = bright_weights.bright_weights_bright_weights_update_0_write0_merged_banks_2.peek_0();
  return value_bright_weights_bright_weights_update_0_write0;
  return 0;
}

inline hw_uint<16> weight_sums_rd1_select(bright_weights_cache& bright_weights, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // weight_sums_rd1 read pattern: { weight_sums_update_0[d0, d1] -> bright_weights[1 + 2d0, d1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Read schedule : { weight_sums_update_0[d0, d1] -> [d1, d0, 10] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Write schedule: { bright_weights_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_weights_bright_weights_update_0_write1 = bright_weights.bright_weights_bright_weights_update_0_write1_merged_banks_2.peek_0();
  return value_bright_weights_bright_weights_update_0_write1;
  return 0;
}

// # of bundles = 3
// bright_weights_normed_update_0_read
//	bright_weights_normed_rd0
//	bright_weights_normed_rd1
inline hw_uint<32> bright_weights_bright_weights_normed_update_0_read_bundle_read(bright_weights_cache& bright_weights, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // bright_weights_normed_rd0
    // bright_weights_normed_rd1

	hw_uint<32> result;
	hw_uint<16> bright_weights_normed_rd0_res = bright_weights_normed_rd0_select(bright_weights, d0, d1, dynamic_address);
	set_at<0, 32>(result, bright_weights_normed_rd0_res);
	hw_uint<16> bright_weights_normed_rd1_res = bright_weights_normed_rd1_select(bright_weights, d0, d1, dynamic_address);
	set_at<16, 32>(result, bright_weights_normed_rd1_res);
	return result;
}

// bright_weights_update_0_write
//	bright_weights_bright_weights_update_0_write0
//	bright_weights_bright_weights_update_0_write1
inline void bright_weights_bright_weights_update_0_write_bundle_write(hw_uint<32>& bright_weights_update_0_write, bright_weights_cache& bright_weights, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_weights_bright_weights_update_0_write0_res = bright_weights_update_0_write.extract<0, 15>();
	bright_weights_bright_weights_update_0_write0_write(bright_weights_bright_weights_update_0_write0_res, bright_weights, d0, d1, dynamic_address);
	hw_uint<16> bright_weights_bright_weights_update_0_write1_res = bright_weights_update_0_write.extract<16, 31>();
	bright_weights_bright_weights_update_0_write1_write(bright_weights_bright_weights_update_0_write1_res, bright_weights, d0, d1, dynamic_address);
}

// weight_sums_update_0_read
//	weight_sums_rd0
//	weight_sums_rd1
inline hw_uint<32> bright_weights_weight_sums_update_0_read_bundle_read(bright_weights_cache& bright_weights, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // weight_sums_rd0
    // weight_sums_rd1

	hw_uint<32> result;
	hw_uint<16> weight_sums_rd0_res = weight_sums_rd0_select(bright_weights, d0, d1, dynamic_address);
	set_at<0, 32>(result, weight_sums_rd0_res);
	hw_uint<16> weight_sums_rd1_res = weight_sums_rd1_select(bright_weights, d0, d1, dynamic_address);
	set_at<16, 32>(result, weight_sums_rd1_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10_cache {
	// RAM Box: {[0, 1926], [0, 1086]}
	// Capacity: 1930
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 962> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 962> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_963() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_964() {
		return f4;
	}

	inline hw_uint<16> peek_965() {
		return f6;
	}

	inline hw_uint<16> peek_1927() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1928() {
		return f8;
	}

	inline hw_uint<16> peek_1929() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 962
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 962 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 962
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 962 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10_cache {
	// RAM Box: {[1, 1927], [0, 1086]}
	// Capacity: 1930
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 962> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 962> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_963() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_964() {
		return f4;
	}

	inline hw_uint<16> peek_965() {
		return f6;
	}

	inline hw_uint<16> peek_1927() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1928() {
		return f8;
	}

	inline hw_uint<16> peek_1929() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 962
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 962 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 962
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 962 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct bright_weights_normed_cache {
  // # of banks: 2
  bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10_cache bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10;
  bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10_cache bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10;
};



inline void bright_weights_normed_bright_weights_normed_update_0_write0_write(hw_uint<16>& bright_weights_normed_bright_weights_normed_update_0_write0, bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.push(bright_weights_normed_bright_weights_normed_update_0_write0);
}

inline void bright_weights_normed_bright_weights_normed_update_0_write1_write(hw_uint<16>& bright_weights_normed_bright_weights_normed_update_0_write1, bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
  bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10.push(bright_weights_normed_bright_weights_normed_update_0_write1);
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd0_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd0 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2d0, d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 18] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 13] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_1929();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd1_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd1 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2d0, 1 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 18] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 13] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_965();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd10_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd10 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + 2d0, 1 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 18] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 13] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10.peek_965();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd11_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd11 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + 2d0, 2 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 18] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 13] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10.peek_1();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd12_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd12 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + 2d0, d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 18] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 13] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_1928();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd13_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd13 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + 2d0, 1 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 18] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 13] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_964();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd14_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd14 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + 2d0, 2 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 18] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 13] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_0();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd15_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd15 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[3 + 2d0, d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 18] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 13] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10.peek_1928();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd16_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd16 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[3 + 2d0, 1 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 18] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 13] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10.peek_964();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd17_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd17 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[3 + 2d0, 2 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 18] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 13] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10.peek_0();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd2_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd2 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2d0, 2 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 18] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 13] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_1();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd3_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd3 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + 2d0, d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 18] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 13] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10.peek_1929();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd4_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd4 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + 2d0, 1 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 18] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 13] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10.peek_965();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd5_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd5 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + 2d0, 2 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 18] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 13] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10.peek_1();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd6_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd6 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + 2d0, d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 18] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 13] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_1928();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd7_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd7 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + 2d0, 1 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 18] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 13] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_964();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd8_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd8 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[2 + 2d0, 2 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 18] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 13] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_0();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_1_rd9_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_1_rd9 read pattern: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> bright_weights_normed[1 + 2d0, d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 18] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 13] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10.peek_1929();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> fused_level_0_rd0_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> bright_weights_normed[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 52] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 13] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write0 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write0_merged_banks_10.peek_1929();
  return value_bright_weights_normed_bright_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_0_rd1_select(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd1 read pattern: { fused_level_0_update_0[d0, d1] -> bright_weights_normed[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 52] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 13] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_bright_weights_normed_bright_weights_normed_update_0_write1 = bright_weights_normed.bright_weights_normed_bright_weights_normed_update_0_write1_merged_banks_10.peek_1929();
  return value_bright_weights_normed_bright_weights_normed_update_0_write1;
  return 0;
}

// # of bundles = 3
// bright_weights_normed_gauss_blur_1_update_0_read
//	bright_weights_normed_gauss_blur_1_rd0
//	bright_weights_normed_gauss_blur_1_rd1
//	bright_weights_normed_gauss_blur_1_rd2
//	bright_weights_normed_gauss_blur_1_rd3
//	bright_weights_normed_gauss_blur_1_rd4
//	bright_weights_normed_gauss_blur_1_rd5
//	bright_weights_normed_gauss_blur_1_rd6
//	bright_weights_normed_gauss_blur_1_rd7
//	bright_weights_normed_gauss_blur_1_rd8
//	bright_weights_normed_gauss_blur_1_rd9
//	bright_weights_normed_gauss_blur_1_rd10
//	bright_weights_normed_gauss_blur_1_rd11
//	bright_weights_normed_gauss_blur_1_rd12
//	bright_weights_normed_gauss_blur_1_rd13
//	bright_weights_normed_gauss_blur_1_rd14
//	bright_weights_normed_gauss_blur_1_rd15
//	bright_weights_normed_gauss_blur_1_rd16
//	bright_weights_normed_gauss_blur_1_rd17
inline hw_uint<288> bright_weights_normed_bright_weights_normed_gauss_blur_1_update_0_read_bundle_read(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 18
    // bright_weights_normed_gauss_blur_1_rd0
    // bright_weights_normed_gauss_blur_1_rd1
    // bright_weights_normed_gauss_blur_1_rd2
    // bright_weights_normed_gauss_blur_1_rd3
    // bright_weights_normed_gauss_blur_1_rd4
    // bright_weights_normed_gauss_blur_1_rd5
    // bright_weights_normed_gauss_blur_1_rd6
    // bright_weights_normed_gauss_blur_1_rd7
    // bright_weights_normed_gauss_blur_1_rd8
    // bright_weights_normed_gauss_blur_1_rd9
    // bright_weights_normed_gauss_blur_1_rd10
    // bright_weights_normed_gauss_blur_1_rd11
    // bright_weights_normed_gauss_blur_1_rd12
    // bright_weights_normed_gauss_blur_1_rd13
    // bright_weights_normed_gauss_blur_1_rd14
    // bright_weights_normed_gauss_blur_1_rd15
    // bright_weights_normed_gauss_blur_1_rd16
    // bright_weights_normed_gauss_blur_1_rd17

	hw_uint<288> result;
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd0_res = bright_weights_normed_gauss_blur_1_rd0_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<0, 288>(result, bright_weights_normed_gauss_blur_1_rd0_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd1_res = bright_weights_normed_gauss_blur_1_rd1_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<16, 288>(result, bright_weights_normed_gauss_blur_1_rd1_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd2_res = bright_weights_normed_gauss_blur_1_rd2_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<32, 288>(result, bright_weights_normed_gauss_blur_1_rd2_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd3_res = bright_weights_normed_gauss_blur_1_rd3_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<48, 288>(result, bright_weights_normed_gauss_blur_1_rd3_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd4_res = bright_weights_normed_gauss_blur_1_rd4_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<64, 288>(result, bright_weights_normed_gauss_blur_1_rd4_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd5_res = bright_weights_normed_gauss_blur_1_rd5_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<80, 288>(result, bright_weights_normed_gauss_blur_1_rd5_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd6_res = bright_weights_normed_gauss_blur_1_rd6_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<96, 288>(result, bright_weights_normed_gauss_blur_1_rd6_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd7_res = bright_weights_normed_gauss_blur_1_rd7_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<112, 288>(result, bright_weights_normed_gauss_blur_1_rd7_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd8_res = bright_weights_normed_gauss_blur_1_rd8_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<128, 288>(result, bright_weights_normed_gauss_blur_1_rd8_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd9_res = bright_weights_normed_gauss_blur_1_rd9_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<144, 288>(result, bright_weights_normed_gauss_blur_1_rd9_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd10_res = bright_weights_normed_gauss_blur_1_rd10_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<160, 288>(result, bright_weights_normed_gauss_blur_1_rd10_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd11_res = bright_weights_normed_gauss_blur_1_rd11_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<176, 288>(result, bright_weights_normed_gauss_blur_1_rd11_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd12_res = bright_weights_normed_gauss_blur_1_rd12_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<192, 288>(result, bright_weights_normed_gauss_blur_1_rd12_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd13_res = bright_weights_normed_gauss_blur_1_rd13_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<208, 288>(result, bright_weights_normed_gauss_blur_1_rd13_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd14_res = bright_weights_normed_gauss_blur_1_rd14_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<224, 288>(result, bright_weights_normed_gauss_blur_1_rd14_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd15_res = bright_weights_normed_gauss_blur_1_rd15_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<240, 288>(result, bright_weights_normed_gauss_blur_1_rd15_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd16_res = bright_weights_normed_gauss_blur_1_rd16_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<256, 288>(result, bright_weights_normed_gauss_blur_1_rd16_res);
	hw_uint<16> bright_weights_normed_gauss_blur_1_rd17_res = bright_weights_normed_gauss_blur_1_rd17_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<272, 288>(result, bright_weights_normed_gauss_blur_1_rd17_res);
	return result;
}

// bright_weights_normed_update_0_write
//	bright_weights_normed_bright_weights_normed_update_0_write0
//	bright_weights_normed_bright_weights_normed_update_0_write1
inline void bright_weights_normed_bright_weights_normed_update_0_write_bundle_write(hw_uint<32>& bright_weights_normed_update_0_write, bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_weights_normed_bright_weights_normed_update_0_write0_res = bright_weights_normed_update_0_write.extract<0, 15>();
	bright_weights_normed_bright_weights_normed_update_0_write0_write(bright_weights_normed_bright_weights_normed_update_0_write0_res, bright_weights_normed, d0, d1, dynamic_address);
	hw_uint<16> bright_weights_normed_bright_weights_normed_update_0_write1_res = bright_weights_normed_update_0_write.extract<16, 31>();
	bright_weights_normed_bright_weights_normed_update_0_write1_write(bright_weights_normed_bright_weights_normed_update_0_write1_res, bright_weights_normed, d0, d1, dynamic_address);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
//	fused_level_0_rd1
inline hw_uint<32> bright_weights_normed_fused_level_0_update_0_read_bundle_read(bright_weights_normed_cache& bright_weights_normed, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // fused_level_0_rd0
    // fused_level_0_rd1

	hw_uint<32> result;
	hw_uint<16> fused_level_0_rd0_res = fused_level_0_rd0_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<0, 32>(result, fused_level_0_rd0_res);
	hw_uint<16> fused_level_0_rd1_res = fused_level_0_rd1_select(bright_weights_normed, d0, d1, dynamic_address);
	set_at<16, 32>(result, fused_level_0_rd1_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_to_bright_weights_normed_gauss_ds_1_rd0_cache {
	// RAM Box: {[0, 1924], [0, 1084]}
	// Capacity: 1
	// # of read delays: 2
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

struct bright_weights_normed_gauss_blur_1_cache {
  // # of banks: 1
  bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_to_bright_weights_normed_gauss_ds_1_rd0_cache bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_to_bright_weights_normed_gauss_ds_1_rd0;
};



inline void bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
  bright_weights_normed_gauss_blur_1.bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_to_bright_weights_normed_gauss_ds_1_rd0.push(bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0);
}

inline void bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write1_write(hw_uint<16>& bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write1, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline hw_uint<16> bright_weights_normed_gauss_ds_1_rd0_select(bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_ds_1_rd0 read pattern: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> bright_weights_normed_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  // Read schedule : { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 25] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  // Write schedule: { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 18] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  auto value_bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0 = bright_weights_normed_gauss_blur_1.bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_to_bright_weights_normed_gauss_ds_1_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_weights_normed_gauss_blur_1_update_0_write
//	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0
//	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write1
inline void bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write_bundle_write(hw_uint<32>& bright_weights_normed_gauss_blur_1_update_0_write, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_res = bright_weights_normed_gauss_blur_1_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_write(bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write0_res, bright_weights_normed_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write1_res = bright_weights_normed_gauss_blur_1_update_0_write.extract<16, 31>();
	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write1_write(bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write1_res, bright_weights_normed_gauss_blur_1, d0, d1, dynamic_address);
}

// bright_weights_normed_gauss_ds_1_update_0_read
//	bright_weights_normed_gauss_ds_1_rd0
inline hw_uint<16> bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_ds_1_update_0_read_bundle_read(bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_weights_normed_gauss_ds_1_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_normed_gauss_ds_1_rd0_res = bright_weights_normed_gauss_ds_1_rd0_select(bright_weights_normed_gauss_blur_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_weights_normed_gauss_ds_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_to_bright_weights_normed_gauss_ds_2_rd0_cache {
	// RAM Box: {[0, 960], [0, 540]}
	// Capacity: 1
	// # of read delays: 2
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

struct bright_weights_normed_gauss_blur_2_cache {
  // # of banks: 1
  bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_to_bright_weights_normed_gauss_ds_2_rd0_cache bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_to_bright_weights_normed_gauss_ds_2_rd0;
};



inline void bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0, bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1, int dynamic_address) {
  bright_weights_normed_gauss_blur_2.bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_to_bright_weights_normed_gauss_ds_2_rd0.push(bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_gauss_ds_2_rd0_select(bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_ds_2_rd0 read pattern: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> bright_weights_normed_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  // Read schedule : { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 32] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  // Write schedule: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 26] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0 = bright_weights_normed_gauss_blur_2.bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_to_bright_weights_normed_gauss_ds_2_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_weights_normed_gauss_blur_2_update_0_write
//	bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0
inline void bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_gauss_blur_2_update_0_write, bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_res = bright_weights_normed_gauss_blur_2_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_write(bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write0_res, bright_weights_normed_gauss_blur_2, d0, d1, dynamic_address);
}

// bright_weights_normed_gauss_ds_2_update_0_read
//	bright_weights_normed_gauss_ds_2_rd0
inline hw_uint<16> bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_ds_2_update_0_read_bundle_read(bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_weights_normed_gauss_ds_2_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_normed_gauss_ds_2_rd0_res = bright_weights_normed_gauss_ds_2_rd0_select(bright_weights_normed_gauss_blur_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_weights_normed_gauss_ds_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_to_bright_weights_normed_gauss_ds_3_rd0_cache {
	// RAM Box: {[0, 478], [0, 268]}
	// Capacity: 1
	// # of read delays: 2
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

struct bright_weights_normed_gauss_blur_3_cache {
  // # of banks: 1
  bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_to_bright_weights_normed_gauss_ds_3_rd0_cache bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_to_bright_weights_normed_gauss_ds_3_rd0;
};



inline void bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0, bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1, int dynamic_address) {
  bright_weights_normed_gauss_blur_3.bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_to_bright_weights_normed_gauss_ds_3_rd0.push(bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_gauss_ds_3_rd0_select(bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_ds_3_rd0 read pattern: { bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> bright_weights_normed_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Read schedule : { bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 7 + 4d0, 42] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Write schedule: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 33] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0 = bright_weights_normed_gauss_blur_3.bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_to_bright_weights_normed_gauss_ds_3_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_weights_normed_gauss_blur_3_update_0_write
//	bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0
inline void bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_gauss_blur_3_update_0_write, bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_res = bright_weights_normed_gauss_blur_3_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_write(bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write0_res, bright_weights_normed_gauss_blur_3, d0, d1, dynamic_address);
}

// bright_weights_normed_gauss_ds_3_update_0_read
//	bright_weights_normed_gauss_ds_3_rd0
inline hw_uint<16> bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_ds_3_update_0_read_bundle_read(bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // bright_weights_normed_gauss_ds_3_rd0

	hw_uint<16> result;
	hw_uint<16> bright_weights_normed_gauss_ds_3_rd0_res = bright_weights_normed_gauss_ds_3_rd0_select(bright_weights_normed_gauss_blur_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, bright_weights_normed_gauss_ds_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10_cache {
	// RAM Box: {[0, 962], [0, 542]}
	// Capacity: 1929
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 960> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 960> f11;
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

	inline hw_uint<16> peek_962() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_963() {
		return f6;
	}

	inline hw_uint<16> peek_964() {
		return f8;
	}

	inline hw_uint<16> peek_965() {
		return f10;
	}

	inline hw_uint<16> peek_1925() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_1926() {
		return f12;
	}

	inline hw_uint<16> peek_1927() {
		return f14;
	}

	inline hw_uint<16> peek_1928() {
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
    // cap: 1 reading from capacity: 960
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
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
    // cap: 1 reading from capacity: 960
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
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

struct bright_weights_normed_gauss_ds_1_cache {
  // # of banks: 1
  bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10_cache bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10;
};



inline void bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
  bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.push(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd0_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd0 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 26] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 25] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_1928();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd1_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd1 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 26] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 25] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_965();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd2_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd2 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 26] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 25] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_2();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd3_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd3 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 26] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 25] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_1927();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd4_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd4 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 26] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 25] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_964();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd5_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd5 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 26] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 25] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_1();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd6_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd6 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 26] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 25] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_1926();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd7_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd7 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 26] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 25] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_963();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_2_rd8_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_2_rd8 read pattern: { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 26] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 25] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_0();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_1_rd0_select(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> bright_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Read schedule : { fused_level_1_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 51] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Write schedule: { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 25] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0 = bright_weights_normed_gauss_ds_1.bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_1928();
  return value_bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

// # of bundles = 3
// bright_weights_normed_gauss_blur_2_update_0_read
//	bright_weights_normed_gauss_blur_2_rd0
//	bright_weights_normed_gauss_blur_2_rd1
//	bright_weights_normed_gauss_blur_2_rd2
//	bright_weights_normed_gauss_blur_2_rd3
//	bright_weights_normed_gauss_blur_2_rd4
//	bright_weights_normed_gauss_blur_2_rd5
//	bright_weights_normed_gauss_blur_2_rd6
//	bright_weights_normed_gauss_blur_2_rd7
//	bright_weights_normed_gauss_blur_2_rd8
inline hw_uint<144> bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_blur_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // bright_weights_normed_gauss_blur_2_rd0
    // bright_weights_normed_gauss_blur_2_rd1
    // bright_weights_normed_gauss_blur_2_rd2
    // bright_weights_normed_gauss_blur_2_rd3
    // bright_weights_normed_gauss_blur_2_rd4
    // bright_weights_normed_gauss_blur_2_rd5
    // bright_weights_normed_gauss_blur_2_rd6
    // bright_weights_normed_gauss_blur_2_rd7
    // bright_weights_normed_gauss_blur_2_rd8

	hw_uint<144> result;
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd0_res = bright_weights_normed_gauss_blur_2_rd0_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 144>(result, bright_weights_normed_gauss_blur_2_rd0_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd1_res = bright_weights_normed_gauss_blur_2_rd1_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<16, 144>(result, bright_weights_normed_gauss_blur_2_rd1_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd2_res = bright_weights_normed_gauss_blur_2_rd2_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<32, 144>(result, bright_weights_normed_gauss_blur_2_rd2_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd3_res = bright_weights_normed_gauss_blur_2_rd3_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<48, 144>(result, bright_weights_normed_gauss_blur_2_rd3_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd4_res = bright_weights_normed_gauss_blur_2_rd4_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<64, 144>(result, bright_weights_normed_gauss_blur_2_rd4_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd5_res = bright_weights_normed_gauss_blur_2_rd5_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<80, 144>(result, bright_weights_normed_gauss_blur_2_rd5_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd6_res = bright_weights_normed_gauss_blur_2_rd6_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<96, 144>(result, bright_weights_normed_gauss_blur_2_rd6_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd7_res = bright_weights_normed_gauss_blur_2_rd7_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<112, 144>(result, bright_weights_normed_gauss_blur_2_rd7_res);
	hw_uint<16> bright_weights_normed_gauss_blur_2_rd8_res = bright_weights_normed_gauss_blur_2_rd8_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<128, 144>(result, bright_weights_normed_gauss_blur_2_rd8_res);
	return result;
}

// bright_weights_normed_gauss_ds_1_update_0_write
//	bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0
inline void bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_gauss_ds_1_update_0_write, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_res = bright_weights_normed_gauss_ds_1_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_write(bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write0_res, bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
inline hw_uint<16> bright_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_1_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_1_rd0_res = fused_level_1_rd0_select(bright_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_cache {
	// RAM Box: {[0, 480], [0, 270]}
	// Capacity: 965
	// # of read delays: 484
	fifo<hw_uint<16>, 965> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(964 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 480], [0, 270]}
	// Capacity: 965
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 478> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 478> f11;
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

	inline hw_uint<16> peek_480() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_481() {
		return f6;
	}

	inline hw_uint<16> peek_482() {
		return f8;
	}

	inline hw_uint<16> peek_483() {
		return f10;
	}

	inline hw_uint<16> peek_961() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_962() {
		return f12;
	}

	inline hw_uint<16> peek_963() {
		return f14;
	}

	inline hw_uint<16> peek_964() {
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
    // cap: 1 reading from capacity: 478
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 478 reading from capacity: 1
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
    // cap: 1 reading from capacity: 478
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 478 reading from capacity: 1
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

struct bright_weights_normed_gauss_ds_2_cache {
  // # of banks: 2
  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_cache bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0;
  bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_cache bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9;
};



inline void bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
  bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0.push(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0);
  bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.push(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0);
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd0_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd0 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 33] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 32] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_964();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd1_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd1 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 33] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 32] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_483();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd2_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd2 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 33] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 32] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_2();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd3_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd3 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 33] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 32] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_963();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd4_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd4 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 33] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 32] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_482();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd5_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd5 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 33] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 32] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd6_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd6 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 33] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 32] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_962();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd7_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd7 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 33] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 32] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_481();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_gauss_blur_3_rd8_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_gauss_blur_3_rd8 read pattern: { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 33] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 32] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_2_rd0_select(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> bright_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Read schedule : { fused_level_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 50] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Write schedule: { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 32] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0 = bright_weights_normed_gauss_ds_2.bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0.peek(/* one reader or all rams */ (-479 + d0 == 0 && 268 - d1 >= 0) ? (963) : (268 - d1 >= 0 && 478 - d0 >= 0) ? (964) : (-269 + d1 == 0) ? ((961 - d0)) : 0);
  return value_bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

// # of bundles = 3
// bright_weights_normed_gauss_blur_3_update_0_read
//	bright_weights_normed_gauss_blur_3_rd0
//	bright_weights_normed_gauss_blur_3_rd1
//	bright_weights_normed_gauss_blur_3_rd2
//	bright_weights_normed_gauss_blur_3_rd3
//	bright_weights_normed_gauss_blur_3_rd4
//	bright_weights_normed_gauss_blur_3_rd5
//	bright_weights_normed_gauss_blur_3_rd6
//	bright_weights_normed_gauss_blur_3_rd7
//	bright_weights_normed_gauss_blur_3_rd8
inline hw_uint<144> bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_blur_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // bright_weights_normed_gauss_blur_3_rd0
    // bright_weights_normed_gauss_blur_3_rd1
    // bright_weights_normed_gauss_blur_3_rd2
    // bright_weights_normed_gauss_blur_3_rd3
    // bright_weights_normed_gauss_blur_3_rd4
    // bright_weights_normed_gauss_blur_3_rd5
    // bright_weights_normed_gauss_blur_3_rd6
    // bright_weights_normed_gauss_blur_3_rd7
    // bright_weights_normed_gauss_blur_3_rd8

	hw_uint<144> result;
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd0_res = bright_weights_normed_gauss_blur_3_rd0_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 144>(result, bright_weights_normed_gauss_blur_3_rd0_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd1_res = bright_weights_normed_gauss_blur_3_rd1_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<16, 144>(result, bright_weights_normed_gauss_blur_3_rd1_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd2_res = bright_weights_normed_gauss_blur_3_rd2_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<32, 144>(result, bright_weights_normed_gauss_blur_3_rd2_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd3_res = bright_weights_normed_gauss_blur_3_rd3_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<48, 144>(result, bright_weights_normed_gauss_blur_3_rd3_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd4_res = bright_weights_normed_gauss_blur_3_rd4_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<64, 144>(result, bright_weights_normed_gauss_blur_3_rd4_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd5_res = bright_weights_normed_gauss_blur_3_rd5_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<80, 144>(result, bright_weights_normed_gauss_blur_3_rd5_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd6_res = bright_weights_normed_gauss_blur_3_rd6_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<96, 144>(result, bright_weights_normed_gauss_blur_3_rd6_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd7_res = bright_weights_normed_gauss_blur_3_rd7_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<112, 144>(result, bright_weights_normed_gauss_blur_3_rd7_res);
	hw_uint<16> bright_weights_normed_gauss_blur_3_rd8_res = bright_weights_normed_gauss_blur_3_rd8_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<128, 144>(result, bright_weights_normed_gauss_blur_3_rd8_res);
	return result;
}

// bright_weights_normed_gauss_ds_2_update_0_write
//	bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0
inline void bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_gauss_ds_2_update_0_write, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_res = bright_weights_normed_gauss_ds_2_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_write(bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write0_res, bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
}

// fused_level_2_update_0_read
//	fused_level_2_rd0
inline hw_uint<16> bright_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_2_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_2_rd0_res = fused_level_2_rd0_select(bright_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0_cache {
	// RAM Box: {[0, 239], [0, 134]}
	// Capacity: 1
	// # of read delays: 2
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

struct bright_weights_normed_gauss_ds_3_cache {
  // # of banks: 1
  bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0_cache bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0;
};



inline void bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_write(hw_uint<16>& bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1, int dynamic_address) {
  bright_weights_normed_gauss_ds_3.bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0.push(bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0);
}

inline hw_uint<16> fused_level_3_rd0_select(bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> bright_weights_normed_gauss_ds_3[d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Read schedule : { fused_level_3_update_0[d0, d1] -> [14 + 8d1, 7 + 4d0, 49] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Write schedule: { bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 7 + 4d0, 42] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  auto value_bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0 = bright_weights_normed_gauss_ds_3.bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0.peek(/* one reader or all rams */ 0);
  return value_bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// bright_weights_normed_gauss_ds_3_update_0_write
//	bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0
inline void bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write_bundle_write(hw_uint<16>& bright_weights_normed_gauss_ds_3_update_0_write, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_res = bright_weights_normed_gauss_ds_3_update_0_write.extract<0, 15>();
	bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_write(bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write0_res, bright_weights_normed_gauss_ds_3, d0, d1, dynamic_address);
}

// fused_level_3_update_0_read
//	fused_level_3_rd0
inline hw_uint<16> bright_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_3_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_3_rd0_res = fused_level_3_rd0_select(bright_weights_normed_gauss_ds_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_dark_update_0_write0_merged_banks_11_cache {
	// RAM Box: {[0, 1926], [0, 1086]}
	// Capacity: 1930
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 962> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 962> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_963() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_964() {
		return f4;
	}

	inline hw_uint<16> peek_965() {
		return f6;
	}

	inline hw_uint<16> peek_1927() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1928() {
		return f8;
	}

	inline hw_uint<16> peek_1929() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 962
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 962 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 962
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 962 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct dark_dark_update_0_write1_merged_banks_11_cache {
	// RAM Box: {[1, 1927], [0, 1086]}
	// Capacity: 1930
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 962> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 962> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_963() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_964() {
		return f4;
	}

	inline hw_uint<16> peek_965() {
		return f6;
	}

	inline hw_uint<16> peek_1927() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1928() {
		return f8;
	}

	inline hw_uint<16> peek_1929() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 962
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 962 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 962
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 962 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct dark_cache {
  // # of banks: 2
  dark_dark_update_0_write0_merged_banks_11_cache dark_dark_update_0_write0_merged_banks_11;
  dark_dark_update_0_write1_merged_banks_11_cache dark_dark_update_0_write1_merged_banks_11;
};



inline void dark_dark_update_0_write0_write(hw_uint<16>& dark_dark_update_0_write0, dark_cache& dark, int d0, int d1, int dynamic_address) {
  dark.dark_dark_update_0_write0_merged_banks_11.push(dark_dark_update_0_write0);
}

inline void dark_dark_update_0_write1_write(hw_uint<16>& dark_dark_update_0_write1, dark_cache& dark, int d0, int d1, int dynamic_address) {
  dark.dark_dark_update_0_write1_merged_banks_11.push(dark_dark_update_0_write1);
}

inline hw_uint<16> dark_gauss_blur_1_rd0_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd0 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2d0, d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 12] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_1929();
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd1_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd1 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2d0, 1 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 12] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_965();
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd10_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd10 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + 2d0, 1 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 12] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_11.peek_965();
  return value_dark_dark_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd11_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd11 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + 2d0, 2 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 12] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_11.peek_1();
  return value_dark_dark_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd12_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd12 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + 2d0, d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 12] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_1928();
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd13_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd13 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + 2d0, 1 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 12] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_964();
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd14_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd14 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + 2d0, 2 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 12] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_0();
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd15_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd15 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[3 + 2d0, d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 12] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_11.peek_1928();
  return value_dark_dark_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd16_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd16 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[3 + 2d0, 1 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 12] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_11.peek_964();
  return value_dark_dark_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd17_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd17 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[3 + 2d0, 2 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 12] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_11.peek_0();
  return value_dark_dark_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd2_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd2 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2d0, 2 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 12] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_1();
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd3_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd3 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + 2d0, d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 12] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_11.peek_1929();
  return value_dark_dark_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd4_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd4 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + 2d0, 1 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 12] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_11.peek_965();
  return value_dark_dark_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd5_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd5 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + 2d0, 2 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 12] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_11.peek_1();
  return value_dark_dark_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd6_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd6 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + 2d0, d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 12] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_1928();
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd7_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd7 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + 2d0, 1 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 12] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_964();
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd8_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd8 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[2 + 2d0, 2 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 12] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_0();
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_1_rd9_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_1_rd9 read pattern: { dark_gauss_blur_1_update_0[d0, d1] -> dark[1 + 2d0, d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 12] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_11.peek_1929();
  return value_dark_dark_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_laplace_diff_0_rd0_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_0_rd0 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { dark_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 41] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_1929();
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_laplace_diff_0_rd1_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_0_rd1 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { dark_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 41] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_11.peek_1929();
  return value_dark_dark_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_weights_rd0_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_rd0 read pattern: { dark_weights_update_0[d0, d1] -> dark[2d0, d1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Read schedule : { dark_weights_update_0[d0, d1] -> [d1, d0, 8] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_dark_update_0_write0 = dark.dark_dark_update_0_write0_merged_banks_11.peek_0();
  return value_dark_dark_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_rd1_select(dark_cache& dark, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_rd1 read pattern: { dark_weights_update_0[d0, d1] -> dark[1 + 2d0, d1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Read schedule : { dark_weights_update_0[d0, d1] -> [d1, d0, 8] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Write schedule: { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_dark_update_0_write1 = dark.dark_dark_update_0_write1_merged_banks_11.peek_0();
  return value_dark_dark_update_0_write1;
  return 0;
}

// # of bundles = 4
// dark_gauss_blur_1_update_0_read
//	dark_gauss_blur_1_rd0
//	dark_gauss_blur_1_rd1
//	dark_gauss_blur_1_rd2
//	dark_gauss_blur_1_rd3
//	dark_gauss_blur_1_rd4
//	dark_gauss_blur_1_rd5
//	dark_gauss_blur_1_rd6
//	dark_gauss_blur_1_rd7
//	dark_gauss_blur_1_rd8
//	dark_gauss_blur_1_rd9
//	dark_gauss_blur_1_rd10
//	dark_gauss_blur_1_rd11
//	dark_gauss_blur_1_rd12
//	dark_gauss_blur_1_rd13
//	dark_gauss_blur_1_rd14
//	dark_gauss_blur_1_rd15
//	dark_gauss_blur_1_rd16
//	dark_gauss_blur_1_rd17
inline hw_uint<288> dark_dark_gauss_blur_1_update_0_read_bundle_read(dark_cache& dark, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 18
    // dark_gauss_blur_1_rd0
    // dark_gauss_blur_1_rd1
    // dark_gauss_blur_1_rd2
    // dark_gauss_blur_1_rd3
    // dark_gauss_blur_1_rd4
    // dark_gauss_blur_1_rd5
    // dark_gauss_blur_1_rd6
    // dark_gauss_blur_1_rd7
    // dark_gauss_blur_1_rd8
    // dark_gauss_blur_1_rd9
    // dark_gauss_blur_1_rd10
    // dark_gauss_blur_1_rd11
    // dark_gauss_blur_1_rd12
    // dark_gauss_blur_1_rd13
    // dark_gauss_blur_1_rd14
    // dark_gauss_blur_1_rd15
    // dark_gauss_blur_1_rd16
    // dark_gauss_blur_1_rd17

	hw_uint<288> result;
	hw_uint<16> dark_gauss_blur_1_rd0_res = dark_gauss_blur_1_rd0_select(dark, d0, d1, dynamic_address);
	set_at<0, 288>(result, dark_gauss_blur_1_rd0_res);
	hw_uint<16> dark_gauss_blur_1_rd1_res = dark_gauss_blur_1_rd1_select(dark, d0, d1, dynamic_address);
	set_at<16, 288>(result, dark_gauss_blur_1_rd1_res);
	hw_uint<16> dark_gauss_blur_1_rd2_res = dark_gauss_blur_1_rd2_select(dark, d0, d1, dynamic_address);
	set_at<32, 288>(result, dark_gauss_blur_1_rd2_res);
	hw_uint<16> dark_gauss_blur_1_rd3_res = dark_gauss_blur_1_rd3_select(dark, d0, d1, dynamic_address);
	set_at<48, 288>(result, dark_gauss_blur_1_rd3_res);
	hw_uint<16> dark_gauss_blur_1_rd4_res = dark_gauss_blur_1_rd4_select(dark, d0, d1, dynamic_address);
	set_at<64, 288>(result, dark_gauss_blur_1_rd4_res);
	hw_uint<16> dark_gauss_blur_1_rd5_res = dark_gauss_blur_1_rd5_select(dark, d0, d1, dynamic_address);
	set_at<80, 288>(result, dark_gauss_blur_1_rd5_res);
	hw_uint<16> dark_gauss_blur_1_rd6_res = dark_gauss_blur_1_rd6_select(dark, d0, d1, dynamic_address);
	set_at<96, 288>(result, dark_gauss_blur_1_rd6_res);
	hw_uint<16> dark_gauss_blur_1_rd7_res = dark_gauss_blur_1_rd7_select(dark, d0, d1, dynamic_address);
	set_at<112, 288>(result, dark_gauss_blur_1_rd7_res);
	hw_uint<16> dark_gauss_blur_1_rd8_res = dark_gauss_blur_1_rd8_select(dark, d0, d1, dynamic_address);
	set_at<128, 288>(result, dark_gauss_blur_1_rd8_res);
	hw_uint<16> dark_gauss_blur_1_rd9_res = dark_gauss_blur_1_rd9_select(dark, d0, d1, dynamic_address);
	set_at<144, 288>(result, dark_gauss_blur_1_rd9_res);
	hw_uint<16> dark_gauss_blur_1_rd10_res = dark_gauss_blur_1_rd10_select(dark, d0, d1, dynamic_address);
	set_at<160, 288>(result, dark_gauss_blur_1_rd10_res);
	hw_uint<16> dark_gauss_blur_1_rd11_res = dark_gauss_blur_1_rd11_select(dark, d0, d1, dynamic_address);
	set_at<176, 288>(result, dark_gauss_blur_1_rd11_res);
	hw_uint<16> dark_gauss_blur_1_rd12_res = dark_gauss_blur_1_rd12_select(dark, d0, d1, dynamic_address);
	set_at<192, 288>(result, dark_gauss_blur_1_rd12_res);
	hw_uint<16> dark_gauss_blur_1_rd13_res = dark_gauss_blur_1_rd13_select(dark, d0, d1, dynamic_address);
	set_at<208, 288>(result, dark_gauss_blur_1_rd13_res);
	hw_uint<16> dark_gauss_blur_1_rd14_res = dark_gauss_blur_1_rd14_select(dark, d0, d1, dynamic_address);
	set_at<224, 288>(result, dark_gauss_blur_1_rd14_res);
	hw_uint<16> dark_gauss_blur_1_rd15_res = dark_gauss_blur_1_rd15_select(dark, d0, d1, dynamic_address);
	set_at<240, 288>(result, dark_gauss_blur_1_rd15_res);
	hw_uint<16> dark_gauss_blur_1_rd16_res = dark_gauss_blur_1_rd16_select(dark, d0, d1, dynamic_address);
	set_at<256, 288>(result, dark_gauss_blur_1_rd16_res);
	hw_uint<16> dark_gauss_blur_1_rd17_res = dark_gauss_blur_1_rd17_select(dark, d0, d1, dynamic_address);
	set_at<272, 288>(result, dark_gauss_blur_1_rd17_res);
	return result;
}

// dark_laplace_diff_0_update_0_read
//	dark_laplace_diff_0_rd0
//	dark_laplace_diff_0_rd1
inline hw_uint<32> dark_dark_laplace_diff_0_update_0_read_bundle_read(dark_cache& dark, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // dark_laplace_diff_0_rd0
    // dark_laplace_diff_0_rd1

	hw_uint<32> result;
	hw_uint<16> dark_laplace_diff_0_rd0_res = dark_laplace_diff_0_rd0_select(dark, d0, d1, dynamic_address);
	set_at<0, 32>(result, dark_laplace_diff_0_rd0_res);
	hw_uint<16> dark_laplace_diff_0_rd1_res = dark_laplace_diff_0_rd1_select(dark, d0, d1, dynamic_address);
	set_at<16, 32>(result, dark_laplace_diff_0_rd1_res);
	return result;
}

// dark_update_0_write
//	dark_dark_update_0_write0
//	dark_dark_update_0_write1
inline void dark_dark_update_0_write_bundle_write(hw_uint<32>& dark_update_0_write, dark_cache& dark, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_dark_update_0_write0_res = dark_update_0_write.extract<0, 15>();
	dark_dark_update_0_write0_write(dark_dark_update_0_write0_res, dark, d0, d1, dynamic_address);
	hw_uint<16> dark_dark_update_0_write1_res = dark_update_0_write.extract<16, 31>();
	dark_dark_update_0_write1_write(dark_dark_update_0_write1_res, dark, d0, d1, dynamic_address);
}

// dark_weights_update_0_read
//	dark_weights_rd0
//	dark_weights_rd1
inline hw_uint<32> dark_dark_weights_update_0_read_bundle_read(dark_cache& dark, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // dark_weights_rd0
    // dark_weights_rd1

	hw_uint<32> result;
	hw_uint<16> dark_weights_rd0_res = dark_weights_rd0_select(dark, d0, d1, dynamic_address);
	set_at<0, 32>(result, dark_weights_rd0_res);
	hw_uint<16> dark_weights_rd1_res = dark_weights_rd1_select(dark, d0, d1, dynamic_address);
	set_at<16, 32>(result, dark_weights_rd1_res);
	return result;
}

#include "hw_classes.h"

struct dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_to_dark_gauss_ds_1_rd0_cache {
	// RAM Box: {[0, 1924], [0, 1084]}
	// Capacity: 1
	// # of read delays: 2
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

struct dark_gauss_blur_1_cache {
  // # of banks: 1
  dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_to_dark_gauss_ds_1_rd0_cache dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_to_dark_gauss_ds_1_rd0;
};



inline void dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_write(hw_uint<16>& dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1, int dynamic_address) {
  dark_gauss_blur_1.dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_to_dark_gauss_ds_1_rd0.push(dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0);
}

inline void dark_gauss_blur_1_dark_gauss_blur_1_update_0_write1_write(hw_uint<16>& dark_gauss_blur_1_dark_gauss_blur_1_update_0_write1, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline hw_uint<16> dark_gauss_ds_1_rd0_select(dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_ds_1_rd0 read pattern: { dark_gauss_ds_1_update_0[d0, d1] -> dark_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  // Read schedule : { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 16] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  // Write schedule: { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 12] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  auto value_dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0 = dark_gauss_blur_1.dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_to_dark_gauss_ds_1_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_gauss_blur_1_update_0_write
//	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0
//	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write1
inline void dark_gauss_blur_1_dark_gauss_blur_1_update_0_write_bundle_write(hw_uint<32>& dark_gauss_blur_1_update_0_write, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_res = dark_gauss_blur_1_update_0_write.extract<0, 15>();
	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_write(dark_gauss_blur_1_dark_gauss_blur_1_update_0_write0_res, dark_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> dark_gauss_blur_1_dark_gauss_blur_1_update_0_write1_res = dark_gauss_blur_1_update_0_write.extract<16, 31>();
	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write1_write(dark_gauss_blur_1_dark_gauss_blur_1_update_0_write1_res, dark_gauss_blur_1, d0, d1, dynamic_address);
}

// dark_gauss_ds_1_update_0_read
//	dark_gauss_ds_1_rd0
inline hw_uint<16> dark_gauss_blur_1_dark_gauss_ds_1_update_0_read_bundle_read(dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_gauss_ds_1_rd0

	hw_uint<16> result;
	hw_uint<16> dark_gauss_ds_1_rd0_res = dark_gauss_ds_1_rd0_select(dark_gauss_blur_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_gauss_ds_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_to_dark_gauss_ds_2_rd0_cache {
	// RAM Box: {[0, 960], [0, 540]}
	// Capacity: 1
	// # of read delays: 2
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

struct dark_gauss_blur_2_cache {
  // # of banks: 1
  dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_to_dark_gauss_ds_2_rd0_cache dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_to_dark_gauss_ds_2_rd0;
};



inline void dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_write(hw_uint<16>& dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0, dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1, int dynamic_address) {
  dark_gauss_blur_2.dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_to_dark_gauss_ds_2_rd0.push(dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0);
}

inline hw_uint<16> dark_gauss_ds_2_rd0_select(dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_ds_2_rd0 read pattern: { dark_gauss_ds_2_update_0[d0, d1] -> dark_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  // Read schedule : { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  // Write schedule: { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 17] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0 = dark_gauss_blur_2.dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_to_dark_gauss_ds_2_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_gauss_blur_2_update_0_write
//	dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0
inline void dark_gauss_blur_2_dark_gauss_blur_2_update_0_write_bundle_write(hw_uint<16>& dark_gauss_blur_2_update_0_write, dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_res = dark_gauss_blur_2_update_0_write.extract<0, 15>();
	dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_write(dark_gauss_blur_2_dark_gauss_blur_2_update_0_write0_res, dark_gauss_blur_2, d0, d1, dynamic_address);
}

// dark_gauss_ds_2_update_0_read
//	dark_gauss_ds_2_rd0
inline hw_uint<16> dark_gauss_blur_2_dark_gauss_ds_2_update_0_read_bundle_read(dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_gauss_ds_2_rd0

	hw_uint<16> result;
	hw_uint<16> dark_gauss_ds_2_rd0_res = dark_gauss_ds_2_rd0_select(dark_gauss_blur_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_gauss_ds_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_to_dark_gauss_ds_3_rd0_cache {
	// RAM Box: {[0, 478], [0, 268]}
	// Capacity: 1
	// # of read delays: 2
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

struct dark_gauss_blur_3_cache {
  // # of banks: 1
  dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_to_dark_gauss_ds_3_rd0_cache dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_to_dark_gauss_ds_3_rd0;
};



inline void dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_write(hw_uint<16>& dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0, dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1, int dynamic_address) {
  dark_gauss_blur_3.dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_to_dark_gauss_ds_3_rd0.push(dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0);
}

inline hw_uint<16> dark_gauss_ds_3_rd0_select(dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_ds_3_rd0 read pattern: { dark_gauss_ds_3_update_0[d0, d1] -> dark_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Read schedule : { dark_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 7 + 4d0, 31] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Write schedule: { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 24] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0 = dark_gauss_blur_3.dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_to_dark_gauss_ds_3_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_gauss_blur_3_update_0_write
//	dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0
inline void dark_gauss_blur_3_dark_gauss_blur_3_update_0_write_bundle_write(hw_uint<16>& dark_gauss_blur_3_update_0_write, dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_res = dark_gauss_blur_3_update_0_write.extract<0, 15>();
	dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_write(dark_gauss_blur_3_dark_gauss_blur_3_update_0_write0_res, dark_gauss_blur_3, d0, d1, dynamic_address);
}

// dark_gauss_ds_3_update_0_read
//	dark_gauss_ds_3_rd0
inline hw_uint<16> dark_gauss_blur_3_dark_gauss_ds_3_update_0_read_bundle_read(dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_gauss_ds_3_rd0

	hw_uint<16> result;
	hw_uint<16> dark_gauss_ds_3_rd0_res = dark_gauss_ds_3_rd0_select(dark_gauss_blur_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_gauss_ds_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_cache {
	// RAM Box: {[0, 962], [0, 542]}
	// Capacity: 963
	// # of read delays: 961
	fifo<hw_uint<16>, 963> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(962 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd1_cache {
	// RAM Box: {[0, 962], [0, 542]}
	// Capacity: 963
	// # of read delays: 961
	fifo<hw_uint<16>, 963> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(962 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10_cache {
	// RAM Box: {[0, 962], [0, 542]}
	// Capacity: 1929
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 960> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 960> f11;
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

	inline hw_uint<16> peek_962() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_963() {
		return f6;
	}

	inline hw_uint<16> peek_964() {
		return f8;
	}

	inline hw_uint<16> peek_965() {
		return f10;
	}

	inline hw_uint<16> peek_1925() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_1926() {
		return f12;
	}

	inline hw_uint<16> peek_1927() {
		return f14;
	}

	inline hw_uint<16> peek_1928() {
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
    // cap: 1 reading from capacity: 960
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
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
    // cap: 1 reading from capacity: 960
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
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

struct dark_gauss_ds_1_cache {
  // # of banks: 3
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0;
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd1_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd1;
  dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10_cache dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10;
};



inline void dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_write(hw_uint<16>& dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0, dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd1.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
  dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.push(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0);
}

inline hw_uint<16> dark_gauss_blur_2_rd0_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd0 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 17] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 16] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_1928();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_2_rd1_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd1 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 17] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 16] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_965();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_2_rd2_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd2 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 17] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 16] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_2();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_2_rd3_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd3 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 17] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 16] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_1927();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_2_rd4_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd4 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 17] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 16] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_964();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_2_rd5_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd5 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 17] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 16] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_1();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_2_rd6_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd6 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 17] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 16] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_1926();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_2_rd7_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd7 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 17] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 16] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_963();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_2_rd8_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_2_rd8 read pattern: { dark_gauss_blur_2_update_0[d0, d1] -> dark_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 17] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 16] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_0();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_laplace_diff_1_rd0_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_1_rd0 read pattern: { dark_laplace_diff_1_update_0[d0, d1] -> dark_gauss_ds_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Read schedule : { dark_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 40] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 16] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_merged_banks_10.peek_1928();
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_laplace_us_0_rd0_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_us_0_rd0 read pattern: { dark_laplace_us_0_update_0[d0, d1] -> dark_gauss_ds_1[d0, o1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 38] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 16] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((962 - d0)) : 0);
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_laplace_us_0_rd1_select(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_us_0_rd1 read pattern: { dark_laplace_us_0_update_0[d0, d1] -> dark_gauss_ds_1[d0, o1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 38] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 16] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0 = dark_gauss_ds_1.dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_to_dark_laplace_us_0_rd1.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((962 - d0)) : 0);
  return value_dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0;
  return 0;
}

// # of bundles = 4
// dark_gauss_blur_2_update_0_read
//	dark_gauss_blur_2_rd0
//	dark_gauss_blur_2_rd1
//	dark_gauss_blur_2_rd2
//	dark_gauss_blur_2_rd3
//	dark_gauss_blur_2_rd4
//	dark_gauss_blur_2_rd5
//	dark_gauss_blur_2_rd6
//	dark_gauss_blur_2_rd7
//	dark_gauss_blur_2_rd8
inline hw_uint<144> dark_gauss_ds_1_dark_gauss_blur_2_update_0_read_bundle_read(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // dark_gauss_blur_2_rd0
    // dark_gauss_blur_2_rd1
    // dark_gauss_blur_2_rd2
    // dark_gauss_blur_2_rd3
    // dark_gauss_blur_2_rd4
    // dark_gauss_blur_2_rd5
    // dark_gauss_blur_2_rd6
    // dark_gauss_blur_2_rd7
    // dark_gauss_blur_2_rd8

	hw_uint<144> result;
	hw_uint<16> dark_gauss_blur_2_rd0_res = dark_gauss_blur_2_rd0_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 144>(result, dark_gauss_blur_2_rd0_res);
	hw_uint<16> dark_gauss_blur_2_rd1_res = dark_gauss_blur_2_rd1_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<16, 144>(result, dark_gauss_blur_2_rd1_res);
	hw_uint<16> dark_gauss_blur_2_rd2_res = dark_gauss_blur_2_rd2_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<32, 144>(result, dark_gauss_blur_2_rd2_res);
	hw_uint<16> dark_gauss_blur_2_rd3_res = dark_gauss_blur_2_rd3_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<48, 144>(result, dark_gauss_blur_2_rd3_res);
	hw_uint<16> dark_gauss_blur_2_rd4_res = dark_gauss_blur_2_rd4_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<64, 144>(result, dark_gauss_blur_2_rd4_res);
	hw_uint<16> dark_gauss_blur_2_rd5_res = dark_gauss_blur_2_rd5_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<80, 144>(result, dark_gauss_blur_2_rd5_res);
	hw_uint<16> dark_gauss_blur_2_rd6_res = dark_gauss_blur_2_rd6_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<96, 144>(result, dark_gauss_blur_2_rd6_res);
	hw_uint<16> dark_gauss_blur_2_rd7_res = dark_gauss_blur_2_rd7_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<112, 144>(result, dark_gauss_blur_2_rd7_res);
	hw_uint<16> dark_gauss_blur_2_rd8_res = dark_gauss_blur_2_rd8_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<128, 144>(result, dark_gauss_blur_2_rd8_res);
	return result;
}

// dark_gauss_ds_1_update_0_write
//	dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0
inline void dark_gauss_ds_1_dark_gauss_ds_1_update_0_write_bundle_write(hw_uint<16>& dark_gauss_ds_1_update_0_write, dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_res = dark_gauss_ds_1_update_0_write.extract<0, 15>();
	dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_write(dark_gauss_ds_1_dark_gauss_ds_1_update_0_write0_res, dark_gauss_ds_1, d0, d1, dynamic_address);
}

// dark_laplace_diff_1_update_0_read
//	dark_laplace_diff_1_rd0
inline hw_uint<16> dark_gauss_ds_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_laplace_diff_1_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_diff_1_rd0_res = dark_laplace_diff_1_rd0_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_laplace_diff_1_rd0_res);
	return result;
}

// dark_laplace_us_0_update_0_read
//	dark_laplace_us_0_rd0
//	dark_laplace_us_0_rd1
inline hw_uint<32> dark_gauss_ds_1_dark_laplace_us_0_update_0_read_bundle_read(dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // dark_laplace_us_0_rd0
    // dark_laplace_us_0_rd1

	hw_uint<32> result;
	hw_uint<16> dark_laplace_us_0_rd0_res = dark_laplace_us_0_rd0_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 32>(result, dark_laplace_us_0_rd0_res);
	hw_uint<16> dark_laplace_us_0_rd1_res = dark_laplace_us_0_rd1_select(dark_gauss_ds_1, d0, d1, dynamic_address);
	set_at<16, 32>(result, dark_laplace_us_0_rd1_res);
	return result;
}

#include "hw_classes.h"

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_cache {
	// RAM Box: {[0, 480], [0, 270]}
	// Capacity: 965
	// # of read delays: 484
	fifo<hw_uint<16>, 965> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(964 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_cache {
	// RAM Box: {[0, 480], [0, 270]}
	// Capacity: 481
	// # of read delays: 482
	fifo<hw_uint<16>, 481> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(480 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 480], [0, 270]}
	// Capacity: 965
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 478> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 478> f11;
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

	inline hw_uint<16> peek_480() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_481() {
		return f6;
	}

	inline hw_uint<16> peek_482() {
		return f8;
	}

	inline hw_uint<16> peek_483() {
		return f10;
	}

	inline hw_uint<16> peek_961() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_962() {
		return f12;
	}

	inline hw_uint<16> peek_963() {
		return f14;
	}

	inline hw_uint<16> peek_964() {
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
    // cap: 1 reading from capacity: 478
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 478 reading from capacity: 1
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
    // cap: 1 reading from capacity: 478
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 478 reading from capacity: 1
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

struct dark_gauss_ds_2_cache {
  // # of banks: 3
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0;
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0;
  dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9_cache dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9;
};



inline void dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_write(hw_uint<16>& dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0, dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
  dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.push(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0);
}

inline hw_uint<16> dark_gauss_blur_3_rd0_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd0 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 24] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_964();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_3_rd1_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd1 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 24] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_483();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_3_rd2_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd2 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 24] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_2();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_3_rd3_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd3 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 24] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_963();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_3_rd4_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd4 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 24] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_482();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_3_rd5_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd5 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 24] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_3_rd6_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd6 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 24] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_962();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_3_rd7_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd7 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 24] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_481();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_gauss_blur_3_rd8_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_gauss_blur_3_rd8 read pattern: { dark_gauss_blur_3_update_0[d0, d1] -> dark_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 24] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_laplace_diff_2_rd0_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_2_rd0 read pattern: { dark_laplace_diff_2_update_0[d0, d1] -> dark_gauss_ds_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Read schedule : { dark_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 39] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_diff_2_rd0.peek(/* one reader or all rams */ (-479 + d0 == 0 && 268 - d1 >= 0) ? (963) : (268 - d1 >= 0 && 478 - d0 >= 0) ? (964) : (-269 + d1 == 0) ? ((961 - d0)) : 0);
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_laplace_us_1_rd0_select(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_us_1_rd0 read pattern: { dark_laplace_us_1_update_0[d0, d1] -> dark_gauss_ds_2[o0, o1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_laplace_us_1_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 37] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Write schedule: { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0 = dark_gauss_ds_2.dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_to_dark_laplace_us_1_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0) ? ((480 - floord(2*d0, 4))) : 0);
  return value_dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0;
  return 0;
}

// # of bundles = 4
// dark_gauss_blur_3_update_0_read
//	dark_gauss_blur_3_rd0
//	dark_gauss_blur_3_rd1
//	dark_gauss_blur_3_rd2
//	dark_gauss_blur_3_rd3
//	dark_gauss_blur_3_rd4
//	dark_gauss_blur_3_rd5
//	dark_gauss_blur_3_rd6
//	dark_gauss_blur_3_rd7
//	dark_gauss_blur_3_rd8
inline hw_uint<144> dark_gauss_ds_2_dark_gauss_blur_3_update_0_read_bundle_read(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // dark_gauss_blur_3_rd0
    // dark_gauss_blur_3_rd1
    // dark_gauss_blur_3_rd2
    // dark_gauss_blur_3_rd3
    // dark_gauss_blur_3_rd4
    // dark_gauss_blur_3_rd5
    // dark_gauss_blur_3_rd6
    // dark_gauss_blur_3_rd7
    // dark_gauss_blur_3_rd8

	hw_uint<144> result;
	hw_uint<16> dark_gauss_blur_3_rd0_res = dark_gauss_blur_3_rd0_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 144>(result, dark_gauss_blur_3_rd0_res);
	hw_uint<16> dark_gauss_blur_3_rd1_res = dark_gauss_blur_3_rd1_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<16, 144>(result, dark_gauss_blur_3_rd1_res);
	hw_uint<16> dark_gauss_blur_3_rd2_res = dark_gauss_blur_3_rd2_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<32, 144>(result, dark_gauss_blur_3_rd2_res);
	hw_uint<16> dark_gauss_blur_3_rd3_res = dark_gauss_blur_3_rd3_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<48, 144>(result, dark_gauss_blur_3_rd3_res);
	hw_uint<16> dark_gauss_blur_3_rd4_res = dark_gauss_blur_3_rd4_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<64, 144>(result, dark_gauss_blur_3_rd4_res);
	hw_uint<16> dark_gauss_blur_3_rd5_res = dark_gauss_blur_3_rd5_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<80, 144>(result, dark_gauss_blur_3_rd5_res);
	hw_uint<16> dark_gauss_blur_3_rd6_res = dark_gauss_blur_3_rd6_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<96, 144>(result, dark_gauss_blur_3_rd6_res);
	hw_uint<16> dark_gauss_blur_3_rd7_res = dark_gauss_blur_3_rd7_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<112, 144>(result, dark_gauss_blur_3_rd7_res);
	hw_uint<16> dark_gauss_blur_3_rd8_res = dark_gauss_blur_3_rd8_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<128, 144>(result, dark_gauss_blur_3_rd8_res);
	return result;
}

// dark_gauss_ds_2_update_0_write
//	dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0
inline void dark_gauss_ds_2_dark_gauss_ds_2_update_0_write_bundle_write(hw_uint<16>& dark_gauss_ds_2_update_0_write, dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_res = dark_gauss_ds_2_update_0_write.extract<0, 15>();
	dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_write(dark_gauss_ds_2_dark_gauss_ds_2_update_0_write0_res, dark_gauss_ds_2, d0, d1, dynamic_address);
}

// dark_laplace_diff_2_update_0_read
//	dark_laplace_diff_2_rd0
inline hw_uint<16> dark_gauss_ds_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_laplace_diff_2_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_diff_2_rd0_res = dark_laplace_diff_2_rd0_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_laplace_diff_2_rd0_res);
	return result;
}

// dark_laplace_us_1_update_0_read
//	dark_laplace_us_1_rd0
inline hw_uint<16> dark_gauss_ds_2_dark_laplace_us_1_update_0_read_bundle_read(dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_laplace_us_1_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_us_1_rd0_res = dark_laplace_us_1_rd0_select(dark_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_laplace_us_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_cache {
	// RAM Box: {[0, 239], [0, 134]}
	// Capacity: 240
	// # of read delays: 241
	fifo<hw_uint<16>, 240> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(239 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_fused_level_3_rd0_cache {
	// RAM Box: {[0, 239], [0, 134]}
	// Capacity: 1
	// # of read delays: 2
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

struct dark_gauss_ds_3_cache {
  // # of banks: 2
  dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0_cache dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0;
  dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_fused_level_3_rd0_cache dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_fused_level_3_rd0;
};



inline void dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_write(hw_uint<16>& dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0, dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1, int dynamic_address) {
  dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0.push(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0);
  dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_fused_level_3_rd0.push(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0);
}

inline hw_uint<16> dark_laplace_us_2_rd0_select(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_us_2_rd0 read pattern: { dark_laplace_us_2_update_0[d0, d1] -> dark_gauss_ds_3[o0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { dark_laplace_us_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 36] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Write schedule: { dark_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 7 + 4d0, 31] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  auto value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0 = dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_dark_laplace_us_2_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 477 - d0 >= 0) ? ((239 - floord(2*d0, 4))) : 0);
  return value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_3_rd0_select(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> dark_gauss_ds_3[d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Read schedule : { fused_level_3_update_0[d0, d1] -> [14 + 8d1, 7 + 4d0, 49] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Write schedule: { dark_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 7 + 4d0, 31] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  auto value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0 = dark_gauss_ds_3.dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_to_fused_level_3_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0;
  return 0;
}

// # of bundles = 3
// dark_gauss_ds_3_update_0_write
//	dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0
inline void dark_gauss_ds_3_dark_gauss_ds_3_update_0_write_bundle_write(hw_uint<16>& dark_gauss_ds_3_update_0_write, dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_res = dark_gauss_ds_3_update_0_write.extract<0, 15>();
	dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_write(dark_gauss_ds_3_dark_gauss_ds_3_update_0_write0_res, dark_gauss_ds_3, d0, d1, dynamic_address);
}

// dark_laplace_us_2_update_0_read
//	dark_laplace_us_2_rd0
inline hw_uint<16> dark_gauss_ds_3_dark_laplace_us_2_update_0_read_bundle_read(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_laplace_us_2_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_us_2_rd0_res = dark_laplace_us_2_rd0_select(dark_gauss_ds_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_laplace_us_2_rd0_res);
	return result;
}

// fused_level_3_update_0_read
//	fused_level_3_rd0
inline hw_uint<16> dark_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_3_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_3_rd0_res = fused_level_3_rd0_select(dark_gauss_ds_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_to_fused_level_0_rd0_cache {
	// RAM Box: {[0, 1918], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
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

struct dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_to_fused_level_0_rd1_cache {
	// RAM Box: {[1, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
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

struct dark_laplace_diff_0_cache {
  // # of banks: 2
  dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_to_fused_level_0_rd0_cache dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_to_fused_level_0_rd0;
  dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_to_fused_level_0_rd1_cache dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_to_fused_level_0_rd1;
};



inline void dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_write(hw_uint<16>& dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1, int dynamic_address) {
  dark_laplace_diff_0.dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_to_fused_level_0_rd0.push(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0);
}

inline void dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_write(hw_uint<16>& dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1, int dynamic_address) {
  dark_laplace_diff_0.dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_to_fused_level_0_rd1.push(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1);
}

inline hw_uint<16> fused_level_0_rd0_select(dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> dark_laplace_diff_0[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 52] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { dark_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 41] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0 = dark_laplace_diff_0.dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_to_fused_level_0_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_0_rd1_select(dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd1 read pattern: { fused_level_0_update_0[d0, d1] -> dark_laplace_diff_0[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 52] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { dark_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 41] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1 = dark_laplace_diff_0.dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_to_fused_level_0_rd1.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1;
  return 0;
}

// # of bundles = 2
// dark_laplace_diff_0_update_0_write
//	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0
//	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1
inline void dark_laplace_diff_0_dark_laplace_diff_0_update_0_write_bundle_write(hw_uint<32>& dark_laplace_diff_0_update_0_write, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_res = dark_laplace_diff_0_update_0_write.extract<0, 15>();
	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_write(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write0_res, dark_laplace_diff_0, d0, d1, dynamic_address);
	hw_uint<16> dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_res = dark_laplace_diff_0_update_0_write.extract<16, 31>();
	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_write(dark_laplace_diff_0_dark_laplace_diff_0_update_0_write1_res, dark_laplace_diff_0, d0, d1, dynamic_address);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
//	fused_level_0_rd1
inline hw_uint<32> dark_laplace_diff_0_fused_level_0_update_0_read_bundle_read(dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // fused_level_0_rd0
    // fused_level_0_rd1

	hw_uint<32> result;
	hw_uint<16> fused_level_0_rd0_res = fused_level_0_rd0_select(dark_laplace_diff_0, d0, d1, dynamic_address);
	set_at<0, 32>(result, fused_level_0_rd0_res);
	hw_uint<16> fused_level_0_rd1_res = fused_level_0_rd1_select(dark_laplace_diff_0, d0, d1, dynamic_address);
	set_at<16, 32>(result, fused_level_0_rd1_res);
	return result;
}

#include "hw_classes.h"

struct dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_to_fused_level_1_rd0_cache {
	// RAM Box: {[0, 959], [0, 539]}
	// Capacity: 1
	// # of read delays: 2
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

struct dark_laplace_diff_1_cache {
  // # of banks: 1
  dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_to_fused_level_1_rd0_cache dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_to_fused_level_1_rd0;
};



inline void dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_write(hw_uint<16>& dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0, dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1, int dynamic_address) {
  dark_laplace_diff_1.dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_to_fused_level_1_rd0.push(dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0);
}

inline hw_uint<16> fused_level_1_rd0_select(dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> dark_laplace_diff_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Read schedule : { fused_level_1_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 51] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Write schedule: { dark_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 40] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  auto value_dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0 = dark_laplace_diff_1.dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_to_fused_level_1_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_laplace_diff_1_update_0_write
//	dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0
inline void dark_laplace_diff_1_dark_laplace_diff_1_update_0_write_bundle_write(hw_uint<16>& dark_laplace_diff_1_update_0_write, dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_res = dark_laplace_diff_1_update_0_write.extract<0, 15>();
	dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_write(dark_laplace_diff_1_dark_laplace_diff_1_update_0_write0_res, dark_laplace_diff_1, d0, d1, dynamic_address);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
inline hw_uint<16> dark_laplace_diff_1_fused_level_1_update_0_read_bundle_read(dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_1_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_1_rd0_res = fused_level_1_rd0_select(dark_laplace_diff_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_to_fused_level_2_rd0_cache {
	// RAM Box: {[0, 479], [0, 269]}
	// Capacity: 1
	// # of read delays: 2
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

struct dark_laplace_diff_2_cache {
  // # of banks: 1
  dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_to_fused_level_2_rd0_cache dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_to_fused_level_2_rd0;
};



inline void dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_write(hw_uint<16>& dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0, dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1, int dynamic_address) {
  dark_laplace_diff_2.dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_to_fused_level_2_rd0.push(dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0);
}

inline hw_uint<16> fused_level_2_rd0_select(dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> dark_laplace_diff_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Read schedule : { fused_level_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 50] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Write schedule: { dark_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 39] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  auto value_dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0 = dark_laplace_diff_2.dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_to_fused_level_2_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_laplace_diff_2_update_0_write
//	dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0
inline void dark_laplace_diff_2_dark_laplace_diff_2_update_0_write_bundle_write(hw_uint<16>& dark_laplace_diff_2_update_0_write, dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_res = dark_laplace_diff_2_update_0_write.extract<0, 15>();
	dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_write(dark_laplace_diff_2_dark_laplace_diff_2_update_0_write0_res, dark_laplace_diff_2, d0, d1, dynamic_address);
}

// fused_level_2_update_0_read
//	fused_level_2_rd0
inline hw_uint<16> dark_laplace_diff_2_fused_level_2_update_0_read_bundle_read(dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_2_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_2_rd0_res = fused_level_2_rd0_select(dark_laplace_diff_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_laplace_us_0_dark_laplace_us_0_update_0_write0_to_dark_laplace_diff_0_rd0_cache {
	// RAM Box: {[0, 1918], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
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

struct dark_laplace_us_0_dark_laplace_us_0_update_0_write1_to_dark_laplace_diff_0_rd1_cache {
	// RAM Box: {[1, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
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

struct dark_laplace_us_0_cache {
  // # of banks: 2
  dark_laplace_us_0_dark_laplace_us_0_update_0_write0_to_dark_laplace_diff_0_rd0_cache dark_laplace_us_0_dark_laplace_us_0_update_0_write0_to_dark_laplace_diff_0_rd0;
  dark_laplace_us_0_dark_laplace_us_0_update_0_write1_to_dark_laplace_diff_0_rd1_cache dark_laplace_us_0_dark_laplace_us_0_update_0_write1_to_dark_laplace_diff_0_rd1;
};



inline void dark_laplace_us_0_dark_laplace_us_0_update_0_write0_write(hw_uint<16>& dark_laplace_us_0_dark_laplace_us_0_update_0_write0, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1, int dynamic_address) {
  dark_laplace_us_0.dark_laplace_us_0_dark_laplace_us_0_update_0_write0_to_dark_laplace_diff_0_rd0.push(dark_laplace_us_0_dark_laplace_us_0_update_0_write0);
}

inline void dark_laplace_us_0_dark_laplace_us_0_update_0_write1_write(hw_uint<16>& dark_laplace_us_0_dark_laplace_us_0_update_0_write1, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1, int dynamic_address) {
  dark_laplace_us_0.dark_laplace_us_0_dark_laplace_us_0_update_0_write1_to_dark_laplace_diff_0_rd1.push(dark_laplace_us_0_dark_laplace_us_0_update_0_write1);
}

inline hw_uint<16> dark_laplace_diff_0_rd0_select(dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_0_rd0 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark_laplace_us_0[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { dark_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 41] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { dark_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 38] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_dark_laplace_us_0_dark_laplace_us_0_update_0_write0 = dark_laplace_us_0.dark_laplace_us_0_dark_laplace_us_0_update_0_write0_to_dark_laplace_diff_0_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_us_0_dark_laplace_us_0_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_laplace_diff_0_rd1_select(dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_0_rd1 read pattern: { dark_laplace_diff_0_update_0[d0, d1] -> dark_laplace_us_0[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { dark_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 41] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { dark_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 38] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_dark_laplace_us_0_dark_laplace_us_0_update_0_write1 = dark_laplace_us_0.dark_laplace_us_0_dark_laplace_us_0_update_0_write1_to_dark_laplace_diff_0_rd1.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_us_0_dark_laplace_us_0_update_0_write1;
  return 0;
}

// # of bundles = 2
// dark_laplace_diff_0_update_0_read
//	dark_laplace_diff_0_rd0
//	dark_laplace_diff_0_rd1
inline hw_uint<32> dark_laplace_us_0_dark_laplace_diff_0_update_0_read_bundle_read(dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // dark_laplace_diff_0_rd0
    // dark_laplace_diff_0_rd1

	hw_uint<32> result;
	hw_uint<16> dark_laplace_diff_0_rd0_res = dark_laplace_diff_0_rd0_select(dark_laplace_us_0, d0, d1, dynamic_address);
	set_at<0, 32>(result, dark_laplace_diff_0_rd0_res);
	hw_uint<16> dark_laplace_diff_0_rd1_res = dark_laplace_diff_0_rd1_select(dark_laplace_us_0, d0, d1, dynamic_address);
	set_at<16, 32>(result, dark_laplace_diff_0_rd1_res);
	return result;
}

// dark_laplace_us_0_update_0_write
//	dark_laplace_us_0_dark_laplace_us_0_update_0_write0
//	dark_laplace_us_0_dark_laplace_us_0_update_0_write1
inline void dark_laplace_us_0_dark_laplace_us_0_update_0_write_bundle_write(hw_uint<32>& dark_laplace_us_0_update_0_write, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_laplace_us_0_dark_laplace_us_0_update_0_write0_res = dark_laplace_us_0_update_0_write.extract<0, 15>();
	dark_laplace_us_0_dark_laplace_us_0_update_0_write0_write(dark_laplace_us_0_dark_laplace_us_0_update_0_write0_res, dark_laplace_us_0, d0, d1, dynamic_address);
	hw_uint<16> dark_laplace_us_0_dark_laplace_us_0_update_0_write1_res = dark_laplace_us_0_update_0_write.extract<16, 31>();
	dark_laplace_us_0_dark_laplace_us_0_update_0_write1_write(dark_laplace_us_0_dark_laplace_us_0_update_0_write1_res, dark_laplace_us_0, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct dark_laplace_us_1_dark_laplace_us_1_update_0_write0_to_dark_laplace_diff_1_rd0_cache {
	// RAM Box: {[0, 959], [0, 539]}
	// Capacity: 1
	// # of read delays: 2
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

struct dark_laplace_us_1_cache {
  // # of banks: 1
  dark_laplace_us_1_dark_laplace_us_1_update_0_write0_to_dark_laplace_diff_1_rd0_cache dark_laplace_us_1_dark_laplace_us_1_update_0_write0_to_dark_laplace_diff_1_rd0;
};



inline void dark_laplace_us_1_dark_laplace_us_1_update_0_write0_write(hw_uint<16>& dark_laplace_us_1_dark_laplace_us_1_update_0_write0, dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1, int dynamic_address) {
  dark_laplace_us_1.dark_laplace_us_1_dark_laplace_us_1_update_0_write0_to_dark_laplace_diff_1_rd0.push(dark_laplace_us_1_dark_laplace_us_1_update_0_write0);
}

inline hw_uint<16> dark_laplace_diff_1_rd0_select(dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_1_rd0 read pattern: { dark_laplace_diff_1_update_0[d0, d1] -> dark_laplace_us_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Read schedule : { dark_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 40] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Write schedule: { dark_laplace_us_1_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 37] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  auto value_dark_laplace_us_1_dark_laplace_us_1_update_0_write0 = dark_laplace_us_1.dark_laplace_us_1_dark_laplace_us_1_update_0_write0_to_dark_laplace_diff_1_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_us_1_dark_laplace_us_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_laplace_diff_1_update_0_read
//	dark_laplace_diff_1_rd0
inline hw_uint<16> dark_laplace_us_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_laplace_diff_1_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_diff_1_rd0_res = dark_laplace_diff_1_rd0_select(dark_laplace_us_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_laplace_diff_1_rd0_res);
	return result;
}

// dark_laplace_us_1_update_0_write
//	dark_laplace_us_1_dark_laplace_us_1_update_0_write0
inline void dark_laplace_us_1_dark_laplace_us_1_update_0_write_bundle_write(hw_uint<16>& dark_laplace_us_1_update_0_write, dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_laplace_us_1_dark_laplace_us_1_update_0_write0_res = dark_laplace_us_1_update_0_write.extract<0, 15>();
	dark_laplace_us_1_dark_laplace_us_1_update_0_write0_write(dark_laplace_us_1_dark_laplace_us_1_update_0_write0_res, dark_laplace_us_1, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct dark_laplace_us_2_dark_laplace_us_2_update_0_write0_to_dark_laplace_diff_2_rd0_cache {
	// RAM Box: {[0, 479], [0, 269]}
	// Capacity: 1
	// # of read delays: 2
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

struct dark_laplace_us_2_cache {
  // # of banks: 1
  dark_laplace_us_2_dark_laplace_us_2_update_0_write0_to_dark_laplace_diff_2_rd0_cache dark_laplace_us_2_dark_laplace_us_2_update_0_write0_to_dark_laplace_diff_2_rd0;
};



inline void dark_laplace_us_2_dark_laplace_us_2_update_0_write0_write(hw_uint<16>& dark_laplace_us_2_dark_laplace_us_2_update_0_write0, dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1, int dynamic_address) {
  dark_laplace_us_2.dark_laplace_us_2_dark_laplace_us_2_update_0_write0_to_dark_laplace_diff_2_rd0.push(dark_laplace_us_2_dark_laplace_us_2_update_0_write0);
}

inline hw_uint<16> dark_laplace_diff_2_rd0_select(dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_laplace_diff_2_rd0 read pattern: { dark_laplace_diff_2_update_0[d0, d1] -> dark_laplace_us_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Read schedule : { dark_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 39] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Write schedule: { dark_laplace_us_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 36] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  auto value_dark_laplace_us_2_dark_laplace_us_2_update_0_write0 = dark_laplace_us_2.dark_laplace_us_2_dark_laplace_us_2_update_0_write0_to_dark_laplace_diff_2_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_laplace_us_2_dark_laplace_us_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_laplace_diff_2_update_0_read
//	dark_laplace_diff_2_rd0
inline hw_uint<16> dark_laplace_us_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_laplace_diff_2_rd0

	hw_uint<16> result;
	hw_uint<16> dark_laplace_diff_2_rd0_res = dark_laplace_diff_2_rd0_select(dark_laplace_us_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_laplace_diff_2_rd0_res);
	return result;
}

// dark_laplace_us_2_update_0_write
//	dark_laplace_us_2_dark_laplace_us_2_update_0_write0
inline void dark_laplace_us_2_dark_laplace_us_2_update_0_write_bundle_write(hw_uint<16>& dark_laplace_us_2_update_0_write, dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_laplace_us_2_dark_laplace_us_2_update_0_write0_res = dark_laplace_us_2_update_0_write.extract<0, 15>();
	dark_laplace_us_2_dark_laplace_us_2_update_0_write0_write(dark_laplace_us_2_dark_laplace_us_2_update_0_write0_res, dark_laplace_us_2, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct dark_weights_dark_weights_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 1926], [0, 1086]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct dark_weights_dark_weights_update_0_write1_merged_banks_2_cache {
	// RAM Box: {[1, 1927], [0, 1086]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct dark_weights_cache {
  // # of banks: 2
  dark_weights_dark_weights_update_0_write0_merged_banks_2_cache dark_weights_dark_weights_update_0_write0_merged_banks_2;
  dark_weights_dark_weights_update_0_write1_merged_banks_2_cache dark_weights_dark_weights_update_0_write1_merged_banks_2;
};



inline void dark_weights_dark_weights_update_0_write0_write(hw_uint<16>& dark_weights_dark_weights_update_0_write0, dark_weights_cache& dark_weights, int d0, int d1, int dynamic_address) {
  dark_weights.dark_weights_dark_weights_update_0_write0_merged_banks_2.push(dark_weights_dark_weights_update_0_write0);
}

inline void dark_weights_dark_weights_update_0_write1_write(hw_uint<16>& dark_weights_dark_weights_update_0_write1, dark_weights_cache& dark_weights, int d0, int d1, int dynamic_address) {
  dark_weights.dark_weights_dark_weights_update_0_write1_merged_banks_2.push(dark_weights_dark_weights_update_0_write1);
}

inline hw_uint<16> dark_weights_normed_rd0_select(dark_weights_cache& dark_weights, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_rd0 read pattern: { dark_weights_normed_update_0[d0, d1] -> dark_weights[2d0, d1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Read schedule : { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 11] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Write schedule: { dark_weights_update_0[d0, d1] -> [d1, d0, 8] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_weights_dark_weights_update_0_write0 = dark_weights.dark_weights_dark_weights_update_0_write0_merged_banks_2.peek_0();
  return value_dark_weights_dark_weights_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_rd1_select(dark_weights_cache& dark_weights, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_rd1 read pattern: { dark_weights_normed_update_0[d0, d1] -> dark_weights[1 + 2d0, d1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Read schedule : { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 11] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Write schedule: { dark_weights_update_0[d0, d1] -> [d1, d0, 8] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_weights_dark_weights_update_0_write1 = dark_weights.dark_weights_dark_weights_update_0_write1_merged_banks_2.peek_0();
  return value_dark_weights_dark_weights_update_0_write1;
  return 0;
}

inline hw_uint<16> weight_sums_rd0_select(dark_weights_cache& dark_weights, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // weight_sums_rd0 read pattern: { weight_sums_update_0[d0, d1] -> dark_weights[2d0, d1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Read schedule : { weight_sums_update_0[d0, d1] -> [d1, d0, 10] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Write schedule: { dark_weights_update_0[d0, d1] -> [d1, d0, 8] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_weights_dark_weights_update_0_write0 = dark_weights.dark_weights_dark_weights_update_0_write0_merged_banks_2.peek_0();
  return value_dark_weights_dark_weights_update_0_write0;
  return 0;
}

inline hw_uint<16> weight_sums_rd1_select(dark_weights_cache& dark_weights, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // weight_sums_rd1 read pattern: { weight_sums_update_0[d0, d1] -> dark_weights[1 + 2d0, d1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Read schedule : { weight_sums_update_0[d0, d1] -> [d1, d0, 10] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Write schedule: { dark_weights_update_0[d0, d1] -> [d1, d0, 8] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_weights_dark_weights_update_0_write1 = dark_weights.dark_weights_dark_weights_update_0_write1_merged_banks_2.peek_0();
  return value_dark_weights_dark_weights_update_0_write1;
  return 0;
}

// # of bundles = 3
// dark_weights_normed_update_0_read
//	dark_weights_normed_rd0
//	dark_weights_normed_rd1
inline hw_uint<32> dark_weights_dark_weights_normed_update_0_read_bundle_read(dark_weights_cache& dark_weights, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // dark_weights_normed_rd0
    // dark_weights_normed_rd1

	hw_uint<32> result;
	hw_uint<16> dark_weights_normed_rd0_res = dark_weights_normed_rd0_select(dark_weights, d0, d1, dynamic_address);
	set_at<0, 32>(result, dark_weights_normed_rd0_res);
	hw_uint<16> dark_weights_normed_rd1_res = dark_weights_normed_rd1_select(dark_weights, d0, d1, dynamic_address);
	set_at<16, 32>(result, dark_weights_normed_rd1_res);
	return result;
}

// dark_weights_update_0_write
//	dark_weights_dark_weights_update_0_write0
//	dark_weights_dark_weights_update_0_write1
inline void dark_weights_dark_weights_update_0_write_bundle_write(hw_uint<32>& dark_weights_update_0_write, dark_weights_cache& dark_weights, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_weights_dark_weights_update_0_write0_res = dark_weights_update_0_write.extract<0, 15>();
	dark_weights_dark_weights_update_0_write0_write(dark_weights_dark_weights_update_0_write0_res, dark_weights, d0, d1, dynamic_address);
	hw_uint<16> dark_weights_dark_weights_update_0_write1_res = dark_weights_update_0_write.extract<16, 31>();
	dark_weights_dark_weights_update_0_write1_write(dark_weights_dark_weights_update_0_write1_res, dark_weights, d0, d1, dynamic_address);
}

// weight_sums_update_0_read
//	weight_sums_rd0
//	weight_sums_rd1
inline hw_uint<32> dark_weights_weight_sums_update_0_read_bundle_read(dark_weights_cache& dark_weights, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // weight_sums_rd0
    // weight_sums_rd1

	hw_uint<32> result;
	hw_uint<16> weight_sums_rd0_res = weight_sums_rd0_select(dark_weights, d0, d1, dynamic_address);
	set_at<0, 32>(result, weight_sums_rd0_res);
	hw_uint<16> weight_sums_rd1_res = weight_sums_rd1_select(dark_weights, d0, d1, dynamic_address);
	set_at<16, 32>(result, weight_sums_rd1_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10_cache {
	// RAM Box: {[0, 1926], [0, 1086]}
	// Capacity: 1930
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 962> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 962> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_963() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_964() {
		return f4;
	}

	inline hw_uint<16> peek_965() {
		return f6;
	}

	inline hw_uint<16> peek_1927() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1928() {
		return f8;
	}

	inline hw_uint<16> peek_1929() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 962
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 962 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 962
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 962 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10_cache {
	// RAM Box: {[1, 1927], [0, 1086]}
	// Capacity: 1930
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 962> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 962> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_963() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_964() {
		return f4;
	}

	inline hw_uint<16> peek_965() {
		return f6;
	}

	inline hw_uint<16> peek_1927() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_1928() {
		return f8;
	}

	inline hw_uint<16> peek_1929() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 962
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 962 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 962
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 962 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct dark_weights_normed_cache {
  // # of banks: 2
  dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10_cache dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10;
  dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10_cache dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10;
};



inline void dark_weights_normed_dark_weights_normed_update_0_write0_write(hw_uint<16>& dark_weights_normed_dark_weights_normed_update_0_write0, dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
  dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.push(dark_weights_normed_dark_weights_normed_update_0_write0);
}

inline void dark_weights_normed_dark_weights_normed_update_0_write1_write(hw_uint<16>& dark_weights_normed_dark_weights_normed_update_0_write1, dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
  dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10.push(dark_weights_normed_dark_weights_normed_update_0_write1);
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd0_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd0 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2d0, d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 15] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 11] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_1929();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd1_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd1 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2d0, 1 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 15] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 11] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_965();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd10_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd10 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + 2d0, 1 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 15] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 11] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10.peek_965();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd11_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd11 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + 2d0, 2 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 15] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 11] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10.peek_1();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd12_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd12 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + 2d0, d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 15] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 11] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_1928();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd13_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd13 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + 2d0, 1 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 15] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 11] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_964();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd14_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd14 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + 2d0, 2 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 15] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 11] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_0();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd15_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd15 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[3 + 2d0, d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 15] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 11] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10.peek_1928();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd16_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd16 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[3 + 2d0, 1 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 15] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 11] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10.peek_964();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd17_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd17 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[3 + 2d0, 2 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 15] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 11] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10.peek_0();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd2_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd2 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2d0, 2 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 15] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 11] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_1();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd3_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd3 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + 2d0, d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 15] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 11] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10.peek_1929();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd4_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd4 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + 2d0, 1 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 15] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 11] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10.peek_965();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd5_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd5 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + 2d0, 2 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 15] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 11] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10.peek_1();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd6_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd6 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + 2d0, d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 15] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 11] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_1928();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd7_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd7 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + 2d0, 1 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 15] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 11] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_964();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd8_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd8 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[2 + 2d0, 2 + d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 15] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 11] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_0();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_1_rd9_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_1_rd9 read pattern: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> dark_weights_normed[1 + 2d0, d1] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Read schedule : { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 15] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 11] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10.peek_1929();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
  return 0;
}

inline hw_uint<16> fused_level_0_rd0_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd0 read pattern: { fused_level_0_update_0[d0, d1] -> dark_weights_normed[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 52] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 11] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write0 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write0_merged_banks_10.peek_1929();
  return value_dark_weights_normed_dark_weights_normed_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_0_rd1_select(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_0_rd1 read pattern: { fused_level_0_update_0[d0, d1] -> dark_weights_normed[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 52] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 11] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_dark_weights_normed_dark_weights_normed_update_0_write1 = dark_weights_normed.dark_weights_normed_dark_weights_normed_update_0_write1_merged_banks_10.peek_1929();
  return value_dark_weights_normed_dark_weights_normed_update_0_write1;
  return 0;
}

// # of bundles = 3
// dark_weights_normed_gauss_blur_1_update_0_read
//	dark_weights_normed_gauss_blur_1_rd0
//	dark_weights_normed_gauss_blur_1_rd1
//	dark_weights_normed_gauss_blur_1_rd2
//	dark_weights_normed_gauss_blur_1_rd3
//	dark_weights_normed_gauss_blur_1_rd4
//	dark_weights_normed_gauss_blur_1_rd5
//	dark_weights_normed_gauss_blur_1_rd6
//	dark_weights_normed_gauss_blur_1_rd7
//	dark_weights_normed_gauss_blur_1_rd8
//	dark_weights_normed_gauss_blur_1_rd9
//	dark_weights_normed_gauss_blur_1_rd10
//	dark_weights_normed_gauss_blur_1_rd11
//	dark_weights_normed_gauss_blur_1_rd12
//	dark_weights_normed_gauss_blur_1_rd13
//	dark_weights_normed_gauss_blur_1_rd14
//	dark_weights_normed_gauss_blur_1_rd15
//	dark_weights_normed_gauss_blur_1_rd16
//	dark_weights_normed_gauss_blur_1_rd17
inline hw_uint<288> dark_weights_normed_dark_weights_normed_gauss_blur_1_update_0_read_bundle_read(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 18
    // dark_weights_normed_gauss_blur_1_rd0
    // dark_weights_normed_gauss_blur_1_rd1
    // dark_weights_normed_gauss_blur_1_rd2
    // dark_weights_normed_gauss_blur_1_rd3
    // dark_weights_normed_gauss_blur_1_rd4
    // dark_weights_normed_gauss_blur_1_rd5
    // dark_weights_normed_gauss_blur_1_rd6
    // dark_weights_normed_gauss_blur_1_rd7
    // dark_weights_normed_gauss_blur_1_rd8
    // dark_weights_normed_gauss_blur_1_rd9
    // dark_weights_normed_gauss_blur_1_rd10
    // dark_weights_normed_gauss_blur_1_rd11
    // dark_weights_normed_gauss_blur_1_rd12
    // dark_weights_normed_gauss_blur_1_rd13
    // dark_weights_normed_gauss_blur_1_rd14
    // dark_weights_normed_gauss_blur_1_rd15
    // dark_weights_normed_gauss_blur_1_rd16
    // dark_weights_normed_gauss_blur_1_rd17

	hw_uint<288> result;
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd0_res = dark_weights_normed_gauss_blur_1_rd0_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<0, 288>(result, dark_weights_normed_gauss_blur_1_rd0_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd1_res = dark_weights_normed_gauss_blur_1_rd1_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<16, 288>(result, dark_weights_normed_gauss_blur_1_rd1_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd2_res = dark_weights_normed_gauss_blur_1_rd2_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<32, 288>(result, dark_weights_normed_gauss_blur_1_rd2_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd3_res = dark_weights_normed_gauss_blur_1_rd3_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<48, 288>(result, dark_weights_normed_gauss_blur_1_rd3_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd4_res = dark_weights_normed_gauss_blur_1_rd4_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<64, 288>(result, dark_weights_normed_gauss_blur_1_rd4_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd5_res = dark_weights_normed_gauss_blur_1_rd5_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<80, 288>(result, dark_weights_normed_gauss_blur_1_rd5_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd6_res = dark_weights_normed_gauss_blur_1_rd6_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<96, 288>(result, dark_weights_normed_gauss_blur_1_rd6_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd7_res = dark_weights_normed_gauss_blur_1_rd7_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<112, 288>(result, dark_weights_normed_gauss_blur_1_rd7_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd8_res = dark_weights_normed_gauss_blur_1_rd8_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<128, 288>(result, dark_weights_normed_gauss_blur_1_rd8_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd9_res = dark_weights_normed_gauss_blur_1_rd9_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<144, 288>(result, dark_weights_normed_gauss_blur_1_rd9_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd10_res = dark_weights_normed_gauss_blur_1_rd10_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<160, 288>(result, dark_weights_normed_gauss_blur_1_rd10_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd11_res = dark_weights_normed_gauss_blur_1_rd11_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<176, 288>(result, dark_weights_normed_gauss_blur_1_rd11_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd12_res = dark_weights_normed_gauss_blur_1_rd12_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<192, 288>(result, dark_weights_normed_gauss_blur_1_rd12_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd13_res = dark_weights_normed_gauss_blur_1_rd13_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<208, 288>(result, dark_weights_normed_gauss_blur_1_rd13_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd14_res = dark_weights_normed_gauss_blur_1_rd14_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<224, 288>(result, dark_weights_normed_gauss_blur_1_rd14_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd15_res = dark_weights_normed_gauss_blur_1_rd15_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<240, 288>(result, dark_weights_normed_gauss_blur_1_rd15_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd16_res = dark_weights_normed_gauss_blur_1_rd16_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<256, 288>(result, dark_weights_normed_gauss_blur_1_rd16_res);
	hw_uint<16> dark_weights_normed_gauss_blur_1_rd17_res = dark_weights_normed_gauss_blur_1_rd17_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<272, 288>(result, dark_weights_normed_gauss_blur_1_rd17_res);
	return result;
}

// dark_weights_normed_update_0_write
//	dark_weights_normed_dark_weights_normed_update_0_write0
//	dark_weights_normed_dark_weights_normed_update_0_write1
inline void dark_weights_normed_dark_weights_normed_update_0_write_bundle_write(hw_uint<32>& dark_weights_normed_update_0_write, dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_weights_normed_dark_weights_normed_update_0_write0_res = dark_weights_normed_update_0_write.extract<0, 15>();
	dark_weights_normed_dark_weights_normed_update_0_write0_write(dark_weights_normed_dark_weights_normed_update_0_write0_res, dark_weights_normed, d0, d1, dynamic_address);
	hw_uint<16> dark_weights_normed_dark_weights_normed_update_0_write1_res = dark_weights_normed_update_0_write.extract<16, 31>();
	dark_weights_normed_dark_weights_normed_update_0_write1_write(dark_weights_normed_dark_weights_normed_update_0_write1_res, dark_weights_normed, d0, d1, dynamic_address);
}

// fused_level_0_update_0_read
//	fused_level_0_rd0
//	fused_level_0_rd1
inline hw_uint<32> dark_weights_normed_fused_level_0_update_0_read_bundle_read(dark_weights_normed_cache& dark_weights_normed, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // fused_level_0_rd0
    // fused_level_0_rd1

	hw_uint<32> result;
	hw_uint<16> fused_level_0_rd0_res = fused_level_0_rd0_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<0, 32>(result, fused_level_0_rd0_res);
	hw_uint<16> fused_level_0_rd1_res = fused_level_0_rd1_select(dark_weights_normed, d0, d1, dynamic_address);
	set_at<16, 32>(result, fused_level_0_rd1_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_to_dark_weights_normed_gauss_ds_1_rd0_cache {
	// RAM Box: {[0, 1924], [0, 1084]}
	// Capacity: 1
	// # of read delays: 2
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

struct dark_weights_normed_gauss_blur_1_cache {
  // # of banks: 1
  dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_to_dark_weights_normed_gauss_ds_1_rd0_cache dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_to_dark_weights_normed_gauss_ds_1_rd0;
};



inline void dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
  dark_weights_normed_gauss_blur_1.dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_to_dark_weights_normed_gauss_ds_1_rd0.push(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0);
}

inline void dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write1_write(hw_uint<16>& dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write1, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline hw_uint<16> dark_weights_normed_gauss_ds_1_rd0_select(dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_ds_1_rd0 read pattern: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> dark_weights_normed_gauss_blur_1[2d0, 2d1] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  // Read schedule : { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  // Write schedule: { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 15] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
  auto value_dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0 = dark_weights_normed_gauss_blur_1.dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_to_dark_weights_normed_gauss_ds_1_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_weights_normed_gauss_blur_1_update_0_write
//	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0
//	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write1
inline void dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write_bundle_write(hw_uint<32>& dark_weights_normed_gauss_blur_1_update_0_write, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_res = dark_weights_normed_gauss_blur_1_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_write(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write0_res, dark_weights_normed_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write1_res = dark_weights_normed_gauss_blur_1_update_0_write.extract<16, 31>();
	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write1_write(dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write1_res, dark_weights_normed_gauss_blur_1, d0, d1, dynamic_address);
}

// dark_weights_normed_gauss_ds_1_update_0_read
//	dark_weights_normed_gauss_ds_1_rd0
inline hw_uint<16> dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_ds_1_update_0_read_bundle_read(dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_weights_normed_gauss_ds_1_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_normed_gauss_ds_1_rd0_res = dark_weights_normed_gauss_ds_1_rd0_select(dark_weights_normed_gauss_blur_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_weights_normed_gauss_ds_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_to_dark_weights_normed_gauss_ds_2_rd0_cache {
	// RAM Box: {[0, 960], [0, 540]}
	// Capacity: 1
	// # of read delays: 2
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

struct dark_weights_normed_gauss_blur_2_cache {
  // # of banks: 1
  dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_to_dark_weights_normed_gauss_ds_2_rd0_cache dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_to_dark_weights_normed_gauss_ds_2_rd0;
};



inline void dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0, dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1, int dynamic_address) {
  dark_weights_normed_gauss_blur_2.dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_to_dark_weights_normed_gauss_ds_2_rd0.push(dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0);
}

inline hw_uint<16> dark_weights_normed_gauss_ds_2_rd0_select(dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_ds_2_rd0 read pattern: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> dark_weights_normed_gauss_blur_2[2d0, 2d1] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  // Read schedule : { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 29] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  // Write schedule: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 22] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  auto value_dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0 = dark_weights_normed_gauss_blur_2.dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_to_dark_weights_normed_gauss_ds_2_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_weights_normed_gauss_blur_2_update_0_write
//	dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0
inline void dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_gauss_blur_2_update_0_write, dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_res = dark_weights_normed_gauss_blur_2_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_write(dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write0_res, dark_weights_normed_gauss_blur_2, d0, d1, dynamic_address);
}

// dark_weights_normed_gauss_ds_2_update_0_read
//	dark_weights_normed_gauss_ds_2_rd0
inline hw_uint<16> dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_ds_2_update_0_read_bundle_read(dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_weights_normed_gauss_ds_2_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_normed_gauss_ds_2_rd0_res = dark_weights_normed_gauss_ds_2_rd0_select(dark_weights_normed_gauss_blur_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_weights_normed_gauss_ds_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_to_dark_weights_normed_gauss_ds_3_rd0_cache {
	// RAM Box: {[0, 478], [0, 268]}
	// Capacity: 1
	// # of read delays: 2
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

struct dark_weights_normed_gauss_blur_3_cache {
  // # of banks: 1
  dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_to_dark_weights_normed_gauss_ds_3_rd0_cache dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_to_dark_weights_normed_gauss_ds_3_rd0;
};



inline void dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0, dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1, int dynamic_address) {
  dark_weights_normed_gauss_blur_3.dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_to_dark_weights_normed_gauss_ds_3_rd0.push(dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0);
}

inline hw_uint<16> dark_weights_normed_gauss_ds_3_rd0_select(dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_ds_3_rd0 read pattern: { dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> dark_weights_normed_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Read schedule : { dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 7 + 4d0, 35] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Write schedule: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 30] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0 = dark_weights_normed_gauss_blur_3.dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_to_dark_weights_normed_gauss_ds_3_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_weights_normed_gauss_blur_3_update_0_write
//	dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0
inline void dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_gauss_blur_3_update_0_write, dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_res = dark_weights_normed_gauss_blur_3_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_write(dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write0_res, dark_weights_normed_gauss_blur_3, d0, d1, dynamic_address);
}

// dark_weights_normed_gauss_ds_3_update_0_read
//	dark_weights_normed_gauss_ds_3_rd0
inline hw_uint<16> dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_ds_3_update_0_read_bundle_read(dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // dark_weights_normed_gauss_ds_3_rd0

	hw_uint<16> result;
	hw_uint<16> dark_weights_normed_gauss_ds_3_rd0_res = dark_weights_normed_gauss_ds_3_rd0_select(dark_weights_normed_gauss_blur_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, dark_weights_normed_gauss_ds_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10_cache {
	// RAM Box: {[0, 962], [0, 542]}
	// Capacity: 1929
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 960> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 960> f11;
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

	inline hw_uint<16> peek_962() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_963() {
		return f6;
	}

	inline hw_uint<16> peek_964() {
		return f8;
	}

	inline hw_uint<16> peek_965() {
		return f10;
	}

	inline hw_uint<16> peek_1925() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_1926() {
		return f12;
	}

	inline hw_uint<16> peek_1927() {
		return f14;
	}

	inline hw_uint<16> peek_1928() {
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
    // cap: 1 reading from capacity: 960
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
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
    // cap: 1 reading from capacity: 960
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 960 reading from capacity: 1
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

struct dark_weights_normed_gauss_ds_1_cache {
  // # of banks: 1
  dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10_cache dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10;
};



inline void dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
  dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.push(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0);
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd0_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd0 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 22] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_1928();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd1_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd1 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 22] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_965();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd2_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd2 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 22] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_2();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd3_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd3 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 22] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_1927();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd4_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd4 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 22] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_964();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd5_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd5 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[1 + d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 22] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_1();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd6_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd6 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + d0, d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 22] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_1926();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd7_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd7 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + d0, 1 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 22] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_963();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_2_rd8_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_2_rd8 read pattern: { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[2 + d0, 2 + d1] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Read schedule : { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 22] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_0();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_1_rd0_select(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_1_rd0 read pattern: { fused_level_1_update_0[d0, d1] -> dark_weights_normed_gauss_ds_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Read schedule : { fused_level_1_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 51] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Write schedule: { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
  auto value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0 = dark_weights_normed_gauss_ds_1.dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_merged_banks_10.peek_1928();
  return value_dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0;
  return 0;
}

// # of bundles = 3
// dark_weights_normed_gauss_blur_2_update_0_read
//	dark_weights_normed_gauss_blur_2_rd0
//	dark_weights_normed_gauss_blur_2_rd1
//	dark_weights_normed_gauss_blur_2_rd2
//	dark_weights_normed_gauss_blur_2_rd3
//	dark_weights_normed_gauss_blur_2_rd4
//	dark_weights_normed_gauss_blur_2_rd5
//	dark_weights_normed_gauss_blur_2_rd6
//	dark_weights_normed_gauss_blur_2_rd7
//	dark_weights_normed_gauss_blur_2_rd8
inline hw_uint<144> dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_blur_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // dark_weights_normed_gauss_blur_2_rd0
    // dark_weights_normed_gauss_blur_2_rd1
    // dark_weights_normed_gauss_blur_2_rd2
    // dark_weights_normed_gauss_blur_2_rd3
    // dark_weights_normed_gauss_blur_2_rd4
    // dark_weights_normed_gauss_blur_2_rd5
    // dark_weights_normed_gauss_blur_2_rd6
    // dark_weights_normed_gauss_blur_2_rd7
    // dark_weights_normed_gauss_blur_2_rd8

	hw_uint<144> result;
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd0_res = dark_weights_normed_gauss_blur_2_rd0_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 144>(result, dark_weights_normed_gauss_blur_2_rd0_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd1_res = dark_weights_normed_gauss_blur_2_rd1_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<16, 144>(result, dark_weights_normed_gauss_blur_2_rd1_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd2_res = dark_weights_normed_gauss_blur_2_rd2_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<32, 144>(result, dark_weights_normed_gauss_blur_2_rd2_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd3_res = dark_weights_normed_gauss_blur_2_rd3_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<48, 144>(result, dark_weights_normed_gauss_blur_2_rd3_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd4_res = dark_weights_normed_gauss_blur_2_rd4_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<64, 144>(result, dark_weights_normed_gauss_blur_2_rd4_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd5_res = dark_weights_normed_gauss_blur_2_rd5_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<80, 144>(result, dark_weights_normed_gauss_blur_2_rd5_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd6_res = dark_weights_normed_gauss_blur_2_rd6_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<96, 144>(result, dark_weights_normed_gauss_blur_2_rd6_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd7_res = dark_weights_normed_gauss_blur_2_rd7_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<112, 144>(result, dark_weights_normed_gauss_blur_2_rd7_res);
	hw_uint<16> dark_weights_normed_gauss_blur_2_rd8_res = dark_weights_normed_gauss_blur_2_rd8_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<128, 144>(result, dark_weights_normed_gauss_blur_2_rd8_res);
	return result;
}

// dark_weights_normed_gauss_ds_1_update_0_write
//	dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0
inline void dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_gauss_ds_1_update_0_write, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_res = dark_weights_normed_gauss_ds_1_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_write(dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write0_res, dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
}

// fused_level_1_update_0_read
//	fused_level_1_rd0
inline hw_uint<16> dark_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_1_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_1_rd0_res = fused_level_1_rd0_select(dark_weights_normed_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_1_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_cache {
	// RAM Box: {[0, 480], [0, 270]}
	// Capacity: 965
	// # of read delays: 484
	fifo<hw_uint<16>, 965> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(964 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 480], [0, 270]}
	// Capacity: 965
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 478> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 478> f11;
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

	inline hw_uint<16> peek_480() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_481() {
		return f6;
	}

	inline hw_uint<16> peek_482() {
		return f8;
	}

	inline hw_uint<16> peek_483() {
		return f10;
	}

	inline hw_uint<16> peek_961() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_962() {
		return f12;
	}

	inline hw_uint<16> peek_963() {
		return f14;
	}

	inline hw_uint<16> peek_964() {
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
    // cap: 1 reading from capacity: 478
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 478 reading from capacity: 1
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
    // cap: 1 reading from capacity: 478
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 478 reading from capacity: 1
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

struct dark_weights_normed_gauss_ds_2_cache {
  // # of banks: 2
  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0_cache dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0;
  dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9_cache dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9;
};



inline void dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
  dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0.push(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0);
  dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.push(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0);
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd0_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd0 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 30] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 29] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_964();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd1_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd1 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 30] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 29] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_483();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd2_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd2 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 30] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 29] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_2();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd3_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd3 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 30] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 29] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_963();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd4_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd4 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 30] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 29] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_482();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd5_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd5 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[1 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 30] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 29] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd6_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd6 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 30] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 29] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_962();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd7_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd7 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 30] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 29] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_481();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_gauss_blur_3_rd8_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_gauss_blur_3_rd8 read pattern: { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[2 + d0, 2 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 30] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 29] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> fused_level_2_rd0_select(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_2_rd0 read pattern: { fused_level_2_update_0[d0, d1] -> dark_weights_normed_gauss_ds_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Read schedule : { fused_level_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 50] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Write schedule: { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 29] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
  auto value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0 = dark_weights_normed_gauss_ds_2.dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_to_fused_level_2_rd0.peek(/* one reader or all rams */ (-479 + d0 == 0 && 268 - d1 >= 0) ? (963) : (268 - d1 >= 0 && 478 - d0 >= 0) ? (964) : (-269 + d1 == 0) ? ((961 - d0)) : 0);
  return value_dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0;
  return 0;
}

// # of bundles = 3
// dark_weights_normed_gauss_blur_3_update_0_read
//	dark_weights_normed_gauss_blur_3_rd0
//	dark_weights_normed_gauss_blur_3_rd1
//	dark_weights_normed_gauss_blur_3_rd2
//	dark_weights_normed_gauss_blur_3_rd3
//	dark_weights_normed_gauss_blur_3_rd4
//	dark_weights_normed_gauss_blur_3_rd5
//	dark_weights_normed_gauss_blur_3_rd6
//	dark_weights_normed_gauss_blur_3_rd7
//	dark_weights_normed_gauss_blur_3_rd8
inline hw_uint<144> dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_blur_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // dark_weights_normed_gauss_blur_3_rd0
    // dark_weights_normed_gauss_blur_3_rd1
    // dark_weights_normed_gauss_blur_3_rd2
    // dark_weights_normed_gauss_blur_3_rd3
    // dark_weights_normed_gauss_blur_3_rd4
    // dark_weights_normed_gauss_blur_3_rd5
    // dark_weights_normed_gauss_blur_3_rd6
    // dark_weights_normed_gauss_blur_3_rd7
    // dark_weights_normed_gauss_blur_3_rd8

	hw_uint<144> result;
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd0_res = dark_weights_normed_gauss_blur_3_rd0_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 144>(result, dark_weights_normed_gauss_blur_3_rd0_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd1_res = dark_weights_normed_gauss_blur_3_rd1_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<16, 144>(result, dark_weights_normed_gauss_blur_3_rd1_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd2_res = dark_weights_normed_gauss_blur_3_rd2_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<32, 144>(result, dark_weights_normed_gauss_blur_3_rd2_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd3_res = dark_weights_normed_gauss_blur_3_rd3_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<48, 144>(result, dark_weights_normed_gauss_blur_3_rd3_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd4_res = dark_weights_normed_gauss_blur_3_rd4_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<64, 144>(result, dark_weights_normed_gauss_blur_3_rd4_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd5_res = dark_weights_normed_gauss_blur_3_rd5_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<80, 144>(result, dark_weights_normed_gauss_blur_3_rd5_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd6_res = dark_weights_normed_gauss_blur_3_rd6_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<96, 144>(result, dark_weights_normed_gauss_blur_3_rd6_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd7_res = dark_weights_normed_gauss_blur_3_rd7_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<112, 144>(result, dark_weights_normed_gauss_blur_3_rd7_res);
	hw_uint<16> dark_weights_normed_gauss_blur_3_rd8_res = dark_weights_normed_gauss_blur_3_rd8_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<128, 144>(result, dark_weights_normed_gauss_blur_3_rd8_res);
	return result;
}

// dark_weights_normed_gauss_ds_2_update_0_write
//	dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0
inline void dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_gauss_ds_2_update_0_write, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_res = dark_weights_normed_gauss_ds_2_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_write(dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write0_res, dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
}

// fused_level_2_update_0_read
//	fused_level_2_rd0
inline hw_uint<16> dark_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_2_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_2_rd0_res = fused_level_2_rd0_select(dark_weights_normed_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_2_rd0_res);
	return result;
}

#include "hw_classes.h"

struct dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0_cache {
	// RAM Box: {[0, 239], [0, 134]}
	// Capacity: 1
	// # of read delays: 2
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

struct dark_weights_normed_gauss_ds_3_cache {
  // # of banks: 1
  dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0_cache dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0;
};



inline void dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_write(hw_uint<16>& dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1, int dynamic_address) {
  dark_weights_normed_gauss_ds_3.dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0.push(dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0);
}

inline hw_uint<16> fused_level_3_rd0_select(dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // fused_level_3_rd0 read pattern: { fused_level_3_update_0[d0, d1] -> dark_weights_normed_gauss_ds_3[d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Read schedule : { fused_level_3_update_0[d0, d1] -> [14 + 8d1, 7 + 4d0, 49] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Write schedule: { dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 7 + 4d0, 35] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  auto value_dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0 = dark_weights_normed_gauss_ds_3.dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_to_fused_level_3_rd0.peek(/* one reader or all rams */ 0);
  return value_dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// dark_weights_normed_gauss_ds_3_update_0_write
//	dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0
inline void dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write_bundle_write(hw_uint<16>& dark_weights_normed_gauss_ds_3_update_0_write, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_res = dark_weights_normed_gauss_ds_3_update_0_write.extract<0, 15>();
	dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_write(dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write0_res, dark_weights_normed_gauss_ds_3, d0, d1, dynamic_address);
}

// fused_level_3_update_0_read
//	fused_level_3_rd0
inline hw_uint<16> dark_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // fused_level_3_rd0

	hw_uint<16> result;
	hw_uint<16> fused_level_3_rd0_res = fused_level_3_rd0_select(dark_weights_normed_gauss_ds_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, fused_level_3_rd0_res);
	return result;
}

#include "hw_classes.h"

struct final_merged_0_final_merged_0_update_0_write0_to_ps1_rd0_cache {
	// RAM Box: {[0, 1918], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
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

struct final_merged_0_final_merged_0_update_0_write1_to_ps1_rd1_cache {
	// RAM Box: {[1, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
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

struct final_merged_0_cache {
  // # of banks: 2
  final_merged_0_final_merged_0_update_0_write0_to_ps1_rd0_cache final_merged_0_final_merged_0_update_0_write0_to_ps1_rd0;
  final_merged_0_final_merged_0_update_0_write1_to_ps1_rd1_cache final_merged_0_final_merged_0_update_0_write1_to_ps1_rd1;
};



inline void final_merged_0_final_merged_0_update_0_write0_write(hw_uint<16>& final_merged_0_final_merged_0_update_0_write0, final_merged_0_cache& final_merged_0, int d0, int d1, int dynamic_address) {
  final_merged_0.final_merged_0_final_merged_0_update_0_write0_to_ps1_rd0.push(final_merged_0_final_merged_0_update_0_write0);
}

inline void final_merged_0_final_merged_0_update_0_write1_write(hw_uint<16>& final_merged_0_final_merged_0_update_0_write1, final_merged_0_cache& final_merged_0, int d0, int d1, int dynamic_address) {
  final_merged_0.final_merged_0_final_merged_0_update_0_write1_to_ps1_rd1.push(final_merged_0_final_merged_0_update_0_write1);
}

inline hw_uint<16> ps1_rd0_select(final_merged_0_cache& final_merged_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // ps1_rd0 read pattern: { ps1_update_0[d0, d1] -> final_merged_0[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { ps1_update_0[d0, d1] -> [14 + d1, 7 + d0, 56] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { final_merged_0_update_0[d0, d1] -> [14 + d1, 7 + d0, 55] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_final_merged_0_final_merged_0_update_0_write0 = final_merged_0.final_merged_0_final_merged_0_update_0_write0_to_ps1_rd0.peek(/* one reader or all rams */ 0);
  return value_final_merged_0_final_merged_0_update_0_write0;
  return 0;
}

inline hw_uint<16> ps1_rd1_select(final_merged_0_cache& final_merged_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // ps1_rd1 read pattern: { ps1_update_0[d0, d1] -> final_merged_0[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { ps1_update_0[d0, d1] -> [14 + d1, 7 + d0, 56] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { final_merged_0_update_0[d0, d1] -> [14 + d1, 7 + d0, 55] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_final_merged_0_final_merged_0_update_0_write1 = final_merged_0.final_merged_0_final_merged_0_update_0_write1_to_ps1_rd1.peek(/* one reader or all rams */ 0);
  return value_final_merged_0_final_merged_0_update_0_write1;
  return 0;
}

// # of bundles = 2
// final_merged_0_update_0_write
//	final_merged_0_final_merged_0_update_0_write0
//	final_merged_0_final_merged_0_update_0_write1
inline void final_merged_0_final_merged_0_update_0_write_bundle_write(hw_uint<32>& final_merged_0_update_0_write, final_merged_0_cache& final_merged_0, int d0, int d1, int dynamic_address) {
	hw_uint<16> final_merged_0_final_merged_0_update_0_write0_res = final_merged_0_update_0_write.extract<0, 15>();
	final_merged_0_final_merged_0_update_0_write0_write(final_merged_0_final_merged_0_update_0_write0_res, final_merged_0, d0, d1, dynamic_address);
	hw_uint<16> final_merged_0_final_merged_0_update_0_write1_res = final_merged_0_update_0_write.extract<16, 31>();
	final_merged_0_final_merged_0_update_0_write1_write(final_merged_0_final_merged_0_update_0_write1_res, final_merged_0, d0, d1, dynamic_address);
}

// ps1_update_0_read
//	ps1_rd0
//	ps1_rd1
inline hw_uint<32> final_merged_0_ps1_update_0_read_bundle_read(final_merged_0_cache& final_merged_0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // ps1_rd0
    // ps1_rd1

	hw_uint<32> result;
	hw_uint<16> ps1_rd0_res = ps1_rd0_select(final_merged_0, d0, d1, dynamic_address);
	set_at<0, 32>(result, ps1_rd0_res);
	hw_uint<16> ps1_rd1_res = ps1_rd1_select(final_merged_0, d0, d1, dynamic_address);
	set_at<16, 32>(result, ps1_rd1_res);
	return result;
}

#include "hw_classes.h"

struct final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_cache {
	// RAM Box: {[0, 959], [0, 539]}
	// Capacity: 960
	// # of read delays: 960
	fifo<hw_uint<16>, 960> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(959 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd1_cache {
	// RAM Box: {[0, 959], [0, 539]}
	// Capacity: 960
	// # of read delays: 960
	fifo<hw_uint<16>, 960> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(959 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct final_merged_1_cache {
  // # of banks: 2
  final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0_cache final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0;
  final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd1_cache final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd1;
};



inline void final_merged_1_final_merged_1_update_0_write0_write(hw_uint<16>& final_merged_1_final_merged_1_update_0_write0, final_merged_1_cache& final_merged_1, int d0, int d1, int dynamic_address) {
  final_merged_1.final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0.push(final_merged_1_final_merged_1_update_0_write0);
  final_merged_1.final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd1.push(final_merged_1_final_merged_1_update_0_write0);
}

inline hw_uint<16> final_merged_0_rd0_select(final_merged_1_cache& final_merged_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_0_rd0 read pattern: { final_merged_0_update_0[d0, d1] -> final_merged_1[d0, o1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { final_merged_0_update_0[d0, d1] -> [14 + d1, 7 + d0, 55] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { final_merged_1_update_0[d0, d1] -> [14 + 2d1, 7 + d0, 54] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  auto value_final_merged_1_final_merged_1_update_0_write0 = final_merged_1.final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 958 - d0 >= 0) ? ((959 - d0)) : 0);
  return value_final_merged_1_final_merged_1_update_0_write0;
  return 0;
}

inline hw_uint<16> final_merged_0_rd1_select(final_merged_1_cache& final_merged_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_0_rd1 read pattern: { final_merged_0_update_0[d0, d1] -> final_merged_1[d0, o1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { final_merged_0_update_0[d0, d1] -> [14 + d1, 7 + d0, 55] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { final_merged_1_update_0[d0, d1] -> [14 + 2d1, 7 + d0, 54] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  auto value_final_merged_1_final_merged_1_update_0_write0 = final_merged_1.final_merged_1_final_merged_1_update_0_write0_to_final_merged_0_rd1.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 958 - d0 >= 0) ? ((959 - d0)) : 0);
  return value_final_merged_1_final_merged_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// final_merged_0_update_0_read
//	final_merged_0_rd0
//	final_merged_0_rd1
inline hw_uint<32> final_merged_1_final_merged_0_update_0_read_bundle_read(final_merged_1_cache& final_merged_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // final_merged_0_rd0
    // final_merged_0_rd1

	hw_uint<32> result;
	hw_uint<16> final_merged_0_rd0_res = final_merged_0_rd0_select(final_merged_1, d0, d1, dynamic_address);
	set_at<0, 32>(result, final_merged_0_rd0_res);
	hw_uint<16> final_merged_0_rd1_res = final_merged_0_rd1_select(final_merged_1, d0, d1, dynamic_address);
	set_at<16, 32>(result, final_merged_0_rd1_res);
	return result;
}

// final_merged_1_update_0_write
//	final_merged_1_final_merged_1_update_0_write0
inline void final_merged_1_final_merged_1_update_0_write_bundle_write(hw_uint<16>& final_merged_1_update_0_write, final_merged_1_cache& final_merged_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> final_merged_1_final_merged_1_update_0_write0_res = final_merged_1_update_0_write.extract<0, 15>();
	final_merged_1_final_merged_1_update_0_write0_write(final_merged_1_final_merged_1_update_0_write0_res, final_merged_1, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_cache {
	// RAM Box: {[0, 479], [0, 269]}
	// Capacity: 480
	// # of read delays: 481
	fifo<hw_uint<16>, 480> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(479 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct final_merged_2_cache {
  // # of banks: 1
  final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0_cache final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0;
};



inline void final_merged_2_final_merged_2_update_0_write0_write(hw_uint<16>& final_merged_2_final_merged_2_update_0_write0, final_merged_2_cache& final_merged_2, int d0, int d1, int dynamic_address) {
  final_merged_2.final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0.push(final_merged_2_final_merged_2_update_0_write0);
}

inline hw_uint<16> final_merged_1_rd0_select(final_merged_2_cache& final_merged_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_1_rd0 read pattern: { final_merged_1_update_0[d0, d1] -> final_merged_2[o0, o1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { final_merged_1_update_0[d0, d1] -> [14 + 2d1, 7 + d0, 54] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Write schedule: { final_merged_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 53] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  auto value_final_merged_2_final_merged_2_update_0_write0 = final_merged_2.final_merged_2_final_merged_2_update_0_write0_to_final_merged_1_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 957 - d0 >= 0) ? ((479 - floord(2*d0, 4))) : 0);
  return value_final_merged_2_final_merged_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// final_merged_1_update_0_read
//	final_merged_1_rd0
inline hw_uint<16> final_merged_2_final_merged_1_update_0_read_bundle_read(final_merged_2_cache& final_merged_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // final_merged_1_rd0

	hw_uint<16> result;
	hw_uint<16> final_merged_1_rd0_res = final_merged_1_rd0_select(final_merged_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, final_merged_1_rd0_res);
	return result;
}

// final_merged_2_update_0_write
//	final_merged_2_final_merged_2_update_0_write0
inline void final_merged_2_final_merged_2_update_0_write_bundle_write(hw_uint<16>& final_merged_2_update_0_write, final_merged_2_cache& final_merged_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> final_merged_2_final_merged_2_update_0_write0_res = final_merged_2_update_0_write.extract<0, 15>();
	final_merged_2_final_merged_2_update_0_write0_write(final_merged_2_final_merged_2_update_0_write0_res, final_merged_2, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct fused_level_0_fused_level_0_update_0_write0_to_final_merged_0_rd0_cache {
	// RAM Box: {[0, 1918], [0, 1079]}
	// Capacity: 11527
	// # of read delays: 11527
	fifo<hw_uint<16>, 11527> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(11526 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct fused_level_0_fused_level_0_update_0_write1_to_final_merged_0_rd1_cache {
	// RAM Box: {[1, 1919], [0, 1079]}
	// Capacity: 11527
	// # of read delays: 11527
	fifo<hw_uint<16>, 11527> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(11526 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct fused_level_0_cache {
  // # of banks: 2
  fused_level_0_fused_level_0_update_0_write0_to_final_merged_0_rd0_cache fused_level_0_fused_level_0_update_0_write0_to_final_merged_0_rd0;
  fused_level_0_fused_level_0_update_0_write1_to_final_merged_0_rd1_cache fused_level_0_fused_level_0_update_0_write1_to_final_merged_0_rd1;
};



inline void fused_level_0_fused_level_0_update_0_write0_write(hw_uint<16>& fused_level_0_fused_level_0_update_0_write0, fused_level_0_cache& fused_level_0, int d0, int d1, int dynamic_address) {
  fused_level_0.fused_level_0_fused_level_0_update_0_write0_to_final_merged_0_rd0.push(fused_level_0_fused_level_0_update_0_write0);
}

inline void fused_level_0_fused_level_0_update_0_write1_write(hw_uint<16>& fused_level_0_fused_level_0_update_0_write1, fused_level_0_cache& fused_level_0, int d0, int d1, int dynamic_address) {
  fused_level_0.fused_level_0_fused_level_0_update_0_write1_to_final_merged_0_rd1.push(fused_level_0_fused_level_0_update_0_write1);
}

inline hw_uint<16> final_merged_0_rd0_select(fused_level_0_cache& fused_level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_0_rd0 read pattern: { final_merged_0_update_0[d0, d1] -> fused_level_0[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { final_merged_0_update_0[d0, d1] -> [14 + d1, 7 + d0, 55] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 52] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_fused_level_0_fused_level_0_update_0_write0 = fused_level_0.fused_level_0_fused_level_0_update_0_write0_to_final_merged_0_rd0.peek(/* one reader or all rams */ (-1068 + d1 == 0 && -959 + d0 == 0) ? (10560) : (-959 + d0 == 0 && 1067 - d1 >= 0) ? (11520) : (-954 + d0 == 0 && 1067 - d1 >= 0) ? (11525) : (1067 - d1 >= 0 && 953 - d0 >= 0) ? (11526) : (-1079 + d1 == 0 && 958 - d0 >= 0) ? ((959 - d0)) : (-1068 + d1 == 0 && 958 - d0 >= 0) ? ((11519 - d0)) : (-955 + d0 >= 0 && 958 - d0 >= 0 && 1067 - d1 >= 0) ? ((12479 - d0)) : (-959 + d0 == 0 && -1069 + d1 >= 0 && 1078 - d1 >= 0) ? ((1035840 - 960 * d1)) : (1078 - d1 >= 0 && 958 - d0 >= 0 && -1069 + d1 >= 0) ? (((1036799 - d0) - 960 * d1)) : 0);
  return value_fused_level_0_fused_level_0_update_0_write0;
  return 0;
}

inline hw_uint<16> final_merged_0_rd1_select(fused_level_0_cache& fused_level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_0_rd1 read pattern: { final_merged_0_update_0[d0, d1] -> fused_level_0[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { final_merged_0_update_0[d0, d1] -> [14 + d1, 7 + d0, 55] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 52] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_fused_level_0_fused_level_0_update_0_write1 = fused_level_0.fused_level_0_fused_level_0_update_0_write1_to_final_merged_0_rd1.peek(/* one reader or all rams */ (-1068 + d1 == 0 && -959 + d0 == 0) ? (10560) : (-959 + d0 == 0 && 1067 - d1 >= 0) ? (11520) : (-954 + d0 == 0 && 1067 - d1 >= 0) ? (11525) : (1067 - d1 >= 0 && 953 - d0 >= 0) ? (11526) : (-1079 + d1 == 0 && 958 - d0 >= 0) ? ((959 - d0)) : (-1068 + d1 == 0 && 958 - d0 >= 0) ? ((11519 - d0)) : (-955 + d0 >= 0 && 958 - d0 >= 0 && 1067 - d1 >= 0) ? ((12479 - d0)) : (-959 + d0 == 0 && -1069 + d1 >= 0 && 1078 - d1 >= 0) ? ((1035840 - 960 * d1)) : (1078 - d1 >= 0 && 958 - d0 >= 0 && -1069 + d1 >= 0) ? (((1036799 - d0) - 960 * d1)) : 0);
  return value_fused_level_0_fused_level_0_update_0_write1;
  return 0;
}

// # of bundles = 2
// final_merged_0_update_0_read
//	final_merged_0_rd0
//	final_merged_0_rd1
inline hw_uint<32> fused_level_0_final_merged_0_update_0_read_bundle_read(fused_level_0_cache& fused_level_0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // final_merged_0_rd0
    // final_merged_0_rd1

	hw_uint<32> result;
	hw_uint<16> final_merged_0_rd0_res = final_merged_0_rd0_select(fused_level_0, d0, d1, dynamic_address);
	set_at<0, 32>(result, final_merged_0_rd0_res);
	hw_uint<16> final_merged_0_rd1_res = final_merged_0_rd1_select(fused_level_0, d0, d1, dynamic_address);
	set_at<16, 32>(result, final_merged_0_rd1_res);
	return result;
}

// fused_level_0_update_0_write
//	fused_level_0_fused_level_0_update_0_write0
//	fused_level_0_fused_level_0_update_0_write1
inline void fused_level_0_fused_level_0_update_0_write_bundle_write(hw_uint<32>& fused_level_0_update_0_write, fused_level_0_cache& fused_level_0, int d0, int d1, int dynamic_address) {
	hw_uint<16> fused_level_0_fused_level_0_update_0_write0_res = fused_level_0_update_0_write.extract<0, 15>();
	fused_level_0_fused_level_0_update_0_write0_write(fused_level_0_fused_level_0_update_0_write0_res, fused_level_0, d0, d1, dynamic_address);
	hw_uint<16> fused_level_0_fused_level_0_update_0_write1_res = fused_level_0_update_0_write.extract<16, 31>();
	fused_level_0_fused_level_0_update_0_write1_write(fused_level_0_fused_level_0_update_0_write1_res, fused_level_0, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0_cache {
	// RAM Box: {[0, 959], [0, 539]}
	// Capacity: 3845
	// # of read delays: 3845
	fifo<hw_uint<16>, 3845> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(3844 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct fused_level_1_cache {
  // # of banks: 1
  fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0_cache fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0;
};



inline void fused_level_1_fused_level_1_update_0_write0_write(hw_uint<16>& fused_level_1_fused_level_1_update_0_write0, fused_level_1_cache& fused_level_1, int d0, int d1, int dynamic_address) {
  fused_level_1.fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0.push(fused_level_1_fused_level_1_update_0_write0);
}

inline hw_uint<16> final_merged_1_rd0_select(fused_level_1_cache& fused_level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_1_rd0 read pattern: { final_merged_1_update_0[d0, d1] -> fused_level_1[d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Read schedule : { final_merged_1_update_0[d0, d1] -> [14 + 2d1, 7 + d0, 54] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  // Write schedule: { fused_level_1_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 51] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
  auto value_fused_level_1_fused_level_1_update_0_write0 = fused_level_1.fused_level_1_fused_level_1_update_0_write0_to_final_merged_1_rd0.peek(/* one reader or all rams */ (-536 + d1 == 0 && -959 + d0 == 0) ? (2880) : (-959 + d0 == 0 && 535 - d1 >= 0) ? (3840) : (-956 + d0 == 0 && 535 - d1 >= 0) ? (3843) : (535 - d1 >= 0 && 955 - d0 >= 0) ? (3844) : (-539 + d1 == 0 && 958 - d0 >= 0) ? ((959 - d0)) : (-536 + d1 == 0 && 958 - d0 >= 0) ? ((3839 - d0)) : (-957 + d0 >= 0 && 958 - d0 >= 0 && 535 - d1 >= 0) ? ((4799 - d0)) : (-959 + d0 == 0 && -537 + d1 >= 0 && 538 - d1 >= 0) ? ((517440 - 960 * d1)) : (538 - d1 >= 0 && 958 - d0 >= 0 && -537 + d1 >= 0) ? (((518399 - d0) - 960 * d1)) : 0);
  return value_fused_level_1_fused_level_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// final_merged_1_update_0_read
//	final_merged_1_rd0
inline hw_uint<16> fused_level_1_final_merged_1_update_0_read_bundle_read(fused_level_1_cache& fused_level_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // final_merged_1_rd0

	hw_uint<16> result;
	hw_uint<16> final_merged_1_rd0_res = final_merged_1_rd0_select(fused_level_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, final_merged_1_rd0_res);
	return result;
}

// fused_level_1_update_0_write
//	fused_level_1_fused_level_1_update_0_write0
inline void fused_level_1_fused_level_1_update_0_write_bundle_write(hw_uint<16>& fused_level_1_update_0_write, fused_level_1_cache& fused_level_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> fused_level_1_fused_level_1_update_0_write0_res = fused_level_1_update_0_write.extract<0, 15>();
	fused_level_1_fused_level_1_update_0_write0_write(fused_level_1_fused_level_1_update_0_write0_res, fused_level_1, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct fused_level_2_fused_level_2_update_0_write0_to_final_merged_2_rd0_cache {
	// RAM Box: {[0, 479], [0, 269]}
	// Capacity: 1
	// # of read delays: 2
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

struct fused_level_2_cache {
  // # of banks: 1
  fused_level_2_fused_level_2_update_0_write0_to_final_merged_2_rd0_cache fused_level_2_fused_level_2_update_0_write0_to_final_merged_2_rd0;
};



inline void fused_level_2_fused_level_2_update_0_write0_write(hw_uint<16>& fused_level_2_fused_level_2_update_0_write0, fused_level_2_cache& fused_level_2, int d0, int d1, int dynamic_address) {
  fused_level_2.fused_level_2_fused_level_2_update_0_write0_to_final_merged_2_rd0.push(fused_level_2_fused_level_2_update_0_write0);
}

inline hw_uint<16> final_merged_2_rd0_select(fused_level_2_cache& fused_level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_2_rd0 read pattern: { final_merged_2_update_0[d0, d1] -> fused_level_2[d0, d1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Read schedule : { final_merged_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 53] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Write schedule: { fused_level_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 50] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  auto value_fused_level_2_fused_level_2_update_0_write0 = fused_level_2.fused_level_2_fused_level_2_update_0_write0_to_final_merged_2_rd0.peek(/* one reader or all rams */ 0);
  return value_fused_level_2_fused_level_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// final_merged_2_update_0_read
//	final_merged_2_rd0
inline hw_uint<16> fused_level_2_final_merged_2_update_0_read_bundle_read(fused_level_2_cache& fused_level_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // final_merged_2_rd0

	hw_uint<16> result;
	hw_uint<16> final_merged_2_rd0_res = final_merged_2_rd0_select(fused_level_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, final_merged_2_rd0_res);
	return result;
}

// fused_level_2_update_0_write
//	fused_level_2_fused_level_2_update_0_write0
inline void fused_level_2_fused_level_2_update_0_write_bundle_write(hw_uint<16>& fused_level_2_update_0_write, fused_level_2_cache& fused_level_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> fused_level_2_fused_level_2_update_0_write0_res = fused_level_2_update_0_write.extract<0, 15>();
	fused_level_2_fused_level_2_update_0_write0_write(fused_level_2_fused_level_2_update_0_write0_res, fused_level_2, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0_cache {
	// RAM Box: {[0, 239], [0, 134]}
	// Capacity: 240
	// # of read delays: 241
	fifo<hw_uint<16>, 240> f;
	inline hw_uint<16> peek(const int offset) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.peek(239 - offset);
  }



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    return f.push(value);
  }

};

struct fused_level_3_cache {
  // # of banks: 1
  fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0_cache fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0;
};



inline void fused_level_3_fused_level_3_update_0_write0_write(hw_uint<16>& fused_level_3_fused_level_3_update_0_write0, fused_level_3_cache& fused_level_3, int d0, int d1, int dynamic_address) {
  fused_level_3.fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0.push(fused_level_3_fused_level_3_update_0_write0);
}

inline hw_uint<16> final_merged_2_rd0_select(fused_level_3_cache& fused_level_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // final_merged_2_rd0 read pattern: { final_merged_2_update_0[d0, d1] -> fused_level_3[o0, o1] : 0 <= d0 <= 479 and 0 <= d1 <= 269 and -1 + d0 <= 2o0 <= d0 and -1 + d1 <= 2o1 <= d1 }
  // Read schedule : { final_merged_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 53] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
  // Write schedule: { fused_level_3_update_0[d0, d1] -> [14 + 8d1, 7 + 4d0, 49] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  auto value_fused_level_3_fused_level_3_update_0_write0 = fused_level_3.fused_level_3_fused_level_3_update_0_write0_to_final_merged_2_rd0.peek(/* one reader or all rams */ ((-1 - d1) % 2 == 0 && 477 - d0 >= 0) ? ((239 - floord(2*d0, 4))) : 0);
  return value_fused_level_3_fused_level_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// final_merged_2_update_0_read
//	final_merged_2_rd0
inline hw_uint<16> fused_level_3_final_merged_2_update_0_read_bundle_read(fused_level_3_cache& fused_level_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // final_merged_2_rd0

	hw_uint<16> result;
	hw_uint<16> final_merged_2_rd0_res = final_merged_2_rd0_select(fused_level_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, final_merged_2_rd0_res);
	return result;
}

// fused_level_3_update_0_write
//	fused_level_3_fused_level_3_update_0_write0
inline void fused_level_3_fused_level_3_update_0_write_bundle_write(hw_uint<16>& fused_level_3_update_0_write, fused_level_3_cache& fused_level_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> fused_level_3_fused_level_3_update_0_write0_res = fused_level_3_update_0_write.extract<0, 15>();
	fused_level_3_fused_level_3_update_0_write0_write(fused_level_3_fused_level_3_update_0_write0_res, fused_level_3, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct in_in_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 1926], [0, 1086]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct in_in_update_0_write1_merged_banks_2_cache {
	// RAM Box: {[1, 1927], [0, 1086]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct in_cache {
  // # of banks: 2
  in_in_update_0_write0_merged_banks_2_cache in_in_update_0_write0_merged_banks_2;
  in_in_update_0_write1_merged_banks_2_cache in_in_update_0_write1_merged_banks_2;
};



inline void in_in_update_0_write0_write(hw_uint<16>& in_in_update_0_write0, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write0_merged_banks_2.push(in_in_update_0_write0);
}

inline void in_in_update_0_write1_write(hw_uint<16>& in_in_update_0_write1, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write1_merged_banks_2.push(in_in_update_0_write1);
}

inline hw_uint<16> bright_rd0_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_rd0 read pattern: { bright_update_0[d0, d1] -> in[2d0, d1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Read schedule : { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek_0();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_rd1_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_rd1 read pattern: { bright_update_0[d0, d1] -> in[1 + 2d0, d1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Read schedule : { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_2.peek_0();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_rd0_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_rd0 read pattern: { dark_update_0[d0, d1] -> in[2d0, d1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Read schedule : { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek_0();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_rd1_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_rd1 read pattern: { dark_update_0[d0, d1] -> in[1 + 2d0, d1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Read schedule : { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_2.peek_0();
  return value_in_in_update_0_write1;
  return 0;
}

// # of bundles = 3
// bright_update_0_read
//	bright_rd0
//	bright_rd1
inline hw_uint<32> in_bright_update_0_read_bundle_read(in_cache& in, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // bright_rd0
    // bright_rd1

	hw_uint<32> result;
	hw_uint<16> bright_rd0_res = bright_rd0_select(in, d0, d1, dynamic_address);
	set_at<0, 32>(result, bright_rd0_res);
	hw_uint<16> bright_rd1_res = bright_rd1_select(in, d0, d1, dynamic_address);
	set_at<16, 32>(result, bright_rd1_res);
	return result;
}

// dark_update_0_read
//	dark_rd0
//	dark_rd1
inline hw_uint<32> in_dark_update_0_read_bundle_read(in_cache& in, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // dark_rd0
    // dark_rd1

	hw_uint<32> result;
	hw_uint<16> dark_rd0_res = dark_rd0_select(in, d0, d1, dynamic_address);
	set_at<0, 32>(result, dark_rd0_res);
	hw_uint<16> dark_rd1_res = dark_rd1_select(in, d0, d1, dynamic_address);
	set_at<16, 32>(result, dark_rd1_res);
	return result;
}

// in_update_0_write
//	in_in_update_0_write0
//	in_in_update_0_write1
inline void in_in_update_0_write_bundle_write(hw_uint<32>& in_update_0_write, in_cache& in, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_in_update_0_write0_res = in_update_0_write.extract<0, 15>();
	in_in_update_0_write0_write(in_in_update_0_write0_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write1_res = in_update_0_write.extract<16, 31>();
	in_in_update_0_write1_write(in_in_update_0_write1_res, in, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct in_off_chip0_in_off_chip0_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 963], [0, 1086]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct in_off_chip0_cache {
  // # of banks: 1
  in_off_chip0_in_off_chip0_update_0_write0_merged_banks_2_cache in_off_chip0_in_off_chip0_update_0_write0_merged_banks_2;
};



inline void in_off_chip0_in_off_chip0_update_0_write0_write(hw_uint<16>& in_off_chip0_in_off_chip0_update_0_write0, in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
  in_off_chip0.in_off_chip0_in_off_chip0_update_0_write0_merged_banks_2.push(in_off_chip0_in_off_chip0_update_0_write0);
}

inline hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_rd0_select(in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_off_chip0_oc_in_off_chip1_oc_rd0 read pattern: { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> in_off_chip0[d0, d1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Read schedule : { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Write schedule: { in_off_chip0_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_in_off_chip0_in_off_chip0_update_0_write0 = in_off_chip0.in_off_chip0_in_off_chip0_update_0_write0_merged_banks_2.peek_0();
  return value_in_off_chip0_in_off_chip0_update_0_write0;
  return 0;
}

inline hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_rd1_select(in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_off_chip0_oc_in_off_chip1_oc_rd1 read pattern: { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> in_off_chip0[d0, d1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Read schedule : { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Write schedule: { in_off_chip0_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_in_off_chip0_in_off_chip0_update_0_write0 = in_off_chip0.in_off_chip0_in_off_chip0_update_0_write0_merged_banks_2.peek_0();
  return value_in_off_chip0_in_off_chip0_update_0_write0;
  return 0;
}

// # of bundles = 2
// in_off_chip0_oc_in_off_chip1_oc_update_0_read
//	in_off_chip0_oc_in_off_chip1_oc_rd0
//	in_off_chip0_oc_in_off_chip1_oc_rd1
inline hw_uint<32> in_off_chip0_in_off_chip0_oc_in_off_chip1_oc_update_0_read_bundle_read(in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // in_off_chip0_oc_in_off_chip1_oc_rd0
    // in_off_chip0_oc_in_off_chip1_oc_rd1

	hw_uint<32> result;
	hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_rd0_res = in_off_chip0_oc_in_off_chip1_oc_rd0_select(in_off_chip0, d0, d1, dynamic_address);
	set_at<0, 32>(result, in_off_chip0_oc_in_off_chip1_oc_rd0_res);
	hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_rd1_res = in_off_chip0_oc_in_off_chip1_oc_rd1_select(in_off_chip0, d0, d1, dynamic_address);
	set_at<16, 32>(result, in_off_chip0_oc_in_off_chip1_oc_rd1_res);
	return result;
}

// in_off_chip0_update_0_write
//	in_off_chip0_in_off_chip0_update_0_write0
inline void in_off_chip0_in_off_chip0_update_0_write_bundle_write(hw_uint<16>& in_off_chip0_update_0_write, in_off_chip0_cache& in_off_chip0, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_off_chip0_in_off_chip0_update_0_write0_res = in_off_chip0_update_0_write.extract<0, 15>();
	in_off_chip0_in_off_chip0_update_0_write0_write(in_off_chip0_in_off_chip0_update_0_write0_res, in_off_chip0, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0_to_in_rd0_cache {
	// RAM Box: {[0, 1926], [0, 1086]}
	// Capacity: 1
	// # of read delays: 2
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

struct in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1_to_in_rd1_cache {
	// RAM Box: {[1, 1927], [0, 1086]}
	// Capacity: 1
	// # of read delays: 2
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

struct in_off_chip0_oc_in_off_chip1_oc_cache {
  // # of banks: 2
  in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0_to_in_rd0_cache in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0_to_in_rd0;
  in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1_to_in_rd1_cache in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1_to_in_rd1;
};



inline void in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0_write(hw_uint<16>& in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0, in_off_chip0_oc_in_off_chip1_oc_cache& in_off_chip0_oc_in_off_chip1_oc, int d0, int d1, int dynamic_address) {
  in_off_chip0_oc_in_off_chip1_oc.in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0_to_in_rd0.push(in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0);
}

inline void in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1_write(hw_uint<16>& in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1, in_off_chip0_oc_in_off_chip1_oc_cache& in_off_chip0_oc_in_off_chip1_oc, int d0, int d1, int dynamic_address) {
  in_off_chip0_oc_in_off_chip1_oc.in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1_to_in_rd1.push(in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1);
}

inline hw_uint<16> in_rd0_select(in_off_chip0_oc_in_off_chip1_oc_cache& in_off_chip0_oc_in_off_chip1_oc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_rd0 read pattern: { in_update_0[d0, d1] -> in_off_chip0_oc_in_off_chip1_oc[2d0, d1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Read schedule : { in_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Write schedule: { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0 = in_off_chip0_oc_in_off_chip1_oc.in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0_to_in_rd0.peek(/* one reader or all rams */ 0);
  return value_in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0;
  return 0;
}

inline hw_uint<16> in_rd1_select(in_off_chip0_oc_in_off_chip1_oc_cache& in_off_chip0_oc_in_off_chip1_oc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_rd1 read pattern: { in_update_0[d0, d1] -> in_off_chip0_oc_in_off_chip1_oc[1 + 2d0, d1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Read schedule : { in_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Write schedule: { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1 = in_off_chip0_oc_in_off_chip1_oc.in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1_to_in_rd1.peek(/* one reader or all rams */ 0);
  return value_in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1;
  return 0;
}

// # of bundles = 2
// in_off_chip0_oc_in_off_chip1_oc_update_0_write
//	in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0
//	in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1
inline void in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write_bundle_write(hw_uint<32>& in_off_chip0_oc_in_off_chip1_oc_update_0_write, in_off_chip0_oc_in_off_chip1_oc_cache& in_off_chip0_oc_in_off_chip1_oc, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0_res = in_off_chip0_oc_in_off_chip1_oc_update_0_write.extract<0, 15>();
	in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0_write(in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write0_res, in_off_chip0_oc_in_off_chip1_oc, d0, d1, dynamic_address);
	hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1_res = in_off_chip0_oc_in_off_chip1_oc_update_0_write.extract<16, 31>();
	in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1_write(in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write1_res, in_off_chip0_oc_in_off_chip1_oc, d0, d1, dynamic_address);
}

// in_update_0_read
//	in_rd0
//	in_rd1
inline hw_uint<32> in_off_chip0_oc_in_off_chip1_oc_in_update_0_read_bundle_read(in_off_chip0_oc_in_off_chip1_oc_cache& in_off_chip0_oc_in_off_chip1_oc, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // in_rd0
    // in_rd1

	hw_uint<32> result;
	hw_uint<16> in_rd0_res = in_rd0_select(in_off_chip0_oc_in_off_chip1_oc, d0, d1, dynamic_address);
	set_at<0, 32>(result, in_rd0_res);
	hw_uint<16> in_rd1_res = in_rd1_select(in_off_chip0_oc_in_off_chip1_oc, d0, d1, dynamic_address);
	set_at<16, 32>(result, in_rd1_res);
	return result;
}

#include "hw_classes.h"

struct in_off_chip1_in_off_chip1_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 963], [0, 1086]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct in_off_chip1_cache {
  // # of banks: 1
  in_off_chip1_in_off_chip1_update_0_write0_merged_banks_2_cache in_off_chip1_in_off_chip1_update_0_write0_merged_banks_2;
};



inline void in_off_chip1_in_off_chip1_update_0_write0_write(hw_uint<16>& in_off_chip1_in_off_chip1_update_0_write0, in_off_chip1_cache& in_off_chip1, int d0, int d1, int dynamic_address) {
  in_off_chip1.in_off_chip1_in_off_chip1_update_0_write0_merged_banks_2.push(in_off_chip1_in_off_chip1_update_0_write0);
}

inline hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_rd0_select(in_off_chip1_cache& in_off_chip1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_off_chip0_oc_in_off_chip1_oc_rd0 read pattern: { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> in_off_chip1[d0, d1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Read schedule : { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Write schedule: { in_off_chip1_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_in_off_chip1_in_off_chip1_update_0_write0 = in_off_chip1.in_off_chip1_in_off_chip1_update_0_write0_merged_banks_2.peek_0();
  return value_in_off_chip1_in_off_chip1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_rd1_select(in_off_chip1_cache& in_off_chip1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_off_chip0_oc_in_off_chip1_oc_rd1 read pattern: { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> in_off_chip1[d0, d1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Read schedule : { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Write schedule: { in_off_chip1_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_in_off_chip1_in_off_chip1_update_0_write0 = in_off_chip1.in_off_chip1_in_off_chip1_update_0_write0_merged_banks_2.peek_0();
  return value_in_off_chip1_in_off_chip1_update_0_write0;
  return 0;
}

// # of bundles = 2
// in_off_chip0_oc_in_off_chip1_oc_update_0_read
//	in_off_chip0_oc_in_off_chip1_oc_rd0
//	in_off_chip0_oc_in_off_chip1_oc_rd1
inline hw_uint<32> in_off_chip1_in_off_chip0_oc_in_off_chip1_oc_update_0_read_bundle_read(in_off_chip1_cache& in_off_chip1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // in_off_chip0_oc_in_off_chip1_oc_rd0
    // in_off_chip0_oc_in_off_chip1_oc_rd1

	hw_uint<32> result;
	hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_rd0_res = in_off_chip0_oc_in_off_chip1_oc_rd0_select(in_off_chip1, d0, d1, dynamic_address);
	set_at<0, 32>(result, in_off_chip0_oc_in_off_chip1_oc_rd0_res);
	hw_uint<16> in_off_chip0_oc_in_off_chip1_oc_rd1_res = in_off_chip0_oc_in_off_chip1_oc_rd1_select(in_off_chip1, d0, d1, dynamic_address);
	set_at<16, 32>(result, in_off_chip0_oc_in_off_chip1_oc_rd1_res);
	return result;
}

// in_off_chip1_update_0_write
//	in_off_chip1_in_off_chip1_update_0_write0
inline void in_off_chip1_in_off_chip1_update_0_write_bundle_write(hw_uint<16>& in_off_chip1_update_0_write, in_off_chip1_cache& in_off_chip1, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_off_chip1_in_off_chip1_update_0_write0_res = in_off_chip1_update_0_write.extract<0, 15>();
	in_off_chip1_in_off_chip1_update_0_write0_write(in_off_chip1_in_off_chip1_update_0_write0_res, in_off_chip1, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct ps1_ps1_update_0_write0_to_ps10_rd0_cache {
	// RAM Box: {[0, 1918], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
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

struct ps1_ps1_update_0_write1_to_ps11_rd0_cache {
	// RAM Box: {[1, 1919], [0, 1079]}
	// Capacity: 1
	// # of read delays: 2
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

struct ps1_cache {
  // # of banks: 2
  ps1_ps1_update_0_write0_to_ps10_rd0_cache ps1_ps1_update_0_write0_to_ps10_rd0;
  ps1_ps1_update_0_write1_to_ps11_rd0_cache ps1_ps1_update_0_write1_to_ps11_rd0;
};



inline void ps1_ps1_update_0_write0_write(hw_uint<16>& ps1_ps1_update_0_write0, ps1_cache& ps1, int d0, int d1, int dynamic_address) {
  ps1.ps1_ps1_update_0_write0_to_ps10_rd0.push(ps1_ps1_update_0_write0);
}

inline void ps1_ps1_update_0_write1_write(hw_uint<16>& ps1_ps1_update_0_write1, ps1_cache& ps1, int d0, int d1, int dynamic_address) {
  ps1.ps1_ps1_update_0_write1_to_ps11_rd0.push(ps1_ps1_update_0_write1);
}

inline hw_uint<16> ps10_rd0_select(ps1_cache& ps1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // ps10_rd0 read pattern: { ps10_update_0[d0, d1] -> ps1[2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { ps10_update_0[d0, d1] -> [14 + d1, 7 + d0, 58] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { ps1_update_0[d0, d1] -> [14 + d1, 7 + d0, 56] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_ps1_ps1_update_0_write0 = ps1.ps1_ps1_update_0_write0_to_ps10_rd0.peek(/* one reader or all rams */ 0);
  return value_ps1_ps1_update_0_write0;
  return 0;
}

inline hw_uint<16> ps11_rd0_select(ps1_cache& ps1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // ps11_rd0 read pattern: { ps11_update_0[d0, d1] -> ps1[1 + 2d0, d1] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Read schedule : { ps11_update_0[d0, d1] -> [14 + d1, 7 + d0, 57] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  // Write schedule: { ps1_update_0[d0, d1] -> [14 + d1, 7 + d0, 56] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
  auto value_ps1_ps1_update_0_write1 = ps1.ps1_ps1_update_0_write1_to_ps11_rd0.peek(/* one reader or all rams */ 0);
  return value_ps1_ps1_update_0_write1;
  return 0;
}

// # of bundles = 3
// ps10_update_0_read
//	ps10_rd0
inline hw_uint<16> ps1_ps10_update_0_read_bundle_read(ps1_cache& ps1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // ps10_rd0

	hw_uint<16> result;
	hw_uint<16> ps10_rd0_res = ps10_rd0_select(ps1, d0, d1, dynamic_address);
	set_at<0, 16>(result, ps10_rd0_res);
	return result;
}

// ps11_update_0_read
//	ps11_rd0
inline hw_uint<16> ps1_ps11_update_0_read_bundle_read(ps1_cache& ps1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // ps11_rd0

	hw_uint<16> result;
	hw_uint<16> ps11_rd0_res = ps11_rd0_select(ps1, d0, d1, dynamic_address);
	set_at<0, 16>(result, ps11_rd0_res);
	return result;
}

// ps1_update_0_write
//	ps1_ps1_update_0_write0
//	ps1_ps1_update_0_write1
inline void ps1_ps1_update_0_write_bundle_write(hw_uint<32>& ps1_update_0_write, ps1_cache& ps1, int d0, int d1, int dynamic_address) {
	hw_uint<16> ps1_ps1_update_0_write0_res = ps1_update_0_write.extract<0, 15>();
	ps1_ps1_update_0_write0_write(ps1_ps1_update_0_write0_res, ps1, d0, d1, dynamic_address);
	hw_uint<16> ps1_ps1_update_0_write1_res = ps1_update_0_write.extract<16, 31>();
	ps1_ps1_update_0_write1_write(ps1_ps1_update_0_write1_res, ps1, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct weight_sums_weight_sums_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 1926], [0, 1086]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct weight_sums_weight_sums_update_0_write1_merged_banks_2_cache {
	// RAM Box: {[1, 1927], [0, 1086]}
	// Capacity: 1
	// # of read delays: 1
	hw_uint<16> f1;


	inline hw_uint<16> peek_0() {
		return f1;
	}



	inline void push(const hw_uint<16> value) {
    // cap: 1
    f1 = value;
	}

};

struct weight_sums_cache {
  // # of banks: 2
  weight_sums_weight_sums_update_0_write0_merged_banks_2_cache weight_sums_weight_sums_update_0_write0_merged_banks_2;
  weight_sums_weight_sums_update_0_write1_merged_banks_2_cache weight_sums_weight_sums_update_0_write1_merged_banks_2;
};



inline void weight_sums_weight_sums_update_0_write0_write(hw_uint<16>& weight_sums_weight_sums_update_0_write0, weight_sums_cache& weight_sums, int d0, int d1, int dynamic_address) {
  weight_sums.weight_sums_weight_sums_update_0_write0_merged_banks_2.push(weight_sums_weight_sums_update_0_write0);
}

inline void weight_sums_weight_sums_update_0_write1_write(hw_uint<16>& weight_sums_weight_sums_update_0_write1, weight_sums_cache& weight_sums, int d0, int d1, int dynamic_address) {
  weight_sums.weight_sums_weight_sums_update_0_write1_merged_banks_2.push(weight_sums_weight_sums_update_0_write1);
}

inline hw_uint<16> bright_weights_normed_rd0_select(weight_sums_cache& weight_sums, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_rd0 read pattern: { bright_weights_normed_update_0[d0, d1] -> weight_sums[2d0, d1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Read schedule : { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 13] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Write schedule: { weight_sums_update_0[d0, d1] -> [d1, d0, 10] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_weight_sums_weight_sums_update_0_write0 = weight_sums.weight_sums_weight_sums_update_0_write0_merged_banks_2.peek_0();
  return value_weight_sums_weight_sums_update_0_write0;
  return 0;
}

inline hw_uint<16> bright_weights_normed_rd1_select(weight_sums_cache& weight_sums, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // bright_weights_normed_rd1 read pattern: { bright_weights_normed_update_0[d0, d1] -> weight_sums[1 + 2d0, d1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Read schedule : { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 13] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Write schedule: { weight_sums_update_0[d0, d1] -> [d1, d0, 10] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_weight_sums_weight_sums_update_0_write1 = weight_sums.weight_sums_weight_sums_update_0_write1_merged_banks_2.peek_0();
  return value_weight_sums_weight_sums_update_0_write1;
  return 0;
}

inline hw_uint<16> dark_weights_normed_rd0_select(weight_sums_cache& weight_sums, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_rd0 read pattern: { dark_weights_normed_update_0[d0, d1] -> weight_sums[2d0, d1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Read schedule : { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 11] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Write schedule: { weight_sums_update_0[d0, d1] -> [d1, d0, 10] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_weight_sums_weight_sums_update_0_write0 = weight_sums.weight_sums_weight_sums_update_0_write0_merged_banks_2.peek_0();
  return value_weight_sums_weight_sums_update_0_write0;
  return 0;
}

inline hw_uint<16> dark_weights_normed_rd1_select(weight_sums_cache& weight_sums, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // dark_weights_normed_rd1 read pattern: { dark_weights_normed_update_0[d0, d1] -> weight_sums[1 + 2d0, d1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Read schedule : { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 11] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  // Write schedule: { weight_sums_update_0[d0, d1] -> [d1, d0, 10] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
  auto value_weight_sums_weight_sums_update_0_write1 = weight_sums.weight_sums_weight_sums_update_0_write1_merged_banks_2.peek_0();
  return value_weight_sums_weight_sums_update_0_write1;
  return 0;
}

// # of bundles = 3
// bright_weights_normed_update_0_read
//	bright_weights_normed_rd0
//	bright_weights_normed_rd1
inline hw_uint<32> weight_sums_bright_weights_normed_update_0_read_bundle_read(weight_sums_cache& weight_sums, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // bright_weights_normed_rd0
    // bright_weights_normed_rd1

	hw_uint<32> result;
	hw_uint<16> bright_weights_normed_rd0_res = bright_weights_normed_rd0_select(weight_sums, d0, d1, dynamic_address);
	set_at<0, 32>(result, bright_weights_normed_rd0_res);
	hw_uint<16> bright_weights_normed_rd1_res = bright_weights_normed_rd1_select(weight_sums, d0, d1, dynamic_address);
	set_at<16, 32>(result, bright_weights_normed_rd1_res);
	return result;
}

// dark_weights_normed_update_0_read
//	dark_weights_normed_rd0
//	dark_weights_normed_rd1
inline hw_uint<32> weight_sums_dark_weights_normed_update_0_read_bundle_read(weight_sums_cache& weight_sums, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // dark_weights_normed_rd0
    // dark_weights_normed_rd1

	hw_uint<32> result;
	hw_uint<16> dark_weights_normed_rd0_res = dark_weights_normed_rd0_select(weight_sums, d0, d1, dynamic_address);
	set_at<0, 32>(result, dark_weights_normed_rd0_res);
	hw_uint<16> dark_weights_normed_rd1_res = dark_weights_normed_rd1_select(weight_sums, d0, d1, dynamic_address);
	set_at<16, 32>(result, dark_weights_normed_rd1_res);
	return result;
}

// weight_sums_update_0_write
//	weight_sums_weight_sums_update_0_write0
//	weight_sums_weight_sums_update_0_write1
inline void weight_sums_weight_sums_update_0_write_bundle_write(hw_uint<32>& weight_sums_update_0_write, weight_sums_cache& weight_sums, int d0, int d1, int dynamic_address) {
	hw_uint<16> weight_sums_weight_sums_update_0_write0_res = weight_sums_update_0_write.extract<0, 15>();
	weight_sums_weight_sums_update_0_write0_write(weight_sums_weight_sums_update_0_write0_res, weight_sums, d0, d1, dynamic_address);
	hw_uint<16> weight_sums_weight_sums_update_0_write1_res = weight_sums_update_0_write.extract<16, 31>();
	weight_sums_weight_sums_update_0_write1_write(weight_sums_weight_sums_update_0_write1_res, weight_sums, d0, d1, dynamic_address);
}



// Operation logic
inline void dark_laplace_us_0_update_0(dark_gauss_ds_1_cache& dark_gauss_ds_1, dark_laplace_us_0_cache& dark_laplace_us_0, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_ds_1
	auto dark_gauss_ds_1_0_c__0_value = dark_gauss_ds_1_dark_laplace_us_0_update_0_read_bundle_read(dark_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_2(dark_gauss_ds_1_0_c__0_value);
	// Produce: dark_laplace_us_0
	dark_laplace_us_0_dark_laplace_us_0_update_0_write_bundle_write(/* arg names */compute_result, dark_laplace_us_0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_diff_2_update_0(dark_gauss_ds_2_cache& dark_gauss_ds_2, dark_laplace_us_2_cache& dark_laplace_us_2, dark_laplace_diff_2_cache& dark_laplace_diff_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_ds_2
	auto dark_gauss_ds_2_0_c__0_value = dark_gauss_ds_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_us_2
	auto dark_laplace_us_2_0_c__0_value = dark_laplace_us_2_dark_laplace_diff_2_update_0_read_bundle_read(dark_laplace_us_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(dark_gauss_ds_2_0_c__0_value, dark_laplace_us_2_0_c__0_value);
	// Produce: dark_laplace_diff_2
	dark_laplace_diff_2_dark_laplace_diff_2_update_0_write_bundle_write(/* arg names */compute_result, dark_laplace_diff_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_us_1_update_0(dark_gauss_ds_2_cache& dark_gauss_ds_2, dark_laplace_us_1_cache& dark_laplace_us_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_ds_2
	auto dark_gauss_ds_2_0_c__0_value = dark_gauss_ds_2_dark_laplace_us_1_update_0_read_bundle_read(dark_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_gauss_ds_2_0_c__0_value);
	// Produce: dark_laplace_us_1
	dark_laplace_us_1_dark_laplace_us_1_update_0_write_bundle_write(/* arg names */compute_result, dark_laplace_us_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_diff_1_update_0(dark_gauss_ds_1_cache& dark_gauss_ds_1, dark_laplace_us_1_cache& dark_laplace_us_1, dark_laplace_diff_1_cache& dark_laplace_diff_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_ds_1
	auto dark_gauss_ds_1_0_c__0_value = dark_gauss_ds_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_us_1
	auto dark_laplace_us_1_0_c__0_value = dark_laplace_us_1_dark_laplace_diff_1_update_0_read_bundle_read(dark_laplace_us_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(dark_gauss_ds_1_0_c__0_value, dark_laplace_us_1_0_c__0_value);
	// Produce: dark_laplace_diff_1
	dark_laplace_diff_1_dark_laplace_diff_1_update_0_write_bundle_write(/* arg names */compute_result, dark_laplace_diff_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_diff_0_update_0(dark_cache& dark, dark_laplace_us_0_cache& dark_laplace_us_0, dark_laplace_diff_0_cache& dark_laplace_diff_0, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark
	auto dark_0_c__0_value = dark_dark_laplace_diff_0_update_0_read_bundle_read(dark/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_us_0
	auto dark_laplace_us_0_0_c__0_value = dark_laplace_us_0_dark_laplace_diff_0_update_0_read_bundle_read(dark_laplace_us_0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_2(dark_0_c__0_value, dark_laplace_us_0_0_c__0_value);
	// Produce: dark_laplace_diff_0
	dark_laplace_diff_0_dark_laplace_diff_0_update_0_write_bundle_write(/* arg names */compute_result, dark_laplace_diff_0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_ds_2_update_0(bright_gauss_blur_2_cache& bright_gauss_blur_2, bright_gauss_ds_2_cache& bright_gauss_ds_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_blur_2
	auto bright_gauss_blur_2_0_c__0_value = bright_gauss_blur_2_bright_gauss_ds_2_update_0_read_bundle_read(bright_gauss_blur_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_gauss_blur_2_0_c__0_value);
	// Produce: bright_gauss_ds_2
	bright_gauss_ds_2_bright_gauss_ds_2_update_0_write_bundle_write(/* arg names */compute_result, bright_gauss_ds_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void ps11_update_0(ps1_cache& ps1, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */ps11, int d0, int d1) {
  // Dynamic address computation

	// Consume: ps1
	auto ps1_0_c__0_value = ps1_ps11_update_0_read_bundle_read(ps1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(ps1_0_c__0_value);
	// Produce: ps11
	ps11.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void ps10_update_0(ps1_cache& ps1, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */ps10, int d0, int d1) {
  // Dynamic address computation

	// Consume: ps1
	auto ps1_0_c__0_value = ps1_ps10_update_0_read_bundle_read(ps1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(ps1_0_c__0_value);
	// Produce: ps10
	ps10.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void ps1_update_0(final_merged_0_cache& final_merged_0, ps1_cache& ps1, int d0, int d1) {
  // Dynamic address computation

	// Consume: final_merged_0
	auto final_merged_0_0_c__0_value = final_merged_0_ps1_update_0_read_bundle_read(final_merged_0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_2(final_merged_0_0_c__0_value);
	// Produce: ps1
	ps1_ps1_update_0_write_bundle_write(/* arg names */compute_result, ps1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_blur_2_update_0(bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_weights_normed_gauss_ds_1
	auto bright_weights_normed_gauss_ds_1_0_c__0_value = bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_blur_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(bright_weights_normed_gauss_ds_1_0_c__0_value);
	// Produce: bright_weights_normed_gauss_blur_2
	bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_blur_2_update_0_write_bundle_write(/* arg names */compute_result, bright_weights_normed_gauss_blur_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_blur_3_update_0(bright_gauss_ds_2_cache& bright_gauss_ds_2, bright_gauss_blur_3_cache& bright_gauss_blur_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_ds_2
	auto bright_gauss_ds_2_0_c__0_value = bright_gauss_ds_2_bright_gauss_blur_3_update_0_read_bundle_read(bright_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(bright_gauss_ds_2_0_c__0_value);
	// Produce: bright_gauss_blur_3
	bright_gauss_blur_3_bright_gauss_blur_3_update_0_write_bundle_write(/* arg names */compute_result, bright_gauss_blur_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void final_merged_0_update_0(final_merged_1_cache& final_merged_1, fused_level_0_cache& fused_level_0, final_merged_0_cache& final_merged_0, int d0, int d1) {
  // Dynamic address computation

	// Consume: final_merged_1
	auto final_merged_1_0_c__0_value = final_merged_1_final_merged_0_update_0_read_bundle_read(final_merged_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: fused_level_0
	auto fused_level_0_0_c__0_value = fused_level_0_final_merged_0_update_0_read_bundle_read(fused_level_0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = add_unrolled_2(final_merged_1_0_c__0_value, fused_level_0_0_c__0_value);
	// Produce: final_merged_0
	final_merged_0_final_merged_0_update_0_write_bundle_write(/* arg names */compute_result, final_merged_0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_ds_2_update_0(dark_gauss_blur_2_cache& dark_gauss_blur_2, dark_gauss_ds_2_cache& dark_gauss_ds_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_blur_2
	auto dark_gauss_blur_2_0_c__0_value = dark_gauss_blur_2_dark_gauss_ds_2_update_0_read_bundle_read(dark_gauss_blur_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_gauss_blur_2_0_c__0_value);
	// Produce: dark_gauss_ds_2
	dark_gauss_ds_2_dark_gauss_ds_2_update_0_write_bundle_write(/* arg names */compute_result, dark_gauss_ds_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void final_merged_1_update_0(final_merged_2_cache& final_merged_2, fused_level_1_cache& fused_level_1, final_merged_1_cache& final_merged_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: final_merged_2
	auto final_merged_2_0_c__0_value = final_merged_2_final_merged_1_update_0_read_bundle_read(final_merged_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: fused_level_1
	auto fused_level_1_0_c__0_value = fused_level_1_final_merged_1_update_0_read_bundle_read(fused_level_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = add_unrolled_1(final_merged_2_0_c__0_value, fused_level_1_0_c__0_value);
	// Produce: final_merged_1
	final_merged_1_final_merged_1_update_0_write_bundle_write(/* arg names */compute_result, final_merged_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void final_merged_2_update_0(fused_level_3_cache& fused_level_3, fused_level_2_cache& fused_level_2, final_merged_2_cache& final_merged_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: fused_level_3
	auto fused_level_3_0_c__0_value = fused_level_3_final_merged_2_update_0_read_bundle_read(fused_level_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: fused_level_2
	auto fused_level_2_0_c__0_value = fused_level_2_final_merged_2_update_0_read_bundle_read(fused_level_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = add_unrolled_1(fused_level_3_0_c__0_value, fused_level_2_0_c__0_value);
	// Produce: final_merged_2
	final_merged_2_final_merged_2_update_0_write_bundle_write(/* arg names */compute_result, final_merged_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_ds_1_update_0(bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_weights_normed_gauss_blur_1
	auto bright_weights_normed_gauss_blur_1_0_c__0_value = bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_ds_1_update_0_read_bundle_read(bright_weights_normed_gauss_blur_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_weights_normed_gauss_blur_1_0_c__0_value);
	// Produce: bright_weights_normed_gauss_ds_1
	bright_weights_normed_gauss_ds_1_bright_weights_normed_gauss_ds_1_update_0_write_bundle_write(/* arg names */compute_result, bright_weights_normed_gauss_ds_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_blur_3_update_0(dark_gauss_ds_2_cache& dark_gauss_ds_2, dark_gauss_blur_3_cache& dark_gauss_blur_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_ds_2
	auto dark_gauss_ds_2_0_c__0_value = dark_gauss_ds_2_dark_gauss_blur_3_update_0_read_bundle_read(dark_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(dark_gauss_ds_2_0_c__0_value);
	// Produce: dark_gauss_blur_3
	dark_gauss_blur_3_dark_gauss_blur_3_update_0_write_bundle_write(/* arg names */compute_result, dark_gauss_blur_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void fused_level_1_update_0(bright_laplace_diff_1_cache& bright_laplace_diff_1, dark_laplace_diff_1_cache& dark_laplace_diff_1, bright_weights_normed_gauss_ds_1_cache& bright_weights_normed_gauss_ds_1, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, fused_level_1_cache& fused_level_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_laplace_diff_1
	auto bright_laplace_diff_1_0_c__0_value = bright_laplace_diff_1_fused_level_1_update_0_read_bundle_read(bright_laplace_diff_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_diff_1
	auto dark_laplace_diff_1_0_c__0_value = dark_laplace_diff_1_fused_level_1_update_0_read_bundle_read(dark_laplace_diff_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights_normed_gauss_ds_1
	auto bright_weights_normed_gauss_ds_1_0_c__0_value = bright_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(bright_weights_normed_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights_normed_gauss_ds_1
	auto dark_weights_normed_gauss_ds_1_0_c__0_value = dark_weights_normed_gauss_ds_1_fused_level_1_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = merge_exposures_unrolled_1(bright_laplace_diff_1_0_c__0_value, dark_laplace_diff_1_0_c__0_value, bright_weights_normed_gauss_ds_1_0_c__0_value, dark_weights_normed_gauss_ds_1_0_c__0_value);
	// Produce: fused_level_1
	fused_level_1_fused_level_1_update_0_write_bundle_write(/* arg names */compute_result, fused_level_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void fused_level_2_update_0(bright_laplace_diff_2_cache& bright_laplace_diff_2, dark_laplace_diff_2_cache& dark_laplace_diff_2, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, fused_level_2_cache& fused_level_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_laplace_diff_2
	auto bright_laplace_diff_2_0_c__0_value = bright_laplace_diff_2_fused_level_2_update_0_read_bundle_read(bright_laplace_diff_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_diff_2
	auto dark_laplace_diff_2_0_c__0_value = dark_laplace_diff_2_fused_level_2_update_0_read_bundle_read(dark_laplace_diff_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights_normed_gauss_ds_2
	auto bright_weights_normed_gauss_ds_2_0_c__0_value = bright_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights_normed_gauss_ds_2
	auto dark_weights_normed_gauss_ds_2_0_c__0_value = dark_weights_normed_gauss_ds_2_fused_level_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = merge_exposures_unrolled_1(bright_laplace_diff_2_0_c__0_value, dark_laplace_diff_2_0_c__0_value, bright_weights_normed_gauss_ds_2_0_c__0_value, dark_weights_normed_gauss_ds_2_0_c__0_value);
	// Produce: fused_level_2
	fused_level_2_fused_level_2_update_0_write_bundle_write(/* arg names */compute_result, fused_level_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void fused_level_0_update_0(bright_laplace_diff_0_cache& bright_laplace_diff_0, dark_laplace_diff_0_cache& dark_laplace_diff_0, bright_weights_normed_cache& bright_weights_normed, dark_weights_normed_cache& dark_weights_normed, fused_level_0_cache& fused_level_0, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_laplace_diff_0
	auto bright_laplace_diff_0_0_c__0_value = bright_laplace_diff_0_fused_level_0_update_0_read_bundle_read(bright_laplace_diff_0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_laplace_diff_0
	auto dark_laplace_diff_0_0_c__0_value = dark_laplace_diff_0_fused_level_0_update_0_read_bundle_read(dark_laplace_diff_0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights_normed
	auto bright_weights_normed_0_c__0_value = bright_weights_normed_fused_level_0_update_0_read_bundle_read(bright_weights_normed/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights_normed
	auto dark_weights_normed_0_c__0_value = dark_weights_normed_fused_level_0_update_0_read_bundle_read(dark_weights_normed/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = merge_exposures_unrolled_2(bright_laplace_diff_0_0_c__0_value, dark_laplace_diff_0_0_c__0_value, bright_weights_normed_0_c__0_value, dark_weights_normed_0_c__0_value);
	// Produce: fused_level_0
	fused_level_0_fused_level_0_update_0_write_bundle_write(/* arg names */compute_result, fused_level_0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_diff_0_update_0(bright_cache& bright, bright_laplace_us_0_cache& bright_laplace_us_0, bright_laplace_diff_0_cache& bright_laplace_diff_0, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright
	auto bright_0_c__0_value = bright_bright_laplace_diff_0_update_0_read_bundle_read(bright/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_laplace_us_0
	auto bright_laplace_us_0_0_c__0_value = bright_laplace_us_0_bright_laplace_diff_0_update_0_read_bundle_read(bright_laplace_us_0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_2(bright_0_c__0_value, bright_laplace_us_0_0_c__0_value);
	// Produce: bright_laplace_diff_0
	bright_laplace_diff_0_bright_laplace_diff_0_update_0_write_bundle_write(/* arg names */compute_result, bright_laplace_diff_0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void fused_level_3_update_0(bright_gauss_ds_3_cache& bright_gauss_ds_3, dark_gauss_ds_3_cache& dark_gauss_ds_3, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, fused_level_3_cache& fused_level_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_ds_3
	auto bright_gauss_ds_3_0_c__0_value = bright_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_gauss_ds_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_gauss_ds_3
	auto dark_gauss_ds_3_0_c__0_value = dark_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_gauss_ds_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights_normed_gauss_ds_3
	auto bright_weights_normed_gauss_ds_3_0_c__0_value = bright_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: dark_weights_normed_gauss_ds_3
	auto dark_weights_normed_gauss_ds_3_0_c__0_value = dark_weights_normed_gauss_ds_3_fused_level_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = merge_exposures_unrolled_1(bright_gauss_ds_3_0_c__0_value, dark_gauss_ds_3_0_c__0_value, bright_weights_normed_gauss_ds_3_0_c__0_value, dark_weights_normed_gauss_ds_3_0_c__0_value);
	// Produce: fused_level_3
	fused_level_3_fused_level_3_update_0_write_bundle_write(/* arg names */compute_result, fused_level_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_ds_2_update_0(dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_weights_normed_gauss_blur_2
	auto dark_weights_normed_gauss_blur_2_0_c__0_value = dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_ds_2_update_0_read_bundle_read(dark_weights_normed_gauss_blur_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_weights_normed_gauss_blur_2_0_c__0_value);
	// Produce: dark_weights_normed_gauss_ds_2
	dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_ds_2_update_0_write_bundle_write(/* arg names */compute_result, dark_weights_normed_gauss_ds_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_blur_3_update_0(dark_weights_normed_gauss_ds_2_cache& dark_weights_normed_gauss_ds_2, dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_weights_normed_gauss_ds_2
	auto dark_weights_normed_gauss_ds_2_0_c__0_value = dark_weights_normed_gauss_ds_2_dark_weights_normed_gauss_blur_3_update_0_read_bundle_read(dark_weights_normed_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(dark_weights_normed_gauss_ds_2_0_c__0_value);
	// Produce: dark_weights_normed_gauss_blur_3
	dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_blur_3_update_0_write_bundle_write(/* arg names */compute_result, dark_weights_normed_gauss_blur_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_ds_3_update_0(dark_gauss_blur_3_cache& dark_gauss_blur_3, dark_gauss_ds_3_cache& dark_gauss_ds_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_blur_3
	auto dark_gauss_blur_3_0_c__0_value = dark_gauss_blur_3_dark_gauss_ds_3_update_0_read_bundle_read(dark_gauss_blur_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_gauss_blur_3_0_c__0_value);
	// Produce: dark_gauss_ds_3
	dark_gauss_ds_3_dark_gauss_ds_3_update_0_write_bundle_write(/* arg names */compute_result, dark_gauss_ds_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_ds_2_update_0(bright_weights_normed_gauss_blur_2_cache& bright_weights_normed_gauss_blur_2, bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_weights_normed_gauss_blur_2
	auto bright_weights_normed_gauss_blur_2_0_c__0_value = bright_weights_normed_gauss_blur_2_bright_weights_normed_gauss_ds_2_update_0_read_bundle_read(bright_weights_normed_gauss_blur_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_weights_normed_gauss_blur_2_0_c__0_value);
	// Produce: bright_weights_normed_gauss_ds_2
	bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_ds_2_update_0_write_bundle_write(/* arg names */compute_result, bright_weights_normed_gauss_ds_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_blur_3_update_0(bright_weights_normed_gauss_ds_2_cache& bright_weights_normed_gauss_ds_2, bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_weights_normed_gauss_ds_2
	auto bright_weights_normed_gauss_ds_2_0_c__0_value = bright_weights_normed_gauss_ds_2_bright_weights_normed_gauss_blur_3_update_0_read_bundle_read(bright_weights_normed_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(bright_weights_normed_gauss_ds_2_0_c__0_value);
	// Produce: bright_weights_normed_gauss_blur_3
	bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_blur_3_update_0_write_bundle_write(/* arg names */compute_result, bright_weights_normed_gauss_blur_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_ds_3_update_0(bright_gauss_blur_3_cache& bright_gauss_blur_3, bright_gauss_ds_3_cache& bright_gauss_ds_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_blur_3
	auto bright_gauss_blur_3_0_c__0_value = bright_gauss_blur_3_bright_gauss_ds_3_update_0_read_bundle_read(bright_gauss_blur_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_gauss_blur_3_0_c__0_value);
	// Produce: bright_gauss_ds_3
	bright_gauss_ds_3_bright_gauss_ds_3_update_0_write_bundle_write(/* arg names */compute_result, bright_gauss_ds_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_ds_3_update_0(dark_weights_normed_gauss_blur_3_cache& dark_weights_normed_gauss_blur_3, dark_weights_normed_gauss_ds_3_cache& dark_weights_normed_gauss_ds_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_weights_normed_gauss_blur_3
	auto dark_weights_normed_gauss_blur_3_0_c__0_value = dark_weights_normed_gauss_blur_3_dark_weights_normed_gauss_ds_3_update_0_read_bundle_read(dark_weights_normed_gauss_blur_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_weights_normed_gauss_blur_3_0_c__0_value);
	// Produce: dark_weights_normed_gauss_ds_3
	dark_weights_normed_gauss_ds_3_dark_weights_normed_gauss_ds_3_update_0_write_bundle_write(/* arg names */compute_result, dark_weights_normed_gauss_ds_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_laplace_us_2_update_0(dark_gauss_ds_3_cache& dark_gauss_ds_3, dark_laplace_us_2_cache& dark_laplace_us_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_ds_3
	auto dark_gauss_ds_3_0_c__0_value = dark_gauss_ds_3_dark_laplace_us_2_update_0_read_bundle_read(dark_gauss_ds_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_gauss_ds_3_0_c__0_value);
	// Produce: dark_laplace_us_2
	dark_laplace_us_2_dark_laplace_us_2_update_0_write_bundle_write(/* arg names */compute_result, dark_laplace_us_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_ds_3_update_0(bright_weights_normed_gauss_blur_3_cache& bright_weights_normed_gauss_blur_3, bright_weights_normed_gauss_ds_3_cache& bright_weights_normed_gauss_ds_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_weights_normed_gauss_blur_3
	auto bright_weights_normed_gauss_blur_3_0_c__0_value = bright_weights_normed_gauss_blur_3_bright_weights_normed_gauss_ds_3_update_0_read_bundle_read(bright_weights_normed_gauss_blur_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_weights_normed_gauss_blur_3_0_c__0_value);
	// Produce: bright_weights_normed_gauss_ds_3
	bright_weights_normed_gauss_ds_3_bright_weights_normed_gauss_ds_3_update_0_write_bundle_write(/* arg names */compute_result, bright_weights_normed_gauss_ds_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_us_2_update_0(bright_gauss_ds_3_cache& bright_gauss_ds_3, bright_laplace_us_2_cache& bright_laplace_us_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_ds_3
	auto bright_gauss_ds_3_0_c__0_value = bright_gauss_ds_3_bright_laplace_us_2_update_0_read_bundle_read(bright_gauss_ds_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_gauss_ds_3_0_c__0_value);
	// Produce: bright_laplace_us_2
	bright_laplace_us_2_bright_laplace_us_2_update_0_write_bundle_write(/* arg names */compute_result, bright_laplace_us_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_us_1_update_0(bright_gauss_ds_2_cache& bright_gauss_ds_2, bright_laplace_us_1_cache& bright_laplace_us_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_ds_2
	auto bright_gauss_ds_2_0_c__0_value = bright_gauss_ds_2_bright_laplace_us_1_update_0_read_bundle_read(bright_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_gauss_ds_2_0_c__0_value);
	// Produce: bright_laplace_us_1
	bright_laplace_us_1_bright_laplace_us_1_update_0_write_bundle_write(/* arg names */compute_result, bright_laplace_us_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_us_0_update_0(bright_gauss_ds_1_cache& bright_gauss_ds_1, bright_laplace_us_0_cache& bright_laplace_us_0, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_ds_1
	auto bright_gauss_ds_1_0_c__0_value = bright_gauss_ds_1_bright_laplace_us_0_update_0_read_bundle_read(bright_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_2(bright_gauss_ds_1_0_c__0_value);
	// Produce: bright_laplace_us_0
	bright_laplace_us_0_bright_laplace_us_0_update_0_write_bundle_write(/* arg names */compute_result, bright_laplace_us_0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_diff_2_update_0(bright_gauss_ds_2_cache& bright_gauss_ds_2, bright_laplace_us_2_cache& bright_laplace_us_2, bright_laplace_diff_2_cache& bright_laplace_diff_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_ds_2
	auto bright_gauss_ds_2_0_c__0_value = bright_gauss_ds_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_laplace_us_2
	auto bright_laplace_us_2_0_c__0_value = bright_laplace_us_2_bright_laplace_diff_2_update_0_read_bundle_read(bright_laplace_us_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(bright_gauss_ds_2_0_c__0_value, bright_laplace_us_2_0_c__0_value);
	// Produce: bright_laplace_diff_2
	bright_laplace_diff_2_bright_laplace_diff_2_update_0_write_bundle_write(/* arg names */compute_result, bright_laplace_diff_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_laplace_diff_1_update_0(bright_gauss_ds_1_cache& bright_gauss_ds_1, bright_laplace_us_1_cache& bright_laplace_us_1, bright_laplace_diff_1_cache& bright_laplace_diff_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_ds_1
	auto bright_gauss_ds_1_0_c__0_value = bright_gauss_ds_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_laplace_us_1
	auto bright_laplace_us_1_0_c__0_value = bright_laplace_us_1_bright_laplace_diff_1_update_0_read_bundle_read(bright_laplace_us_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = diff_unrolled_1(bright_gauss_ds_1_0_c__0_value, bright_laplace_us_1_0_c__0_value);
	// Produce: bright_laplace_diff_1
	bright_laplace_diff_1_bright_laplace_diff_1_update_0_write_bundle_write(/* arg names */compute_result, bright_laplace_diff_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_off_chip0_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in_off_chip0_oc, in_off_chip0_cache& in_off_chip0, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_off_chip0_oc
	auto in_off_chip0_oc_0_c__0_value = in_off_chip0_oc.read();
	auto compute_result = id_unrolled_1(in_off_chip0_oc_0_c__0_value);
	// Produce: in_off_chip0
	in_off_chip0_in_off_chip0_update_0_write_bundle_write(/* arg names */compute_result, in_off_chip0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_off_chip1_update_0(HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */in_off_chip1_oc, in_off_chip1_cache& in_off_chip1, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_off_chip1_oc
	auto in_off_chip1_oc_0_c__0_value = in_off_chip1_oc.read();
	auto compute_result = id_unrolled_1(in_off_chip1_oc_0_c__0_value);
	// Produce: in_off_chip1
	in_off_chip1_in_off_chip1_update_0_write_bundle_write(/* arg names */compute_result, in_off_chip1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_off_chip0_oc_in_off_chip1_oc_update_0(in_off_chip0_cache& in_off_chip0, in_off_chip1_cache& in_off_chip1, in_off_chip0_oc_in_off_chip1_oc_cache& in_off_chip0_oc_in_off_chip1_oc, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_off_chip0
	auto in_off_chip0_0_c__0_value = in_off_chip0_in_off_chip0_oc_in_off_chip1_oc_update_0_read_bundle_read(in_off_chip0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: in_off_chip1
	auto in_off_chip1_0_c__0_value = in_off_chip1_in_off_chip0_oc_in_off_chip1_oc_update_0_read_bundle_read(in_off_chip1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = interleave_unrolled_2(in_off_chip0_0_c__0_value, in_off_chip1_0_c__0_value, d0);
	// Produce: in_off_chip0_oc_in_off_chip1_oc
	in_off_chip0_oc_in_off_chip1_oc_in_off_chip0_oc_in_off_chip1_oc_update_0_write_bundle_write(/* arg names */compute_result, in_off_chip0_oc_in_off_chip1_oc, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_update_0(in_off_chip0_oc_in_off_chip1_oc_cache& in_off_chip0_oc_in_off_chip1_oc, in_cache& in, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_off_chip0_oc_in_off_chip1_oc
	auto in_off_chip0_oc_in_off_chip1_oc_0_c__0_value = in_off_chip0_oc_in_off_chip1_oc_in_update_0_read_bundle_read(in_off_chip0_oc_in_off_chip1_oc/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_2(in_off_chip0_oc_in_off_chip1_oc_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(/* arg names */compute_result, in, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_update_0(in_cache& in, dark_cache& dark, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_dark_update_0_read_bundle_read(in/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = scale_exposure_unrolled_2(in_0_c__0_value);
	// Produce: dark
	dark_dark_update_0_write_bundle_write(/* arg names */compute_result, dark, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_update_0(in_cache& in, bright_cache& bright, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_bright_update_0_read_bundle_read(in/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_2(in_0_c__0_value);
	// Produce: bright
	bright_bright_update_0_write_bundle_write(/* arg names */compute_result, bright, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_update_0(dark_cache& dark, dark_weights_cache& dark_weights, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark
	auto dark_0_c__0_value = dark_dark_weights_update_0_read_bundle_read(dark/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = exposure_weight_unrolled_2(dark_0_c__0_value);
	// Produce: dark_weights
	dark_weights_dark_weights_update_0_write_bundle_write(/* arg names */compute_result, dark_weights, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_update_0(bright_cache& bright, bright_weights_cache& bright_weights, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright
	auto bright_0_c__0_value = bright_bright_weights_update_0_read_bundle_read(bright/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = exposure_weight_unrolled_2(bright_0_c__0_value);
	// Produce: bright_weights
	bright_weights_bright_weights_update_0_write_bundle_write(/* arg names */compute_result, bright_weights, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void weight_sums_update_0(dark_weights_cache& dark_weights, bright_weights_cache& bright_weights, weight_sums_cache& weight_sums, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_weights
	auto dark_weights_0_c__0_value = dark_weights_weight_sums_update_0_read_bundle_read(dark_weights/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: bright_weights
	auto bright_weights_0_c__0_value = bright_weights_weight_sums_update_0_read_bundle_read(bright_weights/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = add_unrolled_2(dark_weights_0_c__0_value, bright_weights_0_c__0_value);
	// Produce: weight_sums
	weight_sums_weight_sums_update_0_write_bundle_write(/* arg names */compute_result, weight_sums, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_update_0(dark_weights_cache& dark_weights, weight_sums_cache& weight_sums, dark_weights_normed_cache& dark_weights_normed, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_weights
	auto dark_weights_0_c__0_value = dark_weights_dark_weights_normed_update_0_read_bundle_read(dark_weights/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: weight_sums
	auto weight_sums_0_c__0_value = weight_sums_dark_weights_normed_update_0_read_bundle_read(weight_sums/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = f_divide_unrolled_2(dark_weights_0_c__0_value, weight_sums_0_c__0_value);
	// Produce: dark_weights_normed
	dark_weights_normed_dark_weights_normed_update_0_write_bundle_write(/* arg names */compute_result, dark_weights_normed, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_blur_1_update_0(dark_cache& dark, dark_gauss_blur_1_cache& dark_gauss_blur_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark
	auto dark_0_c__0_value = dark_dark_gauss_blur_1_update_0_read_bundle_read(dark/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_2(dark_0_c__0_value);
	// Produce: dark_gauss_blur_1
	dark_gauss_blur_1_dark_gauss_blur_1_update_0_write_bundle_write(/* arg names */compute_result, dark_gauss_blur_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_update_0(bright_weights_cache& bright_weights, weight_sums_cache& weight_sums, bright_weights_normed_cache& bright_weights_normed, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_weights
	auto bright_weights_0_c__0_value = bright_weights_bright_weights_normed_update_0_read_bundle_read(bright_weights/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: weight_sums
	auto weight_sums_0_c__0_value = weight_sums_bright_weights_normed_update_0_read_bundle_read(weight_sums/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = f_divide_unrolled_2(bright_weights_0_c__0_value, weight_sums_0_c__0_value);
	// Produce: bright_weights_normed
	bright_weights_normed_bright_weights_normed_update_0_write_bundle_write(/* arg names */compute_result, bright_weights_normed, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_blur_1_update_0(bright_cache& bright, bright_gauss_blur_1_cache& bright_gauss_blur_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright
	auto bright_0_c__0_value = bright_bright_gauss_blur_1_update_0_read_bundle_read(bright/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_2(bright_0_c__0_value);
	// Produce: bright_gauss_blur_1
	bright_gauss_blur_1_bright_gauss_blur_1_update_0_write_bundle_write(/* arg names */compute_result, bright_gauss_blur_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_blur_1_update_0(dark_weights_normed_cache& dark_weights_normed, dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_weights_normed
	auto dark_weights_normed_0_c__0_value = dark_weights_normed_dark_weights_normed_gauss_blur_1_update_0_read_bundle_read(dark_weights_normed/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_2(dark_weights_normed_0_c__0_value);
	// Produce: dark_weights_normed_gauss_blur_1
	dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_blur_1_update_0_write_bundle_write(/* arg names */compute_result, dark_weights_normed_gauss_blur_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_ds_1_update_0(dark_gauss_blur_1_cache& dark_gauss_blur_1, dark_gauss_ds_1_cache& dark_gauss_ds_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_blur_1
	auto dark_gauss_blur_1_0_c__0_value = dark_gauss_blur_1_dark_gauss_ds_1_update_0_read_bundle_read(dark_gauss_blur_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_gauss_blur_1_0_c__0_value);
	// Produce: dark_gauss_ds_1
	dark_gauss_ds_1_dark_gauss_ds_1_update_0_write_bundle_write(/* arg names */compute_result, dark_gauss_ds_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_gauss_blur_2_update_0(dark_gauss_ds_1_cache& dark_gauss_ds_1, dark_gauss_blur_2_cache& dark_gauss_blur_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_gauss_ds_1
	auto dark_gauss_ds_1_0_c__0_value = dark_gauss_ds_1_dark_gauss_blur_2_update_0_read_bundle_read(dark_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(dark_gauss_ds_1_0_c__0_value);
	// Produce: dark_gauss_blur_2
	dark_gauss_blur_2_dark_gauss_blur_2_update_0_write_bundle_write(/* arg names */compute_result, dark_gauss_blur_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_weights_normed_gauss_blur_1_update_0(bright_weights_normed_cache& bright_weights_normed, bright_weights_normed_gauss_blur_1_cache& bright_weights_normed_gauss_blur_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_weights_normed
	auto bright_weights_normed_0_c__0_value = bright_weights_normed_bright_weights_normed_gauss_blur_1_update_0_read_bundle_read(bright_weights_normed/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_2(bright_weights_normed_0_c__0_value);
	// Produce: bright_weights_normed_gauss_blur_1
	bright_weights_normed_gauss_blur_1_bright_weights_normed_gauss_blur_1_update_0_write_bundle_write(/* arg names */compute_result, bright_weights_normed_gauss_blur_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_ds_1_update_0(bright_gauss_blur_1_cache& bright_gauss_blur_1, bright_gauss_ds_1_cache& bright_gauss_ds_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_blur_1
	auto bright_gauss_blur_1_0_c__0_value = bright_gauss_blur_1_bright_gauss_ds_1_update_0_read_bundle_read(bright_gauss_blur_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(bright_gauss_blur_1_0_c__0_value);
	// Produce: bright_gauss_ds_1
	bright_gauss_ds_1_bright_gauss_ds_1_update_0_write_bundle_write(/* arg names */compute_result, bright_gauss_ds_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void bright_gauss_blur_2_update_0(bright_gauss_ds_1_cache& bright_gauss_ds_1, bright_gauss_blur_2_cache& bright_gauss_blur_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: bright_gauss_ds_1
	auto bright_gauss_ds_1_0_c__0_value = bright_gauss_ds_1_bright_gauss_blur_2_update_0_read_bundle_read(bright_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(bright_gauss_ds_1_0_c__0_value);
	// Produce: bright_gauss_blur_2
	bright_gauss_blur_2_bright_gauss_blur_2_update_0_write_bundle_write(/* arg names */compute_result, bright_gauss_blur_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_ds_1_update_0(dark_weights_normed_gauss_blur_1_cache& dark_weights_normed_gauss_blur_1, dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_weights_normed_gauss_blur_1
	auto dark_weights_normed_gauss_blur_1_0_c__0_value = dark_weights_normed_gauss_blur_1_dark_weights_normed_gauss_ds_1_update_0_read_bundle_read(dark_weights_normed_gauss_blur_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(dark_weights_normed_gauss_blur_1_0_c__0_value);
	// Produce: dark_weights_normed_gauss_ds_1
	dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_ds_1_update_0_write_bundle_write(/* arg names */compute_result, dark_weights_normed_gauss_ds_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void dark_weights_normed_gauss_blur_2_update_0(dark_weights_normed_gauss_ds_1_cache& dark_weights_normed_gauss_ds_1, dark_weights_normed_gauss_blur_2_cache& dark_weights_normed_gauss_blur_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: dark_weights_normed_gauss_ds_1
	auto dark_weights_normed_gauss_ds_1_0_c__0_value = dark_weights_normed_gauss_ds_1_dark_weights_normed_gauss_blur_2_update_0_read_bundle_read(dark_weights_normed_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(dark_weights_normed_gauss_ds_1_0_c__0_value);
	// Produce: dark_weights_normed_gauss_blur_2
	dark_weights_normed_gauss_blur_2_dark_weights_normed_gauss_blur_2_update_0_write_bundle_write(/* arg names */compute_result, dark_weights_normed_gauss_blur_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void ps10_ps11_opt(HWStream<hw_uint<16> >& /* get_args num ports = 1 */in_off_chip0_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */in_off_chip1_oc, HWStream<hw_uint<16> >& /* get_args num ports = 1 */ps10, HWStream<hw_uint<16> >& /* get_args num ports = 1 */ps11) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("ps10_ps11_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  bright_cache bright;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_gauss_blur_1_cache bright_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_gauss_blur_2_cache bright_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_gauss_blur_3_cache bright_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_gauss_ds_1_cache bright_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_gauss_ds_2_cache bright_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_gauss_ds_3_cache bright_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_laplace_diff_0_cache bright_laplace_diff_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_laplace_diff_1_cache bright_laplace_diff_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_laplace_diff_2_cache bright_laplace_diff_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_laplace_us_0_cache bright_laplace_us_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_laplace_us_1_cache bright_laplace_us_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_laplace_us_2_cache bright_laplace_us_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_cache bright_weights;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_cache bright_weights_normed;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_blur_1_cache bright_weights_normed_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_blur_2_cache bright_weights_normed_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_blur_3_cache bright_weights_normed_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_ds_1_cache bright_weights_normed_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_ds_2_cache bright_weights_normed_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  bright_weights_normed_gauss_ds_3_cache bright_weights_normed_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_cache dark;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_gauss_blur_1_cache dark_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_gauss_blur_2_cache dark_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_gauss_blur_3_cache dark_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_gauss_ds_1_cache dark_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_gauss_ds_2_cache dark_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_gauss_ds_3_cache dark_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_laplace_diff_0_cache dark_laplace_diff_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_laplace_diff_1_cache dark_laplace_diff_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_laplace_diff_2_cache dark_laplace_diff_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_laplace_us_0_cache dark_laplace_us_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_laplace_us_1_cache dark_laplace_us_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_laplace_us_2_cache dark_laplace_us_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_cache dark_weights;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_cache dark_weights_normed;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_blur_1_cache dark_weights_normed_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_blur_2_cache dark_weights_normed_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_blur_3_cache dark_weights_normed_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_ds_1_cache dark_weights_normed_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_ds_2_cache dark_weights_normed_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  dark_weights_normed_gauss_ds_3_cache dark_weights_normed_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  final_merged_0_cache final_merged_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  final_merged_1_cache final_merged_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  final_merged_2_cache final_merged_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  fused_level_0_cache fused_level_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  fused_level_1_cache fused_level_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  fused_level_2_cache fused_level_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  fused_level_3_cache fused_level_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_off_chip0_cache in_off_chip0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_off_chip0_oc_in_off_chip1_oc_cache in_off_chip0_oc_in_off_chip1_oc;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_off_chip1_cache in_off_chip1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  ps1_cache ps1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  weight_sums_cache weight_sums;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 11] : 0 <= d0 <= 963 and 0 <= d1 <= 1086; dark_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 40] : 0 <= d0 <= 959 and 0 <= d1 <= 539; dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 962 and 0 <= d1 <= 542; bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 20] : 0 <= d0 <= 960 and 0 <= d1 <= 540; bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 25] : 0 <= d0 <= 962 and 0 <= d1 <= 542; in_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 963 and 0 <= d1 <= 1086; in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 963 and 0 <= d1 <= 1086; dark_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 7 + 4d0, 31] : 0 <= d0 <= 239 and 0 <= d1 <= 134; dark_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 38] : 0 <= d0 <= 959 and 0 <= d1 <= 1079; fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 52] : 0 <= d0 <= 959 and 0 <= d1 <= 1079; bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 28] : 0 <= d0 <= 478 and 0 <= d1 <= 268; bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 33] : 0 <= d0 <= 478 and 0 <= d1 <= 268; bright_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 959 and 0 <= d1 <= 1079; dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 17] : 0 <= d0 <= 960 and 0 <= d1 <= 540; bright_laplace_us_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 43] : 0 <= d0 <= 479 and 0 <= d1 <= 269; bright_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 45] : 0 <= d0 <= 959 and 0 <= d1 <= 1079; ps10_update_0[d0, d1] -> [14 + d1, 7 + d0, 58] : 0 <= d0 <= 959 and 0 <= d1 <= 1079; dark_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 41] : 0 <= d0 <= 959 and 0 <= d1 <= 1079; bright_laplace_us_1_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 44] : 0 <= d0 <= 959 and 0 <= d1 <= 539; bright_weights_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 963 and 0 <= d1 <= 1086; dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 270; dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 15] : 0 <= d0 <= 962 and 0 <= d1 <= 1084; dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 12] : 0 <= d0 <= 962 and 0 <= d1 <= 1084; dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 30] : 0 <= d0 <= 478 and 0 <= d1 <= 268; final_merged_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 53] : 0 <= d0 <= 479 and 0 <= d1 <= 269; dark_laplace_us_1_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 37] : 0 <= d0 <= 959 and 0 <= d1 <= 539; final_merged_1_update_0[d0, d1] -> [14 + 2d1, 7 + d0, 54] : 0 <= d0 <= 959 and 0 <= d1 <= 539; ps11_update_0[d0, d1] -> [14 + d1, 7 + d0, 57] : 0 <= d0 <= 959 and 0 <= d1 <= 1079; bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 32] : 0 <= d0 <= 480 and 0 <= d1 <= 270; dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 24] : 0 <= d0 <= 478 and 0 <= d1 <= 268; dark_weights_update_0[d0, d1] -> [d1, d0, 8] : 0 <= d0 <= 963 and 0 <= d1 <= 1086; in_off_chip0_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086; dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 22] : 0 <= d0 <= 960 and 0 <= d1 <= 540; weight_sums_update_0[d0, d1] -> [d1, d0, 10] : 0 <= d0 <= 963 and 0 <= d1 <= 1086; dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 7 + 4d0, 35] : 0 <= d0 <= 239 and 0 <= d1 <= 134; bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 19] : 0 <= d0 <= 962 and 0 <= d1 <= 542; bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 26] : 0 <= d0 <= 960 and 0 <= d1 <= 540; bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 18] : 0 <= d0 <= 962 and 0 <= d1 <= 1084; ps1_update_0[d0, d1] -> [14 + d1, 7 + d0, 56] : 0 <= d0 <= 959 and 0 <= d1 <= 1079; in_off_chip1_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 963 and 0 <= d1 <= 1086; dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 963 and 0 <= d1 <= 1086; bright_weights_normed_update_0[d0, d1] -> [d1, d0, 13] : 0 <= d0 <= 963 and 0 <= d1 <= 1086; bright_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 46] : 0 <= d0 <= 479 and 0 <= d1 <= 269; bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 7 + 4d0, 42] : 0 <= d0 <= 239 and 0 <= d1 <= 134; fused_level_3_update_0[d0, d1] -> [14 + 8d1, 7 + 4d0, 49] : 0 <= d0 <= 239 and 0 <= d1 <= 134; dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 29] : 0 <= d0 <= 480 and 0 <= d1 <= 270; final_merged_0_update_0[d0, d1] -> [14 + d1, 7 + d0, 55] : 0 <= d0 <= 959 and 0 <= d1 <= 1079; bright_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 47] : 0 <= d0 <= 959 and 0 <= d1 <= 539; bright_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 7 + 4d0, 34] : 0 <= d0 <= 239 and 0 <= d1 <= 134; dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 16] : 0 <= d0 <= 962 and 0 <= d1 <= 542; bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 962 and 0 <= d1 <= 1084; fused_level_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 50] : 0 <= d0 <= 479 and 0 <= d1 <= 269; bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 963 and 0 <= d1 <= 1086; dark_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 39] : 0 <= d0 <= 479 and 0 <= d1 <= 269; fused_level_1_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 51] : 0 <= d0 <= 959 and 0 <= d1 <= 539; bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 27] : 0 <= d0 <= 480 and 0 <= d1 <= 270; dark_laplace_us_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 36] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
//   { dark_weights_normed_update_0[d0, d1] -> [d1, d0, 11] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
// Condition for dark_weights_normed_update_0(((-11 + i2 == 0) && (i1 >= 0) && (963 - i1 >= 0) && (i0 >= 0) && (1086 - i0 >= 0)))
//   { dark_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 40] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
// Condition for dark_laplace_diff_1_update_0(((-i0 + 2*floord(i0, 2) == 0) && (-40 + i2 == 0) && (-3 + i1 >= 0) && (962 - i1 >= 0) && (-6 + i0 >= 0) && (1084 - i0 >= 0)))
//   { dark_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 21] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
// Condition for dark_weights_normed_gauss_ds_1_update_0(((-i0 + 2*floord(i0, 2) == 0) && (-21 + i2 == 0) && (-1 + i1 >= 0) && (963 - i1 >= 0) && (-2 + i0 >= 0) && (1086 - i0 >= 0)))
//   { bright_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 20] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
// Condition for bright_gauss_blur_2_update_0(((-i0 + 2*floord(i0, 2) == 0) && (-20 + i2 == 0) && (-3 + i1 >= 0) && (963 - i1 >= 0) && (-6 + i0 >= 0) && (1086 - i0 >= 0)))
//   { bright_weights_normed_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 25] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
// Condition for bright_weights_normed_gauss_ds_1_update_0(((-i0 + 2*floord(i0, 2) == 0) && (-25 + i2 == 0) && (-1 + i1 >= 0) && (963 - i1 >= 0) && (-2 + i0 >= 0) && (1086 - i0 >= 0)))
//   { in_update_0[d0, d1] -> [d1, d0, 5] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
// Condition for in_update_0(((-5 + i2 == 0) && (i1 >= 0) && (963 - i1 >= 0) && (i0 >= 0) && (1086 - i0 >= 0)))
//   { in_off_chip0_oc_in_off_chip1_oc_update_0[d0, d1] -> [d1, d0, 4] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
// Condition for in_off_chip0_oc_in_off_chip1_oc_update_0(((-4 + i2 == 0) && (i1 >= 0) && (963 - i1 >= 0) && (i0 >= 0) && (1086 - i0 >= 0)))
//   { dark_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 7 + 4d0, 31] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
// Condition for dark_gauss_ds_3_update_0(((-2 - i0 + 8*floord(2 + i0, 8) == 0) && (-1 - i1 + 4*floord(1 + i1, 4) == 0) && (-31 + i2 == 0) && (-7 + i1 >= 0) && (963 - i1 >= 0) && (-14 + i0 >= 0) && (1086 - i0 >= 0)))
//   { dark_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 38] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
// Condition for dark_laplace_us_0_update_0(((-38 + i2 == 0) && (-1 + i1 >= 0) && (960 - i1 >= 0) && (-2 + i0 >= 0) && (1081 - i0 >= 0)))
//   { fused_level_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 52] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
// Condition for fused_level_0_update_0(((-52 + i2 == 0) && (-1 + i1 >= 0) && (960 - i1 >= 0) && (-2 + i0 >= 0) && (1081 - i0 >= 0)))
//   { bright_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 28] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
// Condition for bright_gauss_blur_3_update_0(((-2 - i0 + 4*floord(2 + i0, 4) == 0) && (-1 - i1 + 2*floord(1 + i1, 2) == 0) && (-28 + i2 == 0) && (-7 + i1 >= 0) && (963 - i1 >= 0) && (-14 + i0 >= 0) && (1086 - i0 >= 0)))
//   { bright_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 33] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
// Condition for bright_weights_normed_gauss_blur_3_update_0(((-2 - i0 + 4*floord(2 + i0, 4) == 0) && (-1 - i1 + 2*floord(1 + i1, 2) == 0) && (-33 + i2 == 0) && (-7 + i1 >= 0) && (963 - i1 >= 0) && (-14 + i0 >= 0) && (1086 - i0 >= 0)))
//   { bright_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 48] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
// Condition for bright_laplace_diff_0_update_0(((-48 + i2 == 0) && (-1 + i1 >= 0) && (960 - i1 >= 0) && (-2 + i0 >= 0) && (1081 - i0 >= 0)))
//   { dark_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 17] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
// Condition for dark_gauss_blur_2_update_0(((-i0 + 2*floord(i0, 2) == 0) && (-17 + i2 == 0) && (-3 + i1 >= 0) && (963 - i1 >= 0) && (-6 + i0 >= 0) && (1086 - i0 >= 0)))
//   { bright_laplace_us_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 43] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
// Condition for bright_laplace_us_2_update_0(((-2 - i0 + 4*floord(2 + i0, 4) == 0) && (-1 - i1 + 2*floord(1 + i1, 2) == 0) && (-43 + i2 == 0) && (-7 + i1 >= 0) && (965 - i1 >= 0) && (-14 + i0 >= 0) && (1090 - i0 >= 0)))
//   { bright_laplace_us_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 45] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
// Condition for bright_laplace_us_0_update_0(((-45 + i2 == 0) && (-1 + i1 >= 0) && (960 - i1 >= 0) && (-2 + i0 >= 0) && (1081 - i0 >= 0)))
//   { ps10_update_0[d0, d1] -> [14 + d1, 7 + d0, 58] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
// Condition for ps10_update_0(((-58 + i2 == 0) && (-7 + i1 >= 0) && (966 - i1 >= 0) && (-14 + i0 >= 0) && (1093 - i0 >= 0)))
//   { dark_laplace_diff_0_update_0[d0, d1] -> [2 + d1, 1 + d0, 41] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
// Condition for dark_laplace_diff_0_update_0(((-41 + i2 == 0) && (-1 + i1 >= 0) && (960 - i1 >= 0) && (-2 + i0 >= 0) && (1081 - i0 >= 0)))
//   { bright_laplace_us_1_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 44] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
// Condition for bright_laplace_us_1_update_0(((-i0 + 2*floord(i0, 2) == 0) && (-44 + i2 == 0) && (-3 + i1 >= 0) && (962 - i1 >= 0) && (-6 + i0 >= 0) && (1084 - i0 >= 0)))
//   { bright_weights_update_0[d0, d1] -> [d1, d0, 9] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
// Condition for bright_weights_update_0(((-9 + i2 == 0) && (i1 >= 0) && (963 - i1 >= 0) && (i0 >= 0) && (1086 - i0 >= 0)))
//   { dark_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 23] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
// Condition for dark_gauss_ds_2_update_0(((-2 - i0 + 4*floord(2 + i0, 4) == 0) && (-1 - i1 + 2*floord(1 + i1, 2) == 0) && (-23 + i2 == 0) && (-3 + i1 >= 0) && (963 - i1 >= 0) && (-6 + i0 >= 0) && (1086 - i0 >= 0)))
//   { dark_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 15] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
// Condition for dark_weights_normed_gauss_blur_1_update_0(((-15 + i2 == 0) && (-1 + i1 >= 0) && (963 - i1 >= 0) && (-2 + i0 >= 0) && (1086 - i0 >= 0)))
//   { dark_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 12] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
// Condition for dark_gauss_blur_1_update_0(((-12 + i2 == 0) && (-1 + i1 >= 0) && (963 - i1 >= 0) && (-2 + i0 >= 0) && (1086 - i0 >= 0)))
//   { dark_weights_normed_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 30] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
// Condition for dark_weights_normed_gauss_blur_3_update_0(((-2 - i0 + 4*floord(2 + i0, 4) == 0) && (-1 - i1 + 2*floord(1 + i1, 2) == 0) && (-30 + i2 == 0) && (-7 + i1 >= 0) && (963 - i1 >= 0) && (-14 + i0 >= 0) && (1086 - i0 >= 0)))
//   { final_merged_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 53] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
// Condition for final_merged_2_update_0(((-2 - i0 + 4*floord(2 + i0, 4) == 0) && (-1 - i1 + 2*floord(1 + i1, 2) == 0) && (-53 + i2 == 0) && (-7 + i1 >= 0) && (965 - i1 >= 0) && (-14 + i0 >= 0) && (1090 - i0 >= 0)))
//   { dark_laplace_us_1_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 37] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
// Condition for dark_laplace_us_1_update_0(((-i0 + 2*floord(i0, 2) == 0) && (-37 + i2 == 0) && (-3 + i1 >= 0) && (962 - i1 >= 0) && (-6 + i0 >= 0) && (1084 - i0 >= 0)))
//   { final_merged_1_update_0[d0, d1] -> [14 + 2d1, 7 + d0, 54] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
// Condition for final_merged_1_update_0(((-i0 + 2*floord(i0, 2) == 0) && (-54 + i2 == 0) && (-7 + i1 >= 0) && (966 - i1 >= 0) && (-14 + i0 >= 0) && (1092 - i0 >= 0)))
//   { ps11_update_0[d0, d1] -> [14 + d1, 7 + d0, 57] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
// Condition for ps11_update_0(((-57 + i2 == 0) && (-7 + i1 >= 0) && (966 - i1 >= 0) && (-14 + i0 >= 0) && (1093 - i0 >= 0)))
//   { bright_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 32] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
// Condition for bright_weights_normed_gauss_ds_2_update_0(((-2 - i0 + 4*floord(2 + i0, 4) == 0) && (-1 - i1 + 2*floord(1 + i1, 2) == 0) && (-32 + i2 == 0) && (-3 + i1 >= 0) && (963 - i1 >= 0) && (-6 + i0 >= 0) && (1086 - i0 >= 0)))
//   { dark_gauss_blur_3_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 24] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
// Condition for dark_gauss_blur_3_update_0(((-2 - i0 + 4*floord(2 + i0, 4) == 0) && (-1 - i1 + 2*floord(1 + i1, 2) == 0) && (-24 + i2 == 0) && (-7 + i1 >= 0) && (963 - i1 >= 0) && (-14 + i0 >= 0) && (1086 - i0 >= 0)))
//   { dark_weights_update_0[d0, d1] -> [d1, d0, 8] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
// Condition for dark_weights_update_0(((-8 + i2 == 0) && (i1 >= 0) && (963 - i1 >= 0) && (i0 >= 0) && (1086 - i0 >= 0)))
//   { in_off_chip0_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
// Condition for in_off_chip0_update_0(((-1 + i2 == 0) && (i1 >= 0) && (963 - i1 >= 0) && (i0 >= 0) && (1086 - i0 >= 0)))
//   { dark_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 22] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
// Condition for dark_weights_normed_gauss_blur_2_update_0(((-i0 + 2*floord(i0, 2) == 0) && (-22 + i2 == 0) && (-3 + i1 >= 0) && (963 - i1 >= 0) && (-6 + i0 >= 0) && (1086 - i0 >= 0)))
//   { weight_sums_update_0[d0, d1] -> [d1, d0, 10] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
// Condition for weight_sums_update_0(((-10 + i2 == 0) && (i1 >= 0) && (963 - i1 >= 0) && (i0 >= 0) && (1086 - i0 >= 0)))
//   { dark_weights_normed_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 7 + 4d0, 35] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
// Condition for dark_weights_normed_gauss_ds_3_update_0(((-2 - i0 + 8*floord(2 + i0, 8) == 0) && (-1 - i1 + 4*floord(1 + i1, 4) == 0) && (-35 + i2 == 0) && (-7 + i1 >= 0) && (963 - i1 >= 0) && (-14 + i0 >= 0) && (1086 - i0 >= 0)))
//   { bright_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 19] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
// Condition for bright_gauss_ds_1_update_0(((-i0 + 2*floord(i0, 2) == 0) && (-19 + i2 == 0) && (-1 + i1 >= 0) && (963 - i1 >= 0) && (-2 + i0 >= 0) && (1086 - i0 >= 0)))
//   { bright_weights_normed_gauss_blur_2_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 26] : 0 <= d0 <= 960 and 0 <= d1 <= 540 }
// Condition for bright_weights_normed_gauss_blur_2_update_0(((-i0 + 2*floord(i0, 2) == 0) && (-26 + i2 == 0) && (-3 + i1 >= 0) && (963 - i1 >= 0) && (-6 + i0 >= 0) && (1086 - i0 >= 0)))
//   { bright_weights_normed_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 18] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
// Condition for bright_weights_normed_gauss_blur_1_update_0(((-18 + i2 == 0) && (-1 + i1 >= 0) && (963 - i1 >= 0) && (-2 + i0 >= 0) && (1086 - i0 >= 0)))
//   { ps1_update_0[d0, d1] -> [14 + d1, 7 + d0, 56] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
// Condition for ps1_update_0(((-56 + i2 == 0) && (-7 + i1 >= 0) && (966 - i1 >= 0) && (-14 + i0 >= 0) && (1093 - i0 >= 0)))
//   { in_off_chip1_update_0[d0, d1] -> [d1, d0, 3] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
// Condition for in_off_chip1_update_0(((-3 + i2 == 0) && (i1 >= 0) && (963 - i1 >= 0) && (i0 >= 0) && (1086 - i0 >= 0)))
//   { dark_update_0[d0, d1] -> [d1, d0, 6] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
// Condition for dark_update_0(((-6 + i2 == 0) && (i1 >= 0) && (963 - i1 >= 0) && (i0 >= 0) && (1086 - i0 >= 0)))
//   { bright_weights_normed_update_0[d0, d1] -> [d1, d0, 13] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
// Condition for bright_weights_normed_update_0(((-13 + i2 == 0) && (i1 >= 0) && (963 - i1 >= 0) && (i0 >= 0) && (1086 - i0 >= 0)))
//   { bright_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 46] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
// Condition for bright_laplace_diff_2_update_0(((-2 - i0 + 4*floord(2 + i0, 4) == 0) && (-1 - i1 + 2*floord(1 + i1, 2) == 0) && (-46 + i2 == 0) && (-7 + i1 >= 0) && (965 - i1 >= 0) && (-14 + i0 >= 0) && (1090 - i0 >= 0)))
//   { bright_weights_normed_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 7 + 4d0, 42] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
// Condition for bright_weights_normed_gauss_ds_3_update_0(((-2 - i0 + 8*floord(2 + i0, 8) == 0) && (-1 - i1 + 4*floord(1 + i1, 4) == 0) && (-42 + i2 == 0) && (-7 + i1 >= 0) && (963 - i1 >= 0) && (-14 + i0 >= 0) && (1086 - i0 >= 0)))
//   { fused_level_3_update_0[d0, d1] -> [14 + 8d1, 7 + 4d0, 49] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
// Condition for fused_level_3_update_0(((-2 - i0 + 8*floord(2 + i0, 8) == 0) && (-1 - i1 + 4*floord(1 + i1, 4) == 0) && (-49 + i2 == 0) && (-7 + i1 >= 0) && (963 - i1 >= 0) && (-14 + i0 >= 0) && (1086 - i0 >= 0)))
//   { dark_weights_normed_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 29] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
// Condition for dark_weights_normed_gauss_ds_2_update_0(((-2 - i0 + 4*floord(2 + i0, 4) == 0) && (-1 - i1 + 2*floord(1 + i1, 2) == 0) && (-29 + i2 == 0) && (-3 + i1 >= 0) && (963 - i1 >= 0) && (-6 + i0 >= 0) && (1086 - i0 >= 0)))
//   { final_merged_0_update_0[d0, d1] -> [14 + d1, 7 + d0, 55] : 0 <= d0 <= 959 and 0 <= d1 <= 1079 }
// Condition for final_merged_0_update_0(((-55 + i2 == 0) && (-7 + i1 >= 0) && (966 - i1 >= 0) && (-14 + i0 >= 0) && (1093 - i0 >= 0)))
//   { bright_laplace_diff_1_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 47] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
// Condition for bright_laplace_diff_1_update_0(((-i0 + 2*floord(i0, 2) == 0) && (-47 + i2 == 0) && (-3 + i1 >= 0) && (962 - i1 >= 0) && (-6 + i0 >= 0) && (1084 - i0 >= 0)))
//   { bright_gauss_ds_3_update_0[d0, d1] -> [14 + 8d1, 7 + 4d0, 34] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
// Condition for bright_gauss_ds_3_update_0(((-2 - i0 + 8*floord(2 + i0, 8) == 0) && (-1 - i1 + 4*floord(1 + i1, 4) == 0) && (-34 + i2 == 0) && (-7 + i1 >= 0) && (963 - i1 >= 0) && (-14 + i0 >= 0) && (1086 - i0 >= 0)))
//   { dark_gauss_ds_1_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 16] : 0 <= d0 <= 962 and 0 <= d1 <= 542 }
// Condition for dark_gauss_ds_1_update_0(((-i0 + 2*floord(i0, 2) == 0) && (-16 + i2 == 0) && (-1 + i1 >= 0) && (963 - i1 >= 0) && (-2 + i0 >= 0) && (1086 - i0 >= 0)))
//   { bright_gauss_blur_1_update_0[d0, d1] -> [2 + d1, 1 + d0, 14] : 0 <= d0 <= 962 and 0 <= d1 <= 1084 }
// Condition for bright_gauss_blur_1_update_0(((-14 + i2 == 0) && (-1 + i1 >= 0) && (963 - i1 >= 0) && (-2 + i0 >= 0) && (1086 - i0 >= 0)))
//   { fused_level_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 50] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
// Condition for fused_level_2_update_0(((-2 - i0 + 4*floord(2 + i0, 4) == 0) && (-1 - i1 + 2*floord(1 + i1, 2) == 0) && (-50 + i2 == 0) && (-7 + i1 >= 0) && (965 - i1 >= 0) && (-14 + i0 >= 0) && (1090 - i0 >= 0)))
//   { bright_update_0[d0, d1] -> [d1, d0, 7] : 0 <= d0 <= 963 and 0 <= d1 <= 1086 }
// Condition for bright_update_0(((-7 + i2 == 0) && (i1 >= 0) && (963 - i1 >= 0) && (i0 >= 0) && (1086 - i0 >= 0)))
//   { dark_laplace_diff_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 39] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
// Condition for dark_laplace_diff_2_update_0(((-2 - i0 + 4*floord(2 + i0, 4) == 0) && (-1 - i1 + 2*floord(1 + i1, 2) == 0) && (-39 + i2 == 0) && (-7 + i1 >= 0) && (965 - i1 >= 0) && (-14 + i0 >= 0) && (1090 - i0 >= 0)))
//   { fused_level_1_update_0[d0, d1] -> [6 + 2d1, 3 + d0, 51] : 0 <= d0 <= 959 and 0 <= d1 <= 539 }
// Condition for fused_level_1_update_0(((-i0 + 2*floord(i0, 2) == 0) && (-51 + i2 == 0) && (-3 + i1 >= 0) && (962 - i1 >= 0) && (-6 + i0 >= 0) && (1084 - i0 >= 0)))
//   { bright_gauss_ds_2_update_0[d0, d1] -> [6 + 4d1, 3 + 2d0, 27] : 0 <= d0 <= 480 and 0 <= d1 <= 270 }
// Condition for bright_gauss_ds_2_update_0(((-2 - i0 + 4*floord(2 + i0, 4) == 0) && (-1 - i1 + 2*floord(1 + i1, 2) == 0) && (-27 + i2 == 0) && (-3 + i1 >= 0) && (963 - i1 >= 0) && (-6 + i0 >= 0) && (1086 - i0 >= 0)))
//   { dark_laplace_us_2_update_0[d0, d1] -> [14 + 4d1, 7 + 2d0, 36] : 0 <= d0 <= 479 and 0 <= d1 <= 269 }
// Condition for dark_laplace_us_2_update_0(((-2 - i0 + 4*floord(2 + i0, 4) == 0) && (-1 - i1 + 2*floord(1 + i1, 2) == 0) && (-36 + i2 == 0) && (-7 + i1 >= 0) && (965 - i1 >= 0) && (-14 + i0 >= 0) && (1090 - i0 >= 0)))

  /*
  // Schedules...
    // bright_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*14]
    // bright_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*3,1*20]
    // bright_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*2 + 1*7,1*28]
    // bright_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*2,1*d0*1*1 + 1*1,1*19]
    // bright_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*6,1*d0*1*2 + 1*3,1*27]
    // bright_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*4 + 1*7,1*34]
    // bright_laplace_diff_0_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*48]
    // bright_laplace_diff_1_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*3,1*47]
    // bright_laplace_diff_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*2 + 1*7,1*46]
    // bright_laplace_us_0_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*45]
    // bright_laplace_us_1_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*3,1*44]
    // bright_laplace_us_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*2 + 1*7,1*43]
    // bright_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*7]
    // bright_weights_normed_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*18]
    // bright_weights_normed_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*3,1*26]
    // bright_weights_normed_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*2 + 1*7,1*33]
    // bright_weights_normed_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*2,1*d0*1*1 + 1*1,1*25]
    // bright_weights_normed_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*6,1*d0*1*2 + 1*3,1*32]
    // bright_weights_normed_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*4 + 1*7,1*42]
    // bright_weights_normed_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*13]
    // bright_weights_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*9]
    // dark_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*12]
    // dark_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*3,1*17]
    // dark_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*2 + 1*7,1*24]
    // dark_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*2,1*d0*1*1 + 1*1,1*16]
    // dark_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*6,1*d0*1*2 + 1*3,1*23]
    // dark_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*4 + 1*7,1*31]
    // dark_laplace_diff_0_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*41]
    // dark_laplace_diff_1_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*3,1*40]
    // dark_laplace_diff_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*2 + 1*7,1*39]
    // dark_laplace_us_0_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*38]
    // dark_laplace_us_1_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*3,1*37]
    // dark_laplace_us_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*2 + 1*7,1*36]
    // dark_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*6]
    // dark_weights_normed_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*15]
    // dark_weights_normed_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*3,1*22]
    // dark_weights_normed_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*2 + 1*7,1*30]
    // dark_weights_normed_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*2,1*d0*1*1 + 1*1,1*21]
    // dark_weights_normed_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*6,1*d0*1*2 + 1*3,1*29]
    // dark_weights_normed_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*4 + 1*7,1*35]
    // dark_weights_normed_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*11]
    // dark_weights_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*8]
    // final_merged_0_update_0 -> [1*d1*1*1 + 1*14,1*d0*1*1 + 1*7,1*55]
    // final_merged_1_update_0 -> [1*d1*1*2 + 1*14,1*d0*1*1 + 1*7,1*54]
    // final_merged_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*2 + 1*7,1*53]
    // fused_level_0_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*52]
    // fused_level_1_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*3,1*51]
    // fused_level_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*2 + 1*7,1*50]
    // fused_level_3_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*4 + 1*7,1*49]
    // in_off_chip0_oc_in_off_chip1_oc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*4]
    // in_off_chip0_oc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // in_off_chip0_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // in_off_chip1_oc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*2]
    // in_off_chip1_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*3]
    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*5]
    // ps10_update_0 -> [1*d1*1*1 + 1*14,1*d0*1*1 + 1*7,1*58]
    // ps11_update_0 -> [1*d1*1*1 + 1*14,1*d0*1*1 + 1*7,1*57]
    // ps1_update_0 -> [1*d1*1*1 + 1*14,1*d0*1*1 + 1*7,1*56]
    // weight_sums_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*10]
for (int c0 = 0; c0 <= 1093; c0++) {
  for (int c1 = 0; c1 <= 966; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((0 <= c1 && c1 <= 963) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1086) && ((c0 - 0) % 1 == 0)) {
      in_off_chip0_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 963) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1086) && ((c0 - 0) % 1 == 0)) {
      in_off_chip1_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 963) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1086) && ((c0 - 0) % 1 == 0)) {
      in_off_chip0_oc_in_off_chip1_oc_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 963) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1086) && ((c0 - 0) % 1 == 0)) {
      in_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 963) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1086) && ((c0 - 0) % 1 == 0)) {
      dark_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 963) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1086) && ((c0 - 0) % 1 == 0)) {
      bright_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 963) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1086) && ((c0 - 0) % 1 == 0)) {
      dark_weights_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 963) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1086) && ((c0 - 0) % 1 == 0)) {
      bright_weights_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 963) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1086) && ((c0 - 0) % 1 == 0)) {
      weight_sums_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((0 <= c1 && c1 <= 963) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1086) && ((c0 - 0) % 1 == 0)) {
      dark_weights_normed_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((1 <= c1 && c1 <= 963) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1086) && ((c0 - 2) % 1 == 0)) {
      dark_gauss_blur_1_update_0((c1 - 1) / 1, (c0 - 2) / 1);
    }

    if ((0 <= c1 && c1 <= 963) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1086) && ((c0 - 0) % 1 == 0)) {
      bright_weights_normed_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((1 <= c1 && c1 <= 963) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1086) && ((c0 - 2) % 1 == 0)) {
      bright_gauss_blur_1_update_0((c1 - 1) / 1, (c0 - 2) / 1);
    }

    if ((1 <= c1 && c1 <= 963) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1086) && ((c0 - 2) % 1 == 0)) {
      dark_weights_normed_gauss_blur_1_update_0((c1 - 1) / 1, (c0 - 2) / 1);
    }

    if ((1 <= c1 && c1 <= 963) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1086) && ((c0 - 2) % 2 == 0)) {
      dark_gauss_ds_1_update_0((c1 - 1) / 1, (c0 - 2) / 2);
    }

    if ((3 <= c1 && c1 <= 963) && ((c1 - 3) % 1 == 0) && (6 <= c0 && c0 <= 1086) && ((c0 - 6) % 2 == 0)) {
      dark_gauss_blur_2_update_0((c1 - 3) / 1, (c0 - 6) / 2);
    }

    if ((1 <= c1 && c1 <= 963) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1086) && ((c0 - 2) % 1 == 0)) {
      bright_weights_normed_gauss_blur_1_update_0((c1 - 1) / 1, (c0 - 2) / 1);
    }

    if ((1 <= c1 && c1 <= 963) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1086) && ((c0 - 2) % 2 == 0)) {
      bright_gauss_ds_1_update_0((c1 - 1) / 1, (c0 - 2) / 2);
    }

    if ((3 <= c1 && c1 <= 963) && ((c1 - 3) % 1 == 0) && (6 <= c0 && c0 <= 1086) && ((c0 - 6) % 2 == 0)) {
      bright_gauss_blur_2_update_0((c1 - 3) / 1, (c0 - 6) / 2);
    }

    if ((1 <= c1 && c1 <= 963) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1086) && ((c0 - 2) % 2 == 0)) {
      dark_weights_normed_gauss_ds_1_update_0((c1 - 1) / 1, (c0 - 2) / 2);
    }

    if ((3 <= c1 && c1 <= 963) && ((c1 - 3) % 1 == 0) && (6 <= c0 && c0 <= 1086) && ((c0 - 6) % 2 == 0)) {
      dark_weights_normed_gauss_blur_2_update_0((c1 - 3) / 1, (c0 - 6) / 2);
    }

    if ((3 <= c1 && c1 <= 963) && ((c1 - 3) % 2 == 0) && (6 <= c0 && c0 <= 1086) && ((c0 - 6) % 4 == 0)) {
      dark_gauss_ds_2_update_0((c1 - 3) / 2, (c0 - 6) / 4);
    }

    if ((7 <= c1 && c1 <= 963) && ((c1 - 7) % 2 == 0) && (14 <= c0 && c0 <= 1086) && ((c0 - 14) % 4 == 0)) {
      dark_gauss_blur_3_update_0((c1 - 7) / 2, (c0 - 14) / 4);
    }

    if ((1 <= c1 && c1 <= 963) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1086) && ((c0 - 2) % 2 == 0)) {
      bright_weights_normed_gauss_ds_1_update_0((c1 - 1) / 1, (c0 - 2) / 2);
    }

    if ((3 <= c1 && c1 <= 963) && ((c1 - 3) % 1 == 0) && (6 <= c0 && c0 <= 1086) && ((c0 - 6) % 2 == 0)) {
      bright_weights_normed_gauss_blur_2_update_0((c1 - 3) / 1, (c0 - 6) / 2);
    }

    if ((3 <= c1 && c1 <= 963) && ((c1 - 3) % 2 == 0) && (6 <= c0 && c0 <= 1086) && ((c0 - 6) % 4 == 0)) {
      bright_gauss_ds_2_update_0((c1 - 3) / 2, (c0 - 6) / 4);
    }

    if ((7 <= c1 && c1 <= 963) && ((c1 - 7) % 2 == 0) && (14 <= c0 && c0 <= 1086) && ((c0 - 14) % 4 == 0)) {
      bright_gauss_blur_3_update_0((c1 - 7) / 2, (c0 - 14) / 4);
    }

    if ((3 <= c1 && c1 <= 963) && ((c1 - 3) % 2 == 0) && (6 <= c0 && c0 <= 1086) && ((c0 - 6) % 4 == 0)) {
      dark_weights_normed_gauss_ds_2_update_0((c1 - 3) / 2, (c0 - 6) / 4);
    }

    if ((7 <= c1 && c1 <= 963) && ((c1 - 7) % 2 == 0) && (14 <= c0 && c0 <= 1086) && ((c0 - 14) % 4 == 0)) {
      dark_weights_normed_gauss_blur_3_update_0((c1 - 7) / 2, (c0 - 14) / 4);
    }

    if ((7 <= c1 && c1 <= 963) && ((c1 - 7) % 4 == 0) && (14 <= c0 && c0 <= 1086) && ((c0 - 14) % 8 == 0)) {
      dark_gauss_ds_3_update_0((c1 - 7) / 4, (c0 - 14) / 8);
    }

    if ((3 <= c1 && c1 <= 963) && ((c1 - 3) % 2 == 0) && (6 <= c0 && c0 <= 1086) && ((c0 - 6) % 4 == 0)) {
      bright_weights_normed_gauss_ds_2_update_0((c1 - 3) / 2, (c0 - 6) / 4);
    }

    if ((7 <= c1 && c1 <= 963) && ((c1 - 7) % 2 == 0) && (14 <= c0 && c0 <= 1086) && ((c0 - 14) % 4 == 0)) {
      bright_weights_normed_gauss_blur_3_update_0((c1 - 7) / 2, (c0 - 14) / 4);
    }

    if ((7 <= c1 && c1 <= 963) && ((c1 - 7) % 4 == 0) && (14 <= c0 && c0 <= 1086) && ((c0 - 14) % 8 == 0)) {
      bright_gauss_ds_3_update_0((c1 - 7) / 4, (c0 - 14) / 8);
    }

    if ((7 <= c1 && c1 <= 963) && ((c1 - 7) % 4 == 0) && (14 <= c0 && c0 <= 1086) && ((c0 - 14) % 8 == 0)) {
      dark_weights_normed_gauss_ds_3_update_0((c1 - 7) / 4, (c0 - 14) / 8);
    }

    if ((7 <= c1 && c1 <= 965) && ((c1 - 7) % 2 == 0) && (14 <= c0 && c0 <= 1090) && ((c0 - 14) % 4 == 0)) {
      dark_laplace_us_2_update_0((c1 - 7) / 2, (c0 - 14) / 4);
    }

    if ((3 <= c1 && c1 <= 962) && ((c1 - 3) % 1 == 0) && (6 <= c0 && c0 <= 1084) && ((c0 - 6) % 2 == 0)) {
      dark_laplace_us_1_update_0((c1 - 3) / 1, (c0 - 6) / 2);
    }

    if ((1 <= c1 && c1 <= 960) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
      dark_laplace_us_0_update_0((c1 - 1) / 1, (c0 - 2) / 1);
    }

    if ((7 <= c1 && c1 <= 965) && ((c1 - 7) % 2 == 0) && (14 <= c0 && c0 <= 1090) && ((c0 - 14) % 4 == 0)) {
      dark_laplace_diff_2_update_0((c1 - 7) / 2, (c0 - 14) / 4);
    }

    if ((3 <= c1 && c1 <= 962) && ((c1 - 3) % 1 == 0) && (6 <= c0 && c0 <= 1084) && ((c0 - 6) % 2 == 0)) {
      dark_laplace_diff_1_update_0((c1 - 3) / 1, (c0 - 6) / 2);
    }

    if ((1 <= c1 && c1 <= 960) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
      dark_laplace_diff_0_update_0((c1 - 1) / 1, (c0 - 2) / 1);
    }

    if ((7 <= c1 && c1 <= 963) && ((c1 - 7) % 4 == 0) && (14 <= c0 && c0 <= 1086) && ((c0 - 14) % 8 == 0)) {
      bright_weights_normed_gauss_ds_3_update_0((c1 - 7) / 4, (c0 - 14) / 8);
    }

    if ((7 <= c1 && c1 <= 965) && ((c1 - 7) % 2 == 0) && (14 <= c0 && c0 <= 1090) && ((c0 - 14) % 4 == 0)) {
      bright_laplace_us_2_update_0((c1 - 7) / 2, (c0 - 14) / 4);
    }

    if ((3 <= c1 && c1 <= 962) && ((c1 - 3) % 1 == 0) && (6 <= c0 && c0 <= 1084) && ((c0 - 6) % 2 == 0)) {
      bright_laplace_us_1_update_0((c1 - 3) / 1, (c0 - 6) / 2);
    }

    if ((1 <= c1 && c1 <= 960) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
      bright_laplace_us_0_update_0((c1 - 1) / 1, (c0 - 2) / 1);
    }

    if ((7 <= c1 && c1 <= 965) && ((c1 - 7) % 2 == 0) && (14 <= c0 && c0 <= 1090) && ((c0 - 14) % 4 == 0)) {
      bright_laplace_diff_2_update_0((c1 - 7) / 2, (c0 - 14) / 4);
    }

    if ((3 <= c1 && c1 <= 962) && ((c1 - 3) % 1 == 0) && (6 <= c0 && c0 <= 1084) && ((c0 - 6) % 2 == 0)) {
      bright_laplace_diff_1_update_0((c1 - 3) / 1, (c0 - 6) / 2);
    }

    if ((1 <= c1 && c1 <= 960) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
      bright_laplace_diff_0_update_0((c1 - 1) / 1, (c0 - 2) / 1);
    }

    if ((7 <= c1 && c1 <= 963) && ((c1 - 7) % 4 == 0) && (14 <= c0 && c0 <= 1086) && ((c0 - 14) % 8 == 0)) {
      fused_level_3_update_0((c1 - 7) / 4, (c0 - 14) / 8);
    }

    if ((7 <= c1 && c1 <= 965) && ((c1 - 7) % 2 == 0) && (14 <= c0 && c0 <= 1090) && ((c0 - 14) % 4 == 0)) {
      fused_level_2_update_0((c1 - 7) / 2, (c0 - 14) / 4);
    }

    if ((3 <= c1 && c1 <= 962) && ((c1 - 3) % 1 == 0) && (6 <= c0 && c0 <= 1084) && ((c0 - 6) % 2 == 0)) {
      fused_level_1_update_0((c1 - 3) / 1, (c0 - 6) / 2);
    }

    if ((1 <= c1 && c1 <= 960) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
      fused_level_0_update_0((c1 - 1) / 1, (c0 - 2) / 1);
    }

    if ((7 <= c1 && c1 <= 965) && ((c1 - 7) % 2 == 0) && (14 <= c0 && c0 <= 1090) && ((c0 - 14) % 4 == 0)) {
      final_merged_2_update_0((c1 - 7) / 2, (c0 - 14) / 4);
    }

    if ((7 <= c1 && c1 <= 966) && ((c1 - 7) % 1 == 0) && (14 <= c0 && c0 <= 1092) && ((c0 - 14) % 2 == 0)) {
      final_merged_1_update_0((c1 - 7) / 1, (c0 - 14) / 2);
    }

    if ((7 <= c1 && c1 <= 966) && ((c1 - 7) % 1 == 0) && (14 <= c0 && c0 <= 1093) && ((c0 - 14) % 1 == 0)) {
      final_merged_0_update_0((c1 - 7) / 1, (c0 - 14) / 1);
    }

    if ((7 <= c1 && c1 <= 966) && ((c1 - 7) % 1 == 0) && (14 <= c0 && c0 <= 1093) && ((c0 - 14) % 1 == 0)) {
      ps1_update_0((c1 - 7) / 1, (c0 - 14) / 1);
    }

    if ((7 <= c1 && c1 <= 966) && ((c1 - 7) % 1 == 0) && (14 <= c0 && c0 <= 1093) && ((c0 - 14) % 1 == 0)) {
      ps11_update_0((c1 - 7) / 1, (c0 - 14) / 1);
    }

    if ((7 <= c1 && c1 <= 966) && ((c1 - 7) % 1 == 0) && (14 <= c0 && c0 <= 1093) && ((c0 - 14) % 1 == 0)) {
      ps10_update_0((c1 - 7) / 1, (c0 - 14) / 1);
    }

  }
}

  */
	  // Schedules...
	    // bright_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*14]
	    // bright_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*3,1*20]
	    // bright_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*2 + 1*7,1*28]
	    // bright_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*2,1*d0*1*1 + 1*1,1*19]
	    // bright_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*6,1*d0*1*2 + 1*3,1*27]
	    // bright_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*4 + 1*7,1*34]
	    // bright_laplace_diff_0_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*48]
	    // bright_laplace_diff_1_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*3,1*47]
	    // bright_laplace_diff_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*2 + 1*7,1*46]
	    // bright_laplace_us_0_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*45]
	    // bright_laplace_us_1_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*3,1*44]
	    // bright_laplace_us_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*2 + 1*7,1*43]
	    // bright_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*7]
	    // bright_weights_normed_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*18]
	    // bright_weights_normed_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*3,1*26]
	    // bright_weights_normed_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*2 + 1*7,1*33]
	    // bright_weights_normed_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*2,1*d0*1*1 + 1*1,1*25]
	    // bright_weights_normed_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*6,1*d0*1*2 + 1*3,1*32]
	    // bright_weights_normed_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*4 + 1*7,1*42]
	    // bright_weights_normed_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*13]
	    // bright_weights_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*9]
	    // dark_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*12]
	    // dark_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*3,1*17]
	    // dark_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*2 + 1*7,1*24]
	    // dark_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*2,1*d0*1*1 + 1*1,1*16]
	    // dark_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*6,1*d0*1*2 + 1*3,1*23]
	    // dark_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*4 + 1*7,1*31]
	    // dark_laplace_diff_0_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*41]
	    // dark_laplace_diff_1_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*3,1*40]
	    // dark_laplace_diff_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*2 + 1*7,1*39]
	    // dark_laplace_us_0_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*38]
	    // dark_laplace_us_1_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*3,1*37]
	    // dark_laplace_us_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*2 + 1*7,1*36]
	    // dark_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*6]
	    // dark_weights_normed_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*15]
	    // dark_weights_normed_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*3,1*22]
	    // dark_weights_normed_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*2 + 1*7,1*30]
	    // dark_weights_normed_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*2,1*d0*1*1 + 1*1,1*21]
	    // dark_weights_normed_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*6,1*d0*1*2 + 1*3,1*29]
	    // dark_weights_normed_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*4 + 1*7,1*35]
	    // dark_weights_normed_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*11]
	    // dark_weights_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*8]
	    // final_merged_0_update_0 -> [1*d1*1*1 + 1*14,1*d0*1*1 + 1*7,1*55]
	    // final_merged_1_update_0 -> [1*d1*1*2 + 1*14,1*d0*1*1 + 1*7,1*54]
	    // final_merged_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*2 + 1*7,1*53]
	    // fused_level_0_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*1,1*52]
	    // fused_level_1_update_0 -> [1*d1*1*2 + 1*6,1*d0*1*1 + 1*3,1*51]
	    // fused_level_2_update_0 -> [1*d1*1*4 + 1*14,1*d0*1*2 + 1*7,1*50]
	    // fused_level_3_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*4 + 1*7,1*49]
	    // in_off_chip0_oc_in_off_chip1_oc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*4]
	    // in_off_chip0_oc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_off_chip0_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // in_off_chip1_oc_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*2]
	    // in_off_chip1_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*3]
	    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*5]
	    // ps10_update_0 -> [1*d1*1*1 + 1*14,1*d0*1*1 + 1*7,1*58]
	    // ps11_update_0 -> [1*d1*1*1 + 1*14,1*d0*1*1 + 1*7,1*57]
	    // ps1_update_0 -> [1*d1*1*1 + 1*14,1*d0*1*1 + 1*7,1*56]
	    // weight_sums_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*10]
	for (int c0 = 0; c0 <= 1093; c0++) {
	  for (int c1 = 0; c1 <= 966; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 963) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1086) && ((c0 - 0) % 1 == 0)) {
	      in_off_chip0_update_0(in_off_chip0_oc /* buf name */, in_off_chip0, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 963) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1086) && ((c0 - 0) % 1 == 0)) {
	      in_off_chip1_update_0(in_off_chip1_oc /* buf name */, in_off_chip1, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 963) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1086) && ((c0 - 0) % 1 == 0)) {
	      in_off_chip0_oc_in_off_chip1_oc_update_0(in_off_chip0 /* buf name */, in_off_chip1 /* buf name */, in_off_chip0_oc_in_off_chip1_oc, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 963) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1086) && ((c0 - 0) % 1 == 0)) {
	      in_update_0(in_off_chip0_oc_in_off_chip1_oc /* buf name */, in, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 963) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1086) && ((c0 - 0) % 1 == 0)) {
	      dark_update_0(in /* buf name */, dark, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 963) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1086) && ((c0 - 0) % 1 == 0)) {
	      bright_update_0(in /* buf name */, bright, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 963) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1086) && ((c0 - 0) % 1 == 0)) {
	      dark_weights_update_0(dark /* buf name */, dark_weights, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 963) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1086) && ((c0 - 0) % 1 == 0)) {
	      bright_weights_update_0(bright /* buf name */, bright_weights, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 963) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1086) && ((c0 - 0) % 1 == 0)) {
	      weight_sums_update_0(dark_weights /* buf name */, bright_weights /* buf name */, weight_sums, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 963) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1086) && ((c0 - 0) % 1 == 0)) {
	      dark_weights_normed_update_0(dark_weights /* buf name */, weight_sums /* buf name */, dark_weights_normed, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 963) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1086) && ((c0 - 2) % 1 == 0)) {
	      dark_gauss_blur_1_update_0(dark /* buf name */, dark_gauss_blur_1, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 963) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1086) && ((c0 - 0) % 1 == 0)) {
	      bright_weights_normed_update_0(bright_weights /* buf name */, weight_sums /* buf name */, bright_weights_normed, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 963) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1086) && ((c0 - 2) % 1 == 0)) {
	      bright_gauss_blur_1_update_0(bright /* buf name */, bright_gauss_blur_1, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 963) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1086) && ((c0 - 2) % 1 == 0)) {
	      dark_weights_normed_gauss_blur_1_update_0(dark_weights_normed /* buf name */, dark_weights_normed_gauss_blur_1, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 963) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1086) && ((c0 - 2) % 2 == 0)) {
	      dark_gauss_ds_1_update_0(dark_gauss_blur_1 /* buf name */, dark_gauss_ds_1, (c1 - 1) / 1, (c0 - 2) / 2);
	    }
	
	    if ((3 <= c1 && c1 <= 963) && ((c1 - 3) % 1 == 0) && (6 <= c0 && c0 <= 1086) && ((c0 - 6) % 2 == 0)) {
	      dark_gauss_blur_2_update_0(dark_gauss_ds_1 /* buf name */, dark_gauss_blur_2, (c1 - 3) / 1, (c0 - 6) / 2);
	    }
	
	    if ((1 <= c1 && c1 <= 963) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1086) && ((c0 - 2) % 1 == 0)) {
	      bright_weights_normed_gauss_blur_1_update_0(bright_weights_normed /* buf name */, bright_weights_normed_gauss_blur_1, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 963) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1086) && ((c0 - 2) % 2 == 0)) {
	      bright_gauss_ds_1_update_0(bright_gauss_blur_1 /* buf name */, bright_gauss_ds_1, (c1 - 1) / 1, (c0 - 2) / 2);
	    }
	
	    if ((3 <= c1 && c1 <= 963) && ((c1 - 3) % 1 == 0) && (6 <= c0 && c0 <= 1086) && ((c0 - 6) % 2 == 0)) {
	      bright_gauss_blur_2_update_0(bright_gauss_ds_1 /* buf name */, bright_gauss_blur_2, (c1 - 3) / 1, (c0 - 6) / 2);
	    }
	
	    if ((1 <= c1 && c1 <= 963) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1086) && ((c0 - 2) % 2 == 0)) {
	      dark_weights_normed_gauss_ds_1_update_0(dark_weights_normed_gauss_blur_1 /* buf name */, dark_weights_normed_gauss_ds_1, (c1 - 1) / 1, (c0 - 2) / 2);
	    }
	
	    if ((3 <= c1 && c1 <= 963) && ((c1 - 3) % 1 == 0) && (6 <= c0 && c0 <= 1086) && ((c0 - 6) % 2 == 0)) {
	      dark_weights_normed_gauss_blur_2_update_0(dark_weights_normed_gauss_ds_1 /* buf name */, dark_weights_normed_gauss_blur_2, (c1 - 3) / 1, (c0 - 6) / 2);
	    }
	
	    if ((3 <= c1 && c1 <= 963) && ((c1 - 3) % 2 == 0) && (6 <= c0 && c0 <= 1086) && ((c0 - 6) % 4 == 0)) {
	      dark_gauss_ds_2_update_0(dark_gauss_blur_2 /* buf name */, dark_gauss_ds_2, (c1 - 3) / 2, (c0 - 6) / 4);
	    }
	
	    if ((7 <= c1 && c1 <= 963) && ((c1 - 7) % 2 == 0) && (14 <= c0 && c0 <= 1086) && ((c0 - 14) % 4 == 0)) {
	      dark_gauss_blur_3_update_0(dark_gauss_ds_2 /* buf name */, dark_gauss_blur_3, (c1 - 7) / 2, (c0 - 14) / 4);
	    }
	
	    if ((1 <= c1 && c1 <= 963) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1086) && ((c0 - 2) % 2 == 0)) {
	      bright_weights_normed_gauss_ds_1_update_0(bright_weights_normed_gauss_blur_1 /* buf name */, bright_weights_normed_gauss_ds_1, (c1 - 1) / 1, (c0 - 2) / 2);
	    }
	
	    if ((3 <= c1 && c1 <= 963) && ((c1 - 3) % 1 == 0) && (6 <= c0 && c0 <= 1086) && ((c0 - 6) % 2 == 0)) {
	      bright_weights_normed_gauss_blur_2_update_0(bright_weights_normed_gauss_ds_1 /* buf name */, bright_weights_normed_gauss_blur_2, (c1 - 3) / 1, (c0 - 6) / 2);
	    }
	
	    if ((3 <= c1 && c1 <= 963) && ((c1 - 3) % 2 == 0) && (6 <= c0 && c0 <= 1086) && ((c0 - 6) % 4 == 0)) {
	      bright_gauss_ds_2_update_0(bright_gauss_blur_2 /* buf name */, bright_gauss_ds_2, (c1 - 3) / 2, (c0 - 6) / 4);
	    }
	
	    if ((7 <= c1 && c1 <= 963) && ((c1 - 7) % 2 == 0) && (14 <= c0 && c0 <= 1086) && ((c0 - 14) % 4 == 0)) {
	      bright_gauss_blur_3_update_0(bright_gauss_ds_2 /* buf name */, bright_gauss_blur_3, (c1 - 7) / 2, (c0 - 14) / 4);
	    }
	
	    if ((3 <= c1 && c1 <= 963) && ((c1 - 3) % 2 == 0) && (6 <= c0 && c0 <= 1086) && ((c0 - 6) % 4 == 0)) {
	      dark_weights_normed_gauss_ds_2_update_0(dark_weights_normed_gauss_blur_2 /* buf name */, dark_weights_normed_gauss_ds_2, (c1 - 3) / 2, (c0 - 6) / 4);
	    }
	
	    if ((7 <= c1 && c1 <= 963) && ((c1 - 7) % 2 == 0) && (14 <= c0 && c0 <= 1086) && ((c0 - 14) % 4 == 0)) {
	      dark_weights_normed_gauss_blur_3_update_0(dark_weights_normed_gauss_ds_2 /* buf name */, dark_weights_normed_gauss_blur_3, (c1 - 7) / 2, (c0 - 14) / 4);
	    }
	
	    if ((7 <= c1 && c1 <= 963) && ((c1 - 7) % 4 == 0) && (14 <= c0 && c0 <= 1086) && ((c0 - 14) % 8 == 0)) {
	      dark_gauss_ds_3_update_0(dark_gauss_blur_3 /* buf name */, dark_gauss_ds_3, (c1 - 7) / 4, (c0 - 14) / 8);
	    }
	
	    if ((3 <= c1 && c1 <= 963) && ((c1 - 3) % 2 == 0) && (6 <= c0 && c0 <= 1086) && ((c0 - 6) % 4 == 0)) {
	      bright_weights_normed_gauss_ds_2_update_0(bright_weights_normed_gauss_blur_2 /* buf name */, bright_weights_normed_gauss_ds_2, (c1 - 3) / 2, (c0 - 6) / 4);
	    }
	
	    if ((7 <= c1 && c1 <= 963) && ((c1 - 7) % 2 == 0) && (14 <= c0 && c0 <= 1086) && ((c0 - 14) % 4 == 0)) {
	      bright_weights_normed_gauss_blur_3_update_0(bright_weights_normed_gauss_ds_2 /* buf name */, bright_weights_normed_gauss_blur_3, (c1 - 7) / 2, (c0 - 14) / 4);
	    }
	
	    if ((7 <= c1 && c1 <= 963) && ((c1 - 7) % 4 == 0) && (14 <= c0 && c0 <= 1086) && ((c0 - 14) % 8 == 0)) {
	      bright_gauss_ds_3_update_0(bright_gauss_blur_3 /* buf name */, bright_gauss_ds_3, (c1 - 7) / 4, (c0 - 14) / 8);
	    }
	
	    if ((7 <= c1 && c1 <= 963) && ((c1 - 7) % 4 == 0) && (14 <= c0 && c0 <= 1086) && ((c0 - 14) % 8 == 0)) {
	      dark_weights_normed_gauss_ds_3_update_0(dark_weights_normed_gauss_blur_3 /* buf name */, dark_weights_normed_gauss_ds_3, (c1 - 7) / 4, (c0 - 14) / 8);
	    }
	
	    if ((7 <= c1 && c1 <= 965) && ((c1 - 7) % 2 == 0) && (14 <= c0 && c0 <= 1090) && ((c0 - 14) % 4 == 0)) {
	      dark_laplace_us_2_update_0(dark_gauss_ds_3 /* buf name */, dark_laplace_us_2, (c1 - 7) / 2, (c0 - 14) / 4);
	    }
	
	    if ((3 <= c1 && c1 <= 962) && ((c1 - 3) % 1 == 0) && (6 <= c0 && c0 <= 1084) && ((c0 - 6) % 2 == 0)) {
	      dark_laplace_us_1_update_0(dark_gauss_ds_2 /* buf name */, dark_laplace_us_1, (c1 - 3) / 1, (c0 - 6) / 2);
	    }
	
	    if ((1 <= c1 && c1 <= 960) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
	      dark_laplace_us_0_update_0(dark_gauss_ds_1 /* buf name */, dark_laplace_us_0, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((7 <= c1 && c1 <= 965) && ((c1 - 7) % 2 == 0) && (14 <= c0 && c0 <= 1090) && ((c0 - 14) % 4 == 0)) {
	      dark_laplace_diff_2_update_0(dark_gauss_ds_2 /* buf name */, dark_laplace_us_2 /* buf name */, dark_laplace_diff_2, (c1 - 7) / 2, (c0 - 14) / 4);
	    }
	
	    if ((3 <= c1 && c1 <= 962) && ((c1 - 3) % 1 == 0) && (6 <= c0 && c0 <= 1084) && ((c0 - 6) % 2 == 0)) {
	      dark_laplace_diff_1_update_0(dark_gauss_ds_1 /* buf name */, dark_laplace_us_1 /* buf name */, dark_laplace_diff_1, (c1 - 3) / 1, (c0 - 6) / 2);
	    }
	
	    if ((1 <= c1 && c1 <= 960) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
	      dark_laplace_diff_0_update_0(dark /* buf name */, dark_laplace_us_0 /* buf name */, dark_laplace_diff_0, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((7 <= c1 && c1 <= 963) && ((c1 - 7) % 4 == 0) && (14 <= c0 && c0 <= 1086) && ((c0 - 14) % 8 == 0)) {
	      bright_weights_normed_gauss_ds_3_update_0(bright_weights_normed_gauss_blur_3 /* buf name */, bright_weights_normed_gauss_ds_3, (c1 - 7) / 4, (c0 - 14) / 8);
	    }
	
	    if ((7 <= c1 && c1 <= 965) && ((c1 - 7) % 2 == 0) && (14 <= c0 && c0 <= 1090) && ((c0 - 14) % 4 == 0)) {
	      bright_laplace_us_2_update_0(bright_gauss_ds_3 /* buf name */, bright_laplace_us_2, (c1 - 7) / 2, (c0 - 14) / 4);
	    }
	
	    if ((3 <= c1 && c1 <= 962) && ((c1 - 3) % 1 == 0) && (6 <= c0 && c0 <= 1084) && ((c0 - 6) % 2 == 0)) {
	      bright_laplace_us_1_update_0(bright_gauss_ds_2 /* buf name */, bright_laplace_us_1, (c1 - 3) / 1, (c0 - 6) / 2);
	    }
	
	    if ((1 <= c1 && c1 <= 960) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
	      bright_laplace_us_0_update_0(bright_gauss_ds_1 /* buf name */, bright_laplace_us_0, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((7 <= c1 && c1 <= 965) && ((c1 - 7) % 2 == 0) && (14 <= c0 && c0 <= 1090) && ((c0 - 14) % 4 == 0)) {
	      bright_laplace_diff_2_update_0(bright_gauss_ds_2 /* buf name */, bright_laplace_us_2 /* buf name */, bright_laplace_diff_2, (c1 - 7) / 2, (c0 - 14) / 4);
	    }
	
	    if ((3 <= c1 && c1 <= 962) && ((c1 - 3) % 1 == 0) && (6 <= c0 && c0 <= 1084) && ((c0 - 6) % 2 == 0)) {
	      bright_laplace_diff_1_update_0(bright_gauss_ds_1 /* buf name */, bright_laplace_us_1 /* buf name */, bright_laplace_diff_1, (c1 - 3) / 1, (c0 - 6) / 2);
	    }
	
	    if ((1 <= c1 && c1 <= 960) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
	      bright_laplace_diff_0_update_0(bright /* buf name */, bright_laplace_us_0 /* buf name */, bright_laplace_diff_0, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((7 <= c1 && c1 <= 963) && ((c1 - 7) % 4 == 0) && (14 <= c0 && c0 <= 1086) && ((c0 - 14) % 8 == 0)) {
	      fused_level_3_update_0(bright_gauss_ds_3 /* buf name */, dark_gauss_ds_3 /* buf name */, bright_weights_normed_gauss_ds_3 /* buf name */, dark_weights_normed_gauss_ds_3 /* buf name */, fused_level_3, (c1 - 7) / 4, (c0 - 14) / 8);
	    }
	
	    if ((7 <= c1 && c1 <= 965) && ((c1 - 7) % 2 == 0) && (14 <= c0 && c0 <= 1090) && ((c0 - 14) % 4 == 0)) {
	      fused_level_2_update_0(bright_laplace_diff_2 /* buf name */, dark_laplace_diff_2 /* buf name */, bright_weights_normed_gauss_ds_2 /* buf name */, dark_weights_normed_gauss_ds_2 /* buf name */, fused_level_2, (c1 - 7) / 2, (c0 - 14) / 4);
	    }
	
	    if ((3 <= c1 && c1 <= 962) && ((c1 - 3) % 1 == 0) && (6 <= c0 && c0 <= 1084) && ((c0 - 6) % 2 == 0)) {
	      fused_level_1_update_0(bright_laplace_diff_1 /* buf name */, dark_laplace_diff_1 /* buf name */, bright_weights_normed_gauss_ds_1 /* buf name */, dark_weights_normed_gauss_ds_1 /* buf name */, fused_level_1, (c1 - 3) / 1, (c0 - 6) / 2);
	    }
	
	    if ((1 <= c1 && c1 <= 960) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1081) && ((c0 - 2) % 1 == 0)) {
	      fused_level_0_update_0(bright_laplace_diff_0 /* buf name */, dark_laplace_diff_0 /* buf name */, bright_weights_normed /* buf name */, dark_weights_normed /* buf name */, fused_level_0, (c1 - 1) / 1, (c0 - 2) / 1);
	    }
	
	    if ((7 <= c1 && c1 <= 965) && ((c1 - 7) % 2 == 0) && (14 <= c0 && c0 <= 1090) && ((c0 - 14) % 4 == 0)) {
	      final_merged_2_update_0(fused_level_3 /* buf name */, fused_level_2 /* buf name */, final_merged_2, (c1 - 7) / 2, (c0 - 14) / 4);
	    }
	
	    if ((7 <= c1 && c1 <= 966) && ((c1 - 7) % 1 == 0) && (14 <= c0 && c0 <= 1092) && ((c0 - 14) % 2 == 0)) {
	      final_merged_1_update_0(final_merged_2 /* buf name */, fused_level_1 /* buf name */, final_merged_1, (c1 - 7) / 1, (c0 - 14) / 2);
	    }
	
	    if ((7 <= c1 && c1 <= 966) && ((c1 - 7) % 1 == 0) && (14 <= c0 && c0 <= 1093) && ((c0 - 14) % 1 == 0)) {
	      final_merged_0_update_0(final_merged_1 /* buf name */, fused_level_0 /* buf name */, final_merged_0, (c1 - 7) / 1, (c0 - 14) / 1);
	    }
	
	    if ((7 <= c1 && c1 <= 966) && ((c1 - 7) % 1 == 0) && (14 <= c0 && c0 <= 1093) && ((c0 - 14) % 1 == 0)) {
	      ps1_update_0(final_merged_0 /* buf name */, ps1, (c1 - 7) / 1, (c0 - 14) / 1);
	    }
	
	    if ((7 <= c1 && c1 <= 966) && ((c1 - 7) % 1 == 0) && (14 <= c0 && c0 <= 1093) && ((c0 - 14) % 1 == 0)) {
	      ps11_update_0(ps1 /* buf name */, ps11, (c1 - 7) / 1, (c0 - 14) / 1);
	    }
	
	    if ((7 <= c1 && c1 <= 966) && ((c1 - 7) % 1 == 0) && (14 <= c0 && c0 <= 1093) && ((c0 - 14) % 1 == 0)) {
	      ps10_update_0(ps1 /* buf name */, ps10, (c1 - 7) / 1, (c0 - 14) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

#ifdef __VIVADO_SYNTH__
  // { in_off_chip0_update_0[root = 0, in_off_chip0_0, in_off_chip0_1] -> in_off_chip0_oc[0, 0] : 0 <= in_off_chip0_0 <= 963 and 0 <= in_off_chip0_1 <= 1086 }
const int in_off_chip0_update_0_read_num_transfers = 1047868;
  // { in_off_chip1_update_0[root = 0, in_off_chip1_0, in_off_chip1_1] -> in_off_chip1_oc[0, 0] : 0 <= in_off_chip1_0 <= 963 and 0 <= in_off_chip1_1 <= 1086 }
const int in_off_chip1_update_0_read_num_transfers = 1047868;
  // { ps10_update_0[root = 0, ps10_0, ps10_1] -> ps10[0, 0] : 0 <= ps10_0 <= 959 and 0 <= ps10_1 <= 1079 }
const int ps10_update_0_write_num_transfers = 1036800;
  // { ps11_update_0[root = 0, ps11_0, ps11_1] -> ps11[0, 0] : 0 <= ps11_0 <= 959 and 0 <= ps11_1 <= 1079 }
const int ps11_update_0_write_num_transfers = 1036800;


extern "C" {

static void read_in_off_chip0_update_0_read(hw_uint<16>* input, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = in_off_chip0_update_0_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void read_in_off_chip1_update_0_read(hw_uint<16>* input, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = in_off_chip1_update_0_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_ps10_update_0_write(hw_uint<16>* output, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = ps10_update_0_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

static void write_ps11_update_0_write(hw_uint<16>* output, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  int num_transfers = ps11_update_0_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void ps10_ps11_opt_accel(hw_uint<16>* in_off_chip0_update_0_read, hw_uint<16>* in_off_chip1_update_0_read, hw_uint<16>* ps10_update_0_write, hw_uint<16>* ps11_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_off_chip0_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = in_off_chip1_update_0_read offset = slave depth = 65536 bundle = gmem1
#pragma HLS INTERFACE m_axi port = ps10_update_0_write offset = slave depth = 65536 bundle = gmem2
#pragma HLS INTERFACE m_axi port = ps11_update_0_write offset = slave depth = 65536 bundle = gmem3

#pragma HLS INTERFACE s_axilite port = in_off_chip0_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = in_off_chip1_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = ps10_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = ps11_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<16> > in_off_chip0_update_0_read_channel;
  static HWStream<hw_uint<16> > in_off_chip1_update_0_read_channel;
  static HWStream<hw_uint<16> > ps10_update_0_write_channel;
  static HWStream<hw_uint<16> > ps11_update_0_write_channel;

  read_in_off_chip0_update_0_read(in_off_chip0_update_0_read, in_off_chip0_update_0_read_channel, size);
  read_in_off_chip1_update_0_read(in_off_chip1_update_0_read, in_off_chip1_update_0_read_channel, size);

  ps10_ps11_opt(in_off_chip0_update_0_read_channel, in_off_chip1_update_0_read_channel, ps10_update_0_write_channel, ps11_update_0_write_channel);

  write_ps10_update_0_write(ps10_update_0_write, ps10_update_0_write_channel, size);
  write_ps11_update_0_write(ps11_update_0_write, ps11_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

