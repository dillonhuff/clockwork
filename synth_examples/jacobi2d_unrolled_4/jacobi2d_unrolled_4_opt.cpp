#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "jacobi2d_unrolled_4_opt_compute_units.h"

#include "hw_classes.h"

struct t1_t1_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-4, 16], [-1, 16]}
	// Capacity: 14
	// # of read delays: 5
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 4> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 5> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_5() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_6() {
		return f4;
	}

	inline hw_uint<32>  peek_7() {
		return f6;
	}

	inline hw_uint<32>  peek_12() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_13() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 5
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 5 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct t1_t1_update_0_write1_merged_banks_5_cache {
	// RAM Box: {[-3, 17], [-1, 16]}
	// Capacity: 14
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 5> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 5> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_7() {
		return f4;
	}

	inline hw_uint<32>  peek_12() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_13() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 5
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 5 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 5
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 5 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct t1_t1_update_0_write2_merged_banks_5_cache {
	// RAM Box: {[-2, 18], [-1, 16]}
	// Capacity: 14
	// # of read delays: 4
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 5> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 5> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_7() {
		return f4;
	}

	inline hw_uint<32>  peek_12() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_13() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 5
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 5 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 5
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 5 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct t1_t1_update_0_write3_merged_banks_5_cache {
	// RAM Box: {[-1, 19], [-1, 16]}
	// Capacity: 14
	// # of read delays: 5
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 5> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 4> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_6() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_7() {
		return f4;
	}

	inline hw_uint<32>  peek_8() {
		return f6;
	}

	inline hw_uint<32>  peek_12() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_13() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 4
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 4 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 5
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 5 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct t1_cache {
  t1_t1_update_0_write0_merged_banks_5_cache t1_t1_update_0_write0_merged_banks_5;
  t1_t1_update_0_write1_merged_banks_5_cache t1_t1_update_0_write1_merged_banks_5;
  t1_t1_update_0_write2_merged_banks_5_cache t1_t1_update_0_write2_merged_banks_5;
  t1_t1_update_0_write3_merged_banks_5_cache t1_t1_update_0_write3_merged_banks_5;
};



inline void t1_t1_update_0_write0_write(hw_uint<32> & t1_t1_update_0_write0, t1_cache& t1, int d0, int d1) {
  t1.t1_t1_update_0_write0_merged_banks_5.push(t1_t1_update_0_write0);
}

inline void t1_t1_update_0_write1_write(hw_uint<32> & t1_t1_update_0_write1, t1_cache& t1, int d0, int d1) {
  t1.t1_t1_update_0_write1_merged_banks_5.push(t1_t1_update_0_write1);
}

inline void t1_t1_update_0_write2_write(hw_uint<32> & t1_t1_update_0_write2, t1_cache& t1, int d0, int d1) {
  t1.t1_t1_update_0_write2_merged_banks_5.push(t1_t1_update_0_write2);
}

inline void t1_t1_update_0_write3_write(hw_uint<32> & t1_t1_update_0_write3, t1_cache& t1, int d0, int d1) {
  t1.t1_t1_update_0_write3_merged_banks_5.push(t1_t1_update_0_write3);
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd0_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_4_rd0 read pattern: { jacobi2d_unrolled_4_update_0[d0, d1] -> t1[-1 + 4d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_4_update_0[d0, d1] -> 8 : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write3 = t1.t1_t1_update_0_write3_merged_banks_5.peek_8();
  return value_t1_t1_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd1_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_4_rd1 read pattern: { jacobi2d_unrolled_4_update_0[d0, d1] -> t1[4d0, -1 + d1] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_4_update_0[d0, d1] -> 13 : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write0 = t1.t1_t1_update_0_write0_merged_banks_5.peek_13();
  return value_t1_t1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd10_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_4_rd10 read pattern: { jacobi2d_unrolled_4_update_0[d0, d1] -> t1[1 + 4d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_4_update_0[d0, d1] -> 7 : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write1 = t1.t1_t1_update_0_write1_merged_banks_5.peek_7();
  return value_t1_t1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd11_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_4_rd11 read pattern: { jacobi2d_unrolled_4_update_0[d0, d1] -> t1[2 + 4d0, -1 + d1] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_4_update_0[d0, d1] -> 13 : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write2 = t1.t1_t1_update_0_write2_merged_banks_5.peek_13();
  return value_t1_t1_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd12_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_4_rd12 read pattern: { jacobi2d_unrolled_4_update_0[d0, d1] -> t1[2 + 4d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_4_update_0[d0, d1] -> 7 : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write2 = t1.t1_t1_update_0_write2_merged_banks_5.peek_7();
  return value_t1_t1_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd13_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_4_rd13 read pattern: { jacobi2d_unrolled_4_update_0[d0, d1] -> t1[2 + 4d0, 1 + d1] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_4_update_0[d0, d1] -> 1 : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write2 = t1.t1_t1_update_0_write2_merged_banks_5.peek_1();
  return value_t1_t1_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd14_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_4_rd14 read pattern: { jacobi2d_unrolled_4_update_0[d0, d1] -> t1[3 + 4d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_4_update_0[d0, d1] -> 7 : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write3 = t1.t1_t1_update_0_write3_merged_banks_5.peek_7();
  return value_t1_t1_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd15_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_4_rd15 read pattern: { jacobi2d_unrolled_4_update_0[d0, d1] -> t1[2 + 4d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_4_update_0[d0, d1] -> 7 : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write2 = t1.t1_t1_update_0_write2_merged_banks_5.peek_7();
  return value_t1_t1_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd16_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_4_rd16 read pattern: { jacobi2d_unrolled_4_update_0[d0, d1] -> t1[3 + 4d0, -1 + d1] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_4_update_0[d0, d1] -> 13 : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write3 = t1.t1_t1_update_0_write3_merged_banks_5.peek_13();
  return value_t1_t1_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd17_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_4_rd17 read pattern: { jacobi2d_unrolled_4_update_0[d0, d1] -> t1[3 + 4d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_4_update_0[d0, d1] -> 7 : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write3 = t1.t1_t1_update_0_write3_merged_banks_5.peek_7();
  return value_t1_t1_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd18_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_4_rd18 read pattern: { jacobi2d_unrolled_4_update_0[d0, d1] -> t1[3 + 4d0, 1 + d1] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_4_update_0[d0, d1] -> 1 : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write3 = t1.t1_t1_update_0_write3_merged_banks_5.peek_1();
  return value_t1_t1_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd19_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_4_rd19 read pattern: { jacobi2d_unrolled_4_update_0[d0, d1] -> t1[4 + 4d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_4_update_0[d0, d1] -> 6 : 0 <= d0 <= 2 and 0 <= d1 <= 15; jacobi2d_unrolled_4_update_0[d0, d1] -> (3 + d0) : d0 = 3 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write0 = t1.t1_t1_update_0_write0_merged_banks_5.peek_6();
  return value_t1_t1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd2_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_4_rd2 read pattern: { jacobi2d_unrolled_4_update_0[d0, d1] -> t1[4d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_4_update_0[d0, d1] -> 7 : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write0 = t1.t1_t1_update_0_write0_merged_banks_5.peek_7();
  return value_t1_t1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd3_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_4_rd3 read pattern: { jacobi2d_unrolled_4_update_0[d0, d1] -> t1[4d0, 1 + d1] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_4_update_0[d0, d1] -> 1 : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write0 = t1.t1_t1_update_0_write0_merged_banks_5.peek_1();
  return value_t1_t1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd4_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_4_rd4 read pattern: { jacobi2d_unrolled_4_update_0[d0, d1] -> t1[1 + 4d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_4_update_0[d0, d1] -> 7 : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write1 = t1.t1_t1_update_0_write1_merged_banks_5.peek_7();
  return value_t1_t1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd5_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_4_rd5 read pattern: { jacobi2d_unrolled_4_update_0[d0, d1] -> t1[4d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_4_update_0[d0, d1] -> 7 : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write0 = t1.t1_t1_update_0_write0_merged_banks_5.peek_7();
  return value_t1_t1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd6_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_4_rd6 read pattern: { jacobi2d_unrolled_4_update_0[d0, d1] -> t1[1 + 4d0, -1 + d1] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_4_update_0[d0, d1] -> 13 : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write1 = t1.t1_t1_update_0_write1_merged_banks_5.peek_13();
  return value_t1_t1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd7_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_4_rd7 read pattern: { jacobi2d_unrolled_4_update_0[d0, d1] -> t1[1 + 4d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_4_update_0[d0, d1] -> 7 : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write1 = t1.t1_t1_update_0_write1_merged_banks_5.peek_7();
  return value_t1_t1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd8_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_4_rd8 read pattern: { jacobi2d_unrolled_4_update_0[d0, d1] -> t1[1 + 4d0, 1 + d1] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_4_update_0[d0, d1] -> 1 : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write1 = t1.t1_t1_update_0_write1_merged_banks_5.peek_1();
  return value_t1_t1_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<32>  jacobi2d_unrolled_4_rd9_select(t1_cache& t1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // jacobi2d_unrolled_4_rd9 read pattern: { jacobi2d_unrolled_4_update_0[d0, d1] -> t1[2 + 4d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Read schedule : { jacobi2d_unrolled_4_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  // Write schedule: { t1_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 4 and -1 <= d1 <= 16 }
  // DD fold: { jacobi2d_unrolled_4_update_0[d0, d1] -> 7 : 0 <= d0 <= 3 and 0 <= d1 <= 15 }
  auto value_t1_t1_update_0_write2 = t1.t1_t1_update_0_write2_merged_banks_5.peek_7();
  return value_t1_t1_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// jacobi2d_unrolled_4_update_0_read
//	jacobi2d_unrolled_4_rd0
//	jacobi2d_unrolled_4_rd1
//	jacobi2d_unrolled_4_rd2
//	jacobi2d_unrolled_4_rd3
//	jacobi2d_unrolled_4_rd4
//	jacobi2d_unrolled_4_rd5
//	jacobi2d_unrolled_4_rd6
//	jacobi2d_unrolled_4_rd7
//	jacobi2d_unrolled_4_rd8
//	jacobi2d_unrolled_4_rd9
//	jacobi2d_unrolled_4_rd10
//	jacobi2d_unrolled_4_rd11
//	jacobi2d_unrolled_4_rd12
//	jacobi2d_unrolled_4_rd13
//	jacobi2d_unrolled_4_rd14
//	jacobi2d_unrolled_4_rd15
//	jacobi2d_unrolled_4_rd16
//	jacobi2d_unrolled_4_rd17
//	jacobi2d_unrolled_4_rd18
//	jacobi2d_unrolled_4_rd19
inline hw_uint<640> t1_jacobi2d_unrolled_4_update_0_read_bundle_read(t1_cache& t1, int d0, int d1) {
  // # of ports in bundle: 20
    // jacobi2d_unrolled_4_rd0
    // jacobi2d_unrolled_4_rd1
    // jacobi2d_unrolled_4_rd2
    // jacobi2d_unrolled_4_rd3
    // jacobi2d_unrolled_4_rd4
    // jacobi2d_unrolled_4_rd5
    // jacobi2d_unrolled_4_rd6
    // jacobi2d_unrolled_4_rd7
    // jacobi2d_unrolled_4_rd8
    // jacobi2d_unrolled_4_rd9
    // jacobi2d_unrolled_4_rd10
    // jacobi2d_unrolled_4_rd11
    // jacobi2d_unrolled_4_rd12
    // jacobi2d_unrolled_4_rd13
    // jacobi2d_unrolled_4_rd14
    // jacobi2d_unrolled_4_rd15
    // jacobi2d_unrolled_4_rd16
    // jacobi2d_unrolled_4_rd17
    // jacobi2d_unrolled_4_rd18
    // jacobi2d_unrolled_4_rd19

	hw_uint<640> result;
	hw_uint<32>  jacobi2d_unrolled_4_rd0_res = jacobi2d_unrolled_4_rd0_select(t1, d0, d1);
	set_at<0, 640>(result, jacobi2d_unrolled_4_rd0_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd1_res = jacobi2d_unrolled_4_rd1_select(t1, d0, d1);
	set_at<32, 640>(result, jacobi2d_unrolled_4_rd1_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd2_res = jacobi2d_unrolled_4_rd2_select(t1, d0, d1);
	set_at<64, 640>(result, jacobi2d_unrolled_4_rd2_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd3_res = jacobi2d_unrolled_4_rd3_select(t1, d0, d1);
	set_at<96, 640>(result, jacobi2d_unrolled_4_rd3_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd4_res = jacobi2d_unrolled_4_rd4_select(t1, d0, d1);
	set_at<128, 640>(result, jacobi2d_unrolled_4_rd4_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd5_res = jacobi2d_unrolled_4_rd5_select(t1, d0, d1);
	set_at<160, 640>(result, jacobi2d_unrolled_4_rd5_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd6_res = jacobi2d_unrolled_4_rd6_select(t1, d0, d1);
	set_at<192, 640>(result, jacobi2d_unrolled_4_rd6_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd7_res = jacobi2d_unrolled_4_rd7_select(t1, d0, d1);
	set_at<224, 640>(result, jacobi2d_unrolled_4_rd7_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd8_res = jacobi2d_unrolled_4_rd8_select(t1, d0, d1);
	set_at<256, 640>(result, jacobi2d_unrolled_4_rd8_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd9_res = jacobi2d_unrolled_4_rd9_select(t1, d0, d1);
	set_at<288, 640>(result, jacobi2d_unrolled_4_rd9_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd10_res = jacobi2d_unrolled_4_rd10_select(t1, d0, d1);
	set_at<320, 640>(result, jacobi2d_unrolled_4_rd10_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd11_res = jacobi2d_unrolled_4_rd11_select(t1, d0, d1);
	set_at<352, 640>(result, jacobi2d_unrolled_4_rd11_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd12_res = jacobi2d_unrolled_4_rd12_select(t1, d0, d1);
	set_at<384, 640>(result, jacobi2d_unrolled_4_rd12_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd13_res = jacobi2d_unrolled_4_rd13_select(t1, d0, d1);
	set_at<416, 640>(result, jacobi2d_unrolled_4_rd13_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd14_res = jacobi2d_unrolled_4_rd14_select(t1, d0, d1);
	set_at<448, 640>(result, jacobi2d_unrolled_4_rd14_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd15_res = jacobi2d_unrolled_4_rd15_select(t1, d0, d1);
	set_at<480, 640>(result, jacobi2d_unrolled_4_rd15_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd16_res = jacobi2d_unrolled_4_rd16_select(t1, d0, d1);
	set_at<512, 640>(result, jacobi2d_unrolled_4_rd16_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd17_res = jacobi2d_unrolled_4_rd17_select(t1, d0, d1);
	set_at<544, 640>(result, jacobi2d_unrolled_4_rd17_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd18_res = jacobi2d_unrolled_4_rd18_select(t1, d0, d1);
	set_at<576, 640>(result, jacobi2d_unrolled_4_rd18_res);
	hw_uint<32>  jacobi2d_unrolled_4_rd19_res = jacobi2d_unrolled_4_rd19_select(t1, d0, d1);
	set_at<608, 640>(result, jacobi2d_unrolled_4_rd19_res);
	return result;
}

// t1_update_0_write
//	t1_t1_update_0_write0
//	t1_t1_update_0_write1
//	t1_t1_update_0_write2
//	t1_t1_update_0_write3
inline void t1_t1_update_0_write_bundle_write(hw_uint<128>& t1_update_0_write, t1_cache& t1, int d0, int d1) {
	hw_uint<32>  t1_t1_update_0_write0_res = t1_update_0_write.extract<0, 31>();
	t1_t1_update_0_write0_write(t1_t1_update_0_write0_res, t1, d0, d1);
	hw_uint<32>  t1_t1_update_0_write1_res = t1_update_0_write.extract<32, 63>();
	t1_t1_update_0_write1_write(t1_t1_update_0_write1_res, t1, d0, d1);
	hw_uint<32>  t1_t1_update_0_write2_res = t1_update_0_write.extract<64, 95>();
	t1_t1_update_0_write2_write(t1_t1_update_0_write2_res, t1, d0, d1);
	hw_uint<32>  t1_t1_update_0_write3_res = t1_update_0_write.extract<96, 127>();
	t1_t1_update_0_write3_write(t1_t1_update_0_write3_res, t1, d0, d1);
}



// Operation logic
inline void t1_update_0(HWStream<hw_uint<128> >& /* buffer_args num ports = 4 */t1_arg, t1_cache& t1, int d0, int d1) {
	// Consume: t1_arg
	auto t1_arg_0_c__0_value = t1_arg.read();
	auto compute_result = id_unrolled_4(t1_arg_0_c__0_value);
	// Produce: t1
	t1_t1_update_0_write_bundle_write(compute_result, t1, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void jacobi2d_unrolled_4_update_0(t1_cache& t1, HWStream<hw_uint<128> >& /* buffer_args num ports = 4 */jacobi2d_unrolled_4, int d0, int d1) {
	// Consume: t1
	auto t1_0_c__0_value = t1_jacobi2d_unrolled_4_update_0_read_bundle_read(t1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = jacobi2d_compute_unrolled_4(t1_0_c__0_value);
	// Produce: jacobi2d_unrolled_4
	jacobi2d_unrolled_4.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void jacobi2d_unrolled_4_opt(HWStream<hw_uint<128> >& /* get_args num ports = 4 */t1_arg, HWStream<hw_uint<128> >& /* get_args num ports = 4 */jacobi2d_unrolled_4, int num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("jacobi2d_unrolled_4_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  t1_cache t1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

  for (int epoch = 0; epoch < num_epochs; epoch++) {
	  // Schedules...
	    // jacobi2d_unrolled_4_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // t1_arg_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // t1_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	for (int c0 = -1; c0 <= 16; c0++) {
	  for (int c1 = -1; c1 <= 4; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-1 <= c1 && c1 <= 4) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 16) && ((c0 - 0) % 1 == 0)) {
	t1_update_0(t1_arg, t1, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 4) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 16) && ((c0 - 1) % 1 == 0)) {
	jacobi2d_unrolled_4_update_0(t1, jacobi2d_unrolled_4, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	  }
	}
	
  }

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void jacobi2d_unrolled_4_opt(HWStream<hw_uint<128> >& /* get_args num ports = 4 */t1_arg, HWStream<hw_uint<128> >& /* get_args num ports = 4 */jacobi2d_unrolled_4) {

  jacobi2d_unrolled_4_opt(t1_arg, jacobi2d_unrolled_4, 1);
}
#ifdef __VIVADO_SYNTH__
#include "jacobi2d_unrolled_4_opt.h"

const int jacobi2d_unrolled_4_update_0_write_num_transfers = 64;
const int t1_update_0_read_num_transfers = 108;


extern "C" {

static void read_t1_update_0_read(hw_uint<128>* input, HWStream<hw_uint<128> >& v, const int size) {
  hw_uint<128> burst_reg;
  int num_transfers = t1_update_0_read_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_jacobi2d_unrolled_4_update_0_write(hw_uint<128>* output, HWStream<hw_uint<128> >& v, const int size) {
  hw_uint<128> burst_reg;
  int num_transfers = jacobi2d_unrolled_4_update_0_write_num_transfers*size;
  for (int i = 0; i < num_transfers; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void jacobi2d_unrolled_4_opt_accel(hw_uint<128>* t1_update_0_read, hw_uint<128>* jacobi2d_unrolled_4_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = t1_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = jacobi2d_unrolled_4_update_0_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = t1_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = jacobi2d_unrolled_4_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<128> > t1_update_0_read_channel;
  static HWStream<hw_uint<128> > jacobi2d_unrolled_4_update_0_write_channel;

  read_t1_update_0_read(t1_update_0_read, t1_update_0_read_channel, size);

  jacobi2d_unrolled_4_opt(t1_update_0_read_channel, jacobi2d_unrolled_4_update_0_write_channel, size);

  write_jacobi2d_unrolled_4_update_0_write(jacobi2d_unrolled_4_update_0_write, jacobi2d_unrolled_4_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

