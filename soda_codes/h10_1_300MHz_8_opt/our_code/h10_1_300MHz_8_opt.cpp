#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: h10_1_300MHz_8_opt_compute_units.h
#include "h10_1_300MHz_8_opt_compute_units.h"

struct h3_0_h3_0_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-64, 1088], [-9, 1031]}
	// Capacity: 294
	// # of read delays: 5
  // 0, 1, 146, 147, 293
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 144> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 145> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_145() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_146() {
		return f4;
	}

	inline hw_uint<32>  peek_147() {
		return f6;
	}

	inline hw_uint<32>  peek_292() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_293() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 145
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 145 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 144
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 144 reading from capacity: 1
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
	// RAM Box: {[-63, 1081], [-9, 1032]}
	// Capacity: 294
	// # of read delays: 4
  // 0, 1, 147, 293
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 145> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 145> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_146() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_147() {
		return f4;
	}

	inline hw_uint<32>  peek_292() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_293() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 145
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 145 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 145
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 145 reading from capacity: 1
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
	// RAM Box: {[-62, 1082], [-9, 1032]}
	// Capacity: 294
	// # of read delays: 4
  // 0, 1, 147, 293
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 145> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 145> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_146() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_147() {
		return f4;
	}

	inline hw_uint<32>  peek_292() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_293() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 145
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 145 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 145
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 145 reading from capacity: 1
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
	// RAM Box: {[-61, 1083], [-9, 1032]}
	// Capacity: 294
	// # of read delays: 4
  // 0, 1, 147, 293
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 145> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 145> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_146() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_147() {
		return f4;
	}

	inline hw_uint<32>  peek_292() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_293() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 145
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 145 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 145
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 145 reading from capacity: 1
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
	// RAM Box: {[-60, 1084], [-9, 1032]}
	// Capacity: 294
	// # of read delays: 4
  // 0, 1, 147, 293
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 145> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 145> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_146() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_147() {
		return f4;
	}

	inline hw_uint<32>  peek_292() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_293() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 145
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 145 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 145
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 145 reading from capacity: 1
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
	// RAM Box: {[-59, 1085], [-9, 1032]}
	// Capacity: 294
	// # of read delays: 4
  // 0, 1, 147, 293
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 145> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 145> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_146() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_147() {
		return f4;
	}

	inline hw_uint<32>  peek_292() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_293() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 145
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 145 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 145
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 145 reading from capacity: 1
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
	// RAM Box: {[-58, 1086], [-9, 1032]}
	// Capacity: 294
	// # of read delays: 4
  // 0, 1, 147, 293
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 145> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 145> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_146() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_147() {
		return f4;
	}

	inline hw_uint<32>  peek_292() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_293() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 145
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 145 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 145
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 145 reading from capacity: 1
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
	// RAM Box: {[-65, 1087], [-8, 1032]}
	// Capacity: 294
	// # of read delays: 5
  // 0, 1, 147, 148, 293
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 145> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 144> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_146() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_147() {
		return f4;
	}

	inline hw_uint<32>  peek_148() {
		return f6;
	}

	inline hw_uint<32>  peek_292() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_293() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 144
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 144 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 145
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 145 reading from capacity: 1
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
  // # of banks: 8
  h3_0_h3_0_update_0_write0_merged_banks_5_cache h3_0_h3_0_update_0_write0_merged_banks_5;
  h3_0_h3_0_update_0_write1_merged_banks_5_cache h3_0_h3_0_update_0_write1_merged_banks_5;
  h3_0_h3_0_update_0_write2_merged_banks_5_cache h3_0_h3_0_update_0_write2_merged_banks_5;
  h3_0_h3_0_update_0_write3_merged_banks_5_cache h3_0_h3_0_update_0_write3_merged_banks_5;
  h3_0_h3_0_update_0_write4_merged_banks_5_cache h3_0_h3_0_update_0_write4_merged_banks_5;
  h3_0_h3_0_update_0_write5_merged_banks_5_cache h3_0_h3_0_update_0_write5_merged_banks_5;
  h3_0_h3_0_update_0_write6_merged_banks_5_cache h3_0_h3_0_update_0_write6_merged_banks_5;
  h3_0_h3_0_update_0_write7_merged_banks_5_cache h3_0_h3_0_update_0_write7_merged_banks_5;
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

