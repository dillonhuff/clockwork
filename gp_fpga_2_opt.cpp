#ifndef __SYNTHESIS__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__SYNTHESIS__
// compute file: gp_fpga_2_opt_compute_units.h
#include "gp_fpga_2_opt_compute_units.h"

struct in_in_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-6, 1920], [-7, 1079]}
	// Capacity: 1932
	// # of read delays: 6
  // 0, 1, 965, 966, 1930, 1931
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 963> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 963> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_964() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f3.back();
	}

	inline hw_uint<16> peek_965() {
		return f4;
	}

	inline hw_uint<16> peek_966() {
		return f6;
	}

	inline hw_uint<16> peek_1929() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f7.back();
	}

	inline hw_uint<16> peek_1930() {
		return f8;
	}

	inline hw_uint<16> peek_1931() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 963
    f8 = f7.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 963 reading from capacity: 1
    f7.push(f6);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 963
    f4 = f3.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 963 reading from capacity: 1
    f3.push(f2);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write1_merged_banks_9_cache {
	// RAM Box: {[-7, 1919], [-7, 1079]}
	// Capacity: 1933
	// # of read delays: 7
  // 0, 1, 2, 966, 967, 1931, 1932
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 963> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 963> f9;
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

	inline hw_uint<16> peek_965() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f5.back();
	}

	inline hw_uint<16> peek_966() {
		return f6;
	}

	inline hw_uint<16> peek_967() {
		return f8;
	}

	inline hw_uint<16> peek_1930() {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
		return f9.back();
	}

	inline hw_uint<16> peek_1931() {
		return f10;
	}

	inline hw_uint<16> peek_1932() {
		return f12;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 963
    f10 = f9.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 963 reading from capacity: 1
    f9.push(f8);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 963
    f6 = f5.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 963 reading from capacity: 1
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

struct in_cache {
  // Reader addrs...
    // { in_gauss_blur_1_update_0[d0, d1] -> in[-1 + 2d0, -1 + d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
    // { in_gauss_blur_1_update_0[d0, d1] -> in[-1 + 2d0, d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
    // { in_gauss_blur_1_update_0[d0, d1] -> in[2d0, d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
    // { in_gauss_blur_1_update_0[d0, d1] -> in[2d0, 1 + d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
    // { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 2d0, -1 + d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
    // { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 2d0, d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
    // { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 2d0, 1 + d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
    // { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 2d0, -1 + d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
    // { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 2d0, d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
    // { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 2d0, 1 + d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
    // { in_gauss_blur_1_update_0[d0, d1] -> in[-1 + 2d0, 1 + d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
    // { in_gauss_blur_1_update_0[d0, d1] -> in[2d0, -1 + d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
    // { in_gauss_blur_1_update_0[d0, d1] -> in[2d0, d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
    // { in_gauss_blur_1_update_0[d0, d1] -> in[2d0, 1 + d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
    // { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 2d0, -1 + d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
    // { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 2d0, d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
    // { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 2d0, 1 + d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
    // { in_gauss_blur_1_update_0[d0, d1] -> in[2d0, -1 + d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // # of banks: 2
  in_in_update_0_write0_merged_banks_9_cache in_in_update_0_write0_merged_banks_9;
  in_in_update_0_write1_merged_banks_9_cache in_in_update_0_write1_merged_banks_9;
};



inline void in_in_update_0_write0_write(hw_uint<16>& in_in_update_0_write0, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write0_merged_banks_9.push(in_in_update_0_write0);
}

inline void in_in_update_0_write1_write(hw_uint<16>& in_in_update_0_write1, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write1_merged_banks_9.push(in_in_update_0_write1);
}

inline hw_uint<16> in_gauss_blur_1_rd0_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd0 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[-1 + 2d0, -1 + d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -4 <= d0 <= 960 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_1932();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd1_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd1 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[-1 + 2d0, d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -4 <= d0 <= 960 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_967();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd10_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd10 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2d0, d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -4 <= d0 <= 960 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_966();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd11_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd11 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2d0, 1 + d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -4 <= d0 <= 960 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_1();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd12_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd12 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 2d0, -1 + d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -4 <= d0 <= 960 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_1931();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd13_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd13 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 2d0, d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -4 <= d0 <= 960 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_966();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd14_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd14 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 2d0, 1 + d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -4 <= d0 <= 960 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_1();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd15_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd15 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 2d0, -1 + d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -4 <= d0 <= 960 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_1930();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd16_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd16 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 2d0, d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -4 <= d0 <= 960 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_965();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd17_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd17 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 2d0, 1 + d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -4 <= d0 <= 960 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_0();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd2_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd2 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[-1 + 2d0, 1 + d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -4 <= d0 <= 960 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_2();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd3_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd3 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2d0, -1 + d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -4 <= d0 <= 960 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_1931();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd4_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd4 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2d0, d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -4 <= d0 <= 960 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_966();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd5_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd5 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2d0, 1 + d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -4 <= d0 <= 960 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_1();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd6_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd6 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 2d0, -1 + d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -4 <= d0 <= 960 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_1931();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd7_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd7 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 2d0, d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -4 <= d0 <= 960 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_966();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd8_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd8 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 2d0, 1 + d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -4 <= d0 <= 960 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_1();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd9_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_1_rd9 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2d0, -1 + d1] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -4 <= d0 <= 960 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_1931();
  return value_in_in_update_0_write0;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_1_update_0_read
//	in_gauss_blur_1_rd0
//	in_gauss_blur_1_rd1
//	in_gauss_blur_1_rd2
//	in_gauss_blur_1_rd3
//	in_gauss_blur_1_rd4
//	in_gauss_blur_1_rd5
//	in_gauss_blur_1_rd6
//	in_gauss_blur_1_rd7
//	in_gauss_blur_1_rd8
//	in_gauss_blur_1_rd9
//	in_gauss_blur_1_rd10
//	in_gauss_blur_1_rd11
//	in_gauss_blur_1_rd12
//	in_gauss_blur_1_rd13
//	in_gauss_blur_1_rd14
//	in_gauss_blur_1_rd15
//	in_gauss_blur_1_rd16
//	in_gauss_blur_1_rd17
inline hw_uint<288> in_in_gauss_blur_1_update_0_read_bundle_read(in_cache& in, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 18
    // in_gauss_blur_1_rd0
    // in_gauss_blur_1_rd1
    // in_gauss_blur_1_rd2
    // in_gauss_blur_1_rd3
    // in_gauss_blur_1_rd4
    // in_gauss_blur_1_rd5
    // in_gauss_blur_1_rd6
    // in_gauss_blur_1_rd7
    // in_gauss_blur_1_rd8
    // in_gauss_blur_1_rd9
    // in_gauss_blur_1_rd10
    // in_gauss_blur_1_rd11
    // in_gauss_blur_1_rd12
    // in_gauss_blur_1_rd13
    // in_gauss_blur_1_rd14
    // in_gauss_blur_1_rd15
    // in_gauss_blur_1_rd16
    // in_gauss_blur_1_rd17

	hw_uint<288> result;
	hw_uint<16> in_gauss_blur_1_rd0_res = in_gauss_blur_1_rd0_select(in, d0, d1, dynamic_address);
	set_at<0, 288>(result, in_gauss_blur_1_rd0_res);
	hw_uint<16> in_gauss_blur_1_rd1_res = in_gauss_blur_1_rd1_select(in, d0, d1, dynamic_address);
	set_at<16, 288>(result, in_gauss_blur_1_rd1_res);
	hw_uint<16> in_gauss_blur_1_rd2_res = in_gauss_blur_1_rd2_select(in, d0, d1, dynamic_address);
	set_at<32, 288>(result, in_gauss_blur_1_rd2_res);
	hw_uint<16> in_gauss_blur_1_rd3_res = in_gauss_blur_1_rd3_select(in, d0, d1, dynamic_address);
	set_at<48, 288>(result, in_gauss_blur_1_rd3_res);
	hw_uint<16> in_gauss_blur_1_rd4_res = in_gauss_blur_1_rd4_select(in, d0, d1, dynamic_address);
	set_at<64, 288>(result, in_gauss_blur_1_rd4_res);
	hw_uint<16> in_gauss_blur_1_rd5_res = in_gauss_blur_1_rd5_select(in, d0, d1, dynamic_address);
	set_at<80, 288>(result, in_gauss_blur_1_rd5_res);
	hw_uint<16> in_gauss_blur_1_rd6_res = in_gauss_blur_1_rd6_select(in, d0, d1, dynamic_address);
	set_at<96, 288>(result, in_gauss_blur_1_rd6_res);
	hw_uint<16> in_gauss_blur_1_rd7_res = in_gauss_blur_1_rd7_select(in, d0, d1, dynamic_address);
	set_at<112, 288>(result, in_gauss_blur_1_rd7_res);
	hw_uint<16> in_gauss_blur_1_rd8_res = in_gauss_blur_1_rd8_select(in, d0, d1, dynamic_address);
	set_at<128, 288>(result, in_gauss_blur_1_rd8_res);
	hw_uint<16> in_gauss_blur_1_rd9_res = in_gauss_blur_1_rd9_select(in, d0, d1, dynamic_address);
	set_at<144, 288>(result, in_gauss_blur_1_rd9_res);
	hw_uint<16> in_gauss_blur_1_rd10_res = in_gauss_blur_1_rd10_select(in, d0, d1, dynamic_address);
	set_at<160, 288>(result, in_gauss_blur_1_rd10_res);
	hw_uint<16> in_gauss_blur_1_rd11_res = in_gauss_blur_1_rd11_select(in, d0, d1, dynamic_address);
	set_at<176, 288>(result, in_gauss_blur_1_rd11_res);
	hw_uint<16> in_gauss_blur_1_rd12_res = in_gauss_blur_1_rd12_select(in, d0, d1, dynamic_address);
	set_at<192, 288>(result, in_gauss_blur_1_rd12_res);
	hw_uint<16> in_gauss_blur_1_rd13_res = in_gauss_blur_1_rd13_select(in, d0, d1, dynamic_address);
	set_at<208, 288>(result, in_gauss_blur_1_rd13_res);
	hw_uint<16> in_gauss_blur_1_rd14_res = in_gauss_blur_1_rd14_select(in, d0, d1, dynamic_address);
	set_at<224, 288>(result, in_gauss_blur_1_rd14_res);
	hw_uint<16> in_gauss_blur_1_rd15_res = in_gauss_blur_1_rd15_select(in, d0, d1, dynamic_address);
	set_at<240, 288>(result, in_gauss_blur_1_rd15_res);
	hw_uint<16> in_gauss_blur_1_rd16_res = in_gauss_blur_1_rd16_select(in, d0, d1, dynamic_address);
	set_at<256, 288>(result, in_gauss_blur_1_rd16_res);
	hw_uint<16> in_gauss_blur_1_rd17_res = in_gauss_blur_1_rd17_select(in, d0, d1, dynamic_address);
	set_at<272, 288>(result, in_gauss_blur_1_rd17_res);
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

struct in_gauss_blur_1_in_gauss_blur_1_update_0_write0_to_in_gauss_ds_1_rd0_cache {
	// RAM Box: {[-6, 1918], [-6, 1078]}
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

struct in_gauss_blur_1_cache {
  // Reader addrs...
    // { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[2d0, 2d1] : -3 <= d0 <= 959 and -3 <= d1 <= 539 }
  // # of banks: 1
  in_gauss_blur_1_in_gauss_blur_1_update_0_write0_to_in_gauss_ds_1_rd0_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write0_to_in_gauss_ds_1_rd0;
};



inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write0_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write0, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write0_to_in_gauss_ds_1_rd0.push(in_gauss_blur_1_in_gauss_blur_1_update_0_write0);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write1_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write1, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline hw_uint<16> in_gauss_ds_1_rd0_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_ds_1_rd0 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[2d0, 2d1] : -3 <= d0 <= 959 and -3 <= d1 <= 539 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -3 <= d0 <= 959 and -3 <= d1 <= 539 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write0 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write0_to_in_gauss_ds_1_rd0.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_1_update_0_write
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write0
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write1
inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write_bundle_write(hw_uint<32>& in_gauss_blur_1_update_0_write, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write0_res = in_gauss_blur_1_update_0_write.extract<0, 15>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write0_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write0_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write1_res = in_gauss_blur_1_update_0_write.extract<16, 31>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write1_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write1_res, in_gauss_blur_1, d0, d1, dynamic_address);
}

// in_gauss_ds_1_update_0_read
//	in_gauss_ds_1_rd0
inline hw_uint<16> in_gauss_blur_1_in_gauss_ds_1_update_0_read_bundle_read(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // in_gauss_ds_1_rd0

	hw_uint<16> result;
	hw_uint<16> in_gauss_ds_1_rd0_res = in_gauss_ds_1_rd0_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<0, 16>(result, in_gauss_ds_1_rd0_res);
	return result;
}

struct in_gauss_blur_2_in_gauss_blur_2_update_0_write0_to_in_gauss_ds_2_rd0_cache {
	// RAM Box: {[-2, 958], [-2, 538]}
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

struct in_gauss_blur_2_cache {
  // Reader addrs...
    // { in_gauss_ds_2_update_0[d0, d1] -> in_gauss_blur_2[2d0, 2d1] : -1 <= d0 <= 479 and -1 <= d1 <= 269 }
  // # of banks: 1
  in_gauss_blur_2_in_gauss_blur_2_update_0_write0_to_in_gauss_ds_2_rd0_cache in_gauss_blur_2_in_gauss_blur_2_update_0_write0_to_in_gauss_ds_2_rd0;
};



inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write0_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write0, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
  in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write0_to_in_gauss_ds_2_rd0.push(in_gauss_blur_2_in_gauss_blur_2_update_0_write0);
}

inline hw_uint<16> in_gauss_ds_2_rd0_select(in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_ds_2_rd0 read pattern: { in_gauss_ds_2_update_0[d0, d1] -> in_gauss_blur_2[2d0, 2d1] : -1 <= d0 <= 479 and -1 <= d1 <= 269 }
  // Read schedule : { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 5] : -1 <= d0 <= 479 and -1 <= d1 <= 269 }
  // Write schedule: { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  auto value_in_gauss_blur_2_in_gauss_blur_2_update_0_write0 = in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write0_to_in_gauss_ds_2_rd0.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_2_in_gauss_blur_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_2_update_0_write
//	in_gauss_blur_2_in_gauss_blur_2_update_0_write0
inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write_bundle_write(hw_uint<16>& in_gauss_blur_2_update_0_write, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_blur_2_in_gauss_blur_2_update_0_write0_res = in_gauss_blur_2_update_0_write.extract<0, 15>();
	in_gauss_blur_2_in_gauss_blur_2_update_0_write0_write(in_gauss_blur_2_in_gauss_blur_2_update_0_write0_res, in_gauss_blur_2, d0, d1, dynamic_address);
}

// in_gauss_ds_2_update_0_read
//	in_gauss_ds_2_rd0
inline hw_uint<16> in_gauss_blur_2_in_gauss_ds_2_update_0_read_bundle_read(in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // in_gauss_ds_2_rd0

	hw_uint<16> result;
	hw_uint<16> in_gauss_ds_2_rd0_res = in_gauss_ds_2_rd0_select(in_gauss_blur_2, d0, d1, dynamic_address);
	set_at<0, 16>(result, in_gauss_ds_2_rd0_res);
	return result;
}

struct in_gauss_blur_3_in_gauss_blur_3_update_0_write0_to_in_gauss_ds_3_rd0_cache {
	// RAM Box: {[0, 478], [0, 268]}
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

struct in_gauss_blur_3_cache {
  // Reader addrs...
    // { in_gauss_ds_3_update_0[d0, d1] -> in_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // # of banks: 1
  in_gauss_blur_3_in_gauss_blur_3_update_0_write0_to_in_gauss_ds_3_rd0_cache in_gauss_blur_3_in_gauss_blur_3_update_0_write0_to_in_gauss_ds_3_rd0;
};



inline void in_gauss_blur_3_in_gauss_blur_3_update_0_write0_write(hw_uint<16>& in_gauss_blur_3_in_gauss_blur_3_update_0_write0, in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
  in_gauss_blur_3.in_gauss_blur_3_in_gauss_blur_3_update_0_write0_to_in_gauss_ds_3_rd0.push(in_gauss_blur_3_in_gauss_blur_3_update_0_write0);
}

inline hw_uint<16> in_gauss_ds_3_rd0_select(in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_ds_3_rd0 read pattern: { in_gauss_ds_3_update_0[d0, d1] -> in_gauss_blur_3[2d0, 2d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Read schedule : { in_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Write schedule: { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 6] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  auto value_in_gauss_blur_3_in_gauss_blur_3_update_0_write0 = in_gauss_blur_3.in_gauss_blur_3_in_gauss_blur_3_update_0_write0_to_in_gauss_ds_3_rd0.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_3_in_gauss_blur_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_3_update_0_write
//	in_gauss_blur_3_in_gauss_blur_3_update_0_write0
inline void in_gauss_blur_3_in_gauss_blur_3_update_0_write_bundle_write(hw_uint<16>& in_gauss_blur_3_update_0_write, in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_blur_3_in_gauss_blur_3_update_0_write0_res = in_gauss_blur_3_update_0_write.extract<0, 15>();
	in_gauss_blur_3_in_gauss_blur_3_update_0_write0_write(in_gauss_blur_3_in_gauss_blur_3_update_0_write0_res, in_gauss_blur_3, d0, d1, dynamic_address);
}

// in_gauss_ds_3_update_0_read
//	in_gauss_ds_3_rd0
inline hw_uint<16> in_gauss_blur_3_in_gauss_ds_3_update_0_read_bundle_read(in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // in_gauss_ds_3_rd0

	hw_uint<16> result;
	hw_uint<16> in_gauss_ds_3_rd0_res = in_gauss_ds_3_rd0_select(in_gauss_blur_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, in_gauss_ds_3_rd0_res);
	return result;
}

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-3, 959], [-3, 539]}
	// Capacity: 1929
	// # of read delays: 9
  // 0, 1, 2, 963, 964, 965, 1926, 1927, 1928
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
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
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
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
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
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 960
    f12 = f11.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 960 reading from capacity: 1
    f11.push(f10);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 960
    f6 = f5.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 960 reading from capacity: 1
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

struct in_gauss_ds_1_cache {
  // Reader addrs...
    // { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[-1 + d0, -1 + d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
    // { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[-1 + d0, d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
    // { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[-1 + d0, 1 + d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
    // { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[d0, -1 + d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
    // { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[d0, d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
    // { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[d0, 1 + d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
    // { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + d0, -1 + d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
    // { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + d0, d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
    // { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + d0, 1 + d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // # of banks: 1
  in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9;
};



inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write0_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write0, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.push(in_gauss_ds_1_in_gauss_ds_1_update_0_write0);
}

inline hw_uint<16> in_gauss_blur_2_rd0_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_2_rd0 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[-1 + d0, -1 + d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -3 <= d0 <= 959 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_1928();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd1_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_2_rd1 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[-1 + d0, d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -3 <= d0 <= 959 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_965();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd2_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_2_rd2 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[-1 + d0, 1 + d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -3 <= d0 <= 959 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_2();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd3_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_2_rd3 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[d0, -1 + d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -3 <= d0 <= 959 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_1927();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd4_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_2_rd4 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[d0, d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -3 <= d0 <= 959 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_964();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd5_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_2_rd5 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[d0, 1 + d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -3 <= d0 <= 959 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd6_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_2_rd6 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + d0, -1 + d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -3 <= d0 <= 959 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_1926();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd7_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_2_rd7 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + d0, d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -3 <= d0 <= 959 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_963();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd8_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_2_rd8 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + d0, 1 + d1] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -3 <= d0 <= 959 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_0();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_2_update_0_read
//	in_gauss_blur_2_rd0
//	in_gauss_blur_2_rd1
//	in_gauss_blur_2_rd2
//	in_gauss_blur_2_rd3
//	in_gauss_blur_2_rd4
//	in_gauss_blur_2_rd5
//	in_gauss_blur_2_rd6
//	in_gauss_blur_2_rd7
//	in_gauss_blur_2_rd8
inline hw_uint<144> in_gauss_ds_1_in_gauss_blur_2_update_0_read_bundle_read(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // in_gauss_blur_2_rd0
    // in_gauss_blur_2_rd1
    // in_gauss_blur_2_rd2
    // in_gauss_blur_2_rd3
    // in_gauss_blur_2_rd4
    // in_gauss_blur_2_rd5
    // in_gauss_blur_2_rd6
    // in_gauss_blur_2_rd7
    // in_gauss_blur_2_rd8

	hw_uint<144> result;
	hw_uint<16> in_gauss_blur_2_rd0_res = in_gauss_blur_2_rd0_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 144>(result, in_gauss_blur_2_rd0_res);
	hw_uint<16> in_gauss_blur_2_rd1_res = in_gauss_blur_2_rd1_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<16, 144>(result, in_gauss_blur_2_rd1_res);
	hw_uint<16> in_gauss_blur_2_rd2_res = in_gauss_blur_2_rd2_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<32, 144>(result, in_gauss_blur_2_rd2_res);
	hw_uint<16> in_gauss_blur_2_rd3_res = in_gauss_blur_2_rd3_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<48, 144>(result, in_gauss_blur_2_rd3_res);
	hw_uint<16> in_gauss_blur_2_rd4_res = in_gauss_blur_2_rd4_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<64, 144>(result, in_gauss_blur_2_rd4_res);
	hw_uint<16> in_gauss_blur_2_rd5_res = in_gauss_blur_2_rd5_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<80, 144>(result, in_gauss_blur_2_rd5_res);
	hw_uint<16> in_gauss_blur_2_rd6_res = in_gauss_blur_2_rd6_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<96, 144>(result, in_gauss_blur_2_rd6_res);
	hw_uint<16> in_gauss_blur_2_rd7_res = in_gauss_blur_2_rd7_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<112, 144>(result, in_gauss_blur_2_rd7_res);
	hw_uint<16> in_gauss_blur_2_rd8_res = in_gauss_blur_2_rd8_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<128, 144>(result, in_gauss_blur_2_rd8_res);
	return result;
}

// in_gauss_ds_1_update_0_write
//	in_gauss_ds_1_in_gauss_ds_1_update_0_write0
inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write_bundle_write(hw_uint<16>& in_gauss_ds_1_update_0_write, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_ds_1_in_gauss_ds_1_update_0_write0_res = in_gauss_ds_1_update_0_write.extract<0, 15>();
	in_gauss_ds_1_in_gauss_ds_1_update_0_write0_write(in_gauss_ds_1_in_gauss_ds_1_update_0_write0_res, in_gauss_ds_1, d0, d1, dynamic_address);
}

struct in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-1, 479], [-1, 269]}
	// Capacity: 965
	// # of read delays: 9
  // 0, 1, 2, 481, 482, 483, 962, 963, 964
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
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
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
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
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
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f16 = f14;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f14 = f12;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 478
    f12 = f11.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 478 reading from capacity: 1
    f11.push(f10);
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 1 reading from capacity: 478
    f6 = f5.back();
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
    // cap: 478 reading from capacity: 1
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

struct in_gauss_ds_2_cache {
  // Reader addrs...
    // { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[-1 + d0, -1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
    // { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[-1 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
    // { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[-1 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
    // { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[d0, -1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
    // { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
    // { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
    // { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + d0, -1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
    // { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
    // { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // # of banks: 1
  in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9_cache in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9;
};



inline void in_gauss_ds_2_in_gauss_ds_2_update_0_write0_write(hw_uint<16>& in_gauss_ds_2_in_gauss_ds_2_update_0_write0, in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
  in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.push(in_gauss_ds_2_in_gauss_ds_2_update_0_write0);
}

inline hw_uint<16> in_gauss_blur_3_rd0_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_3_rd0 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[-1 + d0, -1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 6] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 5] : -1 <= d0 <= 479 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_964();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd1_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_3_rd1 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[-1 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 6] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 5] : -1 <= d0 <= 479 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_483();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd2_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_3_rd2 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[-1 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 6] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 5] : -1 <= d0 <= 479 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_2();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd3_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_3_rd3 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[d0, -1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 6] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 5] : -1 <= d0 <= 479 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_963();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd4_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_3_rd4 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 6] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 5] : -1 <= d0 <= 479 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_482();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd5_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_3_rd5 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 6] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 5] : -1 <= d0 <= 479 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd6_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_3_rd6 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + d0, -1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 6] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 5] : -1 <= d0 <= 479 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_962();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd7_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_3_rd7 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + d0, d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 6] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 5] : -1 <= d0 <= 479 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_481();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd8_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // in_gauss_blur_3_rd8 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + d0, 1 + d1] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 6] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 5] : -1 <= d0 <= 479 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_3_update_0_read
//	in_gauss_blur_3_rd0
//	in_gauss_blur_3_rd1
//	in_gauss_blur_3_rd2
//	in_gauss_blur_3_rd3
//	in_gauss_blur_3_rd4
//	in_gauss_blur_3_rd5
//	in_gauss_blur_3_rd6
//	in_gauss_blur_3_rd7
//	in_gauss_blur_3_rd8
inline hw_uint<144> in_gauss_ds_2_in_gauss_blur_3_update_0_read_bundle_read(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 9
    // in_gauss_blur_3_rd0
    // in_gauss_blur_3_rd1
    // in_gauss_blur_3_rd2
    // in_gauss_blur_3_rd3
    // in_gauss_blur_3_rd4
    // in_gauss_blur_3_rd5
    // in_gauss_blur_3_rd6
    // in_gauss_blur_3_rd7
    // in_gauss_blur_3_rd8

	hw_uint<144> result;
	hw_uint<16> in_gauss_blur_3_rd0_res = in_gauss_blur_3_rd0_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 144>(result, in_gauss_blur_3_rd0_res);
	hw_uint<16> in_gauss_blur_3_rd1_res = in_gauss_blur_3_rd1_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<16, 144>(result, in_gauss_blur_3_rd1_res);
	hw_uint<16> in_gauss_blur_3_rd2_res = in_gauss_blur_3_rd2_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<32, 144>(result, in_gauss_blur_3_rd2_res);
	hw_uint<16> in_gauss_blur_3_rd3_res = in_gauss_blur_3_rd3_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<48, 144>(result, in_gauss_blur_3_rd3_res);
	hw_uint<16> in_gauss_blur_3_rd4_res = in_gauss_blur_3_rd4_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<64, 144>(result, in_gauss_blur_3_rd4_res);
	hw_uint<16> in_gauss_blur_3_rd5_res = in_gauss_blur_3_rd5_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<80, 144>(result, in_gauss_blur_3_rd5_res);
	hw_uint<16> in_gauss_blur_3_rd6_res = in_gauss_blur_3_rd6_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<96, 144>(result, in_gauss_blur_3_rd6_res);
	hw_uint<16> in_gauss_blur_3_rd7_res = in_gauss_blur_3_rd7_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<112, 144>(result, in_gauss_blur_3_rd7_res);
	hw_uint<16> in_gauss_blur_3_rd8_res = in_gauss_blur_3_rd8_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<128, 144>(result, in_gauss_blur_3_rd8_res);
	return result;
}

