#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: h10_16_300MHz_16_opt_compute_units.h
#include "h10_16_300MHz_16_opt_compute_units.h"

struct h3_0_h3_0_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-128, 1152], [-9, 1031]}
	// Capacity: 166
	// # of read delays: 5
  // 0, 1, 82, 83, 165
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 80> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 81> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_81() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_82() {
		return f4;
	}

	inline hw_uint<32>  peek_83() {
		return f6;
	}

	inline hw_uint<32>  peek_164() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_165() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 80
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 80 reading from capacity: 1
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
	// RAM Box: {[-127, 1137], [-9, 1032]}
	// Capacity: 166
	// # of read delays: 4
  // 0, 1, 83, 165
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 81> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 81> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_83() {
		return f4;
	}

	inline hw_uint<32>  peek_164() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_165() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write10_merged_banks_5_cache {
	// RAM Box: {[-118, 1146], [-9, 1032]}
	// Capacity: 166
	// # of read delays: 4
  // 0, 1, 83, 165
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 81> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 81> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_83() {
		return f4;
	}

	inline hw_uint<32>  peek_164() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_165() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write11_merged_banks_5_cache {
	// RAM Box: {[-117, 1147], [-9, 1032]}
	// Capacity: 166
	// # of read delays: 4
  // 0, 1, 83, 165
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 81> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 81> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_83() {
		return f4;
	}

	inline hw_uint<32>  peek_164() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_165() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write12_merged_banks_5_cache {
	// RAM Box: {[-116, 1148], [-9, 1032]}
	// Capacity: 166
	// # of read delays: 4
  // 0, 1, 83, 165
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 81> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 81> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_83() {
		return f4;
	}

	inline hw_uint<32>  peek_164() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_165() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write13_merged_banks_5_cache {
	// RAM Box: {[-115, 1149], [-9, 1032]}
	// Capacity: 166
	// # of read delays: 4
  // 0, 1, 83, 165
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 81> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 81> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_83() {
		return f4;
	}

	inline hw_uint<32>  peek_164() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_165() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write14_merged_banks_5_cache {
	// RAM Box: {[-114, 1150], [-9, 1032]}
	// Capacity: 166
	// # of read delays: 4
  // 0, 1, 83, 165
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 81> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 81> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_83() {
		return f4;
	}

	inline hw_uint<32>  peek_164() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_165() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write15_merged_banks_5_cache {
	// RAM Box: {[-129, 1151], [-8, 1032]}
	// Capacity: 166
	// # of read delays: 5
  // 0, 1, 83, 84, 165
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 81> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 80> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_83() {
		return f4;
	}

	inline hw_uint<32>  peek_84() {
		return f6;
	}

	inline hw_uint<32>  peek_164() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_165() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 80
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 80 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
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
	// RAM Box: {[-126, 1138], [-9, 1032]}
	// Capacity: 166
	// # of read delays: 4
  // 0, 1, 83, 165
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 81> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 81> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_83() {
		return f4;
	}

	inline hw_uint<32>  peek_164() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_165() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
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
	// RAM Box: {[-125, 1139], [-9, 1032]}
	// Capacity: 166
	// # of read delays: 4
  // 0, 1, 83, 165
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 81> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 81> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_83() {
		return f4;
	}

	inline hw_uint<32>  peek_164() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_165() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write4_merged_banks_5_cache {
	// RAM Box: {[-124, 1140], [-9, 1032]}
	// Capacity: 166
	// # of read delays: 4
  // 0, 1, 83, 165
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 81> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 81> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_83() {
		return f4;
	}

	inline hw_uint<32>  peek_164() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_165() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write5_merged_banks_5_cache {
	// RAM Box: {[-123, 1141], [-9, 1032]}
	// Capacity: 166
	// # of read delays: 4
  // 0, 1, 83, 165
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 81> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 81> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_83() {
		return f4;
	}

	inline hw_uint<32>  peek_164() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_165() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write6_merged_banks_5_cache {
	// RAM Box: {[-122, 1142], [-9, 1032]}
	// Capacity: 166
	// # of read delays: 4
  // 0, 1, 83, 165
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 81> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 81> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_83() {
		return f4;
	}

	inline hw_uint<32>  peek_164() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_165() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write7_merged_banks_5_cache {
	// RAM Box: {[-121, 1143], [-9, 1032]}
	// Capacity: 166
	// # of read delays: 4
  // 0, 1, 83, 165
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 81> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 81> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_83() {
		return f4;
	}

	inline hw_uint<32>  peek_164() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_165() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write8_merged_banks_5_cache {
	// RAM Box: {[-120, 1144], [-9, 1032]}
	// Capacity: 166
	// # of read delays: 4
  // 0, 1, 83, 165
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 81> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 81> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_83() {
		return f4;
	}

	inline hw_uint<32>  peek_164() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_165() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_0_h3_0_update_0_write9_merged_banks_5_cache {
	// RAM Box: {[-119, 1145], [-9, 1032]}
	// Capacity: 166
	// # of read delays: 4
  // 0, 1, 83, 165
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 81> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 81> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_82() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_83() {
		return f4;
	}

	inline hw_uint<32>  peek_164() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_165() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 81
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 81 reading from capacity: 1
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
  // # of banks: 16
  h3_0_h3_0_update_0_write0_merged_banks_5_cache h3_0_h3_0_update_0_write0_merged_banks_5;
  h3_0_h3_0_update_0_write1_merged_banks_5_cache h3_0_h3_0_update_0_write1_merged_banks_5;
  h3_0_h3_0_update_0_write10_merged_banks_5_cache h3_0_h3_0_update_0_write10_merged_banks_5;
  h3_0_h3_0_update_0_write11_merged_banks_5_cache h3_0_h3_0_update_0_write11_merged_banks_5;
  h3_0_h3_0_update_0_write12_merged_banks_5_cache h3_0_h3_0_update_0_write12_merged_banks_5;
  h3_0_h3_0_update_0_write13_merged_banks_5_cache h3_0_h3_0_update_0_write13_merged_banks_5;
  h3_0_h3_0_update_0_write14_merged_banks_5_cache h3_0_h3_0_update_0_write14_merged_banks_5;
  h3_0_h3_0_update_0_write15_merged_banks_5_cache h3_0_h3_0_update_0_write15_merged_banks_5;
  h3_0_h3_0_update_0_write2_merged_banks_5_cache h3_0_h3_0_update_0_write2_merged_banks_5;
  h3_0_h3_0_update_0_write3_merged_banks_5_cache h3_0_h3_0_update_0_write3_merged_banks_5;
  h3_0_h3_0_update_0_write4_merged_banks_5_cache h3_0_h3_0_update_0_write4_merged_banks_5;
  h3_0_h3_0_update_0_write5_merged_banks_5_cache h3_0_h3_0_update_0_write5_merged_banks_5;
  h3_0_h3_0_update_0_write6_merged_banks_5_cache h3_0_h3_0_update_0_write6_merged_banks_5;
  h3_0_h3_0_update_0_write7_merged_banks_5_cache h3_0_h3_0_update_0_write7_merged_banks_5;
  h3_0_h3_0_update_0_write8_merged_banks_5_cache h3_0_h3_0_update_0_write8_merged_banks_5;
  h3_0_h3_0_update_0_write9_merged_banks_5_cache h3_0_h3_0_update_0_write9_merged_banks_5;
};



inline void h3_0_h3_0_update_0_write0_write(hw_uint<32> & h3_0_h3_0_update_0_write0, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.push(h3_0_h3_0_update_0_write0);
}

inline void h3_0_h3_0_update_0_write1_write(hw_uint<32> & h3_0_h3_0_update_0_write1, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write1_merged_banks_5.push(h3_0_h3_0_update_0_write1);
}

inline void h3_0_h3_0_update_0_write10_write(hw_uint<32> & h3_0_h3_0_update_0_write10, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write10_merged_banks_5.push(h3_0_h3_0_update_0_write10);
}

inline void h3_0_h3_0_update_0_write11_write(hw_uint<32> & h3_0_h3_0_update_0_write11, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write11_merged_banks_5.push(h3_0_h3_0_update_0_write11);
}

inline void h3_0_h3_0_update_0_write12_write(hw_uint<32> & h3_0_h3_0_update_0_write12, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write12_merged_banks_5.push(h3_0_h3_0_update_0_write12);
}

inline void h3_0_h3_0_update_0_write13_write(hw_uint<32> & h3_0_h3_0_update_0_write13, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write13_merged_banks_5.push(h3_0_h3_0_update_0_write13);
}

inline void h3_0_h3_0_update_0_write14_write(hw_uint<32> & h3_0_h3_0_update_0_write14, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write14_merged_banks_5.push(h3_0_h3_0_update_0_write14);
}

inline void h3_0_h3_0_update_0_write15_write(hw_uint<32> & h3_0_h3_0_update_0_write15, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write15_merged_banks_5.push(h3_0_h3_0_update_0_write15);
}

inline void h3_0_h3_0_update_0_write2_write(hw_uint<32> & h3_0_h3_0_update_0_write2, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write2_merged_banks_5.push(h3_0_h3_0_update_0_write2);
}

inline void h3_0_h3_0_update_0_write3_write(hw_uint<32> & h3_0_h3_0_update_0_write3, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write3_merged_banks_5.push(h3_0_h3_0_update_0_write3);
}

inline void h3_0_h3_0_update_0_write4_write(hw_uint<32> & h3_0_h3_0_update_0_write4, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write4_merged_banks_5.push(h3_0_h3_0_update_0_write4);
}

inline void h3_0_h3_0_update_0_write5_write(hw_uint<32> & h3_0_h3_0_update_0_write5, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write5_merged_banks_5.push(h3_0_h3_0_update_0_write5);
}

inline void h3_0_h3_0_update_0_write6_write(hw_uint<32> & h3_0_h3_0_update_0_write6, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write6_merged_banks_5.push(h3_0_h3_0_update_0_write6);
}

inline void h3_0_h3_0_update_0_write7_write(hw_uint<32> & h3_0_h3_0_update_0_write7, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write7_merged_banks_5.push(h3_0_h3_0_update_0_write7);
}

inline void h3_0_h3_0_update_0_write8_write(hw_uint<32> & h3_0_h3_0_update_0_write8, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write8_merged_banks_5.push(h3_0_h3_0_update_0_write8);
}

inline void h3_0_h3_0_update_0_write9_write(hw_uint<32> & h3_0_h3_0_update_0_write9, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  h3_0.h3_0_h3_0_update_0_write9_merged_banks_5.push(h3_0_h3_0_update_0_write9);
}

inline hw_uint<32>  h3_1_rd0_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd0 read pattern: { h3_1_update_0[d0, d1] -> h3_0[-1 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write15 = h3_0.h3_0_h3_0_update_0_write15_merged_banks_5.peek_84();
  return value_h3_0_h3_0_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_1_rd1_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd1 read pattern: { h3_1_update_0[d0, d1] -> h3_0[16d0, -1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.peek_165();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd10_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd10 read pattern: { h3_1_update_0[d0, d1] -> h3_0[1 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd11_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd11 read pattern: { h3_1_update_0[d0, d1] -> h3_0[2 + 16d0, -1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_5.peek_165();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_1_rd12_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd12 read pattern: { h3_1_update_0[d0, d1] -> h3_0[2 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_1_rd13_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd13 read pattern: { h3_1_update_0[d0, d1] -> h3_0[2 + 16d0, 1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_1_rd14_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd14 read pattern: { h3_1_update_0[d0, d1] -> h3_0[3 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd15_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd15 read pattern: { h3_1_update_0[d0, d1] -> h3_0[2 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_1_rd16_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd16 read pattern: { h3_1_update_0[d0, d1] -> h3_0[3 + 16d0, -1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_5.peek_165();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd17_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd17 read pattern: { h3_1_update_0[d0, d1] -> h3_0[3 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd18_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd18 read pattern: { h3_1_update_0[d0, d1] -> h3_0[3 + 16d0, 1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd19_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd19 read pattern: { h3_1_update_0[d0, d1] -> h3_0[4 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write4 = h3_0.h3_0_h3_0_update_0_write4_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_1_rd2_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd2 read pattern: { h3_1_update_0[d0, d1] -> h3_0[16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd20_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd20 read pattern: { h3_1_update_0[d0, d1] -> h3_0[3 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd21_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd21 read pattern: { h3_1_update_0[d0, d1] -> h3_0[4 + 16d0, -1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write4 = h3_0.h3_0_h3_0_update_0_write4_merged_banks_5.peek_165();
  return value_h3_0_h3_0_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_1_rd22_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd22 read pattern: { h3_1_update_0[d0, d1] -> h3_0[4 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write4 = h3_0.h3_0_h3_0_update_0_write4_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_1_rd23_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd23 read pattern: { h3_1_update_0[d0, d1] -> h3_0[4 + 16d0, 1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write4 = h3_0.h3_0_h3_0_update_0_write4_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_1_rd24_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd24 read pattern: { h3_1_update_0[d0, d1] -> h3_0[5 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write5 = h3_0.h3_0_h3_0_update_0_write5_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_1_rd25_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd25 read pattern: { h3_1_update_0[d0, d1] -> h3_0[4 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write4 = h3_0.h3_0_h3_0_update_0_write4_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_1_rd26_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd26 read pattern: { h3_1_update_0[d0, d1] -> h3_0[5 + 16d0, -1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write5 = h3_0.h3_0_h3_0_update_0_write5_merged_banks_5.peek_165();
  return value_h3_0_h3_0_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_1_rd27_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd27 read pattern: { h3_1_update_0[d0, d1] -> h3_0[5 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write5 = h3_0.h3_0_h3_0_update_0_write5_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_1_rd28_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd28 read pattern: { h3_1_update_0[d0, d1] -> h3_0[5 + 16d0, 1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write5 = h3_0.h3_0_h3_0_update_0_write5_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_1_rd29_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd29 read pattern: { h3_1_update_0[d0, d1] -> h3_0[6 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write6 = h3_0.h3_0_h3_0_update_0_write6_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_1_rd3_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd3 read pattern: { h3_1_update_0[d0, d1] -> h3_0[16d0, 1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd30_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd30 read pattern: { h3_1_update_0[d0, d1] -> h3_0[5 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write5 = h3_0.h3_0_h3_0_update_0_write5_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_1_rd31_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd31 read pattern: { h3_1_update_0[d0, d1] -> h3_0[6 + 16d0, -1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write6 = h3_0.h3_0_h3_0_update_0_write6_merged_banks_5.peek_165();
  return value_h3_0_h3_0_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_1_rd32_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd32 read pattern: { h3_1_update_0[d0, d1] -> h3_0[6 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write6 = h3_0.h3_0_h3_0_update_0_write6_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_1_rd33_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd33 read pattern: { h3_1_update_0[d0, d1] -> h3_0[6 + 16d0, 1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write6 = h3_0.h3_0_h3_0_update_0_write6_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_1_rd34_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd34 read pattern: { h3_1_update_0[d0, d1] -> h3_0[7 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write7 = h3_0.h3_0_h3_0_update_0_write7_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_1_rd35_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd35 read pattern: { h3_1_update_0[d0, d1] -> h3_0[6 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write6 = h3_0.h3_0_h3_0_update_0_write6_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_1_rd36_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd36 read pattern: { h3_1_update_0[d0, d1] -> h3_0[7 + 16d0, -1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write7 = h3_0.h3_0_h3_0_update_0_write7_merged_banks_5.peek_165();
  return value_h3_0_h3_0_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_1_rd37_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd37 read pattern: { h3_1_update_0[d0, d1] -> h3_0[7 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write7 = h3_0.h3_0_h3_0_update_0_write7_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_1_rd38_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd38 read pattern: { h3_1_update_0[d0, d1] -> h3_0[7 + 16d0, 1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write7 = h3_0.h3_0_h3_0_update_0_write7_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_1_rd39_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd39 read pattern: { h3_1_update_0[d0, d1] -> h3_0[8 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write8 = h3_0.h3_0_h3_0_update_0_write8_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_1_rd4_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd4 read pattern: { h3_1_update_0[d0, d1] -> h3_0[1 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd40_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd40 read pattern: { h3_1_update_0[d0, d1] -> h3_0[7 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write7 = h3_0.h3_0_h3_0_update_0_write7_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_1_rd41_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd41 read pattern: { h3_1_update_0[d0, d1] -> h3_0[8 + 16d0, -1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write8 = h3_0.h3_0_h3_0_update_0_write8_merged_banks_5.peek_165();
  return value_h3_0_h3_0_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_1_rd42_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd42 read pattern: { h3_1_update_0[d0, d1] -> h3_0[8 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write8 = h3_0.h3_0_h3_0_update_0_write8_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_1_rd43_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd43 read pattern: { h3_1_update_0[d0, d1] -> h3_0[8 + 16d0, 1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write8 = h3_0.h3_0_h3_0_update_0_write8_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_1_rd44_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd44 read pattern: { h3_1_update_0[d0, d1] -> h3_0[9 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write9 = h3_0.h3_0_h3_0_update_0_write9_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_1_rd45_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd45 read pattern: { h3_1_update_0[d0, d1] -> h3_0[8 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write8 = h3_0.h3_0_h3_0_update_0_write8_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_1_rd46_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd46 read pattern: { h3_1_update_0[d0, d1] -> h3_0[9 + 16d0, -1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write9 = h3_0.h3_0_h3_0_update_0_write9_merged_banks_5.peek_165();
  return value_h3_0_h3_0_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_1_rd47_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd47 read pattern: { h3_1_update_0[d0, d1] -> h3_0[9 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write9 = h3_0.h3_0_h3_0_update_0_write9_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_1_rd48_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd48 read pattern: { h3_1_update_0[d0, d1] -> h3_0[9 + 16d0, 1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write9 = h3_0.h3_0_h3_0_update_0_write9_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_1_rd49_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd49 read pattern: { h3_1_update_0[d0, d1] -> h3_0[10 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write10 = h3_0.h3_0_h3_0_update_0_write10_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_1_rd5_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd5 read pattern: { h3_1_update_0[d0, d1] -> h3_0[16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd50_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd50 read pattern: { h3_1_update_0[d0, d1] -> h3_0[9 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write9 = h3_0.h3_0_h3_0_update_0_write9_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_1_rd51_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd51 read pattern: { h3_1_update_0[d0, d1] -> h3_0[10 + 16d0, -1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write10 = h3_0.h3_0_h3_0_update_0_write10_merged_banks_5.peek_165();
  return value_h3_0_h3_0_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_1_rd52_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd52 read pattern: { h3_1_update_0[d0, d1] -> h3_0[10 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write10 = h3_0.h3_0_h3_0_update_0_write10_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_1_rd53_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd53 read pattern: { h3_1_update_0[d0, d1] -> h3_0[10 + 16d0, 1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write10 = h3_0.h3_0_h3_0_update_0_write10_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_1_rd54_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd54 read pattern: { h3_1_update_0[d0, d1] -> h3_0[11 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write11 = h3_0.h3_0_h3_0_update_0_write11_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_1_rd55_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd55 read pattern: { h3_1_update_0[d0, d1] -> h3_0[10 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write10 = h3_0.h3_0_h3_0_update_0_write10_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_1_rd56_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd56 read pattern: { h3_1_update_0[d0, d1] -> h3_0[11 + 16d0, -1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write11 = h3_0.h3_0_h3_0_update_0_write11_merged_banks_5.peek_165();
  return value_h3_0_h3_0_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_1_rd57_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd57 read pattern: { h3_1_update_0[d0, d1] -> h3_0[11 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write11 = h3_0.h3_0_h3_0_update_0_write11_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_1_rd58_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd58 read pattern: { h3_1_update_0[d0, d1] -> h3_0[11 + 16d0, 1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write11 = h3_0.h3_0_h3_0_update_0_write11_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_1_rd59_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd59 read pattern: { h3_1_update_0[d0, d1] -> h3_0[12 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write12 = h3_0.h3_0_h3_0_update_0_write12_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_1_rd6_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd6 read pattern: { h3_1_update_0[d0, d1] -> h3_0[1 + 16d0, -1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_5.peek_165();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd60_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd60 read pattern: { h3_1_update_0[d0, d1] -> h3_0[11 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write11 = h3_0.h3_0_h3_0_update_0_write11_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_1_rd61_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd61 read pattern: { h3_1_update_0[d0, d1] -> h3_0[12 + 16d0, -1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write12 = h3_0.h3_0_h3_0_update_0_write12_merged_banks_5.peek_165();
  return value_h3_0_h3_0_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_1_rd62_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd62 read pattern: { h3_1_update_0[d0, d1] -> h3_0[12 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write12 = h3_0.h3_0_h3_0_update_0_write12_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_1_rd63_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd63 read pattern: { h3_1_update_0[d0, d1] -> h3_0[12 + 16d0, 1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write12 = h3_0.h3_0_h3_0_update_0_write12_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_1_rd64_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd64 read pattern: { h3_1_update_0[d0, d1] -> h3_0[13 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write13 = h3_0.h3_0_h3_0_update_0_write13_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_1_rd65_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd65 read pattern: { h3_1_update_0[d0, d1] -> h3_0[12 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write12 = h3_0.h3_0_h3_0_update_0_write12_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_1_rd66_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd66 read pattern: { h3_1_update_0[d0, d1] -> h3_0[13 + 16d0, -1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write13 = h3_0.h3_0_h3_0_update_0_write13_merged_banks_5.peek_165();
  return value_h3_0_h3_0_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_1_rd67_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd67 read pattern: { h3_1_update_0[d0, d1] -> h3_0[13 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write13 = h3_0.h3_0_h3_0_update_0_write13_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_1_rd68_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd68 read pattern: { h3_1_update_0[d0, d1] -> h3_0[13 + 16d0, 1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write13 = h3_0.h3_0_h3_0_update_0_write13_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_1_rd69_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd69 read pattern: { h3_1_update_0[d0, d1] -> h3_0[14 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write14 = h3_0.h3_0_h3_0_update_0_write14_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_1_rd7_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd7 read pattern: { h3_1_update_0[d0, d1] -> h3_0[1 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd70_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd70 read pattern: { h3_1_update_0[d0, d1] -> h3_0[13 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write13 = h3_0.h3_0_h3_0_update_0_write13_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_1_rd71_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd71 read pattern: { h3_1_update_0[d0, d1] -> h3_0[14 + 16d0, -1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write14 = h3_0.h3_0_h3_0_update_0_write14_merged_banks_5.peek_165();
  return value_h3_0_h3_0_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_1_rd72_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd72 read pattern: { h3_1_update_0[d0, d1] -> h3_0[14 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write14 = h3_0.h3_0_h3_0_update_0_write14_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_1_rd73_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd73 read pattern: { h3_1_update_0[d0, d1] -> h3_0[14 + 16d0, 1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write14 = h3_0.h3_0_h3_0_update_0_write14_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_1_rd74_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd74 read pattern: { h3_1_update_0[d0, d1] -> h3_0[15 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write15 = h3_0.h3_0_h3_0_update_0_write15_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_1_rd75_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd75 read pattern: { h3_1_update_0[d0, d1] -> h3_0[14 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write14 = h3_0.h3_0_h3_0_update_0_write14_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_1_rd76_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd76 read pattern: { h3_1_update_0[d0, d1] -> h3_0[15 + 16d0, -1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write15 = h3_0.h3_0_h3_0_update_0_write15_merged_banks_5.peek_165();
  return value_h3_0_h3_0_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_1_rd77_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd77 read pattern: { h3_1_update_0[d0, d1] -> h3_0[15 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write15 = h3_0.h3_0_h3_0_update_0_write15_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_1_rd78_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd78 read pattern: { h3_1_update_0[d0, d1] -> h3_0[15 + 16d0, 1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write15 = h3_0.h3_0_h3_0_update_0_write15_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_1_rd79_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd79 read pattern: { h3_1_update_0[d0, d1] -> h3_0[16 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.peek_82();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd8_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd8 read pattern: { h3_1_update_0[d0, d1] -> h3_0[1 + 16d0, 1 + d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd9_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd9 read pattern: { h3_1_update_0[d0, d1] -> h3_0[2 + 16d0, d1] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_5.peek_83();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

// # of bundles = 2
// h3_0_update_0_write
//	h3_0_h3_0_update_0_write0
//	h3_0_h3_0_update_0_write1
//	h3_0_h3_0_update_0_write2
//	h3_0_h3_0_update_0_write3
//	h3_0_h3_0_update_0_write4
//	h3_0_h3_0_update_0_write5
//	h3_0_h3_0_update_0_write6
//	h3_0_h3_0_update_0_write7
//	h3_0_h3_0_update_0_write8
//	h3_0_h3_0_update_0_write9
//	h3_0_h3_0_update_0_write10
//	h3_0_h3_0_update_0_write11
//	h3_0_h3_0_update_0_write12
//	h3_0_h3_0_update_0_write13
//	h3_0_h3_0_update_0_write14
//	h3_0_h3_0_update_0_write15
inline void h3_0_h3_0_update_0_write_bundle_write(hw_uint<512>& h3_0_update_0_write, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_0_h3_0_update_0_write0_res = h3_0_update_0_write.extract<0, 31>();
	h3_0_h3_0_update_0_write0_write(h3_0_h3_0_update_0_write0_res, h3_0, d0, d1, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write1_res = h3_0_update_0_write.extract<32, 63>();
	h3_0_h3_0_update_0_write1_write(h3_0_h3_0_update_0_write1_res, h3_0, d0, d1, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write2_res = h3_0_update_0_write.extract<64, 95>();
	h3_0_h3_0_update_0_write2_write(h3_0_h3_0_update_0_write2_res, h3_0, d0, d1, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write3_res = h3_0_update_0_write.extract<96, 127>();
	h3_0_h3_0_update_0_write3_write(h3_0_h3_0_update_0_write3_res, h3_0, d0, d1, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write4_res = h3_0_update_0_write.extract<128, 159>();
	h3_0_h3_0_update_0_write4_write(h3_0_h3_0_update_0_write4_res, h3_0, d0, d1, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write5_res = h3_0_update_0_write.extract<160, 191>();
	h3_0_h3_0_update_0_write5_write(h3_0_h3_0_update_0_write5_res, h3_0, d0, d1, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write6_res = h3_0_update_0_write.extract<192, 223>();
	h3_0_h3_0_update_0_write6_write(h3_0_h3_0_update_0_write6_res, h3_0, d0, d1, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write7_res = h3_0_update_0_write.extract<224, 255>();
	h3_0_h3_0_update_0_write7_write(h3_0_h3_0_update_0_write7_res, h3_0, d0, d1, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write8_res = h3_0_update_0_write.extract<256, 287>();
	h3_0_h3_0_update_0_write8_write(h3_0_h3_0_update_0_write8_res, h3_0, d0, d1, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write9_res = h3_0_update_0_write.extract<288, 319>();
	h3_0_h3_0_update_0_write9_write(h3_0_h3_0_update_0_write9_res, h3_0, d0, d1, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write10_res = h3_0_update_0_write.extract<320, 351>();
	h3_0_h3_0_update_0_write10_write(h3_0_h3_0_update_0_write10_res, h3_0, d0, d1, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write11_res = h3_0_update_0_write.extract<352, 383>();
	h3_0_h3_0_update_0_write11_write(h3_0_h3_0_update_0_write11_res, h3_0, d0, d1, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write12_res = h3_0_update_0_write.extract<384, 415>();
	h3_0_h3_0_update_0_write12_write(h3_0_h3_0_update_0_write12_res, h3_0, d0, d1, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write13_res = h3_0_update_0_write.extract<416, 447>();
	h3_0_h3_0_update_0_write13_write(h3_0_h3_0_update_0_write13_res, h3_0, d0, d1, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write14_res = h3_0_update_0_write.extract<448, 479>();
	h3_0_h3_0_update_0_write14_write(h3_0_h3_0_update_0_write14_res, h3_0, d0, d1, dynamic_address);
	hw_uint<32>  h3_0_h3_0_update_0_write15_res = h3_0_update_0_write.extract<480, 511>();
	h3_0_h3_0_update_0_write15_write(h3_0_h3_0_update_0_write15_res, h3_0, d0, d1, dynamic_address);
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
//	h3_1_rd20
//	h3_1_rd21
//	h3_1_rd22
//	h3_1_rd23
//	h3_1_rd24
//	h3_1_rd25
//	h3_1_rd26
//	h3_1_rd27
//	h3_1_rd28
//	h3_1_rd29
//	h3_1_rd30
//	h3_1_rd31
//	h3_1_rd32
//	h3_1_rd33
//	h3_1_rd34
//	h3_1_rd35
//	h3_1_rd36
//	h3_1_rd37
//	h3_1_rd38
//	h3_1_rd39
//	h3_1_rd40
//	h3_1_rd41
//	h3_1_rd42
//	h3_1_rd43
//	h3_1_rd44
//	h3_1_rd45
//	h3_1_rd46
//	h3_1_rd47
//	h3_1_rd48
//	h3_1_rd49
//	h3_1_rd50
//	h3_1_rd51
//	h3_1_rd52
//	h3_1_rd53
//	h3_1_rd54
//	h3_1_rd55
//	h3_1_rd56
//	h3_1_rd57
//	h3_1_rd58
//	h3_1_rd59
//	h3_1_rd60
//	h3_1_rd61
//	h3_1_rd62
//	h3_1_rd63
//	h3_1_rd64
//	h3_1_rd65
//	h3_1_rd66
//	h3_1_rd67
//	h3_1_rd68
//	h3_1_rd69
//	h3_1_rd70
//	h3_1_rd71
//	h3_1_rd72
//	h3_1_rd73
//	h3_1_rd74
//	h3_1_rd75
//	h3_1_rd76
//	h3_1_rd77
//	h3_1_rd78
//	h3_1_rd79
inline hw_uint<2560> h3_0_h3_1_update_0_read_bundle_read(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 80
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
    // h3_1_rd20
    // h3_1_rd21
    // h3_1_rd22
    // h3_1_rd23
    // h3_1_rd24
    // h3_1_rd25
    // h3_1_rd26
    // h3_1_rd27
    // h3_1_rd28
    // h3_1_rd29
    // h3_1_rd30
    // h3_1_rd31
    // h3_1_rd32
    // h3_1_rd33
    // h3_1_rd34
    // h3_1_rd35
    // h3_1_rd36
    // h3_1_rd37
    // h3_1_rd38
    // h3_1_rd39
    // h3_1_rd40
    // h3_1_rd41
    // h3_1_rd42
    // h3_1_rd43
    // h3_1_rd44
    // h3_1_rd45
    // h3_1_rd46
    // h3_1_rd47
    // h3_1_rd48
    // h3_1_rd49
    // h3_1_rd50
    // h3_1_rd51
    // h3_1_rd52
    // h3_1_rd53
    // h3_1_rd54
    // h3_1_rd55
    // h3_1_rd56
    // h3_1_rd57
    // h3_1_rd58
    // h3_1_rd59
    // h3_1_rd60
    // h3_1_rd61
    // h3_1_rd62
    // h3_1_rd63
    // h3_1_rd64
    // h3_1_rd65
    // h3_1_rd66
    // h3_1_rd67
    // h3_1_rd68
    // h3_1_rd69
    // h3_1_rd70
    // h3_1_rd71
    // h3_1_rd72
    // h3_1_rd73
    // h3_1_rd74
    // h3_1_rd75
    // h3_1_rd76
    // h3_1_rd77
    // h3_1_rd78
    // h3_1_rd79

	hw_uint<2560> result;
	hw_uint<32>  h3_1_rd0_res = h3_1_rd0_select(h3_0, d0, d1, dynamic_address);
	set_at<0, 2560>(result, h3_1_rd0_res);
	hw_uint<32>  h3_1_rd1_res = h3_1_rd1_select(h3_0, d0, d1, dynamic_address);
	set_at<32, 2560>(result, h3_1_rd1_res);
	hw_uint<32>  h3_1_rd2_res = h3_1_rd2_select(h3_0, d0, d1, dynamic_address);
	set_at<64, 2560>(result, h3_1_rd2_res);
	hw_uint<32>  h3_1_rd3_res = h3_1_rd3_select(h3_0, d0, d1, dynamic_address);
	set_at<96, 2560>(result, h3_1_rd3_res);
	hw_uint<32>  h3_1_rd4_res = h3_1_rd4_select(h3_0, d0, d1, dynamic_address);
	set_at<128, 2560>(result, h3_1_rd4_res);
	hw_uint<32>  h3_1_rd5_res = h3_1_rd5_select(h3_0, d0, d1, dynamic_address);
	set_at<160, 2560>(result, h3_1_rd5_res);
	hw_uint<32>  h3_1_rd6_res = h3_1_rd6_select(h3_0, d0, d1, dynamic_address);
	set_at<192, 2560>(result, h3_1_rd6_res);
	hw_uint<32>  h3_1_rd7_res = h3_1_rd7_select(h3_0, d0, d1, dynamic_address);
	set_at<224, 2560>(result, h3_1_rd7_res);
	hw_uint<32>  h3_1_rd8_res = h3_1_rd8_select(h3_0, d0, d1, dynamic_address);
	set_at<256, 2560>(result, h3_1_rd8_res);
	hw_uint<32>  h3_1_rd9_res = h3_1_rd9_select(h3_0, d0, d1, dynamic_address);
	set_at<288, 2560>(result, h3_1_rd9_res);
	hw_uint<32>  h3_1_rd10_res = h3_1_rd10_select(h3_0, d0, d1, dynamic_address);
	set_at<320, 2560>(result, h3_1_rd10_res);
	hw_uint<32>  h3_1_rd11_res = h3_1_rd11_select(h3_0, d0, d1, dynamic_address);
	set_at<352, 2560>(result, h3_1_rd11_res);
	hw_uint<32>  h3_1_rd12_res = h3_1_rd12_select(h3_0, d0, d1, dynamic_address);
	set_at<384, 2560>(result, h3_1_rd12_res);
	hw_uint<32>  h3_1_rd13_res = h3_1_rd13_select(h3_0, d0, d1, dynamic_address);
	set_at<416, 2560>(result, h3_1_rd13_res);
	hw_uint<32>  h3_1_rd14_res = h3_1_rd14_select(h3_0, d0, d1, dynamic_address);
	set_at<448, 2560>(result, h3_1_rd14_res);
	hw_uint<32>  h3_1_rd15_res = h3_1_rd15_select(h3_0, d0, d1, dynamic_address);
	set_at<480, 2560>(result, h3_1_rd15_res);
	hw_uint<32>  h3_1_rd16_res = h3_1_rd16_select(h3_0, d0, d1, dynamic_address);
	set_at<512, 2560>(result, h3_1_rd16_res);
	hw_uint<32>  h3_1_rd17_res = h3_1_rd17_select(h3_0, d0, d1, dynamic_address);
	set_at<544, 2560>(result, h3_1_rd17_res);
	hw_uint<32>  h3_1_rd18_res = h3_1_rd18_select(h3_0, d0, d1, dynamic_address);
	set_at<576, 2560>(result, h3_1_rd18_res);
	hw_uint<32>  h3_1_rd19_res = h3_1_rd19_select(h3_0, d0, d1, dynamic_address);
	set_at<608, 2560>(result, h3_1_rd19_res);
	hw_uint<32>  h3_1_rd20_res = h3_1_rd20_select(h3_0, d0, d1, dynamic_address);
	set_at<640, 2560>(result, h3_1_rd20_res);
	hw_uint<32>  h3_1_rd21_res = h3_1_rd21_select(h3_0, d0, d1, dynamic_address);
	set_at<672, 2560>(result, h3_1_rd21_res);
	hw_uint<32>  h3_1_rd22_res = h3_1_rd22_select(h3_0, d0, d1, dynamic_address);
	set_at<704, 2560>(result, h3_1_rd22_res);
	hw_uint<32>  h3_1_rd23_res = h3_1_rd23_select(h3_0, d0, d1, dynamic_address);
	set_at<736, 2560>(result, h3_1_rd23_res);
	hw_uint<32>  h3_1_rd24_res = h3_1_rd24_select(h3_0, d0, d1, dynamic_address);
	set_at<768, 2560>(result, h3_1_rd24_res);
	hw_uint<32>  h3_1_rd25_res = h3_1_rd25_select(h3_0, d0, d1, dynamic_address);
	set_at<800, 2560>(result, h3_1_rd25_res);
	hw_uint<32>  h3_1_rd26_res = h3_1_rd26_select(h3_0, d0, d1, dynamic_address);
	set_at<832, 2560>(result, h3_1_rd26_res);
	hw_uint<32>  h3_1_rd27_res = h3_1_rd27_select(h3_0, d0, d1, dynamic_address);
	set_at<864, 2560>(result, h3_1_rd27_res);
	hw_uint<32>  h3_1_rd28_res = h3_1_rd28_select(h3_0, d0, d1, dynamic_address);
	set_at<896, 2560>(result, h3_1_rd28_res);
	hw_uint<32>  h3_1_rd29_res = h3_1_rd29_select(h3_0, d0, d1, dynamic_address);
	set_at<928, 2560>(result, h3_1_rd29_res);
	hw_uint<32>  h3_1_rd30_res = h3_1_rd30_select(h3_0, d0, d1, dynamic_address);
	set_at<960, 2560>(result, h3_1_rd30_res);
	hw_uint<32>  h3_1_rd31_res = h3_1_rd31_select(h3_0, d0, d1, dynamic_address);
	set_at<992, 2560>(result, h3_1_rd31_res);
	hw_uint<32>  h3_1_rd32_res = h3_1_rd32_select(h3_0, d0, d1, dynamic_address);
	set_at<1024, 2560>(result, h3_1_rd32_res);
	hw_uint<32>  h3_1_rd33_res = h3_1_rd33_select(h3_0, d0, d1, dynamic_address);
	set_at<1056, 2560>(result, h3_1_rd33_res);
	hw_uint<32>  h3_1_rd34_res = h3_1_rd34_select(h3_0, d0, d1, dynamic_address);
	set_at<1088, 2560>(result, h3_1_rd34_res);
	hw_uint<32>  h3_1_rd35_res = h3_1_rd35_select(h3_0, d0, d1, dynamic_address);
	set_at<1120, 2560>(result, h3_1_rd35_res);
	hw_uint<32>  h3_1_rd36_res = h3_1_rd36_select(h3_0, d0, d1, dynamic_address);
	set_at<1152, 2560>(result, h3_1_rd36_res);
	hw_uint<32>  h3_1_rd37_res = h3_1_rd37_select(h3_0, d0, d1, dynamic_address);
	set_at<1184, 2560>(result, h3_1_rd37_res);
	hw_uint<32>  h3_1_rd38_res = h3_1_rd38_select(h3_0, d0, d1, dynamic_address);
	set_at<1216, 2560>(result, h3_1_rd38_res);
	hw_uint<32>  h3_1_rd39_res = h3_1_rd39_select(h3_0, d0, d1, dynamic_address);
	set_at<1248, 2560>(result, h3_1_rd39_res);
	hw_uint<32>  h3_1_rd40_res = h3_1_rd40_select(h3_0, d0, d1, dynamic_address);
	set_at<1280, 2560>(result, h3_1_rd40_res);
	hw_uint<32>  h3_1_rd41_res = h3_1_rd41_select(h3_0, d0, d1, dynamic_address);
	set_at<1312, 2560>(result, h3_1_rd41_res);
	hw_uint<32>  h3_1_rd42_res = h3_1_rd42_select(h3_0, d0, d1, dynamic_address);
	set_at<1344, 2560>(result, h3_1_rd42_res);
	hw_uint<32>  h3_1_rd43_res = h3_1_rd43_select(h3_0, d0, d1, dynamic_address);
	set_at<1376, 2560>(result, h3_1_rd43_res);
	hw_uint<32>  h3_1_rd44_res = h3_1_rd44_select(h3_0, d0, d1, dynamic_address);
	set_at<1408, 2560>(result, h3_1_rd44_res);
	hw_uint<32>  h3_1_rd45_res = h3_1_rd45_select(h3_0, d0, d1, dynamic_address);
	set_at<1440, 2560>(result, h3_1_rd45_res);
	hw_uint<32>  h3_1_rd46_res = h3_1_rd46_select(h3_0, d0, d1, dynamic_address);
	set_at<1472, 2560>(result, h3_1_rd46_res);
	hw_uint<32>  h3_1_rd47_res = h3_1_rd47_select(h3_0, d0, d1, dynamic_address);
	set_at<1504, 2560>(result, h3_1_rd47_res);
	hw_uint<32>  h3_1_rd48_res = h3_1_rd48_select(h3_0, d0, d1, dynamic_address);
	set_at<1536, 2560>(result, h3_1_rd48_res);
	hw_uint<32>  h3_1_rd49_res = h3_1_rd49_select(h3_0, d0, d1, dynamic_address);
	set_at<1568, 2560>(result, h3_1_rd49_res);
	hw_uint<32>  h3_1_rd50_res = h3_1_rd50_select(h3_0, d0, d1, dynamic_address);
	set_at<1600, 2560>(result, h3_1_rd50_res);
	hw_uint<32>  h3_1_rd51_res = h3_1_rd51_select(h3_0, d0, d1, dynamic_address);
	set_at<1632, 2560>(result, h3_1_rd51_res);
	hw_uint<32>  h3_1_rd52_res = h3_1_rd52_select(h3_0, d0, d1, dynamic_address);
	set_at<1664, 2560>(result, h3_1_rd52_res);
	hw_uint<32>  h3_1_rd53_res = h3_1_rd53_select(h3_0, d0, d1, dynamic_address);
	set_at<1696, 2560>(result, h3_1_rd53_res);
	hw_uint<32>  h3_1_rd54_res = h3_1_rd54_select(h3_0, d0, d1, dynamic_address);
	set_at<1728, 2560>(result, h3_1_rd54_res);
	hw_uint<32>  h3_1_rd55_res = h3_1_rd55_select(h3_0, d0, d1, dynamic_address);
	set_at<1760, 2560>(result, h3_1_rd55_res);
	hw_uint<32>  h3_1_rd56_res = h3_1_rd56_select(h3_0, d0, d1, dynamic_address);
	set_at<1792, 2560>(result, h3_1_rd56_res);
	hw_uint<32>  h3_1_rd57_res = h3_1_rd57_select(h3_0, d0, d1, dynamic_address);
	set_at<1824, 2560>(result, h3_1_rd57_res);
	hw_uint<32>  h3_1_rd58_res = h3_1_rd58_select(h3_0, d0, d1, dynamic_address);
	set_at<1856, 2560>(result, h3_1_rd58_res);
	hw_uint<32>  h3_1_rd59_res = h3_1_rd59_select(h3_0, d0, d1, dynamic_address);
	set_at<1888, 2560>(result, h3_1_rd59_res);
	hw_uint<32>  h3_1_rd60_res = h3_1_rd60_select(h3_0, d0, d1, dynamic_address);
	set_at<1920, 2560>(result, h3_1_rd60_res);
	hw_uint<32>  h3_1_rd61_res = h3_1_rd61_select(h3_0, d0, d1, dynamic_address);
	set_at<1952, 2560>(result, h3_1_rd61_res);
	hw_uint<32>  h3_1_rd62_res = h3_1_rd62_select(h3_0, d0, d1, dynamic_address);
	set_at<1984, 2560>(result, h3_1_rd62_res);
	hw_uint<32>  h3_1_rd63_res = h3_1_rd63_select(h3_0, d0, d1, dynamic_address);
	set_at<2016, 2560>(result, h3_1_rd63_res);
	hw_uint<32>  h3_1_rd64_res = h3_1_rd64_select(h3_0, d0, d1, dynamic_address);
	set_at<2048, 2560>(result, h3_1_rd64_res);
	hw_uint<32>  h3_1_rd65_res = h3_1_rd65_select(h3_0, d0, d1, dynamic_address);
	set_at<2080, 2560>(result, h3_1_rd65_res);
	hw_uint<32>  h3_1_rd66_res = h3_1_rd66_select(h3_0, d0, d1, dynamic_address);
	set_at<2112, 2560>(result, h3_1_rd66_res);
	hw_uint<32>  h3_1_rd67_res = h3_1_rd67_select(h3_0, d0, d1, dynamic_address);
	set_at<2144, 2560>(result, h3_1_rd67_res);
	hw_uint<32>  h3_1_rd68_res = h3_1_rd68_select(h3_0, d0, d1, dynamic_address);
	set_at<2176, 2560>(result, h3_1_rd68_res);
	hw_uint<32>  h3_1_rd69_res = h3_1_rd69_select(h3_0, d0, d1, dynamic_address);
	set_at<2208, 2560>(result, h3_1_rd69_res);
	hw_uint<32>  h3_1_rd70_res = h3_1_rd70_select(h3_0, d0, d1, dynamic_address);
	set_at<2240, 2560>(result, h3_1_rd70_res);
	hw_uint<32>  h3_1_rd71_res = h3_1_rd71_select(h3_0, d0, d1, dynamic_address);
	set_at<2272, 2560>(result, h3_1_rd71_res);
	hw_uint<32>  h3_1_rd72_res = h3_1_rd72_select(h3_0, d0, d1, dynamic_address);
	set_at<2304, 2560>(result, h3_1_rd72_res);
	hw_uint<32>  h3_1_rd73_res = h3_1_rd73_select(h3_0, d0, d1, dynamic_address);
	set_at<2336, 2560>(result, h3_1_rd73_res);
	hw_uint<32>  h3_1_rd74_res = h3_1_rd74_select(h3_0, d0, d1, dynamic_address);
	set_at<2368, 2560>(result, h3_1_rd74_res);
	hw_uint<32>  h3_1_rd75_res = h3_1_rd75_select(h3_0, d0, d1, dynamic_address);
	set_at<2400, 2560>(result, h3_1_rd75_res);
	hw_uint<32>  h3_1_rd76_res = h3_1_rd76_select(h3_0, d0, d1, dynamic_address);
	set_at<2432, 2560>(result, h3_1_rd76_res);
	hw_uint<32>  h3_1_rd77_res = h3_1_rd77_select(h3_0, d0, d1, dynamic_address);
	set_at<2464, 2560>(result, h3_1_rd77_res);
	hw_uint<32>  h3_1_rd78_res = h3_1_rd78_select(h3_0, d0, d1, dynamic_address);
	set_at<2496, 2560>(result, h3_1_rd78_res);
	hw_uint<32>  h3_1_rd79_res = h3_1_rd79_select(h3_0, d0, d1, dynamic_address);
	set_at<2528, 2560>(result, h3_1_rd79_res);
	return result;
}

struct h3_1_h3_1_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-112, 1136], [-8, 1030]}
	// Capacity: 162
	// # of read delays: 5
  // 0, 1, 80, 81, 161
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 78> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 79> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_79() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_80() {
		return f4;
	}

	inline hw_uint<32>  peek_81() {
		return f6;
	}

	inline hw_uint<32>  peek_160() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_161() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 78
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 78 reading from capacity: 1
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
	// RAM Box: {[-111, 1121], [-8, 1031]}
	// Capacity: 162
	// # of read delays: 4
  // 0, 1, 81, 161
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 79> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 79> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_81() {
		return f4;
	}

	inline hw_uint<32>  peek_160() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_161() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write10_merged_banks_5_cache {
	// RAM Box: {[-102, 1130], [-8, 1031]}
	// Capacity: 162
	// # of read delays: 4
  // 0, 1, 81, 161
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 79> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 79> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_81() {
		return f4;
	}

	inline hw_uint<32>  peek_160() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_161() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write11_merged_banks_5_cache {
	// RAM Box: {[-101, 1131], [-8, 1031]}
	// Capacity: 162
	// # of read delays: 4
  // 0, 1, 81, 161
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 79> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 79> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_81() {
		return f4;
	}

	inline hw_uint<32>  peek_160() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_161() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write12_merged_banks_5_cache {
	// RAM Box: {[-100, 1132], [-8, 1031]}
	// Capacity: 162
	// # of read delays: 4
  // 0, 1, 81, 161
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 79> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 79> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_81() {
		return f4;
	}

	inline hw_uint<32>  peek_160() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_161() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write13_merged_banks_5_cache {
	// RAM Box: {[-99, 1133], [-8, 1031]}
	// Capacity: 162
	// # of read delays: 4
  // 0, 1, 81, 161
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 79> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 79> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_81() {
		return f4;
	}

	inline hw_uint<32>  peek_160() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_161() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write14_merged_banks_5_cache {
	// RAM Box: {[-98, 1134], [-8, 1031]}
	// Capacity: 162
	// # of read delays: 4
  // 0, 1, 81, 161
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 79> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 79> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_81() {
		return f4;
	}

	inline hw_uint<32>  peek_160() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_161() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write15_merged_banks_5_cache {
	// RAM Box: {[-113, 1135], [-7, 1031]}
	// Capacity: 162
	// # of read delays: 5
  // 0, 1, 81, 82, 161
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 79> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 78> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_81() {
		return f4;
	}

	inline hw_uint<32>  peek_82() {
		return f6;
	}

	inline hw_uint<32>  peek_160() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_161() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 78
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 78 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
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
	// RAM Box: {[-110, 1122], [-8, 1031]}
	// Capacity: 162
	// # of read delays: 4
  // 0, 1, 81, 161
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 79> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 79> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_81() {
		return f4;
	}

	inline hw_uint<32>  peek_160() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_161() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
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
	// RAM Box: {[-109, 1123], [-8, 1031]}
	// Capacity: 162
	// # of read delays: 4
  // 0, 1, 81, 161
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 79> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 79> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_81() {
		return f4;
	}

	inline hw_uint<32>  peek_160() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_161() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write4_merged_banks_5_cache {
	// RAM Box: {[-108, 1124], [-8, 1031]}
	// Capacity: 162
	// # of read delays: 4
  // 0, 1, 81, 161
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 79> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 79> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_81() {
		return f4;
	}

	inline hw_uint<32>  peek_160() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_161() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write5_merged_banks_5_cache {
	// RAM Box: {[-107, 1125], [-8, 1031]}
	// Capacity: 162
	// # of read delays: 4
  // 0, 1, 81, 161
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 79> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 79> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_81() {
		return f4;
	}

	inline hw_uint<32>  peek_160() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_161() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write6_merged_banks_5_cache {
	// RAM Box: {[-106, 1126], [-8, 1031]}
	// Capacity: 162
	// # of read delays: 4
  // 0, 1, 81, 161
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 79> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 79> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_81() {
		return f4;
	}

	inline hw_uint<32>  peek_160() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_161() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write7_merged_banks_5_cache {
	// RAM Box: {[-105, 1127], [-8, 1031]}
	// Capacity: 162
	// # of read delays: 4
  // 0, 1, 81, 161
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 79> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 79> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_81() {
		return f4;
	}

	inline hw_uint<32>  peek_160() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_161() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write8_merged_banks_5_cache {
	// RAM Box: {[-104, 1128], [-8, 1031]}
	// Capacity: 162
	// # of read delays: 4
  // 0, 1, 81, 161
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 79> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 79> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_81() {
		return f4;
	}

	inline hw_uint<32>  peek_160() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_161() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_1_h3_1_update_0_write9_merged_banks_5_cache {
	// RAM Box: {[-103, 1129], [-8, 1031]}
	// Capacity: 162
	// # of read delays: 4
  // 0, 1, 81, 161
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 79> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 79> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_80() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_81() {
		return f4;
	}

	inline hw_uint<32>  peek_160() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_161() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 79
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 79 reading from capacity: 1
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
  // # of banks: 16
  h3_1_h3_1_update_0_write0_merged_banks_5_cache h3_1_h3_1_update_0_write0_merged_banks_5;
  h3_1_h3_1_update_0_write1_merged_banks_5_cache h3_1_h3_1_update_0_write1_merged_banks_5;
  h3_1_h3_1_update_0_write10_merged_banks_5_cache h3_1_h3_1_update_0_write10_merged_banks_5;
  h3_1_h3_1_update_0_write11_merged_banks_5_cache h3_1_h3_1_update_0_write11_merged_banks_5;
  h3_1_h3_1_update_0_write12_merged_banks_5_cache h3_1_h3_1_update_0_write12_merged_banks_5;
  h3_1_h3_1_update_0_write13_merged_banks_5_cache h3_1_h3_1_update_0_write13_merged_banks_5;
  h3_1_h3_1_update_0_write14_merged_banks_5_cache h3_1_h3_1_update_0_write14_merged_banks_5;
  h3_1_h3_1_update_0_write15_merged_banks_5_cache h3_1_h3_1_update_0_write15_merged_banks_5;
  h3_1_h3_1_update_0_write2_merged_banks_5_cache h3_1_h3_1_update_0_write2_merged_banks_5;
  h3_1_h3_1_update_0_write3_merged_banks_5_cache h3_1_h3_1_update_0_write3_merged_banks_5;
  h3_1_h3_1_update_0_write4_merged_banks_5_cache h3_1_h3_1_update_0_write4_merged_banks_5;
  h3_1_h3_1_update_0_write5_merged_banks_5_cache h3_1_h3_1_update_0_write5_merged_banks_5;
  h3_1_h3_1_update_0_write6_merged_banks_5_cache h3_1_h3_1_update_0_write6_merged_banks_5;
  h3_1_h3_1_update_0_write7_merged_banks_5_cache h3_1_h3_1_update_0_write7_merged_banks_5;
  h3_1_h3_1_update_0_write8_merged_banks_5_cache h3_1_h3_1_update_0_write8_merged_banks_5;
  h3_1_h3_1_update_0_write9_merged_banks_5_cache h3_1_h3_1_update_0_write9_merged_banks_5;
};



inline void h3_1_h3_1_update_0_write0_write(hw_uint<32> & h3_1_h3_1_update_0_write0, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.push(h3_1_h3_1_update_0_write0);
}

inline void h3_1_h3_1_update_0_write1_write(hw_uint<32> & h3_1_h3_1_update_0_write1, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write1_merged_banks_5.push(h3_1_h3_1_update_0_write1);
}

inline void h3_1_h3_1_update_0_write10_write(hw_uint<32> & h3_1_h3_1_update_0_write10, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write10_merged_banks_5.push(h3_1_h3_1_update_0_write10);
}

inline void h3_1_h3_1_update_0_write11_write(hw_uint<32> & h3_1_h3_1_update_0_write11, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write11_merged_banks_5.push(h3_1_h3_1_update_0_write11);
}

inline void h3_1_h3_1_update_0_write12_write(hw_uint<32> & h3_1_h3_1_update_0_write12, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write12_merged_banks_5.push(h3_1_h3_1_update_0_write12);
}

inline void h3_1_h3_1_update_0_write13_write(hw_uint<32> & h3_1_h3_1_update_0_write13, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write13_merged_banks_5.push(h3_1_h3_1_update_0_write13);
}

inline void h3_1_h3_1_update_0_write14_write(hw_uint<32> & h3_1_h3_1_update_0_write14, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write14_merged_banks_5.push(h3_1_h3_1_update_0_write14);
}

inline void h3_1_h3_1_update_0_write15_write(hw_uint<32> & h3_1_h3_1_update_0_write15, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write15_merged_banks_5.push(h3_1_h3_1_update_0_write15);
}

inline void h3_1_h3_1_update_0_write2_write(hw_uint<32> & h3_1_h3_1_update_0_write2, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write2_merged_banks_5.push(h3_1_h3_1_update_0_write2);
}

inline void h3_1_h3_1_update_0_write3_write(hw_uint<32> & h3_1_h3_1_update_0_write3, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write3_merged_banks_5.push(h3_1_h3_1_update_0_write3);
}

inline void h3_1_h3_1_update_0_write4_write(hw_uint<32> & h3_1_h3_1_update_0_write4, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write4_merged_banks_5.push(h3_1_h3_1_update_0_write4);
}

inline void h3_1_h3_1_update_0_write5_write(hw_uint<32> & h3_1_h3_1_update_0_write5, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write5_merged_banks_5.push(h3_1_h3_1_update_0_write5);
}

inline void h3_1_h3_1_update_0_write6_write(hw_uint<32> & h3_1_h3_1_update_0_write6, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write6_merged_banks_5.push(h3_1_h3_1_update_0_write6);
}

inline void h3_1_h3_1_update_0_write7_write(hw_uint<32> & h3_1_h3_1_update_0_write7, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write7_merged_banks_5.push(h3_1_h3_1_update_0_write7);
}

inline void h3_1_h3_1_update_0_write8_write(hw_uint<32> & h3_1_h3_1_update_0_write8, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write8_merged_banks_5.push(h3_1_h3_1_update_0_write8);
}

inline void h3_1_h3_1_update_0_write9_write(hw_uint<32> & h3_1_h3_1_update_0_write9, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  h3_1.h3_1_h3_1_update_0_write9_merged_banks_5.push(h3_1_h3_1_update_0_write9);
}

inline hw_uint<32>  h3_2_rd0_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd0 read pattern: { h3_2_update_0[d0, d1] -> h3_1[-1 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write15 = h3_1.h3_1_h3_1_update_0_write15_merged_banks_5.peek_82();
  return value_h3_1_h3_1_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_2_rd1_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd1 read pattern: { h3_2_update_0[d0, d1] -> h3_1[16d0, -1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.peek_161();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd10_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd10 read pattern: { h3_2_update_0[d0, d1] -> h3_1[1 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd11_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd11 read pattern: { h3_2_update_0[d0, d1] -> h3_1[2 + 16d0, -1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_5.peek_161();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_2_rd12_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd12 read pattern: { h3_2_update_0[d0, d1] -> h3_1[2 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_2_rd13_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd13 read pattern: { h3_2_update_0[d0, d1] -> h3_1[2 + 16d0, 1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_2_rd14_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd14 read pattern: { h3_2_update_0[d0, d1] -> h3_1[3 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd15_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd15 read pattern: { h3_2_update_0[d0, d1] -> h3_1[2 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_2_rd16_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd16 read pattern: { h3_2_update_0[d0, d1] -> h3_1[3 + 16d0, -1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_5.peek_161();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd17_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd17 read pattern: { h3_2_update_0[d0, d1] -> h3_1[3 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd18_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd18 read pattern: { h3_2_update_0[d0, d1] -> h3_1[3 + 16d0, 1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd19_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd19 read pattern: { h3_2_update_0[d0, d1] -> h3_1[4 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write4 = h3_1.h3_1_h3_1_update_0_write4_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_2_rd2_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd2 read pattern: { h3_2_update_0[d0, d1] -> h3_1[16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd20_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd20 read pattern: { h3_2_update_0[d0, d1] -> h3_1[3 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd21_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd21 read pattern: { h3_2_update_0[d0, d1] -> h3_1[4 + 16d0, -1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write4 = h3_1.h3_1_h3_1_update_0_write4_merged_banks_5.peek_161();
  return value_h3_1_h3_1_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_2_rd22_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd22 read pattern: { h3_2_update_0[d0, d1] -> h3_1[4 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write4 = h3_1.h3_1_h3_1_update_0_write4_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_2_rd23_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd23 read pattern: { h3_2_update_0[d0, d1] -> h3_1[4 + 16d0, 1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write4 = h3_1.h3_1_h3_1_update_0_write4_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_2_rd24_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd24 read pattern: { h3_2_update_0[d0, d1] -> h3_1[5 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write5 = h3_1.h3_1_h3_1_update_0_write5_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_2_rd25_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd25 read pattern: { h3_2_update_0[d0, d1] -> h3_1[4 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write4 = h3_1.h3_1_h3_1_update_0_write4_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_2_rd26_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd26 read pattern: { h3_2_update_0[d0, d1] -> h3_1[5 + 16d0, -1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write5 = h3_1.h3_1_h3_1_update_0_write5_merged_banks_5.peek_161();
  return value_h3_1_h3_1_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_2_rd27_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd27 read pattern: { h3_2_update_0[d0, d1] -> h3_1[5 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write5 = h3_1.h3_1_h3_1_update_0_write5_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_2_rd28_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd28 read pattern: { h3_2_update_0[d0, d1] -> h3_1[5 + 16d0, 1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write5 = h3_1.h3_1_h3_1_update_0_write5_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_2_rd29_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd29 read pattern: { h3_2_update_0[d0, d1] -> h3_1[6 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write6 = h3_1.h3_1_h3_1_update_0_write6_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_2_rd3_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd3 read pattern: { h3_2_update_0[d0, d1] -> h3_1[16d0, 1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd30_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd30 read pattern: { h3_2_update_0[d0, d1] -> h3_1[5 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write5 = h3_1.h3_1_h3_1_update_0_write5_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_2_rd31_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd31 read pattern: { h3_2_update_0[d0, d1] -> h3_1[6 + 16d0, -1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write6 = h3_1.h3_1_h3_1_update_0_write6_merged_banks_5.peek_161();
  return value_h3_1_h3_1_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_2_rd32_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd32 read pattern: { h3_2_update_0[d0, d1] -> h3_1[6 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write6 = h3_1.h3_1_h3_1_update_0_write6_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_2_rd33_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd33 read pattern: { h3_2_update_0[d0, d1] -> h3_1[6 + 16d0, 1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write6 = h3_1.h3_1_h3_1_update_0_write6_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_2_rd34_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd34 read pattern: { h3_2_update_0[d0, d1] -> h3_1[7 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write7 = h3_1.h3_1_h3_1_update_0_write7_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_2_rd35_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd35 read pattern: { h3_2_update_0[d0, d1] -> h3_1[6 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write6 = h3_1.h3_1_h3_1_update_0_write6_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_2_rd36_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd36 read pattern: { h3_2_update_0[d0, d1] -> h3_1[7 + 16d0, -1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write7 = h3_1.h3_1_h3_1_update_0_write7_merged_banks_5.peek_161();
  return value_h3_1_h3_1_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_2_rd37_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd37 read pattern: { h3_2_update_0[d0, d1] -> h3_1[7 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write7 = h3_1.h3_1_h3_1_update_0_write7_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_2_rd38_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd38 read pattern: { h3_2_update_0[d0, d1] -> h3_1[7 + 16d0, 1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write7 = h3_1.h3_1_h3_1_update_0_write7_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_2_rd39_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd39 read pattern: { h3_2_update_0[d0, d1] -> h3_1[8 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write8 = h3_1.h3_1_h3_1_update_0_write8_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_2_rd4_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd4 read pattern: { h3_2_update_0[d0, d1] -> h3_1[1 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd40_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd40 read pattern: { h3_2_update_0[d0, d1] -> h3_1[7 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write7 = h3_1.h3_1_h3_1_update_0_write7_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_2_rd41_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd41 read pattern: { h3_2_update_0[d0, d1] -> h3_1[8 + 16d0, -1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write8 = h3_1.h3_1_h3_1_update_0_write8_merged_banks_5.peek_161();
  return value_h3_1_h3_1_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_2_rd42_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd42 read pattern: { h3_2_update_0[d0, d1] -> h3_1[8 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write8 = h3_1.h3_1_h3_1_update_0_write8_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_2_rd43_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd43 read pattern: { h3_2_update_0[d0, d1] -> h3_1[8 + 16d0, 1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write8 = h3_1.h3_1_h3_1_update_0_write8_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_2_rd44_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd44 read pattern: { h3_2_update_0[d0, d1] -> h3_1[9 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write9 = h3_1.h3_1_h3_1_update_0_write9_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_2_rd45_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd45 read pattern: { h3_2_update_0[d0, d1] -> h3_1[8 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write8 = h3_1.h3_1_h3_1_update_0_write8_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_2_rd46_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd46 read pattern: { h3_2_update_0[d0, d1] -> h3_1[9 + 16d0, -1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write9 = h3_1.h3_1_h3_1_update_0_write9_merged_banks_5.peek_161();
  return value_h3_1_h3_1_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_2_rd47_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd47 read pattern: { h3_2_update_0[d0, d1] -> h3_1[9 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write9 = h3_1.h3_1_h3_1_update_0_write9_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_2_rd48_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd48 read pattern: { h3_2_update_0[d0, d1] -> h3_1[9 + 16d0, 1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write9 = h3_1.h3_1_h3_1_update_0_write9_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_2_rd49_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd49 read pattern: { h3_2_update_0[d0, d1] -> h3_1[10 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write10 = h3_1.h3_1_h3_1_update_0_write10_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_2_rd5_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd5 read pattern: { h3_2_update_0[d0, d1] -> h3_1[16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd50_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd50 read pattern: { h3_2_update_0[d0, d1] -> h3_1[9 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write9 = h3_1.h3_1_h3_1_update_0_write9_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_2_rd51_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd51 read pattern: { h3_2_update_0[d0, d1] -> h3_1[10 + 16d0, -1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write10 = h3_1.h3_1_h3_1_update_0_write10_merged_banks_5.peek_161();
  return value_h3_1_h3_1_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_2_rd52_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd52 read pattern: { h3_2_update_0[d0, d1] -> h3_1[10 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write10 = h3_1.h3_1_h3_1_update_0_write10_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_2_rd53_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd53 read pattern: { h3_2_update_0[d0, d1] -> h3_1[10 + 16d0, 1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write10 = h3_1.h3_1_h3_1_update_0_write10_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_2_rd54_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd54 read pattern: { h3_2_update_0[d0, d1] -> h3_1[11 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write11 = h3_1.h3_1_h3_1_update_0_write11_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_2_rd55_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd55 read pattern: { h3_2_update_0[d0, d1] -> h3_1[10 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write10 = h3_1.h3_1_h3_1_update_0_write10_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_2_rd56_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd56 read pattern: { h3_2_update_0[d0, d1] -> h3_1[11 + 16d0, -1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write11 = h3_1.h3_1_h3_1_update_0_write11_merged_banks_5.peek_161();
  return value_h3_1_h3_1_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_2_rd57_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd57 read pattern: { h3_2_update_0[d0, d1] -> h3_1[11 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write11 = h3_1.h3_1_h3_1_update_0_write11_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_2_rd58_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd58 read pattern: { h3_2_update_0[d0, d1] -> h3_1[11 + 16d0, 1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write11 = h3_1.h3_1_h3_1_update_0_write11_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_2_rd59_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd59 read pattern: { h3_2_update_0[d0, d1] -> h3_1[12 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write12 = h3_1.h3_1_h3_1_update_0_write12_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_2_rd6_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd6 read pattern: { h3_2_update_0[d0, d1] -> h3_1[1 + 16d0, -1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_5.peek_161();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd60_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd60 read pattern: { h3_2_update_0[d0, d1] -> h3_1[11 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write11 = h3_1.h3_1_h3_1_update_0_write11_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_2_rd61_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd61 read pattern: { h3_2_update_0[d0, d1] -> h3_1[12 + 16d0, -1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write12 = h3_1.h3_1_h3_1_update_0_write12_merged_banks_5.peek_161();
  return value_h3_1_h3_1_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_2_rd62_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd62 read pattern: { h3_2_update_0[d0, d1] -> h3_1[12 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write12 = h3_1.h3_1_h3_1_update_0_write12_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_2_rd63_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd63 read pattern: { h3_2_update_0[d0, d1] -> h3_1[12 + 16d0, 1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write12 = h3_1.h3_1_h3_1_update_0_write12_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_2_rd64_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd64 read pattern: { h3_2_update_0[d0, d1] -> h3_1[13 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write13 = h3_1.h3_1_h3_1_update_0_write13_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_2_rd65_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd65 read pattern: { h3_2_update_0[d0, d1] -> h3_1[12 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write12 = h3_1.h3_1_h3_1_update_0_write12_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_2_rd66_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd66 read pattern: { h3_2_update_0[d0, d1] -> h3_1[13 + 16d0, -1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write13 = h3_1.h3_1_h3_1_update_0_write13_merged_banks_5.peek_161();
  return value_h3_1_h3_1_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_2_rd67_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd67 read pattern: { h3_2_update_0[d0, d1] -> h3_1[13 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write13 = h3_1.h3_1_h3_1_update_0_write13_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_2_rd68_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd68 read pattern: { h3_2_update_0[d0, d1] -> h3_1[13 + 16d0, 1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write13 = h3_1.h3_1_h3_1_update_0_write13_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_2_rd69_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd69 read pattern: { h3_2_update_0[d0, d1] -> h3_1[14 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write14 = h3_1.h3_1_h3_1_update_0_write14_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_2_rd7_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd7 read pattern: { h3_2_update_0[d0, d1] -> h3_1[1 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd70_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd70 read pattern: { h3_2_update_0[d0, d1] -> h3_1[13 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write13 = h3_1.h3_1_h3_1_update_0_write13_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_2_rd71_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd71 read pattern: { h3_2_update_0[d0, d1] -> h3_1[14 + 16d0, -1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write14 = h3_1.h3_1_h3_1_update_0_write14_merged_banks_5.peek_161();
  return value_h3_1_h3_1_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_2_rd72_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd72 read pattern: { h3_2_update_0[d0, d1] -> h3_1[14 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write14 = h3_1.h3_1_h3_1_update_0_write14_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_2_rd73_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd73 read pattern: { h3_2_update_0[d0, d1] -> h3_1[14 + 16d0, 1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write14 = h3_1.h3_1_h3_1_update_0_write14_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_2_rd74_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd74 read pattern: { h3_2_update_0[d0, d1] -> h3_1[15 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write15 = h3_1.h3_1_h3_1_update_0_write15_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_2_rd75_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd75 read pattern: { h3_2_update_0[d0, d1] -> h3_1[14 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write14 = h3_1.h3_1_h3_1_update_0_write14_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_2_rd76_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd76 read pattern: { h3_2_update_0[d0, d1] -> h3_1[15 + 16d0, -1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write15 = h3_1.h3_1_h3_1_update_0_write15_merged_banks_5.peek_161();
  return value_h3_1_h3_1_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_2_rd77_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd77 read pattern: { h3_2_update_0[d0, d1] -> h3_1[15 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write15 = h3_1.h3_1_h3_1_update_0_write15_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_2_rd78_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd78 read pattern: { h3_2_update_0[d0, d1] -> h3_1[15 + 16d0, 1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write15 = h3_1.h3_1_h3_1_update_0_write15_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_2_rd79_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd79 read pattern: { h3_2_update_0[d0, d1] -> h3_1[16 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.peek_80();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd8_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd8 read pattern: { h3_2_update_0[d0, d1] -> h3_1[1 + 16d0, 1 + d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd9_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd9 read pattern: { h3_2_update_0[d0, d1] -> h3_1[2 + 16d0, d1] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_5.peek_81();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

// # of bundles = 2
// h3_1_update_0_write
//	h3_1_h3_1_update_0_write0
//	h3_1_h3_1_update_0_write1
//	h3_1_h3_1_update_0_write2
//	h3_1_h3_1_update_0_write3
//	h3_1_h3_1_update_0_write4
//	h3_1_h3_1_update_0_write5
//	h3_1_h3_1_update_0_write6
//	h3_1_h3_1_update_0_write7
//	h3_1_h3_1_update_0_write8
//	h3_1_h3_1_update_0_write9
//	h3_1_h3_1_update_0_write10
//	h3_1_h3_1_update_0_write11
//	h3_1_h3_1_update_0_write12
//	h3_1_h3_1_update_0_write13
//	h3_1_h3_1_update_0_write14
//	h3_1_h3_1_update_0_write15
inline void h3_1_h3_1_update_0_write_bundle_write(hw_uint<512>& h3_1_update_0_write, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_1_h3_1_update_0_write0_res = h3_1_update_0_write.extract<0, 31>();
	h3_1_h3_1_update_0_write0_write(h3_1_h3_1_update_0_write0_res, h3_1, d0, d1, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write1_res = h3_1_update_0_write.extract<32, 63>();
	h3_1_h3_1_update_0_write1_write(h3_1_h3_1_update_0_write1_res, h3_1, d0, d1, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write2_res = h3_1_update_0_write.extract<64, 95>();
	h3_1_h3_1_update_0_write2_write(h3_1_h3_1_update_0_write2_res, h3_1, d0, d1, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write3_res = h3_1_update_0_write.extract<96, 127>();
	h3_1_h3_1_update_0_write3_write(h3_1_h3_1_update_0_write3_res, h3_1, d0, d1, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write4_res = h3_1_update_0_write.extract<128, 159>();
	h3_1_h3_1_update_0_write4_write(h3_1_h3_1_update_0_write4_res, h3_1, d0, d1, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write5_res = h3_1_update_0_write.extract<160, 191>();
	h3_1_h3_1_update_0_write5_write(h3_1_h3_1_update_0_write5_res, h3_1, d0, d1, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write6_res = h3_1_update_0_write.extract<192, 223>();
	h3_1_h3_1_update_0_write6_write(h3_1_h3_1_update_0_write6_res, h3_1, d0, d1, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write7_res = h3_1_update_0_write.extract<224, 255>();
	h3_1_h3_1_update_0_write7_write(h3_1_h3_1_update_0_write7_res, h3_1, d0, d1, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write8_res = h3_1_update_0_write.extract<256, 287>();
	h3_1_h3_1_update_0_write8_write(h3_1_h3_1_update_0_write8_res, h3_1, d0, d1, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write9_res = h3_1_update_0_write.extract<288, 319>();
	h3_1_h3_1_update_0_write9_write(h3_1_h3_1_update_0_write9_res, h3_1, d0, d1, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write10_res = h3_1_update_0_write.extract<320, 351>();
	h3_1_h3_1_update_0_write10_write(h3_1_h3_1_update_0_write10_res, h3_1, d0, d1, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write11_res = h3_1_update_0_write.extract<352, 383>();
	h3_1_h3_1_update_0_write11_write(h3_1_h3_1_update_0_write11_res, h3_1, d0, d1, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write12_res = h3_1_update_0_write.extract<384, 415>();
	h3_1_h3_1_update_0_write12_write(h3_1_h3_1_update_0_write12_res, h3_1, d0, d1, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write13_res = h3_1_update_0_write.extract<416, 447>();
	h3_1_h3_1_update_0_write13_write(h3_1_h3_1_update_0_write13_res, h3_1, d0, d1, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write14_res = h3_1_update_0_write.extract<448, 479>();
	h3_1_h3_1_update_0_write14_write(h3_1_h3_1_update_0_write14_res, h3_1, d0, d1, dynamic_address);
	hw_uint<32>  h3_1_h3_1_update_0_write15_res = h3_1_update_0_write.extract<480, 511>();
	h3_1_h3_1_update_0_write15_write(h3_1_h3_1_update_0_write15_res, h3_1, d0, d1, dynamic_address);
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
//	h3_2_rd20
//	h3_2_rd21
//	h3_2_rd22
//	h3_2_rd23
//	h3_2_rd24
//	h3_2_rd25
//	h3_2_rd26
//	h3_2_rd27
//	h3_2_rd28
//	h3_2_rd29
//	h3_2_rd30
//	h3_2_rd31
//	h3_2_rd32
//	h3_2_rd33
//	h3_2_rd34
//	h3_2_rd35
//	h3_2_rd36
//	h3_2_rd37
//	h3_2_rd38
//	h3_2_rd39
//	h3_2_rd40
//	h3_2_rd41
//	h3_2_rd42
//	h3_2_rd43
//	h3_2_rd44
//	h3_2_rd45
//	h3_2_rd46
//	h3_2_rd47
//	h3_2_rd48
//	h3_2_rd49
//	h3_2_rd50
//	h3_2_rd51
//	h3_2_rd52
//	h3_2_rd53
//	h3_2_rd54
//	h3_2_rd55
//	h3_2_rd56
//	h3_2_rd57
//	h3_2_rd58
//	h3_2_rd59
//	h3_2_rd60
//	h3_2_rd61
//	h3_2_rd62
//	h3_2_rd63
//	h3_2_rd64
//	h3_2_rd65
//	h3_2_rd66
//	h3_2_rd67
//	h3_2_rd68
//	h3_2_rd69
//	h3_2_rd70
//	h3_2_rd71
//	h3_2_rd72
//	h3_2_rd73
//	h3_2_rd74
//	h3_2_rd75
//	h3_2_rd76
//	h3_2_rd77
//	h3_2_rd78
//	h3_2_rd79
inline hw_uint<2560> h3_1_h3_2_update_0_read_bundle_read(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 80
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
    // h3_2_rd20
    // h3_2_rd21
    // h3_2_rd22
    // h3_2_rd23
    // h3_2_rd24
    // h3_2_rd25
    // h3_2_rd26
    // h3_2_rd27
    // h3_2_rd28
    // h3_2_rd29
    // h3_2_rd30
    // h3_2_rd31
    // h3_2_rd32
    // h3_2_rd33
    // h3_2_rd34
    // h3_2_rd35
    // h3_2_rd36
    // h3_2_rd37
    // h3_2_rd38
    // h3_2_rd39
    // h3_2_rd40
    // h3_2_rd41
    // h3_2_rd42
    // h3_2_rd43
    // h3_2_rd44
    // h3_2_rd45
    // h3_2_rd46
    // h3_2_rd47
    // h3_2_rd48
    // h3_2_rd49
    // h3_2_rd50
    // h3_2_rd51
    // h3_2_rd52
    // h3_2_rd53
    // h3_2_rd54
    // h3_2_rd55
    // h3_2_rd56
    // h3_2_rd57
    // h3_2_rd58
    // h3_2_rd59
    // h3_2_rd60
    // h3_2_rd61
    // h3_2_rd62
    // h3_2_rd63
    // h3_2_rd64
    // h3_2_rd65
    // h3_2_rd66
    // h3_2_rd67
    // h3_2_rd68
    // h3_2_rd69
    // h3_2_rd70
    // h3_2_rd71
    // h3_2_rd72
    // h3_2_rd73
    // h3_2_rd74
    // h3_2_rd75
    // h3_2_rd76
    // h3_2_rd77
    // h3_2_rd78
    // h3_2_rd79

	hw_uint<2560> result;
	hw_uint<32>  h3_2_rd0_res = h3_2_rd0_select(h3_1, d0, d1, dynamic_address);
	set_at<0, 2560>(result, h3_2_rd0_res);
	hw_uint<32>  h3_2_rd1_res = h3_2_rd1_select(h3_1, d0, d1, dynamic_address);
	set_at<32, 2560>(result, h3_2_rd1_res);
	hw_uint<32>  h3_2_rd2_res = h3_2_rd2_select(h3_1, d0, d1, dynamic_address);
	set_at<64, 2560>(result, h3_2_rd2_res);
	hw_uint<32>  h3_2_rd3_res = h3_2_rd3_select(h3_1, d0, d1, dynamic_address);
	set_at<96, 2560>(result, h3_2_rd3_res);
	hw_uint<32>  h3_2_rd4_res = h3_2_rd4_select(h3_1, d0, d1, dynamic_address);
	set_at<128, 2560>(result, h3_2_rd4_res);
	hw_uint<32>  h3_2_rd5_res = h3_2_rd5_select(h3_1, d0, d1, dynamic_address);
	set_at<160, 2560>(result, h3_2_rd5_res);
	hw_uint<32>  h3_2_rd6_res = h3_2_rd6_select(h3_1, d0, d1, dynamic_address);
	set_at<192, 2560>(result, h3_2_rd6_res);
	hw_uint<32>  h3_2_rd7_res = h3_2_rd7_select(h3_1, d0, d1, dynamic_address);
	set_at<224, 2560>(result, h3_2_rd7_res);
	hw_uint<32>  h3_2_rd8_res = h3_2_rd8_select(h3_1, d0, d1, dynamic_address);
	set_at<256, 2560>(result, h3_2_rd8_res);
	hw_uint<32>  h3_2_rd9_res = h3_2_rd9_select(h3_1, d0, d1, dynamic_address);
	set_at<288, 2560>(result, h3_2_rd9_res);
	hw_uint<32>  h3_2_rd10_res = h3_2_rd10_select(h3_1, d0, d1, dynamic_address);
	set_at<320, 2560>(result, h3_2_rd10_res);
	hw_uint<32>  h3_2_rd11_res = h3_2_rd11_select(h3_1, d0, d1, dynamic_address);
	set_at<352, 2560>(result, h3_2_rd11_res);
	hw_uint<32>  h3_2_rd12_res = h3_2_rd12_select(h3_1, d0, d1, dynamic_address);
	set_at<384, 2560>(result, h3_2_rd12_res);
	hw_uint<32>  h3_2_rd13_res = h3_2_rd13_select(h3_1, d0, d1, dynamic_address);
	set_at<416, 2560>(result, h3_2_rd13_res);
	hw_uint<32>  h3_2_rd14_res = h3_2_rd14_select(h3_1, d0, d1, dynamic_address);
	set_at<448, 2560>(result, h3_2_rd14_res);
	hw_uint<32>  h3_2_rd15_res = h3_2_rd15_select(h3_1, d0, d1, dynamic_address);
	set_at<480, 2560>(result, h3_2_rd15_res);
	hw_uint<32>  h3_2_rd16_res = h3_2_rd16_select(h3_1, d0, d1, dynamic_address);
	set_at<512, 2560>(result, h3_2_rd16_res);
	hw_uint<32>  h3_2_rd17_res = h3_2_rd17_select(h3_1, d0, d1, dynamic_address);
	set_at<544, 2560>(result, h3_2_rd17_res);
	hw_uint<32>  h3_2_rd18_res = h3_2_rd18_select(h3_1, d0, d1, dynamic_address);
	set_at<576, 2560>(result, h3_2_rd18_res);
	hw_uint<32>  h3_2_rd19_res = h3_2_rd19_select(h3_1, d0, d1, dynamic_address);
	set_at<608, 2560>(result, h3_2_rd19_res);
	hw_uint<32>  h3_2_rd20_res = h3_2_rd20_select(h3_1, d0, d1, dynamic_address);
	set_at<640, 2560>(result, h3_2_rd20_res);
	hw_uint<32>  h3_2_rd21_res = h3_2_rd21_select(h3_1, d0, d1, dynamic_address);
	set_at<672, 2560>(result, h3_2_rd21_res);
	hw_uint<32>  h3_2_rd22_res = h3_2_rd22_select(h3_1, d0, d1, dynamic_address);
	set_at<704, 2560>(result, h3_2_rd22_res);
	hw_uint<32>  h3_2_rd23_res = h3_2_rd23_select(h3_1, d0, d1, dynamic_address);
	set_at<736, 2560>(result, h3_2_rd23_res);
	hw_uint<32>  h3_2_rd24_res = h3_2_rd24_select(h3_1, d0, d1, dynamic_address);
	set_at<768, 2560>(result, h3_2_rd24_res);
	hw_uint<32>  h3_2_rd25_res = h3_2_rd25_select(h3_1, d0, d1, dynamic_address);
	set_at<800, 2560>(result, h3_2_rd25_res);
	hw_uint<32>  h3_2_rd26_res = h3_2_rd26_select(h3_1, d0, d1, dynamic_address);
	set_at<832, 2560>(result, h3_2_rd26_res);
	hw_uint<32>  h3_2_rd27_res = h3_2_rd27_select(h3_1, d0, d1, dynamic_address);
	set_at<864, 2560>(result, h3_2_rd27_res);
	hw_uint<32>  h3_2_rd28_res = h3_2_rd28_select(h3_1, d0, d1, dynamic_address);
	set_at<896, 2560>(result, h3_2_rd28_res);
	hw_uint<32>  h3_2_rd29_res = h3_2_rd29_select(h3_1, d0, d1, dynamic_address);
	set_at<928, 2560>(result, h3_2_rd29_res);
	hw_uint<32>  h3_2_rd30_res = h3_2_rd30_select(h3_1, d0, d1, dynamic_address);
	set_at<960, 2560>(result, h3_2_rd30_res);
	hw_uint<32>  h3_2_rd31_res = h3_2_rd31_select(h3_1, d0, d1, dynamic_address);
	set_at<992, 2560>(result, h3_2_rd31_res);
	hw_uint<32>  h3_2_rd32_res = h3_2_rd32_select(h3_1, d0, d1, dynamic_address);
	set_at<1024, 2560>(result, h3_2_rd32_res);
	hw_uint<32>  h3_2_rd33_res = h3_2_rd33_select(h3_1, d0, d1, dynamic_address);
	set_at<1056, 2560>(result, h3_2_rd33_res);
	hw_uint<32>  h3_2_rd34_res = h3_2_rd34_select(h3_1, d0, d1, dynamic_address);
	set_at<1088, 2560>(result, h3_2_rd34_res);
	hw_uint<32>  h3_2_rd35_res = h3_2_rd35_select(h3_1, d0, d1, dynamic_address);
	set_at<1120, 2560>(result, h3_2_rd35_res);
	hw_uint<32>  h3_2_rd36_res = h3_2_rd36_select(h3_1, d0, d1, dynamic_address);
	set_at<1152, 2560>(result, h3_2_rd36_res);
	hw_uint<32>  h3_2_rd37_res = h3_2_rd37_select(h3_1, d0, d1, dynamic_address);
	set_at<1184, 2560>(result, h3_2_rd37_res);
	hw_uint<32>  h3_2_rd38_res = h3_2_rd38_select(h3_1, d0, d1, dynamic_address);
	set_at<1216, 2560>(result, h3_2_rd38_res);
	hw_uint<32>  h3_2_rd39_res = h3_2_rd39_select(h3_1, d0, d1, dynamic_address);
	set_at<1248, 2560>(result, h3_2_rd39_res);
	hw_uint<32>  h3_2_rd40_res = h3_2_rd40_select(h3_1, d0, d1, dynamic_address);
	set_at<1280, 2560>(result, h3_2_rd40_res);
	hw_uint<32>  h3_2_rd41_res = h3_2_rd41_select(h3_1, d0, d1, dynamic_address);
	set_at<1312, 2560>(result, h3_2_rd41_res);
	hw_uint<32>  h3_2_rd42_res = h3_2_rd42_select(h3_1, d0, d1, dynamic_address);
	set_at<1344, 2560>(result, h3_2_rd42_res);
	hw_uint<32>  h3_2_rd43_res = h3_2_rd43_select(h3_1, d0, d1, dynamic_address);
	set_at<1376, 2560>(result, h3_2_rd43_res);
	hw_uint<32>  h3_2_rd44_res = h3_2_rd44_select(h3_1, d0, d1, dynamic_address);
	set_at<1408, 2560>(result, h3_2_rd44_res);
	hw_uint<32>  h3_2_rd45_res = h3_2_rd45_select(h3_1, d0, d1, dynamic_address);
	set_at<1440, 2560>(result, h3_2_rd45_res);
	hw_uint<32>  h3_2_rd46_res = h3_2_rd46_select(h3_1, d0, d1, dynamic_address);
	set_at<1472, 2560>(result, h3_2_rd46_res);
	hw_uint<32>  h3_2_rd47_res = h3_2_rd47_select(h3_1, d0, d1, dynamic_address);
	set_at<1504, 2560>(result, h3_2_rd47_res);
	hw_uint<32>  h3_2_rd48_res = h3_2_rd48_select(h3_1, d0, d1, dynamic_address);
	set_at<1536, 2560>(result, h3_2_rd48_res);
	hw_uint<32>  h3_2_rd49_res = h3_2_rd49_select(h3_1, d0, d1, dynamic_address);
	set_at<1568, 2560>(result, h3_2_rd49_res);
	hw_uint<32>  h3_2_rd50_res = h3_2_rd50_select(h3_1, d0, d1, dynamic_address);
	set_at<1600, 2560>(result, h3_2_rd50_res);
	hw_uint<32>  h3_2_rd51_res = h3_2_rd51_select(h3_1, d0, d1, dynamic_address);
	set_at<1632, 2560>(result, h3_2_rd51_res);
	hw_uint<32>  h3_2_rd52_res = h3_2_rd52_select(h3_1, d0, d1, dynamic_address);
	set_at<1664, 2560>(result, h3_2_rd52_res);
	hw_uint<32>  h3_2_rd53_res = h3_2_rd53_select(h3_1, d0, d1, dynamic_address);
	set_at<1696, 2560>(result, h3_2_rd53_res);
	hw_uint<32>  h3_2_rd54_res = h3_2_rd54_select(h3_1, d0, d1, dynamic_address);
	set_at<1728, 2560>(result, h3_2_rd54_res);
	hw_uint<32>  h3_2_rd55_res = h3_2_rd55_select(h3_1, d0, d1, dynamic_address);
	set_at<1760, 2560>(result, h3_2_rd55_res);
	hw_uint<32>  h3_2_rd56_res = h3_2_rd56_select(h3_1, d0, d1, dynamic_address);
	set_at<1792, 2560>(result, h3_2_rd56_res);
	hw_uint<32>  h3_2_rd57_res = h3_2_rd57_select(h3_1, d0, d1, dynamic_address);
	set_at<1824, 2560>(result, h3_2_rd57_res);
	hw_uint<32>  h3_2_rd58_res = h3_2_rd58_select(h3_1, d0, d1, dynamic_address);
	set_at<1856, 2560>(result, h3_2_rd58_res);
	hw_uint<32>  h3_2_rd59_res = h3_2_rd59_select(h3_1, d0, d1, dynamic_address);
	set_at<1888, 2560>(result, h3_2_rd59_res);
	hw_uint<32>  h3_2_rd60_res = h3_2_rd60_select(h3_1, d0, d1, dynamic_address);
	set_at<1920, 2560>(result, h3_2_rd60_res);
	hw_uint<32>  h3_2_rd61_res = h3_2_rd61_select(h3_1, d0, d1, dynamic_address);
	set_at<1952, 2560>(result, h3_2_rd61_res);
	hw_uint<32>  h3_2_rd62_res = h3_2_rd62_select(h3_1, d0, d1, dynamic_address);
	set_at<1984, 2560>(result, h3_2_rd62_res);
	hw_uint<32>  h3_2_rd63_res = h3_2_rd63_select(h3_1, d0, d1, dynamic_address);
	set_at<2016, 2560>(result, h3_2_rd63_res);
	hw_uint<32>  h3_2_rd64_res = h3_2_rd64_select(h3_1, d0, d1, dynamic_address);
	set_at<2048, 2560>(result, h3_2_rd64_res);
	hw_uint<32>  h3_2_rd65_res = h3_2_rd65_select(h3_1, d0, d1, dynamic_address);
	set_at<2080, 2560>(result, h3_2_rd65_res);
	hw_uint<32>  h3_2_rd66_res = h3_2_rd66_select(h3_1, d0, d1, dynamic_address);
	set_at<2112, 2560>(result, h3_2_rd66_res);
	hw_uint<32>  h3_2_rd67_res = h3_2_rd67_select(h3_1, d0, d1, dynamic_address);
	set_at<2144, 2560>(result, h3_2_rd67_res);
	hw_uint<32>  h3_2_rd68_res = h3_2_rd68_select(h3_1, d0, d1, dynamic_address);
	set_at<2176, 2560>(result, h3_2_rd68_res);
	hw_uint<32>  h3_2_rd69_res = h3_2_rd69_select(h3_1, d0, d1, dynamic_address);
	set_at<2208, 2560>(result, h3_2_rd69_res);
	hw_uint<32>  h3_2_rd70_res = h3_2_rd70_select(h3_1, d0, d1, dynamic_address);
	set_at<2240, 2560>(result, h3_2_rd70_res);
	hw_uint<32>  h3_2_rd71_res = h3_2_rd71_select(h3_1, d0, d1, dynamic_address);
	set_at<2272, 2560>(result, h3_2_rd71_res);
	hw_uint<32>  h3_2_rd72_res = h3_2_rd72_select(h3_1, d0, d1, dynamic_address);
	set_at<2304, 2560>(result, h3_2_rd72_res);
	hw_uint<32>  h3_2_rd73_res = h3_2_rd73_select(h3_1, d0, d1, dynamic_address);
	set_at<2336, 2560>(result, h3_2_rd73_res);
	hw_uint<32>  h3_2_rd74_res = h3_2_rd74_select(h3_1, d0, d1, dynamic_address);
	set_at<2368, 2560>(result, h3_2_rd74_res);
	hw_uint<32>  h3_2_rd75_res = h3_2_rd75_select(h3_1, d0, d1, dynamic_address);
	set_at<2400, 2560>(result, h3_2_rd75_res);
	hw_uint<32>  h3_2_rd76_res = h3_2_rd76_select(h3_1, d0, d1, dynamic_address);
	set_at<2432, 2560>(result, h3_2_rd76_res);
	hw_uint<32>  h3_2_rd77_res = h3_2_rd77_select(h3_1, d0, d1, dynamic_address);
	set_at<2464, 2560>(result, h3_2_rd77_res);
	hw_uint<32>  h3_2_rd78_res = h3_2_rd78_select(h3_1, d0, d1, dynamic_address);
	set_at<2496, 2560>(result, h3_2_rd78_res);
	hw_uint<32>  h3_2_rd79_res = h3_2_rd79_select(h3_1, d0, d1, dynamic_address);
	set_at<2528, 2560>(result, h3_2_rd79_res);
	return result;
}

struct h3_2_h3_2_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-96, 1120], [-7, 1029]}
	// Capacity: 158
	// # of read delays: 5
  // 0, 1, 78, 79, 157
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 76> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 77> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_77() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_78() {
		return f4;
	}

	inline hw_uint<32>  peek_79() {
		return f6;
	}

	inline hw_uint<32>  peek_156() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_157() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 76
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 76 reading from capacity: 1
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
	// RAM Box: {[-95, 1105], [-7, 1030]}
	// Capacity: 158
	// # of read delays: 4
  // 0, 1, 79, 157
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 77> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 77> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_79() {
		return f4;
	}

	inline hw_uint<32>  peek_156() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_157() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write10_merged_banks_5_cache {
	// RAM Box: {[-86, 1114], [-7, 1030]}
	// Capacity: 158
	// # of read delays: 4
  // 0, 1, 79, 157
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 77> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 77> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_79() {
		return f4;
	}

	inline hw_uint<32>  peek_156() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_157() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write11_merged_banks_5_cache {
	// RAM Box: {[-85, 1115], [-7, 1030]}
	// Capacity: 158
	// # of read delays: 4
  // 0, 1, 79, 157
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 77> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 77> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_79() {
		return f4;
	}

	inline hw_uint<32>  peek_156() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_157() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write12_merged_banks_5_cache {
	// RAM Box: {[-84, 1116], [-7, 1030]}
	// Capacity: 158
	// # of read delays: 4
  // 0, 1, 79, 157
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 77> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 77> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_79() {
		return f4;
	}

	inline hw_uint<32>  peek_156() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_157() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write13_merged_banks_5_cache {
	// RAM Box: {[-83, 1117], [-7, 1030]}
	// Capacity: 158
	// # of read delays: 4
  // 0, 1, 79, 157
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 77> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 77> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_79() {
		return f4;
	}

	inline hw_uint<32>  peek_156() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_157() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write14_merged_banks_5_cache {
	// RAM Box: {[-82, 1118], [-7, 1030]}
	// Capacity: 158
	// # of read delays: 4
  // 0, 1, 79, 157
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 77> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 77> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_79() {
		return f4;
	}

	inline hw_uint<32>  peek_156() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_157() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write15_merged_banks_5_cache {
	// RAM Box: {[-97, 1119], [-6, 1030]}
	// Capacity: 158
	// # of read delays: 5
  // 0, 1, 79, 80, 157
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 77> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 76> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_79() {
		return f4;
	}

	inline hw_uint<32>  peek_80() {
		return f6;
	}

	inline hw_uint<32>  peek_156() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_157() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 76
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 76 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
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
	// RAM Box: {[-94, 1106], [-7, 1030]}
	// Capacity: 158
	// # of read delays: 4
  // 0, 1, 79, 157
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 77> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 77> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_79() {
		return f4;
	}

	inline hw_uint<32>  peek_156() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_157() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
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
	// RAM Box: {[-93, 1107], [-7, 1030]}
	// Capacity: 158
	// # of read delays: 4
  // 0, 1, 79, 157
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 77> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 77> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_79() {
		return f4;
	}

	inline hw_uint<32>  peek_156() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_157() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write4_merged_banks_5_cache {
	// RAM Box: {[-92, 1108], [-7, 1030]}
	// Capacity: 158
	// # of read delays: 4
  // 0, 1, 79, 157
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 77> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 77> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_79() {
		return f4;
	}

	inline hw_uint<32>  peek_156() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_157() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write5_merged_banks_5_cache {
	// RAM Box: {[-91, 1109], [-7, 1030]}
	// Capacity: 158
	// # of read delays: 4
  // 0, 1, 79, 157
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 77> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 77> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_79() {
		return f4;
	}

	inline hw_uint<32>  peek_156() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_157() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write6_merged_banks_5_cache {
	// RAM Box: {[-90, 1110], [-7, 1030]}
	// Capacity: 158
	// # of read delays: 4
  // 0, 1, 79, 157
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 77> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 77> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_79() {
		return f4;
	}

	inline hw_uint<32>  peek_156() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_157() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write7_merged_banks_5_cache {
	// RAM Box: {[-89, 1111], [-7, 1030]}
	// Capacity: 158
	// # of read delays: 4
  // 0, 1, 79, 157
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 77> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 77> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_79() {
		return f4;
	}

	inline hw_uint<32>  peek_156() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_157() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write8_merged_banks_5_cache {
	// RAM Box: {[-88, 1112], [-7, 1030]}
	// Capacity: 158
	// # of read delays: 4
  // 0, 1, 79, 157
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 77> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 77> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_79() {
		return f4;
	}

	inline hw_uint<32>  peek_156() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_157() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_2_h3_2_update_0_write9_merged_banks_5_cache {
	// RAM Box: {[-87, 1113], [-7, 1030]}
	// Capacity: 158
	// # of read delays: 4
  // 0, 1, 79, 157
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 77> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 77> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_78() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_79() {
		return f4;
	}

	inline hw_uint<32>  peek_156() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_157() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 77
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 77 reading from capacity: 1
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
  // # of banks: 16
  h3_2_h3_2_update_0_write0_merged_banks_5_cache h3_2_h3_2_update_0_write0_merged_banks_5;
  h3_2_h3_2_update_0_write1_merged_banks_5_cache h3_2_h3_2_update_0_write1_merged_banks_5;
  h3_2_h3_2_update_0_write10_merged_banks_5_cache h3_2_h3_2_update_0_write10_merged_banks_5;
  h3_2_h3_2_update_0_write11_merged_banks_5_cache h3_2_h3_2_update_0_write11_merged_banks_5;
  h3_2_h3_2_update_0_write12_merged_banks_5_cache h3_2_h3_2_update_0_write12_merged_banks_5;
  h3_2_h3_2_update_0_write13_merged_banks_5_cache h3_2_h3_2_update_0_write13_merged_banks_5;
  h3_2_h3_2_update_0_write14_merged_banks_5_cache h3_2_h3_2_update_0_write14_merged_banks_5;
  h3_2_h3_2_update_0_write15_merged_banks_5_cache h3_2_h3_2_update_0_write15_merged_banks_5;
  h3_2_h3_2_update_0_write2_merged_banks_5_cache h3_2_h3_2_update_0_write2_merged_banks_5;
  h3_2_h3_2_update_0_write3_merged_banks_5_cache h3_2_h3_2_update_0_write3_merged_banks_5;
  h3_2_h3_2_update_0_write4_merged_banks_5_cache h3_2_h3_2_update_0_write4_merged_banks_5;
  h3_2_h3_2_update_0_write5_merged_banks_5_cache h3_2_h3_2_update_0_write5_merged_banks_5;
  h3_2_h3_2_update_0_write6_merged_banks_5_cache h3_2_h3_2_update_0_write6_merged_banks_5;
  h3_2_h3_2_update_0_write7_merged_banks_5_cache h3_2_h3_2_update_0_write7_merged_banks_5;
  h3_2_h3_2_update_0_write8_merged_banks_5_cache h3_2_h3_2_update_0_write8_merged_banks_5;
  h3_2_h3_2_update_0_write9_merged_banks_5_cache h3_2_h3_2_update_0_write9_merged_banks_5;
};



inline void h3_2_h3_2_update_0_write0_write(hw_uint<32> & h3_2_h3_2_update_0_write0, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.push(h3_2_h3_2_update_0_write0);
}

inline void h3_2_h3_2_update_0_write1_write(hw_uint<32> & h3_2_h3_2_update_0_write1, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write1_merged_banks_5.push(h3_2_h3_2_update_0_write1);
}

inline void h3_2_h3_2_update_0_write10_write(hw_uint<32> & h3_2_h3_2_update_0_write10, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write10_merged_banks_5.push(h3_2_h3_2_update_0_write10);
}

inline void h3_2_h3_2_update_0_write11_write(hw_uint<32> & h3_2_h3_2_update_0_write11, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write11_merged_banks_5.push(h3_2_h3_2_update_0_write11);
}

inline void h3_2_h3_2_update_0_write12_write(hw_uint<32> & h3_2_h3_2_update_0_write12, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write12_merged_banks_5.push(h3_2_h3_2_update_0_write12);
}

inline void h3_2_h3_2_update_0_write13_write(hw_uint<32> & h3_2_h3_2_update_0_write13, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write13_merged_banks_5.push(h3_2_h3_2_update_0_write13);
}

inline void h3_2_h3_2_update_0_write14_write(hw_uint<32> & h3_2_h3_2_update_0_write14, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write14_merged_banks_5.push(h3_2_h3_2_update_0_write14);
}

inline void h3_2_h3_2_update_0_write15_write(hw_uint<32> & h3_2_h3_2_update_0_write15, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write15_merged_banks_5.push(h3_2_h3_2_update_0_write15);
}

inline void h3_2_h3_2_update_0_write2_write(hw_uint<32> & h3_2_h3_2_update_0_write2, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write2_merged_banks_5.push(h3_2_h3_2_update_0_write2);
}

inline void h3_2_h3_2_update_0_write3_write(hw_uint<32> & h3_2_h3_2_update_0_write3, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write3_merged_banks_5.push(h3_2_h3_2_update_0_write3);
}

inline void h3_2_h3_2_update_0_write4_write(hw_uint<32> & h3_2_h3_2_update_0_write4, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write4_merged_banks_5.push(h3_2_h3_2_update_0_write4);
}

inline void h3_2_h3_2_update_0_write5_write(hw_uint<32> & h3_2_h3_2_update_0_write5, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write5_merged_banks_5.push(h3_2_h3_2_update_0_write5);
}

inline void h3_2_h3_2_update_0_write6_write(hw_uint<32> & h3_2_h3_2_update_0_write6, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write6_merged_banks_5.push(h3_2_h3_2_update_0_write6);
}

inline void h3_2_h3_2_update_0_write7_write(hw_uint<32> & h3_2_h3_2_update_0_write7, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write7_merged_banks_5.push(h3_2_h3_2_update_0_write7);
}

inline void h3_2_h3_2_update_0_write8_write(hw_uint<32> & h3_2_h3_2_update_0_write8, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write8_merged_banks_5.push(h3_2_h3_2_update_0_write8);
}

inline void h3_2_h3_2_update_0_write9_write(hw_uint<32> & h3_2_h3_2_update_0_write9, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  h3_2.h3_2_h3_2_update_0_write9_merged_banks_5.push(h3_2_h3_2_update_0_write9);
}

inline hw_uint<32>  h3_3_rd0_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd0 read pattern: { h3_3_update_0[d0, d1] -> h3_2[-1 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write15 = h3_2.h3_2_h3_2_update_0_write15_merged_banks_5.peek_80();
  return value_h3_2_h3_2_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_3_rd1_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd1 read pattern: { h3_3_update_0[d0, d1] -> h3_2[16d0, -1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.peek_157();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd10_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd10 read pattern: { h3_3_update_0[d0, d1] -> h3_2[1 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd11_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd11 read pattern: { h3_3_update_0[d0, d1] -> h3_2[2 + 16d0, -1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_5.peek_157();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_3_rd12_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd12 read pattern: { h3_3_update_0[d0, d1] -> h3_2[2 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_3_rd13_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd13 read pattern: { h3_3_update_0[d0, d1] -> h3_2[2 + 16d0, 1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_3_rd14_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd14 read pattern: { h3_3_update_0[d0, d1] -> h3_2[3 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd15_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd15 read pattern: { h3_3_update_0[d0, d1] -> h3_2[2 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_3_rd16_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd16 read pattern: { h3_3_update_0[d0, d1] -> h3_2[3 + 16d0, -1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_5.peek_157();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd17_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd17 read pattern: { h3_3_update_0[d0, d1] -> h3_2[3 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd18_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd18 read pattern: { h3_3_update_0[d0, d1] -> h3_2[3 + 16d0, 1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd19_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd19 read pattern: { h3_3_update_0[d0, d1] -> h3_2[4 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write4 = h3_2.h3_2_h3_2_update_0_write4_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_3_rd2_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd2 read pattern: { h3_3_update_0[d0, d1] -> h3_2[16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd20_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd20 read pattern: { h3_3_update_0[d0, d1] -> h3_2[3 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd21_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd21 read pattern: { h3_3_update_0[d0, d1] -> h3_2[4 + 16d0, -1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write4 = h3_2.h3_2_h3_2_update_0_write4_merged_banks_5.peek_157();
  return value_h3_2_h3_2_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_3_rd22_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd22 read pattern: { h3_3_update_0[d0, d1] -> h3_2[4 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write4 = h3_2.h3_2_h3_2_update_0_write4_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_3_rd23_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd23 read pattern: { h3_3_update_0[d0, d1] -> h3_2[4 + 16d0, 1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write4 = h3_2.h3_2_h3_2_update_0_write4_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_3_rd24_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd24 read pattern: { h3_3_update_0[d0, d1] -> h3_2[5 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write5 = h3_2.h3_2_h3_2_update_0_write5_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_3_rd25_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd25 read pattern: { h3_3_update_0[d0, d1] -> h3_2[4 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write4 = h3_2.h3_2_h3_2_update_0_write4_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_3_rd26_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd26 read pattern: { h3_3_update_0[d0, d1] -> h3_2[5 + 16d0, -1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write5 = h3_2.h3_2_h3_2_update_0_write5_merged_banks_5.peek_157();
  return value_h3_2_h3_2_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_3_rd27_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd27 read pattern: { h3_3_update_0[d0, d1] -> h3_2[5 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write5 = h3_2.h3_2_h3_2_update_0_write5_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_3_rd28_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd28 read pattern: { h3_3_update_0[d0, d1] -> h3_2[5 + 16d0, 1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write5 = h3_2.h3_2_h3_2_update_0_write5_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_3_rd29_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd29 read pattern: { h3_3_update_0[d0, d1] -> h3_2[6 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write6 = h3_2.h3_2_h3_2_update_0_write6_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_3_rd3_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd3 read pattern: { h3_3_update_0[d0, d1] -> h3_2[16d0, 1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd30_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd30 read pattern: { h3_3_update_0[d0, d1] -> h3_2[5 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write5 = h3_2.h3_2_h3_2_update_0_write5_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_3_rd31_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd31 read pattern: { h3_3_update_0[d0, d1] -> h3_2[6 + 16d0, -1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write6 = h3_2.h3_2_h3_2_update_0_write6_merged_banks_5.peek_157();
  return value_h3_2_h3_2_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_3_rd32_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd32 read pattern: { h3_3_update_0[d0, d1] -> h3_2[6 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write6 = h3_2.h3_2_h3_2_update_0_write6_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_3_rd33_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd33 read pattern: { h3_3_update_0[d0, d1] -> h3_2[6 + 16d0, 1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write6 = h3_2.h3_2_h3_2_update_0_write6_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_3_rd34_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd34 read pattern: { h3_3_update_0[d0, d1] -> h3_2[7 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write7 = h3_2.h3_2_h3_2_update_0_write7_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_3_rd35_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd35 read pattern: { h3_3_update_0[d0, d1] -> h3_2[6 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write6 = h3_2.h3_2_h3_2_update_0_write6_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_3_rd36_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd36 read pattern: { h3_3_update_0[d0, d1] -> h3_2[7 + 16d0, -1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write7 = h3_2.h3_2_h3_2_update_0_write7_merged_banks_5.peek_157();
  return value_h3_2_h3_2_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_3_rd37_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd37 read pattern: { h3_3_update_0[d0, d1] -> h3_2[7 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write7 = h3_2.h3_2_h3_2_update_0_write7_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_3_rd38_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd38 read pattern: { h3_3_update_0[d0, d1] -> h3_2[7 + 16d0, 1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write7 = h3_2.h3_2_h3_2_update_0_write7_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_3_rd39_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd39 read pattern: { h3_3_update_0[d0, d1] -> h3_2[8 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write8 = h3_2.h3_2_h3_2_update_0_write8_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_3_rd4_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd4 read pattern: { h3_3_update_0[d0, d1] -> h3_2[1 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd40_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd40 read pattern: { h3_3_update_0[d0, d1] -> h3_2[7 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write7 = h3_2.h3_2_h3_2_update_0_write7_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_3_rd41_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd41 read pattern: { h3_3_update_0[d0, d1] -> h3_2[8 + 16d0, -1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write8 = h3_2.h3_2_h3_2_update_0_write8_merged_banks_5.peek_157();
  return value_h3_2_h3_2_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_3_rd42_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd42 read pattern: { h3_3_update_0[d0, d1] -> h3_2[8 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write8 = h3_2.h3_2_h3_2_update_0_write8_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_3_rd43_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd43 read pattern: { h3_3_update_0[d0, d1] -> h3_2[8 + 16d0, 1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write8 = h3_2.h3_2_h3_2_update_0_write8_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_3_rd44_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd44 read pattern: { h3_3_update_0[d0, d1] -> h3_2[9 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write9 = h3_2.h3_2_h3_2_update_0_write9_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_3_rd45_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd45 read pattern: { h3_3_update_0[d0, d1] -> h3_2[8 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write8 = h3_2.h3_2_h3_2_update_0_write8_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_3_rd46_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd46 read pattern: { h3_3_update_0[d0, d1] -> h3_2[9 + 16d0, -1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write9 = h3_2.h3_2_h3_2_update_0_write9_merged_banks_5.peek_157();
  return value_h3_2_h3_2_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_3_rd47_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd47 read pattern: { h3_3_update_0[d0, d1] -> h3_2[9 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write9 = h3_2.h3_2_h3_2_update_0_write9_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_3_rd48_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd48 read pattern: { h3_3_update_0[d0, d1] -> h3_2[9 + 16d0, 1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write9 = h3_2.h3_2_h3_2_update_0_write9_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_3_rd49_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd49 read pattern: { h3_3_update_0[d0, d1] -> h3_2[10 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write10 = h3_2.h3_2_h3_2_update_0_write10_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_3_rd5_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd5 read pattern: { h3_3_update_0[d0, d1] -> h3_2[16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd50_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd50 read pattern: { h3_3_update_0[d0, d1] -> h3_2[9 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write9 = h3_2.h3_2_h3_2_update_0_write9_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_3_rd51_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd51 read pattern: { h3_3_update_0[d0, d1] -> h3_2[10 + 16d0, -1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write10 = h3_2.h3_2_h3_2_update_0_write10_merged_banks_5.peek_157();
  return value_h3_2_h3_2_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_3_rd52_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd52 read pattern: { h3_3_update_0[d0, d1] -> h3_2[10 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write10 = h3_2.h3_2_h3_2_update_0_write10_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_3_rd53_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd53 read pattern: { h3_3_update_0[d0, d1] -> h3_2[10 + 16d0, 1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write10 = h3_2.h3_2_h3_2_update_0_write10_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_3_rd54_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd54 read pattern: { h3_3_update_0[d0, d1] -> h3_2[11 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write11 = h3_2.h3_2_h3_2_update_0_write11_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_3_rd55_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd55 read pattern: { h3_3_update_0[d0, d1] -> h3_2[10 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write10 = h3_2.h3_2_h3_2_update_0_write10_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_3_rd56_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd56 read pattern: { h3_3_update_0[d0, d1] -> h3_2[11 + 16d0, -1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write11 = h3_2.h3_2_h3_2_update_0_write11_merged_banks_5.peek_157();
  return value_h3_2_h3_2_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_3_rd57_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd57 read pattern: { h3_3_update_0[d0, d1] -> h3_2[11 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write11 = h3_2.h3_2_h3_2_update_0_write11_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_3_rd58_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd58 read pattern: { h3_3_update_0[d0, d1] -> h3_2[11 + 16d0, 1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write11 = h3_2.h3_2_h3_2_update_0_write11_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_3_rd59_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd59 read pattern: { h3_3_update_0[d0, d1] -> h3_2[12 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write12 = h3_2.h3_2_h3_2_update_0_write12_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_3_rd6_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd6 read pattern: { h3_3_update_0[d0, d1] -> h3_2[1 + 16d0, -1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_5.peek_157();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd60_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd60 read pattern: { h3_3_update_0[d0, d1] -> h3_2[11 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write11 = h3_2.h3_2_h3_2_update_0_write11_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_3_rd61_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd61 read pattern: { h3_3_update_0[d0, d1] -> h3_2[12 + 16d0, -1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write12 = h3_2.h3_2_h3_2_update_0_write12_merged_banks_5.peek_157();
  return value_h3_2_h3_2_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_3_rd62_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd62 read pattern: { h3_3_update_0[d0, d1] -> h3_2[12 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write12 = h3_2.h3_2_h3_2_update_0_write12_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_3_rd63_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd63 read pattern: { h3_3_update_0[d0, d1] -> h3_2[12 + 16d0, 1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write12 = h3_2.h3_2_h3_2_update_0_write12_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_3_rd64_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd64 read pattern: { h3_3_update_0[d0, d1] -> h3_2[13 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write13 = h3_2.h3_2_h3_2_update_0_write13_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_3_rd65_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd65 read pattern: { h3_3_update_0[d0, d1] -> h3_2[12 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write12 = h3_2.h3_2_h3_2_update_0_write12_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_3_rd66_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd66 read pattern: { h3_3_update_0[d0, d1] -> h3_2[13 + 16d0, -1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write13 = h3_2.h3_2_h3_2_update_0_write13_merged_banks_5.peek_157();
  return value_h3_2_h3_2_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_3_rd67_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd67 read pattern: { h3_3_update_0[d0, d1] -> h3_2[13 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write13 = h3_2.h3_2_h3_2_update_0_write13_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_3_rd68_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd68 read pattern: { h3_3_update_0[d0, d1] -> h3_2[13 + 16d0, 1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write13 = h3_2.h3_2_h3_2_update_0_write13_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_3_rd69_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd69 read pattern: { h3_3_update_0[d0, d1] -> h3_2[14 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write14 = h3_2.h3_2_h3_2_update_0_write14_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_3_rd7_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd7 read pattern: { h3_3_update_0[d0, d1] -> h3_2[1 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd70_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd70 read pattern: { h3_3_update_0[d0, d1] -> h3_2[13 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write13 = h3_2.h3_2_h3_2_update_0_write13_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_3_rd71_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd71 read pattern: { h3_3_update_0[d0, d1] -> h3_2[14 + 16d0, -1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write14 = h3_2.h3_2_h3_2_update_0_write14_merged_banks_5.peek_157();
  return value_h3_2_h3_2_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_3_rd72_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd72 read pattern: { h3_3_update_0[d0, d1] -> h3_2[14 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write14 = h3_2.h3_2_h3_2_update_0_write14_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_3_rd73_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd73 read pattern: { h3_3_update_0[d0, d1] -> h3_2[14 + 16d0, 1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write14 = h3_2.h3_2_h3_2_update_0_write14_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_3_rd74_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd74 read pattern: { h3_3_update_0[d0, d1] -> h3_2[15 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write15 = h3_2.h3_2_h3_2_update_0_write15_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_3_rd75_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd75 read pattern: { h3_3_update_0[d0, d1] -> h3_2[14 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write14 = h3_2.h3_2_h3_2_update_0_write14_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_3_rd76_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd76 read pattern: { h3_3_update_0[d0, d1] -> h3_2[15 + 16d0, -1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write15 = h3_2.h3_2_h3_2_update_0_write15_merged_banks_5.peek_157();
  return value_h3_2_h3_2_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_3_rd77_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd77 read pattern: { h3_3_update_0[d0, d1] -> h3_2[15 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write15 = h3_2.h3_2_h3_2_update_0_write15_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_3_rd78_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd78 read pattern: { h3_3_update_0[d0, d1] -> h3_2[15 + 16d0, 1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write15 = h3_2.h3_2_h3_2_update_0_write15_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_3_rd79_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd79 read pattern: { h3_3_update_0[d0, d1] -> h3_2[16 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.peek_78();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd8_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd8 read pattern: { h3_3_update_0[d0, d1] -> h3_2[1 + 16d0, 1 + d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd9_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd9 read pattern: { h3_3_update_0[d0, d1] -> h3_2[2 + 16d0, d1] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_5.peek_79();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

// # of bundles = 2
// h3_2_update_0_write
//	h3_2_h3_2_update_0_write0
//	h3_2_h3_2_update_0_write1
//	h3_2_h3_2_update_0_write2
//	h3_2_h3_2_update_0_write3
//	h3_2_h3_2_update_0_write4
//	h3_2_h3_2_update_0_write5
//	h3_2_h3_2_update_0_write6
//	h3_2_h3_2_update_0_write7
//	h3_2_h3_2_update_0_write8
//	h3_2_h3_2_update_0_write9
//	h3_2_h3_2_update_0_write10
//	h3_2_h3_2_update_0_write11
//	h3_2_h3_2_update_0_write12
//	h3_2_h3_2_update_0_write13
//	h3_2_h3_2_update_0_write14
//	h3_2_h3_2_update_0_write15
inline void h3_2_h3_2_update_0_write_bundle_write(hw_uint<512>& h3_2_update_0_write, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_2_h3_2_update_0_write0_res = h3_2_update_0_write.extract<0, 31>();
	h3_2_h3_2_update_0_write0_write(h3_2_h3_2_update_0_write0_res, h3_2, d0, d1, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write1_res = h3_2_update_0_write.extract<32, 63>();
	h3_2_h3_2_update_0_write1_write(h3_2_h3_2_update_0_write1_res, h3_2, d0, d1, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write2_res = h3_2_update_0_write.extract<64, 95>();
	h3_2_h3_2_update_0_write2_write(h3_2_h3_2_update_0_write2_res, h3_2, d0, d1, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write3_res = h3_2_update_0_write.extract<96, 127>();
	h3_2_h3_2_update_0_write3_write(h3_2_h3_2_update_0_write3_res, h3_2, d0, d1, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write4_res = h3_2_update_0_write.extract<128, 159>();
	h3_2_h3_2_update_0_write4_write(h3_2_h3_2_update_0_write4_res, h3_2, d0, d1, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write5_res = h3_2_update_0_write.extract<160, 191>();
	h3_2_h3_2_update_0_write5_write(h3_2_h3_2_update_0_write5_res, h3_2, d0, d1, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write6_res = h3_2_update_0_write.extract<192, 223>();
	h3_2_h3_2_update_0_write6_write(h3_2_h3_2_update_0_write6_res, h3_2, d0, d1, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write7_res = h3_2_update_0_write.extract<224, 255>();
	h3_2_h3_2_update_0_write7_write(h3_2_h3_2_update_0_write7_res, h3_2, d0, d1, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write8_res = h3_2_update_0_write.extract<256, 287>();
	h3_2_h3_2_update_0_write8_write(h3_2_h3_2_update_0_write8_res, h3_2, d0, d1, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write9_res = h3_2_update_0_write.extract<288, 319>();
	h3_2_h3_2_update_0_write9_write(h3_2_h3_2_update_0_write9_res, h3_2, d0, d1, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write10_res = h3_2_update_0_write.extract<320, 351>();
	h3_2_h3_2_update_0_write10_write(h3_2_h3_2_update_0_write10_res, h3_2, d0, d1, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write11_res = h3_2_update_0_write.extract<352, 383>();
	h3_2_h3_2_update_0_write11_write(h3_2_h3_2_update_0_write11_res, h3_2, d0, d1, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write12_res = h3_2_update_0_write.extract<384, 415>();
	h3_2_h3_2_update_0_write12_write(h3_2_h3_2_update_0_write12_res, h3_2, d0, d1, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write13_res = h3_2_update_0_write.extract<416, 447>();
	h3_2_h3_2_update_0_write13_write(h3_2_h3_2_update_0_write13_res, h3_2, d0, d1, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write14_res = h3_2_update_0_write.extract<448, 479>();
	h3_2_h3_2_update_0_write14_write(h3_2_h3_2_update_0_write14_res, h3_2, d0, d1, dynamic_address);
	hw_uint<32>  h3_2_h3_2_update_0_write15_res = h3_2_update_0_write.extract<480, 511>();
	h3_2_h3_2_update_0_write15_write(h3_2_h3_2_update_0_write15_res, h3_2, d0, d1, dynamic_address);
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
//	h3_3_rd20
//	h3_3_rd21
//	h3_3_rd22
//	h3_3_rd23
//	h3_3_rd24
//	h3_3_rd25
//	h3_3_rd26
//	h3_3_rd27
//	h3_3_rd28
//	h3_3_rd29
//	h3_3_rd30
//	h3_3_rd31
//	h3_3_rd32
//	h3_3_rd33
//	h3_3_rd34
//	h3_3_rd35
//	h3_3_rd36
//	h3_3_rd37
//	h3_3_rd38
//	h3_3_rd39
//	h3_3_rd40
//	h3_3_rd41
//	h3_3_rd42
//	h3_3_rd43
//	h3_3_rd44
//	h3_3_rd45
//	h3_3_rd46
//	h3_3_rd47
//	h3_3_rd48
//	h3_3_rd49
//	h3_3_rd50
//	h3_3_rd51
//	h3_3_rd52
//	h3_3_rd53
//	h3_3_rd54
//	h3_3_rd55
//	h3_3_rd56
//	h3_3_rd57
//	h3_3_rd58
//	h3_3_rd59
//	h3_3_rd60
//	h3_3_rd61
//	h3_3_rd62
//	h3_3_rd63
//	h3_3_rd64
//	h3_3_rd65
//	h3_3_rd66
//	h3_3_rd67
//	h3_3_rd68
//	h3_3_rd69
//	h3_3_rd70
//	h3_3_rd71
//	h3_3_rd72
//	h3_3_rd73
//	h3_3_rd74
//	h3_3_rd75
//	h3_3_rd76
//	h3_3_rd77
//	h3_3_rd78
//	h3_3_rd79
inline hw_uint<2560> h3_2_h3_3_update_0_read_bundle_read(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 80
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
    // h3_3_rd20
    // h3_3_rd21
    // h3_3_rd22
    // h3_3_rd23
    // h3_3_rd24
    // h3_3_rd25
    // h3_3_rd26
    // h3_3_rd27
    // h3_3_rd28
    // h3_3_rd29
    // h3_3_rd30
    // h3_3_rd31
    // h3_3_rd32
    // h3_3_rd33
    // h3_3_rd34
    // h3_3_rd35
    // h3_3_rd36
    // h3_3_rd37
    // h3_3_rd38
    // h3_3_rd39
    // h3_3_rd40
    // h3_3_rd41
    // h3_3_rd42
    // h3_3_rd43
    // h3_3_rd44
    // h3_3_rd45
    // h3_3_rd46
    // h3_3_rd47
    // h3_3_rd48
    // h3_3_rd49
    // h3_3_rd50
    // h3_3_rd51
    // h3_3_rd52
    // h3_3_rd53
    // h3_3_rd54
    // h3_3_rd55
    // h3_3_rd56
    // h3_3_rd57
    // h3_3_rd58
    // h3_3_rd59
    // h3_3_rd60
    // h3_3_rd61
    // h3_3_rd62
    // h3_3_rd63
    // h3_3_rd64
    // h3_3_rd65
    // h3_3_rd66
    // h3_3_rd67
    // h3_3_rd68
    // h3_3_rd69
    // h3_3_rd70
    // h3_3_rd71
    // h3_3_rd72
    // h3_3_rd73
    // h3_3_rd74
    // h3_3_rd75
    // h3_3_rd76
    // h3_3_rd77
    // h3_3_rd78
    // h3_3_rd79

	hw_uint<2560> result;
	hw_uint<32>  h3_3_rd0_res = h3_3_rd0_select(h3_2, d0, d1, dynamic_address);
	set_at<0, 2560>(result, h3_3_rd0_res);
	hw_uint<32>  h3_3_rd1_res = h3_3_rd1_select(h3_2, d0, d1, dynamic_address);
	set_at<32, 2560>(result, h3_3_rd1_res);
	hw_uint<32>  h3_3_rd2_res = h3_3_rd2_select(h3_2, d0, d1, dynamic_address);
	set_at<64, 2560>(result, h3_3_rd2_res);
	hw_uint<32>  h3_3_rd3_res = h3_3_rd3_select(h3_2, d0, d1, dynamic_address);
	set_at<96, 2560>(result, h3_3_rd3_res);
	hw_uint<32>  h3_3_rd4_res = h3_3_rd4_select(h3_2, d0, d1, dynamic_address);
	set_at<128, 2560>(result, h3_3_rd4_res);
	hw_uint<32>  h3_3_rd5_res = h3_3_rd5_select(h3_2, d0, d1, dynamic_address);
	set_at<160, 2560>(result, h3_3_rd5_res);
	hw_uint<32>  h3_3_rd6_res = h3_3_rd6_select(h3_2, d0, d1, dynamic_address);
	set_at<192, 2560>(result, h3_3_rd6_res);
	hw_uint<32>  h3_3_rd7_res = h3_3_rd7_select(h3_2, d0, d1, dynamic_address);
	set_at<224, 2560>(result, h3_3_rd7_res);
	hw_uint<32>  h3_3_rd8_res = h3_3_rd8_select(h3_2, d0, d1, dynamic_address);
	set_at<256, 2560>(result, h3_3_rd8_res);
	hw_uint<32>  h3_3_rd9_res = h3_3_rd9_select(h3_2, d0, d1, dynamic_address);
	set_at<288, 2560>(result, h3_3_rd9_res);
	hw_uint<32>  h3_3_rd10_res = h3_3_rd10_select(h3_2, d0, d1, dynamic_address);
	set_at<320, 2560>(result, h3_3_rd10_res);
	hw_uint<32>  h3_3_rd11_res = h3_3_rd11_select(h3_2, d0, d1, dynamic_address);
	set_at<352, 2560>(result, h3_3_rd11_res);
	hw_uint<32>  h3_3_rd12_res = h3_3_rd12_select(h3_2, d0, d1, dynamic_address);
	set_at<384, 2560>(result, h3_3_rd12_res);
	hw_uint<32>  h3_3_rd13_res = h3_3_rd13_select(h3_2, d0, d1, dynamic_address);
	set_at<416, 2560>(result, h3_3_rd13_res);
	hw_uint<32>  h3_3_rd14_res = h3_3_rd14_select(h3_2, d0, d1, dynamic_address);
	set_at<448, 2560>(result, h3_3_rd14_res);
	hw_uint<32>  h3_3_rd15_res = h3_3_rd15_select(h3_2, d0, d1, dynamic_address);
	set_at<480, 2560>(result, h3_3_rd15_res);
	hw_uint<32>  h3_3_rd16_res = h3_3_rd16_select(h3_2, d0, d1, dynamic_address);
	set_at<512, 2560>(result, h3_3_rd16_res);
	hw_uint<32>  h3_3_rd17_res = h3_3_rd17_select(h3_2, d0, d1, dynamic_address);
	set_at<544, 2560>(result, h3_3_rd17_res);
	hw_uint<32>  h3_3_rd18_res = h3_3_rd18_select(h3_2, d0, d1, dynamic_address);
	set_at<576, 2560>(result, h3_3_rd18_res);
	hw_uint<32>  h3_3_rd19_res = h3_3_rd19_select(h3_2, d0, d1, dynamic_address);
	set_at<608, 2560>(result, h3_3_rd19_res);
	hw_uint<32>  h3_3_rd20_res = h3_3_rd20_select(h3_2, d0, d1, dynamic_address);
	set_at<640, 2560>(result, h3_3_rd20_res);
	hw_uint<32>  h3_3_rd21_res = h3_3_rd21_select(h3_2, d0, d1, dynamic_address);
	set_at<672, 2560>(result, h3_3_rd21_res);
	hw_uint<32>  h3_3_rd22_res = h3_3_rd22_select(h3_2, d0, d1, dynamic_address);
	set_at<704, 2560>(result, h3_3_rd22_res);
	hw_uint<32>  h3_3_rd23_res = h3_3_rd23_select(h3_2, d0, d1, dynamic_address);
	set_at<736, 2560>(result, h3_3_rd23_res);
	hw_uint<32>  h3_3_rd24_res = h3_3_rd24_select(h3_2, d0, d1, dynamic_address);
	set_at<768, 2560>(result, h3_3_rd24_res);
	hw_uint<32>  h3_3_rd25_res = h3_3_rd25_select(h3_2, d0, d1, dynamic_address);
	set_at<800, 2560>(result, h3_3_rd25_res);
	hw_uint<32>  h3_3_rd26_res = h3_3_rd26_select(h3_2, d0, d1, dynamic_address);
	set_at<832, 2560>(result, h3_3_rd26_res);
	hw_uint<32>  h3_3_rd27_res = h3_3_rd27_select(h3_2, d0, d1, dynamic_address);
	set_at<864, 2560>(result, h3_3_rd27_res);
	hw_uint<32>  h3_3_rd28_res = h3_3_rd28_select(h3_2, d0, d1, dynamic_address);
	set_at<896, 2560>(result, h3_3_rd28_res);
	hw_uint<32>  h3_3_rd29_res = h3_3_rd29_select(h3_2, d0, d1, dynamic_address);
	set_at<928, 2560>(result, h3_3_rd29_res);
	hw_uint<32>  h3_3_rd30_res = h3_3_rd30_select(h3_2, d0, d1, dynamic_address);
	set_at<960, 2560>(result, h3_3_rd30_res);
	hw_uint<32>  h3_3_rd31_res = h3_3_rd31_select(h3_2, d0, d1, dynamic_address);
	set_at<992, 2560>(result, h3_3_rd31_res);
	hw_uint<32>  h3_3_rd32_res = h3_3_rd32_select(h3_2, d0, d1, dynamic_address);
	set_at<1024, 2560>(result, h3_3_rd32_res);
	hw_uint<32>  h3_3_rd33_res = h3_3_rd33_select(h3_2, d0, d1, dynamic_address);
	set_at<1056, 2560>(result, h3_3_rd33_res);
	hw_uint<32>  h3_3_rd34_res = h3_3_rd34_select(h3_2, d0, d1, dynamic_address);
	set_at<1088, 2560>(result, h3_3_rd34_res);
	hw_uint<32>  h3_3_rd35_res = h3_3_rd35_select(h3_2, d0, d1, dynamic_address);
	set_at<1120, 2560>(result, h3_3_rd35_res);
	hw_uint<32>  h3_3_rd36_res = h3_3_rd36_select(h3_2, d0, d1, dynamic_address);
	set_at<1152, 2560>(result, h3_3_rd36_res);
	hw_uint<32>  h3_3_rd37_res = h3_3_rd37_select(h3_2, d0, d1, dynamic_address);
	set_at<1184, 2560>(result, h3_3_rd37_res);
	hw_uint<32>  h3_3_rd38_res = h3_3_rd38_select(h3_2, d0, d1, dynamic_address);
	set_at<1216, 2560>(result, h3_3_rd38_res);
	hw_uint<32>  h3_3_rd39_res = h3_3_rd39_select(h3_2, d0, d1, dynamic_address);
	set_at<1248, 2560>(result, h3_3_rd39_res);
	hw_uint<32>  h3_3_rd40_res = h3_3_rd40_select(h3_2, d0, d1, dynamic_address);
	set_at<1280, 2560>(result, h3_3_rd40_res);
	hw_uint<32>  h3_3_rd41_res = h3_3_rd41_select(h3_2, d0, d1, dynamic_address);
	set_at<1312, 2560>(result, h3_3_rd41_res);
	hw_uint<32>  h3_3_rd42_res = h3_3_rd42_select(h3_2, d0, d1, dynamic_address);
	set_at<1344, 2560>(result, h3_3_rd42_res);
	hw_uint<32>  h3_3_rd43_res = h3_3_rd43_select(h3_2, d0, d1, dynamic_address);
	set_at<1376, 2560>(result, h3_3_rd43_res);
	hw_uint<32>  h3_3_rd44_res = h3_3_rd44_select(h3_2, d0, d1, dynamic_address);
	set_at<1408, 2560>(result, h3_3_rd44_res);
	hw_uint<32>  h3_3_rd45_res = h3_3_rd45_select(h3_2, d0, d1, dynamic_address);
	set_at<1440, 2560>(result, h3_3_rd45_res);
	hw_uint<32>  h3_3_rd46_res = h3_3_rd46_select(h3_2, d0, d1, dynamic_address);
	set_at<1472, 2560>(result, h3_3_rd46_res);
	hw_uint<32>  h3_3_rd47_res = h3_3_rd47_select(h3_2, d0, d1, dynamic_address);
	set_at<1504, 2560>(result, h3_3_rd47_res);
	hw_uint<32>  h3_3_rd48_res = h3_3_rd48_select(h3_2, d0, d1, dynamic_address);
	set_at<1536, 2560>(result, h3_3_rd48_res);
	hw_uint<32>  h3_3_rd49_res = h3_3_rd49_select(h3_2, d0, d1, dynamic_address);
	set_at<1568, 2560>(result, h3_3_rd49_res);
	hw_uint<32>  h3_3_rd50_res = h3_3_rd50_select(h3_2, d0, d1, dynamic_address);
	set_at<1600, 2560>(result, h3_3_rd50_res);
	hw_uint<32>  h3_3_rd51_res = h3_3_rd51_select(h3_2, d0, d1, dynamic_address);
	set_at<1632, 2560>(result, h3_3_rd51_res);
	hw_uint<32>  h3_3_rd52_res = h3_3_rd52_select(h3_2, d0, d1, dynamic_address);
	set_at<1664, 2560>(result, h3_3_rd52_res);
	hw_uint<32>  h3_3_rd53_res = h3_3_rd53_select(h3_2, d0, d1, dynamic_address);
	set_at<1696, 2560>(result, h3_3_rd53_res);
	hw_uint<32>  h3_3_rd54_res = h3_3_rd54_select(h3_2, d0, d1, dynamic_address);
	set_at<1728, 2560>(result, h3_3_rd54_res);
	hw_uint<32>  h3_3_rd55_res = h3_3_rd55_select(h3_2, d0, d1, dynamic_address);
	set_at<1760, 2560>(result, h3_3_rd55_res);
	hw_uint<32>  h3_3_rd56_res = h3_3_rd56_select(h3_2, d0, d1, dynamic_address);
	set_at<1792, 2560>(result, h3_3_rd56_res);
	hw_uint<32>  h3_3_rd57_res = h3_3_rd57_select(h3_2, d0, d1, dynamic_address);
	set_at<1824, 2560>(result, h3_3_rd57_res);
	hw_uint<32>  h3_3_rd58_res = h3_3_rd58_select(h3_2, d0, d1, dynamic_address);
	set_at<1856, 2560>(result, h3_3_rd58_res);
	hw_uint<32>  h3_3_rd59_res = h3_3_rd59_select(h3_2, d0, d1, dynamic_address);
	set_at<1888, 2560>(result, h3_3_rd59_res);
	hw_uint<32>  h3_3_rd60_res = h3_3_rd60_select(h3_2, d0, d1, dynamic_address);
	set_at<1920, 2560>(result, h3_3_rd60_res);
	hw_uint<32>  h3_3_rd61_res = h3_3_rd61_select(h3_2, d0, d1, dynamic_address);
	set_at<1952, 2560>(result, h3_3_rd61_res);
	hw_uint<32>  h3_3_rd62_res = h3_3_rd62_select(h3_2, d0, d1, dynamic_address);
	set_at<1984, 2560>(result, h3_3_rd62_res);
	hw_uint<32>  h3_3_rd63_res = h3_3_rd63_select(h3_2, d0, d1, dynamic_address);
	set_at<2016, 2560>(result, h3_3_rd63_res);
	hw_uint<32>  h3_3_rd64_res = h3_3_rd64_select(h3_2, d0, d1, dynamic_address);
	set_at<2048, 2560>(result, h3_3_rd64_res);
	hw_uint<32>  h3_3_rd65_res = h3_3_rd65_select(h3_2, d0, d1, dynamic_address);
	set_at<2080, 2560>(result, h3_3_rd65_res);
	hw_uint<32>  h3_3_rd66_res = h3_3_rd66_select(h3_2, d0, d1, dynamic_address);
	set_at<2112, 2560>(result, h3_3_rd66_res);
	hw_uint<32>  h3_3_rd67_res = h3_3_rd67_select(h3_2, d0, d1, dynamic_address);
	set_at<2144, 2560>(result, h3_3_rd67_res);
	hw_uint<32>  h3_3_rd68_res = h3_3_rd68_select(h3_2, d0, d1, dynamic_address);
	set_at<2176, 2560>(result, h3_3_rd68_res);
	hw_uint<32>  h3_3_rd69_res = h3_3_rd69_select(h3_2, d0, d1, dynamic_address);
	set_at<2208, 2560>(result, h3_3_rd69_res);
	hw_uint<32>  h3_3_rd70_res = h3_3_rd70_select(h3_2, d0, d1, dynamic_address);
	set_at<2240, 2560>(result, h3_3_rd70_res);
	hw_uint<32>  h3_3_rd71_res = h3_3_rd71_select(h3_2, d0, d1, dynamic_address);
	set_at<2272, 2560>(result, h3_3_rd71_res);
	hw_uint<32>  h3_3_rd72_res = h3_3_rd72_select(h3_2, d0, d1, dynamic_address);
	set_at<2304, 2560>(result, h3_3_rd72_res);
	hw_uint<32>  h3_3_rd73_res = h3_3_rd73_select(h3_2, d0, d1, dynamic_address);
	set_at<2336, 2560>(result, h3_3_rd73_res);
	hw_uint<32>  h3_3_rd74_res = h3_3_rd74_select(h3_2, d0, d1, dynamic_address);
	set_at<2368, 2560>(result, h3_3_rd74_res);
	hw_uint<32>  h3_3_rd75_res = h3_3_rd75_select(h3_2, d0, d1, dynamic_address);
	set_at<2400, 2560>(result, h3_3_rd75_res);
	hw_uint<32>  h3_3_rd76_res = h3_3_rd76_select(h3_2, d0, d1, dynamic_address);
	set_at<2432, 2560>(result, h3_3_rd76_res);
	hw_uint<32>  h3_3_rd77_res = h3_3_rd77_select(h3_2, d0, d1, dynamic_address);
	set_at<2464, 2560>(result, h3_3_rd77_res);
	hw_uint<32>  h3_3_rd78_res = h3_3_rd78_select(h3_2, d0, d1, dynamic_address);
	set_at<2496, 2560>(result, h3_3_rd78_res);
	hw_uint<32>  h3_3_rd79_res = h3_3_rd79_select(h3_2, d0, d1, dynamic_address);
	set_at<2528, 2560>(result, h3_3_rd79_res);
	return result;
}

struct h3_3_h3_3_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-80, 1104], [-6, 1028]}
	// Capacity: 154
	// # of read delays: 5
  // 0, 1, 76, 77, 153
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 74> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 75> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_75() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_76() {
		return f4;
	}

	inline hw_uint<32>  peek_77() {
		return f6;
	}

	inline hw_uint<32>  peek_152() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_153() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 74
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 74 reading from capacity: 1
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
	// RAM Box: {[-79, 1089], [-6, 1029]}
	// Capacity: 154
	// # of read delays: 4
  // 0, 1, 77, 153
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 75> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 75> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_77() {
		return f4;
	}

	inline hw_uint<32>  peek_152() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_153() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write10_merged_banks_5_cache {
	// RAM Box: {[-70, 1098], [-6, 1029]}
	// Capacity: 154
	// # of read delays: 4
  // 0, 1, 77, 153
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 75> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 75> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_77() {
		return f4;
	}

	inline hw_uint<32>  peek_152() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_153() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write11_merged_banks_5_cache {
	// RAM Box: {[-69, 1099], [-6, 1029]}
	// Capacity: 154
	// # of read delays: 4
  // 0, 1, 77, 153
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 75> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 75> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_77() {
		return f4;
	}

	inline hw_uint<32>  peek_152() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_153() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write12_merged_banks_5_cache {
	// RAM Box: {[-68, 1100], [-6, 1029]}
	// Capacity: 154
	// # of read delays: 4
  // 0, 1, 77, 153
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 75> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 75> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_77() {
		return f4;
	}

	inline hw_uint<32>  peek_152() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_153() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write13_merged_banks_5_cache {
	// RAM Box: {[-67, 1101], [-6, 1029]}
	// Capacity: 154
	// # of read delays: 4
  // 0, 1, 77, 153
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 75> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 75> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_77() {
		return f4;
	}

	inline hw_uint<32>  peek_152() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_153() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write14_merged_banks_5_cache {
	// RAM Box: {[-66, 1102], [-6, 1029]}
	// Capacity: 154
	// # of read delays: 4
  // 0, 1, 77, 153
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 75> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 75> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_77() {
		return f4;
	}

	inline hw_uint<32>  peek_152() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_153() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write15_merged_banks_5_cache {
	// RAM Box: {[-81, 1103], [-5, 1029]}
	// Capacity: 154
	// # of read delays: 5
  // 0, 1, 77, 78, 153
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 75> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 74> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_77() {
		return f4;
	}

	inline hw_uint<32>  peek_78() {
		return f6;
	}

	inline hw_uint<32>  peek_152() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_153() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 74
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 74 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
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
	// RAM Box: {[-78, 1090], [-6, 1029]}
	// Capacity: 154
	// # of read delays: 4
  // 0, 1, 77, 153
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 75> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 75> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_77() {
		return f4;
	}

	inline hw_uint<32>  peek_152() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_153() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
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
	// RAM Box: {[-77, 1091], [-6, 1029]}
	// Capacity: 154
	// # of read delays: 4
  // 0, 1, 77, 153
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 75> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 75> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_77() {
		return f4;
	}

	inline hw_uint<32>  peek_152() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_153() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write4_merged_banks_5_cache {
	// RAM Box: {[-76, 1092], [-6, 1029]}
	// Capacity: 154
	// # of read delays: 4
  // 0, 1, 77, 153
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 75> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 75> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_77() {
		return f4;
	}

	inline hw_uint<32>  peek_152() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_153() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write5_merged_banks_5_cache {
	// RAM Box: {[-75, 1093], [-6, 1029]}
	// Capacity: 154
	// # of read delays: 4
  // 0, 1, 77, 153
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 75> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 75> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_77() {
		return f4;
	}

	inline hw_uint<32>  peek_152() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_153() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write6_merged_banks_5_cache {
	// RAM Box: {[-74, 1094], [-6, 1029]}
	// Capacity: 154
	// # of read delays: 4
  // 0, 1, 77, 153
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 75> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 75> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_77() {
		return f4;
	}

	inline hw_uint<32>  peek_152() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_153() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write7_merged_banks_5_cache {
	// RAM Box: {[-73, 1095], [-6, 1029]}
	// Capacity: 154
	// # of read delays: 4
  // 0, 1, 77, 153
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 75> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 75> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_77() {
		return f4;
	}

	inline hw_uint<32>  peek_152() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_153() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write8_merged_banks_5_cache {
	// RAM Box: {[-72, 1096], [-6, 1029]}
	// Capacity: 154
	// # of read delays: 4
  // 0, 1, 77, 153
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 75> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 75> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_77() {
		return f4;
	}

	inline hw_uint<32>  peek_152() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_153() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_3_h3_3_update_0_write9_merged_banks_5_cache {
	// RAM Box: {[-71, 1097], [-6, 1029]}
	// Capacity: 154
	// # of read delays: 4
  // 0, 1, 77, 153
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 75> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 75> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_76() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_77() {
		return f4;
	}

	inline hw_uint<32>  peek_152() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_153() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 75
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 75 reading from capacity: 1
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
  // # of banks: 16
  h3_3_h3_3_update_0_write0_merged_banks_5_cache h3_3_h3_3_update_0_write0_merged_banks_5;
  h3_3_h3_3_update_0_write1_merged_banks_5_cache h3_3_h3_3_update_0_write1_merged_banks_5;
  h3_3_h3_3_update_0_write10_merged_banks_5_cache h3_3_h3_3_update_0_write10_merged_banks_5;
  h3_3_h3_3_update_0_write11_merged_banks_5_cache h3_3_h3_3_update_0_write11_merged_banks_5;
  h3_3_h3_3_update_0_write12_merged_banks_5_cache h3_3_h3_3_update_0_write12_merged_banks_5;
  h3_3_h3_3_update_0_write13_merged_banks_5_cache h3_3_h3_3_update_0_write13_merged_banks_5;
  h3_3_h3_3_update_0_write14_merged_banks_5_cache h3_3_h3_3_update_0_write14_merged_banks_5;
  h3_3_h3_3_update_0_write15_merged_banks_5_cache h3_3_h3_3_update_0_write15_merged_banks_5;
  h3_3_h3_3_update_0_write2_merged_banks_5_cache h3_3_h3_3_update_0_write2_merged_banks_5;
  h3_3_h3_3_update_0_write3_merged_banks_5_cache h3_3_h3_3_update_0_write3_merged_banks_5;
  h3_3_h3_3_update_0_write4_merged_banks_5_cache h3_3_h3_3_update_0_write4_merged_banks_5;
  h3_3_h3_3_update_0_write5_merged_banks_5_cache h3_3_h3_3_update_0_write5_merged_banks_5;
  h3_3_h3_3_update_0_write6_merged_banks_5_cache h3_3_h3_3_update_0_write6_merged_banks_5;
  h3_3_h3_3_update_0_write7_merged_banks_5_cache h3_3_h3_3_update_0_write7_merged_banks_5;
  h3_3_h3_3_update_0_write8_merged_banks_5_cache h3_3_h3_3_update_0_write8_merged_banks_5;
  h3_3_h3_3_update_0_write9_merged_banks_5_cache h3_3_h3_3_update_0_write9_merged_banks_5;
};



inline void h3_3_h3_3_update_0_write0_write(hw_uint<32> & h3_3_h3_3_update_0_write0, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.push(h3_3_h3_3_update_0_write0);
}

inline void h3_3_h3_3_update_0_write1_write(hw_uint<32> & h3_3_h3_3_update_0_write1, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write1_merged_banks_5.push(h3_3_h3_3_update_0_write1);
}

inline void h3_3_h3_3_update_0_write10_write(hw_uint<32> & h3_3_h3_3_update_0_write10, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write10_merged_banks_5.push(h3_3_h3_3_update_0_write10);
}

inline void h3_3_h3_3_update_0_write11_write(hw_uint<32> & h3_3_h3_3_update_0_write11, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write11_merged_banks_5.push(h3_3_h3_3_update_0_write11);
}

inline void h3_3_h3_3_update_0_write12_write(hw_uint<32> & h3_3_h3_3_update_0_write12, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write12_merged_banks_5.push(h3_3_h3_3_update_0_write12);
}

inline void h3_3_h3_3_update_0_write13_write(hw_uint<32> & h3_3_h3_3_update_0_write13, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write13_merged_banks_5.push(h3_3_h3_3_update_0_write13);
}

inline void h3_3_h3_3_update_0_write14_write(hw_uint<32> & h3_3_h3_3_update_0_write14, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write14_merged_banks_5.push(h3_3_h3_3_update_0_write14);
}

inline void h3_3_h3_3_update_0_write15_write(hw_uint<32> & h3_3_h3_3_update_0_write15, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write15_merged_banks_5.push(h3_3_h3_3_update_0_write15);
}

inline void h3_3_h3_3_update_0_write2_write(hw_uint<32> & h3_3_h3_3_update_0_write2, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write2_merged_banks_5.push(h3_3_h3_3_update_0_write2);
}

inline void h3_3_h3_3_update_0_write3_write(hw_uint<32> & h3_3_h3_3_update_0_write3, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write3_merged_banks_5.push(h3_3_h3_3_update_0_write3);
}

inline void h3_3_h3_3_update_0_write4_write(hw_uint<32> & h3_3_h3_3_update_0_write4, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write4_merged_banks_5.push(h3_3_h3_3_update_0_write4);
}

inline void h3_3_h3_3_update_0_write5_write(hw_uint<32> & h3_3_h3_3_update_0_write5, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write5_merged_banks_5.push(h3_3_h3_3_update_0_write5);
}

inline void h3_3_h3_3_update_0_write6_write(hw_uint<32> & h3_3_h3_3_update_0_write6, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write6_merged_banks_5.push(h3_3_h3_3_update_0_write6);
}

inline void h3_3_h3_3_update_0_write7_write(hw_uint<32> & h3_3_h3_3_update_0_write7, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write7_merged_banks_5.push(h3_3_h3_3_update_0_write7);
}

inline void h3_3_h3_3_update_0_write8_write(hw_uint<32> & h3_3_h3_3_update_0_write8, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write8_merged_banks_5.push(h3_3_h3_3_update_0_write8);
}

inline void h3_3_h3_3_update_0_write9_write(hw_uint<32> & h3_3_h3_3_update_0_write9, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  h3_3.h3_3_h3_3_update_0_write9_merged_banks_5.push(h3_3_h3_3_update_0_write9);
}

inline hw_uint<32>  h3_4_rd0_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd0 read pattern: { h3_4_update_0[d0, d1] -> h3_3[-1 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write15 = h3_3.h3_3_h3_3_update_0_write15_merged_banks_5.peek_78();
  return value_h3_3_h3_3_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_4_rd1_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd1 read pattern: { h3_4_update_0[d0, d1] -> h3_3[16d0, -1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.peek_153();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd10_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd10 read pattern: { h3_4_update_0[d0, d1] -> h3_3[1 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd11_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd11 read pattern: { h3_4_update_0[d0, d1] -> h3_3[2 + 16d0, -1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_5.peek_153();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_4_rd12_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd12 read pattern: { h3_4_update_0[d0, d1] -> h3_3[2 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_4_rd13_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd13 read pattern: { h3_4_update_0[d0, d1] -> h3_3[2 + 16d0, 1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_4_rd14_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd14 read pattern: { h3_4_update_0[d0, d1] -> h3_3[3 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd15_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd15 read pattern: { h3_4_update_0[d0, d1] -> h3_3[2 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_4_rd16_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd16 read pattern: { h3_4_update_0[d0, d1] -> h3_3[3 + 16d0, -1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_5.peek_153();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd17_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd17 read pattern: { h3_4_update_0[d0, d1] -> h3_3[3 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd18_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd18 read pattern: { h3_4_update_0[d0, d1] -> h3_3[3 + 16d0, 1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd19_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd19 read pattern: { h3_4_update_0[d0, d1] -> h3_3[4 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write4 = h3_3.h3_3_h3_3_update_0_write4_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_4_rd2_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd2 read pattern: { h3_4_update_0[d0, d1] -> h3_3[16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd20_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd20 read pattern: { h3_4_update_0[d0, d1] -> h3_3[3 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd21_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd21 read pattern: { h3_4_update_0[d0, d1] -> h3_3[4 + 16d0, -1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write4 = h3_3.h3_3_h3_3_update_0_write4_merged_banks_5.peek_153();
  return value_h3_3_h3_3_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_4_rd22_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd22 read pattern: { h3_4_update_0[d0, d1] -> h3_3[4 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write4 = h3_3.h3_3_h3_3_update_0_write4_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_4_rd23_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd23 read pattern: { h3_4_update_0[d0, d1] -> h3_3[4 + 16d0, 1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write4 = h3_3.h3_3_h3_3_update_0_write4_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_4_rd24_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd24 read pattern: { h3_4_update_0[d0, d1] -> h3_3[5 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write5 = h3_3.h3_3_h3_3_update_0_write5_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_4_rd25_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd25 read pattern: { h3_4_update_0[d0, d1] -> h3_3[4 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write4 = h3_3.h3_3_h3_3_update_0_write4_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_4_rd26_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd26 read pattern: { h3_4_update_0[d0, d1] -> h3_3[5 + 16d0, -1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write5 = h3_3.h3_3_h3_3_update_0_write5_merged_banks_5.peek_153();
  return value_h3_3_h3_3_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_4_rd27_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd27 read pattern: { h3_4_update_0[d0, d1] -> h3_3[5 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write5 = h3_3.h3_3_h3_3_update_0_write5_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_4_rd28_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd28 read pattern: { h3_4_update_0[d0, d1] -> h3_3[5 + 16d0, 1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write5 = h3_3.h3_3_h3_3_update_0_write5_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_4_rd29_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd29 read pattern: { h3_4_update_0[d0, d1] -> h3_3[6 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write6 = h3_3.h3_3_h3_3_update_0_write6_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_4_rd3_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd3 read pattern: { h3_4_update_0[d0, d1] -> h3_3[16d0, 1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd30_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd30 read pattern: { h3_4_update_0[d0, d1] -> h3_3[5 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write5 = h3_3.h3_3_h3_3_update_0_write5_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_4_rd31_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd31 read pattern: { h3_4_update_0[d0, d1] -> h3_3[6 + 16d0, -1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write6 = h3_3.h3_3_h3_3_update_0_write6_merged_banks_5.peek_153();
  return value_h3_3_h3_3_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_4_rd32_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd32 read pattern: { h3_4_update_0[d0, d1] -> h3_3[6 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write6 = h3_3.h3_3_h3_3_update_0_write6_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_4_rd33_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd33 read pattern: { h3_4_update_0[d0, d1] -> h3_3[6 + 16d0, 1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write6 = h3_3.h3_3_h3_3_update_0_write6_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_4_rd34_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd34 read pattern: { h3_4_update_0[d0, d1] -> h3_3[7 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write7 = h3_3.h3_3_h3_3_update_0_write7_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_4_rd35_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd35 read pattern: { h3_4_update_0[d0, d1] -> h3_3[6 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write6 = h3_3.h3_3_h3_3_update_0_write6_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_4_rd36_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd36 read pattern: { h3_4_update_0[d0, d1] -> h3_3[7 + 16d0, -1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write7 = h3_3.h3_3_h3_3_update_0_write7_merged_banks_5.peek_153();
  return value_h3_3_h3_3_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_4_rd37_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd37 read pattern: { h3_4_update_0[d0, d1] -> h3_3[7 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write7 = h3_3.h3_3_h3_3_update_0_write7_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_4_rd38_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd38 read pattern: { h3_4_update_0[d0, d1] -> h3_3[7 + 16d0, 1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write7 = h3_3.h3_3_h3_3_update_0_write7_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_4_rd39_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd39 read pattern: { h3_4_update_0[d0, d1] -> h3_3[8 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write8 = h3_3.h3_3_h3_3_update_0_write8_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_4_rd4_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd4 read pattern: { h3_4_update_0[d0, d1] -> h3_3[1 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd40_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd40 read pattern: { h3_4_update_0[d0, d1] -> h3_3[7 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write7 = h3_3.h3_3_h3_3_update_0_write7_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_4_rd41_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd41 read pattern: { h3_4_update_0[d0, d1] -> h3_3[8 + 16d0, -1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write8 = h3_3.h3_3_h3_3_update_0_write8_merged_banks_5.peek_153();
  return value_h3_3_h3_3_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_4_rd42_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd42 read pattern: { h3_4_update_0[d0, d1] -> h3_3[8 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write8 = h3_3.h3_3_h3_3_update_0_write8_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_4_rd43_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd43 read pattern: { h3_4_update_0[d0, d1] -> h3_3[8 + 16d0, 1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write8 = h3_3.h3_3_h3_3_update_0_write8_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_4_rd44_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd44 read pattern: { h3_4_update_0[d0, d1] -> h3_3[9 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write9 = h3_3.h3_3_h3_3_update_0_write9_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_4_rd45_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd45 read pattern: { h3_4_update_0[d0, d1] -> h3_3[8 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write8 = h3_3.h3_3_h3_3_update_0_write8_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_4_rd46_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd46 read pattern: { h3_4_update_0[d0, d1] -> h3_3[9 + 16d0, -1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write9 = h3_3.h3_3_h3_3_update_0_write9_merged_banks_5.peek_153();
  return value_h3_3_h3_3_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_4_rd47_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd47 read pattern: { h3_4_update_0[d0, d1] -> h3_3[9 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write9 = h3_3.h3_3_h3_3_update_0_write9_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_4_rd48_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd48 read pattern: { h3_4_update_0[d0, d1] -> h3_3[9 + 16d0, 1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write9 = h3_3.h3_3_h3_3_update_0_write9_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_4_rd49_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd49 read pattern: { h3_4_update_0[d0, d1] -> h3_3[10 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write10 = h3_3.h3_3_h3_3_update_0_write10_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_4_rd5_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd5 read pattern: { h3_4_update_0[d0, d1] -> h3_3[16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd50_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd50 read pattern: { h3_4_update_0[d0, d1] -> h3_3[9 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write9 = h3_3.h3_3_h3_3_update_0_write9_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_4_rd51_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd51 read pattern: { h3_4_update_0[d0, d1] -> h3_3[10 + 16d0, -1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write10 = h3_3.h3_3_h3_3_update_0_write10_merged_banks_5.peek_153();
  return value_h3_3_h3_3_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_4_rd52_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd52 read pattern: { h3_4_update_0[d0, d1] -> h3_3[10 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write10 = h3_3.h3_3_h3_3_update_0_write10_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_4_rd53_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd53 read pattern: { h3_4_update_0[d0, d1] -> h3_3[10 + 16d0, 1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write10 = h3_3.h3_3_h3_3_update_0_write10_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_4_rd54_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd54 read pattern: { h3_4_update_0[d0, d1] -> h3_3[11 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write11 = h3_3.h3_3_h3_3_update_0_write11_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_4_rd55_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd55 read pattern: { h3_4_update_0[d0, d1] -> h3_3[10 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write10 = h3_3.h3_3_h3_3_update_0_write10_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_4_rd56_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd56 read pattern: { h3_4_update_0[d0, d1] -> h3_3[11 + 16d0, -1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write11 = h3_3.h3_3_h3_3_update_0_write11_merged_banks_5.peek_153();
  return value_h3_3_h3_3_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_4_rd57_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd57 read pattern: { h3_4_update_0[d0, d1] -> h3_3[11 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write11 = h3_3.h3_3_h3_3_update_0_write11_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_4_rd58_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd58 read pattern: { h3_4_update_0[d0, d1] -> h3_3[11 + 16d0, 1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write11 = h3_3.h3_3_h3_3_update_0_write11_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_4_rd59_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd59 read pattern: { h3_4_update_0[d0, d1] -> h3_3[12 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write12 = h3_3.h3_3_h3_3_update_0_write12_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_4_rd6_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd6 read pattern: { h3_4_update_0[d0, d1] -> h3_3[1 + 16d0, -1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_5.peek_153();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd60_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd60 read pattern: { h3_4_update_0[d0, d1] -> h3_3[11 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write11 = h3_3.h3_3_h3_3_update_0_write11_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_4_rd61_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd61 read pattern: { h3_4_update_0[d0, d1] -> h3_3[12 + 16d0, -1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write12 = h3_3.h3_3_h3_3_update_0_write12_merged_banks_5.peek_153();
  return value_h3_3_h3_3_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_4_rd62_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd62 read pattern: { h3_4_update_0[d0, d1] -> h3_3[12 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write12 = h3_3.h3_3_h3_3_update_0_write12_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_4_rd63_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd63 read pattern: { h3_4_update_0[d0, d1] -> h3_3[12 + 16d0, 1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write12 = h3_3.h3_3_h3_3_update_0_write12_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_4_rd64_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd64 read pattern: { h3_4_update_0[d0, d1] -> h3_3[13 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write13 = h3_3.h3_3_h3_3_update_0_write13_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_4_rd65_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd65 read pattern: { h3_4_update_0[d0, d1] -> h3_3[12 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write12 = h3_3.h3_3_h3_3_update_0_write12_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_4_rd66_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd66 read pattern: { h3_4_update_0[d0, d1] -> h3_3[13 + 16d0, -1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write13 = h3_3.h3_3_h3_3_update_0_write13_merged_banks_5.peek_153();
  return value_h3_3_h3_3_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_4_rd67_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd67 read pattern: { h3_4_update_0[d0, d1] -> h3_3[13 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write13 = h3_3.h3_3_h3_3_update_0_write13_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_4_rd68_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd68 read pattern: { h3_4_update_0[d0, d1] -> h3_3[13 + 16d0, 1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write13 = h3_3.h3_3_h3_3_update_0_write13_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_4_rd69_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd69 read pattern: { h3_4_update_0[d0, d1] -> h3_3[14 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write14 = h3_3.h3_3_h3_3_update_0_write14_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_4_rd7_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd7 read pattern: { h3_4_update_0[d0, d1] -> h3_3[1 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd70_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd70 read pattern: { h3_4_update_0[d0, d1] -> h3_3[13 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write13 = h3_3.h3_3_h3_3_update_0_write13_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_4_rd71_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd71 read pattern: { h3_4_update_0[d0, d1] -> h3_3[14 + 16d0, -1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write14 = h3_3.h3_3_h3_3_update_0_write14_merged_banks_5.peek_153();
  return value_h3_3_h3_3_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_4_rd72_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd72 read pattern: { h3_4_update_0[d0, d1] -> h3_3[14 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write14 = h3_3.h3_3_h3_3_update_0_write14_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_4_rd73_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd73 read pattern: { h3_4_update_0[d0, d1] -> h3_3[14 + 16d0, 1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write14 = h3_3.h3_3_h3_3_update_0_write14_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_4_rd74_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd74 read pattern: { h3_4_update_0[d0, d1] -> h3_3[15 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write15 = h3_3.h3_3_h3_3_update_0_write15_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_4_rd75_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd75 read pattern: { h3_4_update_0[d0, d1] -> h3_3[14 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write14 = h3_3.h3_3_h3_3_update_0_write14_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_4_rd76_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd76 read pattern: { h3_4_update_0[d0, d1] -> h3_3[15 + 16d0, -1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write15 = h3_3.h3_3_h3_3_update_0_write15_merged_banks_5.peek_153();
  return value_h3_3_h3_3_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_4_rd77_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd77 read pattern: { h3_4_update_0[d0, d1] -> h3_3[15 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write15 = h3_3.h3_3_h3_3_update_0_write15_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_4_rd78_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd78 read pattern: { h3_4_update_0[d0, d1] -> h3_3[15 + 16d0, 1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write15 = h3_3.h3_3_h3_3_update_0_write15_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_4_rd79_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd79 read pattern: { h3_4_update_0[d0, d1] -> h3_3[16 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.peek_76();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd8_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd8 read pattern: { h3_4_update_0[d0, d1] -> h3_3[1 + 16d0, 1 + d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd9_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd9 read pattern: { h3_4_update_0[d0, d1] -> h3_3[2 + 16d0, d1] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_5.peek_77();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

// # of bundles = 2
// h3_3_update_0_write
//	h3_3_h3_3_update_0_write0
//	h3_3_h3_3_update_0_write1
//	h3_3_h3_3_update_0_write2
//	h3_3_h3_3_update_0_write3
//	h3_3_h3_3_update_0_write4
//	h3_3_h3_3_update_0_write5
//	h3_3_h3_3_update_0_write6
//	h3_3_h3_3_update_0_write7
//	h3_3_h3_3_update_0_write8
//	h3_3_h3_3_update_0_write9
//	h3_3_h3_3_update_0_write10
//	h3_3_h3_3_update_0_write11
//	h3_3_h3_3_update_0_write12
//	h3_3_h3_3_update_0_write13
//	h3_3_h3_3_update_0_write14
//	h3_3_h3_3_update_0_write15
inline void h3_3_h3_3_update_0_write_bundle_write(hw_uint<512>& h3_3_update_0_write, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_3_h3_3_update_0_write0_res = h3_3_update_0_write.extract<0, 31>();
	h3_3_h3_3_update_0_write0_write(h3_3_h3_3_update_0_write0_res, h3_3, d0, d1, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write1_res = h3_3_update_0_write.extract<32, 63>();
	h3_3_h3_3_update_0_write1_write(h3_3_h3_3_update_0_write1_res, h3_3, d0, d1, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write2_res = h3_3_update_0_write.extract<64, 95>();
	h3_3_h3_3_update_0_write2_write(h3_3_h3_3_update_0_write2_res, h3_3, d0, d1, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write3_res = h3_3_update_0_write.extract<96, 127>();
	h3_3_h3_3_update_0_write3_write(h3_3_h3_3_update_0_write3_res, h3_3, d0, d1, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write4_res = h3_3_update_0_write.extract<128, 159>();
	h3_3_h3_3_update_0_write4_write(h3_3_h3_3_update_0_write4_res, h3_3, d0, d1, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write5_res = h3_3_update_0_write.extract<160, 191>();
	h3_3_h3_3_update_0_write5_write(h3_3_h3_3_update_0_write5_res, h3_3, d0, d1, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write6_res = h3_3_update_0_write.extract<192, 223>();
	h3_3_h3_3_update_0_write6_write(h3_3_h3_3_update_0_write6_res, h3_3, d0, d1, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write7_res = h3_3_update_0_write.extract<224, 255>();
	h3_3_h3_3_update_0_write7_write(h3_3_h3_3_update_0_write7_res, h3_3, d0, d1, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write8_res = h3_3_update_0_write.extract<256, 287>();
	h3_3_h3_3_update_0_write8_write(h3_3_h3_3_update_0_write8_res, h3_3, d0, d1, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write9_res = h3_3_update_0_write.extract<288, 319>();
	h3_3_h3_3_update_0_write9_write(h3_3_h3_3_update_0_write9_res, h3_3, d0, d1, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write10_res = h3_3_update_0_write.extract<320, 351>();
	h3_3_h3_3_update_0_write10_write(h3_3_h3_3_update_0_write10_res, h3_3, d0, d1, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write11_res = h3_3_update_0_write.extract<352, 383>();
	h3_3_h3_3_update_0_write11_write(h3_3_h3_3_update_0_write11_res, h3_3, d0, d1, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write12_res = h3_3_update_0_write.extract<384, 415>();
	h3_3_h3_3_update_0_write12_write(h3_3_h3_3_update_0_write12_res, h3_3, d0, d1, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write13_res = h3_3_update_0_write.extract<416, 447>();
	h3_3_h3_3_update_0_write13_write(h3_3_h3_3_update_0_write13_res, h3_3, d0, d1, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write14_res = h3_3_update_0_write.extract<448, 479>();
	h3_3_h3_3_update_0_write14_write(h3_3_h3_3_update_0_write14_res, h3_3, d0, d1, dynamic_address);
	hw_uint<32>  h3_3_h3_3_update_0_write15_res = h3_3_update_0_write.extract<480, 511>();
	h3_3_h3_3_update_0_write15_write(h3_3_h3_3_update_0_write15_res, h3_3, d0, d1, dynamic_address);
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
//	h3_4_rd20
//	h3_4_rd21
//	h3_4_rd22
//	h3_4_rd23
//	h3_4_rd24
//	h3_4_rd25
//	h3_4_rd26
//	h3_4_rd27
//	h3_4_rd28
//	h3_4_rd29
//	h3_4_rd30
//	h3_4_rd31
//	h3_4_rd32
//	h3_4_rd33
//	h3_4_rd34
//	h3_4_rd35
//	h3_4_rd36
//	h3_4_rd37
//	h3_4_rd38
//	h3_4_rd39
//	h3_4_rd40
//	h3_4_rd41
//	h3_4_rd42
//	h3_4_rd43
//	h3_4_rd44
//	h3_4_rd45
//	h3_4_rd46
//	h3_4_rd47
//	h3_4_rd48
//	h3_4_rd49
//	h3_4_rd50
//	h3_4_rd51
//	h3_4_rd52
//	h3_4_rd53
//	h3_4_rd54
//	h3_4_rd55
//	h3_4_rd56
//	h3_4_rd57
//	h3_4_rd58
//	h3_4_rd59
//	h3_4_rd60
//	h3_4_rd61
//	h3_4_rd62
//	h3_4_rd63
//	h3_4_rd64
//	h3_4_rd65
//	h3_4_rd66
//	h3_4_rd67
//	h3_4_rd68
//	h3_4_rd69
//	h3_4_rd70
//	h3_4_rd71
//	h3_4_rd72
//	h3_4_rd73
//	h3_4_rd74
//	h3_4_rd75
//	h3_4_rd76
//	h3_4_rd77
//	h3_4_rd78
//	h3_4_rd79
inline hw_uint<2560> h3_3_h3_4_update_0_read_bundle_read(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 80
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
    // h3_4_rd20
    // h3_4_rd21
    // h3_4_rd22
    // h3_4_rd23
    // h3_4_rd24
    // h3_4_rd25
    // h3_4_rd26
    // h3_4_rd27
    // h3_4_rd28
    // h3_4_rd29
    // h3_4_rd30
    // h3_4_rd31
    // h3_4_rd32
    // h3_4_rd33
    // h3_4_rd34
    // h3_4_rd35
    // h3_4_rd36
    // h3_4_rd37
    // h3_4_rd38
    // h3_4_rd39
    // h3_4_rd40
    // h3_4_rd41
    // h3_4_rd42
    // h3_4_rd43
    // h3_4_rd44
    // h3_4_rd45
    // h3_4_rd46
    // h3_4_rd47
    // h3_4_rd48
    // h3_4_rd49
    // h3_4_rd50
    // h3_4_rd51
    // h3_4_rd52
    // h3_4_rd53
    // h3_4_rd54
    // h3_4_rd55
    // h3_4_rd56
    // h3_4_rd57
    // h3_4_rd58
    // h3_4_rd59
    // h3_4_rd60
    // h3_4_rd61
    // h3_4_rd62
    // h3_4_rd63
    // h3_4_rd64
    // h3_4_rd65
    // h3_4_rd66
    // h3_4_rd67
    // h3_4_rd68
    // h3_4_rd69
    // h3_4_rd70
    // h3_4_rd71
    // h3_4_rd72
    // h3_4_rd73
    // h3_4_rd74
    // h3_4_rd75
    // h3_4_rd76
    // h3_4_rd77
    // h3_4_rd78
    // h3_4_rd79

	hw_uint<2560> result;
	hw_uint<32>  h3_4_rd0_res = h3_4_rd0_select(h3_3, d0, d1, dynamic_address);
	set_at<0, 2560>(result, h3_4_rd0_res);
	hw_uint<32>  h3_4_rd1_res = h3_4_rd1_select(h3_3, d0, d1, dynamic_address);
	set_at<32, 2560>(result, h3_4_rd1_res);
	hw_uint<32>  h3_4_rd2_res = h3_4_rd2_select(h3_3, d0, d1, dynamic_address);
	set_at<64, 2560>(result, h3_4_rd2_res);
	hw_uint<32>  h3_4_rd3_res = h3_4_rd3_select(h3_3, d0, d1, dynamic_address);
	set_at<96, 2560>(result, h3_4_rd3_res);
	hw_uint<32>  h3_4_rd4_res = h3_4_rd4_select(h3_3, d0, d1, dynamic_address);
	set_at<128, 2560>(result, h3_4_rd4_res);
	hw_uint<32>  h3_4_rd5_res = h3_4_rd5_select(h3_3, d0, d1, dynamic_address);
	set_at<160, 2560>(result, h3_4_rd5_res);
	hw_uint<32>  h3_4_rd6_res = h3_4_rd6_select(h3_3, d0, d1, dynamic_address);
	set_at<192, 2560>(result, h3_4_rd6_res);
	hw_uint<32>  h3_4_rd7_res = h3_4_rd7_select(h3_3, d0, d1, dynamic_address);
	set_at<224, 2560>(result, h3_4_rd7_res);
	hw_uint<32>  h3_4_rd8_res = h3_4_rd8_select(h3_3, d0, d1, dynamic_address);
	set_at<256, 2560>(result, h3_4_rd8_res);
	hw_uint<32>  h3_4_rd9_res = h3_4_rd9_select(h3_3, d0, d1, dynamic_address);
	set_at<288, 2560>(result, h3_4_rd9_res);
	hw_uint<32>  h3_4_rd10_res = h3_4_rd10_select(h3_3, d0, d1, dynamic_address);
	set_at<320, 2560>(result, h3_4_rd10_res);
	hw_uint<32>  h3_4_rd11_res = h3_4_rd11_select(h3_3, d0, d1, dynamic_address);
	set_at<352, 2560>(result, h3_4_rd11_res);
	hw_uint<32>  h3_4_rd12_res = h3_4_rd12_select(h3_3, d0, d1, dynamic_address);
	set_at<384, 2560>(result, h3_4_rd12_res);
	hw_uint<32>  h3_4_rd13_res = h3_4_rd13_select(h3_3, d0, d1, dynamic_address);
	set_at<416, 2560>(result, h3_4_rd13_res);
	hw_uint<32>  h3_4_rd14_res = h3_4_rd14_select(h3_3, d0, d1, dynamic_address);
	set_at<448, 2560>(result, h3_4_rd14_res);
	hw_uint<32>  h3_4_rd15_res = h3_4_rd15_select(h3_3, d0, d1, dynamic_address);
	set_at<480, 2560>(result, h3_4_rd15_res);
	hw_uint<32>  h3_4_rd16_res = h3_4_rd16_select(h3_3, d0, d1, dynamic_address);
	set_at<512, 2560>(result, h3_4_rd16_res);
	hw_uint<32>  h3_4_rd17_res = h3_4_rd17_select(h3_3, d0, d1, dynamic_address);
	set_at<544, 2560>(result, h3_4_rd17_res);
	hw_uint<32>  h3_4_rd18_res = h3_4_rd18_select(h3_3, d0, d1, dynamic_address);
	set_at<576, 2560>(result, h3_4_rd18_res);
	hw_uint<32>  h3_4_rd19_res = h3_4_rd19_select(h3_3, d0, d1, dynamic_address);
	set_at<608, 2560>(result, h3_4_rd19_res);
	hw_uint<32>  h3_4_rd20_res = h3_4_rd20_select(h3_3, d0, d1, dynamic_address);
	set_at<640, 2560>(result, h3_4_rd20_res);
	hw_uint<32>  h3_4_rd21_res = h3_4_rd21_select(h3_3, d0, d1, dynamic_address);
	set_at<672, 2560>(result, h3_4_rd21_res);
	hw_uint<32>  h3_4_rd22_res = h3_4_rd22_select(h3_3, d0, d1, dynamic_address);
	set_at<704, 2560>(result, h3_4_rd22_res);
	hw_uint<32>  h3_4_rd23_res = h3_4_rd23_select(h3_3, d0, d1, dynamic_address);
	set_at<736, 2560>(result, h3_4_rd23_res);
	hw_uint<32>  h3_4_rd24_res = h3_4_rd24_select(h3_3, d0, d1, dynamic_address);
	set_at<768, 2560>(result, h3_4_rd24_res);
	hw_uint<32>  h3_4_rd25_res = h3_4_rd25_select(h3_3, d0, d1, dynamic_address);
	set_at<800, 2560>(result, h3_4_rd25_res);
	hw_uint<32>  h3_4_rd26_res = h3_4_rd26_select(h3_3, d0, d1, dynamic_address);
	set_at<832, 2560>(result, h3_4_rd26_res);
	hw_uint<32>  h3_4_rd27_res = h3_4_rd27_select(h3_3, d0, d1, dynamic_address);
	set_at<864, 2560>(result, h3_4_rd27_res);
	hw_uint<32>  h3_4_rd28_res = h3_4_rd28_select(h3_3, d0, d1, dynamic_address);
	set_at<896, 2560>(result, h3_4_rd28_res);
	hw_uint<32>  h3_4_rd29_res = h3_4_rd29_select(h3_3, d0, d1, dynamic_address);
	set_at<928, 2560>(result, h3_4_rd29_res);
	hw_uint<32>  h3_4_rd30_res = h3_4_rd30_select(h3_3, d0, d1, dynamic_address);
	set_at<960, 2560>(result, h3_4_rd30_res);
	hw_uint<32>  h3_4_rd31_res = h3_4_rd31_select(h3_3, d0, d1, dynamic_address);
	set_at<992, 2560>(result, h3_4_rd31_res);
	hw_uint<32>  h3_4_rd32_res = h3_4_rd32_select(h3_3, d0, d1, dynamic_address);
	set_at<1024, 2560>(result, h3_4_rd32_res);
	hw_uint<32>  h3_4_rd33_res = h3_4_rd33_select(h3_3, d0, d1, dynamic_address);
	set_at<1056, 2560>(result, h3_4_rd33_res);
	hw_uint<32>  h3_4_rd34_res = h3_4_rd34_select(h3_3, d0, d1, dynamic_address);
	set_at<1088, 2560>(result, h3_4_rd34_res);
	hw_uint<32>  h3_4_rd35_res = h3_4_rd35_select(h3_3, d0, d1, dynamic_address);
	set_at<1120, 2560>(result, h3_4_rd35_res);
	hw_uint<32>  h3_4_rd36_res = h3_4_rd36_select(h3_3, d0, d1, dynamic_address);
	set_at<1152, 2560>(result, h3_4_rd36_res);
	hw_uint<32>  h3_4_rd37_res = h3_4_rd37_select(h3_3, d0, d1, dynamic_address);
	set_at<1184, 2560>(result, h3_4_rd37_res);
	hw_uint<32>  h3_4_rd38_res = h3_4_rd38_select(h3_3, d0, d1, dynamic_address);
	set_at<1216, 2560>(result, h3_4_rd38_res);
	hw_uint<32>  h3_4_rd39_res = h3_4_rd39_select(h3_3, d0, d1, dynamic_address);
	set_at<1248, 2560>(result, h3_4_rd39_res);
	hw_uint<32>  h3_4_rd40_res = h3_4_rd40_select(h3_3, d0, d1, dynamic_address);
	set_at<1280, 2560>(result, h3_4_rd40_res);
	hw_uint<32>  h3_4_rd41_res = h3_4_rd41_select(h3_3, d0, d1, dynamic_address);
	set_at<1312, 2560>(result, h3_4_rd41_res);
	hw_uint<32>  h3_4_rd42_res = h3_4_rd42_select(h3_3, d0, d1, dynamic_address);
	set_at<1344, 2560>(result, h3_4_rd42_res);
	hw_uint<32>  h3_4_rd43_res = h3_4_rd43_select(h3_3, d0, d1, dynamic_address);
	set_at<1376, 2560>(result, h3_4_rd43_res);
	hw_uint<32>  h3_4_rd44_res = h3_4_rd44_select(h3_3, d0, d1, dynamic_address);
	set_at<1408, 2560>(result, h3_4_rd44_res);
	hw_uint<32>  h3_4_rd45_res = h3_4_rd45_select(h3_3, d0, d1, dynamic_address);
	set_at<1440, 2560>(result, h3_4_rd45_res);
	hw_uint<32>  h3_4_rd46_res = h3_4_rd46_select(h3_3, d0, d1, dynamic_address);
	set_at<1472, 2560>(result, h3_4_rd46_res);
	hw_uint<32>  h3_4_rd47_res = h3_4_rd47_select(h3_3, d0, d1, dynamic_address);
	set_at<1504, 2560>(result, h3_4_rd47_res);
	hw_uint<32>  h3_4_rd48_res = h3_4_rd48_select(h3_3, d0, d1, dynamic_address);
	set_at<1536, 2560>(result, h3_4_rd48_res);
	hw_uint<32>  h3_4_rd49_res = h3_4_rd49_select(h3_3, d0, d1, dynamic_address);
	set_at<1568, 2560>(result, h3_4_rd49_res);
	hw_uint<32>  h3_4_rd50_res = h3_4_rd50_select(h3_3, d0, d1, dynamic_address);
	set_at<1600, 2560>(result, h3_4_rd50_res);
	hw_uint<32>  h3_4_rd51_res = h3_4_rd51_select(h3_3, d0, d1, dynamic_address);
	set_at<1632, 2560>(result, h3_4_rd51_res);
	hw_uint<32>  h3_4_rd52_res = h3_4_rd52_select(h3_3, d0, d1, dynamic_address);
	set_at<1664, 2560>(result, h3_4_rd52_res);
	hw_uint<32>  h3_4_rd53_res = h3_4_rd53_select(h3_3, d0, d1, dynamic_address);
	set_at<1696, 2560>(result, h3_4_rd53_res);
	hw_uint<32>  h3_4_rd54_res = h3_4_rd54_select(h3_3, d0, d1, dynamic_address);
	set_at<1728, 2560>(result, h3_4_rd54_res);
	hw_uint<32>  h3_4_rd55_res = h3_4_rd55_select(h3_3, d0, d1, dynamic_address);
	set_at<1760, 2560>(result, h3_4_rd55_res);
	hw_uint<32>  h3_4_rd56_res = h3_4_rd56_select(h3_3, d0, d1, dynamic_address);
	set_at<1792, 2560>(result, h3_4_rd56_res);
	hw_uint<32>  h3_4_rd57_res = h3_4_rd57_select(h3_3, d0, d1, dynamic_address);
	set_at<1824, 2560>(result, h3_4_rd57_res);
	hw_uint<32>  h3_4_rd58_res = h3_4_rd58_select(h3_3, d0, d1, dynamic_address);
	set_at<1856, 2560>(result, h3_4_rd58_res);
	hw_uint<32>  h3_4_rd59_res = h3_4_rd59_select(h3_3, d0, d1, dynamic_address);
	set_at<1888, 2560>(result, h3_4_rd59_res);
	hw_uint<32>  h3_4_rd60_res = h3_4_rd60_select(h3_3, d0, d1, dynamic_address);
	set_at<1920, 2560>(result, h3_4_rd60_res);
	hw_uint<32>  h3_4_rd61_res = h3_4_rd61_select(h3_3, d0, d1, dynamic_address);
	set_at<1952, 2560>(result, h3_4_rd61_res);
	hw_uint<32>  h3_4_rd62_res = h3_4_rd62_select(h3_3, d0, d1, dynamic_address);
	set_at<1984, 2560>(result, h3_4_rd62_res);
	hw_uint<32>  h3_4_rd63_res = h3_4_rd63_select(h3_3, d0, d1, dynamic_address);
	set_at<2016, 2560>(result, h3_4_rd63_res);
	hw_uint<32>  h3_4_rd64_res = h3_4_rd64_select(h3_3, d0, d1, dynamic_address);
	set_at<2048, 2560>(result, h3_4_rd64_res);
	hw_uint<32>  h3_4_rd65_res = h3_4_rd65_select(h3_3, d0, d1, dynamic_address);
	set_at<2080, 2560>(result, h3_4_rd65_res);
	hw_uint<32>  h3_4_rd66_res = h3_4_rd66_select(h3_3, d0, d1, dynamic_address);
	set_at<2112, 2560>(result, h3_4_rd66_res);
	hw_uint<32>  h3_4_rd67_res = h3_4_rd67_select(h3_3, d0, d1, dynamic_address);
	set_at<2144, 2560>(result, h3_4_rd67_res);
	hw_uint<32>  h3_4_rd68_res = h3_4_rd68_select(h3_3, d0, d1, dynamic_address);
	set_at<2176, 2560>(result, h3_4_rd68_res);
	hw_uint<32>  h3_4_rd69_res = h3_4_rd69_select(h3_3, d0, d1, dynamic_address);
	set_at<2208, 2560>(result, h3_4_rd69_res);
	hw_uint<32>  h3_4_rd70_res = h3_4_rd70_select(h3_3, d0, d1, dynamic_address);
	set_at<2240, 2560>(result, h3_4_rd70_res);
	hw_uint<32>  h3_4_rd71_res = h3_4_rd71_select(h3_3, d0, d1, dynamic_address);
	set_at<2272, 2560>(result, h3_4_rd71_res);
	hw_uint<32>  h3_4_rd72_res = h3_4_rd72_select(h3_3, d0, d1, dynamic_address);
	set_at<2304, 2560>(result, h3_4_rd72_res);
	hw_uint<32>  h3_4_rd73_res = h3_4_rd73_select(h3_3, d0, d1, dynamic_address);
	set_at<2336, 2560>(result, h3_4_rd73_res);
	hw_uint<32>  h3_4_rd74_res = h3_4_rd74_select(h3_3, d0, d1, dynamic_address);
	set_at<2368, 2560>(result, h3_4_rd74_res);
	hw_uint<32>  h3_4_rd75_res = h3_4_rd75_select(h3_3, d0, d1, dynamic_address);
	set_at<2400, 2560>(result, h3_4_rd75_res);
	hw_uint<32>  h3_4_rd76_res = h3_4_rd76_select(h3_3, d0, d1, dynamic_address);
	set_at<2432, 2560>(result, h3_4_rd76_res);
	hw_uint<32>  h3_4_rd77_res = h3_4_rd77_select(h3_3, d0, d1, dynamic_address);
	set_at<2464, 2560>(result, h3_4_rd77_res);
	hw_uint<32>  h3_4_rd78_res = h3_4_rd78_select(h3_3, d0, d1, dynamic_address);
	set_at<2496, 2560>(result, h3_4_rd78_res);
	hw_uint<32>  h3_4_rd79_res = h3_4_rd79_select(h3_3, d0, d1, dynamic_address);
	set_at<2528, 2560>(result, h3_4_rd79_res);
	return result;
}

struct h3_4_h3_4_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-64, 1088], [-5, 1027]}
	// Capacity: 150
	// # of read delays: 5
  // 0, 1, 74, 75, 149
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 72> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 73> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_73() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_74() {
		return f4;
	}

	inline hw_uint<32>  peek_75() {
		return f6;
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_149() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 72
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 72 reading from capacity: 1
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
	// RAM Box: {[-63, 1073], [-5, 1028]}
	// Capacity: 150
	// # of read delays: 4
  // 0, 1, 75, 149
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 73> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 73> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_75() {
		return f4;
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_149() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write10_merged_banks_5_cache {
	// RAM Box: {[-54, 1082], [-5, 1028]}
	// Capacity: 150
	// # of read delays: 4
  // 0, 1, 75, 149
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 73> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 73> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_75() {
		return f4;
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_149() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write11_merged_banks_5_cache {
	// RAM Box: {[-53, 1083], [-5, 1028]}
	// Capacity: 150
	// # of read delays: 4
  // 0, 1, 75, 149
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 73> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 73> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_75() {
		return f4;
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_149() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write12_merged_banks_5_cache {
	// RAM Box: {[-52, 1084], [-5, 1028]}
	// Capacity: 150
	// # of read delays: 4
  // 0, 1, 75, 149
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 73> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 73> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_75() {
		return f4;
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_149() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write13_merged_banks_5_cache {
	// RAM Box: {[-51, 1085], [-5, 1028]}
	// Capacity: 150
	// # of read delays: 4
  // 0, 1, 75, 149
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 73> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 73> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_75() {
		return f4;
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_149() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write14_merged_banks_5_cache {
	// RAM Box: {[-50, 1086], [-5, 1028]}
	// Capacity: 150
	// # of read delays: 4
  // 0, 1, 75, 149
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 73> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 73> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_75() {
		return f4;
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_149() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write15_merged_banks_5_cache {
	// RAM Box: {[-65, 1087], [-4, 1028]}
	// Capacity: 150
	// # of read delays: 5
  // 0, 1, 75, 76, 149
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 73> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 72> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_75() {
		return f4;
	}

	inline hw_uint<32>  peek_76() {
		return f6;
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_149() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 72
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 72 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
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
	// RAM Box: {[-62, 1074], [-5, 1028]}
	// Capacity: 150
	// # of read delays: 4
  // 0, 1, 75, 149
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 73> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 73> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_75() {
		return f4;
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_149() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
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
	// RAM Box: {[-61, 1075], [-5, 1028]}
	// Capacity: 150
	// # of read delays: 4
  // 0, 1, 75, 149
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 73> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 73> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_75() {
		return f4;
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_149() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write4_merged_banks_5_cache {
	// RAM Box: {[-60, 1076], [-5, 1028]}
	// Capacity: 150
	// # of read delays: 4
  // 0, 1, 75, 149
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 73> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 73> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_75() {
		return f4;
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_149() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write5_merged_banks_5_cache {
	// RAM Box: {[-59, 1077], [-5, 1028]}
	// Capacity: 150
	// # of read delays: 4
  // 0, 1, 75, 149
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 73> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 73> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_75() {
		return f4;
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_149() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write6_merged_banks_5_cache {
	// RAM Box: {[-58, 1078], [-5, 1028]}
	// Capacity: 150
	// # of read delays: 4
  // 0, 1, 75, 149
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 73> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 73> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_75() {
		return f4;
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_149() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write7_merged_banks_5_cache {
	// RAM Box: {[-57, 1079], [-5, 1028]}
	// Capacity: 150
	// # of read delays: 4
  // 0, 1, 75, 149
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 73> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 73> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_75() {
		return f4;
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_149() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write8_merged_banks_5_cache {
	// RAM Box: {[-56, 1080], [-5, 1028]}
	// Capacity: 150
	// # of read delays: 4
  // 0, 1, 75, 149
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 73> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 73> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_75() {
		return f4;
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_149() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_4_h3_4_update_0_write9_merged_banks_5_cache {
	// RAM Box: {[-55, 1081], [-5, 1028]}
	// Capacity: 150
	// # of read delays: 4
  // 0, 1, 75, 149
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 73> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 73> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_74() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_75() {
		return f4;
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_149() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 73
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 73 reading from capacity: 1
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
  // # of banks: 16
  h3_4_h3_4_update_0_write0_merged_banks_5_cache h3_4_h3_4_update_0_write0_merged_banks_5;
  h3_4_h3_4_update_0_write1_merged_banks_5_cache h3_4_h3_4_update_0_write1_merged_banks_5;
  h3_4_h3_4_update_0_write10_merged_banks_5_cache h3_4_h3_4_update_0_write10_merged_banks_5;
  h3_4_h3_4_update_0_write11_merged_banks_5_cache h3_4_h3_4_update_0_write11_merged_banks_5;
  h3_4_h3_4_update_0_write12_merged_banks_5_cache h3_4_h3_4_update_0_write12_merged_banks_5;
  h3_4_h3_4_update_0_write13_merged_banks_5_cache h3_4_h3_4_update_0_write13_merged_banks_5;
  h3_4_h3_4_update_0_write14_merged_banks_5_cache h3_4_h3_4_update_0_write14_merged_banks_5;
  h3_4_h3_4_update_0_write15_merged_banks_5_cache h3_4_h3_4_update_0_write15_merged_banks_5;
  h3_4_h3_4_update_0_write2_merged_banks_5_cache h3_4_h3_4_update_0_write2_merged_banks_5;
  h3_4_h3_4_update_0_write3_merged_banks_5_cache h3_4_h3_4_update_0_write3_merged_banks_5;
  h3_4_h3_4_update_0_write4_merged_banks_5_cache h3_4_h3_4_update_0_write4_merged_banks_5;
  h3_4_h3_4_update_0_write5_merged_banks_5_cache h3_4_h3_4_update_0_write5_merged_banks_5;
  h3_4_h3_4_update_0_write6_merged_banks_5_cache h3_4_h3_4_update_0_write6_merged_banks_5;
  h3_4_h3_4_update_0_write7_merged_banks_5_cache h3_4_h3_4_update_0_write7_merged_banks_5;
  h3_4_h3_4_update_0_write8_merged_banks_5_cache h3_4_h3_4_update_0_write8_merged_banks_5;
  h3_4_h3_4_update_0_write9_merged_banks_5_cache h3_4_h3_4_update_0_write9_merged_banks_5;
};



inline void h3_4_h3_4_update_0_write0_write(hw_uint<32> & h3_4_h3_4_update_0_write0, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.push(h3_4_h3_4_update_0_write0);
}

inline void h3_4_h3_4_update_0_write1_write(hw_uint<32> & h3_4_h3_4_update_0_write1, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write1_merged_banks_5.push(h3_4_h3_4_update_0_write1);
}

inline void h3_4_h3_4_update_0_write10_write(hw_uint<32> & h3_4_h3_4_update_0_write10, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write10_merged_banks_5.push(h3_4_h3_4_update_0_write10);
}

inline void h3_4_h3_4_update_0_write11_write(hw_uint<32> & h3_4_h3_4_update_0_write11, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write11_merged_banks_5.push(h3_4_h3_4_update_0_write11);
}

inline void h3_4_h3_4_update_0_write12_write(hw_uint<32> & h3_4_h3_4_update_0_write12, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write12_merged_banks_5.push(h3_4_h3_4_update_0_write12);
}

inline void h3_4_h3_4_update_0_write13_write(hw_uint<32> & h3_4_h3_4_update_0_write13, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write13_merged_banks_5.push(h3_4_h3_4_update_0_write13);
}

inline void h3_4_h3_4_update_0_write14_write(hw_uint<32> & h3_4_h3_4_update_0_write14, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write14_merged_banks_5.push(h3_4_h3_4_update_0_write14);
}

inline void h3_4_h3_4_update_0_write15_write(hw_uint<32> & h3_4_h3_4_update_0_write15, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write15_merged_banks_5.push(h3_4_h3_4_update_0_write15);
}

inline void h3_4_h3_4_update_0_write2_write(hw_uint<32> & h3_4_h3_4_update_0_write2, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write2_merged_banks_5.push(h3_4_h3_4_update_0_write2);
}

inline void h3_4_h3_4_update_0_write3_write(hw_uint<32> & h3_4_h3_4_update_0_write3, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write3_merged_banks_5.push(h3_4_h3_4_update_0_write3);
}

inline void h3_4_h3_4_update_0_write4_write(hw_uint<32> & h3_4_h3_4_update_0_write4, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write4_merged_banks_5.push(h3_4_h3_4_update_0_write4);
}

inline void h3_4_h3_4_update_0_write5_write(hw_uint<32> & h3_4_h3_4_update_0_write5, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write5_merged_banks_5.push(h3_4_h3_4_update_0_write5);
}

inline void h3_4_h3_4_update_0_write6_write(hw_uint<32> & h3_4_h3_4_update_0_write6, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write6_merged_banks_5.push(h3_4_h3_4_update_0_write6);
}

inline void h3_4_h3_4_update_0_write7_write(hw_uint<32> & h3_4_h3_4_update_0_write7, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write7_merged_banks_5.push(h3_4_h3_4_update_0_write7);
}

inline void h3_4_h3_4_update_0_write8_write(hw_uint<32> & h3_4_h3_4_update_0_write8, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write8_merged_banks_5.push(h3_4_h3_4_update_0_write8);
}

inline void h3_4_h3_4_update_0_write9_write(hw_uint<32> & h3_4_h3_4_update_0_write9, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  h3_4.h3_4_h3_4_update_0_write9_merged_banks_5.push(h3_4_h3_4_update_0_write9);
}

inline hw_uint<32>  h3_5_rd0_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd0 read pattern: { h3_5_update_0[d0, d1] -> h3_4[-1 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write15 = h3_4.h3_4_h3_4_update_0_write15_merged_banks_5.peek_76();
  return value_h3_4_h3_4_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_5_rd1_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd1 read pattern: { h3_5_update_0[d0, d1] -> h3_4[16d0, -1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.peek_149();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd10_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd10 read pattern: { h3_5_update_0[d0, d1] -> h3_4[1 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd11_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd11 read pattern: { h3_5_update_0[d0, d1] -> h3_4[2 + 16d0, -1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_5.peek_149();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_5_rd12_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd12 read pattern: { h3_5_update_0[d0, d1] -> h3_4[2 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_5_rd13_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd13 read pattern: { h3_5_update_0[d0, d1] -> h3_4[2 + 16d0, 1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_5_rd14_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd14 read pattern: { h3_5_update_0[d0, d1] -> h3_4[3 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd15_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd15 read pattern: { h3_5_update_0[d0, d1] -> h3_4[2 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_5_rd16_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd16 read pattern: { h3_5_update_0[d0, d1] -> h3_4[3 + 16d0, -1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_5.peek_149();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd17_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd17 read pattern: { h3_5_update_0[d0, d1] -> h3_4[3 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd18_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd18 read pattern: { h3_5_update_0[d0, d1] -> h3_4[3 + 16d0, 1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd19_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd19 read pattern: { h3_5_update_0[d0, d1] -> h3_4[4 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write4 = h3_4.h3_4_h3_4_update_0_write4_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_5_rd2_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd2 read pattern: { h3_5_update_0[d0, d1] -> h3_4[16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd20_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd20 read pattern: { h3_5_update_0[d0, d1] -> h3_4[3 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd21_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd21 read pattern: { h3_5_update_0[d0, d1] -> h3_4[4 + 16d0, -1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write4 = h3_4.h3_4_h3_4_update_0_write4_merged_banks_5.peek_149();
  return value_h3_4_h3_4_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_5_rd22_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd22 read pattern: { h3_5_update_0[d0, d1] -> h3_4[4 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write4 = h3_4.h3_4_h3_4_update_0_write4_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_5_rd23_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd23 read pattern: { h3_5_update_0[d0, d1] -> h3_4[4 + 16d0, 1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write4 = h3_4.h3_4_h3_4_update_0_write4_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_5_rd24_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd24 read pattern: { h3_5_update_0[d0, d1] -> h3_4[5 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write5 = h3_4.h3_4_h3_4_update_0_write5_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_5_rd25_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd25 read pattern: { h3_5_update_0[d0, d1] -> h3_4[4 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write4 = h3_4.h3_4_h3_4_update_0_write4_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_5_rd26_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd26 read pattern: { h3_5_update_0[d0, d1] -> h3_4[5 + 16d0, -1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write5 = h3_4.h3_4_h3_4_update_0_write5_merged_banks_5.peek_149();
  return value_h3_4_h3_4_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_5_rd27_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd27 read pattern: { h3_5_update_0[d0, d1] -> h3_4[5 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write5 = h3_4.h3_4_h3_4_update_0_write5_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_5_rd28_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd28 read pattern: { h3_5_update_0[d0, d1] -> h3_4[5 + 16d0, 1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write5 = h3_4.h3_4_h3_4_update_0_write5_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_5_rd29_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd29 read pattern: { h3_5_update_0[d0, d1] -> h3_4[6 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write6 = h3_4.h3_4_h3_4_update_0_write6_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_5_rd3_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd3 read pattern: { h3_5_update_0[d0, d1] -> h3_4[16d0, 1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd30_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd30 read pattern: { h3_5_update_0[d0, d1] -> h3_4[5 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write5 = h3_4.h3_4_h3_4_update_0_write5_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_5_rd31_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd31 read pattern: { h3_5_update_0[d0, d1] -> h3_4[6 + 16d0, -1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write6 = h3_4.h3_4_h3_4_update_0_write6_merged_banks_5.peek_149();
  return value_h3_4_h3_4_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_5_rd32_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd32 read pattern: { h3_5_update_0[d0, d1] -> h3_4[6 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write6 = h3_4.h3_4_h3_4_update_0_write6_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_5_rd33_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd33 read pattern: { h3_5_update_0[d0, d1] -> h3_4[6 + 16d0, 1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write6 = h3_4.h3_4_h3_4_update_0_write6_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_5_rd34_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd34 read pattern: { h3_5_update_0[d0, d1] -> h3_4[7 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write7 = h3_4.h3_4_h3_4_update_0_write7_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_5_rd35_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd35 read pattern: { h3_5_update_0[d0, d1] -> h3_4[6 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write6 = h3_4.h3_4_h3_4_update_0_write6_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_5_rd36_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd36 read pattern: { h3_5_update_0[d0, d1] -> h3_4[7 + 16d0, -1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write7 = h3_4.h3_4_h3_4_update_0_write7_merged_banks_5.peek_149();
  return value_h3_4_h3_4_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_5_rd37_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd37 read pattern: { h3_5_update_0[d0, d1] -> h3_4[7 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write7 = h3_4.h3_4_h3_4_update_0_write7_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_5_rd38_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd38 read pattern: { h3_5_update_0[d0, d1] -> h3_4[7 + 16d0, 1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write7 = h3_4.h3_4_h3_4_update_0_write7_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_5_rd39_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd39 read pattern: { h3_5_update_0[d0, d1] -> h3_4[8 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write8 = h3_4.h3_4_h3_4_update_0_write8_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_5_rd4_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd4 read pattern: { h3_5_update_0[d0, d1] -> h3_4[1 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd40_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd40 read pattern: { h3_5_update_0[d0, d1] -> h3_4[7 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write7 = h3_4.h3_4_h3_4_update_0_write7_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_5_rd41_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd41 read pattern: { h3_5_update_0[d0, d1] -> h3_4[8 + 16d0, -1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write8 = h3_4.h3_4_h3_4_update_0_write8_merged_banks_5.peek_149();
  return value_h3_4_h3_4_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_5_rd42_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd42 read pattern: { h3_5_update_0[d0, d1] -> h3_4[8 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write8 = h3_4.h3_4_h3_4_update_0_write8_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_5_rd43_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd43 read pattern: { h3_5_update_0[d0, d1] -> h3_4[8 + 16d0, 1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write8 = h3_4.h3_4_h3_4_update_0_write8_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_5_rd44_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd44 read pattern: { h3_5_update_0[d0, d1] -> h3_4[9 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write9 = h3_4.h3_4_h3_4_update_0_write9_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_5_rd45_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd45 read pattern: { h3_5_update_0[d0, d1] -> h3_4[8 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write8 = h3_4.h3_4_h3_4_update_0_write8_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_5_rd46_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd46 read pattern: { h3_5_update_0[d0, d1] -> h3_4[9 + 16d0, -1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write9 = h3_4.h3_4_h3_4_update_0_write9_merged_banks_5.peek_149();
  return value_h3_4_h3_4_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_5_rd47_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd47 read pattern: { h3_5_update_0[d0, d1] -> h3_4[9 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write9 = h3_4.h3_4_h3_4_update_0_write9_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_5_rd48_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd48 read pattern: { h3_5_update_0[d0, d1] -> h3_4[9 + 16d0, 1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write9 = h3_4.h3_4_h3_4_update_0_write9_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_5_rd49_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd49 read pattern: { h3_5_update_0[d0, d1] -> h3_4[10 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write10 = h3_4.h3_4_h3_4_update_0_write10_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_5_rd5_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd5 read pattern: { h3_5_update_0[d0, d1] -> h3_4[16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd50_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd50 read pattern: { h3_5_update_0[d0, d1] -> h3_4[9 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write9 = h3_4.h3_4_h3_4_update_0_write9_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_5_rd51_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd51 read pattern: { h3_5_update_0[d0, d1] -> h3_4[10 + 16d0, -1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write10 = h3_4.h3_4_h3_4_update_0_write10_merged_banks_5.peek_149();
  return value_h3_4_h3_4_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_5_rd52_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd52 read pattern: { h3_5_update_0[d0, d1] -> h3_4[10 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write10 = h3_4.h3_4_h3_4_update_0_write10_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_5_rd53_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd53 read pattern: { h3_5_update_0[d0, d1] -> h3_4[10 + 16d0, 1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write10 = h3_4.h3_4_h3_4_update_0_write10_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_5_rd54_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd54 read pattern: { h3_5_update_0[d0, d1] -> h3_4[11 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write11 = h3_4.h3_4_h3_4_update_0_write11_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_5_rd55_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd55 read pattern: { h3_5_update_0[d0, d1] -> h3_4[10 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write10 = h3_4.h3_4_h3_4_update_0_write10_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_5_rd56_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd56 read pattern: { h3_5_update_0[d0, d1] -> h3_4[11 + 16d0, -1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write11 = h3_4.h3_4_h3_4_update_0_write11_merged_banks_5.peek_149();
  return value_h3_4_h3_4_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_5_rd57_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd57 read pattern: { h3_5_update_0[d0, d1] -> h3_4[11 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write11 = h3_4.h3_4_h3_4_update_0_write11_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_5_rd58_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd58 read pattern: { h3_5_update_0[d0, d1] -> h3_4[11 + 16d0, 1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write11 = h3_4.h3_4_h3_4_update_0_write11_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_5_rd59_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd59 read pattern: { h3_5_update_0[d0, d1] -> h3_4[12 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write12 = h3_4.h3_4_h3_4_update_0_write12_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_5_rd6_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd6 read pattern: { h3_5_update_0[d0, d1] -> h3_4[1 + 16d0, -1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_5.peek_149();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd60_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd60 read pattern: { h3_5_update_0[d0, d1] -> h3_4[11 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write11 = h3_4.h3_4_h3_4_update_0_write11_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_5_rd61_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd61 read pattern: { h3_5_update_0[d0, d1] -> h3_4[12 + 16d0, -1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write12 = h3_4.h3_4_h3_4_update_0_write12_merged_banks_5.peek_149();
  return value_h3_4_h3_4_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_5_rd62_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd62 read pattern: { h3_5_update_0[d0, d1] -> h3_4[12 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write12 = h3_4.h3_4_h3_4_update_0_write12_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_5_rd63_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd63 read pattern: { h3_5_update_0[d0, d1] -> h3_4[12 + 16d0, 1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write12 = h3_4.h3_4_h3_4_update_0_write12_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_5_rd64_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd64 read pattern: { h3_5_update_0[d0, d1] -> h3_4[13 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write13 = h3_4.h3_4_h3_4_update_0_write13_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_5_rd65_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd65 read pattern: { h3_5_update_0[d0, d1] -> h3_4[12 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write12 = h3_4.h3_4_h3_4_update_0_write12_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_5_rd66_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd66 read pattern: { h3_5_update_0[d0, d1] -> h3_4[13 + 16d0, -1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write13 = h3_4.h3_4_h3_4_update_0_write13_merged_banks_5.peek_149();
  return value_h3_4_h3_4_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_5_rd67_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd67 read pattern: { h3_5_update_0[d0, d1] -> h3_4[13 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write13 = h3_4.h3_4_h3_4_update_0_write13_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_5_rd68_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd68 read pattern: { h3_5_update_0[d0, d1] -> h3_4[13 + 16d0, 1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write13 = h3_4.h3_4_h3_4_update_0_write13_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_5_rd69_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd69 read pattern: { h3_5_update_0[d0, d1] -> h3_4[14 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write14 = h3_4.h3_4_h3_4_update_0_write14_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_5_rd7_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd7 read pattern: { h3_5_update_0[d0, d1] -> h3_4[1 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd70_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd70 read pattern: { h3_5_update_0[d0, d1] -> h3_4[13 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write13 = h3_4.h3_4_h3_4_update_0_write13_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_5_rd71_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd71 read pattern: { h3_5_update_0[d0, d1] -> h3_4[14 + 16d0, -1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write14 = h3_4.h3_4_h3_4_update_0_write14_merged_banks_5.peek_149();
  return value_h3_4_h3_4_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_5_rd72_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd72 read pattern: { h3_5_update_0[d0, d1] -> h3_4[14 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write14 = h3_4.h3_4_h3_4_update_0_write14_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_5_rd73_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd73 read pattern: { h3_5_update_0[d0, d1] -> h3_4[14 + 16d0, 1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write14 = h3_4.h3_4_h3_4_update_0_write14_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_5_rd74_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd74 read pattern: { h3_5_update_0[d0, d1] -> h3_4[15 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write15 = h3_4.h3_4_h3_4_update_0_write15_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_5_rd75_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd75 read pattern: { h3_5_update_0[d0, d1] -> h3_4[14 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write14 = h3_4.h3_4_h3_4_update_0_write14_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_5_rd76_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd76 read pattern: { h3_5_update_0[d0, d1] -> h3_4[15 + 16d0, -1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write15 = h3_4.h3_4_h3_4_update_0_write15_merged_banks_5.peek_149();
  return value_h3_4_h3_4_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_5_rd77_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd77 read pattern: { h3_5_update_0[d0, d1] -> h3_4[15 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write15 = h3_4.h3_4_h3_4_update_0_write15_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_5_rd78_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd78 read pattern: { h3_5_update_0[d0, d1] -> h3_4[15 + 16d0, 1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write15 = h3_4.h3_4_h3_4_update_0_write15_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_5_rd79_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd79 read pattern: { h3_5_update_0[d0, d1] -> h3_4[16 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.peek_74();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd8_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd8 read pattern: { h3_5_update_0[d0, d1] -> h3_4[1 + 16d0, 1 + d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd9_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd9 read pattern: { h3_5_update_0[d0, d1] -> h3_4[2 + 16d0, d1] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_5.peek_75();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

// # of bundles = 2
// h3_4_update_0_write
//	h3_4_h3_4_update_0_write0
//	h3_4_h3_4_update_0_write1
//	h3_4_h3_4_update_0_write2
//	h3_4_h3_4_update_0_write3
//	h3_4_h3_4_update_0_write4
//	h3_4_h3_4_update_0_write5
//	h3_4_h3_4_update_0_write6
//	h3_4_h3_4_update_0_write7
//	h3_4_h3_4_update_0_write8
//	h3_4_h3_4_update_0_write9
//	h3_4_h3_4_update_0_write10
//	h3_4_h3_4_update_0_write11
//	h3_4_h3_4_update_0_write12
//	h3_4_h3_4_update_0_write13
//	h3_4_h3_4_update_0_write14
//	h3_4_h3_4_update_0_write15
inline void h3_4_h3_4_update_0_write_bundle_write(hw_uint<512>& h3_4_update_0_write, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_4_h3_4_update_0_write0_res = h3_4_update_0_write.extract<0, 31>();
	h3_4_h3_4_update_0_write0_write(h3_4_h3_4_update_0_write0_res, h3_4, d0, d1, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write1_res = h3_4_update_0_write.extract<32, 63>();
	h3_4_h3_4_update_0_write1_write(h3_4_h3_4_update_0_write1_res, h3_4, d0, d1, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write2_res = h3_4_update_0_write.extract<64, 95>();
	h3_4_h3_4_update_0_write2_write(h3_4_h3_4_update_0_write2_res, h3_4, d0, d1, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write3_res = h3_4_update_0_write.extract<96, 127>();
	h3_4_h3_4_update_0_write3_write(h3_4_h3_4_update_0_write3_res, h3_4, d0, d1, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write4_res = h3_4_update_0_write.extract<128, 159>();
	h3_4_h3_4_update_0_write4_write(h3_4_h3_4_update_0_write4_res, h3_4, d0, d1, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write5_res = h3_4_update_0_write.extract<160, 191>();
	h3_4_h3_4_update_0_write5_write(h3_4_h3_4_update_0_write5_res, h3_4, d0, d1, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write6_res = h3_4_update_0_write.extract<192, 223>();
	h3_4_h3_4_update_0_write6_write(h3_4_h3_4_update_0_write6_res, h3_4, d0, d1, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write7_res = h3_4_update_0_write.extract<224, 255>();
	h3_4_h3_4_update_0_write7_write(h3_4_h3_4_update_0_write7_res, h3_4, d0, d1, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write8_res = h3_4_update_0_write.extract<256, 287>();
	h3_4_h3_4_update_0_write8_write(h3_4_h3_4_update_0_write8_res, h3_4, d0, d1, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write9_res = h3_4_update_0_write.extract<288, 319>();
	h3_4_h3_4_update_0_write9_write(h3_4_h3_4_update_0_write9_res, h3_4, d0, d1, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write10_res = h3_4_update_0_write.extract<320, 351>();
	h3_4_h3_4_update_0_write10_write(h3_4_h3_4_update_0_write10_res, h3_4, d0, d1, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write11_res = h3_4_update_0_write.extract<352, 383>();
	h3_4_h3_4_update_0_write11_write(h3_4_h3_4_update_0_write11_res, h3_4, d0, d1, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write12_res = h3_4_update_0_write.extract<384, 415>();
	h3_4_h3_4_update_0_write12_write(h3_4_h3_4_update_0_write12_res, h3_4, d0, d1, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write13_res = h3_4_update_0_write.extract<416, 447>();
	h3_4_h3_4_update_0_write13_write(h3_4_h3_4_update_0_write13_res, h3_4, d0, d1, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write14_res = h3_4_update_0_write.extract<448, 479>();
	h3_4_h3_4_update_0_write14_write(h3_4_h3_4_update_0_write14_res, h3_4, d0, d1, dynamic_address);
	hw_uint<32>  h3_4_h3_4_update_0_write15_res = h3_4_update_0_write.extract<480, 511>();
	h3_4_h3_4_update_0_write15_write(h3_4_h3_4_update_0_write15_res, h3_4, d0, d1, dynamic_address);
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
//	h3_5_rd20
//	h3_5_rd21
//	h3_5_rd22
//	h3_5_rd23
//	h3_5_rd24
//	h3_5_rd25
//	h3_5_rd26
//	h3_5_rd27
//	h3_5_rd28
//	h3_5_rd29
//	h3_5_rd30
//	h3_5_rd31
//	h3_5_rd32
//	h3_5_rd33
//	h3_5_rd34
//	h3_5_rd35
//	h3_5_rd36
//	h3_5_rd37
//	h3_5_rd38
//	h3_5_rd39
//	h3_5_rd40
//	h3_5_rd41
//	h3_5_rd42
//	h3_5_rd43
//	h3_5_rd44
//	h3_5_rd45
//	h3_5_rd46
//	h3_5_rd47
//	h3_5_rd48
//	h3_5_rd49
//	h3_5_rd50
//	h3_5_rd51
//	h3_5_rd52
//	h3_5_rd53
//	h3_5_rd54
//	h3_5_rd55
//	h3_5_rd56
//	h3_5_rd57
//	h3_5_rd58
//	h3_5_rd59
//	h3_5_rd60
//	h3_5_rd61
//	h3_5_rd62
//	h3_5_rd63
//	h3_5_rd64
//	h3_5_rd65
//	h3_5_rd66
//	h3_5_rd67
//	h3_5_rd68
//	h3_5_rd69
//	h3_5_rd70
//	h3_5_rd71
//	h3_5_rd72
//	h3_5_rd73
//	h3_5_rd74
//	h3_5_rd75
//	h3_5_rd76
//	h3_5_rd77
//	h3_5_rd78
//	h3_5_rd79
inline hw_uint<2560> h3_4_h3_5_update_0_read_bundle_read(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 80
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
    // h3_5_rd20
    // h3_5_rd21
    // h3_5_rd22
    // h3_5_rd23
    // h3_5_rd24
    // h3_5_rd25
    // h3_5_rd26
    // h3_5_rd27
    // h3_5_rd28
    // h3_5_rd29
    // h3_5_rd30
    // h3_5_rd31
    // h3_5_rd32
    // h3_5_rd33
    // h3_5_rd34
    // h3_5_rd35
    // h3_5_rd36
    // h3_5_rd37
    // h3_5_rd38
    // h3_5_rd39
    // h3_5_rd40
    // h3_5_rd41
    // h3_5_rd42
    // h3_5_rd43
    // h3_5_rd44
    // h3_5_rd45
    // h3_5_rd46
    // h3_5_rd47
    // h3_5_rd48
    // h3_5_rd49
    // h3_5_rd50
    // h3_5_rd51
    // h3_5_rd52
    // h3_5_rd53
    // h3_5_rd54
    // h3_5_rd55
    // h3_5_rd56
    // h3_5_rd57
    // h3_5_rd58
    // h3_5_rd59
    // h3_5_rd60
    // h3_5_rd61
    // h3_5_rd62
    // h3_5_rd63
    // h3_5_rd64
    // h3_5_rd65
    // h3_5_rd66
    // h3_5_rd67
    // h3_5_rd68
    // h3_5_rd69
    // h3_5_rd70
    // h3_5_rd71
    // h3_5_rd72
    // h3_5_rd73
    // h3_5_rd74
    // h3_5_rd75
    // h3_5_rd76
    // h3_5_rd77
    // h3_5_rd78
    // h3_5_rd79

	hw_uint<2560> result;
	hw_uint<32>  h3_5_rd0_res = h3_5_rd0_select(h3_4, d0, d1, dynamic_address);
	set_at<0, 2560>(result, h3_5_rd0_res);
	hw_uint<32>  h3_5_rd1_res = h3_5_rd1_select(h3_4, d0, d1, dynamic_address);
	set_at<32, 2560>(result, h3_5_rd1_res);
	hw_uint<32>  h3_5_rd2_res = h3_5_rd2_select(h3_4, d0, d1, dynamic_address);
	set_at<64, 2560>(result, h3_5_rd2_res);
	hw_uint<32>  h3_5_rd3_res = h3_5_rd3_select(h3_4, d0, d1, dynamic_address);
	set_at<96, 2560>(result, h3_5_rd3_res);
	hw_uint<32>  h3_5_rd4_res = h3_5_rd4_select(h3_4, d0, d1, dynamic_address);
	set_at<128, 2560>(result, h3_5_rd4_res);
	hw_uint<32>  h3_5_rd5_res = h3_5_rd5_select(h3_4, d0, d1, dynamic_address);
	set_at<160, 2560>(result, h3_5_rd5_res);
	hw_uint<32>  h3_5_rd6_res = h3_5_rd6_select(h3_4, d0, d1, dynamic_address);
	set_at<192, 2560>(result, h3_5_rd6_res);
	hw_uint<32>  h3_5_rd7_res = h3_5_rd7_select(h3_4, d0, d1, dynamic_address);
	set_at<224, 2560>(result, h3_5_rd7_res);
	hw_uint<32>  h3_5_rd8_res = h3_5_rd8_select(h3_4, d0, d1, dynamic_address);
	set_at<256, 2560>(result, h3_5_rd8_res);
	hw_uint<32>  h3_5_rd9_res = h3_5_rd9_select(h3_4, d0, d1, dynamic_address);
	set_at<288, 2560>(result, h3_5_rd9_res);
	hw_uint<32>  h3_5_rd10_res = h3_5_rd10_select(h3_4, d0, d1, dynamic_address);
	set_at<320, 2560>(result, h3_5_rd10_res);
	hw_uint<32>  h3_5_rd11_res = h3_5_rd11_select(h3_4, d0, d1, dynamic_address);
	set_at<352, 2560>(result, h3_5_rd11_res);
	hw_uint<32>  h3_5_rd12_res = h3_5_rd12_select(h3_4, d0, d1, dynamic_address);
	set_at<384, 2560>(result, h3_5_rd12_res);
	hw_uint<32>  h3_5_rd13_res = h3_5_rd13_select(h3_4, d0, d1, dynamic_address);
	set_at<416, 2560>(result, h3_5_rd13_res);
	hw_uint<32>  h3_5_rd14_res = h3_5_rd14_select(h3_4, d0, d1, dynamic_address);
	set_at<448, 2560>(result, h3_5_rd14_res);
	hw_uint<32>  h3_5_rd15_res = h3_5_rd15_select(h3_4, d0, d1, dynamic_address);
	set_at<480, 2560>(result, h3_5_rd15_res);
	hw_uint<32>  h3_5_rd16_res = h3_5_rd16_select(h3_4, d0, d1, dynamic_address);
	set_at<512, 2560>(result, h3_5_rd16_res);
	hw_uint<32>  h3_5_rd17_res = h3_5_rd17_select(h3_4, d0, d1, dynamic_address);
	set_at<544, 2560>(result, h3_5_rd17_res);
	hw_uint<32>  h3_5_rd18_res = h3_5_rd18_select(h3_4, d0, d1, dynamic_address);
	set_at<576, 2560>(result, h3_5_rd18_res);
	hw_uint<32>  h3_5_rd19_res = h3_5_rd19_select(h3_4, d0, d1, dynamic_address);
	set_at<608, 2560>(result, h3_5_rd19_res);
	hw_uint<32>  h3_5_rd20_res = h3_5_rd20_select(h3_4, d0, d1, dynamic_address);
	set_at<640, 2560>(result, h3_5_rd20_res);
	hw_uint<32>  h3_5_rd21_res = h3_5_rd21_select(h3_4, d0, d1, dynamic_address);
	set_at<672, 2560>(result, h3_5_rd21_res);
	hw_uint<32>  h3_5_rd22_res = h3_5_rd22_select(h3_4, d0, d1, dynamic_address);
	set_at<704, 2560>(result, h3_5_rd22_res);
	hw_uint<32>  h3_5_rd23_res = h3_5_rd23_select(h3_4, d0, d1, dynamic_address);
	set_at<736, 2560>(result, h3_5_rd23_res);
	hw_uint<32>  h3_5_rd24_res = h3_5_rd24_select(h3_4, d0, d1, dynamic_address);
	set_at<768, 2560>(result, h3_5_rd24_res);
	hw_uint<32>  h3_5_rd25_res = h3_5_rd25_select(h3_4, d0, d1, dynamic_address);
	set_at<800, 2560>(result, h3_5_rd25_res);
	hw_uint<32>  h3_5_rd26_res = h3_5_rd26_select(h3_4, d0, d1, dynamic_address);
	set_at<832, 2560>(result, h3_5_rd26_res);
	hw_uint<32>  h3_5_rd27_res = h3_5_rd27_select(h3_4, d0, d1, dynamic_address);
	set_at<864, 2560>(result, h3_5_rd27_res);
	hw_uint<32>  h3_5_rd28_res = h3_5_rd28_select(h3_4, d0, d1, dynamic_address);
	set_at<896, 2560>(result, h3_5_rd28_res);
	hw_uint<32>  h3_5_rd29_res = h3_5_rd29_select(h3_4, d0, d1, dynamic_address);
	set_at<928, 2560>(result, h3_5_rd29_res);
	hw_uint<32>  h3_5_rd30_res = h3_5_rd30_select(h3_4, d0, d1, dynamic_address);
	set_at<960, 2560>(result, h3_5_rd30_res);
	hw_uint<32>  h3_5_rd31_res = h3_5_rd31_select(h3_4, d0, d1, dynamic_address);
	set_at<992, 2560>(result, h3_5_rd31_res);
	hw_uint<32>  h3_5_rd32_res = h3_5_rd32_select(h3_4, d0, d1, dynamic_address);
	set_at<1024, 2560>(result, h3_5_rd32_res);
	hw_uint<32>  h3_5_rd33_res = h3_5_rd33_select(h3_4, d0, d1, dynamic_address);
	set_at<1056, 2560>(result, h3_5_rd33_res);
	hw_uint<32>  h3_5_rd34_res = h3_5_rd34_select(h3_4, d0, d1, dynamic_address);
	set_at<1088, 2560>(result, h3_5_rd34_res);
	hw_uint<32>  h3_5_rd35_res = h3_5_rd35_select(h3_4, d0, d1, dynamic_address);
	set_at<1120, 2560>(result, h3_5_rd35_res);
	hw_uint<32>  h3_5_rd36_res = h3_5_rd36_select(h3_4, d0, d1, dynamic_address);
	set_at<1152, 2560>(result, h3_5_rd36_res);
	hw_uint<32>  h3_5_rd37_res = h3_5_rd37_select(h3_4, d0, d1, dynamic_address);
	set_at<1184, 2560>(result, h3_5_rd37_res);
	hw_uint<32>  h3_5_rd38_res = h3_5_rd38_select(h3_4, d0, d1, dynamic_address);
	set_at<1216, 2560>(result, h3_5_rd38_res);
	hw_uint<32>  h3_5_rd39_res = h3_5_rd39_select(h3_4, d0, d1, dynamic_address);
	set_at<1248, 2560>(result, h3_5_rd39_res);
	hw_uint<32>  h3_5_rd40_res = h3_5_rd40_select(h3_4, d0, d1, dynamic_address);
	set_at<1280, 2560>(result, h3_5_rd40_res);
	hw_uint<32>  h3_5_rd41_res = h3_5_rd41_select(h3_4, d0, d1, dynamic_address);
	set_at<1312, 2560>(result, h3_5_rd41_res);
	hw_uint<32>  h3_5_rd42_res = h3_5_rd42_select(h3_4, d0, d1, dynamic_address);
	set_at<1344, 2560>(result, h3_5_rd42_res);
	hw_uint<32>  h3_5_rd43_res = h3_5_rd43_select(h3_4, d0, d1, dynamic_address);
	set_at<1376, 2560>(result, h3_5_rd43_res);
	hw_uint<32>  h3_5_rd44_res = h3_5_rd44_select(h3_4, d0, d1, dynamic_address);
	set_at<1408, 2560>(result, h3_5_rd44_res);
	hw_uint<32>  h3_5_rd45_res = h3_5_rd45_select(h3_4, d0, d1, dynamic_address);
	set_at<1440, 2560>(result, h3_5_rd45_res);
	hw_uint<32>  h3_5_rd46_res = h3_5_rd46_select(h3_4, d0, d1, dynamic_address);
	set_at<1472, 2560>(result, h3_5_rd46_res);
	hw_uint<32>  h3_5_rd47_res = h3_5_rd47_select(h3_4, d0, d1, dynamic_address);
	set_at<1504, 2560>(result, h3_5_rd47_res);
	hw_uint<32>  h3_5_rd48_res = h3_5_rd48_select(h3_4, d0, d1, dynamic_address);
	set_at<1536, 2560>(result, h3_5_rd48_res);
	hw_uint<32>  h3_5_rd49_res = h3_5_rd49_select(h3_4, d0, d1, dynamic_address);
	set_at<1568, 2560>(result, h3_5_rd49_res);
	hw_uint<32>  h3_5_rd50_res = h3_5_rd50_select(h3_4, d0, d1, dynamic_address);
	set_at<1600, 2560>(result, h3_5_rd50_res);
	hw_uint<32>  h3_5_rd51_res = h3_5_rd51_select(h3_4, d0, d1, dynamic_address);
	set_at<1632, 2560>(result, h3_5_rd51_res);
	hw_uint<32>  h3_5_rd52_res = h3_5_rd52_select(h3_4, d0, d1, dynamic_address);
	set_at<1664, 2560>(result, h3_5_rd52_res);
	hw_uint<32>  h3_5_rd53_res = h3_5_rd53_select(h3_4, d0, d1, dynamic_address);
	set_at<1696, 2560>(result, h3_5_rd53_res);
	hw_uint<32>  h3_5_rd54_res = h3_5_rd54_select(h3_4, d0, d1, dynamic_address);
	set_at<1728, 2560>(result, h3_5_rd54_res);
	hw_uint<32>  h3_5_rd55_res = h3_5_rd55_select(h3_4, d0, d1, dynamic_address);
	set_at<1760, 2560>(result, h3_5_rd55_res);
	hw_uint<32>  h3_5_rd56_res = h3_5_rd56_select(h3_4, d0, d1, dynamic_address);
	set_at<1792, 2560>(result, h3_5_rd56_res);
	hw_uint<32>  h3_5_rd57_res = h3_5_rd57_select(h3_4, d0, d1, dynamic_address);
	set_at<1824, 2560>(result, h3_5_rd57_res);
	hw_uint<32>  h3_5_rd58_res = h3_5_rd58_select(h3_4, d0, d1, dynamic_address);
	set_at<1856, 2560>(result, h3_5_rd58_res);
	hw_uint<32>  h3_5_rd59_res = h3_5_rd59_select(h3_4, d0, d1, dynamic_address);
	set_at<1888, 2560>(result, h3_5_rd59_res);
	hw_uint<32>  h3_5_rd60_res = h3_5_rd60_select(h3_4, d0, d1, dynamic_address);
	set_at<1920, 2560>(result, h3_5_rd60_res);
	hw_uint<32>  h3_5_rd61_res = h3_5_rd61_select(h3_4, d0, d1, dynamic_address);
	set_at<1952, 2560>(result, h3_5_rd61_res);
	hw_uint<32>  h3_5_rd62_res = h3_5_rd62_select(h3_4, d0, d1, dynamic_address);
	set_at<1984, 2560>(result, h3_5_rd62_res);
	hw_uint<32>  h3_5_rd63_res = h3_5_rd63_select(h3_4, d0, d1, dynamic_address);
	set_at<2016, 2560>(result, h3_5_rd63_res);
	hw_uint<32>  h3_5_rd64_res = h3_5_rd64_select(h3_4, d0, d1, dynamic_address);
	set_at<2048, 2560>(result, h3_5_rd64_res);
	hw_uint<32>  h3_5_rd65_res = h3_5_rd65_select(h3_4, d0, d1, dynamic_address);
	set_at<2080, 2560>(result, h3_5_rd65_res);
	hw_uint<32>  h3_5_rd66_res = h3_5_rd66_select(h3_4, d0, d1, dynamic_address);
	set_at<2112, 2560>(result, h3_5_rd66_res);
	hw_uint<32>  h3_5_rd67_res = h3_5_rd67_select(h3_4, d0, d1, dynamic_address);
	set_at<2144, 2560>(result, h3_5_rd67_res);
	hw_uint<32>  h3_5_rd68_res = h3_5_rd68_select(h3_4, d0, d1, dynamic_address);
	set_at<2176, 2560>(result, h3_5_rd68_res);
	hw_uint<32>  h3_5_rd69_res = h3_5_rd69_select(h3_4, d0, d1, dynamic_address);
	set_at<2208, 2560>(result, h3_5_rd69_res);
	hw_uint<32>  h3_5_rd70_res = h3_5_rd70_select(h3_4, d0, d1, dynamic_address);
	set_at<2240, 2560>(result, h3_5_rd70_res);
	hw_uint<32>  h3_5_rd71_res = h3_5_rd71_select(h3_4, d0, d1, dynamic_address);
	set_at<2272, 2560>(result, h3_5_rd71_res);
	hw_uint<32>  h3_5_rd72_res = h3_5_rd72_select(h3_4, d0, d1, dynamic_address);
	set_at<2304, 2560>(result, h3_5_rd72_res);
	hw_uint<32>  h3_5_rd73_res = h3_5_rd73_select(h3_4, d0, d1, dynamic_address);
	set_at<2336, 2560>(result, h3_5_rd73_res);
	hw_uint<32>  h3_5_rd74_res = h3_5_rd74_select(h3_4, d0, d1, dynamic_address);
	set_at<2368, 2560>(result, h3_5_rd74_res);
	hw_uint<32>  h3_5_rd75_res = h3_5_rd75_select(h3_4, d0, d1, dynamic_address);
	set_at<2400, 2560>(result, h3_5_rd75_res);
	hw_uint<32>  h3_5_rd76_res = h3_5_rd76_select(h3_4, d0, d1, dynamic_address);
	set_at<2432, 2560>(result, h3_5_rd76_res);
	hw_uint<32>  h3_5_rd77_res = h3_5_rd77_select(h3_4, d0, d1, dynamic_address);
	set_at<2464, 2560>(result, h3_5_rd77_res);
	hw_uint<32>  h3_5_rd78_res = h3_5_rd78_select(h3_4, d0, d1, dynamic_address);
	set_at<2496, 2560>(result, h3_5_rd78_res);
	hw_uint<32>  h3_5_rd79_res = h3_5_rd79_select(h3_4, d0, d1, dynamic_address);
	set_at<2528, 2560>(result, h3_5_rd79_res);
	return result;
}

struct h3_5_h3_5_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-48, 1072], [-4, 1026]}
	// Capacity: 146
	// # of read delays: 5
  // 0, 1, 72, 73, 145
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 70> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 71> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_71() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_72() {
		return f4;
	}

	inline hw_uint<32>  peek_73() {
		return f6;
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_145() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 70
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 70 reading from capacity: 1
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
	// RAM Box: {[-47, 1057], [-4, 1027]}
	// Capacity: 146
	// # of read delays: 4
  // 0, 1, 73, 145
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 71> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 71> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_73() {
		return f4;
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_145() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write10_merged_banks_5_cache {
	// RAM Box: {[-38, 1066], [-4, 1027]}
	// Capacity: 146
	// # of read delays: 4
  // 0, 1, 73, 145
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 71> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 71> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_73() {
		return f4;
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_145() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write11_merged_banks_5_cache {
	// RAM Box: {[-37, 1067], [-4, 1027]}
	// Capacity: 146
	// # of read delays: 4
  // 0, 1, 73, 145
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 71> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 71> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_73() {
		return f4;
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_145() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write12_merged_banks_5_cache {
	// RAM Box: {[-36, 1068], [-4, 1027]}
	// Capacity: 146
	// # of read delays: 4
  // 0, 1, 73, 145
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 71> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 71> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_73() {
		return f4;
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_145() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write13_merged_banks_5_cache {
	// RAM Box: {[-35, 1069], [-4, 1027]}
	// Capacity: 146
	// # of read delays: 4
  // 0, 1, 73, 145
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 71> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 71> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_73() {
		return f4;
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_145() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write14_merged_banks_5_cache {
	// RAM Box: {[-34, 1070], [-4, 1027]}
	// Capacity: 146
	// # of read delays: 4
  // 0, 1, 73, 145
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 71> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 71> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_73() {
		return f4;
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_145() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write15_merged_banks_5_cache {
	// RAM Box: {[-49, 1071], [-3, 1027]}
	// Capacity: 146
	// # of read delays: 5
  // 0, 1, 73, 74, 145
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 71> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 70> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_73() {
		return f4;
	}

	inline hw_uint<32>  peek_74() {
		return f6;
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_145() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 70
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 70 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
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
	// RAM Box: {[-46, 1058], [-4, 1027]}
	// Capacity: 146
	// # of read delays: 4
  // 0, 1, 73, 145
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 71> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 71> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_73() {
		return f4;
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_145() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
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
	// RAM Box: {[-45, 1059], [-4, 1027]}
	// Capacity: 146
	// # of read delays: 4
  // 0, 1, 73, 145
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 71> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 71> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_73() {
		return f4;
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_145() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write4_merged_banks_5_cache {
	// RAM Box: {[-44, 1060], [-4, 1027]}
	// Capacity: 146
	// # of read delays: 4
  // 0, 1, 73, 145
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 71> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 71> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_73() {
		return f4;
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_145() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write5_merged_banks_5_cache {
	// RAM Box: {[-43, 1061], [-4, 1027]}
	// Capacity: 146
	// # of read delays: 4
  // 0, 1, 73, 145
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 71> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 71> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_73() {
		return f4;
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_145() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write6_merged_banks_5_cache {
	// RAM Box: {[-42, 1062], [-4, 1027]}
	// Capacity: 146
	// # of read delays: 4
  // 0, 1, 73, 145
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 71> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 71> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_73() {
		return f4;
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_145() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write7_merged_banks_5_cache {
	// RAM Box: {[-41, 1063], [-4, 1027]}
	// Capacity: 146
	// # of read delays: 4
  // 0, 1, 73, 145
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 71> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 71> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_73() {
		return f4;
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_145() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write8_merged_banks_5_cache {
	// RAM Box: {[-40, 1064], [-4, 1027]}
	// Capacity: 146
	// # of read delays: 4
  // 0, 1, 73, 145
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 71> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 71> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_73() {
		return f4;
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_145() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_5_h3_5_update_0_write9_merged_banks_5_cache {
	// RAM Box: {[-39, 1065], [-4, 1027]}
	// Capacity: 146
	// # of read delays: 4
  // 0, 1, 73, 145
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 71> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 71> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_73() {
		return f4;
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_145() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 71
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 71 reading from capacity: 1
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
  // # of banks: 16
  h3_5_h3_5_update_0_write0_merged_banks_5_cache h3_5_h3_5_update_0_write0_merged_banks_5;
  h3_5_h3_5_update_0_write1_merged_banks_5_cache h3_5_h3_5_update_0_write1_merged_banks_5;
  h3_5_h3_5_update_0_write10_merged_banks_5_cache h3_5_h3_5_update_0_write10_merged_banks_5;
  h3_5_h3_5_update_0_write11_merged_banks_5_cache h3_5_h3_5_update_0_write11_merged_banks_5;
  h3_5_h3_5_update_0_write12_merged_banks_5_cache h3_5_h3_5_update_0_write12_merged_banks_5;
  h3_5_h3_5_update_0_write13_merged_banks_5_cache h3_5_h3_5_update_0_write13_merged_banks_5;
  h3_5_h3_5_update_0_write14_merged_banks_5_cache h3_5_h3_5_update_0_write14_merged_banks_5;
  h3_5_h3_5_update_0_write15_merged_banks_5_cache h3_5_h3_5_update_0_write15_merged_banks_5;
  h3_5_h3_5_update_0_write2_merged_banks_5_cache h3_5_h3_5_update_0_write2_merged_banks_5;
  h3_5_h3_5_update_0_write3_merged_banks_5_cache h3_5_h3_5_update_0_write3_merged_banks_5;
  h3_5_h3_5_update_0_write4_merged_banks_5_cache h3_5_h3_5_update_0_write4_merged_banks_5;
  h3_5_h3_5_update_0_write5_merged_banks_5_cache h3_5_h3_5_update_0_write5_merged_banks_5;
  h3_5_h3_5_update_0_write6_merged_banks_5_cache h3_5_h3_5_update_0_write6_merged_banks_5;
  h3_5_h3_5_update_0_write7_merged_banks_5_cache h3_5_h3_5_update_0_write7_merged_banks_5;
  h3_5_h3_5_update_0_write8_merged_banks_5_cache h3_5_h3_5_update_0_write8_merged_banks_5;
  h3_5_h3_5_update_0_write9_merged_banks_5_cache h3_5_h3_5_update_0_write9_merged_banks_5;
};



inline void h3_5_h3_5_update_0_write0_write(hw_uint<32> & h3_5_h3_5_update_0_write0, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.push(h3_5_h3_5_update_0_write0);
}

inline void h3_5_h3_5_update_0_write1_write(hw_uint<32> & h3_5_h3_5_update_0_write1, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write1_merged_banks_5.push(h3_5_h3_5_update_0_write1);
}

inline void h3_5_h3_5_update_0_write10_write(hw_uint<32> & h3_5_h3_5_update_0_write10, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write10_merged_banks_5.push(h3_5_h3_5_update_0_write10);
}

inline void h3_5_h3_5_update_0_write11_write(hw_uint<32> & h3_5_h3_5_update_0_write11, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write11_merged_banks_5.push(h3_5_h3_5_update_0_write11);
}

inline void h3_5_h3_5_update_0_write12_write(hw_uint<32> & h3_5_h3_5_update_0_write12, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write12_merged_banks_5.push(h3_5_h3_5_update_0_write12);
}

inline void h3_5_h3_5_update_0_write13_write(hw_uint<32> & h3_5_h3_5_update_0_write13, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write13_merged_banks_5.push(h3_5_h3_5_update_0_write13);
}

inline void h3_5_h3_5_update_0_write14_write(hw_uint<32> & h3_5_h3_5_update_0_write14, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write14_merged_banks_5.push(h3_5_h3_5_update_0_write14);
}

inline void h3_5_h3_5_update_0_write15_write(hw_uint<32> & h3_5_h3_5_update_0_write15, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write15_merged_banks_5.push(h3_5_h3_5_update_0_write15);
}

inline void h3_5_h3_5_update_0_write2_write(hw_uint<32> & h3_5_h3_5_update_0_write2, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write2_merged_banks_5.push(h3_5_h3_5_update_0_write2);
}

inline void h3_5_h3_5_update_0_write3_write(hw_uint<32> & h3_5_h3_5_update_0_write3, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write3_merged_banks_5.push(h3_5_h3_5_update_0_write3);
}

inline void h3_5_h3_5_update_0_write4_write(hw_uint<32> & h3_5_h3_5_update_0_write4, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write4_merged_banks_5.push(h3_5_h3_5_update_0_write4);
}

inline void h3_5_h3_5_update_0_write5_write(hw_uint<32> & h3_5_h3_5_update_0_write5, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write5_merged_banks_5.push(h3_5_h3_5_update_0_write5);
}

inline void h3_5_h3_5_update_0_write6_write(hw_uint<32> & h3_5_h3_5_update_0_write6, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write6_merged_banks_5.push(h3_5_h3_5_update_0_write6);
}

inline void h3_5_h3_5_update_0_write7_write(hw_uint<32> & h3_5_h3_5_update_0_write7, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write7_merged_banks_5.push(h3_5_h3_5_update_0_write7);
}

inline void h3_5_h3_5_update_0_write8_write(hw_uint<32> & h3_5_h3_5_update_0_write8, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write8_merged_banks_5.push(h3_5_h3_5_update_0_write8);
}

inline void h3_5_h3_5_update_0_write9_write(hw_uint<32> & h3_5_h3_5_update_0_write9, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  h3_5.h3_5_h3_5_update_0_write9_merged_banks_5.push(h3_5_h3_5_update_0_write9);
}

inline hw_uint<32>  h3_6_rd0_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd0 read pattern: { h3_6_update_0[d0, d1] -> h3_5[-1 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write15 = h3_5.h3_5_h3_5_update_0_write15_merged_banks_5.peek_74();
  return value_h3_5_h3_5_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_6_rd1_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd1 read pattern: { h3_6_update_0[d0, d1] -> h3_5[16d0, -1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.peek_145();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd10_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd10 read pattern: { h3_6_update_0[d0, d1] -> h3_5[1 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd11_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd11 read pattern: { h3_6_update_0[d0, d1] -> h3_5[2 + 16d0, -1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_5.peek_145();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_6_rd12_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd12 read pattern: { h3_6_update_0[d0, d1] -> h3_5[2 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_6_rd13_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd13 read pattern: { h3_6_update_0[d0, d1] -> h3_5[2 + 16d0, 1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_6_rd14_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd14 read pattern: { h3_6_update_0[d0, d1] -> h3_5[3 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd15_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd15 read pattern: { h3_6_update_0[d0, d1] -> h3_5[2 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_6_rd16_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd16 read pattern: { h3_6_update_0[d0, d1] -> h3_5[3 + 16d0, -1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_5.peek_145();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd17_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd17 read pattern: { h3_6_update_0[d0, d1] -> h3_5[3 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd18_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd18 read pattern: { h3_6_update_0[d0, d1] -> h3_5[3 + 16d0, 1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd19_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd19 read pattern: { h3_6_update_0[d0, d1] -> h3_5[4 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write4 = h3_5.h3_5_h3_5_update_0_write4_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_6_rd2_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd2 read pattern: { h3_6_update_0[d0, d1] -> h3_5[16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd20_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd20 read pattern: { h3_6_update_0[d0, d1] -> h3_5[3 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd21_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd21 read pattern: { h3_6_update_0[d0, d1] -> h3_5[4 + 16d0, -1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write4 = h3_5.h3_5_h3_5_update_0_write4_merged_banks_5.peek_145();
  return value_h3_5_h3_5_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_6_rd22_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd22 read pattern: { h3_6_update_0[d0, d1] -> h3_5[4 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write4 = h3_5.h3_5_h3_5_update_0_write4_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_6_rd23_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd23 read pattern: { h3_6_update_0[d0, d1] -> h3_5[4 + 16d0, 1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write4 = h3_5.h3_5_h3_5_update_0_write4_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_6_rd24_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd24 read pattern: { h3_6_update_0[d0, d1] -> h3_5[5 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write5 = h3_5.h3_5_h3_5_update_0_write5_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_6_rd25_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd25 read pattern: { h3_6_update_0[d0, d1] -> h3_5[4 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write4 = h3_5.h3_5_h3_5_update_0_write4_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_6_rd26_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd26 read pattern: { h3_6_update_0[d0, d1] -> h3_5[5 + 16d0, -1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write5 = h3_5.h3_5_h3_5_update_0_write5_merged_banks_5.peek_145();
  return value_h3_5_h3_5_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_6_rd27_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd27 read pattern: { h3_6_update_0[d0, d1] -> h3_5[5 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write5 = h3_5.h3_5_h3_5_update_0_write5_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_6_rd28_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd28 read pattern: { h3_6_update_0[d0, d1] -> h3_5[5 + 16d0, 1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write5 = h3_5.h3_5_h3_5_update_0_write5_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_6_rd29_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd29 read pattern: { h3_6_update_0[d0, d1] -> h3_5[6 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write6 = h3_5.h3_5_h3_5_update_0_write6_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_6_rd3_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd3 read pattern: { h3_6_update_0[d0, d1] -> h3_5[16d0, 1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd30_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd30 read pattern: { h3_6_update_0[d0, d1] -> h3_5[5 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write5 = h3_5.h3_5_h3_5_update_0_write5_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_6_rd31_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd31 read pattern: { h3_6_update_0[d0, d1] -> h3_5[6 + 16d0, -1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write6 = h3_5.h3_5_h3_5_update_0_write6_merged_banks_5.peek_145();
  return value_h3_5_h3_5_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_6_rd32_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd32 read pattern: { h3_6_update_0[d0, d1] -> h3_5[6 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write6 = h3_5.h3_5_h3_5_update_0_write6_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_6_rd33_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd33 read pattern: { h3_6_update_0[d0, d1] -> h3_5[6 + 16d0, 1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write6 = h3_5.h3_5_h3_5_update_0_write6_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_6_rd34_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd34 read pattern: { h3_6_update_0[d0, d1] -> h3_5[7 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write7 = h3_5.h3_5_h3_5_update_0_write7_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_6_rd35_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd35 read pattern: { h3_6_update_0[d0, d1] -> h3_5[6 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write6 = h3_5.h3_5_h3_5_update_0_write6_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_6_rd36_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd36 read pattern: { h3_6_update_0[d0, d1] -> h3_5[7 + 16d0, -1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write7 = h3_5.h3_5_h3_5_update_0_write7_merged_banks_5.peek_145();
  return value_h3_5_h3_5_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_6_rd37_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd37 read pattern: { h3_6_update_0[d0, d1] -> h3_5[7 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write7 = h3_5.h3_5_h3_5_update_0_write7_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_6_rd38_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd38 read pattern: { h3_6_update_0[d0, d1] -> h3_5[7 + 16d0, 1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write7 = h3_5.h3_5_h3_5_update_0_write7_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_6_rd39_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd39 read pattern: { h3_6_update_0[d0, d1] -> h3_5[8 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write8 = h3_5.h3_5_h3_5_update_0_write8_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_6_rd4_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd4 read pattern: { h3_6_update_0[d0, d1] -> h3_5[1 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd40_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd40 read pattern: { h3_6_update_0[d0, d1] -> h3_5[7 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write7 = h3_5.h3_5_h3_5_update_0_write7_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_6_rd41_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd41 read pattern: { h3_6_update_0[d0, d1] -> h3_5[8 + 16d0, -1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write8 = h3_5.h3_5_h3_5_update_0_write8_merged_banks_5.peek_145();
  return value_h3_5_h3_5_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_6_rd42_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd42 read pattern: { h3_6_update_0[d0, d1] -> h3_5[8 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write8 = h3_5.h3_5_h3_5_update_0_write8_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_6_rd43_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd43 read pattern: { h3_6_update_0[d0, d1] -> h3_5[8 + 16d0, 1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write8 = h3_5.h3_5_h3_5_update_0_write8_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_6_rd44_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd44 read pattern: { h3_6_update_0[d0, d1] -> h3_5[9 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write9 = h3_5.h3_5_h3_5_update_0_write9_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_6_rd45_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd45 read pattern: { h3_6_update_0[d0, d1] -> h3_5[8 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write8 = h3_5.h3_5_h3_5_update_0_write8_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_6_rd46_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd46 read pattern: { h3_6_update_0[d0, d1] -> h3_5[9 + 16d0, -1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write9 = h3_5.h3_5_h3_5_update_0_write9_merged_banks_5.peek_145();
  return value_h3_5_h3_5_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_6_rd47_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd47 read pattern: { h3_6_update_0[d0, d1] -> h3_5[9 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write9 = h3_5.h3_5_h3_5_update_0_write9_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_6_rd48_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd48 read pattern: { h3_6_update_0[d0, d1] -> h3_5[9 + 16d0, 1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write9 = h3_5.h3_5_h3_5_update_0_write9_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_6_rd49_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd49 read pattern: { h3_6_update_0[d0, d1] -> h3_5[10 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write10 = h3_5.h3_5_h3_5_update_0_write10_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_6_rd5_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd5 read pattern: { h3_6_update_0[d0, d1] -> h3_5[16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd50_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd50 read pattern: { h3_6_update_0[d0, d1] -> h3_5[9 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write9 = h3_5.h3_5_h3_5_update_0_write9_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_6_rd51_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd51 read pattern: { h3_6_update_0[d0, d1] -> h3_5[10 + 16d0, -1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write10 = h3_5.h3_5_h3_5_update_0_write10_merged_banks_5.peek_145();
  return value_h3_5_h3_5_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_6_rd52_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd52 read pattern: { h3_6_update_0[d0, d1] -> h3_5[10 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write10 = h3_5.h3_5_h3_5_update_0_write10_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_6_rd53_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd53 read pattern: { h3_6_update_0[d0, d1] -> h3_5[10 + 16d0, 1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write10 = h3_5.h3_5_h3_5_update_0_write10_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_6_rd54_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd54 read pattern: { h3_6_update_0[d0, d1] -> h3_5[11 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write11 = h3_5.h3_5_h3_5_update_0_write11_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_6_rd55_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd55 read pattern: { h3_6_update_0[d0, d1] -> h3_5[10 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write10 = h3_5.h3_5_h3_5_update_0_write10_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_6_rd56_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd56 read pattern: { h3_6_update_0[d0, d1] -> h3_5[11 + 16d0, -1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write11 = h3_5.h3_5_h3_5_update_0_write11_merged_banks_5.peek_145();
  return value_h3_5_h3_5_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_6_rd57_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd57 read pattern: { h3_6_update_0[d0, d1] -> h3_5[11 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write11 = h3_5.h3_5_h3_5_update_0_write11_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_6_rd58_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd58 read pattern: { h3_6_update_0[d0, d1] -> h3_5[11 + 16d0, 1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write11 = h3_5.h3_5_h3_5_update_0_write11_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_6_rd59_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd59 read pattern: { h3_6_update_0[d0, d1] -> h3_5[12 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write12 = h3_5.h3_5_h3_5_update_0_write12_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_6_rd6_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd6 read pattern: { h3_6_update_0[d0, d1] -> h3_5[1 + 16d0, -1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_5.peek_145();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd60_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd60 read pattern: { h3_6_update_0[d0, d1] -> h3_5[11 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write11 = h3_5.h3_5_h3_5_update_0_write11_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_6_rd61_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd61 read pattern: { h3_6_update_0[d0, d1] -> h3_5[12 + 16d0, -1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write12 = h3_5.h3_5_h3_5_update_0_write12_merged_banks_5.peek_145();
  return value_h3_5_h3_5_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_6_rd62_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd62 read pattern: { h3_6_update_0[d0, d1] -> h3_5[12 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write12 = h3_5.h3_5_h3_5_update_0_write12_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_6_rd63_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd63 read pattern: { h3_6_update_0[d0, d1] -> h3_5[12 + 16d0, 1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write12 = h3_5.h3_5_h3_5_update_0_write12_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_6_rd64_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd64 read pattern: { h3_6_update_0[d0, d1] -> h3_5[13 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write13 = h3_5.h3_5_h3_5_update_0_write13_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_6_rd65_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd65 read pattern: { h3_6_update_0[d0, d1] -> h3_5[12 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write12 = h3_5.h3_5_h3_5_update_0_write12_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_6_rd66_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd66 read pattern: { h3_6_update_0[d0, d1] -> h3_5[13 + 16d0, -1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write13 = h3_5.h3_5_h3_5_update_0_write13_merged_banks_5.peek_145();
  return value_h3_5_h3_5_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_6_rd67_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd67 read pattern: { h3_6_update_0[d0, d1] -> h3_5[13 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write13 = h3_5.h3_5_h3_5_update_0_write13_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_6_rd68_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd68 read pattern: { h3_6_update_0[d0, d1] -> h3_5[13 + 16d0, 1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write13 = h3_5.h3_5_h3_5_update_0_write13_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_6_rd69_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd69 read pattern: { h3_6_update_0[d0, d1] -> h3_5[14 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write14 = h3_5.h3_5_h3_5_update_0_write14_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_6_rd7_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd7 read pattern: { h3_6_update_0[d0, d1] -> h3_5[1 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd70_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd70 read pattern: { h3_6_update_0[d0, d1] -> h3_5[13 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write13 = h3_5.h3_5_h3_5_update_0_write13_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_6_rd71_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd71 read pattern: { h3_6_update_0[d0, d1] -> h3_5[14 + 16d0, -1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write14 = h3_5.h3_5_h3_5_update_0_write14_merged_banks_5.peek_145();
  return value_h3_5_h3_5_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_6_rd72_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd72 read pattern: { h3_6_update_0[d0, d1] -> h3_5[14 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write14 = h3_5.h3_5_h3_5_update_0_write14_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_6_rd73_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd73 read pattern: { h3_6_update_0[d0, d1] -> h3_5[14 + 16d0, 1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write14 = h3_5.h3_5_h3_5_update_0_write14_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_6_rd74_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd74 read pattern: { h3_6_update_0[d0, d1] -> h3_5[15 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write15 = h3_5.h3_5_h3_5_update_0_write15_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_6_rd75_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd75 read pattern: { h3_6_update_0[d0, d1] -> h3_5[14 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write14 = h3_5.h3_5_h3_5_update_0_write14_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_6_rd76_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd76 read pattern: { h3_6_update_0[d0, d1] -> h3_5[15 + 16d0, -1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write15 = h3_5.h3_5_h3_5_update_0_write15_merged_banks_5.peek_145();
  return value_h3_5_h3_5_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_6_rd77_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd77 read pattern: { h3_6_update_0[d0, d1] -> h3_5[15 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write15 = h3_5.h3_5_h3_5_update_0_write15_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_6_rd78_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd78 read pattern: { h3_6_update_0[d0, d1] -> h3_5[15 + 16d0, 1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write15 = h3_5.h3_5_h3_5_update_0_write15_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_6_rd79_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd79 read pattern: { h3_6_update_0[d0, d1] -> h3_5[16 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.peek_72();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd8_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd8 read pattern: { h3_6_update_0[d0, d1] -> h3_5[1 + 16d0, 1 + d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd9_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd9 read pattern: { h3_6_update_0[d0, d1] -> h3_5[2 + 16d0, d1] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_5.peek_73();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

// # of bundles = 2
// h3_5_update_0_write
//	h3_5_h3_5_update_0_write0
//	h3_5_h3_5_update_0_write1
//	h3_5_h3_5_update_0_write2
//	h3_5_h3_5_update_0_write3
//	h3_5_h3_5_update_0_write4
//	h3_5_h3_5_update_0_write5
//	h3_5_h3_5_update_0_write6
//	h3_5_h3_5_update_0_write7
//	h3_5_h3_5_update_0_write8
//	h3_5_h3_5_update_0_write9
//	h3_5_h3_5_update_0_write10
//	h3_5_h3_5_update_0_write11
//	h3_5_h3_5_update_0_write12
//	h3_5_h3_5_update_0_write13
//	h3_5_h3_5_update_0_write14
//	h3_5_h3_5_update_0_write15
inline void h3_5_h3_5_update_0_write_bundle_write(hw_uint<512>& h3_5_update_0_write, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_5_h3_5_update_0_write0_res = h3_5_update_0_write.extract<0, 31>();
	h3_5_h3_5_update_0_write0_write(h3_5_h3_5_update_0_write0_res, h3_5, d0, d1, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write1_res = h3_5_update_0_write.extract<32, 63>();
	h3_5_h3_5_update_0_write1_write(h3_5_h3_5_update_0_write1_res, h3_5, d0, d1, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write2_res = h3_5_update_0_write.extract<64, 95>();
	h3_5_h3_5_update_0_write2_write(h3_5_h3_5_update_0_write2_res, h3_5, d0, d1, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write3_res = h3_5_update_0_write.extract<96, 127>();
	h3_5_h3_5_update_0_write3_write(h3_5_h3_5_update_0_write3_res, h3_5, d0, d1, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write4_res = h3_5_update_0_write.extract<128, 159>();
	h3_5_h3_5_update_0_write4_write(h3_5_h3_5_update_0_write4_res, h3_5, d0, d1, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write5_res = h3_5_update_0_write.extract<160, 191>();
	h3_5_h3_5_update_0_write5_write(h3_5_h3_5_update_0_write5_res, h3_5, d0, d1, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write6_res = h3_5_update_0_write.extract<192, 223>();
	h3_5_h3_5_update_0_write6_write(h3_5_h3_5_update_0_write6_res, h3_5, d0, d1, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write7_res = h3_5_update_0_write.extract<224, 255>();
	h3_5_h3_5_update_0_write7_write(h3_5_h3_5_update_0_write7_res, h3_5, d0, d1, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write8_res = h3_5_update_0_write.extract<256, 287>();
	h3_5_h3_5_update_0_write8_write(h3_5_h3_5_update_0_write8_res, h3_5, d0, d1, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write9_res = h3_5_update_0_write.extract<288, 319>();
	h3_5_h3_5_update_0_write9_write(h3_5_h3_5_update_0_write9_res, h3_5, d0, d1, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write10_res = h3_5_update_0_write.extract<320, 351>();
	h3_5_h3_5_update_0_write10_write(h3_5_h3_5_update_0_write10_res, h3_5, d0, d1, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write11_res = h3_5_update_0_write.extract<352, 383>();
	h3_5_h3_5_update_0_write11_write(h3_5_h3_5_update_0_write11_res, h3_5, d0, d1, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write12_res = h3_5_update_0_write.extract<384, 415>();
	h3_5_h3_5_update_0_write12_write(h3_5_h3_5_update_0_write12_res, h3_5, d0, d1, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write13_res = h3_5_update_0_write.extract<416, 447>();
	h3_5_h3_5_update_0_write13_write(h3_5_h3_5_update_0_write13_res, h3_5, d0, d1, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write14_res = h3_5_update_0_write.extract<448, 479>();
	h3_5_h3_5_update_0_write14_write(h3_5_h3_5_update_0_write14_res, h3_5, d0, d1, dynamic_address);
	hw_uint<32>  h3_5_h3_5_update_0_write15_res = h3_5_update_0_write.extract<480, 511>();
	h3_5_h3_5_update_0_write15_write(h3_5_h3_5_update_0_write15_res, h3_5, d0, d1, dynamic_address);
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
//	h3_6_rd20
//	h3_6_rd21
//	h3_6_rd22
//	h3_6_rd23
//	h3_6_rd24
//	h3_6_rd25
//	h3_6_rd26
//	h3_6_rd27
//	h3_6_rd28
//	h3_6_rd29
//	h3_6_rd30
//	h3_6_rd31
//	h3_6_rd32
//	h3_6_rd33
//	h3_6_rd34
//	h3_6_rd35
//	h3_6_rd36
//	h3_6_rd37
//	h3_6_rd38
//	h3_6_rd39
//	h3_6_rd40
//	h3_6_rd41
//	h3_6_rd42
//	h3_6_rd43
//	h3_6_rd44
//	h3_6_rd45
//	h3_6_rd46
//	h3_6_rd47
//	h3_6_rd48
//	h3_6_rd49
//	h3_6_rd50
//	h3_6_rd51
//	h3_6_rd52
//	h3_6_rd53
//	h3_6_rd54
//	h3_6_rd55
//	h3_6_rd56
//	h3_6_rd57
//	h3_6_rd58
//	h3_6_rd59
//	h3_6_rd60
//	h3_6_rd61
//	h3_6_rd62
//	h3_6_rd63
//	h3_6_rd64
//	h3_6_rd65
//	h3_6_rd66
//	h3_6_rd67
//	h3_6_rd68
//	h3_6_rd69
//	h3_6_rd70
//	h3_6_rd71
//	h3_6_rd72
//	h3_6_rd73
//	h3_6_rd74
//	h3_6_rd75
//	h3_6_rd76
//	h3_6_rd77
//	h3_6_rd78
//	h3_6_rd79
inline hw_uint<2560> h3_5_h3_6_update_0_read_bundle_read(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 80
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
    // h3_6_rd20
    // h3_6_rd21
    // h3_6_rd22
    // h3_6_rd23
    // h3_6_rd24
    // h3_6_rd25
    // h3_6_rd26
    // h3_6_rd27
    // h3_6_rd28
    // h3_6_rd29
    // h3_6_rd30
    // h3_6_rd31
    // h3_6_rd32
    // h3_6_rd33
    // h3_6_rd34
    // h3_6_rd35
    // h3_6_rd36
    // h3_6_rd37
    // h3_6_rd38
    // h3_6_rd39
    // h3_6_rd40
    // h3_6_rd41
    // h3_6_rd42
    // h3_6_rd43
    // h3_6_rd44
    // h3_6_rd45
    // h3_6_rd46
    // h3_6_rd47
    // h3_6_rd48
    // h3_6_rd49
    // h3_6_rd50
    // h3_6_rd51
    // h3_6_rd52
    // h3_6_rd53
    // h3_6_rd54
    // h3_6_rd55
    // h3_6_rd56
    // h3_6_rd57
    // h3_6_rd58
    // h3_6_rd59
    // h3_6_rd60
    // h3_6_rd61
    // h3_6_rd62
    // h3_6_rd63
    // h3_6_rd64
    // h3_6_rd65
    // h3_6_rd66
    // h3_6_rd67
    // h3_6_rd68
    // h3_6_rd69
    // h3_6_rd70
    // h3_6_rd71
    // h3_6_rd72
    // h3_6_rd73
    // h3_6_rd74
    // h3_6_rd75
    // h3_6_rd76
    // h3_6_rd77
    // h3_6_rd78
    // h3_6_rd79

	hw_uint<2560> result;
	hw_uint<32>  h3_6_rd0_res = h3_6_rd0_select(h3_5, d0, d1, dynamic_address);
	set_at<0, 2560>(result, h3_6_rd0_res);
	hw_uint<32>  h3_6_rd1_res = h3_6_rd1_select(h3_5, d0, d1, dynamic_address);
	set_at<32, 2560>(result, h3_6_rd1_res);
	hw_uint<32>  h3_6_rd2_res = h3_6_rd2_select(h3_5, d0, d1, dynamic_address);
	set_at<64, 2560>(result, h3_6_rd2_res);
	hw_uint<32>  h3_6_rd3_res = h3_6_rd3_select(h3_5, d0, d1, dynamic_address);
	set_at<96, 2560>(result, h3_6_rd3_res);
	hw_uint<32>  h3_6_rd4_res = h3_6_rd4_select(h3_5, d0, d1, dynamic_address);
	set_at<128, 2560>(result, h3_6_rd4_res);
	hw_uint<32>  h3_6_rd5_res = h3_6_rd5_select(h3_5, d0, d1, dynamic_address);
	set_at<160, 2560>(result, h3_6_rd5_res);
	hw_uint<32>  h3_6_rd6_res = h3_6_rd6_select(h3_5, d0, d1, dynamic_address);
	set_at<192, 2560>(result, h3_6_rd6_res);
	hw_uint<32>  h3_6_rd7_res = h3_6_rd7_select(h3_5, d0, d1, dynamic_address);
	set_at<224, 2560>(result, h3_6_rd7_res);
	hw_uint<32>  h3_6_rd8_res = h3_6_rd8_select(h3_5, d0, d1, dynamic_address);
	set_at<256, 2560>(result, h3_6_rd8_res);
	hw_uint<32>  h3_6_rd9_res = h3_6_rd9_select(h3_5, d0, d1, dynamic_address);
	set_at<288, 2560>(result, h3_6_rd9_res);
	hw_uint<32>  h3_6_rd10_res = h3_6_rd10_select(h3_5, d0, d1, dynamic_address);
	set_at<320, 2560>(result, h3_6_rd10_res);
	hw_uint<32>  h3_6_rd11_res = h3_6_rd11_select(h3_5, d0, d1, dynamic_address);
	set_at<352, 2560>(result, h3_6_rd11_res);
	hw_uint<32>  h3_6_rd12_res = h3_6_rd12_select(h3_5, d0, d1, dynamic_address);
	set_at<384, 2560>(result, h3_6_rd12_res);
	hw_uint<32>  h3_6_rd13_res = h3_6_rd13_select(h3_5, d0, d1, dynamic_address);
	set_at<416, 2560>(result, h3_6_rd13_res);
	hw_uint<32>  h3_6_rd14_res = h3_6_rd14_select(h3_5, d0, d1, dynamic_address);
	set_at<448, 2560>(result, h3_6_rd14_res);
	hw_uint<32>  h3_6_rd15_res = h3_6_rd15_select(h3_5, d0, d1, dynamic_address);
	set_at<480, 2560>(result, h3_6_rd15_res);
	hw_uint<32>  h3_6_rd16_res = h3_6_rd16_select(h3_5, d0, d1, dynamic_address);
	set_at<512, 2560>(result, h3_6_rd16_res);
	hw_uint<32>  h3_6_rd17_res = h3_6_rd17_select(h3_5, d0, d1, dynamic_address);
	set_at<544, 2560>(result, h3_6_rd17_res);
	hw_uint<32>  h3_6_rd18_res = h3_6_rd18_select(h3_5, d0, d1, dynamic_address);
	set_at<576, 2560>(result, h3_6_rd18_res);
	hw_uint<32>  h3_6_rd19_res = h3_6_rd19_select(h3_5, d0, d1, dynamic_address);
	set_at<608, 2560>(result, h3_6_rd19_res);
	hw_uint<32>  h3_6_rd20_res = h3_6_rd20_select(h3_5, d0, d1, dynamic_address);
	set_at<640, 2560>(result, h3_6_rd20_res);
	hw_uint<32>  h3_6_rd21_res = h3_6_rd21_select(h3_5, d0, d1, dynamic_address);
	set_at<672, 2560>(result, h3_6_rd21_res);
	hw_uint<32>  h3_6_rd22_res = h3_6_rd22_select(h3_5, d0, d1, dynamic_address);
	set_at<704, 2560>(result, h3_6_rd22_res);
	hw_uint<32>  h3_6_rd23_res = h3_6_rd23_select(h3_5, d0, d1, dynamic_address);
	set_at<736, 2560>(result, h3_6_rd23_res);
	hw_uint<32>  h3_6_rd24_res = h3_6_rd24_select(h3_5, d0, d1, dynamic_address);
	set_at<768, 2560>(result, h3_6_rd24_res);
	hw_uint<32>  h3_6_rd25_res = h3_6_rd25_select(h3_5, d0, d1, dynamic_address);
	set_at<800, 2560>(result, h3_6_rd25_res);
	hw_uint<32>  h3_6_rd26_res = h3_6_rd26_select(h3_5, d0, d1, dynamic_address);
	set_at<832, 2560>(result, h3_6_rd26_res);
	hw_uint<32>  h3_6_rd27_res = h3_6_rd27_select(h3_5, d0, d1, dynamic_address);
	set_at<864, 2560>(result, h3_6_rd27_res);
	hw_uint<32>  h3_6_rd28_res = h3_6_rd28_select(h3_5, d0, d1, dynamic_address);
	set_at<896, 2560>(result, h3_6_rd28_res);
	hw_uint<32>  h3_6_rd29_res = h3_6_rd29_select(h3_5, d0, d1, dynamic_address);
	set_at<928, 2560>(result, h3_6_rd29_res);
	hw_uint<32>  h3_6_rd30_res = h3_6_rd30_select(h3_5, d0, d1, dynamic_address);
	set_at<960, 2560>(result, h3_6_rd30_res);
	hw_uint<32>  h3_6_rd31_res = h3_6_rd31_select(h3_5, d0, d1, dynamic_address);
	set_at<992, 2560>(result, h3_6_rd31_res);
	hw_uint<32>  h3_6_rd32_res = h3_6_rd32_select(h3_5, d0, d1, dynamic_address);
	set_at<1024, 2560>(result, h3_6_rd32_res);
	hw_uint<32>  h3_6_rd33_res = h3_6_rd33_select(h3_5, d0, d1, dynamic_address);
	set_at<1056, 2560>(result, h3_6_rd33_res);
	hw_uint<32>  h3_6_rd34_res = h3_6_rd34_select(h3_5, d0, d1, dynamic_address);
	set_at<1088, 2560>(result, h3_6_rd34_res);
	hw_uint<32>  h3_6_rd35_res = h3_6_rd35_select(h3_5, d0, d1, dynamic_address);
	set_at<1120, 2560>(result, h3_6_rd35_res);
	hw_uint<32>  h3_6_rd36_res = h3_6_rd36_select(h3_5, d0, d1, dynamic_address);
	set_at<1152, 2560>(result, h3_6_rd36_res);
	hw_uint<32>  h3_6_rd37_res = h3_6_rd37_select(h3_5, d0, d1, dynamic_address);
	set_at<1184, 2560>(result, h3_6_rd37_res);
	hw_uint<32>  h3_6_rd38_res = h3_6_rd38_select(h3_5, d0, d1, dynamic_address);
	set_at<1216, 2560>(result, h3_6_rd38_res);
	hw_uint<32>  h3_6_rd39_res = h3_6_rd39_select(h3_5, d0, d1, dynamic_address);
	set_at<1248, 2560>(result, h3_6_rd39_res);
	hw_uint<32>  h3_6_rd40_res = h3_6_rd40_select(h3_5, d0, d1, dynamic_address);
	set_at<1280, 2560>(result, h3_6_rd40_res);
	hw_uint<32>  h3_6_rd41_res = h3_6_rd41_select(h3_5, d0, d1, dynamic_address);
	set_at<1312, 2560>(result, h3_6_rd41_res);
	hw_uint<32>  h3_6_rd42_res = h3_6_rd42_select(h3_5, d0, d1, dynamic_address);
	set_at<1344, 2560>(result, h3_6_rd42_res);
	hw_uint<32>  h3_6_rd43_res = h3_6_rd43_select(h3_5, d0, d1, dynamic_address);
	set_at<1376, 2560>(result, h3_6_rd43_res);
	hw_uint<32>  h3_6_rd44_res = h3_6_rd44_select(h3_5, d0, d1, dynamic_address);
	set_at<1408, 2560>(result, h3_6_rd44_res);
	hw_uint<32>  h3_6_rd45_res = h3_6_rd45_select(h3_5, d0, d1, dynamic_address);
	set_at<1440, 2560>(result, h3_6_rd45_res);
	hw_uint<32>  h3_6_rd46_res = h3_6_rd46_select(h3_5, d0, d1, dynamic_address);
	set_at<1472, 2560>(result, h3_6_rd46_res);
	hw_uint<32>  h3_6_rd47_res = h3_6_rd47_select(h3_5, d0, d1, dynamic_address);
	set_at<1504, 2560>(result, h3_6_rd47_res);
	hw_uint<32>  h3_6_rd48_res = h3_6_rd48_select(h3_5, d0, d1, dynamic_address);
	set_at<1536, 2560>(result, h3_6_rd48_res);
	hw_uint<32>  h3_6_rd49_res = h3_6_rd49_select(h3_5, d0, d1, dynamic_address);
	set_at<1568, 2560>(result, h3_6_rd49_res);
	hw_uint<32>  h3_6_rd50_res = h3_6_rd50_select(h3_5, d0, d1, dynamic_address);
	set_at<1600, 2560>(result, h3_6_rd50_res);
	hw_uint<32>  h3_6_rd51_res = h3_6_rd51_select(h3_5, d0, d1, dynamic_address);
	set_at<1632, 2560>(result, h3_6_rd51_res);
	hw_uint<32>  h3_6_rd52_res = h3_6_rd52_select(h3_5, d0, d1, dynamic_address);
	set_at<1664, 2560>(result, h3_6_rd52_res);
	hw_uint<32>  h3_6_rd53_res = h3_6_rd53_select(h3_5, d0, d1, dynamic_address);
	set_at<1696, 2560>(result, h3_6_rd53_res);
	hw_uint<32>  h3_6_rd54_res = h3_6_rd54_select(h3_5, d0, d1, dynamic_address);
	set_at<1728, 2560>(result, h3_6_rd54_res);
	hw_uint<32>  h3_6_rd55_res = h3_6_rd55_select(h3_5, d0, d1, dynamic_address);
	set_at<1760, 2560>(result, h3_6_rd55_res);
	hw_uint<32>  h3_6_rd56_res = h3_6_rd56_select(h3_5, d0, d1, dynamic_address);
	set_at<1792, 2560>(result, h3_6_rd56_res);
	hw_uint<32>  h3_6_rd57_res = h3_6_rd57_select(h3_5, d0, d1, dynamic_address);
	set_at<1824, 2560>(result, h3_6_rd57_res);
	hw_uint<32>  h3_6_rd58_res = h3_6_rd58_select(h3_5, d0, d1, dynamic_address);
	set_at<1856, 2560>(result, h3_6_rd58_res);
	hw_uint<32>  h3_6_rd59_res = h3_6_rd59_select(h3_5, d0, d1, dynamic_address);
	set_at<1888, 2560>(result, h3_6_rd59_res);
	hw_uint<32>  h3_6_rd60_res = h3_6_rd60_select(h3_5, d0, d1, dynamic_address);
	set_at<1920, 2560>(result, h3_6_rd60_res);
	hw_uint<32>  h3_6_rd61_res = h3_6_rd61_select(h3_5, d0, d1, dynamic_address);
	set_at<1952, 2560>(result, h3_6_rd61_res);
	hw_uint<32>  h3_6_rd62_res = h3_6_rd62_select(h3_5, d0, d1, dynamic_address);
	set_at<1984, 2560>(result, h3_6_rd62_res);
	hw_uint<32>  h3_6_rd63_res = h3_6_rd63_select(h3_5, d0, d1, dynamic_address);
	set_at<2016, 2560>(result, h3_6_rd63_res);
	hw_uint<32>  h3_6_rd64_res = h3_6_rd64_select(h3_5, d0, d1, dynamic_address);
	set_at<2048, 2560>(result, h3_6_rd64_res);
	hw_uint<32>  h3_6_rd65_res = h3_6_rd65_select(h3_5, d0, d1, dynamic_address);
	set_at<2080, 2560>(result, h3_6_rd65_res);
	hw_uint<32>  h3_6_rd66_res = h3_6_rd66_select(h3_5, d0, d1, dynamic_address);
	set_at<2112, 2560>(result, h3_6_rd66_res);
	hw_uint<32>  h3_6_rd67_res = h3_6_rd67_select(h3_5, d0, d1, dynamic_address);
	set_at<2144, 2560>(result, h3_6_rd67_res);
	hw_uint<32>  h3_6_rd68_res = h3_6_rd68_select(h3_5, d0, d1, dynamic_address);
	set_at<2176, 2560>(result, h3_6_rd68_res);
	hw_uint<32>  h3_6_rd69_res = h3_6_rd69_select(h3_5, d0, d1, dynamic_address);
	set_at<2208, 2560>(result, h3_6_rd69_res);
	hw_uint<32>  h3_6_rd70_res = h3_6_rd70_select(h3_5, d0, d1, dynamic_address);
	set_at<2240, 2560>(result, h3_6_rd70_res);
	hw_uint<32>  h3_6_rd71_res = h3_6_rd71_select(h3_5, d0, d1, dynamic_address);
	set_at<2272, 2560>(result, h3_6_rd71_res);
	hw_uint<32>  h3_6_rd72_res = h3_6_rd72_select(h3_5, d0, d1, dynamic_address);
	set_at<2304, 2560>(result, h3_6_rd72_res);
	hw_uint<32>  h3_6_rd73_res = h3_6_rd73_select(h3_5, d0, d1, dynamic_address);
	set_at<2336, 2560>(result, h3_6_rd73_res);
	hw_uint<32>  h3_6_rd74_res = h3_6_rd74_select(h3_5, d0, d1, dynamic_address);
	set_at<2368, 2560>(result, h3_6_rd74_res);
	hw_uint<32>  h3_6_rd75_res = h3_6_rd75_select(h3_5, d0, d1, dynamic_address);
	set_at<2400, 2560>(result, h3_6_rd75_res);
	hw_uint<32>  h3_6_rd76_res = h3_6_rd76_select(h3_5, d0, d1, dynamic_address);
	set_at<2432, 2560>(result, h3_6_rd76_res);
	hw_uint<32>  h3_6_rd77_res = h3_6_rd77_select(h3_5, d0, d1, dynamic_address);
	set_at<2464, 2560>(result, h3_6_rd77_res);
	hw_uint<32>  h3_6_rd78_res = h3_6_rd78_select(h3_5, d0, d1, dynamic_address);
	set_at<2496, 2560>(result, h3_6_rd78_res);
	hw_uint<32>  h3_6_rd79_res = h3_6_rd79_select(h3_5, d0, d1, dynamic_address);
	set_at<2528, 2560>(result, h3_6_rd79_res);
	return result;
}

struct h3_6_h3_6_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-32, 1056], [-3, 1025]}
	// Capacity: 142
	// # of read delays: 5
  // 0, 1, 70, 71, 141
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 68> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 69> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_69() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_70() {
		return f4;
	}

	inline hw_uint<32>  peek_71() {
		return f6;
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_141() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 68
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 68 reading from capacity: 1
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
	// RAM Box: {[-31, 1041], [-3, 1026]}
	// Capacity: 142
	// # of read delays: 4
  // 0, 1, 71, 141
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 69> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 69> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_71() {
		return f4;
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_141() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write10_merged_banks_5_cache {
	// RAM Box: {[-22, 1050], [-3, 1026]}
	// Capacity: 142
	// # of read delays: 4
  // 0, 1, 71, 141
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 69> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 69> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_71() {
		return f4;
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_141() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write11_merged_banks_5_cache {
	// RAM Box: {[-21, 1051], [-3, 1026]}
	// Capacity: 142
	// # of read delays: 4
  // 0, 1, 71, 141
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 69> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 69> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_71() {
		return f4;
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_141() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write12_merged_banks_5_cache {
	// RAM Box: {[-20, 1052], [-3, 1026]}
	// Capacity: 142
	// # of read delays: 4
  // 0, 1, 71, 141
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 69> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 69> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_71() {
		return f4;
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_141() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write13_merged_banks_5_cache {
	// RAM Box: {[-19, 1053], [-3, 1026]}
	// Capacity: 142
	// # of read delays: 4
  // 0, 1, 71, 141
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 69> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 69> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_71() {
		return f4;
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_141() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write14_merged_banks_5_cache {
	// RAM Box: {[-18, 1054], [-3, 1026]}
	// Capacity: 142
	// # of read delays: 4
  // 0, 1, 71, 141
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 69> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 69> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_71() {
		return f4;
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_141() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write15_merged_banks_5_cache {
	// RAM Box: {[-33, 1055], [-2, 1026]}
	// Capacity: 142
	// # of read delays: 5
  // 0, 1, 71, 72, 141
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 69> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 68> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_71() {
		return f4;
	}

	inline hw_uint<32>  peek_72() {
		return f6;
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_141() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 68
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 68 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
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
	// RAM Box: {[-30, 1042], [-3, 1026]}
	// Capacity: 142
	// # of read delays: 4
  // 0, 1, 71, 141
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 69> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 69> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_71() {
		return f4;
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_141() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
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
	// RAM Box: {[-29, 1043], [-3, 1026]}
	// Capacity: 142
	// # of read delays: 4
  // 0, 1, 71, 141
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 69> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 69> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_71() {
		return f4;
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_141() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write4_merged_banks_5_cache {
	// RAM Box: {[-28, 1044], [-3, 1026]}
	// Capacity: 142
	// # of read delays: 4
  // 0, 1, 71, 141
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 69> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 69> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_71() {
		return f4;
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_141() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write5_merged_banks_5_cache {
	// RAM Box: {[-27, 1045], [-3, 1026]}
	// Capacity: 142
	// # of read delays: 4
  // 0, 1, 71, 141
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 69> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 69> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_71() {
		return f4;
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_141() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write6_merged_banks_5_cache {
	// RAM Box: {[-26, 1046], [-3, 1026]}
	// Capacity: 142
	// # of read delays: 4
  // 0, 1, 71, 141
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 69> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 69> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_71() {
		return f4;
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_141() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write7_merged_banks_5_cache {
	// RAM Box: {[-25, 1047], [-3, 1026]}
	// Capacity: 142
	// # of read delays: 4
  // 0, 1, 71, 141
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 69> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 69> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_71() {
		return f4;
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_141() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write8_merged_banks_5_cache {
	// RAM Box: {[-24, 1048], [-3, 1026]}
	// Capacity: 142
	// # of read delays: 4
  // 0, 1, 71, 141
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 69> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 69> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_71() {
		return f4;
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_141() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_6_h3_6_update_0_write9_merged_banks_5_cache {
	// RAM Box: {[-23, 1049], [-3, 1026]}
	// Capacity: 142
	// # of read delays: 4
  // 0, 1, 71, 141
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 69> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 69> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_71() {
		return f4;
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_141() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 69
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 69 reading from capacity: 1
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
  // # of banks: 16
  h3_6_h3_6_update_0_write0_merged_banks_5_cache h3_6_h3_6_update_0_write0_merged_banks_5;
  h3_6_h3_6_update_0_write1_merged_banks_5_cache h3_6_h3_6_update_0_write1_merged_banks_5;
  h3_6_h3_6_update_0_write10_merged_banks_5_cache h3_6_h3_6_update_0_write10_merged_banks_5;
  h3_6_h3_6_update_0_write11_merged_banks_5_cache h3_6_h3_6_update_0_write11_merged_banks_5;
  h3_6_h3_6_update_0_write12_merged_banks_5_cache h3_6_h3_6_update_0_write12_merged_banks_5;
  h3_6_h3_6_update_0_write13_merged_banks_5_cache h3_6_h3_6_update_0_write13_merged_banks_5;
  h3_6_h3_6_update_0_write14_merged_banks_5_cache h3_6_h3_6_update_0_write14_merged_banks_5;
  h3_6_h3_6_update_0_write15_merged_banks_5_cache h3_6_h3_6_update_0_write15_merged_banks_5;
  h3_6_h3_6_update_0_write2_merged_banks_5_cache h3_6_h3_6_update_0_write2_merged_banks_5;
  h3_6_h3_6_update_0_write3_merged_banks_5_cache h3_6_h3_6_update_0_write3_merged_banks_5;
  h3_6_h3_6_update_0_write4_merged_banks_5_cache h3_6_h3_6_update_0_write4_merged_banks_5;
  h3_6_h3_6_update_0_write5_merged_banks_5_cache h3_6_h3_6_update_0_write5_merged_banks_5;
  h3_6_h3_6_update_0_write6_merged_banks_5_cache h3_6_h3_6_update_0_write6_merged_banks_5;
  h3_6_h3_6_update_0_write7_merged_banks_5_cache h3_6_h3_6_update_0_write7_merged_banks_5;
  h3_6_h3_6_update_0_write8_merged_banks_5_cache h3_6_h3_6_update_0_write8_merged_banks_5;
  h3_6_h3_6_update_0_write9_merged_banks_5_cache h3_6_h3_6_update_0_write9_merged_banks_5;
};



inline void h3_6_h3_6_update_0_write0_write(hw_uint<32> & h3_6_h3_6_update_0_write0, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.push(h3_6_h3_6_update_0_write0);
}

inline void h3_6_h3_6_update_0_write1_write(hw_uint<32> & h3_6_h3_6_update_0_write1, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write1_merged_banks_5.push(h3_6_h3_6_update_0_write1);
}

inline void h3_6_h3_6_update_0_write10_write(hw_uint<32> & h3_6_h3_6_update_0_write10, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write10_merged_banks_5.push(h3_6_h3_6_update_0_write10);
}

inline void h3_6_h3_6_update_0_write11_write(hw_uint<32> & h3_6_h3_6_update_0_write11, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write11_merged_banks_5.push(h3_6_h3_6_update_0_write11);
}

inline void h3_6_h3_6_update_0_write12_write(hw_uint<32> & h3_6_h3_6_update_0_write12, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write12_merged_banks_5.push(h3_6_h3_6_update_0_write12);
}

inline void h3_6_h3_6_update_0_write13_write(hw_uint<32> & h3_6_h3_6_update_0_write13, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write13_merged_banks_5.push(h3_6_h3_6_update_0_write13);
}

inline void h3_6_h3_6_update_0_write14_write(hw_uint<32> & h3_6_h3_6_update_0_write14, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write14_merged_banks_5.push(h3_6_h3_6_update_0_write14);
}

inline void h3_6_h3_6_update_0_write15_write(hw_uint<32> & h3_6_h3_6_update_0_write15, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write15_merged_banks_5.push(h3_6_h3_6_update_0_write15);
}

inline void h3_6_h3_6_update_0_write2_write(hw_uint<32> & h3_6_h3_6_update_0_write2, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write2_merged_banks_5.push(h3_6_h3_6_update_0_write2);
}

inline void h3_6_h3_6_update_0_write3_write(hw_uint<32> & h3_6_h3_6_update_0_write3, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write3_merged_banks_5.push(h3_6_h3_6_update_0_write3);
}

inline void h3_6_h3_6_update_0_write4_write(hw_uint<32> & h3_6_h3_6_update_0_write4, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write4_merged_banks_5.push(h3_6_h3_6_update_0_write4);
}

inline void h3_6_h3_6_update_0_write5_write(hw_uint<32> & h3_6_h3_6_update_0_write5, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write5_merged_banks_5.push(h3_6_h3_6_update_0_write5);
}

inline void h3_6_h3_6_update_0_write6_write(hw_uint<32> & h3_6_h3_6_update_0_write6, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write6_merged_banks_5.push(h3_6_h3_6_update_0_write6);
}

inline void h3_6_h3_6_update_0_write7_write(hw_uint<32> & h3_6_h3_6_update_0_write7, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write7_merged_banks_5.push(h3_6_h3_6_update_0_write7);
}

inline void h3_6_h3_6_update_0_write8_write(hw_uint<32> & h3_6_h3_6_update_0_write8, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write8_merged_banks_5.push(h3_6_h3_6_update_0_write8);
}

inline void h3_6_h3_6_update_0_write9_write(hw_uint<32> & h3_6_h3_6_update_0_write9, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  h3_6.h3_6_h3_6_update_0_write9_merged_banks_5.push(h3_6_h3_6_update_0_write9);
}

inline hw_uint<32>  h3_7_rd0_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd0 read pattern: { h3_7_update_0[d0, d1] -> h3_6[-1 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write15 = h3_6.h3_6_h3_6_update_0_write15_merged_banks_5.peek_72();
  return value_h3_6_h3_6_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_7_rd1_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd1 read pattern: { h3_7_update_0[d0, d1] -> h3_6[16d0, -1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.peek_141();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd10_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd10 read pattern: { h3_7_update_0[d0, d1] -> h3_6[1 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd11_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd11 read pattern: { h3_7_update_0[d0, d1] -> h3_6[2 + 16d0, -1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_5.peek_141();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_7_rd12_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd12 read pattern: { h3_7_update_0[d0, d1] -> h3_6[2 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_7_rd13_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd13 read pattern: { h3_7_update_0[d0, d1] -> h3_6[2 + 16d0, 1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_7_rd14_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd14 read pattern: { h3_7_update_0[d0, d1] -> h3_6[3 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd15_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd15 read pattern: { h3_7_update_0[d0, d1] -> h3_6[2 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_7_rd16_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd16 read pattern: { h3_7_update_0[d0, d1] -> h3_6[3 + 16d0, -1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_5.peek_141();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd17_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd17 read pattern: { h3_7_update_0[d0, d1] -> h3_6[3 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd18_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd18 read pattern: { h3_7_update_0[d0, d1] -> h3_6[3 + 16d0, 1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd19_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd19 read pattern: { h3_7_update_0[d0, d1] -> h3_6[4 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write4 = h3_6.h3_6_h3_6_update_0_write4_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_7_rd2_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd2 read pattern: { h3_7_update_0[d0, d1] -> h3_6[16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd20_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd20 read pattern: { h3_7_update_0[d0, d1] -> h3_6[3 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd21_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd21 read pattern: { h3_7_update_0[d0, d1] -> h3_6[4 + 16d0, -1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write4 = h3_6.h3_6_h3_6_update_0_write4_merged_banks_5.peek_141();
  return value_h3_6_h3_6_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_7_rd22_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd22 read pattern: { h3_7_update_0[d0, d1] -> h3_6[4 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write4 = h3_6.h3_6_h3_6_update_0_write4_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_7_rd23_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd23 read pattern: { h3_7_update_0[d0, d1] -> h3_6[4 + 16d0, 1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write4 = h3_6.h3_6_h3_6_update_0_write4_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_7_rd24_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd24 read pattern: { h3_7_update_0[d0, d1] -> h3_6[5 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write5 = h3_6.h3_6_h3_6_update_0_write5_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_7_rd25_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd25 read pattern: { h3_7_update_0[d0, d1] -> h3_6[4 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write4 = h3_6.h3_6_h3_6_update_0_write4_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_7_rd26_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd26 read pattern: { h3_7_update_0[d0, d1] -> h3_6[5 + 16d0, -1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write5 = h3_6.h3_6_h3_6_update_0_write5_merged_banks_5.peek_141();
  return value_h3_6_h3_6_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_7_rd27_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd27 read pattern: { h3_7_update_0[d0, d1] -> h3_6[5 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write5 = h3_6.h3_6_h3_6_update_0_write5_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_7_rd28_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd28 read pattern: { h3_7_update_0[d0, d1] -> h3_6[5 + 16d0, 1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write5 = h3_6.h3_6_h3_6_update_0_write5_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_7_rd29_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd29 read pattern: { h3_7_update_0[d0, d1] -> h3_6[6 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write6 = h3_6.h3_6_h3_6_update_0_write6_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_7_rd3_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd3 read pattern: { h3_7_update_0[d0, d1] -> h3_6[16d0, 1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd30_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd30 read pattern: { h3_7_update_0[d0, d1] -> h3_6[5 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write5 = h3_6.h3_6_h3_6_update_0_write5_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_7_rd31_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd31 read pattern: { h3_7_update_0[d0, d1] -> h3_6[6 + 16d0, -1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write6 = h3_6.h3_6_h3_6_update_0_write6_merged_banks_5.peek_141();
  return value_h3_6_h3_6_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_7_rd32_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd32 read pattern: { h3_7_update_0[d0, d1] -> h3_6[6 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write6 = h3_6.h3_6_h3_6_update_0_write6_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_7_rd33_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd33 read pattern: { h3_7_update_0[d0, d1] -> h3_6[6 + 16d0, 1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write6 = h3_6.h3_6_h3_6_update_0_write6_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_7_rd34_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd34 read pattern: { h3_7_update_0[d0, d1] -> h3_6[7 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write7 = h3_6.h3_6_h3_6_update_0_write7_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_7_rd35_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd35 read pattern: { h3_7_update_0[d0, d1] -> h3_6[6 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write6 = h3_6.h3_6_h3_6_update_0_write6_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_7_rd36_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd36 read pattern: { h3_7_update_0[d0, d1] -> h3_6[7 + 16d0, -1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write7 = h3_6.h3_6_h3_6_update_0_write7_merged_banks_5.peek_141();
  return value_h3_6_h3_6_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_7_rd37_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd37 read pattern: { h3_7_update_0[d0, d1] -> h3_6[7 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write7 = h3_6.h3_6_h3_6_update_0_write7_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_7_rd38_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd38 read pattern: { h3_7_update_0[d0, d1] -> h3_6[7 + 16d0, 1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write7 = h3_6.h3_6_h3_6_update_0_write7_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_7_rd39_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd39 read pattern: { h3_7_update_0[d0, d1] -> h3_6[8 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write8 = h3_6.h3_6_h3_6_update_0_write8_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_7_rd4_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd4 read pattern: { h3_7_update_0[d0, d1] -> h3_6[1 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd40_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd40 read pattern: { h3_7_update_0[d0, d1] -> h3_6[7 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write7 = h3_6.h3_6_h3_6_update_0_write7_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_7_rd41_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd41 read pattern: { h3_7_update_0[d0, d1] -> h3_6[8 + 16d0, -1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write8 = h3_6.h3_6_h3_6_update_0_write8_merged_banks_5.peek_141();
  return value_h3_6_h3_6_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_7_rd42_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd42 read pattern: { h3_7_update_0[d0, d1] -> h3_6[8 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write8 = h3_6.h3_6_h3_6_update_0_write8_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_7_rd43_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd43 read pattern: { h3_7_update_0[d0, d1] -> h3_6[8 + 16d0, 1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write8 = h3_6.h3_6_h3_6_update_0_write8_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_7_rd44_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd44 read pattern: { h3_7_update_0[d0, d1] -> h3_6[9 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write9 = h3_6.h3_6_h3_6_update_0_write9_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_7_rd45_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd45 read pattern: { h3_7_update_0[d0, d1] -> h3_6[8 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write8 = h3_6.h3_6_h3_6_update_0_write8_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_7_rd46_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd46 read pattern: { h3_7_update_0[d0, d1] -> h3_6[9 + 16d0, -1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write9 = h3_6.h3_6_h3_6_update_0_write9_merged_banks_5.peek_141();
  return value_h3_6_h3_6_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_7_rd47_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd47 read pattern: { h3_7_update_0[d0, d1] -> h3_6[9 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write9 = h3_6.h3_6_h3_6_update_0_write9_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_7_rd48_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd48 read pattern: { h3_7_update_0[d0, d1] -> h3_6[9 + 16d0, 1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write9 = h3_6.h3_6_h3_6_update_0_write9_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_7_rd49_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd49 read pattern: { h3_7_update_0[d0, d1] -> h3_6[10 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write10 = h3_6.h3_6_h3_6_update_0_write10_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_7_rd5_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd5 read pattern: { h3_7_update_0[d0, d1] -> h3_6[16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd50_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd50 read pattern: { h3_7_update_0[d0, d1] -> h3_6[9 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write9 = h3_6.h3_6_h3_6_update_0_write9_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_7_rd51_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd51 read pattern: { h3_7_update_0[d0, d1] -> h3_6[10 + 16d0, -1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write10 = h3_6.h3_6_h3_6_update_0_write10_merged_banks_5.peek_141();
  return value_h3_6_h3_6_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_7_rd52_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd52 read pattern: { h3_7_update_0[d0, d1] -> h3_6[10 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write10 = h3_6.h3_6_h3_6_update_0_write10_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_7_rd53_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd53 read pattern: { h3_7_update_0[d0, d1] -> h3_6[10 + 16d0, 1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write10 = h3_6.h3_6_h3_6_update_0_write10_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_7_rd54_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd54 read pattern: { h3_7_update_0[d0, d1] -> h3_6[11 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write11 = h3_6.h3_6_h3_6_update_0_write11_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_7_rd55_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd55 read pattern: { h3_7_update_0[d0, d1] -> h3_6[10 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write10 = h3_6.h3_6_h3_6_update_0_write10_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_7_rd56_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd56 read pattern: { h3_7_update_0[d0, d1] -> h3_6[11 + 16d0, -1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write11 = h3_6.h3_6_h3_6_update_0_write11_merged_banks_5.peek_141();
  return value_h3_6_h3_6_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_7_rd57_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd57 read pattern: { h3_7_update_0[d0, d1] -> h3_6[11 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write11 = h3_6.h3_6_h3_6_update_0_write11_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_7_rd58_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd58 read pattern: { h3_7_update_0[d0, d1] -> h3_6[11 + 16d0, 1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write11 = h3_6.h3_6_h3_6_update_0_write11_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_7_rd59_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd59 read pattern: { h3_7_update_0[d0, d1] -> h3_6[12 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write12 = h3_6.h3_6_h3_6_update_0_write12_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_7_rd6_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd6 read pattern: { h3_7_update_0[d0, d1] -> h3_6[1 + 16d0, -1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_5.peek_141();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd60_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd60 read pattern: { h3_7_update_0[d0, d1] -> h3_6[11 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write11 = h3_6.h3_6_h3_6_update_0_write11_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_7_rd61_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd61 read pattern: { h3_7_update_0[d0, d1] -> h3_6[12 + 16d0, -1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write12 = h3_6.h3_6_h3_6_update_0_write12_merged_banks_5.peek_141();
  return value_h3_6_h3_6_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_7_rd62_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd62 read pattern: { h3_7_update_0[d0, d1] -> h3_6[12 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write12 = h3_6.h3_6_h3_6_update_0_write12_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_7_rd63_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd63 read pattern: { h3_7_update_0[d0, d1] -> h3_6[12 + 16d0, 1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write12 = h3_6.h3_6_h3_6_update_0_write12_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_7_rd64_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd64 read pattern: { h3_7_update_0[d0, d1] -> h3_6[13 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write13 = h3_6.h3_6_h3_6_update_0_write13_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_7_rd65_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd65 read pattern: { h3_7_update_0[d0, d1] -> h3_6[12 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write12 = h3_6.h3_6_h3_6_update_0_write12_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_7_rd66_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd66 read pattern: { h3_7_update_0[d0, d1] -> h3_6[13 + 16d0, -1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write13 = h3_6.h3_6_h3_6_update_0_write13_merged_banks_5.peek_141();
  return value_h3_6_h3_6_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_7_rd67_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd67 read pattern: { h3_7_update_0[d0, d1] -> h3_6[13 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write13 = h3_6.h3_6_h3_6_update_0_write13_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_7_rd68_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd68 read pattern: { h3_7_update_0[d0, d1] -> h3_6[13 + 16d0, 1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write13 = h3_6.h3_6_h3_6_update_0_write13_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_7_rd69_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd69 read pattern: { h3_7_update_0[d0, d1] -> h3_6[14 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write14 = h3_6.h3_6_h3_6_update_0_write14_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_7_rd7_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd7 read pattern: { h3_7_update_0[d0, d1] -> h3_6[1 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd70_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd70 read pattern: { h3_7_update_0[d0, d1] -> h3_6[13 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write13 = h3_6.h3_6_h3_6_update_0_write13_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_7_rd71_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd71 read pattern: { h3_7_update_0[d0, d1] -> h3_6[14 + 16d0, -1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write14 = h3_6.h3_6_h3_6_update_0_write14_merged_banks_5.peek_141();
  return value_h3_6_h3_6_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_7_rd72_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd72 read pattern: { h3_7_update_0[d0, d1] -> h3_6[14 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write14 = h3_6.h3_6_h3_6_update_0_write14_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_7_rd73_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd73 read pattern: { h3_7_update_0[d0, d1] -> h3_6[14 + 16d0, 1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write14 = h3_6.h3_6_h3_6_update_0_write14_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_7_rd74_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd74 read pattern: { h3_7_update_0[d0, d1] -> h3_6[15 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write15 = h3_6.h3_6_h3_6_update_0_write15_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_7_rd75_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd75 read pattern: { h3_7_update_0[d0, d1] -> h3_6[14 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write14 = h3_6.h3_6_h3_6_update_0_write14_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_7_rd76_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd76 read pattern: { h3_7_update_0[d0, d1] -> h3_6[15 + 16d0, -1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write15 = h3_6.h3_6_h3_6_update_0_write15_merged_banks_5.peek_141();
  return value_h3_6_h3_6_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_7_rd77_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd77 read pattern: { h3_7_update_0[d0, d1] -> h3_6[15 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write15 = h3_6.h3_6_h3_6_update_0_write15_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_7_rd78_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd78 read pattern: { h3_7_update_0[d0, d1] -> h3_6[15 + 16d0, 1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write15 = h3_6.h3_6_h3_6_update_0_write15_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_7_rd79_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd79 read pattern: { h3_7_update_0[d0, d1] -> h3_6[16 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.peek_70();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd8_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd8 read pattern: { h3_7_update_0[d0, d1] -> h3_6[1 + 16d0, 1 + d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd9_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd9 read pattern: { h3_7_update_0[d0, d1] -> h3_6[2 + 16d0, d1] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_5.peek_71();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

// # of bundles = 2
// h3_6_update_0_write
//	h3_6_h3_6_update_0_write0
//	h3_6_h3_6_update_0_write1
//	h3_6_h3_6_update_0_write2
//	h3_6_h3_6_update_0_write3
//	h3_6_h3_6_update_0_write4
//	h3_6_h3_6_update_0_write5
//	h3_6_h3_6_update_0_write6
//	h3_6_h3_6_update_0_write7
//	h3_6_h3_6_update_0_write8
//	h3_6_h3_6_update_0_write9
//	h3_6_h3_6_update_0_write10
//	h3_6_h3_6_update_0_write11
//	h3_6_h3_6_update_0_write12
//	h3_6_h3_6_update_0_write13
//	h3_6_h3_6_update_0_write14
//	h3_6_h3_6_update_0_write15
inline void h3_6_h3_6_update_0_write_bundle_write(hw_uint<512>& h3_6_update_0_write, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_6_h3_6_update_0_write0_res = h3_6_update_0_write.extract<0, 31>();
	h3_6_h3_6_update_0_write0_write(h3_6_h3_6_update_0_write0_res, h3_6, d0, d1, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write1_res = h3_6_update_0_write.extract<32, 63>();
	h3_6_h3_6_update_0_write1_write(h3_6_h3_6_update_0_write1_res, h3_6, d0, d1, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write2_res = h3_6_update_0_write.extract<64, 95>();
	h3_6_h3_6_update_0_write2_write(h3_6_h3_6_update_0_write2_res, h3_6, d0, d1, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write3_res = h3_6_update_0_write.extract<96, 127>();
	h3_6_h3_6_update_0_write3_write(h3_6_h3_6_update_0_write3_res, h3_6, d0, d1, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write4_res = h3_6_update_0_write.extract<128, 159>();
	h3_6_h3_6_update_0_write4_write(h3_6_h3_6_update_0_write4_res, h3_6, d0, d1, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write5_res = h3_6_update_0_write.extract<160, 191>();
	h3_6_h3_6_update_0_write5_write(h3_6_h3_6_update_0_write5_res, h3_6, d0, d1, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write6_res = h3_6_update_0_write.extract<192, 223>();
	h3_6_h3_6_update_0_write6_write(h3_6_h3_6_update_0_write6_res, h3_6, d0, d1, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write7_res = h3_6_update_0_write.extract<224, 255>();
	h3_6_h3_6_update_0_write7_write(h3_6_h3_6_update_0_write7_res, h3_6, d0, d1, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write8_res = h3_6_update_0_write.extract<256, 287>();
	h3_6_h3_6_update_0_write8_write(h3_6_h3_6_update_0_write8_res, h3_6, d0, d1, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write9_res = h3_6_update_0_write.extract<288, 319>();
	h3_6_h3_6_update_0_write9_write(h3_6_h3_6_update_0_write9_res, h3_6, d0, d1, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write10_res = h3_6_update_0_write.extract<320, 351>();
	h3_6_h3_6_update_0_write10_write(h3_6_h3_6_update_0_write10_res, h3_6, d0, d1, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write11_res = h3_6_update_0_write.extract<352, 383>();
	h3_6_h3_6_update_0_write11_write(h3_6_h3_6_update_0_write11_res, h3_6, d0, d1, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write12_res = h3_6_update_0_write.extract<384, 415>();
	h3_6_h3_6_update_0_write12_write(h3_6_h3_6_update_0_write12_res, h3_6, d0, d1, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write13_res = h3_6_update_0_write.extract<416, 447>();
	h3_6_h3_6_update_0_write13_write(h3_6_h3_6_update_0_write13_res, h3_6, d0, d1, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write14_res = h3_6_update_0_write.extract<448, 479>();
	h3_6_h3_6_update_0_write14_write(h3_6_h3_6_update_0_write14_res, h3_6, d0, d1, dynamic_address);
	hw_uint<32>  h3_6_h3_6_update_0_write15_res = h3_6_update_0_write.extract<480, 511>();
	h3_6_h3_6_update_0_write15_write(h3_6_h3_6_update_0_write15_res, h3_6, d0, d1, dynamic_address);
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
//	h3_7_rd20
//	h3_7_rd21
//	h3_7_rd22
//	h3_7_rd23
//	h3_7_rd24
//	h3_7_rd25
//	h3_7_rd26
//	h3_7_rd27
//	h3_7_rd28
//	h3_7_rd29
//	h3_7_rd30
//	h3_7_rd31
//	h3_7_rd32
//	h3_7_rd33
//	h3_7_rd34
//	h3_7_rd35
//	h3_7_rd36
//	h3_7_rd37
//	h3_7_rd38
//	h3_7_rd39
//	h3_7_rd40
//	h3_7_rd41
//	h3_7_rd42
//	h3_7_rd43
//	h3_7_rd44
//	h3_7_rd45
//	h3_7_rd46
//	h3_7_rd47
//	h3_7_rd48
//	h3_7_rd49
//	h3_7_rd50
//	h3_7_rd51
//	h3_7_rd52
//	h3_7_rd53
//	h3_7_rd54
//	h3_7_rd55
//	h3_7_rd56
//	h3_7_rd57
//	h3_7_rd58
//	h3_7_rd59
//	h3_7_rd60
//	h3_7_rd61
//	h3_7_rd62
//	h3_7_rd63
//	h3_7_rd64
//	h3_7_rd65
//	h3_7_rd66
//	h3_7_rd67
//	h3_7_rd68
//	h3_7_rd69
//	h3_7_rd70
//	h3_7_rd71
//	h3_7_rd72
//	h3_7_rd73
//	h3_7_rd74
//	h3_7_rd75
//	h3_7_rd76
//	h3_7_rd77
//	h3_7_rd78
//	h3_7_rd79
inline hw_uint<2560> h3_6_h3_7_update_0_read_bundle_read(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 80
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
    // h3_7_rd20
    // h3_7_rd21
    // h3_7_rd22
    // h3_7_rd23
    // h3_7_rd24
    // h3_7_rd25
    // h3_7_rd26
    // h3_7_rd27
    // h3_7_rd28
    // h3_7_rd29
    // h3_7_rd30
    // h3_7_rd31
    // h3_7_rd32
    // h3_7_rd33
    // h3_7_rd34
    // h3_7_rd35
    // h3_7_rd36
    // h3_7_rd37
    // h3_7_rd38
    // h3_7_rd39
    // h3_7_rd40
    // h3_7_rd41
    // h3_7_rd42
    // h3_7_rd43
    // h3_7_rd44
    // h3_7_rd45
    // h3_7_rd46
    // h3_7_rd47
    // h3_7_rd48
    // h3_7_rd49
    // h3_7_rd50
    // h3_7_rd51
    // h3_7_rd52
    // h3_7_rd53
    // h3_7_rd54
    // h3_7_rd55
    // h3_7_rd56
    // h3_7_rd57
    // h3_7_rd58
    // h3_7_rd59
    // h3_7_rd60
    // h3_7_rd61
    // h3_7_rd62
    // h3_7_rd63
    // h3_7_rd64
    // h3_7_rd65
    // h3_7_rd66
    // h3_7_rd67
    // h3_7_rd68
    // h3_7_rd69
    // h3_7_rd70
    // h3_7_rd71
    // h3_7_rd72
    // h3_7_rd73
    // h3_7_rd74
    // h3_7_rd75
    // h3_7_rd76
    // h3_7_rd77
    // h3_7_rd78
    // h3_7_rd79

	hw_uint<2560> result;
	hw_uint<32>  h3_7_rd0_res = h3_7_rd0_select(h3_6, d0, d1, dynamic_address);
	set_at<0, 2560>(result, h3_7_rd0_res);
	hw_uint<32>  h3_7_rd1_res = h3_7_rd1_select(h3_6, d0, d1, dynamic_address);
	set_at<32, 2560>(result, h3_7_rd1_res);
	hw_uint<32>  h3_7_rd2_res = h3_7_rd2_select(h3_6, d0, d1, dynamic_address);
	set_at<64, 2560>(result, h3_7_rd2_res);
	hw_uint<32>  h3_7_rd3_res = h3_7_rd3_select(h3_6, d0, d1, dynamic_address);
	set_at<96, 2560>(result, h3_7_rd3_res);
	hw_uint<32>  h3_7_rd4_res = h3_7_rd4_select(h3_6, d0, d1, dynamic_address);
	set_at<128, 2560>(result, h3_7_rd4_res);
	hw_uint<32>  h3_7_rd5_res = h3_7_rd5_select(h3_6, d0, d1, dynamic_address);
	set_at<160, 2560>(result, h3_7_rd5_res);
	hw_uint<32>  h3_7_rd6_res = h3_7_rd6_select(h3_6, d0, d1, dynamic_address);
	set_at<192, 2560>(result, h3_7_rd6_res);
	hw_uint<32>  h3_7_rd7_res = h3_7_rd7_select(h3_6, d0, d1, dynamic_address);
	set_at<224, 2560>(result, h3_7_rd7_res);
	hw_uint<32>  h3_7_rd8_res = h3_7_rd8_select(h3_6, d0, d1, dynamic_address);
	set_at<256, 2560>(result, h3_7_rd8_res);
	hw_uint<32>  h3_7_rd9_res = h3_7_rd9_select(h3_6, d0, d1, dynamic_address);
	set_at<288, 2560>(result, h3_7_rd9_res);
	hw_uint<32>  h3_7_rd10_res = h3_7_rd10_select(h3_6, d0, d1, dynamic_address);
	set_at<320, 2560>(result, h3_7_rd10_res);
	hw_uint<32>  h3_7_rd11_res = h3_7_rd11_select(h3_6, d0, d1, dynamic_address);
	set_at<352, 2560>(result, h3_7_rd11_res);
	hw_uint<32>  h3_7_rd12_res = h3_7_rd12_select(h3_6, d0, d1, dynamic_address);
	set_at<384, 2560>(result, h3_7_rd12_res);
	hw_uint<32>  h3_7_rd13_res = h3_7_rd13_select(h3_6, d0, d1, dynamic_address);
	set_at<416, 2560>(result, h3_7_rd13_res);
	hw_uint<32>  h3_7_rd14_res = h3_7_rd14_select(h3_6, d0, d1, dynamic_address);
	set_at<448, 2560>(result, h3_7_rd14_res);
	hw_uint<32>  h3_7_rd15_res = h3_7_rd15_select(h3_6, d0, d1, dynamic_address);
	set_at<480, 2560>(result, h3_7_rd15_res);
	hw_uint<32>  h3_7_rd16_res = h3_7_rd16_select(h3_6, d0, d1, dynamic_address);
	set_at<512, 2560>(result, h3_7_rd16_res);
	hw_uint<32>  h3_7_rd17_res = h3_7_rd17_select(h3_6, d0, d1, dynamic_address);
	set_at<544, 2560>(result, h3_7_rd17_res);
	hw_uint<32>  h3_7_rd18_res = h3_7_rd18_select(h3_6, d0, d1, dynamic_address);
	set_at<576, 2560>(result, h3_7_rd18_res);
	hw_uint<32>  h3_7_rd19_res = h3_7_rd19_select(h3_6, d0, d1, dynamic_address);
	set_at<608, 2560>(result, h3_7_rd19_res);
	hw_uint<32>  h3_7_rd20_res = h3_7_rd20_select(h3_6, d0, d1, dynamic_address);
	set_at<640, 2560>(result, h3_7_rd20_res);
	hw_uint<32>  h3_7_rd21_res = h3_7_rd21_select(h3_6, d0, d1, dynamic_address);
	set_at<672, 2560>(result, h3_7_rd21_res);
	hw_uint<32>  h3_7_rd22_res = h3_7_rd22_select(h3_6, d0, d1, dynamic_address);
	set_at<704, 2560>(result, h3_7_rd22_res);
	hw_uint<32>  h3_7_rd23_res = h3_7_rd23_select(h3_6, d0, d1, dynamic_address);
	set_at<736, 2560>(result, h3_7_rd23_res);
	hw_uint<32>  h3_7_rd24_res = h3_7_rd24_select(h3_6, d0, d1, dynamic_address);
	set_at<768, 2560>(result, h3_7_rd24_res);
	hw_uint<32>  h3_7_rd25_res = h3_7_rd25_select(h3_6, d0, d1, dynamic_address);
	set_at<800, 2560>(result, h3_7_rd25_res);
	hw_uint<32>  h3_7_rd26_res = h3_7_rd26_select(h3_6, d0, d1, dynamic_address);
	set_at<832, 2560>(result, h3_7_rd26_res);
	hw_uint<32>  h3_7_rd27_res = h3_7_rd27_select(h3_6, d0, d1, dynamic_address);
	set_at<864, 2560>(result, h3_7_rd27_res);
	hw_uint<32>  h3_7_rd28_res = h3_7_rd28_select(h3_6, d0, d1, dynamic_address);
	set_at<896, 2560>(result, h3_7_rd28_res);
	hw_uint<32>  h3_7_rd29_res = h3_7_rd29_select(h3_6, d0, d1, dynamic_address);
	set_at<928, 2560>(result, h3_7_rd29_res);
	hw_uint<32>  h3_7_rd30_res = h3_7_rd30_select(h3_6, d0, d1, dynamic_address);
	set_at<960, 2560>(result, h3_7_rd30_res);
	hw_uint<32>  h3_7_rd31_res = h3_7_rd31_select(h3_6, d0, d1, dynamic_address);
	set_at<992, 2560>(result, h3_7_rd31_res);
	hw_uint<32>  h3_7_rd32_res = h3_7_rd32_select(h3_6, d0, d1, dynamic_address);
	set_at<1024, 2560>(result, h3_7_rd32_res);
	hw_uint<32>  h3_7_rd33_res = h3_7_rd33_select(h3_6, d0, d1, dynamic_address);
	set_at<1056, 2560>(result, h3_7_rd33_res);
	hw_uint<32>  h3_7_rd34_res = h3_7_rd34_select(h3_6, d0, d1, dynamic_address);
	set_at<1088, 2560>(result, h3_7_rd34_res);
	hw_uint<32>  h3_7_rd35_res = h3_7_rd35_select(h3_6, d0, d1, dynamic_address);
	set_at<1120, 2560>(result, h3_7_rd35_res);
	hw_uint<32>  h3_7_rd36_res = h3_7_rd36_select(h3_6, d0, d1, dynamic_address);
	set_at<1152, 2560>(result, h3_7_rd36_res);
	hw_uint<32>  h3_7_rd37_res = h3_7_rd37_select(h3_6, d0, d1, dynamic_address);
	set_at<1184, 2560>(result, h3_7_rd37_res);
	hw_uint<32>  h3_7_rd38_res = h3_7_rd38_select(h3_6, d0, d1, dynamic_address);
	set_at<1216, 2560>(result, h3_7_rd38_res);
	hw_uint<32>  h3_7_rd39_res = h3_7_rd39_select(h3_6, d0, d1, dynamic_address);
	set_at<1248, 2560>(result, h3_7_rd39_res);
	hw_uint<32>  h3_7_rd40_res = h3_7_rd40_select(h3_6, d0, d1, dynamic_address);
	set_at<1280, 2560>(result, h3_7_rd40_res);
	hw_uint<32>  h3_7_rd41_res = h3_7_rd41_select(h3_6, d0, d1, dynamic_address);
	set_at<1312, 2560>(result, h3_7_rd41_res);
	hw_uint<32>  h3_7_rd42_res = h3_7_rd42_select(h3_6, d0, d1, dynamic_address);
	set_at<1344, 2560>(result, h3_7_rd42_res);
	hw_uint<32>  h3_7_rd43_res = h3_7_rd43_select(h3_6, d0, d1, dynamic_address);
	set_at<1376, 2560>(result, h3_7_rd43_res);
	hw_uint<32>  h3_7_rd44_res = h3_7_rd44_select(h3_6, d0, d1, dynamic_address);
	set_at<1408, 2560>(result, h3_7_rd44_res);
	hw_uint<32>  h3_7_rd45_res = h3_7_rd45_select(h3_6, d0, d1, dynamic_address);
	set_at<1440, 2560>(result, h3_7_rd45_res);
	hw_uint<32>  h3_7_rd46_res = h3_7_rd46_select(h3_6, d0, d1, dynamic_address);
	set_at<1472, 2560>(result, h3_7_rd46_res);
	hw_uint<32>  h3_7_rd47_res = h3_7_rd47_select(h3_6, d0, d1, dynamic_address);
	set_at<1504, 2560>(result, h3_7_rd47_res);
	hw_uint<32>  h3_7_rd48_res = h3_7_rd48_select(h3_6, d0, d1, dynamic_address);
	set_at<1536, 2560>(result, h3_7_rd48_res);
	hw_uint<32>  h3_7_rd49_res = h3_7_rd49_select(h3_6, d0, d1, dynamic_address);
	set_at<1568, 2560>(result, h3_7_rd49_res);
	hw_uint<32>  h3_7_rd50_res = h3_7_rd50_select(h3_6, d0, d1, dynamic_address);
	set_at<1600, 2560>(result, h3_7_rd50_res);
	hw_uint<32>  h3_7_rd51_res = h3_7_rd51_select(h3_6, d0, d1, dynamic_address);
	set_at<1632, 2560>(result, h3_7_rd51_res);
	hw_uint<32>  h3_7_rd52_res = h3_7_rd52_select(h3_6, d0, d1, dynamic_address);
	set_at<1664, 2560>(result, h3_7_rd52_res);
	hw_uint<32>  h3_7_rd53_res = h3_7_rd53_select(h3_6, d0, d1, dynamic_address);
	set_at<1696, 2560>(result, h3_7_rd53_res);
	hw_uint<32>  h3_7_rd54_res = h3_7_rd54_select(h3_6, d0, d1, dynamic_address);
	set_at<1728, 2560>(result, h3_7_rd54_res);
	hw_uint<32>  h3_7_rd55_res = h3_7_rd55_select(h3_6, d0, d1, dynamic_address);
	set_at<1760, 2560>(result, h3_7_rd55_res);
	hw_uint<32>  h3_7_rd56_res = h3_7_rd56_select(h3_6, d0, d1, dynamic_address);
	set_at<1792, 2560>(result, h3_7_rd56_res);
	hw_uint<32>  h3_7_rd57_res = h3_7_rd57_select(h3_6, d0, d1, dynamic_address);
	set_at<1824, 2560>(result, h3_7_rd57_res);
	hw_uint<32>  h3_7_rd58_res = h3_7_rd58_select(h3_6, d0, d1, dynamic_address);
	set_at<1856, 2560>(result, h3_7_rd58_res);
	hw_uint<32>  h3_7_rd59_res = h3_7_rd59_select(h3_6, d0, d1, dynamic_address);
	set_at<1888, 2560>(result, h3_7_rd59_res);
	hw_uint<32>  h3_7_rd60_res = h3_7_rd60_select(h3_6, d0, d1, dynamic_address);
	set_at<1920, 2560>(result, h3_7_rd60_res);
	hw_uint<32>  h3_7_rd61_res = h3_7_rd61_select(h3_6, d0, d1, dynamic_address);
	set_at<1952, 2560>(result, h3_7_rd61_res);
	hw_uint<32>  h3_7_rd62_res = h3_7_rd62_select(h3_6, d0, d1, dynamic_address);
	set_at<1984, 2560>(result, h3_7_rd62_res);
	hw_uint<32>  h3_7_rd63_res = h3_7_rd63_select(h3_6, d0, d1, dynamic_address);
	set_at<2016, 2560>(result, h3_7_rd63_res);
	hw_uint<32>  h3_7_rd64_res = h3_7_rd64_select(h3_6, d0, d1, dynamic_address);
	set_at<2048, 2560>(result, h3_7_rd64_res);
	hw_uint<32>  h3_7_rd65_res = h3_7_rd65_select(h3_6, d0, d1, dynamic_address);
	set_at<2080, 2560>(result, h3_7_rd65_res);
	hw_uint<32>  h3_7_rd66_res = h3_7_rd66_select(h3_6, d0, d1, dynamic_address);
	set_at<2112, 2560>(result, h3_7_rd66_res);
	hw_uint<32>  h3_7_rd67_res = h3_7_rd67_select(h3_6, d0, d1, dynamic_address);
	set_at<2144, 2560>(result, h3_7_rd67_res);
	hw_uint<32>  h3_7_rd68_res = h3_7_rd68_select(h3_6, d0, d1, dynamic_address);
	set_at<2176, 2560>(result, h3_7_rd68_res);
	hw_uint<32>  h3_7_rd69_res = h3_7_rd69_select(h3_6, d0, d1, dynamic_address);
	set_at<2208, 2560>(result, h3_7_rd69_res);
	hw_uint<32>  h3_7_rd70_res = h3_7_rd70_select(h3_6, d0, d1, dynamic_address);
	set_at<2240, 2560>(result, h3_7_rd70_res);
	hw_uint<32>  h3_7_rd71_res = h3_7_rd71_select(h3_6, d0, d1, dynamic_address);
	set_at<2272, 2560>(result, h3_7_rd71_res);
	hw_uint<32>  h3_7_rd72_res = h3_7_rd72_select(h3_6, d0, d1, dynamic_address);
	set_at<2304, 2560>(result, h3_7_rd72_res);
	hw_uint<32>  h3_7_rd73_res = h3_7_rd73_select(h3_6, d0, d1, dynamic_address);
	set_at<2336, 2560>(result, h3_7_rd73_res);
	hw_uint<32>  h3_7_rd74_res = h3_7_rd74_select(h3_6, d0, d1, dynamic_address);
	set_at<2368, 2560>(result, h3_7_rd74_res);
	hw_uint<32>  h3_7_rd75_res = h3_7_rd75_select(h3_6, d0, d1, dynamic_address);
	set_at<2400, 2560>(result, h3_7_rd75_res);
	hw_uint<32>  h3_7_rd76_res = h3_7_rd76_select(h3_6, d0, d1, dynamic_address);
	set_at<2432, 2560>(result, h3_7_rd76_res);
	hw_uint<32>  h3_7_rd77_res = h3_7_rd77_select(h3_6, d0, d1, dynamic_address);
	set_at<2464, 2560>(result, h3_7_rd77_res);
	hw_uint<32>  h3_7_rd78_res = h3_7_rd78_select(h3_6, d0, d1, dynamic_address);
	set_at<2496, 2560>(result, h3_7_rd78_res);
	hw_uint<32>  h3_7_rd79_res = h3_7_rd79_select(h3_6, d0, d1, dynamic_address);
	set_at<2528, 2560>(result, h3_7_rd79_res);
	return result;
}

struct h3_7_h3_7_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-16, 1040], [-2, 1024]}
	// Capacity: 138
	// # of read delays: 5
  // 0, 1, 68, 69, 137
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 66> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 67> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_67() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_68() {
		return f4;
	}

	inline hw_uint<32>  peek_69() {
		return f6;
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_137() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
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
	// RAM Box: {[-15, 1025], [-2, 1025]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 67> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 67> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_69() {
		return f4;
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_137() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_7_h3_7_update_0_write10_merged_banks_5_cache {
	// RAM Box: {[-6, 1034], [-2, 1025]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 67> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 67> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_69() {
		return f4;
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_137() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_7_h3_7_update_0_write11_merged_banks_5_cache {
	// RAM Box: {[-5, 1035], [-2, 1025]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 67> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 67> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_69() {
		return f4;
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_137() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_7_h3_7_update_0_write12_merged_banks_5_cache {
	// RAM Box: {[-4, 1036], [-2, 1025]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 67> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 67> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_69() {
		return f4;
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_137() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_7_h3_7_update_0_write13_merged_banks_5_cache {
	// RAM Box: {[-3, 1037], [-2, 1025]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 67> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 67> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_69() {
		return f4;
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_137() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_7_h3_7_update_0_write14_merged_banks_5_cache {
	// RAM Box: {[-2, 1038], [-2, 1025]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 67> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 67> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_69() {
		return f4;
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_137() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_7_h3_7_update_0_write15_merged_banks_5_cache {
	// RAM Box: {[-17, 1039], [-1, 1025]}
	// Capacity: 138
	// # of read delays: 5
  // 0, 1, 69, 70, 137
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 67> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 66> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_69() {
		return f4;
	}

	inline hw_uint<32>  peek_70() {
		return f6;
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_137() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 66
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 66 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
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
	// RAM Box: {[-14, 1026], [-2, 1025]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 67> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 67> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_69() {
		return f4;
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_137() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
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
	// RAM Box: {[-13, 1027], [-2, 1025]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 67> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 67> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_69() {
		return f4;
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_137() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_7_h3_7_update_0_write4_merged_banks_5_cache {
	// RAM Box: {[-12, 1028], [-2, 1025]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 67> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 67> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_69() {
		return f4;
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_137() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_7_h3_7_update_0_write5_merged_banks_5_cache {
	// RAM Box: {[-11, 1029], [-2, 1025]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 67> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 67> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_69() {
		return f4;
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_137() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_7_h3_7_update_0_write6_merged_banks_5_cache {
	// RAM Box: {[-10, 1030], [-2, 1025]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 67> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 67> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_69() {
		return f4;
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_137() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_7_h3_7_update_0_write7_merged_banks_5_cache {
	// RAM Box: {[-9, 1031], [-2, 1025]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 67> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 67> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_69() {
		return f4;
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_137() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_7_h3_7_update_0_write8_merged_banks_5_cache {
	// RAM Box: {[-8, 1032], [-2, 1025]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 67> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 67> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_69() {
		return f4;
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_137() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_7_h3_7_update_0_write9_merged_banks_5_cache {
	// RAM Box: {[-7, 1033], [-2, 1025]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 69, 137
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 67> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 67> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_69() {
		return f4;
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_137() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 67
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 67 reading from capacity: 1
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
  // # of banks: 16
  h3_7_h3_7_update_0_write0_merged_banks_5_cache h3_7_h3_7_update_0_write0_merged_banks_5;
  h3_7_h3_7_update_0_write1_merged_banks_5_cache h3_7_h3_7_update_0_write1_merged_banks_5;
  h3_7_h3_7_update_0_write10_merged_banks_5_cache h3_7_h3_7_update_0_write10_merged_banks_5;
  h3_7_h3_7_update_0_write11_merged_banks_5_cache h3_7_h3_7_update_0_write11_merged_banks_5;
  h3_7_h3_7_update_0_write12_merged_banks_5_cache h3_7_h3_7_update_0_write12_merged_banks_5;
  h3_7_h3_7_update_0_write13_merged_banks_5_cache h3_7_h3_7_update_0_write13_merged_banks_5;
  h3_7_h3_7_update_0_write14_merged_banks_5_cache h3_7_h3_7_update_0_write14_merged_banks_5;
  h3_7_h3_7_update_0_write15_merged_banks_5_cache h3_7_h3_7_update_0_write15_merged_banks_5;
  h3_7_h3_7_update_0_write2_merged_banks_5_cache h3_7_h3_7_update_0_write2_merged_banks_5;
  h3_7_h3_7_update_0_write3_merged_banks_5_cache h3_7_h3_7_update_0_write3_merged_banks_5;
  h3_7_h3_7_update_0_write4_merged_banks_5_cache h3_7_h3_7_update_0_write4_merged_banks_5;
  h3_7_h3_7_update_0_write5_merged_banks_5_cache h3_7_h3_7_update_0_write5_merged_banks_5;
  h3_7_h3_7_update_0_write6_merged_banks_5_cache h3_7_h3_7_update_0_write6_merged_banks_5;
  h3_7_h3_7_update_0_write7_merged_banks_5_cache h3_7_h3_7_update_0_write7_merged_banks_5;
  h3_7_h3_7_update_0_write8_merged_banks_5_cache h3_7_h3_7_update_0_write8_merged_banks_5;
  h3_7_h3_7_update_0_write9_merged_banks_5_cache h3_7_h3_7_update_0_write9_merged_banks_5;
};



inline void h3_7_h3_7_update_0_write0_write(hw_uint<32> & h3_7_h3_7_update_0_write0, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.push(h3_7_h3_7_update_0_write0);
}

inline void h3_7_h3_7_update_0_write1_write(hw_uint<32> & h3_7_h3_7_update_0_write1, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write1_merged_banks_5.push(h3_7_h3_7_update_0_write1);
}

inline void h3_7_h3_7_update_0_write10_write(hw_uint<32> & h3_7_h3_7_update_0_write10, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write10_merged_banks_5.push(h3_7_h3_7_update_0_write10);
}

inline void h3_7_h3_7_update_0_write11_write(hw_uint<32> & h3_7_h3_7_update_0_write11, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write11_merged_banks_5.push(h3_7_h3_7_update_0_write11);
}

inline void h3_7_h3_7_update_0_write12_write(hw_uint<32> & h3_7_h3_7_update_0_write12, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write12_merged_banks_5.push(h3_7_h3_7_update_0_write12);
}

inline void h3_7_h3_7_update_0_write13_write(hw_uint<32> & h3_7_h3_7_update_0_write13, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write13_merged_banks_5.push(h3_7_h3_7_update_0_write13);
}

inline void h3_7_h3_7_update_0_write14_write(hw_uint<32> & h3_7_h3_7_update_0_write14, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write14_merged_banks_5.push(h3_7_h3_7_update_0_write14);
}

inline void h3_7_h3_7_update_0_write15_write(hw_uint<32> & h3_7_h3_7_update_0_write15, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write15_merged_banks_5.push(h3_7_h3_7_update_0_write15);
}

inline void h3_7_h3_7_update_0_write2_write(hw_uint<32> & h3_7_h3_7_update_0_write2, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write2_merged_banks_5.push(h3_7_h3_7_update_0_write2);
}

inline void h3_7_h3_7_update_0_write3_write(hw_uint<32> & h3_7_h3_7_update_0_write3, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write3_merged_banks_5.push(h3_7_h3_7_update_0_write3);
}

inline void h3_7_h3_7_update_0_write4_write(hw_uint<32> & h3_7_h3_7_update_0_write4, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write4_merged_banks_5.push(h3_7_h3_7_update_0_write4);
}

inline void h3_7_h3_7_update_0_write5_write(hw_uint<32> & h3_7_h3_7_update_0_write5, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write5_merged_banks_5.push(h3_7_h3_7_update_0_write5);
}

inline void h3_7_h3_7_update_0_write6_write(hw_uint<32> & h3_7_h3_7_update_0_write6, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write6_merged_banks_5.push(h3_7_h3_7_update_0_write6);
}

inline void h3_7_h3_7_update_0_write7_write(hw_uint<32> & h3_7_h3_7_update_0_write7, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write7_merged_banks_5.push(h3_7_h3_7_update_0_write7);
}

inline void h3_7_h3_7_update_0_write8_write(hw_uint<32> & h3_7_h3_7_update_0_write8, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write8_merged_banks_5.push(h3_7_h3_7_update_0_write8);
}

inline void h3_7_h3_7_update_0_write9_write(hw_uint<32> & h3_7_h3_7_update_0_write9, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  h3_7.h3_7_h3_7_update_0_write9_merged_banks_5.push(h3_7_h3_7_update_0_write9);
}

inline hw_uint<32>  h3_8_rd0_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd0 read pattern: { h3_8_update_0[d0, d1] -> h3_7[-1 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write15 = h3_7.h3_7_h3_7_update_0_write15_merged_banks_5.peek_70();
  return value_h3_7_h3_7_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_8_rd1_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd1 read pattern: { h3_8_update_0[d0, d1] -> h3_7[16d0, -1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.peek_137();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd10_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd10 read pattern: { h3_8_update_0[d0, d1] -> h3_7[1 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_8_rd11_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd11 read pattern: { h3_8_update_0[d0, d1] -> h3_7[2 + 16d0, -1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write2 = h3_7.h3_7_h3_7_update_0_write2_merged_banks_5.peek_137();
  return value_h3_7_h3_7_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_8_rd12_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd12 read pattern: { h3_8_update_0[d0, d1] -> h3_7[2 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write2 = h3_7.h3_7_h3_7_update_0_write2_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_8_rd13_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd13 read pattern: { h3_8_update_0[d0, d1] -> h3_7[2 + 16d0, 1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write2 = h3_7.h3_7_h3_7_update_0_write2_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_8_rd14_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd14 read pattern: { h3_8_update_0[d0, d1] -> h3_7[3 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write3 = h3_7.h3_7_h3_7_update_0_write3_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_8_rd15_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd15 read pattern: { h3_8_update_0[d0, d1] -> h3_7[2 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write2 = h3_7.h3_7_h3_7_update_0_write2_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_8_rd16_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd16 read pattern: { h3_8_update_0[d0, d1] -> h3_7[3 + 16d0, -1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write3 = h3_7.h3_7_h3_7_update_0_write3_merged_banks_5.peek_137();
  return value_h3_7_h3_7_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_8_rd17_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd17 read pattern: { h3_8_update_0[d0, d1] -> h3_7[3 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write3 = h3_7.h3_7_h3_7_update_0_write3_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_8_rd18_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd18 read pattern: { h3_8_update_0[d0, d1] -> h3_7[3 + 16d0, 1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write3 = h3_7.h3_7_h3_7_update_0_write3_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_8_rd19_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd19 read pattern: { h3_8_update_0[d0, d1] -> h3_7[4 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write4 = h3_7.h3_7_h3_7_update_0_write4_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_8_rd2_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd2 read pattern: { h3_8_update_0[d0, d1] -> h3_7[16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd20_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd20 read pattern: { h3_8_update_0[d0, d1] -> h3_7[3 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write3 = h3_7.h3_7_h3_7_update_0_write3_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_8_rd21_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd21 read pattern: { h3_8_update_0[d0, d1] -> h3_7[4 + 16d0, -1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write4 = h3_7.h3_7_h3_7_update_0_write4_merged_banks_5.peek_137();
  return value_h3_7_h3_7_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_8_rd22_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd22 read pattern: { h3_8_update_0[d0, d1] -> h3_7[4 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write4 = h3_7.h3_7_h3_7_update_0_write4_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_8_rd23_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd23 read pattern: { h3_8_update_0[d0, d1] -> h3_7[4 + 16d0, 1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write4 = h3_7.h3_7_h3_7_update_0_write4_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_8_rd24_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd24 read pattern: { h3_8_update_0[d0, d1] -> h3_7[5 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write5 = h3_7.h3_7_h3_7_update_0_write5_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_8_rd25_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd25 read pattern: { h3_8_update_0[d0, d1] -> h3_7[4 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write4 = h3_7.h3_7_h3_7_update_0_write4_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_8_rd26_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd26 read pattern: { h3_8_update_0[d0, d1] -> h3_7[5 + 16d0, -1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write5 = h3_7.h3_7_h3_7_update_0_write5_merged_banks_5.peek_137();
  return value_h3_7_h3_7_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_8_rd27_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd27 read pattern: { h3_8_update_0[d0, d1] -> h3_7[5 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write5 = h3_7.h3_7_h3_7_update_0_write5_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_8_rd28_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd28 read pattern: { h3_8_update_0[d0, d1] -> h3_7[5 + 16d0, 1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write5 = h3_7.h3_7_h3_7_update_0_write5_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_8_rd29_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd29 read pattern: { h3_8_update_0[d0, d1] -> h3_7[6 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write6 = h3_7.h3_7_h3_7_update_0_write6_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_8_rd3_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd3 read pattern: { h3_8_update_0[d0, d1] -> h3_7[16d0, 1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd30_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd30 read pattern: { h3_8_update_0[d0, d1] -> h3_7[5 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write5 = h3_7.h3_7_h3_7_update_0_write5_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_8_rd31_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd31 read pattern: { h3_8_update_0[d0, d1] -> h3_7[6 + 16d0, -1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write6 = h3_7.h3_7_h3_7_update_0_write6_merged_banks_5.peek_137();
  return value_h3_7_h3_7_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_8_rd32_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd32 read pattern: { h3_8_update_0[d0, d1] -> h3_7[6 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write6 = h3_7.h3_7_h3_7_update_0_write6_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_8_rd33_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd33 read pattern: { h3_8_update_0[d0, d1] -> h3_7[6 + 16d0, 1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write6 = h3_7.h3_7_h3_7_update_0_write6_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_8_rd34_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd34 read pattern: { h3_8_update_0[d0, d1] -> h3_7[7 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write7 = h3_7.h3_7_h3_7_update_0_write7_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_8_rd35_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd35 read pattern: { h3_8_update_0[d0, d1] -> h3_7[6 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write6 = h3_7.h3_7_h3_7_update_0_write6_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_8_rd36_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd36 read pattern: { h3_8_update_0[d0, d1] -> h3_7[7 + 16d0, -1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write7 = h3_7.h3_7_h3_7_update_0_write7_merged_banks_5.peek_137();
  return value_h3_7_h3_7_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_8_rd37_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd37 read pattern: { h3_8_update_0[d0, d1] -> h3_7[7 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write7 = h3_7.h3_7_h3_7_update_0_write7_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_8_rd38_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd38 read pattern: { h3_8_update_0[d0, d1] -> h3_7[7 + 16d0, 1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write7 = h3_7.h3_7_h3_7_update_0_write7_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_8_rd39_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd39 read pattern: { h3_8_update_0[d0, d1] -> h3_7[8 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write8 = h3_7.h3_7_h3_7_update_0_write8_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_8_rd4_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd4 read pattern: { h3_8_update_0[d0, d1] -> h3_7[1 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_8_rd40_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd40 read pattern: { h3_8_update_0[d0, d1] -> h3_7[7 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write7 = h3_7.h3_7_h3_7_update_0_write7_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_8_rd41_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd41 read pattern: { h3_8_update_0[d0, d1] -> h3_7[8 + 16d0, -1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write8 = h3_7.h3_7_h3_7_update_0_write8_merged_banks_5.peek_137();
  return value_h3_7_h3_7_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_8_rd42_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd42 read pattern: { h3_8_update_0[d0, d1] -> h3_7[8 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write8 = h3_7.h3_7_h3_7_update_0_write8_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_8_rd43_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd43 read pattern: { h3_8_update_0[d0, d1] -> h3_7[8 + 16d0, 1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write8 = h3_7.h3_7_h3_7_update_0_write8_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_8_rd44_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd44 read pattern: { h3_8_update_0[d0, d1] -> h3_7[9 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write9 = h3_7.h3_7_h3_7_update_0_write9_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_8_rd45_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd45 read pattern: { h3_8_update_0[d0, d1] -> h3_7[8 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write8 = h3_7.h3_7_h3_7_update_0_write8_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_8_rd46_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd46 read pattern: { h3_8_update_0[d0, d1] -> h3_7[9 + 16d0, -1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write9 = h3_7.h3_7_h3_7_update_0_write9_merged_banks_5.peek_137();
  return value_h3_7_h3_7_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_8_rd47_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd47 read pattern: { h3_8_update_0[d0, d1] -> h3_7[9 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write9 = h3_7.h3_7_h3_7_update_0_write9_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_8_rd48_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd48 read pattern: { h3_8_update_0[d0, d1] -> h3_7[9 + 16d0, 1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write9 = h3_7.h3_7_h3_7_update_0_write9_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_8_rd49_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd49 read pattern: { h3_8_update_0[d0, d1] -> h3_7[10 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write10 = h3_7.h3_7_h3_7_update_0_write10_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_8_rd5_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd5 read pattern: { h3_8_update_0[d0, d1] -> h3_7[16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd50_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd50 read pattern: { h3_8_update_0[d0, d1] -> h3_7[9 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write9 = h3_7.h3_7_h3_7_update_0_write9_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_8_rd51_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd51 read pattern: { h3_8_update_0[d0, d1] -> h3_7[10 + 16d0, -1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write10 = h3_7.h3_7_h3_7_update_0_write10_merged_banks_5.peek_137();
  return value_h3_7_h3_7_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_8_rd52_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd52 read pattern: { h3_8_update_0[d0, d1] -> h3_7[10 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write10 = h3_7.h3_7_h3_7_update_0_write10_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_8_rd53_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd53 read pattern: { h3_8_update_0[d0, d1] -> h3_7[10 + 16d0, 1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write10 = h3_7.h3_7_h3_7_update_0_write10_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_8_rd54_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd54 read pattern: { h3_8_update_0[d0, d1] -> h3_7[11 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write11 = h3_7.h3_7_h3_7_update_0_write11_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_8_rd55_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd55 read pattern: { h3_8_update_0[d0, d1] -> h3_7[10 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write10 = h3_7.h3_7_h3_7_update_0_write10_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_8_rd56_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd56 read pattern: { h3_8_update_0[d0, d1] -> h3_7[11 + 16d0, -1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write11 = h3_7.h3_7_h3_7_update_0_write11_merged_banks_5.peek_137();
  return value_h3_7_h3_7_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_8_rd57_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd57 read pattern: { h3_8_update_0[d0, d1] -> h3_7[11 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write11 = h3_7.h3_7_h3_7_update_0_write11_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_8_rd58_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd58 read pattern: { h3_8_update_0[d0, d1] -> h3_7[11 + 16d0, 1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write11 = h3_7.h3_7_h3_7_update_0_write11_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_8_rd59_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd59 read pattern: { h3_8_update_0[d0, d1] -> h3_7[12 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write12 = h3_7.h3_7_h3_7_update_0_write12_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_8_rd6_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd6 read pattern: { h3_8_update_0[d0, d1] -> h3_7[1 + 16d0, -1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_5.peek_137();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_8_rd60_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd60 read pattern: { h3_8_update_0[d0, d1] -> h3_7[11 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write11 = h3_7.h3_7_h3_7_update_0_write11_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_8_rd61_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd61 read pattern: { h3_8_update_0[d0, d1] -> h3_7[12 + 16d0, -1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write12 = h3_7.h3_7_h3_7_update_0_write12_merged_banks_5.peek_137();
  return value_h3_7_h3_7_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_8_rd62_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd62 read pattern: { h3_8_update_0[d0, d1] -> h3_7[12 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write12 = h3_7.h3_7_h3_7_update_0_write12_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_8_rd63_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd63 read pattern: { h3_8_update_0[d0, d1] -> h3_7[12 + 16d0, 1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write12 = h3_7.h3_7_h3_7_update_0_write12_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_8_rd64_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd64 read pattern: { h3_8_update_0[d0, d1] -> h3_7[13 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write13 = h3_7.h3_7_h3_7_update_0_write13_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_8_rd65_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd65 read pattern: { h3_8_update_0[d0, d1] -> h3_7[12 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write12 = h3_7.h3_7_h3_7_update_0_write12_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_8_rd66_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd66 read pattern: { h3_8_update_0[d0, d1] -> h3_7[13 + 16d0, -1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write13 = h3_7.h3_7_h3_7_update_0_write13_merged_banks_5.peek_137();
  return value_h3_7_h3_7_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_8_rd67_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd67 read pattern: { h3_8_update_0[d0, d1] -> h3_7[13 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write13 = h3_7.h3_7_h3_7_update_0_write13_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_8_rd68_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd68 read pattern: { h3_8_update_0[d0, d1] -> h3_7[13 + 16d0, 1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write13 = h3_7.h3_7_h3_7_update_0_write13_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_8_rd69_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd69 read pattern: { h3_8_update_0[d0, d1] -> h3_7[14 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write14 = h3_7.h3_7_h3_7_update_0_write14_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_8_rd7_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd7 read pattern: { h3_8_update_0[d0, d1] -> h3_7[1 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_8_rd70_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd70 read pattern: { h3_8_update_0[d0, d1] -> h3_7[13 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write13 = h3_7.h3_7_h3_7_update_0_write13_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_8_rd71_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd71 read pattern: { h3_8_update_0[d0, d1] -> h3_7[14 + 16d0, -1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write14 = h3_7.h3_7_h3_7_update_0_write14_merged_banks_5.peek_137();
  return value_h3_7_h3_7_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_8_rd72_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd72 read pattern: { h3_8_update_0[d0, d1] -> h3_7[14 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write14 = h3_7.h3_7_h3_7_update_0_write14_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_8_rd73_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd73 read pattern: { h3_8_update_0[d0, d1] -> h3_7[14 + 16d0, 1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write14 = h3_7.h3_7_h3_7_update_0_write14_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_8_rd74_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd74 read pattern: { h3_8_update_0[d0, d1] -> h3_7[15 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write15 = h3_7.h3_7_h3_7_update_0_write15_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_8_rd75_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd75 read pattern: { h3_8_update_0[d0, d1] -> h3_7[14 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write14 = h3_7.h3_7_h3_7_update_0_write14_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_8_rd76_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd76 read pattern: { h3_8_update_0[d0, d1] -> h3_7[15 + 16d0, -1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write15 = h3_7.h3_7_h3_7_update_0_write15_merged_banks_5.peek_137();
  return value_h3_7_h3_7_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_8_rd77_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd77 read pattern: { h3_8_update_0[d0, d1] -> h3_7[15 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write15 = h3_7.h3_7_h3_7_update_0_write15_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_8_rd78_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd78 read pattern: { h3_8_update_0[d0, d1] -> h3_7[15 + 16d0, 1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write15 = h3_7.h3_7_h3_7_update_0_write15_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_8_rd79_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd79 read pattern: { h3_8_update_0[d0, d1] -> h3_7[16 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.peek_68();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd8_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd8 read pattern: { h3_8_update_0[d0, d1] -> h3_7[1 + 16d0, 1 + d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_8_rd9_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd9 read pattern: { h3_8_update_0[d0, d1] -> h3_7[2 + 16d0, d1] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write2 = h3_7.h3_7_h3_7_update_0_write2_merged_banks_5.peek_69();
  return value_h3_7_h3_7_update_0_write2;
  return 0;
}

// # of bundles = 2
// h3_7_update_0_write
//	h3_7_h3_7_update_0_write0
//	h3_7_h3_7_update_0_write1
//	h3_7_h3_7_update_0_write2
//	h3_7_h3_7_update_0_write3
//	h3_7_h3_7_update_0_write4
//	h3_7_h3_7_update_0_write5
//	h3_7_h3_7_update_0_write6
//	h3_7_h3_7_update_0_write7
//	h3_7_h3_7_update_0_write8
//	h3_7_h3_7_update_0_write9
//	h3_7_h3_7_update_0_write10
//	h3_7_h3_7_update_0_write11
//	h3_7_h3_7_update_0_write12
//	h3_7_h3_7_update_0_write13
//	h3_7_h3_7_update_0_write14
//	h3_7_h3_7_update_0_write15
inline void h3_7_h3_7_update_0_write_bundle_write(hw_uint<512>& h3_7_update_0_write, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_7_h3_7_update_0_write0_res = h3_7_update_0_write.extract<0, 31>();
	h3_7_h3_7_update_0_write0_write(h3_7_h3_7_update_0_write0_res, h3_7, d0, d1, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write1_res = h3_7_update_0_write.extract<32, 63>();
	h3_7_h3_7_update_0_write1_write(h3_7_h3_7_update_0_write1_res, h3_7, d0, d1, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write2_res = h3_7_update_0_write.extract<64, 95>();
	h3_7_h3_7_update_0_write2_write(h3_7_h3_7_update_0_write2_res, h3_7, d0, d1, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write3_res = h3_7_update_0_write.extract<96, 127>();
	h3_7_h3_7_update_0_write3_write(h3_7_h3_7_update_0_write3_res, h3_7, d0, d1, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write4_res = h3_7_update_0_write.extract<128, 159>();
	h3_7_h3_7_update_0_write4_write(h3_7_h3_7_update_0_write4_res, h3_7, d0, d1, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write5_res = h3_7_update_0_write.extract<160, 191>();
	h3_7_h3_7_update_0_write5_write(h3_7_h3_7_update_0_write5_res, h3_7, d0, d1, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write6_res = h3_7_update_0_write.extract<192, 223>();
	h3_7_h3_7_update_0_write6_write(h3_7_h3_7_update_0_write6_res, h3_7, d0, d1, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write7_res = h3_7_update_0_write.extract<224, 255>();
	h3_7_h3_7_update_0_write7_write(h3_7_h3_7_update_0_write7_res, h3_7, d0, d1, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write8_res = h3_7_update_0_write.extract<256, 287>();
	h3_7_h3_7_update_0_write8_write(h3_7_h3_7_update_0_write8_res, h3_7, d0, d1, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write9_res = h3_7_update_0_write.extract<288, 319>();
	h3_7_h3_7_update_0_write9_write(h3_7_h3_7_update_0_write9_res, h3_7, d0, d1, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write10_res = h3_7_update_0_write.extract<320, 351>();
	h3_7_h3_7_update_0_write10_write(h3_7_h3_7_update_0_write10_res, h3_7, d0, d1, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write11_res = h3_7_update_0_write.extract<352, 383>();
	h3_7_h3_7_update_0_write11_write(h3_7_h3_7_update_0_write11_res, h3_7, d0, d1, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write12_res = h3_7_update_0_write.extract<384, 415>();
	h3_7_h3_7_update_0_write12_write(h3_7_h3_7_update_0_write12_res, h3_7, d0, d1, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write13_res = h3_7_update_0_write.extract<416, 447>();
	h3_7_h3_7_update_0_write13_write(h3_7_h3_7_update_0_write13_res, h3_7, d0, d1, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write14_res = h3_7_update_0_write.extract<448, 479>();
	h3_7_h3_7_update_0_write14_write(h3_7_h3_7_update_0_write14_res, h3_7, d0, d1, dynamic_address);
	hw_uint<32>  h3_7_h3_7_update_0_write15_res = h3_7_update_0_write.extract<480, 511>();
	h3_7_h3_7_update_0_write15_write(h3_7_h3_7_update_0_write15_res, h3_7, d0, d1, dynamic_address);
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
//	h3_8_rd20
//	h3_8_rd21
//	h3_8_rd22
//	h3_8_rd23
//	h3_8_rd24
//	h3_8_rd25
//	h3_8_rd26
//	h3_8_rd27
//	h3_8_rd28
//	h3_8_rd29
//	h3_8_rd30
//	h3_8_rd31
//	h3_8_rd32
//	h3_8_rd33
//	h3_8_rd34
//	h3_8_rd35
//	h3_8_rd36
//	h3_8_rd37
//	h3_8_rd38
//	h3_8_rd39
//	h3_8_rd40
//	h3_8_rd41
//	h3_8_rd42
//	h3_8_rd43
//	h3_8_rd44
//	h3_8_rd45
//	h3_8_rd46
//	h3_8_rd47
//	h3_8_rd48
//	h3_8_rd49
//	h3_8_rd50
//	h3_8_rd51
//	h3_8_rd52
//	h3_8_rd53
//	h3_8_rd54
//	h3_8_rd55
//	h3_8_rd56
//	h3_8_rd57
//	h3_8_rd58
//	h3_8_rd59
//	h3_8_rd60
//	h3_8_rd61
//	h3_8_rd62
//	h3_8_rd63
//	h3_8_rd64
//	h3_8_rd65
//	h3_8_rd66
//	h3_8_rd67
//	h3_8_rd68
//	h3_8_rd69
//	h3_8_rd70
//	h3_8_rd71
//	h3_8_rd72
//	h3_8_rd73
//	h3_8_rd74
//	h3_8_rd75
//	h3_8_rd76
//	h3_8_rd77
//	h3_8_rd78
//	h3_8_rd79
inline hw_uint<2560> h3_7_h3_8_update_0_read_bundle_read(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 80
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
    // h3_8_rd20
    // h3_8_rd21
    // h3_8_rd22
    // h3_8_rd23
    // h3_8_rd24
    // h3_8_rd25
    // h3_8_rd26
    // h3_8_rd27
    // h3_8_rd28
    // h3_8_rd29
    // h3_8_rd30
    // h3_8_rd31
    // h3_8_rd32
    // h3_8_rd33
    // h3_8_rd34
    // h3_8_rd35
    // h3_8_rd36
    // h3_8_rd37
    // h3_8_rd38
    // h3_8_rd39
    // h3_8_rd40
    // h3_8_rd41
    // h3_8_rd42
    // h3_8_rd43
    // h3_8_rd44
    // h3_8_rd45
    // h3_8_rd46
    // h3_8_rd47
    // h3_8_rd48
    // h3_8_rd49
    // h3_8_rd50
    // h3_8_rd51
    // h3_8_rd52
    // h3_8_rd53
    // h3_8_rd54
    // h3_8_rd55
    // h3_8_rd56
    // h3_8_rd57
    // h3_8_rd58
    // h3_8_rd59
    // h3_8_rd60
    // h3_8_rd61
    // h3_8_rd62
    // h3_8_rd63
    // h3_8_rd64
    // h3_8_rd65
    // h3_8_rd66
    // h3_8_rd67
    // h3_8_rd68
    // h3_8_rd69
    // h3_8_rd70
    // h3_8_rd71
    // h3_8_rd72
    // h3_8_rd73
    // h3_8_rd74
    // h3_8_rd75
    // h3_8_rd76
    // h3_8_rd77
    // h3_8_rd78
    // h3_8_rd79

	hw_uint<2560> result;
	hw_uint<32>  h3_8_rd0_res = h3_8_rd0_select(h3_7, d0, d1, dynamic_address);
	set_at<0, 2560>(result, h3_8_rd0_res);
	hw_uint<32>  h3_8_rd1_res = h3_8_rd1_select(h3_7, d0, d1, dynamic_address);
	set_at<32, 2560>(result, h3_8_rd1_res);
	hw_uint<32>  h3_8_rd2_res = h3_8_rd2_select(h3_7, d0, d1, dynamic_address);
	set_at<64, 2560>(result, h3_8_rd2_res);
	hw_uint<32>  h3_8_rd3_res = h3_8_rd3_select(h3_7, d0, d1, dynamic_address);
	set_at<96, 2560>(result, h3_8_rd3_res);
	hw_uint<32>  h3_8_rd4_res = h3_8_rd4_select(h3_7, d0, d1, dynamic_address);
	set_at<128, 2560>(result, h3_8_rd4_res);
	hw_uint<32>  h3_8_rd5_res = h3_8_rd5_select(h3_7, d0, d1, dynamic_address);
	set_at<160, 2560>(result, h3_8_rd5_res);
	hw_uint<32>  h3_8_rd6_res = h3_8_rd6_select(h3_7, d0, d1, dynamic_address);
	set_at<192, 2560>(result, h3_8_rd6_res);
	hw_uint<32>  h3_8_rd7_res = h3_8_rd7_select(h3_7, d0, d1, dynamic_address);
	set_at<224, 2560>(result, h3_8_rd7_res);
	hw_uint<32>  h3_8_rd8_res = h3_8_rd8_select(h3_7, d0, d1, dynamic_address);
	set_at<256, 2560>(result, h3_8_rd8_res);
	hw_uint<32>  h3_8_rd9_res = h3_8_rd9_select(h3_7, d0, d1, dynamic_address);
	set_at<288, 2560>(result, h3_8_rd9_res);
	hw_uint<32>  h3_8_rd10_res = h3_8_rd10_select(h3_7, d0, d1, dynamic_address);
	set_at<320, 2560>(result, h3_8_rd10_res);
	hw_uint<32>  h3_8_rd11_res = h3_8_rd11_select(h3_7, d0, d1, dynamic_address);
	set_at<352, 2560>(result, h3_8_rd11_res);
	hw_uint<32>  h3_8_rd12_res = h3_8_rd12_select(h3_7, d0, d1, dynamic_address);
	set_at<384, 2560>(result, h3_8_rd12_res);
	hw_uint<32>  h3_8_rd13_res = h3_8_rd13_select(h3_7, d0, d1, dynamic_address);
	set_at<416, 2560>(result, h3_8_rd13_res);
	hw_uint<32>  h3_8_rd14_res = h3_8_rd14_select(h3_7, d0, d1, dynamic_address);
	set_at<448, 2560>(result, h3_8_rd14_res);
	hw_uint<32>  h3_8_rd15_res = h3_8_rd15_select(h3_7, d0, d1, dynamic_address);
	set_at<480, 2560>(result, h3_8_rd15_res);
	hw_uint<32>  h3_8_rd16_res = h3_8_rd16_select(h3_7, d0, d1, dynamic_address);
	set_at<512, 2560>(result, h3_8_rd16_res);
	hw_uint<32>  h3_8_rd17_res = h3_8_rd17_select(h3_7, d0, d1, dynamic_address);
	set_at<544, 2560>(result, h3_8_rd17_res);
	hw_uint<32>  h3_8_rd18_res = h3_8_rd18_select(h3_7, d0, d1, dynamic_address);
	set_at<576, 2560>(result, h3_8_rd18_res);
	hw_uint<32>  h3_8_rd19_res = h3_8_rd19_select(h3_7, d0, d1, dynamic_address);
	set_at<608, 2560>(result, h3_8_rd19_res);
	hw_uint<32>  h3_8_rd20_res = h3_8_rd20_select(h3_7, d0, d1, dynamic_address);
	set_at<640, 2560>(result, h3_8_rd20_res);
	hw_uint<32>  h3_8_rd21_res = h3_8_rd21_select(h3_7, d0, d1, dynamic_address);
	set_at<672, 2560>(result, h3_8_rd21_res);
	hw_uint<32>  h3_8_rd22_res = h3_8_rd22_select(h3_7, d0, d1, dynamic_address);
	set_at<704, 2560>(result, h3_8_rd22_res);
	hw_uint<32>  h3_8_rd23_res = h3_8_rd23_select(h3_7, d0, d1, dynamic_address);
	set_at<736, 2560>(result, h3_8_rd23_res);
	hw_uint<32>  h3_8_rd24_res = h3_8_rd24_select(h3_7, d0, d1, dynamic_address);
	set_at<768, 2560>(result, h3_8_rd24_res);
	hw_uint<32>  h3_8_rd25_res = h3_8_rd25_select(h3_7, d0, d1, dynamic_address);
	set_at<800, 2560>(result, h3_8_rd25_res);
	hw_uint<32>  h3_8_rd26_res = h3_8_rd26_select(h3_7, d0, d1, dynamic_address);
	set_at<832, 2560>(result, h3_8_rd26_res);
	hw_uint<32>  h3_8_rd27_res = h3_8_rd27_select(h3_7, d0, d1, dynamic_address);
	set_at<864, 2560>(result, h3_8_rd27_res);
	hw_uint<32>  h3_8_rd28_res = h3_8_rd28_select(h3_7, d0, d1, dynamic_address);
	set_at<896, 2560>(result, h3_8_rd28_res);
	hw_uint<32>  h3_8_rd29_res = h3_8_rd29_select(h3_7, d0, d1, dynamic_address);
	set_at<928, 2560>(result, h3_8_rd29_res);
	hw_uint<32>  h3_8_rd30_res = h3_8_rd30_select(h3_7, d0, d1, dynamic_address);
	set_at<960, 2560>(result, h3_8_rd30_res);
	hw_uint<32>  h3_8_rd31_res = h3_8_rd31_select(h3_7, d0, d1, dynamic_address);
	set_at<992, 2560>(result, h3_8_rd31_res);
	hw_uint<32>  h3_8_rd32_res = h3_8_rd32_select(h3_7, d0, d1, dynamic_address);
	set_at<1024, 2560>(result, h3_8_rd32_res);
	hw_uint<32>  h3_8_rd33_res = h3_8_rd33_select(h3_7, d0, d1, dynamic_address);
	set_at<1056, 2560>(result, h3_8_rd33_res);
	hw_uint<32>  h3_8_rd34_res = h3_8_rd34_select(h3_7, d0, d1, dynamic_address);
	set_at<1088, 2560>(result, h3_8_rd34_res);
	hw_uint<32>  h3_8_rd35_res = h3_8_rd35_select(h3_7, d0, d1, dynamic_address);
	set_at<1120, 2560>(result, h3_8_rd35_res);
	hw_uint<32>  h3_8_rd36_res = h3_8_rd36_select(h3_7, d0, d1, dynamic_address);
	set_at<1152, 2560>(result, h3_8_rd36_res);
	hw_uint<32>  h3_8_rd37_res = h3_8_rd37_select(h3_7, d0, d1, dynamic_address);
	set_at<1184, 2560>(result, h3_8_rd37_res);
	hw_uint<32>  h3_8_rd38_res = h3_8_rd38_select(h3_7, d0, d1, dynamic_address);
	set_at<1216, 2560>(result, h3_8_rd38_res);
	hw_uint<32>  h3_8_rd39_res = h3_8_rd39_select(h3_7, d0, d1, dynamic_address);
	set_at<1248, 2560>(result, h3_8_rd39_res);
	hw_uint<32>  h3_8_rd40_res = h3_8_rd40_select(h3_7, d0, d1, dynamic_address);
	set_at<1280, 2560>(result, h3_8_rd40_res);
	hw_uint<32>  h3_8_rd41_res = h3_8_rd41_select(h3_7, d0, d1, dynamic_address);
	set_at<1312, 2560>(result, h3_8_rd41_res);
	hw_uint<32>  h3_8_rd42_res = h3_8_rd42_select(h3_7, d0, d1, dynamic_address);
	set_at<1344, 2560>(result, h3_8_rd42_res);
	hw_uint<32>  h3_8_rd43_res = h3_8_rd43_select(h3_7, d0, d1, dynamic_address);
	set_at<1376, 2560>(result, h3_8_rd43_res);
	hw_uint<32>  h3_8_rd44_res = h3_8_rd44_select(h3_7, d0, d1, dynamic_address);
	set_at<1408, 2560>(result, h3_8_rd44_res);
	hw_uint<32>  h3_8_rd45_res = h3_8_rd45_select(h3_7, d0, d1, dynamic_address);
	set_at<1440, 2560>(result, h3_8_rd45_res);
	hw_uint<32>  h3_8_rd46_res = h3_8_rd46_select(h3_7, d0, d1, dynamic_address);
	set_at<1472, 2560>(result, h3_8_rd46_res);
	hw_uint<32>  h3_8_rd47_res = h3_8_rd47_select(h3_7, d0, d1, dynamic_address);
	set_at<1504, 2560>(result, h3_8_rd47_res);
	hw_uint<32>  h3_8_rd48_res = h3_8_rd48_select(h3_7, d0, d1, dynamic_address);
	set_at<1536, 2560>(result, h3_8_rd48_res);
	hw_uint<32>  h3_8_rd49_res = h3_8_rd49_select(h3_7, d0, d1, dynamic_address);
	set_at<1568, 2560>(result, h3_8_rd49_res);
	hw_uint<32>  h3_8_rd50_res = h3_8_rd50_select(h3_7, d0, d1, dynamic_address);
	set_at<1600, 2560>(result, h3_8_rd50_res);
	hw_uint<32>  h3_8_rd51_res = h3_8_rd51_select(h3_7, d0, d1, dynamic_address);
	set_at<1632, 2560>(result, h3_8_rd51_res);
	hw_uint<32>  h3_8_rd52_res = h3_8_rd52_select(h3_7, d0, d1, dynamic_address);
	set_at<1664, 2560>(result, h3_8_rd52_res);
	hw_uint<32>  h3_8_rd53_res = h3_8_rd53_select(h3_7, d0, d1, dynamic_address);
	set_at<1696, 2560>(result, h3_8_rd53_res);
	hw_uint<32>  h3_8_rd54_res = h3_8_rd54_select(h3_7, d0, d1, dynamic_address);
	set_at<1728, 2560>(result, h3_8_rd54_res);
	hw_uint<32>  h3_8_rd55_res = h3_8_rd55_select(h3_7, d0, d1, dynamic_address);
	set_at<1760, 2560>(result, h3_8_rd55_res);
	hw_uint<32>  h3_8_rd56_res = h3_8_rd56_select(h3_7, d0, d1, dynamic_address);
	set_at<1792, 2560>(result, h3_8_rd56_res);
	hw_uint<32>  h3_8_rd57_res = h3_8_rd57_select(h3_7, d0, d1, dynamic_address);
	set_at<1824, 2560>(result, h3_8_rd57_res);
	hw_uint<32>  h3_8_rd58_res = h3_8_rd58_select(h3_7, d0, d1, dynamic_address);
	set_at<1856, 2560>(result, h3_8_rd58_res);
	hw_uint<32>  h3_8_rd59_res = h3_8_rd59_select(h3_7, d0, d1, dynamic_address);
	set_at<1888, 2560>(result, h3_8_rd59_res);
	hw_uint<32>  h3_8_rd60_res = h3_8_rd60_select(h3_7, d0, d1, dynamic_address);
	set_at<1920, 2560>(result, h3_8_rd60_res);
	hw_uint<32>  h3_8_rd61_res = h3_8_rd61_select(h3_7, d0, d1, dynamic_address);
	set_at<1952, 2560>(result, h3_8_rd61_res);
	hw_uint<32>  h3_8_rd62_res = h3_8_rd62_select(h3_7, d0, d1, dynamic_address);
	set_at<1984, 2560>(result, h3_8_rd62_res);
	hw_uint<32>  h3_8_rd63_res = h3_8_rd63_select(h3_7, d0, d1, dynamic_address);
	set_at<2016, 2560>(result, h3_8_rd63_res);
	hw_uint<32>  h3_8_rd64_res = h3_8_rd64_select(h3_7, d0, d1, dynamic_address);
	set_at<2048, 2560>(result, h3_8_rd64_res);
	hw_uint<32>  h3_8_rd65_res = h3_8_rd65_select(h3_7, d0, d1, dynamic_address);
	set_at<2080, 2560>(result, h3_8_rd65_res);
	hw_uint<32>  h3_8_rd66_res = h3_8_rd66_select(h3_7, d0, d1, dynamic_address);
	set_at<2112, 2560>(result, h3_8_rd66_res);
	hw_uint<32>  h3_8_rd67_res = h3_8_rd67_select(h3_7, d0, d1, dynamic_address);
	set_at<2144, 2560>(result, h3_8_rd67_res);
	hw_uint<32>  h3_8_rd68_res = h3_8_rd68_select(h3_7, d0, d1, dynamic_address);
	set_at<2176, 2560>(result, h3_8_rd68_res);
	hw_uint<32>  h3_8_rd69_res = h3_8_rd69_select(h3_7, d0, d1, dynamic_address);
	set_at<2208, 2560>(result, h3_8_rd69_res);
	hw_uint<32>  h3_8_rd70_res = h3_8_rd70_select(h3_7, d0, d1, dynamic_address);
	set_at<2240, 2560>(result, h3_8_rd70_res);
	hw_uint<32>  h3_8_rd71_res = h3_8_rd71_select(h3_7, d0, d1, dynamic_address);
	set_at<2272, 2560>(result, h3_8_rd71_res);
	hw_uint<32>  h3_8_rd72_res = h3_8_rd72_select(h3_7, d0, d1, dynamic_address);
	set_at<2304, 2560>(result, h3_8_rd72_res);
	hw_uint<32>  h3_8_rd73_res = h3_8_rd73_select(h3_7, d0, d1, dynamic_address);
	set_at<2336, 2560>(result, h3_8_rd73_res);
	hw_uint<32>  h3_8_rd74_res = h3_8_rd74_select(h3_7, d0, d1, dynamic_address);
	set_at<2368, 2560>(result, h3_8_rd74_res);
	hw_uint<32>  h3_8_rd75_res = h3_8_rd75_select(h3_7, d0, d1, dynamic_address);
	set_at<2400, 2560>(result, h3_8_rd75_res);
	hw_uint<32>  h3_8_rd76_res = h3_8_rd76_select(h3_7, d0, d1, dynamic_address);
	set_at<2432, 2560>(result, h3_8_rd76_res);
	hw_uint<32>  h3_8_rd77_res = h3_8_rd77_select(h3_7, d0, d1, dynamic_address);
	set_at<2464, 2560>(result, h3_8_rd77_res);
	hw_uint<32>  h3_8_rd78_res = h3_8_rd78_select(h3_7, d0, d1, dynamic_address);
	set_at<2496, 2560>(result, h3_8_rd78_res);
	hw_uint<32>  h3_8_rd79_res = h3_8_rd79_select(h3_7, d0, d1, dynamic_address);
	set_at<2528, 2560>(result, h3_8_rd79_res);
	return result;
}

struct h3_8_h3_8_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[0, 1024], [-1, 1023]}
	// Capacity: 134
	// # of read delays: 5
  // 0, 1, 66, 67, 133
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 64> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 65> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_65() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_66() {
		return f4;
	}

	inline hw_uint<32>  peek_67() {
		return f6;
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_133() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 64
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 64 reading from capacity: 1
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
	// RAM Box: {[1, 1009], [-1, 1024]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 65> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 65> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_67() {
		return f4;
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_133() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_8_h3_8_update_0_write10_merged_banks_5_cache {
	// RAM Box: {[10, 1018], [-1, 1024]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 65> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 65> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_67() {
		return f4;
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_133() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_8_h3_8_update_0_write11_merged_banks_5_cache {
	// RAM Box: {[11, 1019], [-1, 1024]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 65> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 65> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_67() {
		return f4;
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_133() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_8_h3_8_update_0_write12_merged_banks_5_cache {
	// RAM Box: {[12, 1020], [-1, 1024]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 65> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 65> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_67() {
		return f4;
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_133() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_8_h3_8_update_0_write13_merged_banks_5_cache {
	// RAM Box: {[13, 1021], [-1, 1024]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 65> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 65> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_67() {
		return f4;
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_133() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_8_h3_8_update_0_write14_merged_banks_5_cache {
	// RAM Box: {[14, 1022], [-1, 1024]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 65> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 65> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_67() {
		return f4;
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_133() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_8_h3_8_update_0_write15_merged_banks_5_cache {
	// RAM Box: {[-1, 1023], [0, 1024]}
	// Capacity: 134
	// # of read delays: 5
  // 0, 1, 67, 68, 133
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 65> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 64> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_67() {
		return f4;
	}

	inline hw_uint<32>  peek_68() {
		return f6;
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_133() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 64
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 64 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
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
	// RAM Box: {[2, 1010], [-1, 1024]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 65> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 65> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_67() {
		return f4;
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_133() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
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
	// RAM Box: {[3, 1011], [-1, 1024]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 65> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 65> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_67() {
		return f4;
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_133() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_8_h3_8_update_0_write4_merged_banks_5_cache {
	// RAM Box: {[4, 1012], [-1, 1024]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 65> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 65> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_67() {
		return f4;
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_133() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_8_h3_8_update_0_write5_merged_banks_5_cache {
	// RAM Box: {[5, 1013], [-1, 1024]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 65> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 65> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_67() {
		return f4;
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_133() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_8_h3_8_update_0_write6_merged_banks_5_cache {
	// RAM Box: {[6, 1014], [-1, 1024]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 65> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 65> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_67() {
		return f4;
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_133() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_8_h3_8_update_0_write7_merged_banks_5_cache {
	// RAM Box: {[7, 1015], [-1, 1024]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 65> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 65> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_67() {
		return f4;
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_133() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_8_h3_8_update_0_write8_merged_banks_5_cache {
	// RAM Box: {[8, 1016], [-1, 1024]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 65> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 65> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_67() {
		return f4;
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_133() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct h3_8_h3_8_update_0_write9_merged_banks_5_cache {
	// RAM Box: {[9, 1017], [-1, 1024]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 65> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 65> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_67() {
		return f4;
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_133() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 65
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 65 reading from capacity: 1
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
  // # of banks: 16
  h3_8_h3_8_update_0_write0_merged_banks_5_cache h3_8_h3_8_update_0_write0_merged_banks_5;
  h3_8_h3_8_update_0_write1_merged_banks_5_cache h3_8_h3_8_update_0_write1_merged_banks_5;
  h3_8_h3_8_update_0_write10_merged_banks_5_cache h3_8_h3_8_update_0_write10_merged_banks_5;
  h3_8_h3_8_update_0_write11_merged_banks_5_cache h3_8_h3_8_update_0_write11_merged_banks_5;
  h3_8_h3_8_update_0_write12_merged_banks_5_cache h3_8_h3_8_update_0_write12_merged_banks_5;
  h3_8_h3_8_update_0_write13_merged_banks_5_cache h3_8_h3_8_update_0_write13_merged_banks_5;
  h3_8_h3_8_update_0_write14_merged_banks_5_cache h3_8_h3_8_update_0_write14_merged_banks_5;
  h3_8_h3_8_update_0_write15_merged_banks_5_cache h3_8_h3_8_update_0_write15_merged_banks_5;
  h3_8_h3_8_update_0_write2_merged_banks_5_cache h3_8_h3_8_update_0_write2_merged_banks_5;
  h3_8_h3_8_update_0_write3_merged_banks_5_cache h3_8_h3_8_update_0_write3_merged_banks_5;
  h3_8_h3_8_update_0_write4_merged_banks_5_cache h3_8_h3_8_update_0_write4_merged_banks_5;
  h3_8_h3_8_update_0_write5_merged_banks_5_cache h3_8_h3_8_update_0_write5_merged_banks_5;
  h3_8_h3_8_update_0_write6_merged_banks_5_cache h3_8_h3_8_update_0_write6_merged_banks_5;
  h3_8_h3_8_update_0_write7_merged_banks_5_cache h3_8_h3_8_update_0_write7_merged_banks_5;
  h3_8_h3_8_update_0_write8_merged_banks_5_cache h3_8_h3_8_update_0_write8_merged_banks_5;
  h3_8_h3_8_update_0_write9_merged_banks_5_cache h3_8_h3_8_update_0_write9_merged_banks_5;
};



inline void h3_8_h3_8_update_0_write0_write(hw_uint<32> & h3_8_h3_8_update_0_write0, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.push(h3_8_h3_8_update_0_write0);
}

inline void h3_8_h3_8_update_0_write1_write(hw_uint<32> & h3_8_h3_8_update_0_write1, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write1_merged_banks_5.push(h3_8_h3_8_update_0_write1);
}

inline void h3_8_h3_8_update_0_write10_write(hw_uint<32> & h3_8_h3_8_update_0_write10, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write10_merged_banks_5.push(h3_8_h3_8_update_0_write10);
}

inline void h3_8_h3_8_update_0_write11_write(hw_uint<32> & h3_8_h3_8_update_0_write11, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write11_merged_banks_5.push(h3_8_h3_8_update_0_write11);
}

inline void h3_8_h3_8_update_0_write12_write(hw_uint<32> & h3_8_h3_8_update_0_write12, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write12_merged_banks_5.push(h3_8_h3_8_update_0_write12);
}

inline void h3_8_h3_8_update_0_write13_write(hw_uint<32> & h3_8_h3_8_update_0_write13, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write13_merged_banks_5.push(h3_8_h3_8_update_0_write13);
}

inline void h3_8_h3_8_update_0_write14_write(hw_uint<32> & h3_8_h3_8_update_0_write14, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write14_merged_banks_5.push(h3_8_h3_8_update_0_write14);
}

inline void h3_8_h3_8_update_0_write15_write(hw_uint<32> & h3_8_h3_8_update_0_write15, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write15_merged_banks_5.push(h3_8_h3_8_update_0_write15);
}

inline void h3_8_h3_8_update_0_write2_write(hw_uint<32> & h3_8_h3_8_update_0_write2, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write2_merged_banks_5.push(h3_8_h3_8_update_0_write2);
}

inline void h3_8_h3_8_update_0_write3_write(hw_uint<32> & h3_8_h3_8_update_0_write3, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write3_merged_banks_5.push(h3_8_h3_8_update_0_write3);
}

inline void h3_8_h3_8_update_0_write4_write(hw_uint<32> & h3_8_h3_8_update_0_write4, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write4_merged_banks_5.push(h3_8_h3_8_update_0_write4);
}

inline void h3_8_h3_8_update_0_write5_write(hw_uint<32> & h3_8_h3_8_update_0_write5, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write5_merged_banks_5.push(h3_8_h3_8_update_0_write5);
}

inline void h3_8_h3_8_update_0_write6_write(hw_uint<32> & h3_8_h3_8_update_0_write6, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write6_merged_banks_5.push(h3_8_h3_8_update_0_write6);
}

inline void h3_8_h3_8_update_0_write7_write(hw_uint<32> & h3_8_h3_8_update_0_write7, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write7_merged_banks_5.push(h3_8_h3_8_update_0_write7);
}

inline void h3_8_h3_8_update_0_write8_write(hw_uint<32> & h3_8_h3_8_update_0_write8, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write8_merged_banks_5.push(h3_8_h3_8_update_0_write8);
}

inline void h3_8_h3_8_update_0_write9_write(hw_uint<32> & h3_8_h3_8_update_0_write9, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  h3_8.h3_8_h3_8_update_0_write9_merged_banks_5.push(h3_8_h3_8_update_0_write9);
}

inline hw_uint<32>  h3_9_rd0_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd0 read pattern: { h3_9_update_0[d0, d1] -> h3_8[-1 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write15 = h3_8.h3_8_h3_8_update_0_write15_merged_banks_5.peek_68();
  return value_h3_8_h3_8_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_9_rd1_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd1 read pattern: { h3_9_update_0[d0, d1] -> h3_8[16d0, -1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.peek_133();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd10_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd10 read pattern: { h3_9_update_0[d0, d1] -> h3_8[1 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_9_rd11_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd11 read pattern: { h3_9_update_0[d0, d1] -> h3_8[2 + 16d0, -1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write2 = h3_8.h3_8_h3_8_update_0_write2_merged_banks_5.peek_133();
  return value_h3_8_h3_8_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_9_rd12_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd12 read pattern: { h3_9_update_0[d0, d1] -> h3_8[2 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write2 = h3_8.h3_8_h3_8_update_0_write2_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_9_rd13_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd13 read pattern: { h3_9_update_0[d0, d1] -> h3_8[2 + 16d0, 1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write2 = h3_8.h3_8_h3_8_update_0_write2_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_9_rd14_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd14 read pattern: { h3_9_update_0[d0, d1] -> h3_8[3 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write3 = h3_8.h3_8_h3_8_update_0_write3_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_9_rd15_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd15 read pattern: { h3_9_update_0[d0, d1] -> h3_8[2 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write2 = h3_8.h3_8_h3_8_update_0_write2_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_9_rd16_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd16 read pattern: { h3_9_update_0[d0, d1] -> h3_8[3 + 16d0, -1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write3 = h3_8.h3_8_h3_8_update_0_write3_merged_banks_5.peek_133();
  return value_h3_8_h3_8_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_9_rd17_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd17 read pattern: { h3_9_update_0[d0, d1] -> h3_8[3 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write3 = h3_8.h3_8_h3_8_update_0_write3_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_9_rd18_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd18 read pattern: { h3_9_update_0[d0, d1] -> h3_8[3 + 16d0, 1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write3 = h3_8.h3_8_h3_8_update_0_write3_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_9_rd19_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd19 read pattern: { h3_9_update_0[d0, d1] -> h3_8[4 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write4 = h3_8.h3_8_h3_8_update_0_write4_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_9_rd2_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd2 read pattern: { h3_9_update_0[d0, d1] -> h3_8[16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd20_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd20 read pattern: { h3_9_update_0[d0, d1] -> h3_8[3 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write3 = h3_8.h3_8_h3_8_update_0_write3_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_9_rd21_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd21 read pattern: { h3_9_update_0[d0, d1] -> h3_8[4 + 16d0, -1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write4 = h3_8.h3_8_h3_8_update_0_write4_merged_banks_5.peek_133();
  return value_h3_8_h3_8_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_9_rd22_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd22 read pattern: { h3_9_update_0[d0, d1] -> h3_8[4 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write4 = h3_8.h3_8_h3_8_update_0_write4_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_9_rd23_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd23 read pattern: { h3_9_update_0[d0, d1] -> h3_8[4 + 16d0, 1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write4 = h3_8.h3_8_h3_8_update_0_write4_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_9_rd24_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd24 read pattern: { h3_9_update_0[d0, d1] -> h3_8[5 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write5 = h3_8.h3_8_h3_8_update_0_write5_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_9_rd25_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd25 read pattern: { h3_9_update_0[d0, d1] -> h3_8[4 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write4 = h3_8.h3_8_h3_8_update_0_write4_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_9_rd26_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd26 read pattern: { h3_9_update_0[d0, d1] -> h3_8[5 + 16d0, -1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write5 = h3_8.h3_8_h3_8_update_0_write5_merged_banks_5.peek_133();
  return value_h3_8_h3_8_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_9_rd27_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd27 read pattern: { h3_9_update_0[d0, d1] -> h3_8[5 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write5 = h3_8.h3_8_h3_8_update_0_write5_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_9_rd28_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd28 read pattern: { h3_9_update_0[d0, d1] -> h3_8[5 + 16d0, 1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write5 = h3_8.h3_8_h3_8_update_0_write5_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_9_rd29_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd29 read pattern: { h3_9_update_0[d0, d1] -> h3_8[6 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write6 = h3_8.h3_8_h3_8_update_0_write6_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_9_rd3_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd3 read pattern: { h3_9_update_0[d0, d1] -> h3_8[16d0, 1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd30_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd30 read pattern: { h3_9_update_0[d0, d1] -> h3_8[5 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write5 = h3_8.h3_8_h3_8_update_0_write5_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_9_rd31_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd31 read pattern: { h3_9_update_0[d0, d1] -> h3_8[6 + 16d0, -1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write6 = h3_8.h3_8_h3_8_update_0_write6_merged_banks_5.peek_133();
  return value_h3_8_h3_8_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_9_rd32_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd32 read pattern: { h3_9_update_0[d0, d1] -> h3_8[6 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write6 = h3_8.h3_8_h3_8_update_0_write6_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_9_rd33_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd33 read pattern: { h3_9_update_0[d0, d1] -> h3_8[6 + 16d0, 1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write6 = h3_8.h3_8_h3_8_update_0_write6_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_9_rd34_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd34 read pattern: { h3_9_update_0[d0, d1] -> h3_8[7 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write7 = h3_8.h3_8_h3_8_update_0_write7_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_9_rd35_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd35 read pattern: { h3_9_update_0[d0, d1] -> h3_8[6 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write6 = h3_8.h3_8_h3_8_update_0_write6_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_9_rd36_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd36 read pattern: { h3_9_update_0[d0, d1] -> h3_8[7 + 16d0, -1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write7 = h3_8.h3_8_h3_8_update_0_write7_merged_banks_5.peek_133();
  return value_h3_8_h3_8_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_9_rd37_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd37 read pattern: { h3_9_update_0[d0, d1] -> h3_8[7 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write7 = h3_8.h3_8_h3_8_update_0_write7_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_9_rd38_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd38 read pattern: { h3_9_update_0[d0, d1] -> h3_8[7 + 16d0, 1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write7 = h3_8.h3_8_h3_8_update_0_write7_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_9_rd39_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd39 read pattern: { h3_9_update_0[d0, d1] -> h3_8[8 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write8 = h3_8.h3_8_h3_8_update_0_write8_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_9_rd4_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd4 read pattern: { h3_9_update_0[d0, d1] -> h3_8[1 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_9_rd40_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd40 read pattern: { h3_9_update_0[d0, d1] -> h3_8[7 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write7 = h3_8.h3_8_h3_8_update_0_write7_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_9_rd41_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd41 read pattern: { h3_9_update_0[d0, d1] -> h3_8[8 + 16d0, -1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write8 = h3_8.h3_8_h3_8_update_0_write8_merged_banks_5.peek_133();
  return value_h3_8_h3_8_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_9_rd42_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd42 read pattern: { h3_9_update_0[d0, d1] -> h3_8[8 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write8 = h3_8.h3_8_h3_8_update_0_write8_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_9_rd43_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd43 read pattern: { h3_9_update_0[d0, d1] -> h3_8[8 + 16d0, 1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write8 = h3_8.h3_8_h3_8_update_0_write8_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_9_rd44_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd44 read pattern: { h3_9_update_0[d0, d1] -> h3_8[9 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write9 = h3_8.h3_8_h3_8_update_0_write9_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_9_rd45_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd45 read pattern: { h3_9_update_0[d0, d1] -> h3_8[8 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write8 = h3_8.h3_8_h3_8_update_0_write8_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_9_rd46_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd46 read pattern: { h3_9_update_0[d0, d1] -> h3_8[9 + 16d0, -1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write9 = h3_8.h3_8_h3_8_update_0_write9_merged_banks_5.peek_133();
  return value_h3_8_h3_8_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_9_rd47_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd47 read pattern: { h3_9_update_0[d0, d1] -> h3_8[9 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write9 = h3_8.h3_8_h3_8_update_0_write9_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_9_rd48_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd48 read pattern: { h3_9_update_0[d0, d1] -> h3_8[9 + 16d0, 1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write9 = h3_8.h3_8_h3_8_update_0_write9_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_9_rd49_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd49 read pattern: { h3_9_update_0[d0, d1] -> h3_8[10 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write10 = h3_8.h3_8_h3_8_update_0_write10_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_9_rd5_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd5 read pattern: { h3_9_update_0[d0, d1] -> h3_8[16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd50_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd50 read pattern: { h3_9_update_0[d0, d1] -> h3_8[9 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write9 = h3_8.h3_8_h3_8_update_0_write9_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_9_rd51_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd51 read pattern: { h3_9_update_0[d0, d1] -> h3_8[10 + 16d0, -1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write10 = h3_8.h3_8_h3_8_update_0_write10_merged_banks_5.peek_133();
  return value_h3_8_h3_8_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_9_rd52_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd52 read pattern: { h3_9_update_0[d0, d1] -> h3_8[10 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write10 = h3_8.h3_8_h3_8_update_0_write10_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_9_rd53_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd53 read pattern: { h3_9_update_0[d0, d1] -> h3_8[10 + 16d0, 1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write10 = h3_8.h3_8_h3_8_update_0_write10_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_9_rd54_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd54 read pattern: { h3_9_update_0[d0, d1] -> h3_8[11 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write11 = h3_8.h3_8_h3_8_update_0_write11_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_9_rd55_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd55 read pattern: { h3_9_update_0[d0, d1] -> h3_8[10 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write10 = h3_8.h3_8_h3_8_update_0_write10_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_9_rd56_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd56 read pattern: { h3_9_update_0[d0, d1] -> h3_8[11 + 16d0, -1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write11 = h3_8.h3_8_h3_8_update_0_write11_merged_banks_5.peek_133();
  return value_h3_8_h3_8_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_9_rd57_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd57 read pattern: { h3_9_update_0[d0, d1] -> h3_8[11 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write11 = h3_8.h3_8_h3_8_update_0_write11_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_9_rd58_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd58 read pattern: { h3_9_update_0[d0, d1] -> h3_8[11 + 16d0, 1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write11 = h3_8.h3_8_h3_8_update_0_write11_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_9_rd59_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd59 read pattern: { h3_9_update_0[d0, d1] -> h3_8[12 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write12 = h3_8.h3_8_h3_8_update_0_write12_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_9_rd6_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd6 read pattern: { h3_9_update_0[d0, d1] -> h3_8[1 + 16d0, -1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_5.peek_133();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_9_rd60_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd60 read pattern: { h3_9_update_0[d0, d1] -> h3_8[11 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write11 = h3_8.h3_8_h3_8_update_0_write11_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_9_rd61_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd61 read pattern: { h3_9_update_0[d0, d1] -> h3_8[12 + 16d0, -1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write12 = h3_8.h3_8_h3_8_update_0_write12_merged_banks_5.peek_133();
  return value_h3_8_h3_8_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_9_rd62_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd62 read pattern: { h3_9_update_0[d0, d1] -> h3_8[12 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write12 = h3_8.h3_8_h3_8_update_0_write12_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_9_rd63_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd63 read pattern: { h3_9_update_0[d0, d1] -> h3_8[12 + 16d0, 1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write12 = h3_8.h3_8_h3_8_update_0_write12_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_9_rd64_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd64 read pattern: { h3_9_update_0[d0, d1] -> h3_8[13 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write13 = h3_8.h3_8_h3_8_update_0_write13_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_9_rd65_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd65 read pattern: { h3_9_update_0[d0, d1] -> h3_8[12 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write12 = h3_8.h3_8_h3_8_update_0_write12_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_9_rd66_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd66 read pattern: { h3_9_update_0[d0, d1] -> h3_8[13 + 16d0, -1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write13 = h3_8.h3_8_h3_8_update_0_write13_merged_banks_5.peek_133();
  return value_h3_8_h3_8_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_9_rd67_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd67 read pattern: { h3_9_update_0[d0, d1] -> h3_8[13 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write13 = h3_8.h3_8_h3_8_update_0_write13_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_9_rd68_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd68 read pattern: { h3_9_update_0[d0, d1] -> h3_8[13 + 16d0, 1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write13 = h3_8.h3_8_h3_8_update_0_write13_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_9_rd69_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd69 read pattern: { h3_9_update_0[d0, d1] -> h3_8[14 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write14 = h3_8.h3_8_h3_8_update_0_write14_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_9_rd7_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd7 read pattern: { h3_9_update_0[d0, d1] -> h3_8[1 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_9_rd70_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd70 read pattern: { h3_9_update_0[d0, d1] -> h3_8[13 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write13 = h3_8.h3_8_h3_8_update_0_write13_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_9_rd71_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd71 read pattern: { h3_9_update_0[d0, d1] -> h3_8[14 + 16d0, -1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write14 = h3_8.h3_8_h3_8_update_0_write14_merged_banks_5.peek_133();
  return value_h3_8_h3_8_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_9_rd72_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd72 read pattern: { h3_9_update_0[d0, d1] -> h3_8[14 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write14 = h3_8.h3_8_h3_8_update_0_write14_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_9_rd73_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd73 read pattern: { h3_9_update_0[d0, d1] -> h3_8[14 + 16d0, 1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write14 = h3_8.h3_8_h3_8_update_0_write14_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_9_rd74_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd74 read pattern: { h3_9_update_0[d0, d1] -> h3_8[15 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write15 = h3_8.h3_8_h3_8_update_0_write15_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_9_rd75_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd75 read pattern: { h3_9_update_0[d0, d1] -> h3_8[14 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write14 = h3_8.h3_8_h3_8_update_0_write14_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_9_rd76_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd76 read pattern: { h3_9_update_0[d0, d1] -> h3_8[15 + 16d0, -1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write15 = h3_8.h3_8_h3_8_update_0_write15_merged_banks_5.peek_133();
  return value_h3_8_h3_8_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_9_rd77_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd77 read pattern: { h3_9_update_0[d0, d1] -> h3_8[15 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write15 = h3_8.h3_8_h3_8_update_0_write15_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_9_rd78_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd78 read pattern: { h3_9_update_0[d0, d1] -> h3_8[15 + 16d0, 1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write15 = h3_8.h3_8_h3_8_update_0_write15_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_9_rd79_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd79 read pattern: { h3_9_update_0[d0, d1] -> h3_8[16 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.peek_66();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd8_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd8 read pattern: { h3_9_update_0[d0, d1] -> h3_8[1 + 16d0, 1 + d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_9_rd9_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd9 read pattern: { h3_9_update_0[d0, d1] -> h3_8[2 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write2 = h3_8.h3_8_h3_8_update_0_write2_merged_banks_5.peek_67();
  return value_h3_8_h3_8_update_0_write2;
  return 0;
}

// # of bundles = 2
// h3_8_update_0_write
//	h3_8_h3_8_update_0_write0
//	h3_8_h3_8_update_0_write1
//	h3_8_h3_8_update_0_write2
//	h3_8_h3_8_update_0_write3
//	h3_8_h3_8_update_0_write4
//	h3_8_h3_8_update_0_write5
//	h3_8_h3_8_update_0_write6
//	h3_8_h3_8_update_0_write7
//	h3_8_h3_8_update_0_write8
//	h3_8_h3_8_update_0_write9
//	h3_8_h3_8_update_0_write10
//	h3_8_h3_8_update_0_write11
//	h3_8_h3_8_update_0_write12
//	h3_8_h3_8_update_0_write13
//	h3_8_h3_8_update_0_write14
//	h3_8_h3_8_update_0_write15
inline void h3_8_h3_8_update_0_write_bundle_write(hw_uint<512>& h3_8_update_0_write, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_8_h3_8_update_0_write0_res = h3_8_update_0_write.extract<0, 31>();
	h3_8_h3_8_update_0_write0_write(h3_8_h3_8_update_0_write0_res, h3_8, d0, d1, dynamic_address);
	hw_uint<32>  h3_8_h3_8_update_0_write1_res = h3_8_update_0_write.extract<32, 63>();
	h3_8_h3_8_update_0_write1_write(h3_8_h3_8_update_0_write1_res, h3_8, d0, d1, dynamic_address);
	hw_uint<32>  h3_8_h3_8_update_0_write2_res = h3_8_update_0_write.extract<64, 95>();
	h3_8_h3_8_update_0_write2_write(h3_8_h3_8_update_0_write2_res, h3_8, d0, d1, dynamic_address);
	hw_uint<32>  h3_8_h3_8_update_0_write3_res = h3_8_update_0_write.extract<96, 127>();
	h3_8_h3_8_update_0_write3_write(h3_8_h3_8_update_0_write3_res, h3_8, d0, d1, dynamic_address);
	hw_uint<32>  h3_8_h3_8_update_0_write4_res = h3_8_update_0_write.extract<128, 159>();
	h3_8_h3_8_update_0_write4_write(h3_8_h3_8_update_0_write4_res, h3_8, d0, d1, dynamic_address);
	hw_uint<32>  h3_8_h3_8_update_0_write5_res = h3_8_update_0_write.extract<160, 191>();
	h3_8_h3_8_update_0_write5_write(h3_8_h3_8_update_0_write5_res, h3_8, d0, d1, dynamic_address);
	hw_uint<32>  h3_8_h3_8_update_0_write6_res = h3_8_update_0_write.extract<192, 223>();
	h3_8_h3_8_update_0_write6_write(h3_8_h3_8_update_0_write6_res, h3_8, d0, d1, dynamic_address);
	hw_uint<32>  h3_8_h3_8_update_0_write7_res = h3_8_update_0_write.extract<224, 255>();
	h3_8_h3_8_update_0_write7_write(h3_8_h3_8_update_0_write7_res, h3_8, d0, d1, dynamic_address);
	hw_uint<32>  h3_8_h3_8_update_0_write8_res = h3_8_update_0_write.extract<256, 287>();
	h3_8_h3_8_update_0_write8_write(h3_8_h3_8_update_0_write8_res, h3_8, d0, d1, dynamic_address);
	hw_uint<32>  h3_8_h3_8_update_0_write9_res = h3_8_update_0_write.extract<288, 319>();
	h3_8_h3_8_update_0_write9_write(h3_8_h3_8_update_0_write9_res, h3_8, d0, d1, dynamic_address);
	hw_uint<32>  h3_8_h3_8_update_0_write10_res = h3_8_update_0_write.extract<320, 351>();
	h3_8_h3_8_update_0_write10_write(h3_8_h3_8_update_0_write10_res, h3_8, d0, d1, dynamic_address);
	hw_uint<32>  h3_8_h3_8_update_0_write11_res = h3_8_update_0_write.extract<352, 383>();
	h3_8_h3_8_update_0_write11_write(h3_8_h3_8_update_0_write11_res, h3_8, d0, d1, dynamic_address);
	hw_uint<32>  h3_8_h3_8_update_0_write12_res = h3_8_update_0_write.extract<384, 415>();
	h3_8_h3_8_update_0_write12_write(h3_8_h3_8_update_0_write12_res, h3_8, d0, d1, dynamic_address);
	hw_uint<32>  h3_8_h3_8_update_0_write13_res = h3_8_update_0_write.extract<416, 447>();
	h3_8_h3_8_update_0_write13_write(h3_8_h3_8_update_0_write13_res, h3_8, d0, d1, dynamic_address);
	hw_uint<32>  h3_8_h3_8_update_0_write14_res = h3_8_update_0_write.extract<448, 479>();
	h3_8_h3_8_update_0_write14_write(h3_8_h3_8_update_0_write14_res, h3_8, d0, d1, dynamic_address);
	hw_uint<32>  h3_8_h3_8_update_0_write15_res = h3_8_update_0_write.extract<480, 511>();
	h3_8_h3_8_update_0_write15_write(h3_8_h3_8_update_0_write15_res, h3_8, d0, d1, dynamic_address);
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
//	h3_9_rd20
//	h3_9_rd21
//	h3_9_rd22
//	h3_9_rd23
//	h3_9_rd24
//	h3_9_rd25
//	h3_9_rd26
//	h3_9_rd27
//	h3_9_rd28
//	h3_9_rd29
//	h3_9_rd30
//	h3_9_rd31
//	h3_9_rd32
//	h3_9_rd33
//	h3_9_rd34
//	h3_9_rd35
//	h3_9_rd36
//	h3_9_rd37
//	h3_9_rd38
//	h3_9_rd39
//	h3_9_rd40
//	h3_9_rd41
//	h3_9_rd42
//	h3_9_rd43
//	h3_9_rd44
//	h3_9_rd45
//	h3_9_rd46
//	h3_9_rd47
//	h3_9_rd48
//	h3_9_rd49
//	h3_9_rd50
//	h3_9_rd51
//	h3_9_rd52
//	h3_9_rd53
//	h3_9_rd54
//	h3_9_rd55
//	h3_9_rd56
//	h3_9_rd57
//	h3_9_rd58
//	h3_9_rd59
//	h3_9_rd60
//	h3_9_rd61
//	h3_9_rd62
//	h3_9_rd63
//	h3_9_rd64
//	h3_9_rd65
//	h3_9_rd66
//	h3_9_rd67
//	h3_9_rd68
//	h3_9_rd69
//	h3_9_rd70
//	h3_9_rd71
//	h3_9_rd72
//	h3_9_rd73
//	h3_9_rd74
//	h3_9_rd75
//	h3_9_rd76
//	h3_9_rd77
//	h3_9_rd78
//	h3_9_rd79
inline hw_uint<2560> h3_8_h3_9_update_0_read_bundle_read(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 80
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
    // h3_9_rd20
    // h3_9_rd21
    // h3_9_rd22
    // h3_9_rd23
    // h3_9_rd24
    // h3_9_rd25
    // h3_9_rd26
    // h3_9_rd27
    // h3_9_rd28
    // h3_9_rd29
    // h3_9_rd30
    // h3_9_rd31
    // h3_9_rd32
    // h3_9_rd33
    // h3_9_rd34
    // h3_9_rd35
    // h3_9_rd36
    // h3_9_rd37
    // h3_9_rd38
    // h3_9_rd39
    // h3_9_rd40
    // h3_9_rd41
    // h3_9_rd42
    // h3_9_rd43
    // h3_9_rd44
    // h3_9_rd45
    // h3_9_rd46
    // h3_9_rd47
    // h3_9_rd48
    // h3_9_rd49
    // h3_9_rd50
    // h3_9_rd51
    // h3_9_rd52
    // h3_9_rd53
    // h3_9_rd54
    // h3_9_rd55
    // h3_9_rd56
    // h3_9_rd57
    // h3_9_rd58
    // h3_9_rd59
    // h3_9_rd60
    // h3_9_rd61
    // h3_9_rd62
    // h3_9_rd63
    // h3_9_rd64
    // h3_9_rd65
    // h3_9_rd66
    // h3_9_rd67
    // h3_9_rd68
    // h3_9_rd69
    // h3_9_rd70
    // h3_9_rd71
    // h3_9_rd72
    // h3_9_rd73
    // h3_9_rd74
    // h3_9_rd75
    // h3_9_rd76
    // h3_9_rd77
    // h3_9_rd78
    // h3_9_rd79

	hw_uint<2560> result;
	hw_uint<32>  h3_9_rd0_res = h3_9_rd0_select(h3_8, d0, d1, dynamic_address);
	set_at<0, 2560>(result, h3_9_rd0_res);
	hw_uint<32>  h3_9_rd1_res = h3_9_rd1_select(h3_8, d0, d1, dynamic_address);
	set_at<32, 2560>(result, h3_9_rd1_res);
	hw_uint<32>  h3_9_rd2_res = h3_9_rd2_select(h3_8, d0, d1, dynamic_address);
	set_at<64, 2560>(result, h3_9_rd2_res);
	hw_uint<32>  h3_9_rd3_res = h3_9_rd3_select(h3_8, d0, d1, dynamic_address);
	set_at<96, 2560>(result, h3_9_rd3_res);
	hw_uint<32>  h3_9_rd4_res = h3_9_rd4_select(h3_8, d0, d1, dynamic_address);
	set_at<128, 2560>(result, h3_9_rd4_res);
	hw_uint<32>  h3_9_rd5_res = h3_9_rd5_select(h3_8, d0, d1, dynamic_address);
	set_at<160, 2560>(result, h3_9_rd5_res);
	hw_uint<32>  h3_9_rd6_res = h3_9_rd6_select(h3_8, d0, d1, dynamic_address);
	set_at<192, 2560>(result, h3_9_rd6_res);
	hw_uint<32>  h3_9_rd7_res = h3_9_rd7_select(h3_8, d0, d1, dynamic_address);
	set_at<224, 2560>(result, h3_9_rd7_res);
	hw_uint<32>  h3_9_rd8_res = h3_9_rd8_select(h3_8, d0, d1, dynamic_address);
	set_at<256, 2560>(result, h3_9_rd8_res);
	hw_uint<32>  h3_9_rd9_res = h3_9_rd9_select(h3_8, d0, d1, dynamic_address);
	set_at<288, 2560>(result, h3_9_rd9_res);
	hw_uint<32>  h3_9_rd10_res = h3_9_rd10_select(h3_8, d0, d1, dynamic_address);
	set_at<320, 2560>(result, h3_9_rd10_res);
	hw_uint<32>  h3_9_rd11_res = h3_9_rd11_select(h3_8, d0, d1, dynamic_address);
	set_at<352, 2560>(result, h3_9_rd11_res);
	hw_uint<32>  h3_9_rd12_res = h3_9_rd12_select(h3_8, d0, d1, dynamic_address);
	set_at<384, 2560>(result, h3_9_rd12_res);
	hw_uint<32>  h3_9_rd13_res = h3_9_rd13_select(h3_8, d0, d1, dynamic_address);
	set_at<416, 2560>(result, h3_9_rd13_res);
	hw_uint<32>  h3_9_rd14_res = h3_9_rd14_select(h3_8, d0, d1, dynamic_address);
	set_at<448, 2560>(result, h3_9_rd14_res);
	hw_uint<32>  h3_9_rd15_res = h3_9_rd15_select(h3_8, d0, d1, dynamic_address);
	set_at<480, 2560>(result, h3_9_rd15_res);
	hw_uint<32>  h3_9_rd16_res = h3_9_rd16_select(h3_8, d0, d1, dynamic_address);
	set_at<512, 2560>(result, h3_9_rd16_res);
	hw_uint<32>  h3_9_rd17_res = h3_9_rd17_select(h3_8, d0, d1, dynamic_address);
	set_at<544, 2560>(result, h3_9_rd17_res);
	hw_uint<32>  h3_9_rd18_res = h3_9_rd18_select(h3_8, d0, d1, dynamic_address);
	set_at<576, 2560>(result, h3_9_rd18_res);
	hw_uint<32>  h3_9_rd19_res = h3_9_rd19_select(h3_8, d0, d1, dynamic_address);
	set_at<608, 2560>(result, h3_9_rd19_res);
	hw_uint<32>  h3_9_rd20_res = h3_9_rd20_select(h3_8, d0, d1, dynamic_address);
	set_at<640, 2560>(result, h3_9_rd20_res);
	hw_uint<32>  h3_9_rd21_res = h3_9_rd21_select(h3_8, d0, d1, dynamic_address);
	set_at<672, 2560>(result, h3_9_rd21_res);
	hw_uint<32>  h3_9_rd22_res = h3_9_rd22_select(h3_8, d0, d1, dynamic_address);
	set_at<704, 2560>(result, h3_9_rd22_res);
	hw_uint<32>  h3_9_rd23_res = h3_9_rd23_select(h3_8, d0, d1, dynamic_address);
	set_at<736, 2560>(result, h3_9_rd23_res);
	hw_uint<32>  h3_9_rd24_res = h3_9_rd24_select(h3_8, d0, d1, dynamic_address);
	set_at<768, 2560>(result, h3_9_rd24_res);
	hw_uint<32>  h3_9_rd25_res = h3_9_rd25_select(h3_8, d0, d1, dynamic_address);
	set_at<800, 2560>(result, h3_9_rd25_res);
	hw_uint<32>  h3_9_rd26_res = h3_9_rd26_select(h3_8, d0, d1, dynamic_address);
	set_at<832, 2560>(result, h3_9_rd26_res);
	hw_uint<32>  h3_9_rd27_res = h3_9_rd27_select(h3_8, d0, d1, dynamic_address);
	set_at<864, 2560>(result, h3_9_rd27_res);
	hw_uint<32>  h3_9_rd28_res = h3_9_rd28_select(h3_8, d0, d1, dynamic_address);
	set_at<896, 2560>(result, h3_9_rd28_res);
	hw_uint<32>  h3_9_rd29_res = h3_9_rd29_select(h3_8, d0, d1, dynamic_address);
	set_at<928, 2560>(result, h3_9_rd29_res);
	hw_uint<32>  h3_9_rd30_res = h3_9_rd30_select(h3_8, d0, d1, dynamic_address);
	set_at<960, 2560>(result, h3_9_rd30_res);
	hw_uint<32>  h3_9_rd31_res = h3_9_rd31_select(h3_8, d0, d1, dynamic_address);
	set_at<992, 2560>(result, h3_9_rd31_res);
	hw_uint<32>  h3_9_rd32_res = h3_9_rd32_select(h3_8, d0, d1, dynamic_address);
	set_at<1024, 2560>(result, h3_9_rd32_res);
	hw_uint<32>  h3_9_rd33_res = h3_9_rd33_select(h3_8, d0, d1, dynamic_address);
	set_at<1056, 2560>(result, h3_9_rd33_res);
	hw_uint<32>  h3_9_rd34_res = h3_9_rd34_select(h3_8, d0, d1, dynamic_address);
	set_at<1088, 2560>(result, h3_9_rd34_res);
	hw_uint<32>  h3_9_rd35_res = h3_9_rd35_select(h3_8, d0, d1, dynamic_address);
	set_at<1120, 2560>(result, h3_9_rd35_res);
	hw_uint<32>  h3_9_rd36_res = h3_9_rd36_select(h3_8, d0, d1, dynamic_address);
	set_at<1152, 2560>(result, h3_9_rd36_res);
	hw_uint<32>  h3_9_rd37_res = h3_9_rd37_select(h3_8, d0, d1, dynamic_address);
	set_at<1184, 2560>(result, h3_9_rd37_res);
	hw_uint<32>  h3_9_rd38_res = h3_9_rd38_select(h3_8, d0, d1, dynamic_address);
	set_at<1216, 2560>(result, h3_9_rd38_res);
	hw_uint<32>  h3_9_rd39_res = h3_9_rd39_select(h3_8, d0, d1, dynamic_address);
	set_at<1248, 2560>(result, h3_9_rd39_res);
	hw_uint<32>  h3_9_rd40_res = h3_9_rd40_select(h3_8, d0, d1, dynamic_address);
	set_at<1280, 2560>(result, h3_9_rd40_res);
	hw_uint<32>  h3_9_rd41_res = h3_9_rd41_select(h3_8, d0, d1, dynamic_address);
	set_at<1312, 2560>(result, h3_9_rd41_res);
	hw_uint<32>  h3_9_rd42_res = h3_9_rd42_select(h3_8, d0, d1, dynamic_address);
	set_at<1344, 2560>(result, h3_9_rd42_res);
	hw_uint<32>  h3_9_rd43_res = h3_9_rd43_select(h3_8, d0, d1, dynamic_address);
	set_at<1376, 2560>(result, h3_9_rd43_res);
	hw_uint<32>  h3_9_rd44_res = h3_9_rd44_select(h3_8, d0, d1, dynamic_address);
	set_at<1408, 2560>(result, h3_9_rd44_res);
	hw_uint<32>  h3_9_rd45_res = h3_9_rd45_select(h3_8, d0, d1, dynamic_address);
	set_at<1440, 2560>(result, h3_9_rd45_res);
	hw_uint<32>  h3_9_rd46_res = h3_9_rd46_select(h3_8, d0, d1, dynamic_address);
	set_at<1472, 2560>(result, h3_9_rd46_res);
	hw_uint<32>  h3_9_rd47_res = h3_9_rd47_select(h3_8, d0, d1, dynamic_address);
	set_at<1504, 2560>(result, h3_9_rd47_res);
	hw_uint<32>  h3_9_rd48_res = h3_9_rd48_select(h3_8, d0, d1, dynamic_address);
	set_at<1536, 2560>(result, h3_9_rd48_res);
	hw_uint<32>  h3_9_rd49_res = h3_9_rd49_select(h3_8, d0, d1, dynamic_address);
	set_at<1568, 2560>(result, h3_9_rd49_res);
	hw_uint<32>  h3_9_rd50_res = h3_9_rd50_select(h3_8, d0, d1, dynamic_address);
	set_at<1600, 2560>(result, h3_9_rd50_res);
	hw_uint<32>  h3_9_rd51_res = h3_9_rd51_select(h3_8, d0, d1, dynamic_address);
	set_at<1632, 2560>(result, h3_9_rd51_res);
	hw_uint<32>  h3_9_rd52_res = h3_9_rd52_select(h3_8, d0, d1, dynamic_address);
	set_at<1664, 2560>(result, h3_9_rd52_res);
	hw_uint<32>  h3_9_rd53_res = h3_9_rd53_select(h3_8, d0, d1, dynamic_address);
	set_at<1696, 2560>(result, h3_9_rd53_res);
	hw_uint<32>  h3_9_rd54_res = h3_9_rd54_select(h3_8, d0, d1, dynamic_address);
	set_at<1728, 2560>(result, h3_9_rd54_res);
	hw_uint<32>  h3_9_rd55_res = h3_9_rd55_select(h3_8, d0, d1, dynamic_address);
	set_at<1760, 2560>(result, h3_9_rd55_res);
	hw_uint<32>  h3_9_rd56_res = h3_9_rd56_select(h3_8, d0, d1, dynamic_address);
	set_at<1792, 2560>(result, h3_9_rd56_res);
	hw_uint<32>  h3_9_rd57_res = h3_9_rd57_select(h3_8, d0, d1, dynamic_address);
	set_at<1824, 2560>(result, h3_9_rd57_res);
	hw_uint<32>  h3_9_rd58_res = h3_9_rd58_select(h3_8, d0, d1, dynamic_address);
	set_at<1856, 2560>(result, h3_9_rd58_res);
	hw_uint<32>  h3_9_rd59_res = h3_9_rd59_select(h3_8, d0, d1, dynamic_address);
	set_at<1888, 2560>(result, h3_9_rd59_res);
	hw_uint<32>  h3_9_rd60_res = h3_9_rd60_select(h3_8, d0, d1, dynamic_address);
	set_at<1920, 2560>(result, h3_9_rd60_res);
	hw_uint<32>  h3_9_rd61_res = h3_9_rd61_select(h3_8, d0, d1, dynamic_address);
	set_at<1952, 2560>(result, h3_9_rd61_res);
	hw_uint<32>  h3_9_rd62_res = h3_9_rd62_select(h3_8, d0, d1, dynamic_address);
	set_at<1984, 2560>(result, h3_9_rd62_res);
	hw_uint<32>  h3_9_rd63_res = h3_9_rd63_select(h3_8, d0, d1, dynamic_address);
	set_at<2016, 2560>(result, h3_9_rd63_res);
	hw_uint<32>  h3_9_rd64_res = h3_9_rd64_select(h3_8, d0, d1, dynamic_address);
	set_at<2048, 2560>(result, h3_9_rd64_res);
	hw_uint<32>  h3_9_rd65_res = h3_9_rd65_select(h3_8, d0, d1, dynamic_address);
	set_at<2080, 2560>(result, h3_9_rd65_res);
	hw_uint<32>  h3_9_rd66_res = h3_9_rd66_select(h3_8, d0, d1, dynamic_address);
	set_at<2112, 2560>(result, h3_9_rd66_res);
	hw_uint<32>  h3_9_rd67_res = h3_9_rd67_select(h3_8, d0, d1, dynamic_address);
	set_at<2144, 2560>(result, h3_9_rd67_res);
	hw_uint<32>  h3_9_rd68_res = h3_9_rd68_select(h3_8, d0, d1, dynamic_address);
	set_at<2176, 2560>(result, h3_9_rd68_res);
	hw_uint<32>  h3_9_rd69_res = h3_9_rd69_select(h3_8, d0, d1, dynamic_address);
	set_at<2208, 2560>(result, h3_9_rd69_res);
	hw_uint<32>  h3_9_rd70_res = h3_9_rd70_select(h3_8, d0, d1, dynamic_address);
	set_at<2240, 2560>(result, h3_9_rd70_res);
	hw_uint<32>  h3_9_rd71_res = h3_9_rd71_select(h3_8, d0, d1, dynamic_address);
	set_at<2272, 2560>(result, h3_9_rd71_res);
	hw_uint<32>  h3_9_rd72_res = h3_9_rd72_select(h3_8, d0, d1, dynamic_address);
	set_at<2304, 2560>(result, h3_9_rd72_res);
	hw_uint<32>  h3_9_rd73_res = h3_9_rd73_select(h3_8, d0, d1, dynamic_address);
	set_at<2336, 2560>(result, h3_9_rd73_res);
	hw_uint<32>  h3_9_rd74_res = h3_9_rd74_select(h3_8, d0, d1, dynamic_address);
	set_at<2368, 2560>(result, h3_9_rd74_res);
	hw_uint<32>  h3_9_rd75_res = h3_9_rd75_select(h3_8, d0, d1, dynamic_address);
	set_at<2400, 2560>(result, h3_9_rd75_res);
	hw_uint<32>  h3_9_rd76_res = h3_9_rd76_select(h3_8, d0, d1, dynamic_address);
	set_at<2432, 2560>(result, h3_9_rd76_res);
	hw_uint<32>  h3_9_rd77_res = h3_9_rd77_select(h3_8, d0, d1, dynamic_address);
	set_at<2464, 2560>(result, h3_9_rd77_res);
	hw_uint<32>  h3_9_rd78_res = h3_9_rd78_select(h3_8, d0, d1, dynamic_address);
	set_at<2496, 2560>(result, h3_9_rd78_res);
	hw_uint<32>  h3_9_rd79_res = h3_9_rd79_select(h3_8, d0, d1, dynamic_address);
	set_at<2528, 2560>(result, h3_9_rd79_res);
	return result;
}

struct h3_9_h3_9_update_0_write0_to_h10_16_300MHz_16_rd0_cache {
	// RAM Box: {[0, 1008], [0, 1023]}
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

struct h3_9_h3_9_update_0_write1_to_h10_16_300MHz_16_rd1_cache {
	// RAM Box: {[1, 1009], [0, 1023]}
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

struct h3_9_h3_9_update_0_write10_to_h10_16_300MHz_16_rd10_cache {
	// RAM Box: {[10, 1018], [0, 1023]}
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

struct h3_9_h3_9_update_0_write11_to_h10_16_300MHz_16_rd11_cache {
	// RAM Box: {[11, 1019], [0, 1023]}
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

struct h3_9_h3_9_update_0_write12_to_h10_16_300MHz_16_rd12_cache {
	// RAM Box: {[12, 1020], [0, 1023]}
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

struct h3_9_h3_9_update_0_write13_to_h10_16_300MHz_16_rd13_cache {
	// RAM Box: {[13, 1021], [0, 1023]}
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

struct h3_9_h3_9_update_0_write14_to_h10_16_300MHz_16_rd14_cache {
	// RAM Box: {[14, 1022], [0, 1023]}
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

struct h3_9_h3_9_update_0_write15_to_h10_16_300MHz_16_rd15_cache {
	// RAM Box: {[15, 1023], [0, 1023]}
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

struct h3_9_h3_9_update_0_write2_to_h10_16_300MHz_16_rd2_cache {
	// RAM Box: {[2, 1010], [0, 1023]}
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

struct h3_9_h3_9_update_0_write3_to_h10_16_300MHz_16_rd3_cache {
	// RAM Box: {[3, 1011], [0, 1023]}
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

struct h3_9_h3_9_update_0_write4_to_h10_16_300MHz_16_rd4_cache {
	// RAM Box: {[4, 1012], [0, 1023]}
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

struct h3_9_h3_9_update_0_write5_to_h10_16_300MHz_16_rd5_cache {
	// RAM Box: {[5, 1013], [0, 1023]}
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

struct h3_9_h3_9_update_0_write6_to_h10_16_300MHz_16_rd6_cache {
	// RAM Box: {[6, 1014], [0, 1023]}
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

struct h3_9_h3_9_update_0_write7_to_h10_16_300MHz_16_rd7_cache {
	// RAM Box: {[7, 1015], [0, 1023]}
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

struct h3_9_h3_9_update_0_write8_to_h10_16_300MHz_16_rd8_cache {
	// RAM Box: {[8, 1016], [0, 1023]}
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

struct h3_9_h3_9_update_0_write9_to_h10_16_300MHz_16_rd9_cache {
	// RAM Box: {[9, 1017], [0, 1023]}
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
  // # of banks: 16
  h3_9_h3_9_update_0_write0_to_h10_16_300MHz_16_rd0_cache h3_9_h3_9_update_0_write0_to_h10_16_300MHz_16_rd0;
  h3_9_h3_9_update_0_write1_to_h10_16_300MHz_16_rd1_cache h3_9_h3_9_update_0_write1_to_h10_16_300MHz_16_rd1;
  h3_9_h3_9_update_0_write10_to_h10_16_300MHz_16_rd10_cache h3_9_h3_9_update_0_write10_to_h10_16_300MHz_16_rd10;
  h3_9_h3_9_update_0_write11_to_h10_16_300MHz_16_rd11_cache h3_9_h3_9_update_0_write11_to_h10_16_300MHz_16_rd11;
  h3_9_h3_9_update_0_write12_to_h10_16_300MHz_16_rd12_cache h3_9_h3_9_update_0_write12_to_h10_16_300MHz_16_rd12;
  h3_9_h3_9_update_0_write13_to_h10_16_300MHz_16_rd13_cache h3_9_h3_9_update_0_write13_to_h10_16_300MHz_16_rd13;
  h3_9_h3_9_update_0_write14_to_h10_16_300MHz_16_rd14_cache h3_9_h3_9_update_0_write14_to_h10_16_300MHz_16_rd14;
  h3_9_h3_9_update_0_write15_to_h10_16_300MHz_16_rd15_cache h3_9_h3_9_update_0_write15_to_h10_16_300MHz_16_rd15;
  h3_9_h3_9_update_0_write2_to_h10_16_300MHz_16_rd2_cache h3_9_h3_9_update_0_write2_to_h10_16_300MHz_16_rd2;
  h3_9_h3_9_update_0_write3_to_h10_16_300MHz_16_rd3_cache h3_9_h3_9_update_0_write3_to_h10_16_300MHz_16_rd3;
  h3_9_h3_9_update_0_write4_to_h10_16_300MHz_16_rd4_cache h3_9_h3_9_update_0_write4_to_h10_16_300MHz_16_rd4;
  h3_9_h3_9_update_0_write5_to_h10_16_300MHz_16_rd5_cache h3_9_h3_9_update_0_write5_to_h10_16_300MHz_16_rd5;
  h3_9_h3_9_update_0_write6_to_h10_16_300MHz_16_rd6_cache h3_9_h3_9_update_0_write6_to_h10_16_300MHz_16_rd6;
  h3_9_h3_9_update_0_write7_to_h10_16_300MHz_16_rd7_cache h3_9_h3_9_update_0_write7_to_h10_16_300MHz_16_rd7;
  h3_9_h3_9_update_0_write8_to_h10_16_300MHz_16_rd8_cache h3_9_h3_9_update_0_write8_to_h10_16_300MHz_16_rd8;
  h3_9_h3_9_update_0_write9_to_h10_16_300MHz_16_rd9_cache h3_9_h3_9_update_0_write9_to_h10_16_300MHz_16_rd9;
};



inline void h3_9_h3_9_update_0_write0_write(hw_uint<32> & h3_9_h3_9_update_0_write0, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write0_to_h10_16_300MHz_16_rd0.push(h3_9_h3_9_update_0_write0);
}

inline void h3_9_h3_9_update_0_write1_write(hw_uint<32> & h3_9_h3_9_update_0_write1, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write1_to_h10_16_300MHz_16_rd1.push(h3_9_h3_9_update_0_write1);
}

inline void h3_9_h3_9_update_0_write10_write(hw_uint<32> & h3_9_h3_9_update_0_write10, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write10_to_h10_16_300MHz_16_rd10.push(h3_9_h3_9_update_0_write10);
}

inline void h3_9_h3_9_update_0_write11_write(hw_uint<32> & h3_9_h3_9_update_0_write11, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write11_to_h10_16_300MHz_16_rd11.push(h3_9_h3_9_update_0_write11);
}

inline void h3_9_h3_9_update_0_write12_write(hw_uint<32> & h3_9_h3_9_update_0_write12, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write12_to_h10_16_300MHz_16_rd12.push(h3_9_h3_9_update_0_write12);
}

inline void h3_9_h3_9_update_0_write13_write(hw_uint<32> & h3_9_h3_9_update_0_write13, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write13_to_h10_16_300MHz_16_rd13.push(h3_9_h3_9_update_0_write13);
}

inline void h3_9_h3_9_update_0_write14_write(hw_uint<32> & h3_9_h3_9_update_0_write14, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write14_to_h10_16_300MHz_16_rd14.push(h3_9_h3_9_update_0_write14);
}

inline void h3_9_h3_9_update_0_write15_write(hw_uint<32> & h3_9_h3_9_update_0_write15, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write15_to_h10_16_300MHz_16_rd15.push(h3_9_h3_9_update_0_write15);
}

inline void h3_9_h3_9_update_0_write2_write(hw_uint<32> & h3_9_h3_9_update_0_write2, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write2_to_h10_16_300MHz_16_rd2.push(h3_9_h3_9_update_0_write2);
}

inline void h3_9_h3_9_update_0_write3_write(hw_uint<32> & h3_9_h3_9_update_0_write3, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write3_to_h10_16_300MHz_16_rd3.push(h3_9_h3_9_update_0_write3);
}

inline void h3_9_h3_9_update_0_write4_write(hw_uint<32> & h3_9_h3_9_update_0_write4, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write4_to_h10_16_300MHz_16_rd4.push(h3_9_h3_9_update_0_write4);
}

inline void h3_9_h3_9_update_0_write5_write(hw_uint<32> & h3_9_h3_9_update_0_write5, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write5_to_h10_16_300MHz_16_rd5.push(h3_9_h3_9_update_0_write5);
}

inline void h3_9_h3_9_update_0_write6_write(hw_uint<32> & h3_9_h3_9_update_0_write6, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write6_to_h10_16_300MHz_16_rd6.push(h3_9_h3_9_update_0_write6);
}

inline void h3_9_h3_9_update_0_write7_write(hw_uint<32> & h3_9_h3_9_update_0_write7, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write7_to_h10_16_300MHz_16_rd7.push(h3_9_h3_9_update_0_write7);
}

inline void h3_9_h3_9_update_0_write8_write(hw_uint<32> & h3_9_h3_9_update_0_write8, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write8_to_h10_16_300MHz_16_rd8.push(h3_9_h3_9_update_0_write8);
}

inline void h3_9_h3_9_update_0_write9_write(hw_uint<32> & h3_9_h3_9_update_0_write9, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write9_to_h10_16_300MHz_16_rd9.push(h3_9_h3_9_update_0_write9);
}

inline hw_uint<32>  h10_16_300MHz_16_rd0_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_16_300MHz_16_rd0 read pattern: { h10_16_300MHz_16_update_0[d0, d1] -> h3_9[16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_16_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write0 = h3_9.h3_9_h3_9_update_0_write0_to_h10_16_300MHz_16_rd0.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write0;
  return 0;
}

inline hw_uint<32>  h10_16_300MHz_16_rd1_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_16_300MHz_16_rd1 read pattern: { h10_16_300MHz_16_update_0[d0, d1] -> h3_9[1 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_16_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write1 = h3_9.h3_9_h3_9_update_0_write1_to_h10_16_300MHz_16_rd1.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write1;
  return 0;
}

inline hw_uint<32>  h10_16_300MHz_16_rd10_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_16_300MHz_16_rd10 read pattern: { h10_16_300MHz_16_update_0[d0, d1] -> h3_9[10 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_16_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write10 = h3_9.h3_9_h3_9_update_0_write10_to_h10_16_300MHz_16_rd10.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write10;
  return 0;
}

inline hw_uint<32>  h10_16_300MHz_16_rd11_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_16_300MHz_16_rd11 read pattern: { h10_16_300MHz_16_update_0[d0, d1] -> h3_9[11 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_16_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write11 = h3_9.h3_9_h3_9_update_0_write11_to_h10_16_300MHz_16_rd11.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write11;
  return 0;
}

inline hw_uint<32>  h10_16_300MHz_16_rd12_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_16_300MHz_16_rd12 read pattern: { h10_16_300MHz_16_update_0[d0, d1] -> h3_9[12 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_16_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write12 = h3_9.h3_9_h3_9_update_0_write12_to_h10_16_300MHz_16_rd12.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write12;
  return 0;
}

inline hw_uint<32>  h10_16_300MHz_16_rd13_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_16_300MHz_16_rd13 read pattern: { h10_16_300MHz_16_update_0[d0, d1] -> h3_9[13 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_16_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write13 = h3_9.h3_9_h3_9_update_0_write13_to_h10_16_300MHz_16_rd13.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write13;
  return 0;
}

inline hw_uint<32>  h10_16_300MHz_16_rd14_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_16_300MHz_16_rd14 read pattern: { h10_16_300MHz_16_update_0[d0, d1] -> h3_9[14 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_16_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write14 = h3_9.h3_9_h3_9_update_0_write14_to_h10_16_300MHz_16_rd14.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write14;
  return 0;
}

inline hw_uint<32>  h10_16_300MHz_16_rd15_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_16_300MHz_16_rd15 read pattern: { h10_16_300MHz_16_update_0[d0, d1] -> h3_9[15 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_16_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write15 = h3_9.h3_9_h3_9_update_0_write15_to_h10_16_300MHz_16_rd15.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write15;
  return 0;
}

inline hw_uint<32>  h10_16_300MHz_16_rd2_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_16_300MHz_16_rd2 read pattern: { h10_16_300MHz_16_update_0[d0, d1] -> h3_9[2 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_16_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write2 = h3_9.h3_9_h3_9_update_0_write2_to_h10_16_300MHz_16_rd2.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write2;
  return 0;
}

inline hw_uint<32>  h10_16_300MHz_16_rd3_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_16_300MHz_16_rd3 read pattern: { h10_16_300MHz_16_update_0[d0, d1] -> h3_9[3 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_16_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write3 = h3_9.h3_9_h3_9_update_0_write3_to_h10_16_300MHz_16_rd3.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write3;
  return 0;
}

inline hw_uint<32>  h10_16_300MHz_16_rd4_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_16_300MHz_16_rd4 read pattern: { h10_16_300MHz_16_update_0[d0, d1] -> h3_9[4 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_16_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write4 = h3_9.h3_9_h3_9_update_0_write4_to_h10_16_300MHz_16_rd4.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write4;
  return 0;
}

inline hw_uint<32>  h10_16_300MHz_16_rd5_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_16_300MHz_16_rd5 read pattern: { h10_16_300MHz_16_update_0[d0, d1] -> h3_9[5 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_16_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write5 = h3_9.h3_9_h3_9_update_0_write5_to_h10_16_300MHz_16_rd5.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write5;
  return 0;
}

inline hw_uint<32>  h10_16_300MHz_16_rd6_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_16_300MHz_16_rd6 read pattern: { h10_16_300MHz_16_update_0[d0, d1] -> h3_9[6 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_16_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write6 = h3_9.h3_9_h3_9_update_0_write6_to_h10_16_300MHz_16_rd6.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write6;
  return 0;
}

inline hw_uint<32>  h10_16_300MHz_16_rd7_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_16_300MHz_16_rd7 read pattern: { h10_16_300MHz_16_update_0[d0, d1] -> h3_9[7 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_16_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write7 = h3_9.h3_9_h3_9_update_0_write7_to_h10_16_300MHz_16_rd7.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write7;
  return 0;
}

inline hw_uint<32>  h10_16_300MHz_16_rd8_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_16_300MHz_16_rd8 read pattern: { h10_16_300MHz_16_update_0[d0, d1] -> h3_9[8 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_16_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write8 = h3_9.h3_9_h3_9_update_0_write8_to_h10_16_300MHz_16_rd8.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write8;
  return 0;
}

inline hw_uint<32>  h10_16_300MHz_16_rd9_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_16_300MHz_16_rd9 read pattern: { h10_16_300MHz_16_update_0[d0, d1] -> h3_9[9 + 16d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_16_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write9 = h3_9.h3_9_h3_9_update_0_write9_to_h10_16_300MHz_16_rd9.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write9;
  return 0;
}

// # of bundles = 2
// h10_16_300MHz_16_update_0_read
//	h10_16_300MHz_16_rd0
//	h10_16_300MHz_16_rd1
//	h10_16_300MHz_16_rd2
//	h10_16_300MHz_16_rd3
//	h10_16_300MHz_16_rd4
//	h10_16_300MHz_16_rd5
//	h10_16_300MHz_16_rd6
//	h10_16_300MHz_16_rd7
//	h10_16_300MHz_16_rd8
//	h10_16_300MHz_16_rd9
//	h10_16_300MHz_16_rd10
//	h10_16_300MHz_16_rd11
//	h10_16_300MHz_16_rd12
//	h10_16_300MHz_16_rd13
//	h10_16_300MHz_16_rd14
//	h10_16_300MHz_16_rd15
inline hw_uint<512> h3_9_h10_16_300MHz_16_update_0_read_bundle_read(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 16
    // h10_16_300MHz_16_rd0
    // h10_16_300MHz_16_rd1
    // h10_16_300MHz_16_rd2
    // h10_16_300MHz_16_rd3
    // h10_16_300MHz_16_rd4
    // h10_16_300MHz_16_rd5
    // h10_16_300MHz_16_rd6
    // h10_16_300MHz_16_rd7
    // h10_16_300MHz_16_rd8
    // h10_16_300MHz_16_rd9
    // h10_16_300MHz_16_rd10
    // h10_16_300MHz_16_rd11
    // h10_16_300MHz_16_rd12
    // h10_16_300MHz_16_rd13
    // h10_16_300MHz_16_rd14
    // h10_16_300MHz_16_rd15

	hw_uint<512> result;
	hw_uint<32>  h10_16_300MHz_16_rd0_res = h10_16_300MHz_16_rd0_select(h3_9, d0, d1, dynamic_address);
	set_at<0, 512>(result, h10_16_300MHz_16_rd0_res);
	hw_uint<32>  h10_16_300MHz_16_rd1_res = h10_16_300MHz_16_rd1_select(h3_9, d0, d1, dynamic_address);
	set_at<32, 512>(result, h10_16_300MHz_16_rd1_res);
	hw_uint<32>  h10_16_300MHz_16_rd2_res = h10_16_300MHz_16_rd2_select(h3_9, d0, d1, dynamic_address);
	set_at<64, 512>(result, h10_16_300MHz_16_rd2_res);
	hw_uint<32>  h10_16_300MHz_16_rd3_res = h10_16_300MHz_16_rd3_select(h3_9, d0, d1, dynamic_address);
	set_at<96, 512>(result, h10_16_300MHz_16_rd3_res);
	hw_uint<32>  h10_16_300MHz_16_rd4_res = h10_16_300MHz_16_rd4_select(h3_9, d0, d1, dynamic_address);
	set_at<128, 512>(result, h10_16_300MHz_16_rd4_res);
	hw_uint<32>  h10_16_300MHz_16_rd5_res = h10_16_300MHz_16_rd5_select(h3_9, d0, d1, dynamic_address);
	set_at<160, 512>(result, h10_16_300MHz_16_rd5_res);
	hw_uint<32>  h10_16_300MHz_16_rd6_res = h10_16_300MHz_16_rd6_select(h3_9, d0, d1, dynamic_address);
	set_at<192, 512>(result, h10_16_300MHz_16_rd6_res);
	hw_uint<32>  h10_16_300MHz_16_rd7_res = h10_16_300MHz_16_rd7_select(h3_9, d0, d1, dynamic_address);
	set_at<224, 512>(result, h10_16_300MHz_16_rd7_res);
	hw_uint<32>  h10_16_300MHz_16_rd8_res = h10_16_300MHz_16_rd8_select(h3_9, d0, d1, dynamic_address);
	set_at<256, 512>(result, h10_16_300MHz_16_rd8_res);
	hw_uint<32>  h10_16_300MHz_16_rd9_res = h10_16_300MHz_16_rd9_select(h3_9, d0, d1, dynamic_address);
	set_at<288, 512>(result, h10_16_300MHz_16_rd9_res);
	hw_uint<32>  h10_16_300MHz_16_rd10_res = h10_16_300MHz_16_rd10_select(h3_9, d0, d1, dynamic_address);
	set_at<320, 512>(result, h10_16_300MHz_16_rd10_res);
	hw_uint<32>  h10_16_300MHz_16_rd11_res = h10_16_300MHz_16_rd11_select(h3_9, d0, d1, dynamic_address);
	set_at<352, 512>(result, h10_16_300MHz_16_rd11_res);
	hw_uint<32>  h10_16_300MHz_16_rd12_res = h10_16_300MHz_16_rd12_select(h3_9, d0, d1, dynamic_address);
	set_at<384, 512>(result, h10_16_300MHz_16_rd12_res);
	hw_uint<32>  h10_16_300MHz_16_rd13_res = h10_16_300MHz_16_rd13_select(h3_9, d0, d1, dynamic_address);
	set_at<416, 512>(result, h10_16_300MHz_16_rd13_res);
	hw_uint<32>  h10_16_300MHz_16_rd14_res = h10_16_300MHz_16_rd14_select(h3_9, d0, d1, dynamic_address);
	set_at<448, 512>(result, h10_16_300MHz_16_rd14_res);
	hw_uint<32>  h10_16_300MHz_16_rd15_res = h10_16_300MHz_16_rd15_select(h3_9, d0, d1, dynamic_address);
	set_at<480, 512>(result, h10_16_300MHz_16_rd15_res);
	return result;
}

// h3_9_update_0_write
//	h3_9_h3_9_update_0_write0
//	h3_9_h3_9_update_0_write1
//	h3_9_h3_9_update_0_write2
//	h3_9_h3_9_update_0_write3
//	h3_9_h3_9_update_0_write4
//	h3_9_h3_9_update_0_write5
//	h3_9_h3_9_update_0_write6
//	h3_9_h3_9_update_0_write7
//	h3_9_h3_9_update_0_write8
//	h3_9_h3_9_update_0_write9
//	h3_9_h3_9_update_0_write10
//	h3_9_h3_9_update_0_write11
//	h3_9_h3_9_update_0_write12
//	h3_9_h3_9_update_0_write13
//	h3_9_h3_9_update_0_write14
//	h3_9_h3_9_update_0_write15
inline void h3_9_h3_9_update_0_write_bundle_write(hw_uint<512>& h3_9_update_0_write, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
	hw_uint<32>  h3_9_h3_9_update_0_write0_res = h3_9_update_0_write.extract<0, 31>();
	h3_9_h3_9_update_0_write0_write(h3_9_h3_9_update_0_write0_res, h3_9, d0, d1, dynamic_address);
	hw_uint<32>  h3_9_h3_9_update_0_write1_res = h3_9_update_0_write.extract<32, 63>();
	h3_9_h3_9_update_0_write1_write(h3_9_h3_9_update_0_write1_res, h3_9, d0, d1, dynamic_address);
	hw_uint<32>  h3_9_h3_9_update_0_write2_res = h3_9_update_0_write.extract<64, 95>();
	h3_9_h3_9_update_0_write2_write(h3_9_h3_9_update_0_write2_res, h3_9, d0, d1, dynamic_address);
	hw_uint<32>  h3_9_h3_9_update_0_write3_res = h3_9_update_0_write.extract<96, 127>();
	h3_9_h3_9_update_0_write3_write(h3_9_h3_9_update_0_write3_res, h3_9, d0, d1, dynamic_address);
	hw_uint<32>  h3_9_h3_9_update_0_write4_res = h3_9_update_0_write.extract<128, 159>();
	h3_9_h3_9_update_0_write4_write(h3_9_h3_9_update_0_write4_res, h3_9, d0, d1, dynamic_address);
	hw_uint<32>  h3_9_h3_9_update_0_write5_res = h3_9_update_0_write.extract<160, 191>();
	h3_9_h3_9_update_0_write5_write(h3_9_h3_9_update_0_write5_res, h3_9, d0, d1, dynamic_address);
	hw_uint<32>  h3_9_h3_9_update_0_write6_res = h3_9_update_0_write.extract<192, 223>();
	h3_9_h3_9_update_0_write6_write(h3_9_h3_9_update_0_write6_res, h3_9, d0, d1, dynamic_address);
	hw_uint<32>  h3_9_h3_9_update_0_write7_res = h3_9_update_0_write.extract<224, 255>();
	h3_9_h3_9_update_0_write7_write(h3_9_h3_9_update_0_write7_res, h3_9, d0, d1, dynamic_address);
	hw_uint<32>  h3_9_h3_9_update_0_write8_res = h3_9_update_0_write.extract<256, 287>();
	h3_9_h3_9_update_0_write8_write(h3_9_h3_9_update_0_write8_res, h3_9, d0, d1, dynamic_address);
	hw_uint<32>  h3_9_h3_9_update_0_write9_res = h3_9_update_0_write.extract<288, 319>();
	h3_9_h3_9_update_0_write9_write(h3_9_h3_9_update_0_write9_res, h3_9, d0, d1, dynamic_address);
	hw_uint<32>  h3_9_h3_9_update_0_write10_res = h3_9_update_0_write.extract<320, 351>();
	h3_9_h3_9_update_0_write10_write(h3_9_h3_9_update_0_write10_res, h3_9, d0, d1, dynamic_address);
	hw_uint<32>  h3_9_h3_9_update_0_write11_res = h3_9_update_0_write.extract<352, 383>();
	h3_9_h3_9_update_0_write11_write(h3_9_h3_9_update_0_write11_res, h3_9, d0, d1, dynamic_address);
	hw_uint<32>  h3_9_h3_9_update_0_write12_res = h3_9_update_0_write.extract<384, 415>();
	h3_9_h3_9_update_0_write12_write(h3_9_h3_9_update_0_write12_res, h3_9, d0, d1, dynamic_address);
	hw_uint<32>  h3_9_h3_9_update_0_write13_res = h3_9_update_0_write.extract<416, 447>();
	h3_9_h3_9_update_0_write13_write(h3_9_h3_9_update_0_write13_res, h3_9, d0, d1, dynamic_address);
	hw_uint<32>  h3_9_h3_9_update_0_write14_res = h3_9_update_0_write.extract<448, 479>();
	h3_9_h3_9_update_0_write14_write(h3_9_h3_9_update_0_write14_res, h3_9, d0, d1, dynamic_address);
	hw_uint<32>  h3_9_h3_9_update_0_write15_res = h3_9_update_0_write.extract<480, 511>();
	h3_9_h3_9_update_0_write15_write(h3_9_h3_9_update_0_write15_res, h3_9, d0, d1, dynamic_address);
}

struct in_cc_in_cc_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-144, 1168], [-10, 1032]}
	// Capacity: 170
	// # of read delays: 5
  // 0, 1, 84, 85, 169
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 82> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 83> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_83() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_84() {
		return f4;
	}

	inline hw_uint<32>  peek_85() {
		return f6;
	}

	inline hw_uint<32>  peek_168() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_169() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 82
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 82 reading from capacity: 1
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
	// RAM Box: {[-143, 1153], [-10, 1033]}
	// Capacity: 170
	// # of read delays: 4
  // 0, 1, 85, 169
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 83> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 83> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_85() {
		return f4;
	}

	inline hw_uint<32>  peek_168() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_169() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write10_merged_banks_5_cache {
	// RAM Box: {[-134, 1162], [-10, 1033]}
	// Capacity: 170
	// # of read delays: 4
  // 0, 1, 85, 169
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 83> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 83> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_85() {
		return f4;
	}

	inline hw_uint<32>  peek_168() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_169() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write11_merged_banks_5_cache {
	// RAM Box: {[-133, 1163], [-10, 1033]}
	// Capacity: 170
	// # of read delays: 4
  // 0, 1, 85, 169
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 83> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 83> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_85() {
		return f4;
	}

	inline hw_uint<32>  peek_168() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_169() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write12_merged_banks_5_cache {
	// RAM Box: {[-132, 1164], [-10, 1033]}
	// Capacity: 170
	// # of read delays: 4
  // 0, 1, 85, 169
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 83> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 83> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_85() {
		return f4;
	}

	inline hw_uint<32>  peek_168() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_169() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write13_merged_banks_5_cache {
	// RAM Box: {[-131, 1165], [-10, 1033]}
	// Capacity: 170
	// # of read delays: 4
  // 0, 1, 85, 169
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 83> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 83> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_85() {
		return f4;
	}

	inline hw_uint<32>  peek_168() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_169() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write14_merged_banks_5_cache {
	// RAM Box: {[-130, 1166], [-10, 1033]}
	// Capacity: 170
	// # of read delays: 4
  // 0, 1, 85, 169
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 83> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 83> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_85() {
		return f4;
	}

	inline hw_uint<32>  peek_168() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_169() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write15_merged_banks_5_cache {
	// RAM Box: {[-145, 1167], [-9, 1033]}
	// Capacity: 170
	// # of read delays: 5
  // 0, 1, 85, 86, 169
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 83> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 82> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_85() {
		return f4;
	}

	inline hw_uint<32>  peek_86() {
		return f6;
	}

	inline hw_uint<32>  peek_168() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_169() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 82
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 82 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
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
	// RAM Box: {[-142, 1154], [-10, 1033]}
	// Capacity: 170
	// # of read delays: 4
  // 0, 1, 85, 169
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 83> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 83> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_85() {
		return f4;
	}

	inline hw_uint<32>  peek_168() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_169() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
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
	// RAM Box: {[-141, 1155], [-10, 1033]}
	// Capacity: 170
	// # of read delays: 4
  // 0, 1, 85, 169
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 83> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 83> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_85() {
		return f4;
	}

	inline hw_uint<32>  peek_168() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_169() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write4_merged_banks_5_cache {
	// RAM Box: {[-140, 1156], [-10, 1033]}
	// Capacity: 170
	// # of read delays: 4
  // 0, 1, 85, 169
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 83> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 83> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_85() {
		return f4;
	}

	inline hw_uint<32>  peek_168() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_169() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write5_merged_banks_5_cache {
	// RAM Box: {[-139, 1157], [-10, 1033]}
	// Capacity: 170
	// # of read delays: 4
  // 0, 1, 85, 169
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 83> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 83> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_85() {
		return f4;
	}

	inline hw_uint<32>  peek_168() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_169() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write6_merged_banks_5_cache {
	// RAM Box: {[-138, 1158], [-10, 1033]}
	// Capacity: 170
	// # of read delays: 4
  // 0, 1, 85, 169
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 83> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 83> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_85() {
		return f4;
	}

	inline hw_uint<32>  peek_168() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_169() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write7_merged_banks_5_cache {
	// RAM Box: {[-137, 1159], [-10, 1033]}
	// Capacity: 170
	// # of read delays: 4
  // 0, 1, 85, 169
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 83> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 83> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_85() {
		return f4;
	}

	inline hw_uint<32>  peek_168() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_169() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write8_merged_banks_5_cache {
	// RAM Box: {[-136, 1160], [-10, 1033]}
	// Capacity: 170
	// # of read delays: 4
  // 0, 1, 85, 169
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 83> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 83> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_85() {
		return f4;
	}

	inline hw_uint<32>  peek_168() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_169() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_cc_in_cc_update_0_write9_merged_banks_5_cache {
	// RAM Box: {[-135, 1161], [-10, 1033]}
	// Capacity: 170
	// # of read delays: 4
  // 0, 1, 85, 169
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 83> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 83> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_84() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_85() {
		return f4;
	}

	inline hw_uint<32>  peek_168() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_169() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 83
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 83 reading from capacity: 1
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
  // # of banks: 16
  in_cc_in_cc_update_0_write0_merged_banks_5_cache in_cc_in_cc_update_0_write0_merged_banks_5;
  in_cc_in_cc_update_0_write1_merged_banks_5_cache in_cc_in_cc_update_0_write1_merged_banks_5;
  in_cc_in_cc_update_0_write10_merged_banks_5_cache in_cc_in_cc_update_0_write10_merged_banks_5;
  in_cc_in_cc_update_0_write11_merged_banks_5_cache in_cc_in_cc_update_0_write11_merged_banks_5;
  in_cc_in_cc_update_0_write12_merged_banks_5_cache in_cc_in_cc_update_0_write12_merged_banks_5;
  in_cc_in_cc_update_0_write13_merged_banks_5_cache in_cc_in_cc_update_0_write13_merged_banks_5;
  in_cc_in_cc_update_0_write14_merged_banks_5_cache in_cc_in_cc_update_0_write14_merged_banks_5;
  in_cc_in_cc_update_0_write15_merged_banks_5_cache in_cc_in_cc_update_0_write15_merged_banks_5;
  in_cc_in_cc_update_0_write2_merged_banks_5_cache in_cc_in_cc_update_0_write2_merged_banks_5;
  in_cc_in_cc_update_0_write3_merged_banks_5_cache in_cc_in_cc_update_0_write3_merged_banks_5;
  in_cc_in_cc_update_0_write4_merged_banks_5_cache in_cc_in_cc_update_0_write4_merged_banks_5;
  in_cc_in_cc_update_0_write5_merged_banks_5_cache in_cc_in_cc_update_0_write5_merged_banks_5;
  in_cc_in_cc_update_0_write6_merged_banks_5_cache in_cc_in_cc_update_0_write6_merged_banks_5;
  in_cc_in_cc_update_0_write7_merged_banks_5_cache in_cc_in_cc_update_0_write7_merged_banks_5;
  in_cc_in_cc_update_0_write8_merged_banks_5_cache in_cc_in_cc_update_0_write8_merged_banks_5;
  in_cc_in_cc_update_0_write9_merged_banks_5_cache in_cc_in_cc_update_0_write9_merged_banks_5;
};



inline void in_cc_in_cc_update_0_write0_write(hw_uint<32> & in_cc_in_cc_update_0_write0, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.push(in_cc_in_cc_update_0_write0);
}

inline void in_cc_in_cc_update_0_write1_write(hw_uint<32> & in_cc_in_cc_update_0_write1, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write1_merged_banks_5.push(in_cc_in_cc_update_0_write1);
}

inline void in_cc_in_cc_update_0_write10_write(hw_uint<32> & in_cc_in_cc_update_0_write10, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write10_merged_banks_5.push(in_cc_in_cc_update_0_write10);
}

inline void in_cc_in_cc_update_0_write11_write(hw_uint<32> & in_cc_in_cc_update_0_write11, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write11_merged_banks_5.push(in_cc_in_cc_update_0_write11);
}

inline void in_cc_in_cc_update_0_write12_write(hw_uint<32> & in_cc_in_cc_update_0_write12, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write12_merged_banks_5.push(in_cc_in_cc_update_0_write12);
}

inline void in_cc_in_cc_update_0_write13_write(hw_uint<32> & in_cc_in_cc_update_0_write13, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write13_merged_banks_5.push(in_cc_in_cc_update_0_write13);
}

inline void in_cc_in_cc_update_0_write14_write(hw_uint<32> & in_cc_in_cc_update_0_write14, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write14_merged_banks_5.push(in_cc_in_cc_update_0_write14);
}

inline void in_cc_in_cc_update_0_write15_write(hw_uint<32> & in_cc_in_cc_update_0_write15, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write15_merged_banks_5.push(in_cc_in_cc_update_0_write15);
}

inline void in_cc_in_cc_update_0_write2_write(hw_uint<32> & in_cc_in_cc_update_0_write2, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write2_merged_banks_5.push(in_cc_in_cc_update_0_write2);
}

inline void in_cc_in_cc_update_0_write3_write(hw_uint<32> & in_cc_in_cc_update_0_write3, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write3_merged_banks_5.push(in_cc_in_cc_update_0_write3);
}

inline void in_cc_in_cc_update_0_write4_write(hw_uint<32> & in_cc_in_cc_update_0_write4, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write4_merged_banks_5.push(in_cc_in_cc_update_0_write4);
}

inline void in_cc_in_cc_update_0_write5_write(hw_uint<32> & in_cc_in_cc_update_0_write5, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write5_merged_banks_5.push(in_cc_in_cc_update_0_write5);
}

inline void in_cc_in_cc_update_0_write6_write(hw_uint<32> & in_cc_in_cc_update_0_write6, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write6_merged_banks_5.push(in_cc_in_cc_update_0_write6);
}

inline void in_cc_in_cc_update_0_write7_write(hw_uint<32> & in_cc_in_cc_update_0_write7, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write7_merged_banks_5.push(in_cc_in_cc_update_0_write7);
}

inline void in_cc_in_cc_update_0_write8_write(hw_uint<32> & in_cc_in_cc_update_0_write8, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write8_merged_banks_5.push(in_cc_in_cc_update_0_write8);
}

inline void in_cc_in_cc_update_0_write9_write(hw_uint<32> & in_cc_in_cc_update_0_write9, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  in_cc.in_cc_in_cc_update_0_write9_merged_banks_5.push(in_cc_in_cc_update_0_write9);
}

inline hw_uint<32>  h3_0_rd0_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd0 read pattern: { h3_0_update_0[d0, d1] -> in_cc[-1 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write15 = in_cc.in_cc_in_cc_update_0_write15_merged_banks_5.peek_86();
  return value_in_cc_in_cc_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_0_rd1_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd1 read pattern: { h3_0_update_0[d0, d1] -> in_cc[16d0, -1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_169();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd10_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd10 read pattern: { h3_0_update_0[d0, d1] -> in_cc[1 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd11_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd11 read pattern: { h3_0_update_0[d0, d1] -> in_cc[2 + 16d0, -1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_5.peek_169();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd12_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd12 read pattern: { h3_0_update_0[d0, d1] -> in_cc[2 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd13_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd13 read pattern: { h3_0_update_0[d0, d1] -> in_cc[2 + 16d0, 1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd14_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd14 read pattern: { h3_0_update_0[d0, d1] -> in_cc[3 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd15_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd15 read pattern: { h3_0_update_0[d0, d1] -> in_cc[2 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd16_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd16 read pattern: { h3_0_update_0[d0, d1] -> in_cc[3 + 16d0, -1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_5.peek_169();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd17_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd17 read pattern: { h3_0_update_0[d0, d1] -> in_cc[3 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd18_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd18 read pattern: { h3_0_update_0[d0, d1] -> in_cc[3 + 16d0, 1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd19_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd19 read pattern: { h3_0_update_0[d0, d1] -> in_cc[4 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd2_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd2 read pattern: { h3_0_update_0[d0, d1] -> in_cc[16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd20_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd20 read pattern: { h3_0_update_0[d0, d1] -> in_cc[3 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd21_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd21 read pattern: { h3_0_update_0[d0, d1] -> in_cc[4 + 16d0, -1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_5.peek_169();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd22_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd22 read pattern: { h3_0_update_0[d0, d1] -> in_cc[4 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd23_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd23 read pattern: { h3_0_update_0[d0, d1] -> in_cc[4 + 16d0, 1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd24_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd24 read pattern: { h3_0_update_0[d0, d1] -> in_cc[5 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd25_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd25 read pattern: { h3_0_update_0[d0, d1] -> in_cc[4 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd26_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd26 read pattern: { h3_0_update_0[d0, d1] -> in_cc[5 + 16d0, -1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_5.peek_169();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd27_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd27 read pattern: { h3_0_update_0[d0, d1] -> in_cc[5 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd28_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd28 read pattern: { h3_0_update_0[d0, d1] -> in_cc[5 + 16d0, 1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd29_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd29 read pattern: { h3_0_update_0[d0, d1] -> in_cc[6 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd3_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd3 read pattern: { h3_0_update_0[d0, d1] -> in_cc[16d0, 1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd30_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd30 read pattern: { h3_0_update_0[d0, d1] -> in_cc[5 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd31_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd31 read pattern: { h3_0_update_0[d0, d1] -> in_cc[6 + 16d0, -1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_5.peek_169();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd32_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd32 read pattern: { h3_0_update_0[d0, d1] -> in_cc[6 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd33_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd33 read pattern: { h3_0_update_0[d0, d1] -> in_cc[6 + 16d0, 1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd34_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd34 read pattern: { h3_0_update_0[d0, d1] -> in_cc[7 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd35_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd35 read pattern: { h3_0_update_0[d0, d1] -> in_cc[6 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd36_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd36 read pattern: { h3_0_update_0[d0, d1] -> in_cc[7 + 16d0, -1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_5.peek_169();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd37_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd37 read pattern: { h3_0_update_0[d0, d1] -> in_cc[7 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd38_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd38 read pattern: { h3_0_update_0[d0, d1] -> in_cc[7 + 16d0, 1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd39_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd39 read pattern: { h3_0_update_0[d0, d1] -> in_cc[8 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write8 = in_cc.in_cc_in_cc_update_0_write8_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_0_rd4_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd4 read pattern: { h3_0_update_0[d0, d1] -> in_cc[1 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd40_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd40 read pattern: { h3_0_update_0[d0, d1] -> in_cc[7 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd41_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd41 read pattern: { h3_0_update_0[d0, d1] -> in_cc[8 + 16d0, -1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write8 = in_cc.in_cc_in_cc_update_0_write8_merged_banks_5.peek_169();
  return value_in_cc_in_cc_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_0_rd42_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd42 read pattern: { h3_0_update_0[d0, d1] -> in_cc[8 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write8 = in_cc.in_cc_in_cc_update_0_write8_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_0_rd43_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd43 read pattern: { h3_0_update_0[d0, d1] -> in_cc[8 + 16d0, 1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write8 = in_cc.in_cc_in_cc_update_0_write8_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_0_rd44_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd44 read pattern: { h3_0_update_0[d0, d1] -> in_cc[9 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write9 = in_cc.in_cc_in_cc_update_0_write9_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_0_rd45_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd45 read pattern: { h3_0_update_0[d0, d1] -> in_cc[8 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write8 = in_cc.in_cc_in_cc_update_0_write8_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write8;
  return 0;
}

inline hw_uint<32>  h3_0_rd46_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd46 read pattern: { h3_0_update_0[d0, d1] -> in_cc[9 + 16d0, -1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write9 = in_cc.in_cc_in_cc_update_0_write9_merged_banks_5.peek_169();
  return value_in_cc_in_cc_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_0_rd47_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd47 read pattern: { h3_0_update_0[d0, d1] -> in_cc[9 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write9 = in_cc.in_cc_in_cc_update_0_write9_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_0_rd48_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd48 read pattern: { h3_0_update_0[d0, d1] -> in_cc[9 + 16d0, 1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write9 = in_cc.in_cc_in_cc_update_0_write9_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_0_rd49_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd49 read pattern: { h3_0_update_0[d0, d1] -> in_cc[10 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write10 = in_cc.in_cc_in_cc_update_0_write10_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_0_rd5_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd5 read pattern: { h3_0_update_0[d0, d1] -> in_cc[16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd50_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd50 read pattern: { h3_0_update_0[d0, d1] -> in_cc[9 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write9 = in_cc.in_cc_in_cc_update_0_write9_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write9;
  return 0;
}

inline hw_uint<32>  h3_0_rd51_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd51 read pattern: { h3_0_update_0[d0, d1] -> in_cc[10 + 16d0, -1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write10 = in_cc.in_cc_in_cc_update_0_write10_merged_banks_5.peek_169();
  return value_in_cc_in_cc_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_0_rd52_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd52 read pattern: { h3_0_update_0[d0, d1] -> in_cc[10 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write10 = in_cc.in_cc_in_cc_update_0_write10_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_0_rd53_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd53 read pattern: { h3_0_update_0[d0, d1] -> in_cc[10 + 16d0, 1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write10 = in_cc.in_cc_in_cc_update_0_write10_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_0_rd54_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd54 read pattern: { h3_0_update_0[d0, d1] -> in_cc[11 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write11 = in_cc.in_cc_in_cc_update_0_write11_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_0_rd55_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd55 read pattern: { h3_0_update_0[d0, d1] -> in_cc[10 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write10 = in_cc.in_cc_in_cc_update_0_write10_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write10;
  return 0;
}

inline hw_uint<32>  h3_0_rd56_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd56 read pattern: { h3_0_update_0[d0, d1] -> in_cc[11 + 16d0, -1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write11 = in_cc.in_cc_in_cc_update_0_write11_merged_banks_5.peek_169();
  return value_in_cc_in_cc_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_0_rd57_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd57 read pattern: { h3_0_update_0[d0, d1] -> in_cc[11 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write11 = in_cc.in_cc_in_cc_update_0_write11_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_0_rd58_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd58 read pattern: { h3_0_update_0[d0, d1] -> in_cc[11 + 16d0, 1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write11 = in_cc.in_cc_in_cc_update_0_write11_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_0_rd59_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd59 read pattern: { h3_0_update_0[d0, d1] -> in_cc[12 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write12 = in_cc.in_cc_in_cc_update_0_write12_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_0_rd6_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd6 read pattern: { h3_0_update_0[d0, d1] -> in_cc[1 + 16d0, -1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_5.peek_169();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd60_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd60 read pattern: { h3_0_update_0[d0, d1] -> in_cc[11 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write11 = in_cc.in_cc_in_cc_update_0_write11_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write11;
  return 0;
}

inline hw_uint<32>  h3_0_rd61_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd61 read pattern: { h3_0_update_0[d0, d1] -> in_cc[12 + 16d0, -1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write12 = in_cc.in_cc_in_cc_update_0_write12_merged_banks_5.peek_169();
  return value_in_cc_in_cc_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_0_rd62_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd62 read pattern: { h3_0_update_0[d0, d1] -> in_cc[12 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write12 = in_cc.in_cc_in_cc_update_0_write12_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_0_rd63_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd63 read pattern: { h3_0_update_0[d0, d1] -> in_cc[12 + 16d0, 1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write12 = in_cc.in_cc_in_cc_update_0_write12_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_0_rd64_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd64 read pattern: { h3_0_update_0[d0, d1] -> in_cc[13 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write13 = in_cc.in_cc_in_cc_update_0_write13_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_0_rd65_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd65 read pattern: { h3_0_update_0[d0, d1] -> in_cc[12 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write12 = in_cc.in_cc_in_cc_update_0_write12_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write12;
  return 0;
}

inline hw_uint<32>  h3_0_rd66_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd66 read pattern: { h3_0_update_0[d0, d1] -> in_cc[13 + 16d0, -1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write13 = in_cc.in_cc_in_cc_update_0_write13_merged_banks_5.peek_169();
  return value_in_cc_in_cc_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_0_rd67_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd67 read pattern: { h3_0_update_0[d0, d1] -> in_cc[13 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write13 = in_cc.in_cc_in_cc_update_0_write13_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_0_rd68_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd68 read pattern: { h3_0_update_0[d0, d1] -> in_cc[13 + 16d0, 1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write13 = in_cc.in_cc_in_cc_update_0_write13_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_0_rd69_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd69 read pattern: { h3_0_update_0[d0, d1] -> in_cc[14 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write14 = in_cc.in_cc_in_cc_update_0_write14_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_0_rd7_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd7 read pattern: { h3_0_update_0[d0, d1] -> in_cc[1 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd70_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd70 read pattern: { h3_0_update_0[d0, d1] -> in_cc[13 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write13 = in_cc.in_cc_in_cc_update_0_write13_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write13;
  return 0;
}

inline hw_uint<32>  h3_0_rd71_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd71 read pattern: { h3_0_update_0[d0, d1] -> in_cc[14 + 16d0, -1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write14 = in_cc.in_cc_in_cc_update_0_write14_merged_banks_5.peek_169();
  return value_in_cc_in_cc_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_0_rd72_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd72 read pattern: { h3_0_update_0[d0, d1] -> in_cc[14 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write14 = in_cc.in_cc_in_cc_update_0_write14_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_0_rd73_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd73 read pattern: { h3_0_update_0[d0, d1] -> in_cc[14 + 16d0, 1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write14 = in_cc.in_cc_in_cc_update_0_write14_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_0_rd74_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd74 read pattern: { h3_0_update_0[d0, d1] -> in_cc[15 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write15 = in_cc.in_cc_in_cc_update_0_write15_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_0_rd75_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd75 read pattern: { h3_0_update_0[d0, d1] -> in_cc[14 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write14 = in_cc.in_cc_in_cc_update_0_write14_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write14;
  return 0;
}

inline hw_uint<32>  h3_0_rd76_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd76 read pattern: { h3_0_update_0[d0, d1] -> in_cc[15 + 16d0, -1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write15 = in_cc.in_cc_in_cc_update_0_write15_merged_banks_5.peek_169();
  return value_in_cc_in_cc_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_0_rd77_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd77 read pattern: { h3_0_update_0[d0, d1] -> in_cc[15 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write15 = in_cc.in_cc_in_cc_update_0_write15_merged_banks_5.peek_85();
  return value_in_cc_in_cc_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_0_rd78_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd78 read pattern: { h3_0_update_0[d0, d1] -> in_cc[15 + 16d0, 1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write15 = in_cc.in_cc_in_cc_update_0_write15_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write15;
  return 0;
}

inline hw_uint<32>  h3_0_rd79_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd79 read pattern: { h3_0_update_0[d0, d1] -> in_cc[16 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_84();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd8_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd8 read pattern: { h3_0_update_0[d0, d1] -> in_cc[1 + 16d0, 1 + d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd9_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd9 read pattern: { h3_0_update_0[d0, d1] -> in_cc[2 + 16d0, d1] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_5.peek_85();
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
//	h3_0_rd20
//	h3_0_rd21
//	h3_0_rd22
//	h3_0_rd23
//	h3_0_rd24
//	h3_0_rd25
//	h3_0_rd26
//	h3_0_rd27
//	h3_0_rd28
//	h3_0_rd29
//	h3_0_rd30
//	h3_0_rd31
//	h3_0_rd32
//	h3_0_rd33
//	h3_0_rd34
//	h3_0_rd35
//	h3_0_rd36
//	h3_0_rd37
//	h3_0_rd38
//	h3_0_rd39
//	h3_0_rd40
//	h3_0_rd41
//	h3_0_rd42
//	h3_0_rd43
//	h3_0_rd44
//	h3_0_rd45
//	h3_0_rd46
//	h3_0_rd47
//	h3_0_rd48
//	h3_0_rd49
//	h3_0_rd50
//	h3_0_rd51
//	h3_0_rd52
//	h3_0_rd53
//	h3_0_rd54
//	h3_0_rd55
//	h3_0_rd56
//	h3_0_rd57
//	h3_0_rd58
//	h3_0_rd59
//	h3_0_rd60
//	h3_0_rd61
//	h3_0_rd62
//	h3_0_rd63
//	h3_0_rd64
//	h3_0_rd65
//	h3_0_rd66
//	h3_0_rd67
//	h3_0_rd68
//	h3_0_rd69
//	h3_0_rd70
//	h3_0_rd71
//	h3_0_rd72
//	h3_0_rd73
//	h3_0_rd74
//	h3_0_rd75
//	h3_0_rd76
//	h3_0_rd77
//	h3_0_rd78
//	h3_0_rd79
inline hw_uint<2560> in_cc_h3_0_update_0_read_bundle_read(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 80
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
    // h3_0_rd20
    // h3_0_rd21
    // h3_0_rd22
    // h3_0_rd23
    // h3_0_rd24
    // h3_0_rd25
    // h3_0_rd26
    // h3_0_rd27
    // h3_0_rd28
    // h3_0_rd29
    // h3_0_rd30
    // h3_0_rd31
    // h3_0_rd32
    // h3_0_rd33
    // h3_0_rd34
    // h3_0_rd35
    // h3_0_rd36
    // h3_0_rd37
    // h3_0_rd38
    // h3_0_rd39
    // h3_0_rd40
    // h3_0_rd41
    // h3_0_rd42
    // h3_0_rd43
    // h3_0_rd44
    // h3_0_rd45
    // h3_0_rd46
    // h3_0_rd47
    // h3_0_rd48
    // h3_0_rd49
    // h3_0_rd50
    // h3_0_rd51
    // h3_0_rd52
    // h3_0_rd53
    // h3_0_rd54
    // h3_0_rd55
    // h3_0_rd56
    // h3_0_rd57
    // h3_0_rd58
    // h3_0_rd59
    // h3_0_rd60
    // h3_0_rd61
    // h3_0_rd62
    // h3_0_rd63
    // h3_0_rd64
    // h3_0_rd65
    // h3_0_rd66
    // h3_0_rd67
    // h3_0_rd68
    // h3_0_rd69
    // h3_0_rd70
    // h3_0_rd71
    // h3_0_rd72
    // h3_0_rd73
    // h3_0_rd74
    // h3_0_rd75
    // h3_0_rd76
    // h3_0_rd77
    // h3_0_rd78
    // h3_0_rd79

	hw_uint<2560> result;
	hw_uint<32>  h3_0_rd0_res = h3_0_rd0_select(in_cc, d0, d1, dynamic_address);
	set_at<0, 2560>(result, h3_0_rd0_res);
	hw_uint<32>  h3_0_rd1_res = h3_0_rd1_select(in_cc, d0, d1, dynamic_address);
	set_at<32, 2560>(result, h3_0_rd1_res);
	hw_uint<32>  h3_0_rd2_res = h3_0_rd2_select(in_cc, d0, d1, dynamic_address);
	set_at<64, 2560>(result, h3_0_rd2_res);
	hw_uint<32>  h3_0_rd3_res = h3_0_rd3_select(in_cc, d0, d1, dynamic_address);
	set_at<96, 2560>(result, h3_0_rd3_res);
	hw_uint<32>  h3_0_rd4_res = h3_0_rd4_select(in_cc, d0, d1, dynamic_address);
	set_at<128, 2560>(result, h3_0_rd4_res);
	hw_uint<32>  h3_0_rd5_res = h3_0_rd5_select(in_cc, d0, d1, dynamic_address);
	set_at<160, 2560>(result, h3_0_rd5_res);
	hw_uint<32>  h3_0_rd6_res = h3_0_rd6_select(in_cc, d0, d1, dynamic_address);
	set_at<192, 2560>(result, h3_0_rd6_res);
	hw_uint<32>  h3_0_rd7_res = h3_0_rd7_select(in_cc, d0, d1, dynamic_address);
	set_at<224, 2560>(result, h3_0_rd7_res);
	hw_uint<32>  h3_0_rd8_res = h3_0_rd8_select(in_cc, d0, d1, dynamic_address);
	set_at<256, 2560>(result, h3_0_rd8_res);
	hw_uint<32>  h3_0_rd9_res = h3_0_rd9_select(in_cc, d0, d1, dynamic_address);
	set_at<288, 2560>(result, h3_0_rd9_res);
	hw_uint<32>  h3_0_rd10_res = h3_0_rd10_select(in_cc, d0, d1, dynamic_address);
	set_at<320, 2560>(result, h3_0_rd10_res);
	hw_uint<32>  h3_0_rd11_res = h3_0_rd11_select(in_cc, d0, d1, dynamic_address);
	set_at<352, 2560>(result, h3_0_rd11_res);
	hw_uint<32>  h3_0_rd12_res = h3_0_rd12_select(in_cc, d0, d1, dynamic_address);
	set_at<384, 2560>(result, h3_0_rd12_res);
	hw_uint<32>  h3_0_rd13_res = h3_0_rd13_select(in_cc, d0, d1, dynamic_address);
	set_at<416, 2560>(result, h3_0_rd13_res);
	hw_uint<32>  h3_0_rd14_res = h3_0_rd14_select(in_cc, d0, d1, dynamic_address);
	set_at<448, 2560>(result, h3_0_rd14_res);
	hw_uint<32>  h3_0_rd15_res = h3_0_rd15_select(in_cc, d0, d1, dynamic_address);
	set_at<480, 2560>(result, h3_0_rd15_res);
	hw_uint<32>  h3_0_rd16_res = h3_0_rd16_select(in_cc, d0, d1, dynamic_address);
	set_at<512, 2560>(result, h3_0_rd16_res);
	hw_uint<32>  h3_0_rd17_res = h3_0_rd17_select(in_cc, d0, d1, dynamic_address);
	set_at<544, 2560>(result, h3_0_rd17_res);
	hw_uint<32>  h3_0_rd18_res = h3_0_rd18_select(in_cc, d0, d1, dynamic_address);
	set_at<576, 2560>(result, h3_0_rd18_res);
	hw_uint<32>  h3_0_rd19_res = h3_0_rd19_select(in_cc, d0, d1, dynamic_address);
	set_at<608, 2560>(result, h3_0_rd19_res);
	hw_uint<32>  h3_0_rd20_res = h3_0_rd20_select(in_cc, d0, d1, dynamic_address);
	set_at<640, 2560>(result, h3_0_rd20_res);
	hw_uint<32>  h3_0_rd21_res = h3_0_rd21_select(in_cc, d0, d1, dynamic_address);
	set_at<672, 2560>(result, h3_0_rd21_res);
	hw_uint<32>  h3_0_rd22_res = h3_0_rd22_select(in_cc, d0, d1, dynamic_address);
	set_at<704, 2560>(result, h3_0_rd22_res);
	hw_uint<32>  h3_0_rd23_res = h3_0_rd23_select(in_cc, d0, d1, dynamic_address);
	set_at<736, 2560>(result, h3_0_rd23_res);
	hw_uint<32>  h3_0_rd24_res = h3_0_rd24_select(in_cc, d0, d1, dynamic_address);
	set_at<768, 2560>(result, h3_0_rd24_res);
	hw_uint<32>  h3_0_rd25_res = h3_0_rd25_select(in_cc, d0, d1, dynamic_address);
	set_at<800, 2560>(result, h3_0_rd25_res);
	hw_uint<32>  h3_0_rd26_res = h3_0_rd26_select(in_cc, d0, d1, dynamic_address);
	set_at<832, 2560>(result, h3_0_rd26_res);
	hw_uint<32>  h3_0_rd27_res = h3_0_rd27_select(in_cc, d0, d1, dynamic_address);
	set_at<864, 2560>(result, h3_0_rd27_res);
	hw_uint<32>  h3_0_rd28_res = h3_0_rd28_select(in_cc, d0, d1, dynamic_address);
	set_at<896, 2560>(result, h3_0_rd28_res);
	hw_uint<32>  h3_0_rd29_res = h3_0_rd29_select(in_cc, d0, d1, dynamic_address);
	set_at<928, 2560>(result, h3_0_rd29_res);
	hw_uint<32>  h3_0_rd30_res = h3_0_rd30_select(in_cc, d0, d1, dynamic_address);
	set_at<960, 2560>(result, h3_0_rd30_res);
	hw_uint<32>  h3_0_rd31_res = h3_0_rd31_select(in_cc, d0, d1, dynamic_address);
	set_at<992, 2560>(result, h3_0_rd31_res);
	hw_uint<32>  h3_0_rd32_res = h3_0_rd32_select(in_cc, d0, d1, dynamic_address);
	set_at<1024, 2560>(result, h3_0_rd32_res);
	hw_uint<32>  h3_0_rd33_res = h3_0_rd33_select(in_cc, d0, d1, dynamic_address);
	set_at<1056, 2560>(result, h3_0_rd33_res);
	hw_uint<32>  h3_0_rd34_res = h3_0_rd34_select(in_cc, d0, d1, dynamic_address);
	set_at<1088, 2560>(result, h3_0_rd34_res);
	hw_uint<32>  h3_0_rd35_res = h3_0_rd35_select(in_cc, d0, d1, dynamic_address);
	set_at<1120, 2560>(result, h3_0_rd35_res);
	hw_uint<32>  h3_0_rd36_res = h3_0_rd36_select(in_cc, d0, d1, dynamic_address);
	set_at<1152, 2560>(result, h3_0_rd36_res);
	hw_uint<32>  h3_0_rd37_res = h3_0_rd37_select(in_cc, d0, d1, dynamic_address);
	set_at<1184, 2560>(result, h3_0_rd37_res);
	hw_uint<32>  h3_0_rd38_res = h3_0_rd38_select(in_cc, d0, d1, dynamic_address);
	set_at<1216, 2560>(result, h3_0_rd38_res);
	hw_uint<32>  h3_0_rd39_res = h3_0_rd39_select(in_cc, d0, d1, dynamic_address);
	set_at<1248, 2560>(result, h3_0_rd39_res);
	hw_uint<32>  h3_0_rd40_res = h3_0_rd40_select(in_cc, d0, d1, dynamic_address);
	set_at<1280, 2560>(result, h3_0_rd40_res);
	hw_uint<32>  h3_0_rd41_res = h3_0_rd41_select(in_cc, d0, d1, dynamic_address);
	set_at<1312, 2560>(result, h3_0_rd41_res);
	hw_uint<32>  h3_0_rd42_res = h3_0_rd42_select(in_cc, d0, d1, dynamic_address);
	set_at<1344, 2560>(result, h3_0_rd42_res);
	hw_uint<32>  h3_0_rd43_res = h3_0_rd43_select(in_cc, d0, d1, dynamic_address);
	set_at<1376, 2560>(result, h3_0_rd43_res);
	hw_uint<32>  h3_0_rd44_res = h3_0_rd44_select(in_cc, d0, d1, dynamic_address);
	set_at<1408, 2560>(result, h3_0_rd44_res);
	hw_uint<32>  h3_0_rd45_res = h3_0_rd45_select(in_cc, d0, d1, dynamic_address);
	set_at<1440, 2560>(result, h3_0_rd45_res);
	hw_uint<32>  h3_0_rd46_res = h3_0_rd46_select(in_cc, d0, d1, dynamic_address);
	set_at<1472, 2560>(result, h3_0_rd46_res);
	hw_uint<32>  h3_0_rd47_res = h3_0_rd47_select(in_cc, d0, d1, dynamic_address);
	set_at<1504, 2560>(result, h3_0_rd47_res);
	hw_uint<32>  h3_0_rd48_res = h3_0_rd48_select(in_cc, d0, d1, dynamic_address);
	set_at<1536, 2560>(result, h3_0_rd48_res);
	hw_uint<32>  h3_0_rd49_res = h3_0_rd49_select(in_cc, d0, d1, dynamic_address);
	set_at<1568, 2560>(result, h3_0_rd49_res);
	hw_uint<32>  h3_0_rd50_res = h3_0_rd50_select(in_cc, d0, d1, dynamic_address);
	set_at<1600, 2560>(result, h3_0_rd50_res);
	hw_uint<32>  h3_0_rd51_res = h3_0_rd51_select(in_cc, d0, d1, dynamic_address);
	set_at<1632, 2560>(result, h3_0_rd51_res);
	hw_uint<32>  h3_0_rd52_res = h3_0_rd52_select(in_cc, d0, d1, dynamic_address);
	set_at<1664, 2560>(result, h3_0_rd52_res);
	hw_uint<32>  h3_0_rd53_res = h3_0_rd53_select(in_cc, d0, d1, dynamic_address);
	set_at<1696, 2560>(result, h3_0_rd53_res);
	hw_uint<32>  h3_0_rd54_res = h3_0_rd54_select(in_cc, d0, d1, dynamic_address);
	set_at<1728, 2560>(result, h3_0_rd54_res);
	hw_uint<32>  h3_0_rd55_res = h3_0_rd55_select(in_cc, d0, d1, dynamic_address);
	set_at<1760, 2560>(result, h3_0_rd55_res);
	hw_uint<32>  h3_0_rd56_res = h3_0_rd56_select(in_cc, d0, d1, dynamic_address);
	set_at<1792, 2560>(result, h3_0_rd56_res);
	hw_uint<32>  h3_0_rd57_res = h3_0_rd57_select(in_cc, d0, d1, dynamic_address);
	set_at<1824, 2560>(result, h3_0_rd57_res);
	hw_uint<32>  h3_0_rd58_res = h3_0_rd58_select(in_cc, d0, d1, dynamic_address);
	set_at<1856, 2560>(result, h3_0_rd58_res);
	hw_uint<32>  h3_0_rd59_res = h3_0_rd59_select(in_cc, d0, d1, dynamic_address);
	set_at<1888, 2560>(result, h3_0_rd59_res);
	hw_uint<32>  h3_0_rd60_res = h3_0_rd60_select(in_cc, d0, d1, dynamic_address);
	set_at<1920, 2560>(result, h3_0_rd60_res);
	hw_uint<32>  h3_0_rd61_res = h3_0_rd61_select(in_cc, d0, d1, dynamic_address);
	set_at<1952, 2560>(result, h3_0_rd61_res);
	hw_uint<32>  h3_0_rd62_res = h3_0_rd62_select(in_cc, d0, d1, dynamic_address);
	set_at<1984, 2560>(result, h3_0_rd62_res);
	hw_uint<32>  h3_0_rd63_res = h3_0_rd63_select(in_cc, d0, d1, dynamic_address);
	set_at<2016, 2560>(result, h3_0_rd63_res);
	hw_uint<32>  h3_0_rd64_res = h3_0_rd64_select(in_cc, d0, d1, dynamic_address);
	set_at<2048, 2560>(result, h3_0_rd64_res);
	hw_uint<32>  h3_0_rd65_res = h3_0_rd65_select(in_cc, d0, d1, dynamic_address);
	set_at<2080, 2560>(result, h3_0_rd65_res);
	hw_uint<32>  h3_0_rd66_res = h3_0_rd66_select(in_cc, d0, d1, dynamic_address);
	set_at<2112, 2560>(result, h3_0_rd66_res);
	hw_uint<32>  h3_0_rd67_res = h3_0_rd67_select(in_cc, d0, d1, dynamic_address);
	set_at<2144, 2560>(result, h3_0_rd67_res);
	hw_uint<32>  h3_0_rd68_res = h3_0_rd68_select(in_cc, d0, d1, dynamic_address);
	set_at<2176, 2560>(result, h3_0_rd68_res);
	hw_uint<32>  h3_0_rd69_res = h3_0_rd69_select(in_cc, d0, d1, dynamic_address);
	set_at<2208, 2560>(result, h3_0_rd69_res);
	hw_uint<32>  h3_0_rd70_res = h3_0_rd70_select(in_cc, d0, d1, dynamic_address);
	set_at<2240, 2560>(result, h3_0_rd70_res);
	hw_uint<32>  h3_0_rd71_res = h3_0_rd71_select(in_cc, d0, d1, dynamic_address);
	set_at<2272, 2560>(result, h3_0_rd71_res);
	hw_uint<32>  h3_0_rd72_res = h3_0_rd72_select(in_cc, d0, d1, dynamic_address);
	set_at<2304, 2560>(result, h3_0_rd72_res);
	hw_uint<32>  h3_0_rd73_res = h3_0_rd73_select(in_cc, d0, d1, dynamic_address);
	set_at<2336, 2560>(result, h3_0_rd73_res);
	hw_uint<32>  h3_0_rd74_res = h3_0_rd74_select(in_cc, d0, d1, dynamic_address);
	set_at<2368, 2560>(result, h3_0_rd74_res);
	hw_uint<32>  h3_0_rd75_res = h3_0_rd75_select(in_cc, d0, d1, dynamic_address);
	set_at<2400, 2560>(result, h3_0_rd75_res);
	hw_uint<32>  h3_0_rd76_res = h3_0_rd76_select(in_cc, d0, d1, dynamic_address);
	set_at<2432, 2560>(result, h3_0_rd76_res);
	hw_uint<32>  h3_0_rd77_res = h3_0_rd77_select(in_cc, d0, d1, dynamic_address);
	set_at<2464, 2560>(result, h3_0_rd77_res);
	hw_uint<32>  h3_0_rd78_res = h3_0_rd78_select(in_cc, d0, d1, dynamic_address);
	set_at<2496, 2560>(result, h3_0_rd78_res);
	hw_uint<32>  h3_0_rd79_res = h3_0_rd79_select(in_cc, d0, d1, dynamic_address);
	set_at<2528, 2560>(result, h3_0_rd79_res);
	return result;
}

// in_cc_update_0_write
//	in_cc_in_cc_update_0_write0
//	in_cc_in_cc_update_0_write1
//	in_cc_in_cc_update_0_write2
//	in_cc_in_cc_update_0_write3
//	in_cc_in_cc_update_0_write4
//	in_cc_in_cc_update_0_write5
//	in_cc_in_cc_update_0_write6
//	in_cc_in_cc_update_0_write7
//	in_cc_in_cc_update_0_write8
//	in_cc_in_cc_update_0_write9
//	in_cc_in_cc_update_0_write10
//	in_cc_in_cc_update_0_write11
//	in_cc_in_cc_update_0_write12
//	in_cc_in_cc_update_0_write13
//	in_cc_in_cc_update_0_write14
//	in_cc_in_cc_update_0_write15
inline void in_cc_in_cc_update_0_write_bundle_write(hw_uint<512>& in_cc_update_0_write, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
	hw_uint<32>  in_cc_in_cc_update_0_write0_res = in_cc_update_0_write.extract<0, 31>();
	in_cc_in_cc_update_0_write0_write(in_cc_in_cc_update_0_write0_res, in_cc, d0, d1, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write1_res = in_cc_update_0_write.extract<32, 63>();
	in_cc_in_cc_update_0_write1_write(in_cc_in_cc_update_0_write1_res, in_cc, d0, d1, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write2_res = in_cc_update_0_write.extract<64, 95>();
	in_cc_in_cc_update_0_write2_write(in_cc_in_cc_update_0_write2_res, in_cc, d0, d1, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write3_res = in_cc_update_0_write.extract<96, 127>();
	in_cc_in_cc_update_0_write3_write(in_cc_in_cc_update_0_write3_res, in_cc, d0, d1, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write4_res = in_cc_update_0_write.extract<128, 159>();
	in_cc_in_cc_update_0_write4_write(in_cc_in_cc_update_0_write4_res, in_cc, d0, d1, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write5_res = in_cc_update_0_write.extract<160, 191>();
	in_cc_in_cc_update_0_write5_write(in_cc_in_cc_update_0_write5_res, in_cc, d0, d1, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write6_res = in_cc_update_0_write.extract<192, 223>();
	in_cc_in_cc_update_0_write6_write(in_cc_in_cc_update_0_write6_res, in_cc, d0, d1, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write7_res = in_cc_update_0_write.extract<224, 255>();
	in_cc_in_cc_update_0_write7_write(in_cc_in_cc_update_0_write7_res, in_cc, d0, d1, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write8_res = in_cc_update_0_write.extract<256, 287>();
	in_cc_in_cc_update_0_write8_write(in_cc_in_cc_update_0_write8_res, in_cc, d0, d1, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write9_res = in_cc_update_0_write.extract<288, 319>();
	in_cc_in_cc_update_0_write9_write(in_cc_in_cc_update_0_write9_res, in_cc, d0, d1, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write10_res = in_cc_update_0_write.extract<320, 351>();
	in_cc_in_cc_update_0_write10_write(in_cc_in_cc_update_0_write10_res, in_cc, d0, d1, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write11_res = in_cc_update_0_write.extract<352, 383>();
	in_cc_in_cc_update_0_write11_write(in_cc_in_cc_update_0_write11_res, in_cc, d0, d1, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write12_res = in_cc_update_0_write.extract<384, 415>();
	in_cc_in_cc_update_0_write12_write(in_cc_in_cc_update_0_write12_res, in_cc, d0, d1, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write13_res = in_cc_update_0_write.extract<416, 447>();
	in_cc_in_cc_update_0_write13_write(in_cc_in_cc_update_0_write13_res, in_cc, d0, d1, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write14_res = in_cc_update_0_write.extract<448, 479>();
	in_cc_in_cc_update_0_write14_write(in_cc_in_cc_update_0_write14_res, in_cc, d0, d1, dynamic_address);
	hw_uint<32>  in_cc_in_cc_update_0_write15_res = in_cc_update_0_write.extract<480, 511>();
	in_cc_in_cc_update_0_write15_write(in_cc_in_cc_update_0_write15_res, in_cc, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 773120 bits


// Operation logic
inline void in_cc_update_0(HWStream<hw_uint<512> >& /* buffer_args num ports = 16 */in, in_cc_cache& in_cc, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in.read();
	auto compute_result = in_cc_generated_compute_unrolled_16(in_0_c__0_value);
	// Produce: in_cc
	in_cc_in_cc_update_0_write_bundle_write(/* arg names */compute_result, in_cc, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_0_update_0(in_cc_cache& in_cc, h3_0_cache& h3_0, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_cc
	auto in_cc_0_c__0_value = in_cc_h3_0_update_0_read_bundle_read(in_cc/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_0_generated_compute_unrolled_16(in_cc_0_c__0_value);
	// Produce: h3_0
	h3_0_h3_0_update_0_write_bundle_write(/* arg names */compute_result, h3_0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_1_update_0(h3_0_cache& h3_0, h3_1_cache& h3_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_0
	auto h3_0_0_c__0_value = h3_0_h3_1_update_0_read_bundle_read(h3_0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_1_generated_compute_unrolled_16(h3_0_0_c__0_value);
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

	auto compute_result = h3_2_generated_compute_unrolled_16(h3_1_0_c__0_value);
	// Produce: h3_2
	h3_2_h3_2_update_0_write_bundle_write(/* arg names */compute_result, h3_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_4_update_0(h3_3_cache& h3_3, h3_4_cache& h3_4, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_3
	auto h3_3_0_c__0_value = h3_3_h3_4_update_0_read_bundle_read(h3_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_4_generated_compute_unrolled_16(h3_3_0_c__0_value);
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

	auto compute_result = h3_6_generated_compute_unrolled_16(h3_5_0_c__0_value);
	// Produce: h3_6
	h3_6_h3_6_update_0_write_bundle_write(/* arg names */compute_result, h3_6, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_3_update_0(h3_2_cache& h3_2, h3_3_cache& h3_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_2
	auto h3_2_0_c__0_value = h3_2_h3_3_update_0_read_bundle_read(h3_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_3_generated_compute_unrolled_16(h3_2_0_c__0_value);
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

	auto compute_result = h3_5_generated_compute_unrolled_16(h3_4_0_c__0_value);
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

	auto compute_result = h3_7_generated_compute_unrolled_16(h3_6_0_c__0_value);
	// Produce: h3_7
	h3_7_h3_7_update_0_write_bundle_write(/* arg names */compute_result, h3_7, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_8_update_0(h3_7_cache& h3_7, h3_8_cache& h3_8, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_7
	auto h3_7_0_c__0_value = h3_7_h3_8_update_0_read_bundle_read(h3_7/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_8_generated_compute_unrolled_16(h3_7_0_c__0_value);
	// Produce: h3_8
	h3_8_h3_8_update_0_write_bundle_write(/* arg names */compute_result, h3_8, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_9_update_0(h3_8_cache& h3_8, h3_9_cache& h3_9, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_8
	auto h3_8_0_c__0_value = h3_8_h3_9_update_0_read_bundle_read(h3_8/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_9_generated_compute_unrolled_16(h3_8_0_c__0_value);
	// Produce: h3_9
	h3_9_h3_9_update_0_write_bundle_write(/* arg names */compute_result, h3_9, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h10_16_300MHz_16_update_0(h3_9_cache& h3_9, HWStream<hw_uint<512> >& /* buffer_args num ports = 16 */h10_16_300MHz_16, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_9
	auto h3_9_0_c__0_value = h3_9_h10_16_300MHz_16_update_0_read_bundle_read(h3_9/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h10_16_300MHz_16_generated_compute_unrolled_16(h3_9_0_c__0_value);
	// Produce: h10_16_300MHz_16
	h10_16_300MHz_16.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void h10_16_300MHz_16_opt(HWStream<hw_uint<512> >& /* get_args num ports = 16 */in, HWStream<hw_uint<512> >& /* get_args num ports = 16 */h10_16_300MHz_16) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("h10_16_300MHz_16_opt_debug.csv");
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

// schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025; h10_16_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 1023; in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033; h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023; h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031; h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029; h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027; h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030; h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028; h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032; h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024; h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
//   { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 65 and -2 <= d1 <= 1025 }
// Condition for h3_7_update_0(((-9 + i2 == 0) && (-6 + i1 >= 0) && (73 - i1 >= 0) && (-6 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h10_16_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
// Condition for h10_16_300MHz_16_update_0(((-12 + i2 == 0) && (-10 + i1 >= 0) && (73 - i1 >= 0) && (-10 + i0 >= 0) && (1033 - i0 >= 0)))
//   { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 73 and -10 <= d1 <= 1033 }
// Condition for in_cc_update_0(((-1 + i2 == 0) && (10 + i1 >= 0) && (73 - i1 >= 0) && (10 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 63 and 0 <= d1 <= 1023 }
// Condition for h3_9_update_0(((-11 + i2 == 0) && (-10 + i1 >= 0) && (73 - i1 >= 0) && (-10 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 71 and -8 <= d1 <= 1031 }
// Condition for h3_1_update_0(((-3 + i2 == 0) && (6 + i1 >= 0) && (73 - i1 >= 0) && (6 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 69 and -6 <= d1 <= 1029 }
// Condition for h3_3_update_0(((-5 + i2 == 0) && (2 + i1 >= 0) && (73 - i1 >= 0) && (2 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 67 and -4 <= d1 <= 1027 }
// Condition for h3_5_update_0(((-7 + i2 == 0) && (-2 + i1 >= 0) && (73 - i1 >= 0) && (-2 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 70 and -7 <= d1 <= 1030 }
// Condition for h3_2_update_0(((-4 + i2 == 0) && (4 + i1 >= 0) && (73 - i1 >= 0) && (4 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 68 and -5 <= d1 <= 1028 }
// Condition for h3_4_update_0(((-6 + i2 == 0) && (i1 >= 0) && (73 - i1 >= 0) && (i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 72 and -9 <= d1 <= 1032 }
// Condition for h3_0_update_0(((-2 + i2 == 0) && (8 + i1 >= 0) && (73 - i1 >= 0) && (8 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 64 and -1 <= d1 <= 1024 }
// Condition for h3_8_update_0(((-10 + i2 == 0) && (-8 + i1 >= 0) && (73 - i1 >= 0) && (-8 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 66 and -3 <= d1 <= 1026 }
// Condition for h3_6_update_0(((-8 + i2 == 0) && (-4 + i1 >= 0) && (73 - i1 >= 0) && (-4 + i0 >= 0) && (1033 - i0 >= 0)))

  /*
  // Schedules...
    // h10_16_300MHz_16_update_0 -> [1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*12]
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
  for (int c1 = -10; c1 <= 73; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((-10 <= c1 && c1 <= 73) && ((c1 - 0) % 1 == 0) && (-10 <= c0 && c0 <= 1033) && ((c0 - 0) % 1 == 0)) {
      in_cc_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((-8 <= c1 && c1 <= 73) && ((c1 - 1) % 1 == 0) && (-8 <= c0 && c0 <= 1033) && ((c0 - 1) % 1 == 0)) {
      h3_0_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((-6 <= c1 && c1 <= 73) && ((c1 - 2) % 1 == 0) && (-6 <= c0 && c0 <= 1033) && ((c0 - 2) % 1 == 0)) {
      h3_1_update_0((c1 - 2) / 1, (c0 - 2) / 1);
    }

    if ((-4 <= c1 && c1 <= 73) && ((c1 - 3) % 1 == 0) && (-4 <= c0 && c0 <= 1033) && ((c0 - 3) % 1 == 0)) {
      h3_2_update_0((c1 - 3) / 1, (c0 - 3) / 1);
    }

    if ((-2 <= c1 && c1 <= 73) && ((c1 - 4) % 1 == 0) && (-2 <= c0 && c0 <= 1033) && ((c0 - 4) % 1 == 0)) {
      h3_3_update_0((c1 - 4) / 1, (c0 - 4) / 1);
    }

    if ((0 <= c1 && c1 <= 73) && ((c1 - 5) % 1 == 0) && (0 <= c0 && c0 <= 1033) && ((c0 - 5) % 1 == 0)) {
      h3_4_update_0((c1 - 5) / 1, (c0 - 5) / 1);
    }

    if ((2 <= c1 && c1 <= 73) && ((c1 - 6) % 1 == 0) && (2 <= c0 && c0 <= 1033) && ((c0 - 6) % 1 == 0)) {
      h3_5_update_0((c1 - 6) / 1, (c0 - 6) / 1);
    }

    if ((4 <= c1 && c1 <= 73) && ((c1 - 7) % 1 == 0) && (4 <= c0 && c0 <= 1033) && ((c0 - 7) % 1 == 0)) {
      h3_6_update_0((c1 - 7) / 1, (c0 - 7) / 1);
    }

    if ((6 <= c1 && c1 <= 73) && ((c1 - 8) % 1 == 0) && (6 <= c0 && c0 <= 1033) && ((c0 - 8) % 1 == 0)) {
      h3_7_update_0((c1 - 8) / 1, (c0 - 8) / 1);
    }

    if ((8 <= c1 && c1 <= 73) && ((c1 - 9) % 1 == 0) && (8 <= c0 && c0 <= 1033) && ((c0 - 9) % 1 == 0)) {
      h3_8_update_0((c1 - 9) / 1, (c0 - 9) / 1);
    }

    if ((10 <= c1 && c1 <= 73) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1033) && ((c0 - 10) % 1 == 0)) {
      h3_9_update_0((c1 - 10) / 1, (c0 - 10) / 1);
    }

    if ((10 <= c1 && c1 <= 73) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1033) && ((c0 - 10) % 1 == 0)) {
      h10_16_300MHz_16_update_0((c1 - 10) / 1, (c0 - 10) / 1);
    }

  }
}

  */
	  // Schedules...
	    // h10_16_300MHz_16_update_0 -> [1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*12]
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
	  for (int c1 = -10; c1 <= 73; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-10 <= c1 && c1 <= 73) && ((c1 - 0) % 1 == 0) && (-10 <= c0 && c0 <= 1033) && ((c0 - 0) % 1 == 0)) {
	      in_cc_update_0(in /* buf name */, in_cc, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((-8 <= c1 && c1 <= 73) && ((c1 - 1) % 1 == 0) && (-8 <= c0 && c0 <= 1033) && ((c0 - 1) % 1 == 0)) {
	      h3_0_update_0(in_cc /* buf name */, h3_0, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((-6 <= c1 && c1 <= 73) && ((c1 - 2) % 1 == 0) && (-6 <= c0 && c0 <= 1033) && ((c0 - 2) % 1 == 0)) {
	      h3_1_update_0(h3_0 /* buf name */, h3_1, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((-4 <= c1 && c1 <= 73) && ((c1 - 3) % 1 == 0) && (-4 <= c0 && c0 <= 1033) && ((c0 - 3) % 1 == 0)) {
	      h3_2_update_0(h3_1 /* buf name */, h3_2, (c1 - 3) / 1, (c0 - 3) / 1);
	    }
	
	    if ((-2 <= c1 && c1 <= 73) && ((c1 - 4) % 1 == 0) && (-2 <= c0 && c0 <= 1033) && ((c0 - 4) % 1 == 0)) {
	      h3_3_update_0(h3_2 /* buf name */, h3_3, (c1 - 4) / 1, (c0 - 4) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 73) && ((c1 - 5) % 1 == 0) && (0 <= c0 && c0 <= 1033) && ((c0 - 5) % 1 == 0)) {
	      h3_4_update_0(h3_3 /* buf name */, h3_4, (c1 - 5) / 1, (c0 - 5) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 73) && ((c1 - 6) % 1 == 0) && (2 <= c0 && c0 <= 1033) && ((c0 - 6) % 1 == 0)) {
	      h3_5_update_0(h3_4 /* buf name */, h3_5, (c1 - 6) / 1, (c0 - 6) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 73) && ((c1 - 7) % 1 == 0) && (4 <= c0 && c0 <= 1033) && ((c0 - 7) % 1 == 0)) {
	      h3_6_update_0(h3_5 /* buf name */, h3_6, (c1 - 7) / 1, (c0 - 7) / 1);
	    }
	
	    if ((6 <= c1 && c1 <= 73) && ((c1 - 8) % 1 == 0) && (6 <= c0 && c0 <= 1033) && ((c0 - 8) % 1 == 0)) {
	      h3_7_update_0(h3_6 /* buf name */, h3_7, (c1 - 8) / 1, (c0 - 8) / 1);
	    }
	
	    if ((8 <= c1 && c1 <= 73) && ((c1 - 9) % 1 == 0) && (8 <= c0 && c0 <= 1033) && ((c0 - 9) % 1 == 0)) {
	      h3_8_update_0(h3_7 /* buf name */, h3_8, (c1 - 9) / 1, (c0 - 9) / 1);
	    }
	
	    if ((10 <= c1 && c1 <= 73) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1033) && ((c0 - 10) % 1 == 0)) {
	      h3_9_update_0(h3_8 /* buf name */, h3_9, (c1 - 10) / 1, (c0 - 10) / 1);
	    }
	
	    if ((10 <= c1 && c1 <= 73) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1033) && ((c0 - 10) % 1 == 0)) {
	      h10_16_300MHz_16_update_0(h3_9 /* buf name */, h10_16_300MHz_16, (c1 - 10) / 1, (c0 - 10) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void h10_16_300MHz_16_opt_wrapper(HWStream<hw_uint<512> >& /* get_args num ports = 16 */in, HWStream<hw_uint<512> >& /* get_args num ports = 16 */h10_16_300MHz_16, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    h10_16_300MHz_16_opt(in, h10_16_300MHz_16);
  }
}
#ifdef __VIVADO_SYNTH__
  // { h10_16_300MHz_16_update_0[root = 0, h10_16_300MHz_16_0, h10_16_300MHz_16_1] -> h10_16_300MHz_16[0, 0] : 0 <= h10_16_300MHz_16_0 <= 63 and 0 <= h10_16_300MHz_16_1 <= 1023 }
const int h10_16_300MHz_16_update_0_write_pipe0_num_transfers = 65536;
  // { in_cc_update_0[root = 0, in_cc_0, in_cc_1] -> in[0, 0] : -10 <= in_cc_0 <= 73 and -10 <= in_cc_1 <= 1033 }
const int in_cc_update_0_read_pipe0_num_transfers = 87696;


extern "C" {

void h10_16_300MHz_16_opt_accel(hw_uint<512>* in_cc_update_0_read_pipe0, hw_uint<512>* h10_16_300MHz_16_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_cc_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = h10_16_300MHz_16_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_cc_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = h10_16_300MHz_16_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<512> > in_cc_update_0_read_pipe0_channel;
  static HWStream<hw_uint<512> > h10_16_300MHz_16_update_0_write_pipe0_channel;

  burst_read<512>(in_cc_update_0_read_pipe0, in_cc_update_0_read_pipe0_channel, in_cc_update_0_read_pipe0_num_transfers*size);

  h10_16_300MHz_16_opt_wrapper(in_cc_update_0_read_pipe0_channel, h10_16_300MHz_16_update_0_write_pipe0_channel, size);

  burst_write<512>(h10_16_300MHz_16_update_0_write_pipe0, h10_16_300MHz_16_update_0_write_pipe0_channel, h10_16_300MHz_16_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void h10_16_300MHz_16_opt_rdai(HWStream<hw_uint<512> >& in_cc_update_0_read_pipe0, HWStream<hw_uint<512> >&  h10_16_300MHz_16_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_cc_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = h10_16_300MHz_16_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  h10_16_300MHz_16_opt(in_cc_update_0_read_pipe0, h10_16_300MHz_16_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

