#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
#include "gp_4_opt_compute_units.h"

#include "hw_classes.h"

struct in_in_update_0_write0_merged_banks_6_cache {
	// RAM Box: {[0, 80], [0, 78]}
	// Capacity: 44
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 19> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 19> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_20() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_21() {
		return f4;
	}

	inline hw_uint<16> peek_22() {
		return f6;
	}

	inline hw_uint<16> peek_41() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_42() {
		return f8;
	}

	inline hw_uint<16> peek_43() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 19
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 19 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 19
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 19 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write1_merged_banks_3_cache {
	// RAM Box: {[1, 81], [0, 78]}
	// Capacity: 44
	// # of read delays: 4
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 20> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 20> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_21() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_22() {
		return f4;
	}

	inline hw_uint<16> peek_42() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_43() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 20
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 20 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 20
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 20 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write2_merged_banks_6_cache {
	// RAM Box: {[2, 82], [0, 78]}
	// Capacity: 44
	// # of read delays: 4
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 20> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 20> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_21() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_22() {
		return f4;
	}

	inline hw_uint<16> peek_42() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_43() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 20
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 20 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 20
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 20 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write3_merged_banks_3_cache {
	// RAM Box: {[3, 83], [0, 78]}
	// Capacity: 44
	// # of read delays: 4
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 20> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 20> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_21() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_22() {
		return f4;
	}

	inline hw_uint<16> peek_42() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_43() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 20
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 20 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 20
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 20 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_cache {
  in_in_update_0_write0_merged_banks_6_cache in_in_update_0_write0_merged_banks_6;
  in_in_update_0_write1_merged_banks_3_cache in_in_update_0_write1_merged_banks_3;
  in_in_update_0_write2_merged_banks_6_cache in_in_update_0_write2_merged_banks_6;
  in_in_update_0_write3_merged_banks_3_cache in_in_update_0_write3_merged_banks_3;
};



inline void in_in_update_0_write0_write(hw_uint<16>& in_in_update_0_write0, in_cache& in, int d0, int d1) {
  in.in_in_update_0_write0_merged_banks_6.push(in_in_update_0_write0);
}

inline void in_in_update_0_write1_write(hw_uint<16>& in_in_update_0_write1, in_cache& in, int d0, int d1) {
  in.in_in_update_0_write1_merged_banks_3.push(in_in_update_0_write1);
}

inline void in_in_update_0_write2_write(hw_uint<16>& in_in_update_0_write2, in_cache& in, int d0, int d1) {
  in.in_in_update_0_write2_merged_banks_6.push(in_in_update_0_write2);
}

inline void in_in_update_0_write3_write(hw_uint<16>& in_in_update_0_write3, in_cache& in, int d0, int d1) {
  in.in_in_update_0_write3_merged_banks_3.push(in_in_update_0_write3);
}

inline hw_uint<16> level_0_rd0_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd0 read pattern: { level_0_update_0[d0, d1] -> in[4d0, 2d1] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 20 and 0 <= d1 <= 78 }
  // DD fold: { level_0_update_0[d0, d1] -> 43 : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_6.peek_43();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_0_rd1_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd1 read pattern: { level_0_update_0[d0, d1] -> in[4d0, 1 + 2d1] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 20 and 0 <= d1 <= 78 }
  // DD fold: { level_0_update_0[d0, d1] -> 22 : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_6.peek_22();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_0_rd10_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd10 read pattern: { level_0_update_0[d0, d1] -> in[2 + 4d0, 1 + 2d1] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 20 and 0 <= d1 <= 78 }
  // DD fold: { level_0_update_0[d0, d1] -> 22 : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_6.peek_22();
  return value_in_in_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_0_rd11_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd11 read pattern: { level_0_update_0[d0, d1] -> in[2 + 4d0, 2 + 2d1] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 20 and 0 <= d1 <= 78 }
  // DD fold: { level_0_update_0[d0, d1] -> 1 : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_6.peek_1();
  return value_in_in_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_0_rd12_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd12 read pattern: { level_0_update_0[d0, d1] -> in[3 + 4d0, 2d1] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 20 and 0 <= d1 <= 78 }
  // DD fold: { level_0_update_0[d0, d1] -> 43 : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_3.peek_43();
  return value_in_in_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_0_rd13_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd13 read pattern: { level_0_update_0[d0, d1] -> in[3 + 4d0, 1 + 2d1] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 20 and 0 <= d1 <= 78 }
  // DD fold: { level_0_update_0[d0, d1] -> 22 : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_3.peek_22();
  return value_in_in_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_0_rd14_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd14 read pattern: { level_0_update_0[d0, d1] -> in[3 + 4d0, 2 + 2d1] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 20 and 0 <= d1 <= 78 }
  // DD fold: { level_0_update_0[d0, d1] -> 1 : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_3.peek_1();
  return value_in_in_update_0_write3;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_0_rd15_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd15 read pattern: { level_0_update_0[d0, d1] -> in[4 + 4d0, 2d1] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 20 and 0 <= d1 <= 78 }
  // DD fold: { level_0_update_0[d0, d1] -> 42 : 0 <= d0 <= 18 and 0 <= d1 <= 38; level_0_update_0[d0, d1] -> (23 + d0) : d0 = 19 and 0 <= d1 <= 38 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_6.peek_42();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_0_rd16_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd16 read pattern: { level_0_update_0[d0, d1] -> in[4 + 4d0, 1 + 2d1] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 20 and 0 <= d1 <= 78 }
  // DD fold: { level_0_update_0[d0, d1] -> 21 : 0 <= d0 <= 18 and 0 <= d1 <= 38; level_0_update_0[d0, d1] -> (2 + d0) : d0 = 19 and 0 <= d1 <= 38 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_6.peek_21();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_0_rd17_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd17 read pattern: { level_0_update_0[d0, d1] -> in[4 + 4d0, 2 + 2d1] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 20 and 0 <= d1 <= 78 }
  // DD fold: {  }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_6.peek_0();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_0_rd2_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd2 read pattern: { level_0_update_0[d0, d1] -> in[4d0, 2 + 2d1] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 20 and 0 <= d1 <= 78 }
  // DD fold: { level_0_update_0[d0, d1] -> 1 : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_6.peek_1();
  return value_in_in_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_0_rd3_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd3 read pattern: { level_0_update_0[d0, d1] -> in[1 + 4d0, 2d1] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 20 and 0 <= d1 <= 78 }
  // DD fold: { level_0_update_0[d0, d1] -> 43 : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_3.peek_43();
  return value_in_in_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_0_rd4_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd4 read pattern: { level_0_update_0[d0, d1] -> in[1 + 4d0, 1 + 2d1] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 20 and 0 <= d1 <= 78 }
  // DD fold: { level_0_update_0[d0, d1] -> 22 : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_3.peek_22();
  return value_in_in_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_0_rd5_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd5 read pattern: { level_0_update_0[d0, d1] -> in[1 + 4d0, 2 + 2d1] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 20 and 0 <= d1 <= 78 }
  // DD fold: { level_0_update_0[d0, d1] -> 1 : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_3.peek_1();
  return value_in_in_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_0_rd6_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd6 read pattern: { level_0_update_0[d0, d1] -> in[2 + 4d0, 2d1] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 20 and 0 <= d1 <= 78 }
  // DD fold: { level_0_update_0[d0, d1] -> 43 : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_6.peek_43();
  return value_in_in_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_0_rd7_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd7 read pattern: { level_0_update_0[d0, d1] -> in[2 + 4d0, 1 + 2d1] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 20 and 0 <= d1 <= 78 }
  // DD fold: { level_0_update_0[d0, d1] -> 22 : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_6.peek_22();
  return value_in_in_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_0_rd8_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd8 read pattern: { level_0_update_0[d0, d1] -> in[2 + 4d0, 2 + 2d1] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 20 and 0 <= d1 <= 78 }
  // DD fold: { level_0_update_0[d0, d1] -> 1 : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_6.peek_1();
  return value_in_in_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_0_rd9_select(in_cache& in, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd9 read pattern: { level_0_update_0[d0, d1] -> in[2 + 4d0, 2d1] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 20 and 0 <= d1 <= 78 }
  // DD fold: { level_0_update_0[d0, d1] -> 43 : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_6.peek_43();
  return value_in_in_update_0_write2;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// in_update_0_write
//	in_in_update_0_write0
//	in_in_update_0_write1
//	in_in_update_0_write2
//	in_in_update_0_write3
inline void in_in_update_0_write_bundle_write(hw_uint<64>& in_update_0_write, in_cache& in, int d0, int d1) {
	hw_uint<16> in_in_update_0_write0_res = in_update_0_write.extract<0, 15>();
	in_in_update_0_write0_write(in_in_update_0_write0_res, in, d0, d1);
	hw_uint<16> in_in_update_0_write1_res = in_update_0_write.extract<16, 31>();
	in_in_update_0_write1_write(in_in_update_0_write1_res, in, d0, d1);
	hw_uint<16> in_in_update_0_write2_res = in_update_0_write.extract<32, 47>();
	in_in_update_0_write2_write(in_in_update_0_write2_res, in, d0, d1);
	hw_uint<16> in_in_update_0_write3_res = in_update_0_write.extract<48, 63>();
	in_in_update_0_write3_write(in_in_update_0_write3_res, in, d0, d1);
}

// level_0_update_0_read
//	level_0_rd0
//	level_0_rd1
//	level_0_rd2
//	level_0_rd3
//	level_0_rd4
//	level_0_rd5
//	level_0_rd6
//	level_0_rd7
//	level_0_rd8
//	level_0_rd9
//	level_0_rd10
//	level_0_rd11
//	level_0_rd12
//	level_0_rd13
//	level_0_rd14
//	level_0_rd15
//	level_0_rd16
//	level_0_rd17
inline hw_uint<288> in_level_0_update_0_read_bundle_read(in_cache& in, int d0, int d1) {
  // # of ports in bundle: 18
    // level_0_rd0
    // level_0_rd1
    // level_0_rd2
    // level_0_rd3
    // level_0_rd4
    // level_0_rd5
    // level_0_rd6
    // level_0_rd7
    // level_0_rd8
    // level_0_rd9
    // level_0_rd10
    // level_0_rd11
    // level_0_rd12
    // level_0_rd13
    // level_0_rd14
    // level_0_rd15
    // level_0_rd16
    // level_0_rd17

	hw_uint<288> result;
	hw_uint<16> level_0_rd0_res = level_0_rd0_select(in, d0, d1);
	set_at<0, 288>(result, level_0_rd0_res);
	hw_uint<16> level_0_rd1_res = level_0_rd1_select(in, d0, d1);
	set_at<16, 288>(result, level_0_rd1_res);
	hw_uint<16> level_0_rd2_res = level_0_rd2_select(in, d0, d1);
	set_at<32, 288>(result, level_0_rd2_res);
	hw_uint<16> level_0_rd3_res = level_0_rd3_select(in, d0, d1);
	set_at<48, 288>(result, level_0_rd3_res);
	hw_uint<16> level_0_rd4_res = level_0_rd4_select(in, d0, d1);
	set_at<64, 288>(result, level_0_rd4_res);
	hw_uint<16> level_0_rd5_res = level_0_rd5_select(in, d0, d1);
	set_at<80, 288>(result, level_0_rd5_res);
	hw_uint<16> level_0_rd6_res = level_0_rd6_select(in, d0, d1);
	set_at<96, 288>(result, level_0_rd6_res);
	hw_uint<16> level_0_rd7_res = level_0_rd7_select(in, d0, d1);
	set_at<112, 288>(result, level_0_rd7_res);
	hw_uint<16> level_0_rd8_res = level_0_rd8_select(in, d0, d1);
	set_at<128, 288>(result, level_0_rd8_res);
	hw_uint<16> level_0_rd9_res = level_0_rd9_select(in, d0, d1);
	set_at<144, 288>(result, level_0_rd9_res);
	hw_uint<16> level_0_rd10_res = level_0_rd10_select(in, d0, d1);
	set_at<160, 288>(result, level_0_rd10_res);
	hw_uint<16> level_0_rd11_res = level_0_rd11_select(in, d0, d1);
	set_at<176, 288>(result, level_0_rd11_res);
	hw_uint<16> level_0_rd12_res = level_0_rd12_select(in, d0, d1);
	set_at<192, 288>(result, level_0_rd12_res);
	hw_uint<16> level_0_rd13_res = level_0_rd13_select(in, d0, d1);
	set_at<208, 288>(result, level_0_rd13_res);
	hw_uint<16> level_0_rd14_res = level_0_rd14_select(in, d0, d1);
	set_at<224, 288>(result, level_0_rd14_res);
	hw_uint<16> level_0_rd15_res = level_0_rd15_select(in, d0, d1);
	set_at<240, 288>(result, level_0_rd15_res);
	hw_uint<16> level_0_rd16_res = level_0_rd16_select(in, d0, d1);
	set_at<256, 288>(result, level_0_rd16_res);
	hw_uint<16> level_0_rd17_res = level_0_rd17_select(in, d0, d1);
	set_at<272, 288>(result, level_0_rd17_res);
	return result;
}

#include "hw_classes.h"

struct level_0_level_0_update_0_write0_merged_banks_6_cache {
	// RAM Box: {[0, 38], [0, 38]}
	// Capacity: 42
	// # of read delays: 6
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 18> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 18> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_19() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_20() {
		return f4;
	}

	inline hw_uint<16> peek_21() {
		return f6;
	}

	inline hw_uint<16> peek_39() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_40() {
		return f8;
	}

	inline hw_uint<16> peek_41() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 18
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 18 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 18
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 18 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_0_level_0_update_0_write1_merged_banks_3_cache {
	// RAM Box: {[1, 39], [0, 38]}
	// Capacity: 42
	// # of read delays: 4
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 19> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 19> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_20() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_21() {
		return f4;
	}

	inline hw_uint<16> peek_40() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_41() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 19
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 19 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 19
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 19 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_0_cache {
  level_0_level_0_update_0_write0_merged_banks_6_cache level_0_level_0_update_0_write0_merged_banks_6;
  level_0_level_0_update_0_write1_merged_banks_3_cache level_0_level_0_update_0_write1_merged_banks_3;
};



inline void level_0_level_0_update_0_write0_write(hw_uint<16>& level_0_level_0_update_0_write0, level_0_cache& level_0, int d0, int d1) {
  level_0.level_0_level_0_update_0_write0_merged_banks_6.push(level_0_level_0_update_0_write0);
}

inline void level_0_level_0_update_0_write1_write(hw_uint<16>& level_0_level_0_update_0_write1, level_0_cache& level_0, int d0, int d1) {
  level_0.level_0_level_0_update_0_write1_merged_banks_3.push(level_0_level_0_update_0_write1);
}

inline hw_uint<16> level_1_rd0_select(level_0_cache& level_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd0 read pattern: { level_1_update_0[d0, d1] -> level_0[2d0, 2d1] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // DD fold: { level_1_update_0[d0, d1] -> 41 : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  auto value_level_0_level_0_update_0_write0 = level_0.level_0_level_0_update_0_write0_merged_banks_6.peek_41();
  return value_level_0_level_0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_1_rd1_select(level_0_cache& level_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd1 read pattern: { level_1_update_0[d0, d1] -> level_0[2d0, 1 + 2d1] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // DD fold: { level_1_update_0[d0, d1] -> 21 : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  auto value_level_0_level_0_update_0_write0 = level_0.level_0_level_0_update_0_write0_merged_banks_6.peek_21();
  return value_level_0_level_0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_1_rd2_select(level_0_cache& level_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd2 read pattern: { level_1_update_0[d0, d1] -> level_0[2d0, 2 + 2d1] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // DD fold: { level_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  auto value_level_0_level_0_update_0_write0 = level_0.level_0_level_0_update_0_write0_merged_banks_6.peek_1();
  return value_level_0_level_0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_1_rd3_select(level_0_cache& level_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd3 read pattern: { level_1_update_0[d0, d1] -> level_0[1 + 2d0, 2d1] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // DD fold: { level_1_update_0[d0, d1] -> 41 : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  auto value_level_0_level_0_update_0_write1 = level_0.level_0_level_0_update_0_write1_merged_banks_3.peek_41();
  return value_level_0_level_0_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_1_rd4_select(level_0_cache& level_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd4 read pattern: { level_1_update_0[d0, d1] -> level_0[1 + 2d0, 1 + 2d1] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // DD fold: { level_1_update_0[d0, d1] -> 21 : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  auto value_level_0_level_0_update_0_write1 = level_0.level_0_level_0_update_0_write1_merged_banks_3.peek_21();
  return value_level_0_level_0_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_1_rd5_select(level_0_cache& level_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd5 read pattern: { level_1_update_0[d0, d1] -> level_0[1 + 2d0, 2 + 2d1] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // DD fold: { level_1_update_0[d0, d1] -> 1 : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  auto value_level_0_level_0_update_0_write1 = level_0.level_0_level_0_update_0_write1_merged_banks_3.peek_1();
  return value_level_0_level_0_update_0_write1;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_1_rd6_select(level_0_cache& level_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd6 read pattern: { level_1_update_0[d0, d1] -> level_0[2 + 2d0, 2d1] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // DD fold: { level_1_update_0[d0, d1] -> 40 : 0 <= d0 <= 17 and 0 <= d1 <= 18; level_1_update_0[d0, d1] -> (22 + d0) : d0 = 18 and 0 <= d1 <= 18 }
  auto value_level_0_level_0_update_0_write0 = level_0.level_0_level_0_update_0_write0_merged_banks_6.peek_40();
  return value_level_0_level_0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_1_rd7_select(level_0_cache& level_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd7 read pattern: { level_1_update_0[d0, d1] -> level_0[2 + 2d0, 1 + 2d1] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // DD fold: { level_1_update_0[d0, d1] -> 20 : 0 <= d0 <= 17 and 0 <= d1 <= 18; level_1_update_0[d0, d1] -> (2 + d0) : d0 = 18 and 0 <= d1 <= 18 }
  auto value_level_0_level_0_update_0_write0 = level_0.level_0_level_0_update_0_write0_merged_banks_6.peek_20();
  return value_level_0_level_0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_1_rd8_select(level_0_cache& level_0, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd8 read pattern: { level_1_update_0[d0, d1] -> level_0[2 + 2d0, 2 + 2d1] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 19 and 0 <= d1 <= 38 }
  // DD fold: {  }
  auto value_level_0_level_0_update_0_write0 = level_0.level_0_level_0_update_0_write0_merged_banks_6.peek_0();
  return value_level_0_level_0_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// level_0_update_0_write
//	level_0_level_0_update_0_write0
//	level_0_level_0_update_0_write1
inline void level_0_level_0_update_0_write_bundle_write(hw_uint<32>& level_0_update_0_write, level_0_cache& level_0, int d0, int d1) {
	hw_uint<16> level_0_level_0_update_0_write0_res = level_0_update_0_write.extract<0, 15>();
	level_0_level_0_update_0_write0_write(level_0_level_0_update_0_write0_res, level_0, d0, d1);
	hw_uint<16> level_0_level_0_update_0_write1_res = level_0_update_0_write.extract<16, 31>();
	level_0_level_0_update_0_write1_write(level_0_level_0_update_0_write1_res, level_0, d0, d1);
}

// level_1_update_0_read
//	level_1_rd0
//	level_1_rd1
//	level_1_rd2
//	level_1_rd3
//	level_1_rd4
//	level_1_rd5
//	level_1_rd6
//	level_1_rd7
//	level_1_rd8
inline hw_uint<144> level_0_level_1_update_0_read_bundle_read(level_0_cache& level_0, int d0, int d1) {
  // # of ports in bundle: 9
    // level_1_rd0
    // level_1_rd1
    // level_1_rd2
    // level_1_rd3
    // level_1_rd4
    // level_1_rd5
    // level_1_rd6
    // level_1_rd7
    // level_1_rd8

	hw_uint<144> result;
	hw_uint<16> level_1_rd0_res = level_1_rd0_select(level_0, d0, d1);
	set_at<0, 144>(result, level_1_rd0_res);
	hw_uint<16> level_1_rd1_res = level_1_rd1_select(level_0, d0, d1);
	set_at<16, 144>(result, level_1_rd1_res);
	hw_uint<16> level_1_rd2_res = level_1_rd2_select(level_0, d0, d1);
	set_at<32, 144>(result, level_1_rd2_res);
	hw_uint<16> level_1_rd3_res = level_1_rd3_select(level_0, d0, d1);
	set_at<48, 144>(result, level_1_rd3_res);
	hw_uint<16> level_1_rd4_res = level_1_rd4_select(level_0, d0, d1);
	set_at<64, 144>(result, level_1_rd4_res);
	hw_uint<16> level_1_rd5_res = level_1_rd5_select(level_0, d0, d1);
	set_at<80, 144>(result, level_1_rd5_res);
	hw_uint<16> level_1_rd6_res = level_1_rd6_select(level_0, d0, d1);
	set_at<96, 144>(result, level_1_rd6_res);
	hw_uint<16> level_1_rd7_res = level_1_rd7_select(level_0, d0, d1);
	set_at<112, 144>(result, level_1_rd7_res);
	hw_uint<16> level_1_rd8_res = level_1_rd8_select(level_0, d0, d1);
	set_at<128, 144>(result, level_1_rd8_res);
	return result;
}

#include "hw_classes.h"

struct level_1_level_1_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 18], [0, 18]}
	// Capacity: 41
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 16> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 16> f11;
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

	inline hw_uint<16> peek_18() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_19() {
		return f6;
	}

	inline hw_uint<16> peek_20() {
		return f8;
	}

	inline hw_uint<16> peek_21() {
		return f10;
	}

	inline hw_uint<16> peek_37() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_38() {
		return f12;
	}

	inline hw_uint<16> peek_39() {
		return f14;
	}

	inline hw_uint<16> peek_40() {
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
    // cap: 1 reading from capacity: 16
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 16 reading from capacity: 1
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
    // cap: 1 reading from capacity: 16
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 16 reading from capacity: 1
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

struct level_1_cache {
  level_1_level_1_update_0_write0_merged_banks_9_cache level_1_level_1_update_0_write0_merged_banks_9;
};



inline void level_1_level_1_update_0_write0_write(hw_uint<16>& level_1_level_1_update_0_write0, level_1_cache& level_1, int d0, int d1) {
  level_1.level_1_level_1_update_0_write0_merged_banks_9.push(level_1_level_1_update_0_write0);
}

inline hw_uint<16> level_2_rd0_select(level_1_cache& level_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd0 read pattern: { level_2_update_0[d0, d1] -> level_1[2d0, 2d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 4] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // DD fold: { level_2_update_0[d0, d1] -> 40 : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_9.peek_40();
  return value_level_1_level_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_2_rd1_select(level_1_cache& level_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd1 read pattern: { level_2_update_0[d0, d1] -> level_1[2d0, 1 + 2d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 4] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // DD fold: { level_2_update_0[d0, d1] -> 21 : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_9.peek_21();
  return value_level_1_level_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_2_rd2_select(level_1_cache& level_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd2 read pattern: { level_2_update_0[d0, d1] -> level_1[2d0, 2 + 2d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 4] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // DD fold: { level_2_update_0[d0, d1] -> 2 : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_9.peek_2();
  return value_level_1_level_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_2_rd3_select(level_1_cache& level_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd3 read pattern: { level_2_update_0[d0, d1] -> level_1[1 + 2d0, 2d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 4] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // DD fold: { level_2_update_0[d0, d1] -> 39 : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_9.peek_39();
  return value_level_1_level_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_2_rd4_select(level_1_cache& level_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd4 read pattern: { level_2_update_0[d0, d1] -> level_1[1 + 2d0, 1 + 2d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 4] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // DD fold: { level_2_update_0[d0, d1] -> 20 : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_9.peek_20();
  return value_level_1_level_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_2_rd5_select(level_1_cache& level_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd5 read pattern: { level_2_update_0[d0, d1] -> level_1[1 + 2d0, 2 + 2d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 4] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // DD fold: { level_2_update_0[d0, d1] -> 1 : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_9.peek_1();
  return value_level_1_level_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_2_rd6_select(level_1_cache& level_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd6 read pattern: { level_2_update_0[d0, d1] -> level_1[2 + 2d0, 2d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 4] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // DD fold: { level_2_update_0[d0, d1] -> 38 : 0 <= d0 <= 7 and 0 <= d1 <= 8; level_2_update_0[d0, d1] -> (22 + 2 * d0) : d0 = 8 and 0 <= d1 <= 8 }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_9.peek_38();
  return value_level_1_level_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_2_rd7_select(level_1_cache& level_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd7 read pattern: { level_2_update_0[d0, d1] -> level_1[2 + 2d0, 1 + 2d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 4] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // DD fold: { level_2_update_0[d0, d1] -> 19 : 0 <= d0 <= 7 and 0 <= d1 <= 8; level_2_update_0[d0, d1] -> (3 + 2 * d0) : d0 = 8 and 0 <= d1 <= 8 }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_9.peek_19();
  return value_level_1_level_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_2_rd8_select(level_1_cache& level_1, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd8 read pattern: { level_2_update_0[d0, d1] -> level_1[2 + 2d0, 2 + 2d1] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 4] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 18 and 0 <= d1 <= 18 }
  // DD fold: {  }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_9.peek_0();
  return value_level_1_level_1_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// level_1_update_0_write
//	level_1_level_1_update_0_write0
inline void level_1_level_1_update_0_write_bundle_write(hw_uint<16>& level_1_update_0_write, level_1_cache& level_1, int d0, int d1) {
	hw_uint<16> level_1_level_1_update_0_write0_res = level_1_update_0_write.extract<0, 15>();
	level_1_level_1_update_0_write0_write(level_1_level_1_update_0_write0_res, level_1, d0, d1);
}

// level_2_update_0_read
//	level_2_rd0
//	level_2_rd1
//	level_2_rd2
//	level_2_rd3
//	level_2_rd4
//	level_2_rd5
//	level_2_rd6
//	level_2_rd7
//	level_2_rd8
inline hw_uint<144> level_1_level_2_update_0_read_bundle_read(level_1_cache& level_1, int d0, int d1) {
  // # of ports in bundle: 9
    // level_2_rd0
    // level_2_rd1
    // level_2_rd2
    // level_2_rd3
    // level_2_rd4
    // level_2_rd5
    // level_2_rd6
    // level_2_rd7
    // level_2_rd8

	hw_uint<144> result;
	hw_uint<16> level_2_rd0_res = level_2_rd0_select(level_1, d0, d1);
	set_at<0, 144>(result, level_2_rd0_res);
	hw_uint<16> level_2_rd1_res = level_2_rd1_select(level_1, d0, d1);
	set_at<16, 144>(result, level_2_rd1_res);
	hw_uint<16> level_2_rd2_res = level_2_rd2_select(level_1, d0, d1);
	set_at<32, 144>(result, level_2_rd2_res);
	hw_uint<16> level_2_rd3_res = level_2_rd3_select(level_1, d0, d1);
	set_at<48, 144>(result, level_2_rd3_res);
	hw_uint<16> level_2_rd4_res = level_2_rd4_select(level_1, d0, d1);
	set_at<64, 144>(result, level_2_rd4_res);
	hw_uint<16> level_2_rd5_res = level_2_rd5_select(level_1, d0, d1);
	set_at<80, 144>(result, level_2_rd5_res);
	hw_uint<16> level_2_rd6_res = level_2_rd6_select(level_1, d0, d1);
	set_at<96, 144>(result, level_2_rd6_res);
	hw_uint<16> level_2_rd7_res = level_2_rd7_select(level_1, d0, d1);
	set_at<112, 144>(result, level_2_rd7_res);
	hw_uint<16> level_2_rd8_res = level_2_rd8_select(level_1, d0, d1);
	set_at<128, 144>(result, level_2_rd8_res);
	return result;
}

#include "hw_classes.h"

struct level_2_level_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 8], [0, 8]}
	// Capacity: 21
	// # of read delays: 9
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 6> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 6> f11;
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

	inline hw_uint<16> peek_8() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_9() {
		return f6;
	}

	inline hw_uint<16> peek_10() {
		return f8;
	}

	inline hw_uint<16> peek_11() {
		return f10;
	}

	inline hw_uint<16> peek_17() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_18() {
		return f12;
	}

	inline hw_uint<16> peek_19() {
		return f14;
	}

	inline hw_uint<16> peek_20() {
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
    // cap: 1 reading from capacity: 6
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 6 reading from capacity: 1
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
    // cap: 1 reading from capacity: 6
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 6 reading from capacity: 1
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

struct level_2_cache {
  level_2_level_2_update_0_write0_merged_banks_9_cache level_2_level_2_update_0_write0_merged_banks_9;
};



inline void level_2_level_2_update_0_write0_write(hw_uint<16>& level_2_level_2_update_0_write0, level_2_cache& level_2, int d0, int d1) {
  level_2.level_2_level_2_update_0_write0_merged_banks_9.push(level_2_level_2_update_0_write0);
}

inline hw_uint<16> level_3_rd0_select(level_2_cache& level_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd0 read pattern: { level_3_update_0[d0, d1] -> level_2[2d0, 2d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 8 + 4d0, 5] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 4] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // DD fold: { level_3_update_0[d0, d1] -> 20 : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_9.peek_20();
  return value_level_2_level_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_3_rd1_select(level_2_cache& level_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd1 read pattern: { level_3_update_0[d0, d1] -> level_2[2d0, 1 + 2d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 8 + 4d0, 5] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 4] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // DD fold: { level_3_update_0[d0, d1] -> 11 : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_9.peek_11();
  return value_level_2_level_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_3_rd2_select(level_2_cache& level_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd2 read pattern: { level_3_update_0[d0, d1] -> level_2[2d0, 2 + 2d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 8 + 4d0, 5] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 4] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // DD fold: { level_3_update_0[d0, d1] -> 2 : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_9.peek_2();
  return value_level_2_level_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_3_rd3_select(level_2_cache& level_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd3 read pattern: { level_3_update_0[d0, d1] -> level_2[1 + 2d0, 2d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 8 + 4d0, 5] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 4] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // DD fold: { level_3_update_0[d0, d1] -> 19 : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_9.peek_19();
  return value_level_2_level_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_3_rd4_select(level_2_cache& level_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd4 read pattern: { level_3_update_0[d0, d1] -> level_2[1 + 2d0, 1 + 2d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 8 + 4d0, 5] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 4] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // DD fold: { level_3_update_0[d0, d1] -> 10 : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_9.peek_10();
  return value_level_2_level_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_3_rd5_select(level_2_cache& level_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd5 read pattern: { level_3_update_0[d0, d1] -> level_2[1 + 2d0, 2 + 2d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 8 + 4d0, 5] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 4] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // DD fold: { level_3_update_0[d0, d1] -> 1 : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_9.peek_1();
  return value_level_2_level_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_3_rd6_select(level_2_cache& level_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd6 read pattern: { level_3_update_0[d0, d1] -> level_2[2 + 2d0, 2d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 8 + 4d0, 5] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 4] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // DD fold: { level_3_update_0[d0, d1] -> 18 : 0 <= d0 <= 2 and 0 <= d1 <= 3; level_3_update_0[d0, d1] -> (12 + 2 * d0) : d0 = 3 and 0 <= d1 <= 3 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_9.peek_18();
  return value_level_2_level_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_3_rd7_select(level_2_cache& level_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd7 read pattern: { level_3_update_0[d0, d1] -> level_2[2 + 2d0, 1 + 2d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 8 + 4d0, 5] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 4] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // DD fold: { level_3_update_0[d0, d1] -> 9 : 0 <= d0 <= 2 and 0 <= d1 <= 3; level_3_update_0[d0, d1] -> (3 + 2 * d0) : d0 = 3 and 0 <= d1 <= 3 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_9.peek_9();
  return value_level_2_level_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

inline hw_uint<16> level_3_rd8_select(level_2_cache& level_2, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd8 read pattern: { level_3_update_0[d0, d1] -> level_2[2 + 2d0, 2 + 2d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 8 + 4d0, 5] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 4 + 2d0, 4] : 0 <= d0 <= 8 and 0 <= d1 <= 8 }
  // DD fold: {  }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_9.peek_0();
  return value_level_2_level_2_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// level_2_update_0_write
//	level_2_level_2_update_0_write0
inline void level_2_level_2_update_0_write_bundle_write(hw_uint<16>& level_2_update_0_write, level_2_cache& level_2, int d0, int d1) {
	hw_uint<16> level_2_level_2_update_0_write0_res = level_2_update_0_write.extract<0, 15>();
	level_2_level_2_update_0_write0_write(level_2_level_2_update_0_write0_res, level_2, d0, d1);
}

// level_3_update_0_read
//	level_3_rd0
//	level_3_rd1
//	level_3_rd2
//	level_3_rd3
//	level_3_rd4
//	level_3_rd5
//	level_3_rd6
//	level_3_rd7
//	level_3_rd8
inline hw_uint<144> level_2_level_3_update_0_read_bundle_read(level_2_cache& level_2, int d0, int d1) {
  // # of ports in bundle: 9
    // level_3_rd0
    // level_3_rd1
    // level_3_rd2
    // level_3_rd3
    // level_3_rd4
    // level_3_rd5
    // level_3_rd6
    // level_3_rd7
    // level_3_rd8

	hw_uint<144> result;
	hw_uint<16> level_3_rd0_res = level_3_rd0_select(level_2, d0, d1);
	set_at<0, 144>(result, level_3_rd0_res);
	hw_uint<16> level_3_rd1_res = level_3_rd1_select(level_2, d0, d1);
	set_at<16, 144>(result, level_3_rd1_res);
	hw_uint<16> level_3_rd2_res = level_3_rd2_select(level_2, d0, d1);
	set_at<32, 144>(result, level_3_rd2_res);
	hw_uint<16> level_3_rd3_res = level_3_rd3_select(level_2, d0, d1);
	set_at<48, 144>(result, level_3_rd3_res);
	hw_uint<16> level_3_rd4_res = level_3_rd4_select(level_2, d0, d1);
	set_at<64, 144>(result, level_3_rd4_res);
	hw_uint<16> level_3_rd5_res = level_3_rd5_select(level_2, d0, d1);
	set_at<80, 144>(result, level_3_rd5_res);
	hw_uint<16> level_3_rd6_res = level_3_rd6_select(level_2, d0, d1);
	set_at<96, 144>(result, level_3_rd6_res);
	hw_uint<16> level_3_rd7_res = level_3_rd7_select(level_2, d0, d1);
	set_at<112, 144>(result, level_3_rd7_res);
	hw_uint<16> level_3_rd8_res = level_3_rd8_select(level_2, d0, d1);
	set_at<128, 144>(result, level_3_rd8_res);
	return result;
}

#include "hw_classes.h"

struct level_3_level_3_update_0_write0_merged_banks_1_cache {
	// RAM Box: {[0, 3], [0, 3]}
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

struct level_3_cache {
  level_3_level_3_update_0_write0_merged_banks_1_cache level_3_level_3_update_0_write0_merged_banks_1;
};



inline void level_3_level_3_update_0_write0_write(hw_uint<16>& level_3_level_3_update_0_write0, level_3_cache& level_3, int d0, int d1) {
  level_3.level_3_level_3_update_0_write0_merged_banks_1.push(level_3_level_3_update_0_write0);
}

inline hw_uint<16> gp_4_rd0_select(level_3_cache& level_3, int d0, int d1) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_4_rd0 read pattern: { gp_4_update_0[d0, d1] -> level_3[d0, d1] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Read schedule : { gp_4_update_0[d0, d1] -> [30 + 16d1, 8 + 4d0, 6] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // Write schedule: { level_3_update_0[d0, d1] -> [30 + 16d1, 8 + 4d0, 5] : 0 <= d0 <= 3 and 0 <= d1 <= 3 }
  // DD fold: {  }
  auto value_level_3_level_3_update_0_write0 = level_3.level_3_level_3_update_0_write0_merged_banks_1.peek(/* one reader or all rams */ 0);
  return value_level_3_level_3_update_0_write0;
#ifndef __VIVADO_SYNTH__
	cout << "Error: Unsupported offsets: " << " d0 = " << d0  << " d1 = " << d1  << endl;
	assert(false);
	return 0;
#endif //__VIVADO_SYNTH__
}

// # of bundles = 2
// gp_4_update_0_read
//	gp_4_rd0
inline hw_uint<16> level_3_gp_4_update_0_read_bundle_read(level_3_cache& level_3, int d0, int d1) {
  // # of ports in bundle: 1
    // gp_4_rd0

	hw_uint<16> result;
	hw_uint<16> gp_4_rd0_res = gp_4_rd0_select(level_3, d0, d1);
	set_at<0, 16>(result, gp_4_rd0_res);
	return result;
}

// level_3_update_0_write
//	level_3_level_3_update_0_write0
inline void level_3_level_3_update_0_write_bundle_write(hw_uint<16>& level_3_update_0_write, level_3_cache& level_3, int d0, int d1) {
	hw_uint<16> level_3_level_3_update_0_write0_res = level_3_update_0_write.extract<0, 15>();
	level_3_level_3_update_0_write0_write(level_3_level_3_update_0_write0_res, level_3, d0, d1);
}



// Operation logic
inline void level_0_update_0(in_cache& in, level_0_cache& level_0, int d0, int d1) {
	// Consume: in
	auto in_0_c__0_value = in_level_0_update_0_read_bundle_read(in/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "level_0_update_0_in," << d0<< "," << d1<< "," <<  in_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_2(in_0_c__0_value);
	// Produce: level_0
	level_0_level_0_update_0_write_bundle_write(compute_result, level_0, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<32> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  *global_debug_handle << "level_0_update_0," << (2*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "level_0_update_0," << (2*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
#endif //__VIVADO_SYNTH__

}

inline void level_2_update_0(level_1_cache& level_1, level_2_cache& level_2, int d0, int d1) {
	// Consume: level_1
	auto level_1_0_c__0_value = level_1_level_2_update_0_read_bundle_read(level_1/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "level_2_update_0_level_1," << d0<< "," << d1<< "," <<  level_1_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(level_1_0_c__0_value);
	// Produce: level_2
	level_2_level_2_update_0_write_bundle_write(compute_result, level_2, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "level_2_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void in_update_0(HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */in_off_chip, in_cache& in, int d0, int d1) {
	// Consume: in_off_chip
	auto in_off_chip_0_c__0_value = in_off_chip.read();
	auto compute_result = id_unrolled_4(in_off_chip_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(compute_result, in, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<64> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  hw_uint<16> debug_compute_result_lane_1;
  set_at<0, 16, 16>(debug_compute_result_lane_1, debug_compute_result.extract<16, 31>());
  hw_uint<16> debug_compute_result_lane_2;
  set_at<0, 16, 16>(debug_compute_result_lane_2, debug_compute_result.extract<32, 47>());
  hw_uint<16> debug_compute_result_lane_3;
  set_at<0, 16, 16>(debug_compute_result_lane_3, debug_compute_result.extract<48, 63>());
  *global_debug_handle << "in_update_0," << (4*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
  *global_debug_handle << "in_update_0," << (4*d0 + 1) << ", " << d1<< "," <<  debug_compute_result_lane_1 << endl;
  *global_debug_handle << "in_update_0," << (4*d0 + 2) << ", " << d1<< "," <<  debug_compute_result_lane_2 << endl;
  *global_debug_handle << "in_update_0," << (4*d0 + 3) << ", " << d1<< "," <<  debug_compute_result_lane_3 << endl;
#endif //__VIVADO_SYNTH__

}

inline void level_3_update_0(level_2_cache& level_2, level_3_cache& level_3, int d0, int d1) {
	// Consume: level_2
	auto level_2_0_c__0_value = level_2_level_3_update_0_read_bundle_read(level_2/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "level_3_update_0_level_2," << d0<< "," << d1<< "," <<  level_2_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(level_2_0_c__0_value);
	// Produce: level_3
	level_3_level_3_update_0_write_bundle_write(compute_result, level_3, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "level_3_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void gp_4_update_0(level_3_cache& level_3, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */gp_4, int d0, int d1) {
	// Consume: level_3
	auto level_3_0_c__0_value = level_3_gp_4_update_0_read_bundle_read(level_3/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "gp_4_update_0_level_3," << d0<< "," << d1<< "," <<  level_3_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(level_3_0_c__0_value);
	// Produce: gp_4
	gp_4.write(compute_result);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "gp_4_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

inline void level_1_update_0(level_0_cache& level_0, level_1_cache& level_1, int d0, int d1) {
	// Consume: level_0
	auto level_0_0_c__0_value = level_0_level_1_update_0_read_bundle_read(level_0/* source_delay */, d0, d1);

#ifndef __VIVADO_SYNTH__
  *global_debug_handle << "level_1_update_0_level_0," << d0<< "," << d1<< "," <<  level_0_0_c__0_value << endl;
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(level_0_0_c__0_value);
	// Produce: level_1
	level_1_level_1_update_0_write_bundle_write(compute_result, level_1, d0, d1);

#ifndef __VIVADO_SYNTH__
  hw_uint<16> debug_compute_result(compute_result);
  hw_uint<16> debug_compute_result_lane_0;
  set_at<0, 16, 16>(debug_compute_result_lane_0, debug_compute_result.extract<0, 15>());
  *global_debug_handle << "level_1_update_0," << (1*d0 + 0) << ", " << d1<< "," <<  debug_compute_result_lane_0 << endl;
#endif //__VIVADO_SYNTH__

}

// Driver function
void gp_4_opt(HWStream<hw_uint<64> >& /* get_args num ports = 4 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */gp_4, int num_epochs) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("gp_4_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  level_0_cache level_0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  level_1_cache level_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  level_2_cache level_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  level_3_cache level_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  for (int epoch = 0; epoch < num_epochs; epoch++) {
	#ifdef __VIVADO_SYNTH__
	#pragma HLS inline recursive
	#endif // __VIVADO_SYNTH__
	
	for (int c0 = 0; c0 <= 78; c0++) {
	  for (int c1 = 0; c1 <= 20; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 20) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 78) && ((c0 - 0) % 1 == 0)) {
	in_update_0(in_off_chip, in, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 20) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 78) && ((c0 - 2) % 2 == 0)) {
	level_0_update_0(in, level_0, (c1 - 1) / 1, (c0 - 2) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 20) && ((c1 - 2) % 1 == 0) && (6 <= c0 && c0 <= 78) && ((c0 - 6) % 4 == 0)) {
	level_1_update_0(level_0, level_1, (c1 - 2) / 1, (c0 - 6) / 4);
	    }
	
	    if ((4 <= c1 && c1 <= 20) && ((c1 - 4) % 2 == 0) && (14 <= c0 && c0 <= 78) && ((c0 - 14) % 8 == 0)) {
	level_2_update_0(level_1, level_2, (c1 - 4) / 2, (c0 - 14) / 8);
	    }
	
	    if ((8 <= c1 && c1 <= 20) && ((c1 - 8) % 4 == 0) && (30 <= c0 && c0 <= 78) && ((c0 - 30) % 16 == 0)) {
	level_3_update_0(level_2, level_3, (c1 - 8) / 4, (c0 - 30) / 16);
	    }
	
	    if ((8 <= c1 && c1 <= 20) && ((c1 - 8) % 4 == 0) && (30 <= c0 && c0 <= 78) && ((c0 - 30) % 16 == 0)) {
	gp_4_update_0(level_3, gp_4, (c1 - 8) / 4, (c0 - 30) / 16);
	    }
	
	  }
	}
	
  }

#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void gp_4_opt(HWStream<hw_uint<64> >& /* get_args num ports = 4 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */gp_4) {

  gp_4_opt(in_off_chip, gp_4, 1);
}
#ifdef __VIVADO_SYNTH__
#include "gp_4_opt.h"

const int gp_4_update_0_write_num_transfers = 16;
const int in_update_0_read_num_transfers = 1659;

// TODO: Adapt to have one size for each edge buffer
#define INPUT_SIZE 1659
#define OUTPUT_SIZE 16
extern "C" {

static void read_in_update_0_read(hw_uint<64>* input, HWStream<hw_uint<64> >& v, const int size) {
  hw_uint<64> burst_reg;
  for (int i = 0; i < in_update_0_read_num_transfers*size; i++) {
    #pragma HLS pipeline II=1
    burst_reg = input[i];
    v.write(burst_reg);
  }
}

static void write_gp_4_update_0_write(hw_uint<16>* output, HWStream<hw_uint<16> >& v, const int size) {
  hw_uint<16> burst_reg;
  for (int i = 0; i < gp_4_update_0_write_num_transfers*size; i++) {
    #pragma HLS pipeline II=1
    burst_reg = v.read();
    output[i] = burst_reg;
  }
}

void gp_4_opt_accel(hw_uint<64>* in_update_0_read, hw_uint<16>* gp_4_update_0_write, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = gp_4_update_0_write offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read bundle = control
#pragma HLS INTERFACE s_axilite port = gp_4_update_0_write bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control

  static HWStream<hw_uint<64> > in_update_0_read_channel;
  static HWStream<hw_uint<16> > gp_4_update_0_write_channel;

  read_in_update_0_read(in_update_0_read, in_update_0_read_channel, size);

  gp_4_opt(in_update_0_read_channel, gp_4_update_0_write_channel, size);

  write_gp_4_update_0_write(gp_4_update_0_write, gp_4_update_0_write_channel, size);
}

}
#endif //__VIVADO_SYNTH__