// in_gauss_ds_2_update_0_write
//	in_gauss_ds_2_in_gauss_ds_2_update_0_write0
inline void in_gauss_ds_2_in_gauss_ds_2_update_0_write_bundle_write(hw_uint<16>& in_gauss_ds_2_update_0_write, in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_ds_2_in_gauss_ds_2_update_0_write0_res = in_gauss_ds_2_update_0_write.extract<0, 15>();
	in_gauss_ds_2_in_gauss_ds_2_update_0_write0_write(in_gauss_ds_2_in_gauss_ds_2_update_0_write0_res, in_gauss_ds_2, d0, d1, dynamic_address);
}

struct in_gauss_ds_3_in_gauss_ds_3_update_0_write0_to_gp_fpga_2_rd0_cache {
	// RAM Box: {[0, 239], [0, 134]}
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

struct in_gauss_ds_3_cache {
  // Reader addrs...
    // { gp_fpga_2_update_0[d0, d1] -> in_gauss_ds_3[d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // # of banks: 1
  in_gauss_ds_3_in_gauss_ds_3_update_0_write0_to_gp_fpga_2_rd0_cache in_gauss_ds_3_in_gauss_ds_3_update_0_write0_to_gp_fpga_2_rd0;
};



inline void in_gauss_ds_3_in_gauss_ds_3_update_0_write0_write(hw_uint<16>& in_gauss_ds_3_in_gauss_ds_3_update_0_write0, in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
  in_gauss_ds_3.in_gauss_ds_3_in_gauss_ds_3_update_0_write0_to_gp_fpga_2_rd0.push(in_gauss_ds_3_in_gauss_ds_3_update_0_write0);
}

inline hw_uint<16> gp_fpga_2_rd0_select(in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __SYTHESIS__
#endif //__SYNTHESIS__
  // gp_fpga_2_rd0 read pattern: { gp_fpga_2_update_0[d0, d1] -> in_gauss_ds_3[d0, d1] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Read schedule : { gp_fpga_2_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  // Write schedule: { in_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
  auto value_in_gauss_ds_3_in_gauss_ds_3_update_0_write0 = in_gauss_ds_3.in_gauss_ds_3_in_gauss_ds_3_update_0_write0_to_gp_fpga_2_rd0.peek(/* one reader or all rams */ 0);
  return value_in_gauss_ds_3_in_gauss_ds_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// gp_fpga_2_update_0_read
//	gp_fpga_2_rd0
inline hw_uint<16> in_gauss_ds_3_gp_fpga_2_update_0_read_bundle_read(in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // gp_fpga_2_rd0

	hw_uint<16> result;
	hw_uint<16> gp_fpga_2_rd0_res = gp_fpga_2_rd0_select(in_gauss_ds_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, gp_fpga_2_rd0_res);
	return result;
}

// in_gauss_ds_3_update_0_write
//	in_gauss_ds_3_in_gauss_ds_3_update_0_write0
inline void in_gauss_ds_3_in_gauss_ds_3_update_0_write_bundle_write(hw_uint<16>& in_gauss_ds_3_update_0_write, in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_ds_3_in_gauss_ds_3_update_0_write0_res = in_gauss_ds_3_update_0_write.extract<0, 15>();
	in_gauss_ds_3_in_gauss_ds_3_update_0_write0_write(in_gauss_ds_3_in_gauss_ds_3_update_0_write0_res, in_gauss_ds_3, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 108080 bits


// Operation logic
inline void in_update_0(HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */in_off_chip, in_cache& in, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_off_chip
	auto in_off_chip_1_m_in_1__p__0_c__1_m_in_0__p__0_value = in_off_chip.read();
	auto compute_result = id_unrolled_2(in_off_chip_1_m_in_1__p__0_c__1_m_in_0__p__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(/* arg names */compute_result, in, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void in_gauss_blur_1_update_0(in_cache& in, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_1_m_in_gauss_blur_1_1__p___m_1_c__1_m_in_gauss_blur_1_0__p___m_1_value = in_in_gauss_blur_1_update_0_read_bundle_read(in/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = reduce_gauss_unrolled_2(in_1_m_in_gauss_blur_1_1__p___m_1_c__1_m_in_gauss_blur_1_0__p___m_1_value);
	// Produce: in_gauss_blur_1
	in_gauss_blur_1_in_gauss_blur_1_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_blur_1, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void in_gauss_ds_1_update_0(in_gauss_blur_1_cache& in_gauss_blur_1, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_blur_1
	auto in_gauss_blur_1_2_m_in_gauss_ds_1_1__p__0_c__2_m_in_gauss_ds_1_0__p__0_value = in_gauss_blur_1_in_gauss_ds_1_update_0_read_bundle_read(in_gauss_blur_1/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = id_unrolled_1(in_gauss_blur_1_2_m_in_gauss_ds_1_1__p__0_c__2_m_in_gauss_ds_1_0__p__0_value);
	// Produce: in_gauss_ds_1
	in_gauss_ds_1_in_gauss_ds_1_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_ds_1, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void in_gauss_blur_2_update_0(in_gauss_ds_1_cache& in_gauss_ds_1, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_ds_1
	auto in_gauss_ds_1_1_m_in_gauss_blur_2_1__p___m_1_c__1_m_in_gauss_blur_2_0__p___m_1_value = in_gauss_ds_1_in_gauss_blur_2_update_0_read_bundle_read(in_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = reduce_gauss_unrolled_1(in_gauss_ds_1_1_m_in_gauss_blur_2_1__p___m_1_c__1_m_in_gauss_blur_2_0__p___m_1_value);
	// Produce: in_gauss_blur_2
	in_gauss_blur_2_in_gauss_blur_2_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_blur_2, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void in_gauss_ds_2_update_0(in_gauss_blur_2_cache& in_gauss_blur_2, in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_blur_2
	auto in_gauss_blur_2_2_m_in_gauss_ds_2_1__p__0_c__2_m_in_gauss_ds_2_0__p__0_value = in_gauss_blur_2_in_gauss_ds_2_update_0_read_bundle_read(in_gauss_blur_2/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = id_unrolled_1(in_gauss_blur_2_2_m_in_gauss_ds_2_1__p__0_c__2_m_in_gauss_ds_2_0__p__0_value);
	// Produce: in_gauss_ds_2
	in_gauss_ds_2_in_gauss_ds_2_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_ds_2, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void in_gauss_blur_3_update_0(in_gauss_ds_2_cache& in_gauss_ds_2, in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_ds_2
	auto in_gauss_ds_2_1_m_in_gauss_blur_3_1__p___m_1_c__1_m_in_gauss_blur_3_0__p___m_1_value = in_gauss_ds_2_in_gauss_blur_3_update_0_read_bundle_read(in_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = reduce_gauss_unrolled_1(in_gauss_ds_2_1_m_in_gauss_blur_3_1__p___m_1_c__1_m_in_gauss_blur_3_0__p___m_1_value);
	// Produce: in_gauss_blur_3
	in_gauss_blur_3_in_gauss_blur_3_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_blur_3, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void in_gauss_ds_3_update_0(in_gauss_blur_3_cache& in_gauss_blur_3, in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_blur_3
	auto in_gauss_blur_3_2_m_in_gauss_ds_3_1__p__0_c__2_m_in_gauss_ds_3_0__p__0_value = in_gauss_blur_3_in_gauss_ds_3_update_0_read_bundle_read(in_gauss_blur_3/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = id_unrolled_1(in_gauss_blur_3_2_m_in_gauss_ds_3_1__p__0_c__2_m_in_gauss_ds_3_0__p__0_value);
	// Produce: in_gauss_ds_3
	in_gauss_ds_3_in_gauss_ds_3_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_ds_3, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

inline void gp_fpga_2_update_0(in_gauss_ds_3_cache& in_gauss_ds_3, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */gp_fpga_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_ds_3
	auto in_gauss_ds_3_1_m_gp_fpga_2_1__p__0_c__1_m_gp_fpga_2_0__p__0_value = in_gauss_ds_3_gp_fpga_2_update_0_read_bundle_read(in_gauss_ds_3/* source_delay */, d0, d1, 0);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

	auto compute_result = id_unrolled_1(in_gauss_ds_3_1_m_gp_fpga_2_1__p__0_c__1_m_gp_fpga_2_0__p__0_value);
	// Produce: gp_fpga_2
	gp_fpga_2.write(compute_result);

#ifndef __SYNTHESIS__
#endif //__SYNTHESIS__

}

// Driver function
void gp_fpga_2_opt(HWStream<hw_uint<32> >& /* get_args num ports = 2 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */gp_fpga_2) {

#ifndef __SYNTHESIS__
  ofstream debug_file("gp_fpga_2_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__SYNTHESIS__
  in_cache in;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  in_gauss_blur_1_cache in_gauss_blur_1;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  in_gauss_blur_2_cache in_gauss_blur_2;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  in_gauss_blur_3_cache in_gauss_blur_3;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  in_gauss_ds_1_cache in_gauss_ds_1;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  in_gauss_ds_2_cache in_gauss_ds_2;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
  in_gauss_ds_3_cache in_gauss_ds_3;
#ifdef __SYNTHESIS__
#endif //__SYNTHESIS__
#ifdef __SYNTHESIS__
#pragma HLS inline recursive
#endif // __SYNTHESIS__

// schedule: { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -2 <= d0 <= 958 and -2 <= d1 <= 538; in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 6] : 0 <= d0 <= 478 and 0 <= d1 <= 268; in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 5] : -1 <= d0 <= 479 and -1 <= d1 <= 269; in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -3 <= d0 <= 959 and -3 <= d1 <= 539; in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -3 <= d0 <= 959 and -6 <= d1 <= 1078; in_update_0[d0, d1] -> [d1, d0, 1] : -4 <= d0 <= 960 and -7 <= d1 <= 1079; gp_fpga_2_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 134; in_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
//   { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -2 <= d0 <= 958 and -2 <= d1 <= 538 }
// Condition for in_gauss_blur_2_update_0(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-4 + 1*i2)) == 0) && (((1*i1)) >= 0) && (((960 + -1*i1)) >= 0) && (((1 + 1*i0)) >= 0) && (((1079 + -1*i0)) >= 0)))
//   { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 4 + 2d0, 6] : 0 <= d0 <= 478 and 0 <= d1 <= 268 }
// Condition for in_gauss_blur_3_update_0(((((-1 + -1*i0 + (4*(((1 + 1*i0)) >> 2)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-6 + 1*i2)) == 0) && (((-4 + 1*i1)) >= 0) && (((960 + -1*i1)) >= 0) && (((-7 + 1*i0)) >= 0) && (((1079 + -1*i0)) >= 0)))
//   { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + 2d0, 5] : -1 <= d0 <= 479 and -1 <= d1 <= 269 }
// Condition for in_gauss_ds_2_update_0(((((-1 + -1*i0 + (4*(((1 + 1*i0)) >> 2)))) == 0) && (((-1*i1 + (2*(((1*i1)) >> 1)))) == 0) && (((-5 + 1*i2)) == 0) && (((1*i1)) >= 0) && (((960 + -1*i1)) >= 0) && (((1 + 1*i0)) >= 0) && (((1079 + -1*i0)) >= 0)))
//   { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -3 <= d0 <= 959 and -3 <= d1 <= 539 }
// Condition for in_gauss_ds_1_update_0(((((-1 + -1*i0 + (2*(((1 + 1*i0)) >> 1)))) == 0) && (((-3 + 1*i2)) == 0) && (((2 + 1*i1)) >= 0) && (((960 + -1*i1)) >= 0) && (((5 + 1*i0)) >= 0) && (((1079 + -1*i0)) >= 0)))
//   { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -3 <= d0 <= 959 and -6 <= d1 <= 1078 }
// Condition for in_gauss_blur_1_update_0(((((-2 + 1*i2)) == 0) && (((2 + 1*i1)) >= 0) && (((960 + -1*i1)) >= 0) && (((5 + 1*i0)) >= 0) && (((1079 + -1*i0)) >= 0)))
//   { in_update_0[d0, d1] -> [d1, d0, 1] : -4 <= d0 <= 960 and -7 <= d1 <= 1079 }
// Condition for in_update_0(((((-1 + 1*i2)) == 0) && (((4 + 1*i1)) >= 0) && (((960 + -1*i1)) >= 0) && (((7 + 1*i0)) >= 0) && (((1079 + -1*i0)) >= 0)))
//   { gp_fpga_2_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 8] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
// Condition for gp_fpga_2_update_0(((((-1 + -1*i0 + (8*(((1 + 1*i0)) >> 3)))) == 0) && (((-1*i1 + (4*(((1*i1)) >> 2)))) == 0) && (((-8 + 1*i2)) == 0) && (((-4 + 1*i1)) >= 0) && (((960 + -1*i1)) >= 0) && (((-7 + 1*i0)) >= 0) && (((1079 + -1*i0)) >= 0)))
//   { in_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 4 + 4d0, 7] : 0 <= d0 <= 239 and 0 <= d1 <= 134 }
// Condition for in_gauss_ds_3_update_0(((((-1 + -1*i0 + (8*(((1 + 1*i0)) >> 3)))) == 0) && (((-1*i1 + (4*(((1*i1)) >> 2)))) == 0) && (((-7 + 1*i2)) == 0) && (((-4 + 1*i1)) >= 0) && (((960 + -1*i1)) >= 0) && (((-7 + 1*i0)) >= 0) && (((1079 + -1*i0)) >= 0)))

	  // Schedules...
	    // gp_fpga_2_update_0 -> [1*d1*1*8 + 1*7,1*d0*1*4 + 1*4,1*8]
	    // in_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // in_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*3,1*d0*1*1 + 1*2,1*4]
	    // in_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*7,1*d0*1*2 + 1*4,1*6]
	    // in_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*1,1*d0*1*1 + 1*1,1*3]
	    // in_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*3,1*d0*1*2 + 1*2,1*5]
	    // in_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*7,1*d0*1*4 + 1*4,1*7]
	    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	for (int c0 = -7; c0 <= 1079; c0++) {
	  for (int c1 = -4; c1 <= 960; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-4 <= c1 && c1 <= 960) && ((c1 - 0) % 1 == 0) && (-7 <= c0 && c0 <= 1079) && ((c0 - 0) % 1 == 0)) {
	      in_update_0(in_off_chip /* buf name */, in, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((-2 <= c1 && c1 <= 960) && ((c1 - 1) % 1 == 0) && (-5 <= c0 && c0 <= 1079) && ((c0 - 1) % 1 == 0)) {
	      in_gauss_blur_1_update_0(in /* buf name */, in_gauss_blur_1, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((-2 <= c1 && c1 <= 960) && ((c1 - 1) % 1 == 0) && (-5 <= c0 && c0 <= 1079) && ((c0 - 1) % 2 == 0)) {
	      in_gauss_ds_1_update_0(in_gauss_blur_1 /* buf name */, in_gauss_ds_1, (c1 - 1) / 1, (c0 - 1) / 2);
	    }
	
	    if ((0 <= c1 && c1 <= 960) && ((c1 - 2) % 1 == 0) && (-1 <= c0 && c0 <= 1079) && ((c0 - 3) % 2 == 0)) {
	      in_gauss_blur_2_update_0(in_gauss_ds_1 /* buf name */, in_gauss_blur_2, (c1 - 2) / 1, (c0 - 3) / 2);
	    }
	
	    if ((0 <= c1 && c1 <= 960) && ((c1 - 2) % 2 == 0) && (-1 <= c0 && c0 <= 1079) && ((c0 - 3) % 4 == 0)) {
	      in_gauss_ds_2_update_0(in_gauss_blur_2 /* buf name */, in_gauss_ds_2, (c1 - 2) / 2, (c0 - 3) / 4);
	    }
	
	    if ((4 <= c1 && c1 <= 960) && ((c1 - 4) % 2 == 0) && (7 <= c0 && c0 <= 1079) && ((c0 - 7) % 4 == 0)) {
	      in_gauss_blur_3_update_0(in_gauss_ds_2 /* buf name */, in_gauss_blur_3, (c1 - 4) / 2, (c0 - 7) / 4);
	    }
	
	    if ((4 <= c1 && c1 <= 960) && ((c1 - 4) % 4 == 0) && (7 <= c0 && c0 <= 1079) && ((c0 - 7) % 8 == 0)) {
	      in_gauss_ds_3_update_0(in_gauss_blur_3 /* buf name */, in_gauss_ds_3, (c1 - 4) / 4, (c0 - 7) / 8);
	    }
	
	    if ((4 <= c1 && c1 <= 960) && ((c1 - 4) % 4 == 0) && (7 <= c0 && c0 <= 1079) && ((c0 - 7) % 8 == 0)) {
	      gp_fpga_2_update_0(in_gauss_ds_3 /* buf name */, gp_fpga_2, (c1 - 4) / 4, (c0 - 7) / 8);
	    }
	
	  }
	}
	
#ifndef __SYNTHESIS__
  debug_file.close();
#endif //__SYNTHESIS__
}

void gp_fpga_2_opt_wrapper(HWStream<hw_uint<32> >& /* get_args num ports = 2 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */gp_fpga_2, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    gp_fpga_2_opt(in_off_chip, gp_fpga_2);
  }
}
#ifdef __SYNTHESIS__
  // { gp_fpga_2_update_0[root = 0, gp_fpga_2_0, gp_fpga_2_1] -> gp_fpga_2[gp_fpga_2_1, gp_fpga_2_0] : 0 <= gp_fpga_2_0 <= 134 and 0 <= gp_fpga_2_1 <= 239 }
const int gp_fpga_2_update_0_write_pipe0_num_transfers = 32400;
  // { in_update_0[root = 0, in_0, in_1] -> in_off_chip[in_1, in_0] : -7 <= in_0 <= 1079 and -4 <= in_1 <= 960 }
const int in_update_0_read_pipe0_num_transfers = 1048955;


extern "C" {

void gp_fpga_2_opt_accel(hw_uint<32>* in_update_0_read_pipe0, hw_uint<16>* gp_fpga_2_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = gp_fpga_2_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = gp_fpga_2_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<32> > in_update_0_read_pipe0_channel;
  static HWStream<hw_uint<16> > gp_fpga_2_update_0_write_pipe0_channel;

  burst_read<32>(in_update_0_read_pipe0, in_update_0_read_pipe0_channel, in_update_0_read_pipe0_num_transfers*size);

  gp_fpga_2_opt_wrapper(in_update_0_read_pipe0_channel, gp_fpga_2_update_0_write_pipe0_channel, size);

  burst_write<16>(gp_fpga_2_update_0_write_pipe0, gp_fpga_2_update_0_write_pipe0_channel, gp_fpga_2_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void gp_fpga_2_opt_rdai(HWStream<hw_uint<32> >& in_update_0_read_pipe0, HWStream<hw_uint<16> >&  gp_fpga_2_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = gp_fpga_2_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  gp_fpga_2_opt(in_update_0_read_pipe0, gp_fpga_2_update_0_write_pipe0);

}

}
#endif //__SYNTHESIS__