inline hw_uint<32>  h3_1_rd0_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd0 read pattern: { h3_1_update_0[d0, d1] -> h3_0[-1 + 8d0, d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write7 = h3_0.h3_0_h3_0_update_0_write7_merged_banks_5.peek_148();
  return value_h3_0_h3_0_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_1_rd1_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd1 read pattern: { h3_1_update_0[d0, d1] -> h3_0[8d0, -1 + d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.peek_293();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd10_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd10 read pattern: { h3_1_update_0[d0, d1] -> h3_0[1 + 8d0, d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_5.peek_147();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd11_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd11 read pattern: { h3_1_update_0[d0, d1] -> h3_0[2 + 8d0, -1 + d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_5.peek_293();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_1_rd12_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd12 read pattern: { h3_1_update_0[d0, d1] -> h3_0[2 + 8d0, d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_5.peek_147();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_1_rd13_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd13 read pattern: { h3_1_update_0[d0, d1] -> h3_0[2 + 8d0, 1 + d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_1_rd14_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd14 read pattern: { h3_1_update_0[d0, d1] -> h3_0[3 + 8d0, d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_5.peek_147();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd15_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd15 read pattern: { h3_1_update_0[d0, d1] -> h3_0[2 + 8d0, d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_5.peek_147();
  return value_h3_0_h3_0_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_1_rd16_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd16 read pattern: { h3_1_update_0[d0, d1] -> h3_0[3 + 8d0, -1 + d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_5.peek_293();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd17_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd17 read pattern: { h3_1_update_0[d0, d1] -> h3_0[3 + 8d0, d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_5.peek_147();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd18_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd18 read pattern: { h3_1_update_0[d0, d1] -> h3_0[3 + 8d0, 1 + d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd19_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd19 read pattern: { h3_1_update_0[d0, d1] -> h3_0[4 + 8d0, d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write4 = h3_0.h3_0_h3_0_update_0_write4_merged_banks_5.peek_147();
  return value_h3_0_h3_0_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_1_rd2_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd2 read pattern: { h3_1_update_0[d0, d1] -> h3_0[8d0, d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.peek_147();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd20_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd20 read pattern: { h3_1_update_0[d0, d1] -> h3_0[3 + 8d0, d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write3 = h3_0.h3_0_h3_0_update_0_write3_merged_banks_5.peek_147();
  return value_h3_0_h3_0_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_1_rd21_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd21 read pattern: { h3_1_update_0[d0, d1] -> h3_0[4 + 8d0, -1 + d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write4 = h3_0.h3_0_h3_0_update_0_write4_merged_banks_5.peek_293();
  return value_h3_0_h3_0_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_1_rd22_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd22 read pattern: { h3_1_update_0[d0, d1] -> h3_0[4 + 8d0, d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write4 = h3_0.h3_0_h3_0_update_0_write4_merged_banks_5.peek_147();
  return value_h3_0_h3_0_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_1_rd23_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd23 read pattern: { h3_1_update_0[d0, d1] -> h3_0[4 + 8d0, 1 + d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write4 = h3_0.h3_0_h3_0_update_0_write4_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_1_rd24_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd24 read pattern: { h3_1_update_0[d0, d1] -> h3_0[5 + 8d0, d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write5 = h3_0.h3_0_h3_0_update_0_write5_merged_banks_5.peek_147();
  return value_h3_0_h3_0_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_1_rd25_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd25 read pattern: { h3_1_update_0[d0, d1] -> h3_0[4 + 8d0, d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write4 = h3_0.h3_0_h3_0_update_0_write4_merged_banks_5.peek_147();
  return value_h3_0_h3_0_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_1_rd26_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd26 read pattern: { h3_1_update_0[d0, d1] -> h3_0[5 + 8d0, -1 + d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write5 = h3_0.h3_0_h3_0_update_0_write5_merged_banks_5.peek_293();
  return value_h3_0_h3_0_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_1_rd27_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd27 read pattern: { h3_1_update_0[d0, d1] -> h3_0[5 + 8d0, d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write5 = h3_0.h3_0_h3_0_update_0_write5_merged_banks_5.peek_147();
  return value_h3_0_h3_0_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_1_rd28_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd28 read pattern: { h3_1_update_0[d0, d1] -> h3_0[5 + 8d0, 1 + d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write5 = h3_0.h3_0_h3_0_update_0_write5_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_1_rd29_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd29 read pattern: { h3_1_update_0[d0, d1] -> h3_0[6 + 8d0, d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write6 = h3_0.h3_0_h3_0_update_0_write6_merged_banks_5.peek_147();
  return value_h3_0_h3_0_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_1_rd3_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd3 read pattern: { h3_1_update_0[d0, d1] -> h3_0[8d0, 1 + d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd30_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd30 read pattern: { h3_1_update_0[d0, d1] -> h3_0[5 + 8d0, d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write5 = h3_0.h3_0_h3_0_update_0_write5_merged_banks_5.peek_147();
  return value_h3_0_h3_0_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_1_rd31_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd31 read pattern: { h3_1_update_0[d0, d1] -> h3_0[6 + 8d0, -1 + d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write6 = h3_0.h3_0_h3_0_update_0_write6_merged_banks_5.peek_293();
  return value_h3_0_h3_0_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_1_rd32_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd32 read pattern: { h3_1_update_0[d0, d1] -> h3_0[6 + 8d0, d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write6 = h3_0.h3_0_h3_0_update_0_write6_merged_banks_5.peek_147();
  return value_h3_0_h3_0_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_1_rd33_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd33 read pattern: { h3_1_update_0[d0, d1] -> h3_0[6 + 8d0, 1 + d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write6 = h3_0.h3_0_h3_0_update_0_write6_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_1_rd34_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd34 read pattern: { h3_1_update_0[d0, d1] -> h3_0[7 + 8d0, d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write7 = h3_0.h3_0_h3_0_update_0_write7_merged_banks_5.peek_147();
  return value_h3_0_h3_0_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_1_rd35_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd35 read pattern: { h3_1_update_0[d0, d1] -> h3_0[6 + 8d0, d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write6 = h3_0.h3_0_h3_0_update_0_write6_merged_banks_5.peek_147();
  return value_h3_0_h3_0_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_1_rd36_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd36 read pattern: { h3_1_update_0[d0, d1] -> h3_0[7 + 8d0, -1 + d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write7 = h3_0.h3_0_h3_0_update_0_write7_merged_banks_5.peek_293();
  return value_h3_0_h3_0_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_1_rd37_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd37 read pattern: { h3_1_update_0[d0, d1] -> h3_0[7 + 8d0, d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write7 = h3_0.h3_0_h3_0_update_0_write7_merged_banks_5.peek_147();
  return value_h3_0_h3_0_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_1_rd38_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd38 read pattern: { h3_1_update_0[d0, d1] -> h3_0[7 + 8d0, 1 + d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write7 = h3_0.h3_0_h3_0_update_0_write7_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_1_rd39_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd39 read pattern: { h3_1_update_0[d0, d1] -> h3_0[8 + 8d0, d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.peek_146();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd4_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd4 read pattern: { h3_1_update_0[d0, d1] -> h3_0[1 + 8d0, d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_5.peek_147();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd5_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd5 read pattern: { h3_1_update_0[d0, d1] -> h3_0[8d0, d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write0 = h3_0.h3_0_h3_0_update_0_write0_merged_banks_5.peek_147();
  return value_h3_0_h3_0_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_1_rd6_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd6 read pattern: { h3_1_update_0[d0, d1] -> h3_0[1 + 8d0, -1 + d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_5.peek_293();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd7_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd7 read pattern: { h3_1_update_0[d0, d1] -> h3_0[1 + 8d0, d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_5.peek_147();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd8_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd8 read pattern: { h3_1_update_0[d0, d1] -> h3_0[1 + 8d0, 1 + d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write1 = h3_0.h3_0_h3_0_update_0_write1_merged_banks_5.peek_1();
  return value_h3_0_h3_0_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_1_rd9_select(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_1_rd9 read pattern: { h3_1_update_0[d0, d1] -> h3_0[2 + 8d0, d1] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Read schedule : { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  // Write schedule: { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  auto value_h3_0_h3_0_update_0_write2 = h3_0.h3_0_h3_0_update_0_write2_merged_banks_5.peek_147();
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
inline void h3_0_h3_0_update_0_write_bundle_write(hw_uint<256>& h3_0_update_0_write, h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
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
inline hw_uint<1280> h3_0_h3_1_update_0_read_bundle_read(h3_0_cache& h3_0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 40
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

	hw_uint<1280> result;
	hw_uint<32>  h3_1_rd0_res = h3_1_rd0_select(h3_0, d0, d1, dynamic_address);
	set_at<0, 1280>(result, h3_1_rd0_res);
	hw_uint<32>  h3_1_rd1_res = h3_1_rd1_select(h3_0, d0, d1, dynamic_address);
	set_at<32, 1280>(result, h3_1_rd1_res);
	hw_uint<32>  h3_1_rd2_res = h3_1_rd2_select(h3_0, d0, d1, dynamic_address);
	set_at<64, 1280>(result, h3_1_rd2_res);
	hw_uint<32>  h3_1_rd3_res = h3_1_rd3_select(h3_0, d0, d1, dynamic_address);
	set_at<96, 1280>(result, h3_1_rd3_res);
	hw_uint<32>  h3_1_rd4_res = h3_1_rd4_select(h3_0, d0, d1, dynamic_address);
	set_at<128, 1280>(result, h3_1_rd4_res);
	hw_uint<32>  h3_1_rd5_res = h3_1_rd5_select(h3_0, d0, d1, dynamic_address);
	set_at<160, 1280>(result, h3_1_rd5_res);
	hw_uint<32>  h3_1_rd6_res = h3_1_rd6_select(h3_0, d0, d1, dynamic_address);
	set_at<192, 1280>(result, h3_1_rd6_res);
	hw_uint<32>  h3_1_rd7_res = h3_1_rd7_select(h3_0, d0, d1, dynamic_address);
	set_at<224, 1280>(result, h3_1_rd7_res);
	hw_uint<32>  h3_1_rd8_res = h3_1_rd8_select(h3_0, d0, d1, dynamic_address);
	set_at<256, 1280>(result, h3_1_rd8_res);
	hw_uint<32>  h3_1_rd9_res = h3_1_rd9_select(h3_0, d0, d1, dynamic_address);
	set_at<288, 1280>(result, h3_1_rd9_res);
	hw_uint<32>  h3_1_rd10_res = h3_1_rd10_select(h3_0, d0, d1, dynamic_address);
	set_at<320, 1280>(result, h3_1_rd10_res);
	hw_uint<32>  h3_1_rd11_res = h3_1_rd11_select(h3_0, d0, d1, dynamic_address);
	set_at<352, 1280>(result, h3_1_rd11_res);
	hw_uint<32>  h3_1_rd12_res = h3_1_rd12_select(h3_0, d0, d1, dynamic_address);
	set_at<384, 1280>(result, h3_1_rd12_res);
	hw_uint<32>  h3_1_rd13_res = h3_1_rd13_select(h3_0, d0, d1, dynamic_address);
	set_at<416, 1280>(result, h3_1_rd13_res);
	hw_uint<32>  h3_1_rd14_res = h3_1_rd14_select(h3_0, d0, d1, dynamic_address);
	set_at<448, 1280>(result, h3_1_rd14_res);
	hw_uint<32>  h3_1_rd15_res = h3_1_rd15_select(h3_0, d0, d1, dynamic_address);
	set_at<480, 1280>(result, h3_1_rd15_res);
	hw_uint<32>  h3_1_rd16_res = h3_1_rd16_select(h3_0, d0, d1, dynamic_address);
	set_at<512, 1280>(result, h3_1_rd16_res);
	hw_uint<32>  h3_1_rd17_res = h3_1_rd17_select(h3_0, d0, d1, dynamic_address);
	set_at<544, 1280>(result, h3_1_rd17_res);
	hw_uint<32>  h3_1_rd18_res = h3_1_rd18_select(h3_0, d0, d1, dynamic_address);
	set_at<576, 1280>(result, h3_1_rd18_res);
	hw_uint<32>  h3_1_rd19_res = h3_1_rd19_select(h3_0, d0, d1, dynamic_address);
	set_at<608, 1280>(result, h3_1_rd19_res);
	hw_uint<32>  h3_1_rd20_res = h3_1_rd20_select(h3_0, d0, d1, dynamic_address);
	set_at<640, 1280>(result, h3_1_rd20_res);
	hw_uint<32>  h3_1_rd21_res = h3_1_rd21_select(h3_0, d0, d1, dynamic_address);
	set_at<672, 1280>(result, h3_1_rd21_res);
	hw_uint<32>  h3_1_rd22_res = h3_1_rd22_select(h3_0, d0, d1, dynamic_address);
	set_at<704, 1280>(result, h3_1_rd22_res);
	hw_uint<32>  h3_1_rd23_res = h3_1_rd23_select(h3_0, d0, d1, dynamic_address);
	set_at<736, 1280>(result, h3_1_rd23_res);
	hw_uint<32>  h3_1_rd24_res = h3_1_rd24_select(h3_0, d0, d1, dynamic_address);
	set_at<768, 1280>(result, h3_1_rd24_res);
	hw_uint<32>  h3_1_rd25_res = h3_1_rd25_select(h3_0, d0, d1, dynamic_address);
	set_at<800, 1280>(result, h3_1_rd25_res);
	hw_uint<32>  h3_1_rd26_res = h3_1_rd26_select(h3_0, d0, d1, dynamic_address);
	set_at<832, 1280>(result, h3_1_rd26_res);
	hw_uint<32>  h3_1_rd27_res = h3_1_rd27_select(h3_0, d0, d1, dynamic_address);
	set_at<864, 1280>(result, h3_1_rd27_res);
	hw_uint<32>  h3_1_rd28_res = h3_1_rd28_select(h3_0, d0, d1, dynamic_address);
	set_at<896, 1280>(result, h3_1_rd28_res);
	hw_uint<32>  h3_1_rd29_res = h3_1_rd29_select(h3_0, d0, d1, dynamic_address);
	set_at<928, 1280>(result, h3_1_rd29_res);
	hw_uint<32>  h3_1_rd30_res = h3_1_rd30_select(h3_0, d0, d1, dynamic_address);
	set_at<960, 1280>(result, h3_1_rd30_res);
	hw_uint<32>  h3_1_rd31_res = h3_1_rd31_select(h3_0, d0, d1, dynamic_address);
	set_at<992, 1280>(result, h3_1_rd31_res);
	hw_uint<32>  h3_1_rd32_res = h3_1_rd32_select(h3_0, d0, d1, dynamic_address);
	set_at<1024, 1280>(result, h3_1_rd32_res);
	hw_uint<32>  h3_1_rd33_res = h3_1_rd33_select(h3_0, d0, d1, dynamic_address);
	set_at<1056, 1280>(result, h3_1_rd33_res);
	hw_uint<32>  h3_1_rd34_res = h3_1_rd34_select(h3_0, d0, d1, dynamic_address);
	set_at<1088, 1280>(result, h3_1_rd34_res);
	hw_uint<32>  h3_1_rd35_res = h3_1_rd35_select(h3_0, d0, d1, dynamic_address);
	set_at<1120, 1280>(result, h3_1_rd35_res);
	hw_uint<32>  h3_1_rd36_res = h3_1_rd36_select(h3_0, d0, d1, dynamic_address);
	set_at<1152, 1280>(result, h3_1_rd36_res);
	hw_uint<32>  h3_1_rd37_res = h3_1_rd37_select(h3_0, d0, d1, dynamic_address);
	set_at<1184, 1280>(result, h3_1_rd37_res);
	hw_uint<32>  h3_1_rd38_res = h3_1_rd38_select(h3_0, d0, d1, dynamic_address);
	set_at<1216, 1280>(result, h3_1_rd38_res);
	hw_uint<32>  h3_1_rd39_res = h3_1_rd39_select(h3_0, d0, d1, dynamic_address);
	set_at<1248, 1280>(result, h3_1_rd39_res);
	return result;
}

struct h3_1_h3_1_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-56, 1080], [-8, 1030]}
	// Capacity: 290
	// # of read delays: 5
  // 0, 1, 144, 145, 289
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 142> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 143> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_143() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_144() {
		return f4;
	}

	inline hw_uint<32>  peek_145() {
		return f6;
	}

	inline hw_uint<32>  peek_288() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_289() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 143
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 143 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 142
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 142 reading from capacity: 1
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
	// RAM Box: {[-55, 1073], [-8, 1031]}
	// Capacity: 290
	// # of read delays: 4
  // 0, 1, 145, 289
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 143> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 143> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_145() {
		return f4;
	}

	inline hw_uint<32>  peek_288() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_289() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 143
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 143 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 143
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 143 reading from capacity: 1
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
	// RAM Box: {[-54, 1074], [-8, 1031]}
	// Capacity: 290
	// # of read delays: 4
  // 0, 1, 145, 289
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 143> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 143> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_145() {
		return f4;
	}

	inline hw_uint<32>  peek_288() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_289() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 143
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 143 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 143
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 143 reading from capacity: 1
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
	// RAM Box: {[-53, 1075], [-8, 1031]}
	// Capacity: 290
	// # of read delays: 4
  // 0, 1, 145, 289
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 143> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 143> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_145() {
		return f4;
	}

	inline hw_uint<32>  peek_288() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_289() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 143
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 143 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 143
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 143 reading from capacity: 1
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
	// RAM Box: {[-52, 1076], [-8, 1031]}
	// Capacity: 290
	// # of read delays: 4
  // 0, 1, 145, 289
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 143> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 143> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_145() {
		return f4;
	}

	inline hw_uint<32>  peek_288() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_289() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 143
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 143 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 143
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 143 reading from capacity: 1
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
	// RAM Box: {[-51, 1077], [-8, 1031]}
	// Capacity: 290
	// # of read delays: 4
  // 0, 1, 145, 289
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 143> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 143> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_145() {
		return f4;
	}

	inline hw_uint<32>  peek_288() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_289() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 143
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 143 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 143
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 143 reading from capacity: 1
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
	// RAM Box: {[-50, 1078], [-8, 1031]}
	// Capacity: 290
	// # of read delays: 4
  // 0, 1, 145, 289
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 143> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 143> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_145() {
		return f4;
	}

	inline hw_uint<32>  peek_288() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_289() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 143
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 143 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 143
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 143 reading from capacity: 1
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
	// RAM Box: {[-57, 1079], [-7, 1031]}
	// Capacity: 290
	// # of read delays: 5
  // 0, 1, 145, 146, 289
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 143> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 142> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_144() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_145() {
		return f4;
	}

	inline hw_uint<32>  peek_146() {
		return f6;
	}

	inline hw_uint<32>  peek_288() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_289() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 142
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 142 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 143
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 143 reading from capacity: 1
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
  // # of banks: 8
  h3_1_h3_1_update_0_write0_merged_banks_5_cache h3_1_h3_1_update_0_write0_merged_banks_5;
  h3_1_h3_1_update_0_write1_merged_banks_5_cache h3_1_h3_1_update_0_write1_merged_banks_5;
  h3_1_h3_1_update_0_write2_merged_banks_5_cache h3_1_h3_1_update_0_write2_merged_banks_5;
  h3_1_h3_1_update_0_write3_merged_banks_5_cache h3_1_h3_1_update_0_write3_merged_banks_5;
  h3_1_h3_1_update_0_write4_merged_banks_5_cache h3_1_h3_1_update_0_write4_merged_banks_5;
  h3_1_h3_1_update_0_write5_merged_banks_5_cache h3_1_h3_1_update_0_write5_merged_banks_5;
  h3_1_h3_1_update_0_write6_merged_banks_5_cache h3_1_h3_1_update_0_write6_merged_banks_5;
  h3_1_h3_1_update_0_write7_merged_banks_5_cache h3_1_h3_1_update_0_write7_merged_banks_5;
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

inline hw_uint<32>  h3_2_rd0_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd0 read pattern: { h3_2_update_0[d0, d1] -> h3_1[-1 + 8d0, d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write7 = h3_1.h3_1_h3_1_update_0_write7_merged_banks_5.peek_146();
  return value_h3_1_h3_1_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_2_rd1_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd1 read pattern: { h3_2_update_0[d0, d1] -> h3_1[8d0, -1 + d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.peek_289();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd10_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd10 read pattern: { h3_2_update_0[d0, d1] -> h3_1[1 + 8d0, d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_5.peek_145();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd11_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd11 read pattern: { h3_2_update_0[d0, d1] -> h3_1[2 + 8d0, -1 + d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_5.peek_289();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_2_rd12_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd12 read pattern: { h3_2_update_0[d0, d1] -> h3_1[2 + 8d0, d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_5.peek_145();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_2_rd13_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd13 read pattern: { h3_2_update_0[d0, d1] -> h3_1[2 + 8d0, 1 + d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_2_rd14_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd14 read pattern: { h3_2_update_0[d0, d1] -> h3_1[3 + 8d0, d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_5.peek_145();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd15_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd15 read pattern: { h3_2_update_0[d0, d1] -> h3_1[2 + 8d0, d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_5.peek_145();
  return value_h3_1_h3_1_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_2_rd16_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd16 read pattern: { h3_2_update_0[d0, d1] -> h3_1[3 + 8d0, -1 + d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_5.peek_289();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd17_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd17 read pattern: { h3_2_update_0[d0, d1] -> h3_1[3 + 8d0, d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_5.peek_145();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd18_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd18 read pattern: { h3_2_update_0[d0, d1] -> h3_1[3 + 8d0, 1 + d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd19_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd19 read pattern: { h3_2_update_0[d0, d1] -> h3_1[4 + 8d0, d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write4 = h3_1.h3_1_h3_1_update_0_write4_merged_banks_5.peek_145();
  return value_h3_1_h3_1_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_2_rd2_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd2 read pattern: { h3_2_update_0[d0, d1] -> h3_1[8d0, d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.peek_145();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd20_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd20 read pattern: { h3_2_update_0[d0, d1] -> h3_1[3 + 8d0, d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write3 = h3_1.h3_1_h3_1_update_0_write3_merged_banks_5.peek_145();
  return value_h3_1_h3_1_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_2_rd21_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd21 read pattern: { h3_2_update_0[d0, d1] -> h3_1[4 + 8d0, -1 + d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write4 = h3_1.h3_1_h3_1_update_0_write4_merged_banks_5.peek_289();
  return value_h3_1_h3_1_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_2_rd22_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd22 read pattern: { h3_2_update_0[d0, d1] -> h3_1[4 + 8d0, d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write4 = h3_1.h3_1_h3_1_update_0_write4_merged_banks_5.peek_145();
  return value_h3_1_h3_1_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_2_rd23_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd23 read pattern: { h3_2_update_0[d0, d1] -> h3_1[4 + 8d0, 1 + d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write4 = h3_1.h3_1_h3_1_update_0_write4_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_2_rd24_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd24 read pattern: { h3_2_update_0[d0, d1] -> h3_1[5 + 8d0, d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write5 = h3_1.h3_1_h3_1_update_0_write5_merged_banks_5.peek_145();
  return value_h3_1_h3_1_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_2_rd25_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd25 read pattern: { h3_2_update_0[d0, d1] -> h3_1[4 + 8d0, d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write4 = h3_1.h3_1_h3_1_update_0_write4_merged_banks_5.peek_145();
  return value_h3_1_h3_1_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_2_rd26_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd26 read pattern: { h3_2_update_0[d0, d1] -> h3_1[5 + 8d0, -1 + d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write5 = h3_1.h3_1_h3_1_update_0_write5_merged_banks_5.peek_289();
  return value_h3_1_h3_1_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_2_rd27_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd27 read pattern: { h3_2_update_0[d0, d1] -> h3_1[5 + 8d0, d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write5 = h3_1.h3_1_h3_1_update_0_write5_merged_banks_5.peek_145();
  return value_h3_1_h3_1_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_2_rd28_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd28 read pattern: { h3_2_update_0[d0, d1] -> h3_1[5 + 8d0, 1 + d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write5 = h3_1.h3_1_h3_1_update_0_write5_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_2_rd29_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd29 read pattern: { h3_2_update_0[d0, d1] -> h3_1[6 + 8d0, d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write6 = h3_1.h3_1_h3_1_update_0_write6_merged_banks_5.peek_145();
  return value_h3_1_h3_1_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_2_rd3_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd3 read pattern: { h3_2_update_0[d0, d1] -> h3_1[8d0, 1 + d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd30_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd30 read pattern: { h3_2_update_0[d0, d1] -> h3_1[5 + 8d0, d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write5 = h3_1.h3_1_h3_1_update_0_write5_merged_banks_5.peek_145();
  return value_h3_1_h3_1_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_2_rd31_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd31 read pattern: { h3_2_update_0[d0, d1] -> h3_1[6 + 8d0, -1 + d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write6 = h3_1.h3_1_h3_1_update_0_write6_merged_banks_5.peek_289();
  return value_h3_1_h3_1_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_2_rd32_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd32 read pattern: { h3_2_update_0[d0, d1] -> h3_1[6 + 8d0, d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write6 = h3_1.h3_1_h3_1_update_0_write6_merged_banks_5.peek_145();
  return value_h3_1_h3_1_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_2_rd33_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd33 read pattern: { h3_2_update_0[d0, d1] -> h3_1[6 + 8d0, 1 + d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write6 = h3_1.h3_1_h3_1_update_0_write6_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_2_rd34_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd34 read pattern: { h3_2_update_0[d0, d1] -> h3_1[7 + 8d0, d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write7 = h3_1.h3_1_h3_1_update_0_write7_merged_banks_5.peek_145();
  return value_h3_1_h3_1_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_2_rd35_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd35 read pattern: { h3_2_update_0[d0, d1] -> h3_1[6 + 8d0, d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write6 = h3_1.h3_1_h3_1_update_0_write6_merged_banks_5.peek_145();
  return value_h3_1_h3_1_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_2_rd36_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd36 read pattern: { h3_2_update_0[d0, d1] -> h3_1[7 + 8d0, -1 + d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write7 = h3_1.h3_1_h3_1_update_0_write7_merged_banks_5.peek_289();
  return value_h3_1_h3_1_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_2_rd37_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd37 read pattern: { h3_2_update_0[d0, d1] -> h3_1[7 + 8d0, d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write7 = h3_1.h3_1_h3_1_update_0_write7_merged_banks_5.peek_145();
  return value_h3_1_h3_1_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_2_rd38_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd38 read pattern: { h3_2_update_0[d0, d1] -> h3_1[7 + 8d0, 1 + d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write7 = h3_1.h3_1_h3_1_update_0_write7_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_2_rd39_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd39 read pattern: { h3_2_update_0[d0, d1] -> h3_1[8 + 8d0, d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.peek_144();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd4_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd4 read pattern: { h3_2_update_0[d0, d1] -> h3_1[1 + 8d0, d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_5.peek_145();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd5_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd5 read pattern: { h3_2_update_0[d0, d1] -> h3_1[8d0, d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write0 = h3_1.h3_1_h3_1_update_0_write0_merged_banks_5.peek_145();
  return value_h3_1_h3_1_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_2_rd6_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd6 read pattern: { h3_2_update_0[d0, d1] -> h3_1[1 + 8d0, -1 + d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_5.peek_289();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd7_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd7 read pattern: { h3_2_update_0[d0, d1] -> h3_1[1 + 8d0, d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_5.peek_145();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd8_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd8 read pattern: { h3_2_update_0[d0, d1] -> h3_1[1 + 8d0, 1 + d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write1 = h3_1.h3_1_h3_1_update_0_write1_merged_banks_5.peek_1();
  return value_h3_1_h3_1_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_2_rd9_select(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_2_rd9 read pattern: { h3_2_update_0[d0, d1] -> h3_1[2 + 8d0, d1] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Read schedule : { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  // Write schedule: { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
  auto value_h3_1_h3_1_update_0_write2 = h3_1.h3_1_h3_1_update_0_write2_merged_banks_5.peek_145();
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
inline void h3_1_h3_1_update_0_write_bundle_write(hw_uint<256>& h3_1_update_0_write, h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
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
inline hw_uint<1280> h3_1_h3_2_update_0_read_bundle_read(h3_1_cache& h3_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 40
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

	hw_uint<1280> result;
	hw_uint<32>  h3_2_rd0_res = h3_2_rd0_select(h3_1, d0, d1, dynamic_address);
	set_at<0, 1280>(result, h3_2_rd0_res);
	hw_uint<32>  h3_2_rd1_res = h3_2_rd1_select(h3_1, d0, d1, dynamic_address);
	set_at<32, 1280>(result, h3_2_rd1_res);
	hw_uint<32>  h3_2_rd2_res = h3_2_rd2_select(h3_1, d0, d1, dynamic_address);
	set_at<64, 1280>(result, h3_2_rd2_res);
	hw_uint<32>  h3_2_rd3_res = h3_2_rd3_select(h3_1, d0, d1, dynamic_address);
	set_at<96, 1280>(result, h3_2_rd3_res);
	hw_uint<32>  h3_2_rd4_res = h3_2_rd4_select(h3_1, d0, d1, dynamic_address);
	set_at<128, 1280>(result, h3_2_rd4_res);
	hw_uint<32>  h3_2_rd5_res = h3_2_rd5_select(h3_1, d0, d1, dynamic_address);
	set_at<160, 1280>(result, h3_2_rd5_res);
	hw_uint<32>  h3_2_rd6_res = h3_2_rd6_select(h3_1, d0, d1, dynamic_address);
	set_at<192, 1280>(result, h3_2_rd6_res);
	hw_uint<32>  h3_2_rd7_res = h3_2_rd7_select(h3_1, d0, d1, dynamic_address);
	set_at<224, 1280>(result, h3_2_rd7_res);
	hw_uint<32>  h3_2_rd8_res = h3_2_rd8_select(h3_1, d0, d1, dynamic_address);
	set_at<256, 1280>(result, h3_2_rd8_res);
	hw_uint<32>  h3_2_rd9_res = h3_2_rd9_select(h3_1, d0, d1, dynamic_address);
	set_at<288, 1280>(result, h3_2_rd9_res);
	hw_uint<32>  h3_2_rd10_res = h3_2_rd10_select(h3_1, d0, d1, dynamic_address);
	set_at<320, 1280>(result, h3_2_rd10_res);
	hw_uint<32>  h3_2_rd11_res = h3_2_rd11_select(h3_1, d0, d1, dynamic_address);
	set_at<352, 1280>(result, h3_2_rd11_res);
	hw_uint<32>  h3_2_rd12_res = h3_2_rd12_select(h3_1, d0, d1, dynamic_address);
	set_at<384, 1280>(result, h3_2_rd12_res);
	hw_uint<32>  h3_2_rd13_res = h3_2_rd13_select(h3_1, d0, d1, dynamic_address);
	set_at<416, 1280>(result, h3_2_rd13_res);
	hw_uint<32>  h3_2_rd14_res = h3_2_rd14_select(h3_1, d0, d1, dynamic_address);
	set_at<448, 1280>(result, h3_2_rd14_res);
	hw_uint<32>  h3_2_rd15_res = h3_2_rd15_select(h3_1, d0, d1, dynamic_address);
	set_at<480, 1280>(result, h3_2_rd15_res);
	hw_uint<32>  h3_2_rd16_res = h3_2_rd16_select(h3_1, d0, d1, dynamic_address);
	set_at<512, 1280>(result, h3_2_rd16_res);
	hw_uint<32>  h3_2_rd17_res = h3_2_rd17_select(h3_1, d0, d1, dynamic_address);
	set_at<544, 1280>(result, h3_2_rd17_res);
	hw_uint<32>  h3_2_rd18_res = h3_2_rd18_select(h3_1, d0, d1, dynamic_address);
	set_at<576, 1280>(result, h3_2_rd18_res);
	hw_uint<32>  h3_2_rd19_res = h3_2_rd19_select(h3_1, d0, d1, dynamic_address);
	set_at<608, 1280>(result, h3_2_rd19_res);
	hw_uint<32>  h3_2_rd20_res = h3_2_rd20_select(h3_1, d0, d1, dynamic_address);
	set_at<640, 1280>(result, h3_2_rd20_res);
	hw_uint<32>  h3_2_rd21_res = h3_2_rd21_select(h3_1, d0, d1, dynamic_address);
	set_at<672, 1280>(result, h3_2_rd21_res);
	hw_uint<32>  h3_2_rd22_res = h3_2_rd22_select(h3_1, d0, d1, dynamic_address);
	set_at<704, 1280>(result, h3_2_rd22_res);
	hw_uint<32>  h3_2_rd23_res = h3_2_rd23_select(h3_1, d0, d1, dynamic_address);
	set_at<736, 1280>(result, h3_2_rd23_res);
	hw_uint<32>  h3_2_rd24_res = h3_2_rd24_select(h3_1, d0, d1, dynamic_address);
	set_at<768, 1280>(result, h3_2_rd24_res);
	hw_uint<32>  h3_2_rd25_res = h3_2_rd25_select(h3_1, d0, d1, dynamic_address);
	set_at<800, 1280>(result, h3_2_rd25_res);
	hw_uint<32>  h3_2_rd26_res = h3_2_rd26_select(h3_1, d0, d1, dynamic_address);
	set_at<832, 1280>(result, h3_2_rd26_res);
	hw_uint<32>  h3_2_rd27_res = h3_2_rd27_select(h3_1, d0, d1, dynamic_address);
	set_at<864, 1280>(result, h3_2_rd27_res);
	hw_uint<32>  h3_2_rd28_res = h3_2_rd28_select(h3_1, d0, d1, dynamic_address);
	set_at<896, 1280>(result, h3_2_rd28_res);
	hw_uint<32>  h3_2_rd29_res = h3_2_rd29_select(h3_1, d0, d1, dynamic_address);
	set_at<928, 1280>(result, h3_2_rd29_res);
	hw_uint<32>  h3_2_rd30_res = h3_2_rd30_select(h3_1, d0, d1, dynamic_address);
	set_at<960, 1280>(result, h3_2_rd30_res);
	hw_uint<32>  h3_2_rd31_res = h3_2_rd31_select(h3_1, d0, d1, dynamic_address);
	set_at<992, 1280>(result, h3_2_rd31_res);
	hw_uint<32>  h3_2_rd32_res = h3_2_rd32_select(h3_1, d0, d1, dynamic_address);
	set_at<1024, 1280>(result, h3_2_rd32_res);
	hw_uint<32>  h3_2_rd33_res = h3_2_rd33_select(h3_1, d0, d1, dynamic_address);
	set_at<1056, 1280>(result, h3_2_rd33_res);
	hw_uint<32>  h3_2_rd34_res = h3_2_rd34_select(h3_1, d0, d1, dynamic_address);
	set_at<1088, 1280>(result, h3_2_rd34_res);
	hw_uint<32>  h3_2_rd35_res = h3_2_rd35_select(h3_1, d0, d1, dynamic_address);
	set_at<1120, 1280>(result, h3_2_rd35_res);
	hw_uint<32>  h3_2_rd36_res = h3_2_rd36_select(h3_1, d0, d1, dynamic_address);
	set_at<1152, 1280>(result, h3_2_rd36_res);
	hw_uint<32>  h3_2_rd37_res = h3_2_rd37_select(h3_1, d0, d1, dynamic_address);
	set_at<1184, 1280>(result, h3_2_rd37_res);
	hw_uint<32>  h3_2_rd38_res = h3_2_rd38_select(h3_1, d0, d1, dynamic_address);
	set_at<1216, 1280>(result, h3_2_rd38_res);
	hw_uint<32>  h3_2_rd39_res = h3_2_rd39_select(h3_1, d0, d1, dynamic_address);
	set_at<1248, 1280>(result, h3_2_rd39_res);
	return result;
}

struct h3_2_h3_2_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-48, 1072], [-7, 1029]}
	// Capacity: 286
	// # of read delays: 5
  // 0, 1, 142, 143, 285
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 140> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 141> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_141() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_142() {
		return f4;
	}

	inline hw_uint<32>  peek_143() {
		return f6;
	}

	inline hw_uint<32>  peek_284() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_285() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 141
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 141 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 140
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 140 reading from capacity: 1
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
	// RAM Box: {[-47, 1065], [-7, 1030]}
	// Capacity: 286
	// # of read delays: 4
  // 0, 1, 143, 285
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 141> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 141> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_142() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_143() {
		return f4;
	}

	inline hw_uint<32>  peek_284() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_285() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 141
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 141 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 141
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 141 reading from capacity: 1
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
	// RAM Box: {[-46, 1066], [-7, 1030]}
	// Capacity: 286
	// # of read delays: 4
  // 0, 1, 143, 285
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 141> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 141> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_142() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_143() {
		return f4;
	}

	inline hw_uint<32>  peek_284() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_285() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 141
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 141 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 141
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 141 reading from capacity: 1
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
	// RAM Box: {[-45, 1067], [-7, 1030]}
	// Capacity: 286
	// # of read delays: 4
  // 0, 1, 143, 285
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 141> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 141> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_142() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_143() {
		return f4;
	}

	inline hw_uint<32>  peek_284() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_285() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 141
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 141 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 141
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 141 reading from capacity: 1
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
	// RAM Box: {[-44, 1068], [-7, 1030]}
	// Capacity: 286
	// # of read delays: 4
  // 0, 1, 143, 285
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 141> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 141> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_142() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_143() {
		return f4;
	}

	inline hw_uint<32>  peek_284() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_285() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 141
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 141 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 141
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 141 reading from capacity: 1
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
	// RAM Box: {[-43, 1069], [-7, 1030]}
	// Capacity: 286
	// # of read delays: 4
  // 0, 1, 143, 285
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 141> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 141> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_142() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_143() {
		return f4;
	}

	inline hw_uint<32>  peek_284() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_285() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 141
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 141 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 141
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 141 reading from capacity: 1
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
	// RAM Box: {[-42, 1070], [-7, 1030]}
	// Capacity: 286
	// # of read delays: 4
  // 0, 1, 143, 285
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 141> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 141> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_142() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_143() {
		return f4;
	}

	inline hw_uint<32>  peek_284() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_285() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 141
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 141 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 141
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 141 reading from capacity: 1
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
	// RAM Box: {[-49, 1071], [-6, 1030]}
	// Capacity: 286
	// # of read delays: 5
  // 0, 1, 143, 144, 285
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 141> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 140> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_142() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_143() {
		return f4;
	}

	inline hw_uint<32>  peek_144() {
		return f6;
	}

	inline hw_uint<32>  peek_284() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_285() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 140
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 140 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 141
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 141 reading from capacity: 1
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
  // # of banks: 8
  h3_2_h3_2_update_0_write0_merged_banks_5_cache h3_2_h3_2_update_0_write0_merged_banks_5;
  h3_2_h3_2_update_0_write1_merged_banks_5_cache h3_2_h3_2_update_0_write1_merged_banks_5;
  h3_2_h3_2_update_0_write2_merged_banks_5_cache h3_2_h3_2_update_0_write2_merged_banks_5;
  h3_2_h3_2_update_0_write3_merged_banks_5_cache h3_2_h3_2_update_0_write3_merged_banks_5;
  h3_2_h3_2_update_0_write4_merged_banks_5_cache h3_2_h3_2_update_0_write4_merged_banks_5;
  h3_2_h3_2_update_0_write5_merged_banks_5_cache h3_2_h3_2_update_0_write5_merged_banks_5;
  h3_2_h3_2_update_0_write6_merged_banks_5_cache h3_2_h3_2_update_0_write6_merged_banks_5;
  h3_2_h3_2_update_0_write7_merged_banks_5_cache h3_2_h3_2_update_0_write7_merged_banks_5;
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

inline hw_uint<32>  h3_3_rd0_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd0 read pattern: { h3_3_update_0[d0, d1] -> h3_2[-1 + 8d0, d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write7 = h3_2.h3_2_h3_2_update_0_write7_merged_banks_5.peek_144();
  return value_h3_2_h3_2_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_3_rd1_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd1 read pattern: { h3_3_update_0[d0, d1] -> h3_2[8d0, -1 + d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.peek_285();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd10_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd10 read pattern: { h3_3_update_0[d0, d1] -> h3_2[1 + 8d0, d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_5.peek_143();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd11_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd11 read pattern: { h3_3_update_0[d0, d1] -> h3_2[2 + 8d0, -1 + d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_5.peek_285();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_3_rd12_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd12 read pattern: { h3_3_update_0[d0, d1] -> h3_2[2 + 8d0, d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_5.peek_143();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_3_rd13_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd13 read pattern: { h3_3_update_0[d0, d1] -> h3_2[2 + 8d0, 1 + d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_3_rd14_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd14 read pattern: { h3_3_update_0[d0, d1] -> h3_2[3 + 8d0, d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_5.peek_143();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd15_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd15 read pattern: { h3_3_update_0[d0, d1] -> h3_2[2 + 8d0, d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_5.peek_143();
  return value_h3_2_h3_2_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_3_rd16_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd16 read pattern: { h3_3_update_0[d0, d1] -> h3_2[3 + 8d0, -1 + d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_5.peek_285();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd17_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd17 read pattern: { h3_3_update_0[d0, d1] -> h3_2[3 + 8d0, d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_5.peek_143();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd18_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd18 read pattern: { h3_3_update_0[d0, d1] -> h3_2[3 + 8d0, 1 + d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd19_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd19 read pattern: { h3_3_update_0[d0, d1] -> h3_2[4 + 8d0, d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write4 = h3_2.h3_2_h3_2_update_0_write4_merged_banks_5.peek_143();
  return value_h3_2_h3_2_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_3_rd2_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd2 read pattern: { h3_3_update_0[d0, d1] -> h3_2[8d0, d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.peek_143();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd20_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd20 read pattern: { h3_3_update_0[d0, d1] -> h3_2[3 + 8d0, d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write3 = h3_2.h3_2_h3_2_update_0_write3_merged_banks_5.peek_143();
  return value_h3_2_h3_2_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_3_rd21_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd21 read pattern: { h3_3_update_0[d0, d1] -> h3_2[4 + 8d0, -1 + d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write4 = h3_2.h3_2_h3_2_update_0_write4_merged_banks_5.peek_285();
  return value_h3_2_h3_2_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_3_rd22_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd22 read pattern: { h3_3_update_0[d0, d1] -> h3_2[4 + 8d0, d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write4 = h3_2.h3_2_h3_2_update_0_write4_merged_banks_5.peek_143();
  return value_h3_2_h3_2_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_3_rd23_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd23 read pattern: { h3_3_update_0[d0, d1] -> h3_2[4 + 8d0, 1 + d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write4 = h3_2.h3_2_h3_2_update_0_write4_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_3_rd24_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd24 read pattern: { h3_3_update_0[d0, d1] -> h3_2[5 + 8d0, d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write5 = h3_2.h3_2_h3_2_update_0_write5_merged_banks_5.peek_143();
  return value_h3_2_h3_2_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_3_rd25_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd25 read pattern: { h3_3_update_0[d0, d1] -> h3_2[4 + 8d0, d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write4 = h3_2.h3_2_h3_2_update_0_write4_merged_banks_5.peek_143();
  return value_h3_2_h3_2_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_3_rd26_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd26 read pattern: { h3_3_update_0[d0, d1] -> h3_2[5 + 8d0, -1 + d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write5 = h3_2.h3_2_h3_2_update_0_write5_merged_banks_5.peek_285();
  return value_h3_2_h3_2_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_3_rd27_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd27 read pattern: { h3_3_update_0[d0, d1] -> h3_2[5 + 8d0, d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write5 = h3_2.h3_2_h3_2_update_0_write5_merged_banks_5.peek_143();
  return value_h3_2_h3_2_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_3_rd28_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd28 read pattern: { h3_3_update_0[d0, d1] -> h3_2[5 + 8d0, 1 + d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write5 = h3_2.h3_2_h3_2_update_0_write5_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_3_rd29_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd29 read pattern: { h3_3_update_0[d0, d1] -> h3_2[6 + 8d0, d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write6 = h3_2.h3_2_h3_2_update_0_write6_merged_banks_5.peek_143();
  return value_h3_2_h3_2_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_3_rd3_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd3 read pattern: { h3_3_update_0[d0, d1] -> h3_2[8d0, 1 + d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd30_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd30 read pattern: { h3_3_update_0[d0, d1] -> h3_2[5 + 8d0, d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write5 = h3_2.h3_2_h3_2_update_0_write5_merged_banks_5.peek_143();
  return value_h3_2_h3_2_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_3_rd31_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd31 read pattern: { h3_3_update_0[d0, d1] -> h3_2[6 + 8d0, -1 + d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write6 = h3_2.h3_2_h3_2_update_0_write6_merged_banks_5.peek_285();
  return value_h3_2_h3_2_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_3_rd32_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd32 read pattern: { h3_3_update_0[d0, d1] -> h3_2[6 + 8d0, d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write6 = h3_2.h3_2_h3_2_update_0_write6_merged_banks_5.peek_143();
  return value_h3_2_h3_2_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_3_rd33_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd33 read pattern: { h3_3_update_0[d0, d1] -> h3_2[6 + 8d0, 1 + d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write6 = h3_2.h3_2_h3_2_update_0_write6_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_3_rd34_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd34 read pattern: { h3_3_update_0[d0, d1] -> h3_2[7 + 8d0, d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write7 = h3_2.h3_2_h3_2_update_0_write7_merged_banks_5.peek_143();
  return value_h3_2_h3_2_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_3_rd35_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd35 read pattern: { h3_3_update_0[d0, d1] -> h3_2[6 + 8d0, d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write6 = h3_2.h3_2_h3_2_update_0_write6_merged_banks_5.peek_143();
  return value_h3_2_h3_2_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_3_rd36_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd36 read pattern: { h3_3_update_0[d0, d1] -> h3_2[7 + 8d0, -1 + d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write7 = h3_2.h3_2_h3_2_update_0_write7_merged_banks_5.peek_285();
  return value_h3_2_h3_2_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_3_rd37_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd37 read pattern: { h3_3_update_0[d0, d1] -> h3_2[7 + 8d0, d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write7 = h3_2.h3_2_h3_2_update_0_write7_merged_banks_5.peek_143();
  return value_h3_2_h3_2_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_3_rd38_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd38 read pattern: { h3_3_update_0[d0, d1] -> h3_2[7 + 8d0, 1 + d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write7 = h3_2.h3_2_h3_2_update_0_write7_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_3_rd39_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd39 read pattern: { h3_3_update_0[d0, d1] -> h3_2[8 + 8d0, d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.peek_142();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd4_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd4 read pattern: { h3_3_update_0[d0, d1] -> h3_2[1 + 8d0, d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_5.peek_143();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd5_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd5 read pattern: { h3_3_update_0[d0, d1] -> h3_2[8d0, d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write0 = h3_2.h3_2_h3_2_update_0_write0_merged_banks_5.peek_143();
  return value_h3_2_h3_2_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_3_rd6_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd6 read pattern: { h3_3_update_0[d0, d1] -> h3_2[1 + 8d0, -1 + d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_5.peek_285();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd7_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd7 read pattern: { h3_3_update_0[d0, d1] -> h3_2[1 + 8d0, d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_5.peek_143();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd8_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd8 read pattern: { h3_3_update_0[d0, d1] -> h3_2[1 + 8d0, 1 + d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write1 = h3_2.h3_2_h3_2_update_0_write1_merged_banks_5.peek_1();
  return value_h3_2_h3_2_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_3_rd9_select(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_3_rd9 read pattern: { h3_3_update_0[d0, d1] -> h3_2[2 + 8d0, d1] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Read schedule : { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  // Write schedule: { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
  auto value_h3_2_h3_2_update_0_write2 = h3_2.h3_2_h3_2_update_0_write2_merged_banks_5.peek_143();
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
inline void h3_2_h3_2_update_0_write_bundle_write(hw_uint<256>& h3_2_update_0_write, h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
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
inline hw_uint<1280> h3_2_h3_3_update_0_read_bundle_read(h3_2_cache& h3_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 40
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

	hw_uint<1280> result;
	hw_uint<32>  h3_3_rd0_res = h3_3_rd0_select(h3_2, d0, d1, dynamic_address);
	set_at<0, 1280>(result, h3_3_rd0_res);
	hw_uint<32>  h3_3_rd1_res = h3_3_rd1_select(h3_2, d0, d1, dynamic_address);
	set_at<32, 1280>(result, h3_3_rd1_res);
	hw_uint<32>  h3_3_rd2_res = h3_3_rd2_select(h3_2, d0, d1, dynamic_address);
	set_at<64, 1280>(result, h3_3_rd2_res);
	hw_uint<32>  h3_3_rd3_res = h3_3_rd3_select(h3_2, d0, d1, dynamic_address);
	set_at<96, 1280>(result, h3_3_rd3_res);
	hw_uint<32>  h3_3_rd4_res = h3_3_rd4_select(h3_2, d0, d1, dynamic_address);
	set_at<128, 1280>(result, h3_3_rd4_res);
	hw_uint<32>  h3_3_rd5_res = h3_3_rd5_select(h3_2, d0, d1, dynamic_address);
	set_at<160, 1280>(result, h3_3_rd5_res);
	hw_uint<32>  h3_3_rd6_res = h3_3_rd6_select(h3_2, d0, d1, dynamic_address);
	set_at<192, 1280>(result, h3_3_rd6_res);
	hw_uint<32>  h3_3_rd7_res = h3_3_rd7_select(h3_2, d0, d1, dynamic_address);
	set_at<224, 1280>(result, h3_3_rd7_res);
	hw_uint<32>  h3_3_rd8_res = h3_3_rd8_select(h3_2, d0, d1, dynamic_address);
	set_at<256, 1280>(result, h3_3_rd8_res);
	hw_uint<32>  h3_3_rd9_res = h3_3_rd9_select(h3_2, d0, d1, dynamic_address);
	set_at<288, 1280>(result, h3_3_rd9_res);
	hw_uint<32>  h3_3_rd10_res = h3_3_rd10_select(h3_2, d0, d1, dynamic_address);
	set_at<320, 1280>(result, h3_3_rd10_res);
	hw_uint<32>  h3_3_rd11_res = h3_3_rd11_select(h3_2, d0, d1, dynamic_address);
	set_at<352, 1280>(result, h3_3_rd11_res);
	hw_uint<32>  h3_3_rd12_res = h3_3_rd12_select(h3_2, d0, d1, dynamic_address);
	set_at<384, 1280>(result, h3_3_rd12_res);
	hw_uint<32>  h3_3_rd13_res = h3_3_rd13_select(h3_2, d0, d1, dynamic_address);
	set_at<416, 1280>(result, h3_3_rd13_res);
	hw_uint<32>  h3_3_rd14_res = h3_3_rd14_select(h3_2, d0, d1, dynamic_address);
	set_at<448, 1280>(result, h3_3_rd14_res);
	hw_uint<32>  h3_3_rd15_res = h3_3_rd15_select(h3_2, d0, d1, dynamic_address);
	set_at<480, 1280>(result, h3_3_rd15_res);
	hw_uint<32>  h3_3_rd16_res = h3_3_rd16_select(h3_2, d0, d1, dynamic_address);
	set_at<512, 1280>(result, h3_3_rd16_res);
	hw_uint<32>  h3_3_rd17_res = h3_3_rd17_select(h3_2, d0, d1, dynamic_address);
	set_at<544, 1280>(result, h3_3_rd17_res);
	hw_uint<32>  h3_3_rd18_res = h3_3_rd18_select(h3_2, d0, d1, dynamic_address);
	set_at<576, 1280>(result, h3_3_rd18_res);
	hw_uint<32>  h3_3_rd19_res = h3_3_rd19_select(h3_2, d0, d1, dynamic_address);
	set_at<608, 1280>(result, h3_3_rd19_res);
	hw_uint<32>  h3_3_rd20_res = h3_3_rd20_select(h3_2, d0, d1, dynamic_address);
	set_at<640, 1280>(result, h3_3_rd20_res);
	hw_uint<32>  h3_3_rd21_res = h3_3_rd21_select(h3_2, d0, d1, dynamic_address);
	set_at<672, 1280>(result, h3_3_rd21_res);
	hw_uint<32>  h3_3_rd22_res = h3_3_rd22_select(h3_2, d0, d1, dynamic_address);
	set_at<704, 1280>(result, h3_3_rd22_res);
	hw_uint<32>  h3_3_rd23_res = h3_3_rd23_select(h3_2, d0, d1, dynamic_address);
	set_at<736, 1280>(result, h3_3_rd23_res);
	hw_uint<32>  h3_3_rd24_res = h3_3_rd24_select(h3_2, d0, d1, dynamic_address);
	set_at<768, 1280>(result, h3_3_rd24_res);
	hw_uint<32>  h3_3_rd25_res = h3_3_rd25_select(h3_2, d0, d1, dynamic_address);
	set_at<800, 1280>(result, h3_3_rd25_res);
	hw_uint<32>  h3_3_rd26_res = h3_3_rd26_select(h3_2, d0, d1, dynamic_address);
	set_at<832, 1280>(result, h3_3_rd26_res);
	hw_uint<32>  h3_3_rd27_res = h3_3_rd27_select(h3_2, d0, d1, dynamic_address);
	set_at<864, 1280>(result, h3_3_rd27_res);
	hw_uint<32>  h3_3_rd28_res = h3_3_rd28_select(h3_2, d0, d1, dynamic_address);
	set_at<896, 1280>(result, h3_3_rd28_res);
	hw_uint<32>  h3_3_rd29_res = h3_3_rd29_select(h3_2, d0, d1, dynamic_address);
	set_at<928, 1280>(result, h3_3_rd29_res);
	hw_uint<32>  h3_3_rd30_res = h3_3_rd30_select(h3_2, d0, d1, dynamic_address);
	set_at<960, 1280>(result, h3_3_rd30_res);
	hw_uint<32>  h3_3_rd31_res = h3_3_rd31_select(h3_2, d0, d1, dynamic_address);
	set_at<992, 1280>(result, h3_3_rd31_res);
	hw_uint<32>  h3_3_rd32_res = h3_3_rd32_select(h3_2, d0, d1, dynamic_address);
	set_at<1024, 1280>(result, h3_3_rd32_res);
	hw_uint<32>  h3_3_rd33_res = h3_3_rd33_select(h3_2, d0, d1, dynamic_address);
	set_at<1056, 1280>(result, h3_3_rd33_res);
	hw_uint<32>  h3_3_rd34_res = h3_3_rd34_select(h3_2, d0, d1, dynamic_address);
	set_at<1088, 1280>(result, h3_3_rd34_res);
	hw_uint<32>  h3_3_rd35_res = h3_3_rd35_select(h3_2, d0, d1, dynamic_address);
	set_at<1120, 1280>(result, h3_3_rd35_res);
	hw_uint<32>  h3_3_rd36_res = h3_3_rd36_select(h3_2, d0, d1, dynamic_address);
	set_at<1152, 1280>(result, h3_3_rd36_res);
	hw_uint<32>  h3_3_rd37_res = h3_3_rd37_select(h3_2, d0, d1, dynamic_address);
	set_at<1184, 1280>(result, h3_3_rd37_res);
	hw_uint<32>  h3_3_rd38_res = h3_3_rd38_select(h3_2, d0, d1, dynamic_address);
	set_at<1216, 1280>(result, h3_3_rd38_res);
	hw_uint<32>  h3_3_rd39_res = h3_3_rd39_select(h3_2, d0, d1, dynamic_address);
	set_at<1248, 1280>(result, h3_3_rd39_res);
	return result;
}

struct h3_3_h3_3_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-40, 1064], [-6, 1028]}
	// Capacity: 282
	// # of read delays: 5
  // 0, 1, 140, 141, 281
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 138> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 139> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_139() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_140() {
		return f4;
	}

	inline hw_uint<32>  peek_141() {
		return f6;
	}

	inline hw_uint<32>  peek_280() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_281() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 139
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 139 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 138
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 138 reading from capacity: 1
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
	// RAM Box: {[-39, 1057], [-6, 1029]}
	// Capacity: 282
	// # of read delays: 4
  // 0, 1, 141, 281
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 139> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 139> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_141() {
		return f4;
	}

	inline hw_uint<32>  peek_280() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_281() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 139
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 139 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 139
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 139 reading from capacity: 1
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
	// RAM Box: {[-38, 1058], [-6, 1029]}
	// Capacity: 282
	// # of read delays: 4
  // 0, 1, 141, 281
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 139> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 139> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_141() {
		return f4;
	}

	inline hw_uint<32>  peek_280() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_281() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 139
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 139 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 139
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 139 reading from capacity: 1
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
	// RAM Box: {[-37, 1059], [-6, 1029]}
	// Capacity: 282
	// # of read delays: 4
  // 0, 1, 141, 281
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 139> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 139> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_141() {
		return f4;
	}

	inline hw_uint<32>  peek_280() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_281() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 139
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 139 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 139
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 139 reading from capacity: 1
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
	// RAM Box: {[-36, 1060], [-6, 1029]}
	// Capacity: 282
	// # of read delays: 4
  // 0, 1, 141, 281
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 139> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 139> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_141() {
		return f4;
	}

	inline hw_uint<32>  peek_280() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_281() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 139
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 139 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 139
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 139 reading from capacity: 1
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
	// RAM Box: {[-35, 1061], [-6, 1029]}
	// Capacity: 282
	// # of read delays: 4
  // 0, 1, 141, 281
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 139> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 139> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_141() {
		return f4;
	}

	inline hw_uint<32>  peek_280() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_281() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 139
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 139 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 139
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 139 reading from capacity: 1
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
	// RAM Box: {[-34, 1062], [-6, 1029]}
	// Capacity: 282
	// # of read delays: 4
  // 0, 1, 141, 281
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 139> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 139> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_141() {
		return f4;
	}

	inline hw_uint<32>  peek_280() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_281() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 139
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 139 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 139
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 139 reading from capacity: 1
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
	// RAM Box: {[-41, 1063], [-5, 1029]}
	// Capacity: 282
	// # of read delays: 5
  // 0, 1, 141, 142, 281
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 139> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 138> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_141() {
		return f4;
	}

	inline hw_uint<32>  peek_142() {
		return f6;
	}

	inline hw_uint<32>  peek_280() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_281() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 138
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 138 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 139
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 139 reading from capacity: 1
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
  // # of banks: 8
  h3_3_h3_3_update_0_write0_merged_banks_5_cache h3_3_h3_3_update_0_write0_merged_banks_5;
  h3_3_h3_3_update_0_write1_merged_banks_5_cache h3_3_h3_3_update_0_write1_merged_banks_5;
  h3_3_h3_3_update_0_write2_merged_banks_5_cache h3_3_h3_3_update_0_write2_merged_banks_5;
  h3_3_h3_3_update_0_write3_merged_banks_5_cache h3_3_h3_3_update_0_write3_merged_banks_5;
  h3_3_h3_3_update_0_write4_merged_banks_5_cache h3_3_h3_3_update_0_write4_merged_banks_5;
  h3_3_h3_3_update_0_write5_merged_banks_5_cache h3_3_h3_3_update_0_write5_merged_banks_5;
  h3_3_h3_3_update_0_write6_merged_banks_5_cache h3_3_h3_3_update_0_write6_merged_banks_5;
  h3_3_h3_3_update_0_write7_merged_banks_5_cache h3_3_h3_3_update_0_write7_merged_banks_5;
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

inline hw_uint<32>  h3_4_rd0_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd0 read pattern: { h3_4_update_0[d0, d1] -> h3_3[-1 + 8d0, d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write7 = h3_3.h3_3_h3_3_update_0_write7_merged_banks_5.peek_142();
  return value_h3_3_h3_3_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_4_rd1_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd1 read pattern: { h3_4_update_0[d0, d1] -> h3_3[8d0, -1 + d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.peek_281();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd10_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd10 read pattern: { h3_4_update_0[d0, d1] -> h3_3[1 + 8d0, d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_5.peek_141();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd11_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd11 read pattern: { h3_4_update_0[d0, d1] -> h3_3[2 + 8d0, -1 + d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_5.peek_281();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_4_rd12_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd12 read pattern: { h3_4_update_0[d0, d1] -> h3_3[2 + 8d0, d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_5.peek_141();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_4_rd13_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd13 read pattern: { h3_4_update_0[d0, d1] -> h3_3[2 + 8d0, 1 + d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_4_rd14_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd14 read pattern: { h3_4_update_0[d0, d1] -> h3_3[3 + 8d0, d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_5.peek_141();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd15_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd15 read pattern: { h3_4_update_0[d0, d1] -> h3_3[2 + 8d0, d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_5.peek_141();
  return value_h3_3_h3_3_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_4_rd16_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd16 read pattern: { h3_4_update_0[d0, d1] -> h3_3[3 + 8d0, -1 + d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_5.peek_281();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd17_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd17 read pattern: { h3_4_update_0[d0, d1] -> h3_3[3 + 8d0, d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_5.peek_141();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd18_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd18 read pattern: { h3_4_update_0[d0, d1] -> h3_3[3 + 8d0, 1 + d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd19_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd19 read pattern: { h3_4_update_0[d0, d1] -> h3_3[4 + 8d0, d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write4 = h3_3.h3_3_h3_3_update_0_write4_merged_banks_5.peek_141();
  return value_h3_3_h3_3_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_4_rd2_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd2 read pattern: { h3_4_update_0[d0, d1] -> h3_3[8d0, d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.peek_141();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd20_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd20 read pattern: { h3_4_update_0[d0, d1] -> h3_3[3 + 8d0, d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write3 = h3_3.h3_3_h3_3_update_0_write3_merged_banks_5.peek_141();
  return value_h3_3_h3_3_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_4_rd21_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd21 read pattern: { h3_4_update_0[d0, d1] -> h3_3[4 + 8d0, -1 + d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write4 = h3_3.h3_3_h3_3_update_0_write4_merged_banks_5.peek_281();
  return value_h3_3_h3_3_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_4_rd22_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd22 read pattern: { h3_4_update_0[d0, d1] -> h3_3[4 + 8d0, d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write4 = h3_3.h3_3_h3_3_update_0_write4_merged_banks_5.peek_141();
  return value_h3_3_h3_3_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_4_rd23_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd23 read pattern: { h3_4_update_0[d0, d1] -> h3_3[4 + 8d0, 1 + d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write4 = h3_3.h3_3_h3_3_update_0_write4_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_4_rd24_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd24 read pattern: { h3_4_update_0[d0, d1] -> h3_3[5 + 8d0, d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write5 = h3_3.h3_3_h3_3_update_0_write5_merged_banks_5.peek_141();
  return value_h3_3_h3_3_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_4_rd25_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd25 read pattern: { h3_4_update_0[d0, d1] -> h3_3[4 + 8d0, d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write4 = h3_3.h3_3_h3_3_update_0_write4_merged_banks_5.peek_141();
  return value_h3_3_h3_3_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_4_rd26_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd26 read pattern: { h3_4_update_0[d0, d1] -> h3_3[5 + 8d0, -1 + d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write5 = h3_3.h3_3_h3_3_update_0_write5_merged_banks_5.peek_281();
  return value_h3_3_h3_3_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_4_rd27_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd27 read pattern: { h3_4_update_0[d0, d1] -> h3_3[5 + 8d0, d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write5 = h3_3.h3_3_h3_3_update_0_write5_merged_banks_5.peek_141();
  return value_h3_3_h3_3_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_4_rd28_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd28 read pattern: { h3_4_update_0[d0, d1] -> h3_3[5 + 8d0, 1 + d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write5 = h3_3.h3_3_h3_3_update_0_write5_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_4_rd29_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd29 read pattern: { h3_4_update_0[d0, d1] -> h3_3[6 + 8d0, d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write6 = h3_3.h3_3_h3_3_update_0_write6_merged_banks_5.peek_141();
  return value_h3_3_h3_3_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_4_rd3_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd3 read pattern: { h3_4_update_0[d0, d1] -> h3_3[8d0, 1 + d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd30_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd30 read pattern: { h3_4_update_0[d0, d1] -> h3_3[5 + 8d0, d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write5 = h3_3.h3_3_h3_3_update_0_write5_merged_banks_5.peek_141();
  return value_h3_3_h3_3_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_4_rd31_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd31 read pattern: { h3_4_update_0[d0, d1] -> h3_3[6 + 8d0, -1 + d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write6 = h3_3.h3_3_h3_3_update_0_write6_merged_banks_5.peek_281();
  return value_h3_3_h3_3_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_4_rd32_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd32 read pattern: { h3_4_update_0[d0, d1] -> h3_3[6 + 8d0, d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write6 = h3_3.h3_3_h3_3_update_0_write6_merged_banks_5.peek_141();
  return value_h3_3_h3_3_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_4_rd33_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd33 read pattern: { h3_4_update_0[d0, d1] -> h3_3[6 + 8d0, 1 + d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write6 = h3_3.h3_3_h3_3_update_0_write6_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_4_rd34_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd34 read pattern: { h3_4_update_0[d0, d1] -> h3_3[7 + 8d0, d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write7 = h3_3.h3_3_h3_3_update_0_write7_merged_banks_5.peek_141();
  return value_h3_3_h3_3_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_4_rd35_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd35 read pattern: { h3_4_update_0[d0, d1] -> h3_3[6 + 8d0, d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write6 = h3_3.h3_3_h3_3_update_0_write6_merged_banks_5.peek_141();
  return value_h3_3_h3_3_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_4_rd36_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd36 read pattern: { h3_4_update_0[d0, d1] -> h3_3[7 + 8d0, -1 + d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write7 = h3_3.h3_3_h3_3_update_0_write7_merged_banks_5.peek_281();
  return value_h3_3_h3_3_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_4_rd37_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd37 read pattern: { h3_4_update_0[d0, d1] -> h3_3[7 + 8d0, d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write7 = h3_3.h3_3_h3_3_update_0_write7_merged_banks_5.peek_141();
  return value_h3_3_h3_3_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_4_rd38_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd38 read pattern: { h3_4_update_0[d0, d1] -> h3_3[7 + 8d0, 1 + d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write7 = h3_3.h3_3_h3_3_update_0_write7_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_4_rd39_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd39 read pattern: { h3_4_update_0[d0, d1] -> h3_3[8 + 8d0, d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.peek_140();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd4_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd4 read pattern: { h3_4_update_0[d0, d1] -> h3_3[1 + 8d0, d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_5.peek_141();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd5_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd5 read pattern: { h3_4_update_0[d0, d1] -> h3_3[8d0, d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write0 = h3_3.h3_3_h3_3_update_0_write0_merged_banks_5.peek_141();
  return value_h3_3_h3_3_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_4_rd6_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd6 read pattern: { h3_4_update_0[d0, d1] -> h3_3[1 + 8d0, -1 + d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_5.peek_281();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd7_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd7 read pattern: { h3_4_update_0[d0, d1] -> h3_3[1 + 8d0, d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_5.peek_141();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd8_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd8 read pattern: { h3_4_update_0[d0, d1] -> h3_3[1 + 8d0, 1 + d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write1 = h3_3.h3_3_h3_3_update_0_write1_merged_banks_5.peek_1();
  return value_h3_3_h3_3_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_4_rd9_select(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_4_rd9 read pattern: { h3_4_update_0[d0, d1] -> h3_3[2 + 8d0, d1] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Read schedule : { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  // Write schedule: { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
  auto value_h3_3_h3_3_update_0_write2 = h3_3.h3_3_h3_3_update_0_write2_merged_banks_5.peek_141();
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
inline void h3_3_h3_3_update_0_write_bundle_write(hw_uint<256>& h3_3_update_0_write, h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
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
inline hw_uint<1280> h3_3_h3_4_update_0_read_bundle_read(h3_3_cache& h3_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 40
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

	hw_uint<1280> result;
	hw_uint<32>  h3_4_rd0_res = h3_4_rd0_select(h3_3, d0, d1, dynamic_address);
	set_at<0, 1280>(result, h3_4_rd0_res);
	hw_uint<32>  h3_4_rd1_res = h3_4_rd1_select(h3_3, d0, d1, dynamic_address);
	set_at<32, 1280>(result, h3_4_rd1_res);
	hw_uint<32>  h3_4_rd2_res = h3_4_rd2_select(h3_3, d0, d1, dynamic_address);
	set_at<64, 1280>(result, h3_4_rd2_res);
	hw_uint<32>  h3_4_rd3_res = h3_4_rd3_select(h3_3, d0, d1, dynamic_address);
	set_at<96, 1280>(result, h3_4_rd3_res);
	hw_uint<32>  h3_4_rd4_res = h3_4_rd4_select(h3_3, d0, d1, dynamic_address);
	set_at<128, 1280>(result, h3_4_rd4_res);
	hw_uint<32>  h3_4_rd5_res = h3_4_rd5_select(h3_3, d0, d1, dynamic_address);
	set_at<160, 1280>(result, h3_4_rd5_res);
	hw_uint<32>  h3_4_rd6_res = h3_4_rd6_select(h3_3, d0, d1, dynamic_address);
	set_at<192, 1280>(result, h3_4_rd6_res);
	hw_uint<32>  h3_4_rd7_res = h3_4_rd7_select(h3_3, d0, d1, dynamic_address);
	set_at<224, 1280>(result, h3_4_rd7_res);
	hw_uint<32>  h3_4_rd8_res = h3_4_rd8_select(h3_3, d0, d1, dynamic_address);
	set_at<256, 1280>(result, h3_4_rd8_res);
	hw_uint<32>  h3_4_rd9_res = h3_4_rd9_select(h3_3, d0, d1, dynamic_address);
	set_at<288, 1280>(result, h3_4_rd9_res);
	hw_uint<32>  h3_4_rd10_res = h3_4_rd10_select(h3_3, d0, d1, dynamic_address);
	set_at<320, 1280>(result, h3_4_rd10_res);
	hw_uint<32>  h3_4_rd11_res = h3_4_rd11_select(h3_3, d0, d1, dynamic_address);
	set_at<352, 1280>(result, h3_4_rd11_res);
	hw_uint<32>  h3_4_rd12_res = h3_4_rd12_select(h3_3, d0, d1, dynamic_address);
	set_at<384, 1280>(result, h3_4_rd12_res);
	hw_uint<32>  h3_4_rd13_res = h3_4_rd13_select(h3_3, d0, d1, dynamic_address);
	set_at<416, 1280>(result, h3_4_rd13_res);
	hw_uint<32>  h3_4_rd14_res = h3_4_rd14_select(h3_3, d0, d1, dynamic_address);
	set_at<448, 1280>(result, h3_4_rd14_res);
	hw_uint<32>  h3_4_rd15_res = h3_4_rd15_select(h3_3, d0, d1, dynamic_address);
	set_at<480, 1280>(result, h3_4_rd15_res);
	hw_uint<32>  h3_4_rd16_res = h3_4_rd16_select(h3_3, d0, d1, dynamic_address);
	set_at<512, 1280>(result, h3_4_rd16_res);
	hw_uint<32>  h3_4_rd17_res = h3_4_rd17_select(h3_3, d0, d1, dynamic_address);
	set_at<544, 1280>(result, h3_4_rd17_res);
	hw_uint<32>  h3_4_rd18_res = h3_4_rd18_select(h3_3, d0, d1, dynamic_address);
	set_at<576, 1280>(result, h3_4_rd18_res);
	hw_uint<32>  h3_4_rd19_res = h3_4_rd19_select(h3_3, d0, d1, dynamic_address);
	set_at<608, 1280>(result, h3_4_rd19_res);
	hw_uint<32>  h3_4_rd20_res = h3_4_rd20_select(h3_3, d0, d1, dynamic_address);
	set_at<640, 1280>(result, h3_4_rd20_res);
	hw_uint<32>  h3_4_rd21_res = h3_4_rd21_select(h3_3, d0, d1, dynamic_address);
	set_at<672, 1280>(result, h3_4_rd21_res);
	hw_uint<32>  h3_4_rd22_res = h3_4_rd22_select(h3_3, d0, d1, dynamic_address);
	set_at<704, 1280>(result, h3_4_rd22_res);
	hw_uint<32>  h3_4_rd23_res = h3_4_rd23_select(h3_3, d0, d1, dynamic_address);
	set_at<736, 1280>(result, h3_4_rd23_res);
	hw_uint<32>  h3_4_rd24_res = h3_4_rd24_select(h3_3, d0, d1, dynamic_address);
	set_at<768, 1280>(result, h3_4_rd24_res);
	hw_uint<32>  h3_4_rd25_res = h3_4_rd25_select(h3_3, d0, d1, dynamic_address);
	set_at<800, 1280>(result, h3_4_rd25_res);
	hw_uint<32>  h3_4_rd26_res = h3_4_rd26_select(h3_3, d0, d1, dynamic_address);
	set_at<832, 1280>(result, h3_4_rd26_res);
	hw_uint<32>  h3_4_rd27_res = h3_4_rd27_select(h3_3, d0, d1, dynamic_address);
	set_at<864, 1280>(result, h3_4_rd27_res);
	hw_uint<32>  h3_4_rd28_res = h3_4_rd28_select(h3_3, d0, d1, dynamic_address);
	set_at<896, 1280>(result, h3_4_rd28_res);
	hw_uint<32>  h3_4_rd29_res = h3_4_rd29_select(h3_3, d0, d1, dynamic_address);
	set_at<928, 1280>(result, h3_4_rd29_res);
	hw_uint<32>  h3_4_rd30_res = h3_4_rd30_select(h3_3, d0, d1, dynamic_address);
	set_at<960, 1280>(result, h3_4_rd30_res);
	hw_uint<32>  h3_4_rd31_res = h3_4_rd31_select(h3_3, d0, d1, dynamic_address);
	set_at<992, 1280>(result, h3_4_rd31_res);
	hw_uint<32>  h3_4_rd32_res = h3_4_rd32_select(h3_3, d0, d1, dynamic_address);
	set_at<1024, 1280>(result, h3_4_rd32_res);
	hw_uint<32>  h3_4_rd33_res = h3_4_rd33_select(h3_3, d0, d1, dynamic_address);
	set_at<1056, 1280>(result, h3_4_rd33_res);
	hw_uint<32>  h3_4_rd34_res = h3_4_rd34_select(h3_3, d0, d1, dynamic_address);
	set_at<1088, 1280>(result, h3_4_rd34_res);
	hw_uint<32>  h3_4_rd35_res = h3_4_rd35_select(h3_3, d0, d1, dynamic_address);
	set_at<1120, 1280>(result, h3_4_rd35_res);
	hw_uint<32>  h3_4_rd36_res = h3_4_rd36_select(h3_3, d0, d1, dynamic_address);
	set_at<1152, 1280>(result, h3_4_rd36_res);
	hw_uint<32>  h3_4_rd37_res = h3_4_rd37_select(h3_3, d0, d1, dynamic_address);
	set_at<1184, 1280>(result, h3_4_rd37_res);
	hw_uint<32>  h3_4_rd38_res = h3_4_rd38_select(h3_3, d0, d1, dynamic_address);
	set_at<1216, 1280>(result, h3_4_rd38_res);
	hw_uint<32>  h3_4_rd39_res = h3_4_rd39_select(h3_3, d0, d1, dynamic_address);
	set_at<1248, 1280>(result, h3_4_rd39_res);
	return result;
}

struct h3_4_h3_4_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-32, 1056], [-5, 1027]}
	// Capacity: 278
	// # of read delays: 5
  // 0, 1, 138, 139, 277
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 136> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 137> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_137() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_138() {
		return f4;
	}

	inline hw_uint<32>  peek_139() {
		return f6;
	}

	inline hw_uint<32>  peek_276() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_277() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 137
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 137 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 136
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 136 reading from capacity: 1
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
	// RAM Box: {[-31, 1049], [-5, 1028]}
	// Capacity: 278
	// # of read delays: 4
  // 0, 1, 139, 277
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 137> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 137> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_138() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_139() {
		return f4;
	}

	inline hw_uint<32>  peek_276() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_277() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 137
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 137 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 137
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 137 reading from capacity: 1
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
	// RAM Box: {[-30, 1050], [-5, 1028]}
	// Capacity: 278
	// # of read delays: 4
  // 0, 1, 139, 277
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 137> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 137> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_138() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_139() {
		return f4;
	}

	inline hw_uint<32>  peek_276() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_277() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 137
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 137 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 137
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 137 reading from capacity: 1
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
	// RAM Box: {[-29, 1051], [-5, 1028]}
	// Capacity: 278
	// # of read delays: 4
  // 0, 1, 139, 277
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 137> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 137> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_138() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_139() {
		return f4;
	}

	inline hw_uint<32>  peek_276() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_277() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 137
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 137 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 137
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 137 reading from capacity: 1
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
	// RAM Box: {[-28, 1052], [-5, 1028]}
	// Capacity: 278
	// # of read delays: 4
  // 0, 1, 139, 277
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 137> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 137> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_138() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_139() {
		return f4;
	}

	inline hw_uint<32>  peek_276() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_277() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 137
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 137 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 137
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 137 reading from capacity: 1
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
	// RAM Box: {[-27, 1053], [-5, 1028]}
	// Capacity: 278
	// # of read delays: 4
  // 0, 1, 139, 277
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 137> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 137> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_138() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_139() {
		return f4;
	}

	inline hw_uint<32>  peek_276() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_277() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 137
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 137 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 137
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 137 reading from capacity: 1
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
	// RAM Box: {[-26, 1054], [-5, 1028]}
	// Capacity: 278
	// # of read delays: 4
  // 0, 1, 139, 277
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 137> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 137> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_138() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_139() {
		return f4;
	}

	inline hw_uint<32>  peek_276() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_277() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 137
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 137 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 137
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 137 reading from capacity: 1
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
	// RAM Box: {[-33, 1055], [-4, 1028]}
	// Capacity: 278
	// # of read delays: 5
  // 0, 1, 139, 140, 277
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 137> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 136> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_138() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_139() {
		return f4;
	}

	inline hw_uint<32>  peek_140() {
		return f6;
	}

	inline hw_uint<32>  peek_276() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_277() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 136
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 136 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 137
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 137 reading from capacity: 1
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
  // # of banks: 8
  h3_4_h3_4_update_0_write0_merged_banks_5_cache h3_4_h3_4_update_0_write0_merged_banks_5;
  h3_4_h3_4_update_0_write1_merged_banks_5_cache h3_4_h3_4_update_0_write1_merged_banks_5;
  h3_4_h3_4_update_0_write2_merged_banks_5_cache h3_4_h3_4_update_0_write2_merged_banks_5;
  h3_4_h3_4_update_0_write3_merged_banks_5_cache h3_4_h3_4_update_0_write3_merged_banks_5;
  h3_4_h3_4_update_0_write4_merged_banks_5_cache h3_4_h3_4_update_0_write4_merged_banks_5;
  h3_4_h3_4_update_0_write5_merged_banks_5_cache h3_4_h3_4_update_0_write5_merged_banks_5;
  h3_4_h3_4_update_0_write6_merged_banks_5_cache h3_4_h3_4_update_0_write6_merged_banks_5;
  h3_4_h3_4_update_0_write7_merged_banks_5_cache h3_4_h3_4_update_0_write7_merged_banks_5;
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

inline hw_uint<32>  h3_5_rd0_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd0 read pattern: { h3_5_update_0[d0, d1] -> h3_4[-1 + 8d0, d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write7 = h3_4.h3_4_h3_4_update_0_write7_merged_banks_5.peek_140();
  return value_h3_4_h3_4_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_5_rd1_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd1 read pattern: { h3_5_update_0[d0, d1] -> h3_4[8d0, -1 + d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.peek_277();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd10_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd10 read pattern: { h3_5_update_0[d0, d1] -> h3_4[1 + 8d0, d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_5.peek_139();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd11_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd11 read pattern: { h3_5_update_0[d0, d1] -> h3_4[2 + 8d0, -1 + d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_5.peek_277();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_5_rd12_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd12 read pattern: { h3_5_update_0[d0, d1] -> h3_4[2 + 8d0, d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_5.peek_139();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_5_rd13_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd13 read pattern: { h3_5_update_0[d0, d1] -> h3_4[2 + 8d0, 1 + d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_5_rd14_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd14 read pattern: { h3_5_update_0[d0, d1] -> h3_4[3 + 8d0, d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_5.peek_139();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd15_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd15 read pattern: { h3_5_update_0[d0, d1] -> h3_4[2 + 8d0, d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_5.peek_139();
  return value_h3_4_h3_4_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_5_rd16_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd16 read pattern: { h3_5_update_0[d0, d1] -> h3_4[3 + 8d0, -1 + d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_5.peek_277();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd17_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd17 read pattern: { h3_5_update_0[d0, d1] -> h3_4[3 + 8d0, d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_5.peek_139();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd18_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd18 read pattern: { h3_5_update_0[d0, d1] -> h3_4[3 + 8d0, 1 + d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd19_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd19 read pattern: { h3_5_update_0[d0, d1] -> h3_4[4 + 8d0, d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write4 = h3_4.h3_4_h3_4_update_0_write4_merged_banks_5.peek_139();
  return value_h3_4_h3_4_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_5_rd2_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd2 read pattern: { h3_5_update_0[d0, d1] -> h3_4[8d0, d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.peek_139();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd20_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd20 read pattern: { h3_5_update_0[d0, d1] -> h3_4[3 + 8d0, d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write3 = h3_4.h3_4_h3_4_update_0_write3_merged_banks_5.peek_139();
  return value_h3_4_h3_4_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_5_rd21_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd21 read pattern: { h3_5_update_0[d0, d1] -> h3_4[4 + 8d0, -1 + d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write4 = h3_4.h3_4_h3_4_update_0_write4_merged_banks_5.peek_277();
  return value_h3_4_h3_4_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_5_rd22_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd22 read pattern: { h3_5_update_0[d0, d1] -> h3_4[4 + 8d0, d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write4 = h3_4.h3_4_h3_4_update_0_write4_merged_banks_5.peek_139();
  return value_h3_4_h3_4_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_5_rd23_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd23 read pattern: { h3_5_update_0[d0, d1] -> h3_4[4 + 8d0, 1 + d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write4 = h3_4.h3_4_h3_4_update_0_write4_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_5_rd24_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd24 read pattern: { h3_5_update_0[d0, d1] -> h3_4[5 + 8d0, d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write5 = h3_4.h3_4_h3_4_update_0_write5_merged_banks_5.peek_139();
  return value_h3_4_h3_4_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_5_rd25_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd25 read pattern: { h3_5_update_0[d0, d1] -> h3_4[4 + 8d0, d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write4 = h3_4.h3_4_h3_4_update_0_write4_merged_banks_5.peek_139();
  return value_h3_4_h3_4_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_5_rd26_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd26 read pattern: { h3_5_update_0[d0, d1] -> h3_4[5 + 8d0, -1 + d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write5 = h3_4.h3_4_h3_4_update_0_write5_merged_banks_5.peek_277();
  return value_h3_4_h3_4_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_5_rd27_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd27 read pattern: { h3_5_update_0[d0, d1] -> h3_4[5 + 8d0, d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write5 = h3_4.h3_4_h3_4_update_0_write5_merged_banks_5.peek_139();
  return value_h3_4_h3_4_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_5_rd28_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd28 read pattern: { h3_5_update_0[d0, d1] -> h3_4[5 + 8d0, 1 + d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write5 = h3_4.h3_4_h3_4_update_0_write5_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_5_rd29_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd29 read pattern: { h3_5_update_0[d0, d1] -> h3_4[6 + 8d0, d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write6 = h3_4.h3_4_h3_4_update_0_write6_merged_banks_5.peek_139();
  return value_h3_4_h3_4_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_5_rd3_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd3 read pattern: { h3_5_update_0[d0, d1] -> h3_4[8d0, 1 + d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd30_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd30 read pattern: { h3_5_update_0[d0, d1] -> h3_4[5 + 8d0, d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write5 = h3_4.h3_4_h3_4_update_0_write5_merged_banks_5.peek_139();
  return value_h3_4_h3_4_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_5_rd31_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd31 read pattern: { h3_5_update_0[d0, d1] -> h3_4[6 + 8d0, -1 + d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write6 = h3_4.h3_4_h3_4_update_0_write6_merged_banks_5.peek_277();
  return value_h3_4_h3_4_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_5_rd32_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd32 read pattern: { h3_5_update_0[d0, d1] -> h3_4[6 + 8d0, d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write6 = h3_4.h3_4_h3_4_update_0_write6_merged_banks_5.peek_139();
  return value_h3_4_h3_4_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_5_rd33_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd33 read pattern: { h3_5_update_0[d0, d1] -> h3_4[6 + 8d0, 1 + d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write6 = h3_4.h3_4_h3_4_update_0_write6_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_5_rd34_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd34 read pattern: { h3_5_update_0[d0, d1] -> h3_4[7 + 8d0, d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write7 = h3_4.h3_4_h3_4_update_0_write7_merged_banks_5.peek_139();
  return value_h3_4_h3_4_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_5_rd35_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd35 read pattern: { h3_5_update_0[d0, d1] -> h3_4[6 + 8d0, d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write6 = h3_4.h3_4_h3_4_update_0_write6_merged_banks_5.peek_139();
  return value_h3_4_h3_4_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_5_rd36_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd36 read pattern: { h3_5_update_0[d0, d1] -> h3_4[7 + 8d0, -1 + d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write7 = h3_4.h3_4_h3_4_update_0_write7_merged_banks_5.peek_277();
  return value_h3_4_h3_4_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_5_rd37_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd37 read pattern: { h3_5_update_0[d0, d1] -> h3_4[7 + 8d0, d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write7 = h3_4.h3_4_h3_4_update_0_write7_merged_banks_5.peek_139();
  return value_h3_4_h3_4_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_5_rd38_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd38 read pattern: { h3_5_update_0[d0, d1] -> h3_4[7 + 8d0, 1 + d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write7 = h3_4.h3_4_h3_4_update_0_write7_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_5_rd39_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd39 read pattern: { h3_5_update_0[d0, d1] -> h3_4[8 + 8d0, d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.peek_138();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd4_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd4 read pattern: { h3_5_update_0[d0, d1] -> h3_4[1 + 8d0, d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_5.peek_139();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd5_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd5 read pattern: { h3_5_update_0[d0, d1] -> h3_4[8d0, d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write0 = h3_4.h3_4_h3_4_update_0_write0_merged_banks_5.peek_139();
  return value_h3_4_h3_4_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_5_rd6_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd6 read pattern: { h3_5_update_0[d0, d1] -> h3_4[1 + 8d0, -1 + d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_5.peek_277();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd7_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd7 read pattern: { h3_5_update_0[d0, d1] -> h3_4[1 + 8d0, d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_5.peek_139();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd8_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd8 read pattern: { h3_5_update_0[d0, d1] -> h3_4[1 + 8d0, 1 + d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write1 = h3_4.h3_4_h3_4_update_0_write1_merged_banks_5.peek_1();
  return value_h3_4_h3_4_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_5_rd9_select(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_5_rd9 read pattern: { h3_5_update_0[d0, d1] -> h3_4[2 + 8d0, d1] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Read schedule : { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  // Write schedule: { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
  auto value_h3_4_h3_4_update_0_write2 = h3_4.h3_4_h3_4_update_0_write2_merged_banks_5.peek_139();
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
inline void h3_4_h3_4_update_0_write_bundle_write(hw_uint<256>& h3_4_update_0_write, h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
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
inline hw_uint<1280> h3_4_h3_5_update_0_read_bundle_read(h3_4_cache& h3_4, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 40
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

	hw_uint<1280> result;
	hw_uint<32>  h3_5_rd0_res = h3_5_rd0_select(h3_4, d0, d1, dynamic_address);
	set_at<0, 1280>(result, h3_5_rd0_res);
	hw_uint<32>  h3_5_rd1_res = h3_5_rd1_select(h3_4, d0, d1, dynamic_address);
	set_at<32, 1280>(result, h3_5_rd1_res);
	hw_uint<32>  h3_5_rd2_res = h3_5_rd2_select(h3_4, d0, d1, dynamic_address);
	set_at<64, 1280>(result, h3_5_rd2_res);
	hw_uint<32>  h3_5_rd3_res = h3_5_rd3_select(h3_4, d0, d1, dynamic_address);
	set_at<96, 1280>(result, h3_5_rd3_res);
	hw_uint<32>  h3_5_rd4_res = h3_5_rd4_select(h3_4, d0, d1, dynamic_address);
	set_at<128, 1280>(result, h3_5_rd4_res);
	hw_uint<32>  h3_5_rd5_res = h3_5_rd5_select(h3_4, d0, d1, dynamic_address);
	set_at<160, 1280>(result, h3_5_rd5_res);
	hw_uint<32>  h3_5_rd6_res = h3_5_rd6_select(h3_4, d0, d1, dynamic_address);
	set_at<192, 1280>(result, h3_5_rd6_res);
	hw_uint<32>  h3_5_rd7_res = h3_5_rd7_select(h3_4, d0, d1, dynamic_address);
	set_at<224, 1280>(result, h3_5_rd7_res);
	hw_uint<32>  h3_5_rd8_res = h3_5_rd8_select(h3_4, d0, d1, dynamic_address);
	set_at<256, 1280>(result, h3_5_rd8_res);
	hw_uint<32>  h3_5_rd9_res = h3_5_rd9_select(h3_4, d0, d1, dynamic_address);
	set_at<288, 1280>(result, h3_5_rd9_res);
	hw_uint<32>  h3_5_rd10_res = h3_5_rd10_select(h3_4, d0, d1, dynamic_address);
	set_at<320, 1280>(result, h3_5_rd10_res);
	hw_uint<32>  h3_5_rd11_res = h3_5_rd11_select(h3_4, d0, d1, dynamic_address);
	set_at<352, 1280>(result, h3_5_rd11_res);
	hw_uint<32>  h3_5_rd12_res = h3_5_rd12_select(h3_4, d0, d1, dynamic_address);
	set_at<384, 1280>(result, h3_5_rd12_res);
	hw_uint<32>  h3_5_rd13_res = h3_5_rd13_select(h3_4, d0, d1, dynamic_address);
	set_at<416, 1280>(result, h3_5_rd13_res);
	hw_uint<32>  h3_5_rd14_res = h3_5_rd14_select(h3_4, d0, d1, dynamic_address);
	set_at<448, 1280>(result, h3_5_rd14_res);
	hw_uint<32>  h3_5_rd15_res = h3_5_rd15_select(h3_4, d0, d1, dynamic_address);
	set_at<480, 1280>(result, h3_5_rd15_res);
	hw_uint<32>  h3_5_rd16_res = h3_5_rd16_select(h3_4, d0, d1, dynamic_address);
	set_at<512, 1280>(result, h3_5_rd16_res);
	hw_uint<32>  h3_5_rd17_res = h3_5_rd17_select(h3_4, d0, d1, dynamic_address);
	set_at<544, 1280>(result, h3_5_rd17_res);
	hw_uint<32>  h3_5_rd18_res = h3_5_rd18_select(h3_4, d0, d1, dynamic_address);
	set_at<576, 1280>(result, h3_5_rd18_res);
	hw_uint<32>  h3_5_rd19_res = h3_5_rd19_select(h3_4, d0, d1, dynamic_address);
	set_at<608, 1280>(result, h3_5_rd19_res);
	hw_uint<32>  h3_5_rd20_res = h3_5_rd20_select(h3_4, d0, d1, dynamic_address);
	set_at<640, 1280>(result, h3_5_rd20_res);
	hw_uint<32>  h3_5_rd21_res = h3_5_rd21_select(h3_4, d0, d1, dynamic_address);
	set_at<672, 1280>(result, h3_5_rd21_res);
	hw_uint<32>  h3_5_rd22_res = h3_5_rd22_select(h3_4, d0, d1, dynamic_address);
	set_at<704, 1280>(result, h3_5_rd22_res);
	hw_uint<32>  h3_5_rd23_res = h3_5_rd23_select(h3_4, d0, d1, dynamic_address);
	set_at<736, 1280>(result, h3_5_rd23_res);
	hw_uint<32>  h3_5_rd24_res = h3_5_rd24_select(h3_4, d0, d1, dynamic_address);
	set_at<768, 1280>(result, h3_5_rd24_res);
	hw_uint<32>  h3_5_rd25_res = h3_5_rd25_select(h3_4, d0, d1, dynamic_address);
	set_at<800, 1280>(result, h3_5_rd25_res);
	hw_uint<32>  h3_5_rd26_res = h3_5_rd26_select(h3_4, d0, d1, dynamic_address);
	set_at<832, 1280>(result, h3_5_rd26_res);
	hw_uint<32>  h3_5_rd27_res = h3_5_rd27_select(h3_4, d0, d1, dynamic_address);
	set_at<864, 1280>(result, h3_5_rd27_res);
	hw_uint<32>  h3_5_rd28_res = h3_5_rd28_select(h3_4, d0, d1, dynamic_address);
	set_at<896, 1280>(result, h3_5_rd28_res);
	hw_uint<32>  h3_5_rd29_res = h3_5_rd29_select(h3_4, d0, d1, dynamic_address);
	set_at<928, 1280>(result, h3_5_rd29_res);
	hw_uint<32>  h3_5_rd30_res = h3_5_rd30_select(h3_4, d0, d1, dynamic_address);
	set_at<960, 1280>(result, h3_5_rd30_res);
	hw_uint<32>  h3_5_rd31_res = h3_5_rd31_select(h3_4, d0, d1, dynamic_address);
	set_at<992, 1280>(result, h3_5_rd31_res);
	hw_uint<32>  h3_5_rd32_res = h3_5_rd32_select(h3_4, d0, d1, dynamic_address);
	set_at<1024, 1280>(result, h3_5_rd32_res);
	hw_uint<32>  h3_5_rd33_res = h3_5_rd33_select(h3_4, d0, d1, dynamic_address);
	set_at<1056, 1280>(result, h3_5_rd33_res);
	hw_uint<32>  h3_5_rd34_res = h3_5_rd34_select(h3_4, d0, d1, dynamic_address);
	set_at<1088, 1280>(result, h3_5_rd34_res);
	hw_uint<32>  h3_5_rd35_res = h3_5_rd35_select(h3_4, d0, d1, dynamic_address);
	set_at<1120, 1280>(result, h3_5_rd35_res);
	hw_uint<32>  h3_5_rd36_res = h3_5_rd36_select(h3_4, d0, d1, dynamic_address);
	set_at<1152, 1280>(result, h3_5_rd36_res);
	hw_uint<32>  h3_5_rd37_res = h3_5_rd37_select(h3_4, d0, d1, dynamic_address);
	set_at<1184, 1280>(result, h3_5_rd37_res);
	hw_uint<32>  h3_5_rd38_res = h3_5_rd38_select(h3_4, d0, d1, dynamic_address);
	set_at<1216, 1280>(result, h3_5_rd38_res);
	hw_uint<32>  h3_5_rd39_res = h3_5_rd39_select(h3_4, d0, d1, dynamic_address);
	set_at<1248, 1280>(result, h3_5_rd39_res);
	return result;
}

struct h3_5_h3_5_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-24, 1048], [-4, 1026]}
	// Capacity: 274
	// # of read delays: 5
  // 0, 1, 136, 137, 273
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 134> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 135> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_135() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_136() {
		return f4;
	}

	inline hw_uint<32>  peek_137() {
		return f6;
	}

	inline hw_uint<32>  peek_272() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_273() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 135
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 135 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 134
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 134 reading from capacity: 1
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
	// RAM Box: {[-23, 1041], [-4, 1027]}
	// Capacity: 274
	// # of read delays: 4
  // 0, 1, 137, 273
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 135> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 135> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_137() {
		return f4;
	}

	inline hw_uint<32>  peek_272() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_273() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 135
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 135 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 135
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 135 reading from capacity: 1
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
	// RAM Box: {[-22, 1042], [-4, 1027]}
	// Capacity: 274
	// # of read delays: 4
  // 0, 1, 137, 273
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 135> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 135> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_137() {
		return f4;
	}

	inline hw_uint<32>  peek_272() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_273() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 135
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 135 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 135
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 135 reading from capacity: 1
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
	// RAM Box: {[-21, 1043], [-4, 1027]}
	// Capacity: 274
	// # of read delays: 4
  // 0, 1, 137, 273
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 135> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 135> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_137() {
		return f4;
	}

	inline hw_uint<32>  peek_272() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_273() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 135
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 135 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 135
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 135 reading from capacity: 1
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
	// RAM Box: {[-20, 1044], [-4, 1027]}
	// Capacity: 274
	// # of read delays: 4
  // 0, 1, 137, 273
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 135> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 135> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_137() {
		return f4;
	}

	inline hw_uint<32>  peek_272() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_273() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 135
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 135 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 135
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 135 reading from capacity: 1
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
	// RAM Box: {[-19, 1045], [-4, 1027]}
	// Capacity: 274
	// # of read delays: 4
  // 0, 1, 137, 273
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 135> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 135> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_137() {
		return f4;
	}

	inline hw_uint<32>  peek_272() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_273() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 135
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 135 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 135
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 135 reading from capacity: 1
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
	// RAM Box: {[-18, 1046], [-4, 1027]}
	// Capacity: 274
	// # of read delays: 4
  // 0, 1, 137, 273
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 135> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 135> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_137() {
		return f4;
	}

	inline hw_uint<32>  peek_272() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_273() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 135
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 135 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 135
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 135 reading from capacity: 1
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
	// RAM Box: {[-25, 1047], [-3, 1027]}
	// Capacity: 274
	// # of read delays: 5
  // 0, 1, 137, 138, 273
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 135> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 134> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_137() {
		return f4;
	}

	inline hw_uint<32>  peek_138() {
		return f6;
	}

	inline hw_uint<32>  peek_272() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_273() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 134
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 134 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 135
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 135 reading from capacity: 1
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
  // # of banks: 8
  h3_5_h3_5_update_0_write0_merged_banks_5_cache h3_5_h3_5_update_0_write0_merged_banks_5;
  h3_5_h3_5_update_0_write1_merged_banks_5_cache h3_5_h3_5_update_0_write1_merged_banks_5;
  h3_5_h3_5_update_0_write2_merged_banks_5_cache h3_5_h3_5_update_0_write2_merged_banks_5;
  h3_5_h3_5_update_0_write3_merged_banks_5_cache h3_5_h3_5_update_0_write3_merged_banks_5;
  h3_5_h3_5_update_0_write4_merged_banks_5_cache h3_5_h3_5_update_0_write4_merged_banks_5;
  h3_5_h3_5_update_0_write5_merged_banks_5_cache h3_5_h3_5_update_0_write5_merged_banks_5;
  h3_5_h3_5_update_0_write6_merged_banks_5_cache h3_5_h3_5_update_0_write6_merged_banks_5;
  h3_5_h3_5_update_0_write7_merged_banks_5_cache h3_5_h3_5_update_0_write7_merged_banks_5;
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

inline hw_uint<32>  h3_6_rd0_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd0 read pattern: { h3_6_update_0[d0, d1] -> h3_5[-1 + 8d0, d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write7 = h3_5.h3_5_h3_5_update_0_write7_merged_banks_5.peek_138();
  return value_h3_5_h3_5_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_6_rd1_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd1 read pattern: { h3_6_update_0[d0, d1] -> h3_5[8d0, -1 + d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.peek_273();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd10_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd10 read pattern: { h3_6_update_0[d0, d1] -> h3_5[1 + 8d0, d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_5.peek_137();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd11_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd11 read pattern: { h3_6_update_0[d0, d1] -> h3_5[2 + 8d0, -1 + d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_5.peek_273();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_6_rd12_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd12 read pattern: { h3_6_update_0[d0, d1] -> h3_5[2 + 8d0, d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_5.peek_137();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_6_rd13_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd13 read pattern: { h3_6_update_0[d0, d1] -> h3_5[2 + 8d0, 1 + d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_6_rd14_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd14 read pattern: { h3_6_update_0[d0, d1] -> h3_5[3 + 8d0, d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_5.peek_137();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd15_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd15 read pattern: { h3_6_update_0[d0, d1] -> h3_5[2 + 8d0, d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_5.peek_137();
  return value_h3_5_h3_5_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_6_rd16_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd16 read pattern: { h3_6_update_0[d0, d1] -> h3_5[3 + 8d0, -1 + d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_5.peek_273();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd17_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd17 read pattern: { h3_6_update_0[d0, d1] -> h3_5[3 + 8d0, d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_5.peek_137();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd18_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd18 read pattern: { h3_6_update_0[d0, d1] -> h3_5[3 + 8d0, 1 + d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd19_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd19 read pattern: { h3_6_update_0[d0, d1] -> h3_5[4 + 8d0, d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write4 = h3_5.h3_5_h3_5_update_0_write4_merged_banks_5.peek_137();
  return value_h3_5_h3_5_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_6_rd2_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd2 read pattern: { h3_6_update_0[d0, d1] -> h3_5[8d0, d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.peek_137();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd20_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd20 read pattern: { h3_6_update_0[d0, d1] -> h3_5[3 + 8d0, d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write3 = h3_5.h3_5_h3_5_update_0_write3_merged_banks_5.peek_137();
  return value_h3_5_h3_5_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_6_rd21_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd21 read pattern: { h3_6_update_0[d0, d1] -> h3_5[4 + 8d0, -1 + d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write4 = h3_5.h3_5_h3_5_update_0_write4_merged_banks_5.peek_273();
  return value_h3_5_h3_5_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_6_rd22_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd22 read pattern: { h3_6_update_0[d0, d1] -> h3_5[4 + 8d0, d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write4 = h3_5.h3_5_h3_5_update_0_write4_merged_banks_5.peek_137();
  return value_h3_5_h3_5_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_6_rd23_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd23 read pattern: { h3_6_update_0[d0, d1] -> h3_5[4 + 8d0, 1 + d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write4 = h3_5.h3_5_h3_5_update_0_write4_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_6_rd24_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd24 read pattern: { h3_6_update_0[d0, d1] -> h3_5[5 + 8d0, d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write5 = h3_5.h3_5_h3_5_update_0_write5_merged_banks_5.peek_137();
  return value_h3_5_h3_5_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_6_rd25_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd25 read pattern: { h3_6_update_0[d0, d1] -> h3_5[4 + 8d0, d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write4 = h3_5.h3_5_h3_5_update_0_write4_merged_banks_5.peek_137();
  return value_h3_5_h3_5_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_6_rd26_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd26 read pattern: { h3_6_update_0[d0, d1] -> h3_5[5 + 8d0, -1 + d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write5 = h3_5.h3_5_h3_5_update_0_write5_merged_banks_5.peek_273();
  return value_h3_5_h3_5_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_6_rd27_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd27 read pattern: { h3_6_update_0[d0, d1] -> h3_5[5 + 8d0, d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write5 = h3_5.h3_5_h3_5_update_0_write5_merged_banks_5.peek_137();
  return value_h3_5_h3_5_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_6_rd28_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd28 read pattern: { h3_6_update_0[d0, d1] -> h3_5[5 + 8d0, 1 + d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write5 = h3_5.h3_5_h3_5_update_0_write5_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_6_rd29_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd29 read pattern: { h3_6_update_0[d0, d1] -> h3_5[6 + 8d0, d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write6 = h3_5.h3_5_h3_5_update_0_write6_merged_banks_5.peek_137();
  return value_h3_5_h3_5_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_6_rd3_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd3 read pattern: { h3_6_update_0[d0, d1] -> h3_5[8d0, 1 + d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd30_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd30 read pattern: { h3_6_update_0[d0, d1] -> h3_5[5 + 8d0, d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write5 = h3_5.h3_5_h3_5_update_0_write5_merged_banks_5.peek_137();
  return value_h3_5_h3_5_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_6_rd31_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd31 read pattern: { h3_6_update_0[d0, d1] -> h3_5[6 + 8d0, -1 + d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write6 = h3_5.h3_5_h3_5_update_0_write6_merged_banks_5.peek_273();
  return value_h3_5_h3_5_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_6_rd32_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd32 read pattern: { h3_6_update_0[d0, d1] -> h3_5[6 + 8d0, d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write6 = h3_5.h3_5_h3_5_update_0_write6_merged_banks_5.peek_137();
  return value_h3_5_h3_5_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_6_rd33_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd33 read pattern: { h3_6_update_0[d0, d1] -> h3_5[6 + 8d0, 1 + d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write6 = h3_5.h3_5_h3_5_update_0_write6_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_6_rd34_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd34 read pattern: { h3_6_update_0[d0, d1] -> h3_5[7 + 8d0, d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write7 = h3_5.h3_5_h3_5_update_0_write7_merged_banks_5.peek_137();
  return value_h3_5_h3_5_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_6_rd35_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd35 read pattern: { h3_6_update_0[d0, d1] -> h3_5[6 + 8d0, d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write6 = h3_5.h3_5_h3_5_update_0_write6_merged_banks_5.peek_137();
  return value_h3_5_h3_5_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_6_rd36_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd36 read pattern: { h3_6_update_0[d0, d1] -> h3_5[7 + 8d0, -1 + d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write7 = h3_5.h3_5_h3_5_update_0_write7_merged_banks_5.peek_273();
  return value_h3_5_h3_5_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_6_rd37_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd37 read pattern: { h3_6_update_0[d0, d1] -> h3_5[7 + 8d0, d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write7 = h3_5.h3_5_h3_5_update_0_write7_merged_banks_5.peek_137();
  return value_h3_5_h3_5_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_6_rd38_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd38 read pattern: { h3_6_update_0[d0, d1] -> h3_5[7 + 8d0, 1 + d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write7 = h3_5.h3_5_h3_5_update_0_write7_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_6_rd39_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd39 read pattern: { h3_6_update_0[d0, d1] -> h3_5[8 + 8d0, d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.peek_136();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd4_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd4 read pattern: { h3_6_update_0[d0, d1] -> h3_5[1 + 8d0, d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_5.peek_137();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd5_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd5 read pattern: { h3_6_update_0[d0, d1] -> h3_5[8d0, d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write0 = h3_5.h3_5_h3_5_update_0_write0_merged_banks_5.peek_137();
  return value_h3_5_h3_5_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_6_rd6_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd6 read pattern: { h3_6_update_0[d0, d1] -> h3_5[1 + 8d0, -1 + d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_5.peek_273();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd7_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd7 read pattern: { h3_6_update_0[d0, d1] -> h3_5[1 + 8d0, d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_5.peek_137();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd8_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd8 read pattern: { h3_6_update_0[d0, d1] -> h3_5[1 + 8d0, 1 + d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write1 = h3_5.h3_5_h3_5_update_0_write1_merged_banks_5.peek_1();
  return value_h3_5_h3_5_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_6_rd9_select(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_6_rd9 read pattern: { h3_6_update_0[d0, d1] -> h3_5[2 + 8d0, d1] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Read schedule : { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  // Write schedule: { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
  auto value_h3_5_h3_5_update_0_write2 = h3_5.h3_5_h3_5_update_0_write2_merged_banks_5.peek_137();
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
inline void h3_5_h3_5_update_0_write_bundle_write(hw_uint<256>& h3_5_update_0_write, h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
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
inline hw_uint<1280> h3_5_h3_6_update_0_read_bundle_read(h3_5_cache& h3_5, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 40
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

	hw_uint<1280> result;
	hw_uint<32>  h3_6_rd0_res = h3_6_rd0_select(h3_5, d0, d1, dynamic_address);
	set_at<0, 1280>(result, h3_6_rd0_res);
	hw_uint<32>  h3_6_rd1_res = h3_6_rd1_select(h3_5, d0, d1, dynamic_address);
	set_at<32, 1280>(result, h3_6_rd1_res);
	hw_uint<32>  h3_6_rd2_res = h3_6_rd2_select(h3_5, d0, d1, dynamic_address);
	set_at<64, 1280>(result, h3_6_rd2_res);
	hw_uint<32>  h3_6_rd3_res = h3_6_rd3_select(h3_5, d0, d1, dynamic_address);
	set_at<96, 1280>(result, h3_6_rd3_res);
	hw_uint<32>  h3_6_rd4_res = h3_6_rd4_select(h3_5, d0, d1, dynamic_address);
	set_at<128, 1280>(result, h3_6_rd4_res);
	hw_uint<32>  h3_6_rd5_res = h3_6_rd5_select(h3_5, d0, d1, dynamic_address);
	set_at<160, 1280>(result, h3_6_rd5_res);
	hw_uint<32>  h3_6_rd6_res = h3_6_rd6_select(h3_5, d0, d1, dynamic_address);
	set_at<192, 1280>(result, h3_6_rd6_res);
	hw_uint<32>  h3_6_rd7_res = h3_6_rd7_select(h3_5, d0, d1, dynamic_address);
	set_at<224, 1280>(result, h3_6_rd7_res);
	hw_uint<32>  h3_6_rd8_res = h3_6_rd8_select(h3_5, d0, d1, dynamic_address);
	set_at<256, 1280>(result, h3_6_rd8_res);
	hw_uint<32>  h3_6_rd9_res = h3_6_rd9_select(h3_5, d0, d1, dynamic_address);
	set_at<288, 1280>(result, h3_6_rd9_res);
	hw_uint<32>  h3_6_rd10_res = h3_6_rd10_select(h3_5, d0, d1, dynamic_address);
	set_at<320, 1280>(result, h3_6_rd10_res);
	hw_uint<32>  h3_6_rd11_res = h3_6_rd11_select(h3_5, d0, d1, dynamic_address);
	set_at<352, 1280>(result, h3_6_rd11_res);
	hw_uint<32>  h3_6_rd12_res = h3_6_rd12_select(h3_5, d0, d1, dynamic_address);
	set_at<384, 1280>(result, h3_6_rd12_res);
	hw_uint<32>  h3_6_rd13_res = h3_6_rd13_select(h3_5, d0, d1, dynamic_address);
	set_at<416, 1280>(result, h3_6_rd13_res);
	hw_uint<32>  h3_6_rd14_res = h3_6_rd14_select(h3_5, d0, d1, dynamic_address);
	set_at<448, 1280>(result, h3_6_rd14_res);
	hw_uint<32>  h3_6_rd15_res = h3_6_rd15_select(h3_5, d0, d1, dynamic_address);
	set_at<480, 1280>(result, h3_6_rd15_res);
	hw_uint<32>  h3_6_rd16_res = h3_6_rd16_select(h3_5, d0, d1, dynamic_address);
	set_at<512, 1280>(result, h3_6_rd16_res);
	hw_uint<32>  h3_6_rd17_res = h3_6_rd17_select(h3_5, d0, d1, dynamic_address);
	set_at<544, 1280>(result, h3_6_rd17_res);
	hw_uint<32>  h3_6_rd18_res = h3_6_rd18_select(h3_5, d0, d1, dynamic_address);
	set_at<576, 1280>(result, h3_6_rd18_res);
	hw_uint<32>  h3_6_rd19_res = h3_6_rd19_select(h3_5, d0, d1, dynamic_address);
	set_at<608, 1280>(result, h3_6_rd19_res);
	hw_uint<32>  h3_6_rd20_res = h3_6_rd20_select(h3_5, d0, d1, dynamic_address);
	set_at<640, 1280>(result, h3_6_rd20_res);
	hw_uint<32>  h3_6_rd21_res = h3_6_rd21_select(h3_5, d0, d1, dynamic_address);
	set_at<672, 1280>(result, h3_6_rd21_res);
	hw_uint<32>  h3_6_rd22_res = h3_6_rd22_select(h3_5, d0, d1, dynamic_address);
	set_at<704, 1280>(result, h3_6_rd22_res);
	hw_uint<32>  h3_6_rd23_res = h3_6_rd23_select(h3_5, d0, d1, dynamic_address);
	set_at<736, 1280>(result, h3_6_rd23_res);
	hw_uint<32>  h3_6_rd24_res = h3_6_rd24_select(h3_5, d0, d1, dynamic_address);
	set_at<768, 1280>(result, h3_6_rd24_res);
	hw_uint<32>  h3_6_rd25_res = h3_6_rd25_select(h3_5, d0, d1, dynamic_address);
	set_at<800, 1280>(result, h3_6_rd25_res);
	hw_uint<32>  h3_6_rd26_res = h3_6_rd26_select(h3_5, d0, d1, dynamic_address);
	set_at<832, 1280>(result, h3_6_rd26_res);
	hw_uint<32>  h3_6_rd27_res = h3_6_rd27_select(h3_5, d0, d1, dynamic_address);
	set_at<864, 1280>(result, h3_6_rd27_res);
	hw_uint<32>  h3_6_rd28_res = h3_6_rd28_select(h3_5, d0, d1, dynamic_address);
	set_at<896, 1280>(result, h3_6_rd28_res);
	hw_uint<32>  h3_6_rd29_res = h3_6_rd29_select(h3_5, d0, d1, dynamic_address);
	set_at<928, 1280>(result, h3_6_rd29_res);
	hw_uint<32>  h3_6_rd30_res = h3_6_rd30_select(h3_5, d0, d1, dynamic_address);
	set_at<960, 1280>(result, h3_6_rd30_res);
	hw_uint<32>  h3_6_rd31_res = h3_6_rd31_select(h3_5, d0, d1, dynamic_address);
	set_at<992, 1280>(result, h3_6_rd31_res);
	hw_uint<32>  h3_6_rd32_res = h3_6_rd32_select(h3_5, d0, d1, dynamic_address);
	set_at<1024, 1280>(result, h3_6_rd32_res);
	hw_uint<32>  h3_6_rd33_res = h3_6_rd33_select(h3_5, d0, d1, dynamic_address);
	set_at<1056, 1280>(result, h3_6_rd33_res);
	hw_uint<32>  h3_6_rd34_res = h3_6_rd34_select(h3_5, d0, d1, dynamic_address);
	set_at<1088, 1280>(result, h3_6_rd34_res);
	hw_uint<32>  h3_6_rd35_res = h3_6_rd35_select(h3_5, d0, d1, dynamic_address);
	set_at<1120, 1280>(result, h3_6_rd35_res);
	hw_uint<32>  h3_6_rd36_res = h3_6_rd36_select(h3_5, d0, d1, dynamic_address);
	set_at<1152, 1280>(result, h3_6_rd36_res);
	hw_uint<32>  h3_6_rd37_res = h3_6_rd37_select(h3_5, d0, d1, dynamic_address);
	set_at<1184, 1280>(result, h3_6_rd37_res);
	hw_uint<32>  h3_6_rd38_res = h3_6_rd38_select(h3_5, d0, d1, dynamic_address);
	set_at<1216, 1280>(result, h3_6_rd38_res);
	hw_uint<32>  h3_6_rd39_res = h3_6_rd39_select(h3_5, d0, d1, dynamic_address);
	set_at<1248, 1280>(result, h3_6_rd39_res);
	return result;
}

struct h3_6_h3_6_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-16, 1040], [-3, 1025]}
	// Capacity: 270
	// # of read delays: 5
  // 0, 1, 134, 135, 269
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 132> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 133> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_133() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_134() {
		return f4;
	}

	inline hw_uint<32>  peek_135() {
		return f6;
	}

	inline hw_uint<32>  peek_268() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_269() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 133
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 133 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 132
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 132 reading from capacity: 1
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
	// RAM Box: {[-15, 1033], [-3, 1026]}
	// Capacity: 270
	// # of read delays: 4
  // 0, 1, 135, 269
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 133> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 133> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_135() {
		return f4;
	}

	inline hw_uint<32>  peek_268() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_269() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 133
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 133 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 133
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 133 reading from capacity: 1
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
	// RAM Box: {[-14, 1034], [-3, 1026]}
	// Capacity: 270
	// # of read delays: 4
  // 0, 1, 135, 269
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 133> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 133> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_135() {
		return f4;
	}

	inline hw_uint<32>  peek_268() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_269() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 133
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 133 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 133
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 133 reading from capacity: 1
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
	// RAM Box: {[-13, 1035], [-3, 1026]}
	// Capacity: 270
	// # of read delays: 4
  // 0, 1, 135, 269
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 133> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 133> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_135() {
		return f4;
	}

	inline hw_uint<32>  peek_268() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_269() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 133
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 133 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 133
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 133 reading from capacity: 1
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
	// RAM Box: {[-12, 1036], [-3, 1026]}
	// Capacity: 270
	// # of read delays: 4
  // 0, 1, 135, 269
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 133> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 133> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_135() {
		return f4;
	}

	inline hw_uint<32>  peek_268() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_269() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 133
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 133 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 133
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 133 reading from capacity: 1
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
	// RAM Box: {[-11, 1037], [-3, 1026]}
	// Capacity: 270
	// # of read delays: 4
  // 0, 1, 135, 269
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 133> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 133> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_135() {
		return f4;
	}

	inline hw_uint<32>  peek_268() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_269() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 133
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 133 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 133
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 133 reading from capacity: 1
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
	// RAM Box: {[-10, 1038], [-3, 1026]}
	// Capacity: 270
	// # of read delays: 4
  // 0, 1, 135, 269
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 133> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 133> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_135() {
		return f4;
	}

	inline hw_uint<32>  peek_268() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_269() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 133
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 133 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 133
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 133 reading from capacity: 1
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
	// RAM Box: {[-17, 1039], [-2, 1026]}
	// Capacity: 270
	// # of read delays: 5
  // 0, 1, 135, 136, 269
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 133> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 132> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_135() {
		return f4;
	}

	inline hw_uint<32>  peek_136() {
		return f6;
	}

	inline hw_uint<32>  peek_268() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_269() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 132
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 132 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 133
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 133 reading from capacity: 1
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
  // # of banks: 8
  h3_6_h3_6_update_0_write0_merged_banks_5_cache h3_6_h3_6_update_0_write0_merged_banks_5;
  h3_6_h3_6_update_0_write1_merged_banks_5_cache h3_6_h3_6_update_0_write1_merged_banks_5;
  h3_6_h3_6_update_0_write2_merged_banks_5_cache h3_6_h3_6_update_0_write2_merged_banks_5;
  h3_6_h3_6_update_0_write3_merged_banks_5_cache h3_6_h3_6_update_0_write3_merged_banks_5;
  h3_6_h3_6_update_0_write4_merged_banks_5_cache h3_6_h3_6_update_0_write4_merged_banks_5;
  h3_6_h3_6_update_0_write5_merged_banks_5_cache h3_6_h3_6_update_0_write5_merged_banks_5;
  h3_6_h3_6_update_0_write6_merged_banks_5_cache h3_6_h3_6_update_0_write6_merged_banks_5;
  h3_6_h3_6_update_0_write7_merged_banks_5_cache h3_6_h3_6_update_0_write7_merged_banks_5;
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

inline hw_uint<32>  h3_7_rd0_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd0 read pattern: { h3_7_update_0[d0, d1] -> h3_6[-1 + 8d0, d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write7 = h3_6.h3_6_h3_6_update_0_write7_merged_banks_5.peek_136();
  return value_h3_6_h3_6_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_7_rd1_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd1 read pattern: { h3_7_update_0[d0, d1] -> h3_6[8d0, -1 + d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.peek_269();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd10_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd10 read pattern: { h3_7_update_0[d0, d1] -> h3_6[1 + 8d0, d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_5.peek_135();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd11_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd11 read pattern: { h3_7_update_0[d0, d1] -> h3_6[2 + 8d0, -1 + d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_5.peek_269();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_7_rd12_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd12 read pattern: { h3_7_update_0[d0, d1] -> h3_6[2 + 8d0, d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_5.peek_135();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_7_rd13_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd13 read pattern: { h3_7_update_0[d0, d1] -> h3_6[2 + 8d0, 1 + d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_7_rd14_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd14 read pattern: { h3_7_update_0[d0, d1] -> h3_6[3 + 8d0, d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_5.peek_135();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd15_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd15 read pattern: { h3_7_update_0[d0, d1] -> h3_6[2 + 8d0, d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_5.peek_135();
  return value_h3_6_h3_6_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_7_rd16_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd16 read pattern: { h3_7_update_0[d0, d1] -> h3_6[3 + 8d0, -1 + d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_5.peek_269();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd17_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd17 read pattern: { h3_7_update_0[d0, d1] -> h3_6[3 + 8d0, d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_5.peek_135();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd18_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd18 read pattern: { h3_7_update_0[d0, d1] -> h3_6[3 + 8d0, 1 + d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd19_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd19 read pattern: { h3_7_update_0[d0, d1] -> h3_6[4 + 8d0, d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write4 = h3_6.h3_6_h3_6_update_0_write4_merged_banks_5.peek_135();
  return value_h3_6_h3_6_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_7_rd2_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd2 read pattern: { h3_7_update_0[d0, d1] -> h3_6[8d0, d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.peek_135();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd20_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd20 read pattern: { h3_7_update_0[d0, d1] -> h3_6[3 + 8d0, d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write3 = h3_6.h3_6_h3_6_update_0_write3_merged_banks_5.peek_135();
  return value_h3_6_h3_6_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_7_rd21_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd21 read pattern: { h3_7_update_0[d0, d1] -> h3_6[4 + 8d0, -1 + d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write4 = h3_6.h3_6_h3_6_update_0_write4_merged_banks_5.peek_269();
  return value_h3_6_h3_6_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_7_rd22_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd22 read pattern: { h3_7_update_0[d0, d1] -> h3_6[4 + 8d0, d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write4 = h3_6.h3_6_h3_6_update_0_write4_merged_banks_5.peek_135();
  return value_h3_6_h3_6_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_7_rd23_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd23 read pattern: { h3_7_update_0[d0, d1] -> h3_6[4 + 8d0, 1 + d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write4 = h3_6.h3_6_h3_6_update_0_write4_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_7_rd24_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd24 read pattern: { h3_7_update_0[d0, d1] -> h3_6[5 + 8d0, d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write5 = h3_6.h3_6_h3_6_update_0_write5_merged_banks_5.peek_135();
  return value_h3_6_h3_6_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_7_rd25_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd25 read pattern: { h3_7_update_0[d0, d1] -> h3_6[4 + 8d0, d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write4 = h3_6.h3_6_h3_6_update_0_write4_merged_banks_5.peek_135();
  return value_h3_6_h3_6_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_7_rd26_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd26 read pattern: { h3_7_update_0[d0, d1] -> h3_6[5 + 8d0, -1 + d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write5 = h3_6.h3_6_h3_6_update_0_write5_merged_banks_5.peek_269();
  return value_h3_6_h3_6_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_7_rd27_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd27 read pattern: { h3_7_update_0[d0, d1] -> h3_6[5 + 8d0, d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write5 = h3_6.h3_6_h3_6_update_0_write5_merged_banks_5.peek_135();
  return value_h3_6_h3_6_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_7_rd28_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd28 read pattern: { h3_7_update_0[d0, d1] -> h3_6[5 + 8d0, 1 + d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write5 = h3_6.h3_6_h3_6_update_0_write5_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_7_rd29_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd29 read pattern: { h3_7_update_0[d0, d1] -> h3_6[6 + 8d0, d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write6 = h3_6.h3_6_h3_6_update_0_write6_merged_banks_5.peek_135();
  return value_h3_6_h3_6_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_7_rd3_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd3 read pattern: { h3_7_update_0[d0, d1] -> h3_6[8d0, 1 + d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd30_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd30 read pattern: { h3_7_update_0[d0, d1] -> h3_6[5 + 8d0, d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write5 = h3_6.h3_6_h3_6_update_0_write5_merged_banks_5.peek_135();
  return value_h3_6_h3_6_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_7_rd31_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd31 read pattern: { h3_7_update_0[d0, d1] -> h3_6[6 + 8d0, -1 + d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write6 = h3_6.h3_6_h3_6_update_0_write6_merged_banks_5.peek_269();
  return value_h3_6_h3_6_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_7_rd32_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd32 read pattern: { h3_7_update_0[d0, d1] -> h3_6[6 + 8d0, d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write6 = h3_6.h3_6_h3_6_update_0_write6_merged_banks_5.peek_135();
  return value_h3_6_h3_6_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_7_rd33_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd33 read pattern: { h3_7_update_0[d0, d1] -> h3_6[6 + 8d0, 1 + d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write6 = h3_6.h3_6_h3_6_update_0_write6_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_7_rd34_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd34 read pattern: { h3_7_update_0[d0, d1] -> h3_6[7 + 8d0, d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write7 = h3_6.h3_6_h3_6_update_0_write7_merged_banks_5.peek_135();
  return value_h3_6_h3_6_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_7_rd35_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd35 read pattern: { h3_7_update_0[d0, d1] -> h3_6[6 + 8d0, d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write6 = h3_6.h3_6_h3_6_update_0_write6_merged_banks_5.peek_135();
  return value_h3_6_h3_6_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_7_rd36_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd36 read pattern: { h3_7_update_0[d0, d1] -> h3_6[7 + 8d0, -1 + d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write7 = h3_6.h3_6_h3_6_update_0_write7_merged_banks_5.peek_269();
  return value_h3_6_h3_6_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_7_rd37_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd37 read pattern: { h3_7_update_0[d0, d1] -> h3_6[7 + 8d0, d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write7 = h3_6.h3_6_h3_6_update_0_write7_merged_banks_5.peek_135();
  return value_h3_6_h3_6_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_7_rd38_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd38 read pattern: { h3_7_update_0[d0, d1] -> h3_6[7 + 8d0, 1 + d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write7 = h3_6.h3_6_h3_6_update_0_write7_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_7_rd39_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd39 read pattern: { h3_7_update_0[d0, d1] -> h3_6[8 + 8d0, d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.peek_134();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd4_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd4 read pattern: { h3_7_update_0[d0, d1] -> h3_6[1 + 8d0, d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_5.peek_135();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd5_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd5 read pattern: { h3_7_update_0[d0, d1] -> h3_6[8d0, d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write0 = h3_6.h3_6_h3_6_update_0_write0_merged_banks_5.peek_135();
  return value_h3_6_h3_6_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_7_rd6_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd6 read pattern: { h3_7_update_0[d0, d1] -> h3_6[1 + 8d0, -1 + d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_5.peek_269();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd7_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd7 read pattern: { h3_7_update_0[d0, d1] -> h3_6[1 + 8d0, d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_5.peek_135();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd8_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd8 read pattern: { h3_7_update_0[d0, d1] -> h3_6[1 + 8d0, 1 + d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write1 = h3_6.h3_6_h3_6_update_0_write1_merged_banks_5.peek_1();
  return value_h3_6_h3_6_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_7_rd9_select(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_7_rd9 read pattern: { h3_7_update_0[d0, d1] -> h3_6[2 + 8d0, d1] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Read schedule : { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  // Write schedule: { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
  auto value_h3_6_h3_6_update_0_write2 = h3_6.h3_6_h3_6_update_0_write2_merged_banks_5.peek_135();
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
inline void h3_6_h3_6_update_0_write_bundle_write(hw_uint<256>& h3_6_update_0_write, h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
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
inline hw_uint<1280> h3_6_h3_7_update_0_read_bundle_read(h3_6_cache& h3_6, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 40
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

	hw_uint<1280> result;
	hw_uint<32>  h3_7_rd0_res = h3_7_rd0_select(h3_6, d0, d1, dynamic_address);
	set_at<0, 1280>(result, h3_7_rd0_res);
	hw_uint<32>  h3_7_rd1_res = h3_7_rd1_select(h3_6, d0, d1, dynamic_address);
	set_at<32, 1280>(result, h3_7_rd1_res);
	hw_uint<32>  h3_7_rd2_res = h3_7_rd2_select(h3_6, d0, d1, dynamic_address);
	set_at<64, 1280>(result, h3_7_rd2_res);
	hw_uint<32>  h3_7_rd3_res = h3_7_rd3_select(h3_6, d0, d1, dynamic_address);
	set_at<96, 1280>(result, h3_7_rd3_res);
	hw_uint<32>  h3_7_rd4_res = h3_7_rd4_select(h3_6, d0, d1, dynamic_address);
	set_at<128, 1280>(result, h3_7_rd4_res);
	hw_uint<32>  h3_7_rd5_res = h3_7_rd5_select(h3_6, d0, d1, dynamic_address);
	set_at<160, 1280>(result, h3_7_rd5_res);
	hw_uint<32>  h3_7_rd6_res = h3_7_rd6_select(h3_6, d0, d1, dynamic_address);
	set_at<192, 1280>(result, h3_7_rd6_res);
	hw_uint<32>  h3_7_rd7_res = h3_7_rd7_select(h3_6, d0, d1, dynamic_address);
	set_at<224, 1280>(result, h3_7_rd7_res);
	hw_uint<32>  h3_7_rd8_res = h3_7_rd8_select(h3_6, d0, d1, dynamic_address);
	set_at<256, 1280>(result, h3_7_rd8_res);
	hw_uint<32>  h3_7_rd9_res = h3_7_rd9_select(h3_6, d0, d1, dynamic_address);
	set_at<288, 1280>(result, h3_7_rd9_res);
	hw_uint<32>  h3_7_rd10_res = h3_7_rd10_select(h3_6, d0, d1, dynamic_address);
	set_at<320, 1280>(result, h3_7_rd10_res);
	hw_uint<32>  h3_7_rd11_res = h3_7_rd11_select(h3_6, d0, d1, dynamic_address);
	set_at<352, 1280>(result, h3_7_rd11_res);
	hw_uint<32>  h3_7_rd12_res = h3_7_rd12_select(h3_6, d0, d1, dynamic_address);
	set_at<384, 1280>(result, h3_7_rd12_res);
	hw_uint<32>  h3_7_rd13_res = h3_7_rd13_select(h3_6, d0, d1, dynamic_address);
	set_at<416, 1280>(result, h3_7_rd13_res);
	hw_uint<32>  h3_7_rd14_res = h3_7_rd14_select(h3_6, d0, d1, dynamic_address);
	set_at<448, 1280>(result, h3_7_rd14_res);
	hw_uint<32>  h3_7_rd15_res = h3_7_rd15_select(h3_6, d0, d1, dynamic_address);
	set_at<480, 1280>(result, h3_7_rd15_res);
	hw_uint<32>  h3_7_rd16_res = h3_7_rd16_select(h3_6, d0, d1, dynamic_address);
	set_at<512, 1280>(result, h3_7_rd16_res);
	hw_uint<32>  h3_7_rd17_res = h3_7_rd17_select(h3_6, d0, d1, dynamic_address);
	set_at<544, 1280>(result, h3_7_rd17_res);
	hw_uint<32>  h3_7_rd18_res = h3_7_rd18_select(h3_6, d0, d1, dynamic_address);
	set_at<576, 1280>(result, h3_7_rd18_res);
	hw_uint<32>  h3_7_rd19_res = h3_7_rd19_select(h3_6, d0, d1, dynamic_address);
	set_at<608, 1280>(result, h3_7_rd19_res);
	hw_uint<32>  h3_7_rd20_res = h3_7_rd20_select(h3_6, d0, d1, dynamic_address);
	set_at<640, 1280>(result, h3_7_rd20_res);
	hw_uint<32>  h3_7_rd21_res = h3_7_rd21_select(h3_6, d0, d1, dynamic_address);
	set_at<672, 1280>(result, h3_7_rd21_res);
	hw_uint<32>  h3_7_rd22_res = h3_7_rd22_select(h3_6, d0, d1, dynamic_address);
	set_at<704, 1280>(result, h3_7_rd22_res);
	hw_uint<32>  h3_7_rd23_res = h3_7_rd23_select(h3_6, d0, d1, dynamic_address);
	set_at<736, 1280>(result, h3_7_rd23_res);
	hw_uint<32>  h3_7_rd24_res = h3_7_rd24_select(h3_6, d0, d1, dynamic_address);
	set_at<768, 1280>(result, h3_7_rd24_res);
	hw_uint<32>  h3_7_rd25_res = h3_7_rd25_select(h3_6, d0, d1, dynamic_address);
	set_at<800, 1280>(result, h3_7_rd25_res);
	hw_uint<32>  h3_7_rd26_res = h3_7_rd26_select(h3_6, d0, d1, dynamic_address);
	set_at<832, 1280>(result, h3_7_rd26_res);
	hw_uint<32>  h3_7_rd27_res = h3_7_rd27_select(h3_6, d0, d1, dynamic_address);
	set_at<864, 1280>(result, h3_7_rd27_res);
	hw_uint<32>  h3_7_rd28_res = h3_7_rd28_select(h3_6, d0, d1, dynamic_address);
	set_at<896, 1280>(result, h3_7_rd28_res);
	hw_uint<32>  h3_7_rd29_res = h3_7_rd29_select(h3_6, d0, d1, dynamic_address);
	set_at<928, 1280>(result, h3_7_rd29_res);
	hw_uint<32>  h3_7_rd30_res = h3_7_rd30_select(h3_6, d0, d1, dynamic_address);
	set_at<960, 1280>(result, h3_7_rd30_res);
	hw_uint<32>  h3_7_rd31_res = h3_7_rd31_select(h3_6, d0, d1, dynamic_address);
	set_at<992, 1280>(result, h3_7_rd31_res);
	hw_uint<32>  h3_7_rd32_res = h3_7_rd32_select(h3_6, d0, d1, dynamic_address);
	set_at<1024, 1280>(result, h3_7_rd32_res);
	hw_uint<32>  h3_7_rd33_res = h3_7_rd33_select(h3_6, d0, d1, dynamic_address);
	set_at<1056, 1280>(result, h3_7_rd33_res);
	hw_uint<32>  h3_7_rd34_res = h3_7_rd34_select(h3_6, d0, d1, dynamic_address);
	set_at<1088, 1280>(result, h3_7_rd34_res);
	hw_uint<32>  h3_7_rd35_res = h3_7_rd35_select(h3_6, d0, d1, dynamic_address);
	set_at<1120, 1280>(result, h3_7_rd35_res);
	hw_uint<32>  h3_7_rd36_res = h3_7_rd36_select(h3_6, d0, d1, dynamic_address);
	set_at<1152, 1280>(result, h3_7_rd36_res);
	hw_uint<32>  h3_7_rd37_res = h3_7_rd37_select(h3_6, d0, d1, dynamic_address);
	set_at<1184, 1280>(result, h3_7_rd37_res);
	hw_uint<32>  h3_7_rd38_res = h3_7_rd38_select(h3_6, d0, d1, dynamic_address);
	set_at<1216, 1280>(result, h3_7_rd38_res);
	hw_uint<32>  h3_7_rd39_res = h3_7_rd39_select(h3_6, d0, d1, dynamic_address);
	set_at<1248, 1280>(result, h3_7_rd39_res);
	return result;
}

struct h3_7_h3_7_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-8, 1032], [-2, 1024]}
	// Capacity: 266
	// # of read delays: 5
  // 0, 1, 132, 133, 265
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 130> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 131> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_131() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_132() {
		return f4;
	}

	inline hw_uint<32>  peek_133() {
		return f6;
	}

	inline hw_uint<32>  peek_264() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_265() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 131
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 131 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 130
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 130 reading from capacity: 1
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
	// RAM Box: {[-7, 1025], [-2, 1025]}
	// Capacity: 266
	// # of read delays: 4
  // 0, 1, 133, 265
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 131> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 131> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_133() {
		return f4;
	}

	inline hw_uint<32>  peek_264() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_265() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 131
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 131 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 131
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 131 reading from capacity: 1
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
	// RAM Box: {[-6, 1026], [-2, 1025]}
	// Capacity: 266
	// # of read delays: 4
  // 0, 1, 133, 265
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 131> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 131> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_133() {
		return f4;
	}

	inline hw_uint<32>  peek_264() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_265() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 131
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 131 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 131
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 131 reading from capacity: 1
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
	// RAM Box: {[-5, 1027], [-2, 1025]}
	// Capacity: 266
	// # of read delays: 4
  // 0, 1, 133, 265
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 131> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 131> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_133() {
		return f4;
	}

	inline hw_uint<32>  peek_264() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_265() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 131
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 131 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 131
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 131 reading from capacity: 1
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
	// RAM Box: {[-4, 1028], [-2, 1025]}
	// Capacity: 266
	// # of read delays: 4
  // 0, 1, 133, 265
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 131> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 131> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_133() {
		return f4;
	}

	inline hw_uint<32>  peek_264() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_265() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 131
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 131 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 131
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 131 reading from capacity: 1
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
	// RAM Box: {[-3, 1029], [-2, 1025]}
	// Capacity: 266
	// # of read delays: 4
  // 0, 1, 133, 265
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 131> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 131> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_133() {
		return f4;
	}

	inline hw_uint<32>  peek_264() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_265() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 131
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 131 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 131
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 131 reading from capacity: 1
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
	// RAM Box: {[-2, 1030], [-2, 1025]}
	// Capacity: 266
	// # of read delays: 4
  // 0, 1, 133, 265
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 131> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 131> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_133() {
		return f4;
	}

	inline hw_uint<32>  peek_264() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_265() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 131
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 131 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 131
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 131 reading from capacity: 1
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
	// RAM Box: {[-9, 1031], [-1, 1025]}
	// Capacity: 266
	// # of read delays: 5
  // 0, 1, 133, 134, 265
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 131> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 130> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_133() {
		return f4;
	}

	inline hw_uint<32>  peek_134() {
		return f6;
	}

	inline hw_uint<32>  peek_264() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_265() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 130
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 130 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 131
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 131 reading from capacity: 1
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
  // # of banks: 8
  h3_7_h3_7_update_0_write0_merged_banks_5_cache h3_7_h3_7_update_0_write0_merged_banks_5;
  h3_7_h3_7_update_0_write1_merged_banks_5_cache h3_7_h3_7_update_0_write1_merged_banks_5;
  h3_7_h3_7_update_0_write2_merged_banks_5_cache h3_7_h3_7_update_0_write2_merged_banks_5;
  h3_7_h3_7_update_0_write3_merged_banks_5_cache h3_7_h3_7_update_0_write3_merged_banks_5;
  h3_7_h3_7_update_0_write4_merged_banks_5_cache h3_7_h3_7_update_0_write4_merged_banks_5;
  h3_7_h3_7_update_0_write5_merged_banks_5_cache h3_7_h3_7_update_0_write5_merged_banks_5;
  h3_7_h3_7_update_0_write6_merged_banks_5_cache h3_7_h3_7_update_0_write6_merged_banks_5;
  h3_7_h3_7_update_0_write7_merged_banks_5_cache h3_7_h3_7_update_0_write7_merged_banks_5;
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

inline hw_uint<32>  h3_8_rd0_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd0 read pattern: { h3_8_update_0[d0, d1] -> h3_7[-1 + 8d0, d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write7 = h3_7.h3_7_h3_7_update_0_write7_merged_banks_5.peek_134();
  return value_h3_7_h3_7_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_8_rd1_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd1 read pattern: { h3_8_update_0[d0, d1] -> h3_7[8d0, -1 + d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.peek_265();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd10_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd10 read pattern: { h3_8_update_0[d0, d1] -> h3_7[1 + 8d0, d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_5.peek_133();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_8_rd11_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd11 read pattern: { h3_8_update_0[d0, d1] -> h3_7[2 + 8d0, -1 + d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write2 = h3_7.h3_7_h3_7_update_0_write2_merged_banks_5.peek_265();
  return value_h3_7_h3_7_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_8_rd12_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd12 read pattern: { h3_8_update_0[d0, d1] -> h3_7[2 + 8d0, d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write2 = h3_7.h3_7_h3_7_update_0_write2_merged_banks_5.peek_133();
  return value_h3_7_h3_7_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_8_rd13_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd13 read pattern: { h3_8_update_0[d0, d1] -> h3_7[2 + 8d0, 1 + d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write2 = h3_7.h3_7_h3_7_update_0_write2_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_8_rd14_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd14 read pattern: { h3_8_update_0[d0, d1] -> h3_7[3 + 8d0, d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write3 = h3_7.h3_7_h3_7_update_0_write3_merged_banks_5.peek_133();
  return value_h3_7_h3_7_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_8_rd15_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd15 read pattern: { h3_8_update_0[d0, d1] -> h3_7[2 + 8d0, d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write2 = h3_7.h3_7_h3_7_update_0_write2_merged_banks_5.peek_133();
  return value_h3_7_h3_7_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_8_rd16_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd16 read pattern: { h3_8_update_0[d0, d1] -> h3_7[3 + 8d0, -1 + d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write3 = h3_7.h3_7_h3_7_update_0_write3_merged_banks_5.peek_265();
  return value_h3_7_h3_7_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_8_rd17_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd17 read pattern: { h3_8_update_0[d0, d1] -> h3_7[3 + 8d0, d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write3 = h3_7.h3_7_h3_7_update_0_write3_merged_banks_5.peek_133();
  return value_h3_7_h3_7_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_8_rd18_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd18 read pattern: { h3_8_update_0[d0, d1] -> h3_7[3 + 8d0, 1 + d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write3 = h3_7.h3_7_h3_7_update_0_write3_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_8_rd19_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd19 read pattern: { h3_8_update_0[d0, d1] -> h3_7[4 + 8d0, d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write4 = h3_7.h3_7_h3_7_update_0_write4_merged_banks_5.peek_133();
  return value_h3_7_h3_7_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_8_rd2_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd2 read pattern: { h3_8_update_0[d0, d1] -> h3_7[8d0, d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.peek_133();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd20_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd20 read pattern: { h3_8_update_0[d0, d1] -> h3_7[3 + 8d0, d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write3 = h3_7.h3_7_h3_7_update_0_write3_merged_banks_5.peek_133();
  return value_h3_7_h3_7_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_8_rd21_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd21 read pattern: { h3_8_update_0[d0, d1] -> h3_7[4 + 8d0, -1 + d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write4 = h3_7.h3_7_h3_7_update_0_write4_merged_banks_5.peek_265();
  return value_h3_7_h3_7_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_8_rd22_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd22 read pattern: { h3_8_update_0[d0, d1] -> h3_7[4 + 8d0, d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write4 = h3_7.h3_7_h3_7_update_0_write4_merged_banks_5.peek_133();
  return value_h3_7_h3_7_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_8_rd23_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd23 read pattern: { h3_8_update_0[d0, d1] -> h3_7[4 + 8d0, 1 + d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write4 = h3_7.h3_7_h3_7_update_0_write4_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_8_rd24_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd24 read pattern: { h3_8_update_0[d0, d1] -> h3_7[5 + 8d0, d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write5 = h3_7.h3_7_h3_7_update_0_write5_merged_banks_5.peek_133();
  return value_h3_7_h3_7_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_8_rd25_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd25 read pattern: { h3_8_update_0[d0, d1] -> h3_7[4 + 8d0, d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write4 = h3_7.h3_7_h3_7_update_0_write4_merged_banks_5.peek_133();
  return value_h3_7_h3_7_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_8_rd26_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd26 read pattern: { h3_8_update_0[d0, d1] -> h3_7[5 + 8d0, -1 + d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write5 = h3_7.h3_7_h3_7_update_0_write5_merged_banks_5.peek_265();
  return value_h3_7_h3_7_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_8_rd27_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd27 read pattern: { h3_8_update_0[d0, d1] -> h3_7[5 + 8d0, d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write5 = h3_7.h3_7_h3_7_update_0_write5_merged_banks_5.peek_133();
  return value_h3_7_h3_7_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_8_rd28_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd28 read pattern: { h3_8_update_0[d0, d1] -> h3_7[5 + 8d0, 1 + d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write5 = h3_7.h3_7_h3_7_update_0_write5_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_8_rd29_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd29 read pattern: { h3_8_update_0[d0, d1] -> h3_7[6 + 8d0, d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write6 = h3_7.h3_7_h3_7_update_0_write6_merged_banks_5.peek_133();
  return value_h3_7_h3_7_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_8_rd3_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd3 read pattern: { h3_8_update_0[d0, d1] -> h3_7[8d0, 1 + d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd30_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd30 read pattern: { h3_8_update_0[d0, d1] -> h3_7[5 + 8d0, d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write5 = h3_7.h3_7_h3_7_update_0_write5_merged_banks_5.peek_133();
  return value_h3_7_h3_7_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_8_rd31_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd31 read pattern: { h3_8_update_0[d0, d1] -> h3_7[6 + 8d0, -1 + d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write6 = h3_7.h3_7_h3_7_update_0_write6_merged_banks_5.peek_265();
  return value_h3_7_h3_7_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_8_rd32_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd32 read pattern: { h3_8_update_0[d0, d1] -> h3_7[6 + 8d0, d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write6 = h3_7.h3_7_h3_7_update_0_write6_merged_banks_5.peek_133();
  return value_h3_7_h3_7_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_8_rd33_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd33 read pattern: { h3_8_update_0[d0, d1] -> h3_7[6 + 8d0, 1 + d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write6 = h3_7.h3_7_h3_7_update_0_write6_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_8_rd34_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd34 read pattern: { h3_8_update_0[d0, d1] -> h3_7[7 + 8d0, d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write7 = h3_7.h3_7_h3_7_update_0_write7_merged_banks_5.peek_133();
  return value_h3_7_h3_7_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_8_rd35_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd35 read pattern: { h3_8_update_0[d0, d1] -> h3_7[6 + 8d0, d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write6 = h3_7.h3_7_h3_7_update_0_write6_merged_banks_5.peek_133();
  return value_h3_7_h3_7_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_8_rd36_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd36 read pattern: { h3_8_update_0[d0, d1] -> h3_7[7 + 8d0, -1 + d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write7 = h3_7.h3_7_h3_7_update_0_write7_merged_banks_5.peek_265();
  return value_h3_7_h3_7_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_8_rd37_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd37 read pattern: { h3_8_update_0[d0, d1] -> h3_7[7 + 8d0, d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write7 = h3_7.h3_7_h3_7_update_0_write7_merged_banks_5.peek_133();
  return value_h3_7_h3_7_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_8_rd38_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd38 read pattern: { h3_8_update_0[d0, d1] -> h3_7[7 + 8d0, 1 + d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write7 = h3_7.h3_7_h3_7_update_0_write7_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_8_rd39_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd39 read pattern: { h3_8_update_0[d0, d1] -> h3_7[8 + 8d0, d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.peek_132();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd4_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd4 read pattern: { h3_8_update_0[d0, d1] -> h3_7[1 + 8d0, d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_5.peek_133();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_8_rd5_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd5 read pattern: { h3_8_update_0[d0, d1] -> h3_7[8d0, d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write0 = h3_7.h3_7_h3_7_update_0_write0_merged_banks_5.peek_133();
  return value_h3_7_h3_7_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_8_rd6_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd6 read pattern: { h3_8_update_0[d0, d1] -> h3_7[1 + 8d0, -1 + d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_5.peek_265();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_8_rd7_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd7 read pattern: { h3_8_update_0[d0, d1] -> h3_7[1 + 8d0, d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_5.peek_133();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_8_rd8_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd8 read pattern: { h3_8_update_0[d0, d1] -> h3_7[1 + 8d0, 1 + d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write1 = h3_7.h3_7_h3_7_update_0_write1_merged_banks_5.peek_1();
  return value_h3_7_h3_7_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_8_rd9_select(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_8_rd9 read pattern: { h3_8_update_0[d0, d1] -> h3_7[2 + 8d0, d1] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Read schedule : { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  // Write schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
  auto value_h3_7_h3_7_update_0_write2 = h3_7.h3_7_h3_7_update_0_write2_merged_banks_5.peek_133();
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
inline void h3_7_h3_7_update_0_write_bundle_write(hw_uint<256>& h3_7_update_0_write, h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
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
inline hw_uint<1280> h3_7_h3_8_update_0_read_bundle_read(h3_7_cache& h3_7, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 40
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

	hw_uint<1280> result;
	hw_uint<32>  h3_8_rd0_res = h3_8_rd0_select(h3_7, d0, d1, dynamic_address);
	set_at<0, 1280>(result, h3_8_rd0_res);
	hw_uint<32>  h3_8_rd1_res = h3_8_rd1_select(h3_7, d0, d1, dynamic_address);
	set_at<32, 1280>(result, h3_8_rd1_res);
	hw_uint<32>  h3_8_rd2_res = h3_8_rd2_select(h3_7, d0, d1, dynamic_address);
	set_at<64, 1280>(result, h3_8_rd2_res);
	hw_uint<32>  h3_8_rd3_res = h3_8_rd3_select(h3_7, d0, d1, dynamic_address);
	set_at<96, 1280>(result, h3_8_rd3_res);
	hw_uint<32>  h3_8_rd4_res = h3_8_rd4_select(h3_7, d0, d1, dynamic_address);
	set_at<128, 1280>(result, h3_8_rd4_res);
	hw_uint<32>  h3_8_rd5_res = h3_8_rd5_select(h3_7, d0, d1, dynamic_address);
	set_at<160, 1280>(result, h3_8_rd5_res);
	hw_uint<32>  h3_8_rd6_res = h3_8_rd6_select(h3_7, d0, d1, dynamic_address);
	set_at<192, 1280>(result, h3_8_rd6_res);
	hw_uint<32>  h3_8_rd7_res = h3_8_rd7_select(h3_7, d0, d1, dynamic_address);
	set_at<224, 1280>(result, h3_8_rd7_res);
	hw_uint<32>  h3_8_rd8_res = h3_8_rd8_select(h3_7, d0, d1, dynamic_address);
	set_at<256, 1280>(result, h3_8_rd8_res);
	hw_uint<32>  h3_8_rd9_res = h3_8_rd9_select(h3_7, d0, d1, dynamic_address);
	set_at<288, 1280>(result, h3_8_rd9_res);
	hw_uint<32>  h3_8_rd10_res = h3_8_rd10_select(h3_7, d0, d1, dynamic_address);
	set_at<320, 1280>(result, h3_8_rd10_res);
	hw_uint<32>  h3_8_rd11_res = h3_8_rd11_select(h3_7, d0, d1, dynamic_address);
	set_at<352, 1280>(result, h3_8_rd11_res);
	hw_uint<32>  h3_8_rd12_res = h3_8_rd12_select(h3_7, d0, d1, dynamic_address);
	set_at<384, 1280>(result, h3_8_rd12_res);
	hw_uint<32>  h3_8_rd13_res = h3_8_rd13_select(h3_7, d0, d1, dynamic_address);
	set_at<416, 1280>(result, h3_8_rd13_res);
	hw_uint<32>  h3_8_rd14_res = h3_8_rd14_select(h3_7, d0, d1, dynamic_address);
	set_at<448, 1280>(result, h3_8_rd14_res);
	hw_uint<32>  h3_8_rd15_res = h3_8_rd15_select(h3_7, d0, d1, dynamic_address);
	set_at<480, 1280>(result, h3_8_rd15_res);
	hw_uint<32>  h3_8_rd16_res = h3_8_rd16_select(h3_7, d0, d1, dynamic_address);
	set_at<512, 1280>(result, h3_8_rd16_res);
	hw_uint<32>  h3_8_rd17_res = h3_8_rd17_select(h3_7, d0, d1, dynamic_address);
	set_at<544, 1280>(result, h3_8_rd17_res);
	hw_uint<32>  h3_8_rd18_res = h3_8_rd18_select(h3_7, d0, d1, dynamic_address);
	set_at<576, 1280>(result, h3_8_rd18_res);
	hw_uint<32>  h3_8_rd19_res = h3_8_rd19_select(h3_7, d0, d1, dynamic_address);
	set_at<608, 1280>(result, h3_8_rd19_res);
	hw_uint<32>  h3_8_rd20_res = h3_8_rd20_select(h3_7, d0, d1, dynamic_address);
	set_at<640, 1280>(result, h3_8_rd20_res);
	hw_uint<32>  h3_8_rd21_res = h3_8_rd21_select(h3_7, d0, d1, dynamic_address);
	set_at<672, 1280>(result, h3_8_rd21_res);
	hw_uint<32>  h3_8_rd22_res = h3_8_rd22_select(h3_7, d0, d1, dynamic_address);
	set_at<704, 1280>(result, h3_8_rd22_res);
	hw_uint<32>  h3_8_rd23_res = h3_8_rd23_select(h3_7, d0, d1, dynamic_address);
	set_at<736, 1280>(result, h3_8_rd23_res);
	hw_uint<32>  h3_8_rd24_res = h3_8_rd24_select(h3_7, d0, d1, dynamic_address);
	set_at<768, 1280>(result, h3_8_rd24_res);
	hw_uint<32>  h3_8_rd25_res = h3_8_rd25_select(h3_7, d0, d1, dynamic_address);
	set_at<800, 1280>(result, h3_8_rd25_res);
	hw_uint<32>  h3_8_rd26_res = h3_8_rd26_select(h3_7, d0, d1, dynamic_address);
	set_at<832, 1280>(result, h3_8_rd26_res);
	hw_uint<32>  h3_8_rd27_res = h3_8_rd27_select(h3_7, d0, d1, dynamic_address);
	set_at<864, 1280>(result, h3_8_rd27_res);
	hw_uint<32>  h3_8_rd28_res = h3_8_rd28_select(h3_7, d0, d1, dynamic_address);
	set_at<896, 1280>(result, h3_8_rd28_res);
	hw_uint<32>  h3_8_rd29_res = h3_8_rd29_select(h3_7, d0, d1, dynamic_address);
	set_at<928, 1280>(result, h3_8_rd29_res);
	hw_uint<32>  h3_8_rd30_res = h3_8_rd30_select(h3_7, d0, d1, dynamic_address);
	set_at<960, 1280>(result, h3_8_rd30_res);
	hw_uint<32>  h3_8_rd31_res = h3_8_rd31_select(h3_7, d0, d1, dynamic_address);
	set_at<992, 1280>(result, h3_8_rd31_res);
	hw_uint<32>  h3_8_rd32_res = h3_8_rd32_select(h3_7, d0, d1, dynamic_address);
	set_at<1024, 1280>(result, h3_8_rd32_res);
	hw_uint<32>  h3_8_rd33_res = h3_8_rd33_select(h3_7, d0, d1, dynamic_address);
	set_at<1056, 1280>(result, h3_8_rd33_res);
	hw_uint<32>  h3_8_rd34_res = h3_8_rd34_select(h3_7, d0, d1, dynamic_address);
	set_at<1088, 1280>(result, h3_8_rd34_res);
	hw_uint<32>  h3_8_rd35_res = h3_8_rd35_select(h3_7, d0, d1, dynamic_address);
	set_at<1120, 1280>(result, h3_8_rd35_res);
	hw_uint<32>  h3_8_rd36_res = h3_8_rd36_select(h3_7, d0, d1, dynamic_address);
	set_at<1152, 1280>(result, h3_8_rd36_res);
	hw_uint<32>  h3_8_rd37_res = h3_8_rd37_select(h3_7, d0, d1, dynamic_address);
	set_at<1184, 1280>(result, h3_8_rd37_res);
	hw_uint<32>  h3_8_rd38_res = h3_8_rd38_select(h3_7, d0, d1, dynamic_address);
	set_at<1216, 1280>(result, h3_8_rd38_res);
	hw_uint<32>  h3_8_rd39_res = h3_8_rd39_select(h3_7, d0, d1, dynamic_address);
	set_at<1248, 1280>(result, h3_8_rd39_res);
	return result;
}

struct h3_8_h3_8_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[0, 1024], [-1, 1023]}
	// Capacity: 262
	// # of read delays: 5
  // 0, 1, 130, 131, 261
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 128> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 129> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_129() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_130() {
		return f4;
	}

	inline hw_uint<32>  peek_131() {
		return f6;
	}

	inline hw_uint<32>  peek_260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_261() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 129
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 129 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 128
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 128 reading from capacity: 1
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
	// RAM Box: {[1, 1017], [-1, 1024]}
	// Capacity: 262
	// # of read delays: 4
  // 0, 1, 131, 261
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 129> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 129> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_130() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_131() {
		return f4;
	}

	inline hw_uint<32>  peek_260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_261() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 129
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 129 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 129
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 129 reading from capacity: 1
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
	// RAM Box: {[2, 1018], [-1, 1024]}
	// Capacity: 262
	// # of read delays: 4
  // 0, 1, 131, 261
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 129> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 129> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_130() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_131() {
		return f4;
	}

	inline hw_uint<32>  peek_260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_261() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 129
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 129 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 129
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 129 reading from capacity: 1
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
	// RAM Box: {[3, 1019], [-1, 1024]}
	// Capacity: 262
	// # of read delays: 4
  // 0, 1, 131, 261
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 129> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 129> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_130() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_131() {
		return f4;
	}

	inline hw_uint<32>  peek_260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_261() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 129
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 129 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 129
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 129 reading from capacity: 1
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
	// RAM Box: {[4, 1020], [-1, 1024]}
	// Capacity: 262
	// # of read delays: 4
  // 0, 1, 131, 261
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 129> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 129> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_130() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_131() {
		return f4;
	}

	inline hw_uint<32>  peek_260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_261() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 129
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 129 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 129
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 129 reading from capacity: 1
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
	// RAM Box: {[5, 1021], [-1, 1024]}
	// Capacity: 262
	// # of read delays: 4
  // 0, 1, 131, 261
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 129> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 129> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_130() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_131() {
		return f4;
	}

	inline hw_uint<32>  peek_260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_261() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 129
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 129 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 129
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 129 reading from capacity: 1
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
	// RAM Box: {[6, 1022], [-1, 1024]}
	// Capacity: 262
	// # of read delays: 4
  // 0, 1, 131, 261
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 129> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 129> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_130() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_131() {
		return f4;
	}

	inline hw_uint<32>  peek_260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_261() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 129
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 129 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 129
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 129 reading from capacity: 1
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
	// RAM Box: {[-1, 1023], [0, 1024]}
	// Capacity: 262
	// # of read delays: 5
  // 0, 1, 131, 132, 261
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 129> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 128> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_130() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_131() {
		return f4;
	}

	inline hw_uint<32>  peek_132() {
		return f6;
	}

	inline hw_uint<32>  peek_260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_261() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 128
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 128 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 129
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 129 reading from capacity: 1
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
  // # of banks: 8
  h3_8_h3_8_update_0_write0_merged_banks_5_cache h3_8_h3_8_update_0_write0_merged_banks_5;
  h3_8_h3_8_update_0_write1_merged_banks_5_cache h3_8_h3_8_update_0_write1_merged_banks_5;
  h3_8_h3_8_update_0_write2_merged_banks_5_cache h3_8_h3_8_update_0_write2_merged_banks_5;
  h3_8_h3_8_update_0_write3_merged_banks_5_cache h3_8_h3_8_update_0_write3_merged_banks_5;
  h3_8_h3_8_update_0_write4_merged_banks_5_cache h3_8_h3_8_update_0_write4_merged_banks_5;
  h3_8_h3_8_update_0_write5_merged_banks_5_cache h3_8_h3_8_update_0_write5_merged_banks_5;
  h3_8_h3_8_update_0_write6_merged_banks_5_cache h3_8_h3_8_update_0_write6_merged_banks_5;
  h3_8_h3_8_update_0_write7_merged_banks_5_cache h3_8_h3_8_update_0_write7_merged_banks_5;
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

inline hw_uint<32>  h3_9_rd0_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd0 read pattern: { h3_9_update_0[d0, d1] -> h3_8[-1 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write7 = h3_8.h3_8_h3_8_update_0_write7_merged_banks_5.peek_132();
  return value_h3_8_h3_8_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_9_rd1_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd1 read pattern: { h3_9_update_0[d0, d1] -> h3_8[8d0, -1 + d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.peek_261();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd10_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd10 read pattern: { h3_9_update_0[d0, d1] -> h3_8[1 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_5.peek_131();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_9_rd11_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd11 read pattern: { h3_9_update_0[d0, d1] -> h3_8[2 + 8d0, -1 + d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write2 = h3_8.h3_8_h3_8_update_0_write2_merged_banks_5.peek_261();
  return value_h3_8_h3_8_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_9_rd12_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd12 read pattern: { h3_9_update_0[d0, d1] -> h3_8[2 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write2 = h3_8.h3_8_h3_8_update_0_write2_merged_banks_5.peek_131();
  return value_h3_8_h3_8_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_9_rd13_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd13 read pattern: { h3_9_update_0[d0, d1] -> h3_8[2 + 8d0, 1 + d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write2 = h3_8.h3_8_h3_8_update_0_write2_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_9_rd14_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd14 read pattern: { h3_9_update_0[d0, d1] -> h3_8[3 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write3 = h3_8.h3_8_h3_8_update_0_write3_merged_banks_5.peek_131();
  return value_h3_8_h3_8_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_9_rd15_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd15 read pattern: { h3_9_update_0[d0, d1] -> h3_8[2 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write2 = h3_8.h3_8_h3_8_update_0_write2_merged_banks_5.peek_131();
  return value_h3_8_h3_8_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_9_rd16_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd16 read pattern: { h3_9_update_0[d0, d1] -> h3_8[3 + 8d0, -1 + d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write3 = h3_8.h3_8_h3_8_update_0_write3_merged_banks_5.peek_261();
  return value_h3_8_h3_8_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_9_rd17_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd17 read pattern: { h3_9_update_0[d0, d1] -> h3_8[3 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write3 = h3_8.h3_8_h3_8_update_0_write3_merged_banks_5.peek_131();
  return value_h3_8_h3_8_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_9_rd18_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd18 read pattern: { h3_9_update_0[d0, d1] -> h3_8[3 + 8d0, 1 + d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write3 = h3_8.h3_8_h3_8_update_0_write3_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_9_rd19_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd19 read pattern: { h3_9_update_0[d0, d1] -> h3_8[4 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write4 = h3_8.h3_8_h3_8_update_0_write4_merged_banks_5.peek_131();
  return value_h3_8_h3_8_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_9_rd2_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd2 read pattern: { h3_9_update_0[d0, d1] -> h3_8[8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.peek_131();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd20_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd20 read pattern: { h3_9_update_0[d0, d1] -> h3_8[3 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write3 = h3_8.h3_8_h3_8_update_0_write3_merged_banks_5.peek_131();
  return value_h3_8_h3_8_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_9_rd21_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd21 read pattern: { h3_9_update_0[d0, d1] -> h3_8[4 + 8d0, -1 + d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write4 = h3_8.h3_8_h3_8_update_0_write4_merged_banks_5.peek_261();
  return value_h3_8_h3_8_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_9_rd22_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd22 read pattern: { h3_9_update_0[d0, d1] -> h3_8[4 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write4 = h3_8.h3_8_h3_8_update_0_write4_merged_banks_5.peek_131();
  return value_h3_8_h3_8_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_9_rd23_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd23 read pattern: { h3_9_update_0[d0, d1] -> h3_8[4 + 8d0, 1 + d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write4 = h3_8.h3_8_h3_8_update_0_write4_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_9_rd24_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd24 read pattern: { h3_9_update_0[d0, d1] -> h3_8[5 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write5 = h3_8.h3_8_h3_8_update_0_write5_merged_banks_5.peek_131();
  return value_h3_8_h3_8_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_9_rd25_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd25 read pattern: { h3_9_update_0[d0, d1] -> h3_8[4 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write4 = h3_8.h3_8_h3_8_update_0_write4_merged_banks_5.peek_131();
  return value_h3_8_h3_8_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_9_rd26_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd26 read pattern: { h3_9_update_0[d0, d1] -> h3_8[5 + 8d0, -1 + d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write5 = h3_8.h3_8_h3_8_update_0_write5_merged_banks_5.peek_261();
  return value_h3_8_h3_8_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_9_rd27_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd27 read pattern: { h3_9_update_0[d0, d1] -> h3_8[5 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write5 = h3_8.h3_8_h3_8_update_0_write5_merged_banks_5.peek_131();
  return value_h3_8_h3_8_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_9_rd28_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd28 read pattern: { h3_9_update_0[d0, d1] -> h3_8[5 + 8d0, 1 + d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write5 = h3_8.h3_8_h3_8_update_0_write5_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_9_rd29_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd29 read pattern: { h3_9_update_0[d0, d1] -> h3_8[6 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write6 = h3_8.h3_8_h3_8_update_0_write6_merged_banks_5.peek_131();
  return value_h3_8_h3_8_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_9_rd3_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd3 read pattern: { h3_9_update_0[d0, d1] -> h3_8[8d0, 1 + d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd30_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd30 read pattern: { h3_9_update_0[d0, d1] -> h3_8[5 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write5 = h3_8.h3_8_h3_8_update_0_write5_merged_banks_5.peek_131();
  return value_h3_8_h3_8_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_9_rd31_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd31 read pattern: { h3_9_update_0[d0, d1] -> h3_8[6 + 8d0, -1 + d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write6 = h3_8.h3_8_h3_8_update_0_write6_merged_banks_5.peek_261();
  return value_h3_8_h3_8_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_9_rd32_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd32 read pattern: { h3_9_update_0[d0, d1] -> h3_8[6 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write6 = h3_8.h3_8_h3_8_update_0_write6_merged_banks_5.peek_131();
  return value_h3_8_h3_8_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_9_rd33_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd33 read pattern: { h3_9_update_0[d0, d1] -> h3_8[6 + 8d0, 1 + d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write6 = h3_8.h3_8_h3_8_update_0_write6_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_9_rd34_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd34 read pattern: { h3_9_update_0[d0, d1] -> h3_8[7 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write7 = h3_8.h3_8_h3_8_update_0_write7_merged_banks_5.peek_131();
  return value_h3_8_h3_8_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_9_rd35_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd35 read pattern: { h3_9_update_0[d0, d1] -> h3_8[6 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write6 = h3_8.h3_8_h3_8_update_0_write6_merged_banks_5.peek_131();
  return value_h3_8_h3_8_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_9_rd36_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd36 read pattern: { h3_9_update_0[d0, d1] -> h3_8[7 + 8d0, -1 + d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write7 = h3_8.h3_8_h3_8_update_0_write7_merged_banks_5.peek_261();
  return value_h3_8_h3_8_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_9_rd37_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd37 read pattern: { h3_9_update_0[d0, d1] -> h3_8[7 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write7 = h3_8.h3_8_h3_8_update_0_write7_merged_banks_5.peek_131();
  return value_h3_8_h3_8_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_9_rd38_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd38 read pattern: { h3_9_update_0[d0, d1] -> h3_8[7 + 8d0, 1 + d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write7 = h3_8.h3_8_h3_8_update_0_write7_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_9_rd39_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd39 read pattern: { h3_9_update_0[d0, d1] -> h3_8[8 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.peek_130();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd4_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd4 read pattern: { h3_9_update_0[d0, d1] -> h3_8[1 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_5.peek_131();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_9_rd5_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd5 read pattern: { h3_9_update_0[d0, d1] -> h3_8[8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write0 = h3_8.h3_8_h3_8_update_0_write0_merged_banks_5.peek_131();
  return value_h3_8_h3_8_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_9_rd6_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd6 read pattern: { h3_9_update_0[d0, d1] -> h3_8[1 + 8d0, -1 + d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_5.peek_261();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_9_rd7_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd7 read pattern: { h3_9_update_0[d0, d1] -> h3_8[1 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_5.peek_131();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_9_rd8_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd8 read pattern: { h3_9_update_0[d0, d1] -> h3_8[1 + 8d0, 1 + d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write1 = h3_8.h3_8_h3_8_update_0_write1_merged_banks_5.peek_1();
  return value_h3_8_h3_8_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_9_rd9_select(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_9_rd9 read pattern: { h3_9_update_0[d0, d1] -> h3_8[2 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
  auto value_h3_8_h3_8_update_0_write2 = h3_8.h3_8_h3_8_update_0_write2_merged_banks_5.peek_131();
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
inline void h3_8_h3_8_update_0_write_bundle_write(hw_uint<256>& h3_8_update_0_write, h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
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
inline hw_uint<1280> h3_8_h3_9_update_0_read_bundle_read(h3_8_cache& h3_8, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 40
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

	hw_uint<1280> result;
	hw_uint<32>  h3_9_rd0_res = h3_9_rd0_select(h3_8, d0, d1, dynamic_address);
	set_at<0, 1280>(result, h3_9_rd0_res);
	hw_uint<32>  h3_9_rd1_res = h3_9_rd1_select(h3_8, d0, d1, dynamic_address);
	set_at<32, 1280>(result, h3_9_rd1_res);
	hw_uint<32>  h3_9_rd2_res = h3_9_rd2_select(h3_8, d0, d1, dynamic_address);
	set_at<64, 1280>(result, h3_9_rd2_res);
	hw_uint<32>  h3_9_rd3_res = h3_9_rd3_select(h3_8, d0, d1, dynamic_address);
	set_at<96, 1280>(result, h3_9_rd3_res);
	hw_uint<32>  h3_9_rd4_res = h3_9_rd4_select(h3_8, d0, d1, dynamic_address);
	set_at<128, 1280>(result, h3_9_rd4_res);
	hw_uint<32>  h3_9_rd5_res = h3_9_rd5_select(h3_8, d0, d1, dynamic_address);
	set_at<160, 1280>(result, h3_9_rd5_res);
	hw_uint<32>  h3_9_rd6_res = h3_9_rd6_select(h3_8, d0, d1, dynamic_address);
	set_at<192, 1280>(result, h3_9_rd6_res);
	hw_uint<32>  h3_9_rd7_res = h3_9_rd7_select(h3_8, d0, d1, dynamic_address);
	set_at<224, 1280>(result, h3_9_rd7_res);
	hw_uint<32>  h3_9_rd8_res = h3_9_rd8_select(h3_8, d0, d1, dynamic_address);
	set_at<256, 1280>(result, h3_9_rd8_res);
	hw_uint<32>  h3_9_rd9_res = h3_9_rd9_select(h3_8, d0, d1, dynamic_address);
	set_at<288, 1280>(result, h3_9_rd9_res);
	hw_uint<32>  h3_9_rd10_res = h3_9_rd10_select(h3_8, d0, d1, dynamic_address);
	set_at<320, 1280>(result, h3_9_rd10_res);
	hw_uint<32>  h3_9_rd11_res = h3_9_rd11_select(h3_8, d0, d1, dynamic_address);
	set_at<352, 1280>(result, h3_9_rd11_res);
	hw_uint<32>  h3_9_rd12_res = h3_9_rd12_select(h3_8, d0, d1, dynamic_address);
	set_at<384, 1280>(result, h3_9_rd12_res);
	hw_uint<32>  h3_9_rd13_res = h3_9_rd13_select(h3_8, d0, d1, dynamic_address);
	set_at<416, 1280>(result, h3_9_rd13_res);
	hw_uint<32>  h3_9_rd14_res = h3_9_rd14_select(h3_8, d0, d1, dynamic_address);
	set_at<448, 1280>(result, h3_9_rd14_res);
	hw_uint<32>  h3_9_rd15_res = h3_9_rd15_select(h3_8, d0, d1, dynamic_address);
	set_at<480, 1280>(result, h3_9_rd15_res);
	hw_uint<32>  h3_9_rd16_res = h3_9_rd16_select(h3_8, d0, d1, dynamic_address);
	set_at<512, 1280>(result, h3_9_rd16_res);
	hw_uint<32>  h3_9_rd17_res = h3_9_rd17_select(h3_8, d0, d1, dynamic_address);
	set_at<544, 1280>(result, h3_9_rd17_res);
	hw_uint<32>  h3_9_rd18_res = h3_9_rd18_select(h3_8, d0, d1, dynamic_address);
	set_at<576, 1280>(result, h3_9_rd18_res);
	hw_uint<32>  h3_9_rd19_res = h3_9_rd19_select(h3_8, d0, d1, dynamic_address);
	set_at<608, 1280>(result, h3_9_rd19_res);
	hw_uint<32>  h3_9_rd20_res = h3_9_rd20_select(h3_8, d0, d1, dynamic_address);
	set_at<640, 1280>(result, h3_9_rd20_res);
	hw_uint<32>  h3_9_rd21_res = h3_9_rd21_select(h3_8, d0, d1, dynamic_address);
	set_at<672, 1280>(result, h3_9_rd21_res);
	hw_uint<32>  h3_9_rd22_res = h3_9_rd22_select(h3_8, d0, d1, dynamic_address);
	set_at<704, 1280>(result, h3_9_rd22_res);
	hw_uint<32>  h3_9_rd23_res = h3_9_rd23_select(h3_8, d0, d1, dynamic_address);
	set_at<736, 1280>(result, h3_9_rd23_res);
	hw_uint<32>  h3_9_rd24_res = h3_9_rd24_select(h3_8, d0, d1, dynamic_address);
	set_at<768, 1280>(result, h3_9_rd24_res);
	hw_uint<32>  h3_9_rd25_res = h3_9_rd25_select(h3_8, d0, d1, dynamic_address);
	set_at<800, 1280>(result, h3_9_rd25_res);
	hw_uint<32>  h3_9_rd26_res = h3_9_rd26_select(h3_8, d0, d1, dynamic_address);
	set_at<832, 1280>(result, h3_9_rd26_res);
	hw_uint<32>  h3_9_rd27_res = h3_9_rd27_select(h3_8, d0, d1, dynamic_address);
	set_at<864, 1280>(result, h3_9_rd27_res);
	hw_uint<32>  h3_9_rd28_res = h3_9_rd28_select(h3_8, d0, d1, dynamic_address);
	set_at<896, 1280>(result, h3_9_rd28_res);
	hw_uint<32>  h3_9_rd29_res = h3_9_rd29_select(h3_8, d0, d1, dynamic_address);
	set_at<928, 1280>(result, h3_9_rd29_res);
	hw_uint<32>  h3_9_rd30_res = h3_9_rd30_select(h3_8, d0, d1, dynamic_address);
	set_at<960, 1280>(result, h3_9_rd30_res);
	hw_uint<32>  h3_9_rd31_res = h3_9_rd31_select(h3_8, d0, d1, dynamic_address);
	set_at<992, 1280>(result, h3_9_rd31_res);
	hw_uint<32>  h3_9_rd32_res = h3_9_rd32_select(h3_8, d0, d1, dynamic_address);
	set_at<1024, 1280>(result, h3_9_rd32_res);
	hw_uint<32>  h3_9_rd33_res = h3_9_rd33_select(h3_8, d0, d1, dynamic_address);
	set_at<1056, 1280>(result, h3_9_rd33_res);
	hw_uint<32>  h3_9_rd34_res = h3_9_rd34_select(h3_8, d0, d1, dynamic_address);
	set_at<1088, 1280>(result, h3_9_rd34_res);
	hw_uint<32>  h3_9_rd35_res = h3_9_rd35_select(h3_8, d0, d1, dynamic_address);
	set_at<1120, 1280>(result, h3_9_rd35_res);
	hw_uint<32>  h3_9_rd36_res = h3_9_rd36_select(h3_8, d0, d1, dynamic_address);
	set_at<1152, 1280>(result, h3_9_rd36_res);
	hw_uint<32>  h3_9_rd37_res = h3_9_rd37_select(h3_8, d0, d1, dynamic_address);
	set_at<1184, 1280>(result, h3_9_rd37_res);
	hw_uint<32>  h3_9_rd38_res = h3_9_rd38_select(h3_8, d0, d1, dynamic_address);
	set_at<1216, 1280>(result, h3_9_rd38_res);
	hw_uint<32>  h3_9_rd39_res = h3_9_rd39_select(h3_8, d0, d1, dynamic_address);
	set_at<1248, 1280>(result, h3_9_rd39_res);
	return result;
}

struct h3_9_h3_9_update_0_write0_to_h10_1_300MHz_8_rd0_cache {
	// RAM Box: {[0, 1016], [0, 1023]}
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

struct h3_9_h3_9_update_0_write1_to_h10_1_300MHz_8_rd1_cache {
	// RAM Box: {[1, 1017], [0, 1023]}
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

struct h3_9_h3_9_update_0_write2_to_h10_1_300MHz_8_rd2_cache {
	// RAM Box: {[2, 1018], [0, 1023]}
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

struct h3_9_h3_9_update_0_write3_to_h10_1_300MHz_8_rd3_cache {
	// RAM Box: {[3, 1019], [0, 1023]}
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

struct h3_9_h3_9_update_0_write4_to_h10_1_300MHz_8_rd4_cache {
	// RAM Box: {[4, 1020], [0, 1023]}
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

struct h3_9_h3_9_update_0_write5_to_h10_1_300MHz_8_rd5_cache {
	// RAM Box: {[5, 1021], [0, 1023]}
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

struct h3_9_h3_9_update_0_write6_to_h10_1_300MHz_8_rd6_cache {
	// RAM Box: {[6, 1022], [0, 1023]}
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

struct h3_9_h3_9_update_0_write7_to_h10_1_300MHz_8_rd7_cache {
	// RAM Box: {[7, 1023], [0, 1023]}
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
  // # of banks: 8
  h3_9_h3_9_update_0_write0_to_h10_1_300MHz_8_rd0_cache h3_9_h3_9_update_0_write0_to_h10_1_300MHz_8_rd0;
  h3_9_h3_9_update_0_write1_to_h10_1_300MHz_8_rd1_cache h3_9_h3_9_update_0_write1_to_h10_1_300MHz_8_rd1;
  h3_9_h3_9_update_0_write2_to_h10_1_300MHz_8_rd2_cache h3_9_h3_9_update_0_write2_to_h10_1_300MHz_8_rd2;
  h3_9_h3_9_update_0_write3_to_h10_1_300MHz_8_rd3_cache h3_9_h3_9_update_0_write3_to_h10_1_300MHz_8_rd3;
  h3_9_h3_9_update_0_write4_to_h10_1_300MHz_8_rd4_cache h3_9_h3_9_update_0_write4_to_h10_1_300MHz_8_rd4;
  h3_9_h3_9_update_0_write5_to_h10_1_300MHz_8_rd5_cache h3_9_h3_9_update_0_write5_to_h10_1_300MHz_8_rd5;
  h3_9_h3_9_update_0_write6_to_h10_1_300MHz_8_rd6_cache h3_9_h3_9_update_0_write6_to_h10_1_300MHz_8_rd6;
  h3_9_h3_9_update_0_write7_to_h10_1_300MHz_8_rd7_cache h3_9_h3_9_update_0_write7_to_h10_1_300MHz_8_rd7;
};



inline void h3_9_h3_9_update_0_write0_write(hw_uint<32> & h3_9_h3_9_update_0_write0, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write0_to_h10_1_300MHz_8_rd0.push(h3_9_h3_9_update_0_write0);
}

inline void h3_9_h3_9_update_0_write1_write(hw_uint<32> & h3_9_h3_9_update_0_write1, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write1_to_h10_1_300MHz_8_rd1.push(h3_9_h3_9_update_0_write1);
}

inline void h3_9_h3_9_update_0_write2_write(hw_uint<32> & h3_9_h3_9_update_0_write2, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write2_to_h10_1_300MHz_8_rd2.push(h3_9_h3_9_update_0_write2);
}

inline void h3_9_h3_9_update_0_write3_write(hw_uint<32> & h3_9_h3_9_update_0_write3, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write3_to_h10_1_300MHz_8_rd3.push(h3_9_h3_9_update_0_write3);
}

inline void h3_9_h3_9_update_0_write4_write(hw_uint<32> & h3_9_h3_9_update_0_write4, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write4_to_h10_1_300MHz_8_rd4.push(h3_9_h3_9_update_0_write4);
}

inline void h3_9_h3_9_update_0_write5_write(hw_uint<32> & h3_9_h3_9_update_0_write5, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write5_to_h10_1_300MHz_8_rd5.push(h3_9_h3_9_update_0_write5);
}

inline void h3_9_h3_9_update_0_write6_write(hw_uint<32> & h3_9_h3_9_update_0_write6, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write6_to_h10_1_300MHz_8_rd6.push(h3_9_h3_9_update_0_write6);
}

inline void h3_9_h3_9_update_0_write7_write(hw_uint<32> & h3_9_h3_9_update_0_write7, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  h3_9.h3_9_h3_9_update_0_write7_to_h10_1_300MHz_8_rd7.push(h3_9_h3_9_update_0_write7);
}

inline hw_uint<32>  h10_1_300MHz_8_rd0_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_1_300MHz_8_rd0 read pattern: { h10_1_300MHz_8_update_0[d0, d1] -> h3_9[8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_1_300MHz_8_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write0 = h3_9.h3_9_h3_9_update_0_write0_to_h10_1_300MHz_8_rd0.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write0;
  return 0;
}

inline hw_uint<32>  h10_1_300MHz_8_rd1_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_1_300MHz_8_rd1 read pattern: { h10_1_300MHz_8_update_0[d0, d1] -> h3_9[1 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_1_300MHz_8_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write1 = h3_9.h3_9_h3_9_update_0_write1_to_h10_1_300MHz_8_rd1.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write1;
  return 0;
}

inline hw_uint<32>  h10_1_300MHz_8_rd2_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_1_300MHz_8_rd2 read pattern: { h10_1_300MHz_8_update_0[d0, d1] -> h3_9[2 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_1_300MHz_8_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write2 = h3_9.h3_9_h3_9_update_0_write2_to_h10_1_300MHz_8_rd2.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write2;
  return 0;
}

inline hw_uint<32>  h10_1_300MHz_8_rd3_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_1_300MHz_8_rd3 read pattern: { h10_1_300MHz_8_update_0[d0, d1] -> h3_9[3 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_1_300MHz_8_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write3 = h3_9.h3_9_h3_9_update_0_write3_to_h10_1_300MHz_8_rd3.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write3;
  return 0;
}

inline hw_uint<32>  h10_1_300MHz_8_rd4_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_1_300MHz_8_rd4 read pattern: { h10_1_300MHz_8_update_0[d0, d1] -> h3_9[4 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_1_300MHz_8_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write4 = h3_9.h3_9_h3_9_update_0_write4_to_h10_1_300MHz_8_rd4.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write4;
  return 0;
}

inline hw_uint<32>  h10_1_300MHz_8_rd5_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_1_300MHz_8_rd5 read pattern: { h10_1_300MHz_8_update_0[d0, d1] -> h3_9[5 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_1_300MHz_8_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write5 = h3_9.h3_9_h3_9_update_0_write5_to_h10_1_300MHz_8_rd5.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write5;
  return 0;
}

inline hw_uint<32>  h10_1_300MHz_8_rd6_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_1_300MHz_8_rd6 read pattern: { h10_1_300MHz_8_update_0[d0, d1] -> h3_9[6 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_1_300MHz_8_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write6 = h3_9.h3_9_h3_9_update_0_write6_to_h10_1_300MHz_8_rd6.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write6;
  return 0;
}

inline hw_uint<32>  h10_1_300MHz_8_rd7_select(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h10_1_300MHz_8_rd7 read pattern: { h10_1_300MHz_8_update_0[d0, d1] -> h3_9[7 + 8d0, d1] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Read schedule : { h10_1_300MHz_8_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  // Write schedule: { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
  auto value_h3_9_h3_9_update_0_write7 = h3_9.h3_9_h3_9_update_0_write7_to_h10_1_300MHz_8_rd7.peek(/* one reader or all rams */ 0);
  return value_h3_9_h3_9_update_0_write7;
  return 0;
}

// # of bundles = 2
// h10_1_300MHz_8_update_0_read
//	h10_1_300MHz_8_rd0
//	h10_1_300MHz_8_rd1
//	h10_1_300MHz_8_rd2
//	h10_1_300MHz_8_rd3
//	h10_1_300MHz_8_rd4
//	h10_1_300MHz_8_rd5
//	h10_1_300MHz_8_rd6
//	h10_1_300MHz_8_rd7
inline hw_uint<256> h3_9_h10_1_300MHz_8_update_0_read_bundle_read(h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 8
    // h10_1_300MHz_8_rd0
    // h10_1_300MHz_8_rd1
    // h10_1_300MHz_8_rd2
    // h10_1_300MHz_8_rd3
    // h10_1_300MHz_8_rd4
    // h10_1_300MHz_8_rd5
    // h10_1_300MHz_8_rd6
    // h10_1_300MHz_8_rd7

	hw_uint<256> result;
	hw_uint<32>  h10_1_300MHz_8_rd0_res = h10_1_300MHz_8_rd0_select(h3_9, d0, d1, dynamic_address);
	set_at<0, 256>(result, h10_1_300MHz_8_rd0_res);
	hw_uint<32>  h10_1_300MHz_8_rd1_res = h10_1_300MHz_8_rd1_select(h3_9, d0, d1, dynamic_address);
	set_at<32, 256>(result, h10_1_300MHz_8_rd1_res);
	hw_uint<32>  h10_1_300MHz_8_rd2_res = h10_1_300MHz_8_rd2_select(h3_9, d0, d1, dynamic_address);
	set_at<64, 256>(result, h10_1_300MHz_8_rd2_res);
	hw_uint<32>  h10_1_300MHz_8_rd3_res = h10_1_300MHz_8_rd3_select(h3_9, d0, d1, dynamic_address);
	set_at<96, 256>(result, h10_1_300MHz_8_rd3_res);
	hw_uint<32>  h10_1_300MHz_8_rd4_res = h10_1_300MHz_8_rd4_select(h3_9, d0, d1, dynamic_address);
	set_at<128, 256>(result, h10_1_300MHz_8_rd4_res);
	hw_uint<32>  h10_1_300MHz_8_rd5_res = h10_1_300MHz_8_rd5_select(h3_9, d0, d1, dynamic_address);
	set_at<160, 256>(result, h10_1_300MHz_8_rd5_res);
	hw_uint<32>  h10_1_300MHz_8_rd6_res = h10_1_300MHz_8_rd6_select(h3_9, d0, d1, dynamic_address);
	set_at<192, 256>(result, h10_1_300MHz_8_rd6_res);
	hw_uint<32>  h10_1_300MHz_8_rd7_res = h10_1_300MHz_8_rd7_select(h3_9, d0, d1, dynamic_address);
	set_at<224, 256>(result, h10_1_300MHz_8_rd7_res);
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
inline void h3_9_h3_9_update_0_write_bundle_write(hw_uint<256>& h3_9_update_0_write, h3_9_cache& h3_9, int d0, int d1, int dynamic_address) {
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
}

struct in_cc_in_cc_update_0_write0_merged_banks_5_cache {
	// RAM Box: {[-72, 1096], [-10, 1032]}
	// Capacity: 298
	// # of read delays: 5
  // 0, 1, 148, 149, 297
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 146> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 147> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_147() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_148() {
		return f4;
	}

	inline hw_uint<32>  peek_149() {
		return f6;
	}

	inline hw_uint<32>  peek_296() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_297() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 147
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 147 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 146
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 146 reading from capacity: 1
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
	// RAM Box: {[-71, 1089], [-10, 1033]}
	// Capacity: 298
	// # of read delays: 4
  // 0, 1, 149, 297
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 147> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 147> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_149() {
		return f4;
	}

	inline hw_uint<32>  peek_296() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_297() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 147
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 147 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 147
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 147 reading from capacity: 1
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
	// RAM Box: {[-70, 1090], [-10, 1033]}
	// Capacity: 298
	// # of read delays: 4
  // 0, 1, 149, 297
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 147> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 147> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_149() {
		return f4;
	}

	inline hw_uint<32>  peek_296() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_297() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 147
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 147 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 147
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 147 reading from capacity: 1
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
	// RAM Box: {[-69, 1091], [-10, 1033]}
	// Capacity: 298
	// # of read delays: 4
  // 0, 1, 149, 297
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 147> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 147> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_149() {
		return f4;
	}

	inline hw_uint<32>  peek_296() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_297() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 147
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 147 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 147
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 147 reading from capacity: 1
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
	// RAM Box: {[-68, 1092], [-10, 1033]}
	// Capacity: 298
	// # of read delays: 4
  // 0, 1, 149, 297
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 147> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 147> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_149() {
		return f4;
	}

	inline hw_uint<32>  peek_296() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_297() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 147
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 147 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 147
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 147 reading from capacity: 1
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
	// RAM Box: {[-67, 1093], [-10, 1033]}
	// Capacity: 298
	// # of read delays: 4
  // 0, 1, 149, 297
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 147> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 147> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_149() {
		return f4;
	}

	inline hw_uint<32>  peek_296() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_297() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 147
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 147 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 147
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 147 reading from capacity: 1
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
	// RAM Box: {[-66, 1094], [-10, 1033]}
	// Capacity: 298
	// # of read delays: 4
  // 0, 1, 149, 297
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 147> f3;
	hw_uint<32>  f4;
	fifo<hw_uint<32> , 147> f5;
	hw_uint<32>  f6;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_149() {
		return f4;
	}

	inline hw_uint<32>  peek_296() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<32>  peek_297() {
		return f6;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 147
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 147 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 147
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 147 reading from capacity: 1
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
	// RAM Box: {[-73, 1095], [-9, 1033]}
	// Capacity: 298
	// # of read delays: 5
  // 0, 1, 149, 150, 297
	hw_uint<32>  f0;
	hw_uint<32>  f2;
	fifo<hw_uint<32> , 147> f3;
	hw_uint<32>  f4;
	hw_uint<32>  f6;
	fifo<hw_uint<32> , 146> f7;
	hw_uint<32>  f8;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_1() {
		return f2;
	}

	inline hw_uint<32>  peek_148() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<32>  peek_149() {
		return f4;
	}

	inline hw_uint<32>  peek_150() {
		return f6;
	}

	inline hw_uint<32>  peek_296() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<32>  peek_297() {
		return f8;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 146
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 146 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 147
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 147 reading from capacity: 1
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
  // # of banks: 8
  in_cc_in_cc_update_0_write0_merged_banks_5_cache in_cc_in_cc_update_0_write0_merged_banks_5;
  in_cc_in_cc_update_0_write1_merged_banks_5_cache in_cc_in_cc_update_0_write1_merged_banks_5;
  in_cc_in_cc_update_0_write2_merged_banks_5_cache in_cc_in_cc_update_0_write2_merged_banks_5;
  in_cc_in_cc_update_0_write3_merged_banks_5_cache in_cc_in_cc_update_0_write3_merged_banks_5;
  in_cc_in_cc_update_0_write4_merged_banks_5_cache in_cc_in_cc_update_0_write4_merged_banks_5;
  in_cc_in_cc_update_0_write5_merged_banks_5_cache in_cc_in_cc_update_0_write5_merged_banks_5;
  in_cc_in_cc_update_0_write6_merged_banks_5_cache in_cc_in_cc_update_0_write6_merged_banks_5;
  in_cc_in_cc_update_0_write7_merged_banks_5_cache in_cc_in_cc_update_0_write7_merged_banks_5;
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

inline hw_uint<32>  h3_0_rd0_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd0 read pattern: { h3_0_update_0[d0, d1] -> in_cc[-1 + 8d0, d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_5.peek_150();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd1_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd1 read pattern: { h3_0_update_0[d0, d1] -> in_cc[8d0, -1 + d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_297();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd10_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd10 read pattern: { h3_0_update_0[d0, d1] -> in_cc[1 + 8d0, d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_5.peek_149();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd11_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd11 read pattern: { h3_0_update_0[d0, d1] -> in_cc[2 + 8d0, -1 + d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_5.peek_297();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd12_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd12 read pattern: { h3_0_update_0[d0, d1] -> in_cc[2 + 8d0, d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_5.peek_149();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd13_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd13 read pattern: { h3_0_update_0[d0, d1] -> in_cc[2 + 8d0, 1 + d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd14_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd14 read pattern: { h3_0_update_0[d0, d1] -> in_cc[3 + 8d0, d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_5.peek_149();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd15_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd15 read pattern: { h3_0_update_0[d0, d1] -> in_cc[2 + 8d0, d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_5.peek_149();
  return value_in_cc_in_cc_update_0_write2;
  return 0;
}

inline hw_uint<32>  h3_0_rd16_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd16 read pattern: { h3_0_update_0[d0, d1] -> in_cc[3 + 8d0, -1 + d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_5.peek_297();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd17_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd17 read pattern: { h3_0_update_0[d0, d1] -> in_cc[3 + 8d0, d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_5.peek_149();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd18_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd18 read pattern: { h3_0_update_0[d0, d1] -> in_cc[3 + 8d0, 1 + d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd19_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd19 read pattern: { h3_0_update_0[d0, d1] -> in_cc[4 + 8d0, d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_5.peek_149();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd2_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd2 read pattern: { h3_0_update_0[d0, d1] -> in_cc[8d0, d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_149();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd20_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd20 read pattern: { h3_0_update_0[d0, d1] -> in_cc[3 + 8d0, d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write3 = in_cc.in_cc_in_cc_update_0_write3_merged_banks_5.peek_149();
  return value_in_cc_in_cc_update_0_write3;
  return 0;
}

inline hw_uint<32>  h3_0_rd21_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd21 read pattern: { h3_0_update_0[d0, d1] -> in_cc[4 + 8d0, -1 + d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_5.peek_297();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd22_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd22 read pattern: { h3_0_update_0[d0, d1] -> in_cc[4 + 8d0, d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_5.peek_149();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd23_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd23 read pattern: { h3_0_update_0[d0, d1] -> in_cc[4 + 8d0, 1 + d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd24_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd24 read pattern: { h3_0_update_0[d0, d1] -> in_cc[5 + 8d0, d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_5.peek_149();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd25_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd25 read pattern: { h3_0_update_0[d0, d1] -> in_cc[4 + 8d0, d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write4 = in_cc.in_cc_in_cc_update_0_write4_merged_banks_5.peek_149();
  return value_in_cc_in_cc_update_0_write4;
  return 0;
}

inline hw_uint<32>  h3_0_rd26_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd26 read pattern: { h3_0_update_0[d0, d1] -> in_cc[5 + 8d0, -1 + d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_5.peek_297();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd27_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd27 read pattern: { h3_0_update_0[d0, d1] -> in_cc[5 + 8d0, d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_5.peek_149();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd28_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd28 read pattern: { h3_0_update_0[d0, d1] -> in_cc[5 + 8d0, 1 + d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd29_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd29 read pattern: { h3_0_update_0[d0, d1] -> in_cc[6 + 8d0, d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_5.peek_149();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd3_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd3 read pattern: { h3_0_update_0[d0, d1] -> in_cc[8d0, 1 + d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd30_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd30 read pattern: { h3_0_update_0[d0, d1] -> in_cc[5 + 8d0, d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write5 = in_cc.in_cc_in_cc_update_0_write5_merged_banks_5.peek_149();
  return value_in_cc_in_cc_update_0_write5;
  return 0;
}

inline hw_uint<32>  h3_0_rd31_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd31 read pattern: { h3_0_update_0[d0, d1] -> in_cc[6 + 8d0, -1 + d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_5.peek_297();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd32_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd32 read pattern: { h3_0_update_0[d0, d1] -> in_cc[6 + 8d0, d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_5.peek_149();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd33_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd33 read pattern: { h3_0_update_0[d0, d1] -> in_cc[6 + 8d0, 1 + d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd34_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd34 read pattern: { h3_0_update_0[d0, d1] -> in_cc[7 + 8d0, d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_5.peek_149();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd35_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd35 read pattern: { h3_0_update_0[d0, d1] -> in_cc[6 + 8d0, d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write6 = in_cc.in_cc_in_cc_update_0_write6_merged_banks_5.peek_149();
  return value_in_cc_in_cc_update_0_write6;
  return 0;
}

inline hw_uint<32>  h3_0_rd36_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd36 read pattern: { h3_0_update_0[d0, d1] -> in_cc[7 + 8d0, -1 + d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_5.peek_297();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd37_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd37 read pattern: { h3_0_update_0[d0, d1] -> in_cc[7 + 8d0, d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_5.peek_149();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd38_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd38 read pattern: { h3_0_update_0[d0, d1] -> in_cc[7 + 8d0, 1 + d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write7 = in_cc.in_cc_in_cc_update_0_write7_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write7;
  return 0;
}

inline hw_uint<32>  h3_0_rd39_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd39 read pattern: { h3_0_update_0[d0, d1] -> in_cc[8 + 8d0, d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_148();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd4_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd4 read pattern: { h3_0_update_0[d0, d1] -> in_cc[1 + 8d0, d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_5.peek_149();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd5_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd5 read pattern: { h3_0_update_0[d0, d1] -> in_cc[8d0, d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write0 = in_cc.in_cc_in_cc_update_0_write0_merged_banks_5.peek_149();
  return value_in_cc_in_cc_update_0_write0;
  return 0;
}

inline hw_uint<32>  h3_0_rd6_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd6 read pattern: { h3_0_update_0[d0, d1] -> in_cc[1 + 8d0, -1 + d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_5.peek_297();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd7_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd7 read pattern: { h3_0_update_0[d0, d1] -> in_cc[1 + 8d0, d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_5.peek_149();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd8_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd8 read pattern: { h3_0_update_0[d0, d1] -> in_cc[1 + 8d0, 1 + d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write1 = in_cc.in_cc_in_cc_update_0_write1_merged_banks_5.peek_1();
  return value_in_cc_in_cc_update_0_write1;
  return 0;
}

inline hw_uint<32>  h3_0_rd9_select(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // h3_0_rd9 read pattern: { h3_0_update_0[d0, d1] -> in_cc[2 + 8d0, d1] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Read schedule : { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
  // Write schedule: { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
  auto value_in_cc_in_cc_update_0_write2 = in_cc.in_cc_in_cc_update_0_write2_merged_banks_5.peek_149();
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
inline hw_uint<1280> in_cc_h3_0_update_0_read_bundle_read(in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 40
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

	hw_uint<1280> result;
	hw_uint<32>  h3_0_rd0_res = h3_0_rd0_select(in_cc, d0, d1, dynamic_address);
	set_at<0, 1280>(result, h3_0_rd0_res);
	hw_uint<32>  h3_0_rd1_res = h3_0_rd1_select(in_cc, d0, d1, dynamic_address);
	set_at<32, 1280>(result, h3_0_rd1_res);
	hw_uint<32>  h3_0_rd2_res = h3_0_rd2_select(in_cc, d0, d1, dynamic_address);
	set_at<64, 1280>(result, h3_0_rd2_res);
	hw_uint<32>  h3_0_rd3_res = h3_0_rd3_select(in_cc, d0, d1, dynamic_address);
	set_at<96, 1280>(result, h3_0_rd3_res);
	hw_uint<32>  h3_0_rd4_res = h3_0_rd4_select(in_cc, d0, d1, dynamic_address);
	set_at<128, 1280>(result, h3_0_rd4_res);
	hw_uint<32>  h3_0_rd5_res = h3_0_rd5_select(in_cc, d0, d1, dynamic_address);
	set_at<160, 1280>(result, h3_0_rd5_res);
	hw_uint<32>  h3_0_rd6_res = h3_0_rd6_select(in_cc, d0, d1, dynamic_address);
	set_at<192, 1280>(result, h3_0_rd6_res);
	hw_uint<32>  h3_0_rd7_res = h3_0_rd7_select(in_cc, d0, d1, dynamic_address);
	set_at<224, 1280>(result, h3_0_rd7_res);
	hw_uint<32>  h3_0_rd8_res = h3_0_rd8_select(in_cc, d0, d1, dynamic_address);
	set_at<256, 1280>(result, h3_0_rd8_res);
	hw_uint<32>  h3_0_rd9_res = h3_0_rd9_select(in_cc, d0, d1, dynamic_address);
	set_at<288, 1280>(result, h3_0_rd9_res);
	hw_uint<32>  h3_0_rd10_res = h3_0_rd10_select(in_cc, d0, d1, dynamic_address);
	set_at<320, 1280>(result, h3_0_rd10_res);
	hw_uint<32>  h3_0_rd11_res = h3_0_rd11_select(in_cc, d0, d1, dynamic_address);
	set_at<352, 1280>(result, h3_0_rd11_res);
	hw_uint<32>  h3_0_rd12_res = h3_0_rd12_select(in_cc, d0, d1, dynamic_address);
	set_at<384, 1280>(result, h3_0_rd12_res);
	hw_uint<32>  h3_0_rd13_res = h3_0_rd13_select(in_cc, d0, d1, dynamic_address);
	set_at<416, 1280>(result, h3_0_rd13_res);
	hw_uint<32>  h3_0_rd14_res = h3_0_rd14_select(in_cc, d0, d1, dynamic_address);
	set_at<448, 1280>(result, h3_0_rd14_res);
	hw_uint<32>  h3_0_rd15_res = h3_0_rd15_select(in_cc, d0, d1, dynamic_address);
	set_at<480, 1280>(result, h3_0_rd15_res);
	hw_uint<32>  h3_0_rd16_res = h3_0_rd16_select(in_cc, d0, d1, dynamic_address);
	set_at<512, 1280>(result, h3_0_rd16_res);
	hw_uint<32>  h3_0_rd17_res = h3_0_rd17_select(in_cc, d0, d1, dynamic_address);
	set_at<544, 1280>(result, h3_0_rd17_res);
	hw_uint<32>  h3_0_rd18_res = h3_0_rd18_select(in_cc, d0, d1, dynamic_address);
	set_at<576, 1280>(result, h3_0_rd18_res);
	hw_uint<32>  h3_0_rd19_res = h3_0_rd19_select(in_cc, d0, d1, dynamic_address);
	set_at<608, 1280>(result, h3_0_rd19_res);
	hw_uint<32>  h3_0_rd20_res = h3_0_rd20_select(in_cc, d0, d1, dynamic_address);
	set_at<640, 1280>(result, h3_0_rd20_res);
	hw_uint<32>  h3_0_rd21_res = h3_0_rd21_select(in_cc, d0, d1, dynamic_address);
	set_at<672, 1280>(result, h3_0_rd21_res);
	hw_uint<32>  h3_0_rd22_res = h3_0_rd22_select(in_cc, d0, d1, dynamic_address);
	set_at<704, 1280>(result, h3_0_rd22_res);
	hw_uint<32>  h3_0_rd23_res = h3_0_rd23_select(in_cc, d0, d1, dynamic_address);
	set_at<736, 1280>(result, h3_0_rd23_res);
	hw_uint<32>  h3_0_rd24_res = h3_0_rd24_select(in_cc, d0, d1, dynamic_address);
	set_at<768, 1280>(result, h3_0_rd24_res);
	hw_uint<32>  h3_0_rd25_res = h3_0_rd25_select(in_cc, d0, d1, dynamic_address);
	set_at<800, 1280>(result, h3_0_rd25_res);
	hw_uint<32>  h3_0_rd26_res = h3_0_rd26_select(in_cc, d0, d1, dynamic_address);
	set_at<832, 1280>(result, h3_0_rd26_res);
	hw_uint<32>  h3_0_rd27_res = h3_0_rd27_select(in_cc, d0, d1, dynamic_address);
	set_at<864, 1280>(result, h3_0_rd27_res);
	hw_uint<32>  h3_0_rd28_res = h3_0_rd28_select(in_cc, d0, d1, dynamic_address);
	set_at<896, 1280>(result, h3_0_rd28_res);
	hw_uint<32>  h3_0_rd29_res = h3_0_rd29_select(in_cc, d0, d1, dynamic_address);
	set_at<928, 1280>(result, h3_0_rd29_res);
	hw_uint<32>  h3_0_rd30_res = h3_0_rd30_select(in_cc, d0, d1, dynamic_address);
	set_at<960, 1280>(result, h3_0_rd30_res);
	hw_uint<32>  h3_0_rd31_res = h3_0_rd31_select(in_cc, d0, d1, dynamic_address);
	set_at<992, 1280>(result, h3_0_rd31_res);
	hw_uint<32>  h3_0_rd32_res = h3_0_rd32_select(in_cc, d0, d1, dynamic_address);
	set_at<1024, 1280>(result, h3_0_rd32_res);
	hw_uint<32>  h3_0_rd33_res = h3_0_rd33_select(in_cc, d0, d1, dynamic_address);
	set_at<1056, 1280>(result, h3_0_rd33_res);
	hw_uint<32>  h3_0_rd34_res = h3_0_rd34_select(in_cc, d0, d1, dynamic_address);
	set_at<1088, 1280>(result, h3_0_rd34_res);
	hw_uint<32>  h3_0_rd35_res = h3_0_rd35_select(in_cc, d0, d1, dynamic_address);
	set_at<1120, 1280>(result, h3_0_rd35_res);
	hw_uint<32>  h3_0_rd36_res = h3_0_rd36_select(in_cc, d0, d1, dynamic_address);
	set_at<1152, 1280>(result, h3_0_rd36_res);
	hw_uint<32>  h3_0_rd37_res = h3_0_rd37_select(in_cc, d0, d1, dynamic_address);
	set_at<1184, 1280>(result, h3_0_rd37_res);
	hw_uint<32>  h3_0_rd38_res = h3_0_rd38_select(in_cc, d0, d1, dynamic_address);
	set_at<1216, 1280>(result, h3_0_rd38_res);
	hw_uint<32>  h3_0_rd39_res = h3_0_rd39_select(in_cc, d0, d1, dynamic_address);
	set_at<1248, 1280>(result, h3_0_rd39_res);
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
inline void in_cc_in_cc_update_0_write_bundle_write(hw_uint<256>& in_cc_update_0_write, in_cc_cache& in_cc, int d0, int d1, int dynamic_address) {
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
}

// Total re-use buffer capacity: 714240 bits


// Operation logic
inline void in_cc_update_0(HWStream<hw_uint<256> >& /* buffer_args num ports = 8 */in, in_cc_cache& in_cc, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in.read();
	auto compute_result = in_cc_generated_compute_unrolled_8(in_0_c__0_value);
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

	auto compute_result = h3_0_generated_compute_unrolled_8(in_cc_0_c__0_value);
	// Produce: h3_0
	h3_0_h3_0_update_0_write_bundle_write(/* arg names */compute_result, h3_0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_2_update_0(h3_1_cache& h3_1, h3_2_cache& h3_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_1
	auto h3_1_0_c__0_value = h3_1_h3_2_update_0_read_bundle_read(h3_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_2_generated_compute_unrolled_8(h3_1_0_c__0_value);
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

	auto compute_result = h3_4_generated_compute_unrolled_8(h3_3_0_c__0_value);
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

	auto compute_result = h3_6_generated_compute_unrolled_8(h3_5_0_c__0_value);
	// Produce: h3_6
	h3_6_h3_6_update_0_write_bundle_write(/* arg names */compute_result, h3_6, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_9_update_0(h3_8_cache& h3_8, h3_9_cache& h3_9, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_8
	auto h3_8_0_c__0_value = h3_8_h3_9_update_0_read_bundle_read(h3_8/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_9_generated_compute_unrolled_8(h3_8_0_c__0_value);
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

	auto compute_result = h3_1_generated_compute_unrolled_8(h3_0_0_c__0_value);
	// Produce: h3_1
	h3_1_h3_1_update_0_write_bundle_write(/* arg names */compute_result, h3_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h3_3_update_0(h3_2_cache& h3_2, h3_3_cache& h3_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_2
	auto h3_2_0_c__0_value = h3_2_h3_3_update_0_read_bundle_read(h3_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h3_3_generated_compute_unrolled_8(h3_2_0_c__0_value);
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

	auto compute_result = h3_5_generated_compute_unrolled_8(h3_4_0_c__0_value);
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

	auto compute_result = h3_7_generated_compute_unrolled_8(h3_6_0_c__0_value);
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

	auto compute_result = h3_8_generated_compute_unrolled_8(h3_7_0_c__0_value);
	// Produce: h3_8
	h3_8_h3_8_update_0_write_bundle_write(/* arg names */compute_result, h3_8, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void h10_1_300MHz_8_update_0(h3_9_cache& h3_9, HWStream<hw_uint<256> >& /* buffer_args num ports = 8 */h10_1_300MHz_8, int d0, int d1) {
  // Dynamic address computation

	// Consume: h3_9
	auto h3_9_0_c__0_value = h3_9_h10_1_300MHz_8_update_0_read_bundle_read(h3_9/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = h10_1_300MHz_8_generated_compute_unrolled_8(h3_9_0_c__0_value);
	// Produce: h10_1_300MHz_8
	h10_1_300MHz_8.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void h10_1_300MHz_8_opt(HWStream<hw_uint<256> >& /* get_args num ports = 8 */in, HWStream<hw_uint<256> >& /* get_args num ports = 8 */h10_1_300MHz_8) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("h10_1_300MHz_8_opt_debug.csv");
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

// schedule: { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025; in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033; h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023; h10_1_300MHz_8_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 127 and 0 <= d1 <= 1023; h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031; h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029; h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027; h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030; h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028; h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032; h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024; h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
//   { h3_7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 129 and -2 <= d1 <= 1025 }
// Condition for h3_7_update_0(((-9 + i2 == 0) && (-6 + i1 >= 0) && (137 - i1 >= 0) && (-6 + i0 >= 0) && (1033 - i0 >= 0)))
//   { in_cc_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 137 and -10 <= d1 <= 1033 }
// Condition for in_cc_update_0(((-1 + i2 == 0) && (10 + i1 >= 0) && (137 - i1 >= 0) && (10 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
// Condition for h3_9_update_0(((-11 + i2 == 0) && (-10 + i1 >= 0) && (137 - i1 >= 0) && (-10 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h10_1_300MHz_8_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 127 and 0 <= d1 <= 1023 }
// Condition for h10_1_300MHz_8_update_0(((-12 + i2 == 0) && (-10 + i1 >= 0) && (137 - i1 >= 0) && (-10 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 135 and -8 <= d1 <= 1031 }
// Condition for h3_1_update_0(((-3 + i2 == 0) && (6 + i1 >= 0) && (137 - i1 >= 0) && (6 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 133 and -6 <= d1 <= 1029 }
// Condition for h3_3_update_0(((-5 + i2 == 0) && (2 + i1 >= 0) && (137 - i1 >= 0) && (2 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 131 and -4 <= d1 <= 1027 }
// Condition for h3_5_update_0(((-7 + i2 == 0) && (-2 + i1 >= 0) && (137 - i1 >= 0) && (-2 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 134 and -7 <= d1 <= 1030 }
// Condition for h3_2_update_0(((-4 + i2 == 0) && (4 + i1 >= 0) && (137 - i1 >= 0) && (4 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 132 and -5 <= d1 <= 1028 }
// Condition for h3_4_update_0(((-6 + i2 == 0) && (i1 >= 0) && (137 - i1 >= 0) && (i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 136 and -9 <= d1 <= 1032 }
// Condition for h3_0_update_0(((-2 + i2 == 0) && (8 + i1 >= 0) && (137 - i1 >= 0) && (8 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 128 and -1 <= d1 <= 1024 }
// Condition for h3_8_update_0(((-10 + i2 == 0) && (-8 + i1 >= 0) && (137 - i1 >= 0) && (-8 + i0 >= 0) && (1033 - i0 >= 0)))
//   { h3_6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 130 and -3 <= d1 <= 1026 }
// Condition for h3_6_update_0(((-8 + i2 == 0) && (-4 + i1 >= 0) && (137 - i1 >= 0) && (-4 + i0 >= 0) && (1033 - i0 >= 0)))

  /*
  // Schedules...
    // h10_1_300MHz_8_update_0 -> [1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*12]
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
  for (int c1 = -10; c1 <= 137; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((-10 <= c1 && c1 <= 137) && ((c1 - 0) % 1 == 0) && (-10 <= c0 && c0 <= 1033) && ((c0 - 0) % 1 == 0)) {
      in_cc_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((-8 <= c1 && c1 <= 137) && ((c1 - 1) % 1 == 0) && (-8 <= c0 && c0 <= 1033) && ((c0 - 1) % 1 == 0)) {
      h3_0_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((-6 <= c1 && c1 <= 137) && ((c1 - 2) % 1 == 0) && (-6 <= c0 && c0 <= 1033) && ((c0 - 2) % 1 == 0)) {
      h3_1_update_0((c1 - 2) / 1, (c0 - 2) / 1);
    }

    if ((-4 <= c1 && c1 <= 137) && ((c1 - 3) % 1 == 0) && (-4 <= c0 && c0 <= 1033) && ((c0 - 3) % 1 == 0)) {
      h3_2_update_0((c1 - 3) / 1, (c0 - 3) / 1);
    }

    if ((-2 <= c1 && c1 <= 137) && ((c1 - 4) % 1 == 0) && (-2 <= c0 && c0 <= 1033) && ((c0 - 4) % 1 == 0)) {
      h3_3_update_0((c1 - 4) / 1, (c0 - 4) / 1);
    }

    if ((0 <= c1 && c1 <= 137) && ((c1 - 5) % 1 == 0) && (0 <= c0 && c0 <= 1033) && ((c0 - 5) % 1 == 0)) {
      h3_4_update_0((c1 - 5) / 1, (c0 - 5) / 1);
    }

    if ((2 <= c1 && c1 <= 137) && ((c1 - 6) % 1 == 0) && (2 <= c0 && c0 <= 1033) && ((c0 - 6) % 1 == 0)) {
      h3_5_update_0((c1 - 6) / 1, (c0 - 6) / 1);
    }

    if ((4 <= c1 && c1 <= 137) && ((c1 - 7) % 1 == 0) && (4 <= c0 && c0 <= 1033) && ((c0 - 7) % 1 == 0)) {
      h3_6_update_0((c1 - 7) / 1, (c0 - 7) / 1);
    }

    if ((6 <= c1 && c1 <= 137) && ((c1 - 8) % 1 == 0) && (6 <= c0 && c0 <= 1033) && ((c0 - 8) % 1 == 0)) {
      h3_7_update_0((c1 - 8) / 1, (c0 - 8) / 1);
    }

    if ((8 <= c1 && c1 <= 137) && ((c1 - 9) % 1 == 0) && (8 <= c0 && c0 <= 1033) && ((c0 - 9) % 1 == 0)) {
      h3_8_update_0((c1 - 9) / 1, (c0 - 9) / 1);
    }

    if ((10 <= c1 && c1 <= 137) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1033) && ((c0 - 10) % 1 == 0)) {
      h3_9_update_0((c1 - 10) / 1, (c0 - 10) / 1);
    }

    if ((10 <= c1 && c1 <= 137) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1033) && ((c0 - 10) % 1 == 0)) {
      h10_1_300MHz_8_update_0((c1 - 10) / 1, (c0 - 10) / 1);
    }

  }
}

  */
	  // Schedules...
	    // h10_1_300MHz_8_update_0 -> [1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*12]
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
	  for (int c1 = -10; c1 <= 137; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-10 <= c1 && c1 <= 137) && ((c1 - 0) % 1 == 0) && (-10 <= c0 && c0 <= 1033) && ((c0 - 0) % 1 == 0)) {
	      in_cc_update_0(in /* buf name */, in_cc, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((-8 <= c1 && c1 <= 137) && ((c1 - 1) % 1 == 0) && (-8 <= c0 && c0 <= 1033) && ((c0 - 1) % 1 == 0)) {
	      h3_0_update_0(in_cc /* buf name */, h3_0, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((-6 <= c1 && c1 <= 137) && ((c1 - 2) % 1 == 0) && (-6 <= c0 && c0 <= 1033) && ((c0 - 2) % 1 == 0)) {
	      h3_1_update_0(h3_0 /* buf name */, h3_1, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((-4 <= c1 && c1 <= 137) && ((c1 - 3) % 1 == 0) && (-4 <= c0 && c0 <= 1033) && ((c0 - 3) % 1 == 0)) {
	      h3_2_update_0(h3_1 /* buf name */, h3_2, (c1 - 3) / 1, (c0 - 3) / 1);
	    }
	
	    if ((-2 <= c1 && c1 <= 137) && ((c1 - 4) % 1 == 0) && (-2 <= c0 && c0 <= 1033) && ((c0 - 4) % 1 == 0)) {
	      h3_3_update_0(h3_2 /* buf name */, h3_3, (c1 - 4) / 1, (c0 - 4) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 137) && ((c1 - 5) % 1 == 0) && (0 <= c0 && c0 <= 1033) && ((c0 - 5) % 1 == 0)) {
	      h3_4_update_0(h3_3 /* buf name */, h3_4, (c1 - 5) / 1, (c0 - 5) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 137) && ((c1 - 6) % 1 == 0) && (2 <= c0 && c0 <= 1033) && ((c0 - 6) % 1 == 0)) {
	      h3_5_update_0(h3_4 /* buf name */, h3_5, (c1 - 6) / 1, (c0 - 6) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 137) && ((c1 - 7) % 1 == 0) && (4 <= c0 && c0 <= 1033) && ((c0 - 7) % 1 == 0)) {
	      h3_6_update_0(h3_5 /* buf name */, h3_6, (c1 - 7) / 1, (c0 - 7) / 1);
	    }
	
	    if ((6 <= c1 && c1 <= 137) && ((c1 - 8) % 1 == 0) && (6 <= c0 && c0 <= 1033) && ((c0 - 8) % 1 == 0)) {
	      h3_7_update_0(h3_6 /* buf name */, h3_7, (c1 - 8) / 1, (c0 - 8) / 1);
	    }
	
	    if ((8 <= c1 && c1 <= 137) && ((c1 - 9) % 1 == 0) && (8 <= c0 && c0 <= 1033) && ((c0 - 9) % 1 == 0)) {
	      h3_8_update_0(h3_7 /* buf name */, h3_8, (c1 - 9) / 1, (c0 - 9) / 1);
	    }
	
	    if ((10 <= c1 && c1 <= 137) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1033) && ((c0 - 10) % 1 == 0)) {
	      h3_9_update_0(h3_8 /* buf name */, h3_9, (c1 - 10) / 1, (c0 - 10) / 1);
	    }
	
	    if ((10 <= c1 && c1 <= 137) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1033) && ((c0 - 10) % 1 == 0)) {
	      h10_1_300MHz_8_update_0(h3_9 /* buf name */, h10_1_300MHz_8, (c1 - 10) / 1, (c0 - 10) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void h10_1_300MHz_8_opt_wrapper(HWStream<hw_uint<256> >& /* get_args num ports = 8 */in, HWStream<hw_uint<256> >& /* get_args num ports = 8 */h10_1_300MHz_8, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    h10_1_300MHz_8_opt(in, h10_1_300MHz_8);
  }
}
#ifdef __VIVADO_SYNTH__
  // { h10_1_300MHz_8_update_0[root = 0, h10_1_300MHz_8_0, h10_1_300MHz_8_1] -> h10_1_300MHz_8[0, 0] : 0 <= h10_1_300MHz_8_0 <= 127 and 0 <= h10_1_300MHz_8_1 <= 1023 }
const int h10_1_300MHz_8_update_0_write_pipe0_num_transfers = 131072;
  // { in_cc_update_0[root = 0, in_cc_0, in_cc_1] -> in[0, 0] : -10 <= in_cc_0 <= 137 and -10 <= in_cc_1 <= 1033 }
const int in_cc_update_0_read_pipe0_num_transfers = 154512;


extern "C" {

void h10_1_300MHz_8_opt_accel(hw_uint<256>* in_cc_update_0_read_pipe0, hw_uint<256>* h10_1_300MHz_8_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_cc_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = h10_1_300MHz_8_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_cc_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = h10_1_300MHz_8_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<256> > in_cc_update_0_read_pipe0_channel;
  static HWStream<hw_uint<256> > h10_1_300MHz_8_update_0_write_pipe0_channel;

  burst_read<256>(in_cc_update_0_read_pipe0, in_cc_update_0_read_pipe0_channel, in_cc_update_0_read_pipe0_num_transfers*size);

  h10_1_300MHz_8_opt_wrapper(in_cc_update_0_read_pipe0_channel, h10_1_300MHz_8_update_0_write_pipe0_channel, size);

  burst_write<256>(h10_1_300MHz_8_update_0_write_pipe0, h10_1_300MHz_8_update_0_write_pipe0_channel, h10_1_300MHz_8_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void h10_1_300MHz_8_opt_rdai(HWStream<hw_uint<256> >& in_cc_update_0_read_pipe0, HWStream<hw_uint<256> >&  h10_1_300MHz_8_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_cc_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = h10_1_300MHz_8_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  h10_1_300MHz_8_opt(in_cc_update_0_read_pipe0, h10_1_300MHz_8_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

