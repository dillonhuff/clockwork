#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: gp64x64_8_opt_compute_units.h
#include "gp64x64_8_opt_compute_units.h"

#include "hw_classes.h"

struct in_in_update_0_write0_merged_banks_6_cache {
	// RAM Box: {[0, 1048], [0, 1038]}
	// Capacity: 266
	// # of read delays: 6
  // 0, 1, 132, 133, 264, 265
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 130> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 130> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_131() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_132() {
		return f4;
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}

	inline hw_uint<16> peek_263() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_264() {
		return f8;
	}

	inline hw_uint<16> peek_265() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
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

struct in_in_update_0_write1_merged_banks_3_cache {
	// RAM Box: {[1, 1041], [0, 1038]}
	// Capacity: 266
	// # of read delays: 4
  // 0, 1, 133, 265
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 131> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 131> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_133() {
		return f4;
	}

	inline hw_uint<16> peek_264() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_265() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write2_merged_banks_6_cache {
	// RAM Box: {[2, 1042], [0, 1038]}
	// Capacity: 266
	// # of read delays: 4
  // 0, 1, 133, 265
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 131> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 131> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_133() {
		return f4;
	}

	inline hw_uint<16> peek_264() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_265() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write3_merged_banks_3_cache {
	// RAM Box: {[3, 1043], [0, 1038]}
	// Capacity: 266
	// # of read delays: 4
  // 0, 1, 133, 265
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 131> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 131> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_133() {
		return f4;
	}

	inline hw_uint<16> peek_264() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_265() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write4_merged_banks_6_cache {
	// RAM Box: {[4, 1044], [0, 1038]}
	// Capacity: 266
	// # of read delays: 4
  // 0, 1, 133, 265
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 131> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 131> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_133() {
		return f4;
	}

	inline hw_uint<16> peek_264() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_265() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write5_merged_banks_3_cache {
	// RAM Box: {[5, 1045], [0, 1038]}
	// Capacity: 266
	// # of read delays: 4
  // 0, 1, 133, 265
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 131> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 131> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_133() {
		return f4;
	}

	inline hw_uint<16> peek_264() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_265() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write6_merged_banks_6_cache {
	// RAM Box: {[6, 1046], [0, 1038]}
	// Capacity: 266
	// # of read delays: 4
  // 0, 1, 133, 265
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 131> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 131> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_133() {
		return f4;
	}

	inline hw_uint<16> peek_264() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_265() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write7_merged_banks_3_cache {
	// RAM Box: {[7, 1047], [0, 1038]}
	// Capacity: 266
	// # of read delays: 4
  // 0, 1, 133, 265
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 131> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 131> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_133() {
		return f4;
	}

	inline hw_uint<16> peek_264() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_265() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_cache {
  // # of banks: 8
  in_in_update_0_write0_merged_banks_6_cache in_in_update_0_write0_merged_banks_6;
  in_in_update_0_write1_merged_banks_3_cache in_in_update_0_write1_merged_banks_3;
  in_in_update_0_write2_merged_banks_6_cache in_in_update_0_write2_merged_banks_6;
  in_in_update_0_write3_merged_banks_3_cache in_in_update_0_write3_merged_banks_3;
  in_in_update_0_write4_merged_banks_6_cache in_in_update_0_write4_merged_banks_6;
  in_in_update_0_write5_merged_banks_3_cache in_in_update_0_write5_merged_banks_3;
  in_in_update_0_write6_merged_banks_6_cache in_in_update_0_write6_merged_banks_6;
  in_in_update_0_write7_merged_banks_3_cache in_in_update_0_write7_merged_banks_3;
};



inline void in_in_update_0_write0_write(hw_uint<16>& in_in_update_0_write0, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write0_merged_banks_6.push(in_in_update_0_write0);
}

inline void in_in_update_0_write1_write(hw_uint<16>& in_in_update_0_write1, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write1_merged_banks_3.push(in_in_update_0_write1);
}

inline void in_in_update_0_write2_write(hw_uint<16>& in_in_update_0_write2, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write2_merged_banks_6.push(in_in_update_0_write2);
}

inline void in_in_update_0_write3_write(hw_uint<16>& in_in_update_0_write3, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write3_merged_banks_3.push(in_in_update_0_write3);
}

inline void in_in_update_0_write4_write(hw_uint<16>& in_in_update_0_write4, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write4_merged_banks_6.push(in_in_update_0_write4);
}

inline void in_in_update_0_write5_write(hw_uint<16>& in_in_update_0_write5, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write5_merged_banks_3.push(in_in_update_0_write5);
}

inline void in_in_update_0_write6_write(hw_uint<16>& in_in_update_0_write6, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write6_merged_banks_6.push(in_in_update_0_write6);
}

inline void in_in_update_0_write7_write(hw_uint<16>& in_in_update_0_write7, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write7_merged_banks_3.push(in_in_update_0_write7);
}

inline hw_uint<16> level_0_rd0_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd0 read pattern: { level_0_update_0[d0, d1] -> in[8d0, 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_6.peek_265();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> level_0_rd1_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd1 read pattern: { level_0_update_0[d0, d1] -> in[8d0, 1 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_6.peek_133();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> level_0_rd10_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd10 read pattern: { level_0_update_0[d0, d1] -> in[2 + 8d0, 1 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_6.peek_133();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> level_0_rd11_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd11 read pattern: { level_0_update_0[d0, d1] -> in[2 + 8d0, 2 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_6.peek_1();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> level_0_rd12_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd12 read pattern: { level_0_update_0[d0, d1] -> in[3 + 8d0, 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_3.peek_265();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> level_0_rd13_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd13 read pattern: { level_0_update_0[d0, d1] -> in[3 + 8d0, 1 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_3.peek_133();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> level_0_rd14_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd14 read pattern: { level_0_update_0[d0, d1] -> in[3 + 8d0, 2 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_3.peek_1();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> level_0_rd15_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd15 read pattern: { level_0_update_0[d0, d1] -> in[4 + 8d0, 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_6.peek_265();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> level_0_rd16_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd16 read pattern: { level_0_update_0[d0, d1] -> in[4 + 8d0, 1 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_6.peek_133();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> level_0_rd17_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd17 read pattern: { level_0_update_0[d0, d1] -> in[4 + 8d0, 2 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_6.peek_1();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> level_0_rd18_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd18 read pattern: { level_0_update_0[d0, d1] -> in[4 + 8d0, 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_6.peek_265();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> level_0_rd19_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd19 read pattern: { level_0_update_0[d0, d1] -> in[4 + 8d0, 1 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_6.peek_133();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> level_0_rd2_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd2 read pattern: { level_0_update_0[d0, d1] -> in[8d0, 2 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_6.peek_1();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> level_0_rd20_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd20 read pattern: { level_0_update_0[d0, d1] -> in[4 + 8d0, 2 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_6.peek_1();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> level_0_rd21_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd21 read pattern: { level_0_update_0[d0, d1] -> in[5 + 8d0, 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_3.peek_265();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> level_0_rd22_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd22 read pattern: { level_0_update_0[d0, d1] -> in[5 + 8d0, 1 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_3.peek_133();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> level_0_rd23_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd23 read pattern: { level_0_update_0[d0, d1] -> in[5 + 8d0, 2 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_3.peek_1();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> level_0_rd24_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd24 read pattern: { level_0_update_0[d0, d1] -> in[6 + 8d0, 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_6.peek_265();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> level_0_rd25_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd25 read pattern: { level_0_update_0[d0, d1] -> in[6 + 8d0, 1 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_6.peek_133();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> level_0_rd26_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd26 read pattern: { level_0_update_0[d0, d1] -> in[6 + 8d0, 2 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_6.peek_1();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> level_0_rd27_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd27 read pattern: { level_0_update_0[d0, d1] -> in[6 + 8d0, 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_6.peek_265();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> level_0_rd28_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd28 read pattern: { level_0_update_0[d0, d1] -> in[6 + 8d0, 1 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_6.peek_133();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> level_0_rd29_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd29 read pattern: { level_0_update_0[d0, d1] -> in[6 + 8d0, 2 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_6.peek_1();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> level_0_rd3_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd3 read pattern: { level_0_update_0[d0, d1] -> in[1 + 8d0, 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_3.peek_265();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> level_0_rd30_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd30 read pattern: { level_0_update_0[d0, d1] -> in[7 + 8d0, 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_3.peek_265();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> level_0_rd31_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd31 read pattern: { level_0_update_0[d0, d1] -> in[7 + 8d0, 1 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_3.peek_133();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> level_0_rd32_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd32 read pattern: { level_0_update_0[d0, d1] -> in[7 + 8d0, 2 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_3.peek_1();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> level_0_rd33_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd33 read pattern: { level_0_update_0[d0, d1] -> in[8 + 8d0, 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_6.peek_264();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> level_0_rd34_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd34 read pattern: { level_0_update_0[d0, d1] -> in[8 + 8d0, 1 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_6.peek_132();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> level_0_rd35_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd35 read pattern: { level_0_update_0[d0, d1] -> in[8 + 8d0, 2 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_6.peek_0();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> level_0_rd4_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd4 read pattern: { level_0_update_0[d0, d1] -> in[1 + 8d0, 1 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_3.peek_133();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> level_0_rd5_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd5 read pattern: { level_0_update_0[d0, d1] -> in[1 + 8d0, 2 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_3.peek_1();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> level_0_rd6_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd6 read pattern: { level_0_update_0[d0, d1] -> in[2 + 8d0, 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_6.peek_265();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> level_0_rd7_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd7 read pattern: { level_0_update_0[d0, d1] -> in[2 + 8d0, 1 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_6.peek_133();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> level_0_rd8_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd8 read pattern: { level_0_update_0[d0, d1] -> in[2 + 8d0, 2 + 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_6.peek_1();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> level_0_rd9_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd9 read pattern: { level_0_update_0[d0, d1] -> in[2 + 8d0, 2d1] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_6.peek_265();
  return value_in_in_update_0_write2;
  return 0;
}

// # of bundles = 2
// in_update_0_write
//	in_in_update_0_write0
//	in_in_update_0_write1
//	in_in_update_0_write2
//	in_in_update_0_write3
//	in_in_update_0_write4
//	in_in_update_0_write5
//	in_in_update_0_write6
//	in_in_update_0_write7
inline void in_in_update_0_write_bundle_write(hw_uint<128>& in_update_0_write, in_cache& in, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_in_update_0_write0_res = in_update_0_write.extract<0, 15>();
	in_in_update_0_write0_write(in_in_update_0_write0_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write1_res = in_update_0_write.extract<16, 31>();
	in_in_update_0_write1_write(in_in_update_0_write1_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write2_res = in_update_0_write.extract<32, 47>();
	in_in_update_0_write2_write(in_in_update_0_write2_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write3_res = in_update_0_write.extract<48, 63>();
	in_in_update_0_write3_write(in_in_update_0_write3_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write4_res = in_update_0_write.extract<64, 79>();
	in_in_update_0_write4_write(in_in_update_0_write4_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write5_res = in_update_0_write.extract<80, 95>();
	in_in_update_0_write5_write(in_in_update_0_write5_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write6_res = in_update_0_write.extract<96, 111>();
	in_in_update_0_write6_write(in_in_update_0_write6_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write7_res = in_update_0_write.extract<112, 127>();
	in_in_update_0_write7_write(in_in_update_0_write7_res, in, d0, d1, dynamic_address);
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
//	level_0_rd18
//	level_0_rd19
//	level_0_rd20
//	level_0_rd21
//	level_0_rd22
//	level_0_rd23
//	level_0_rd24
//	level_0_rd25
//	level_0_rd26
//	level_0_rd27
//	level_0_rd28
//	level_0_rd29
//	level_0_rd30
//	level_0_rd31
//	level_0_rd32
//	level_0_rd33
//	level_0_rd34
//	level_0_rd35
inline hw_uint<576> in_level_0_update_0_read_bundle_read(in_cache& in, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 36
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
    // level_0_rd18
    // level_0_rd19
    // level_0_rd20
    // level_0_rd21
    // level_0_rd22
    // level_0_rd23
    // level_0_rd24
    // level_0_rd25
    // level_0_rd26
    // level_0_rd27
    // level_0_rd28
    // level_0_rd29
    // level_0_rd30
    // level_0_rd31
    // level_0_rd32
    // level_0_rd33
    // level_0_rd34
    // level_0_rd35

	hw_uint<576> result;
	hw_uint<16> level_0_rd0_res = level_0_rd0_select(in, d0, d1, dynamic_address);
	set_at<0, 576>(result, level_0_rd0_res);
	hw_uint<16> level_0_rd1_res = level_0_rd1_select(in, d0, d1, dynamic_address);
	set_at<16, 576>(result, level_0_rd1_res);
	hw_uint<16> level_0_rd2_res = level_0_rd2_select(in, d0, d1, dynamic_address);
	set_at<32, 576>(result, level_0_rd2_res);
	hw_uint<16> level_0_rd3_res = level_0_rd3_select(in, d0, d1, dynamic_address);
	set_at<48, 576>(result, level_0_rd3_res);
	hw_uint<16> level_0_rd4_res = level_0_rd4_select(in, d0, d1, dynamic_address);
	set_at<64, 576>(result, level_0_rd4_res);
	hw_uint<16> level_0_rd5_res = level_0_rd5_select(in, d0, d1, dynamic_address);
	set_at<80, 576>(result, level_0_rd5_res);
	hw_uint<16> level_0_rd6_res = level_0_rd6_select(in, d0, d1, dynamic_address);
	set_at<96, 576>(result, level_0_rd6_res);
	hw_uint<16> level_0_rd7_res = level_0_rd7_select(in, d0, d1, dynamic_address);
	set_at<112, 576>(result, level_0_rd7_res);
	hw_uint<16> level_0_rd8_res = level_0_rd8_select(in, d0, d1, dynamic_address);
	set_at<128, 576>(result, level_0_rd8_res);
	hw_uint<16> level_0_rd9_res = level_0_rd9_select(in, d0, d1, dynamic_address);
	set_at<144, 576>(result, level_0_rd9_res);
	hw_uint<16> level_0_rd10_res = level_0_rd10_select(in, d0, d1, dynamic_address);
	set_at<160, 576>(result, level_0_rd10_res);
	hw_uint<16> level_0_rd11_res = level_0_rd11_select(in, d0, d1, dynamic_address);
	set_at<176, 576>(result, level_0_rd11_res);
	hw_uint<16> level_0_rd12_res = level_0_rd12_select(in, d0, d1, dynamic_address);
	set_at<192, 576>(result, level_0_rd12_res);
	hw_uint<16> level_0_rd13_res = level_0_rd13_select(in, d0, d1, dynamic_address);
	set_at<208, 576>(result, level_0_rd13_res);
	hw_uint<16> level_0_rd14_res = level_0_rd14_select(in, d0, d1, dynamic_address);
	set_at<224, 576>(result, level_0_rd14_res);
	hw_uint<16> level_0_rd15_res = level_0_rd15_select(in, d0, d1, dynamic_address);
	set_at<240, 576>(result, level_0_rd15_res);
	hw_uint<16> level_0_rd16_res = level_0_rd16_select(in, d0, d1, dynamic_address);
	set_at<256, 576>(result, level_0_rd16_res);
	hw_uint<16> level_0_rd17_res = level_0_rd17_select(in, d0, d1, dynamic_address);
	set_at<272, 576>(result, level_0_rd17_res);
	hw_uint<16> level_0_rd18_res = level_0_rd18_select(in, d0, d1, dynamic_address);
	set_at<288, 576>(result, level_0_rd18_res);
	hw_uint<16> level_0_rd19_res = level_0_rd19_select(in, d0, d1, dynamic_address);
	set_at<304, 576>(result, level_0_rd19_res);
	hw_uint<16> level_0_rd20_res = level_0_rd20_select(in, d0, d1, dynamic_address);
	set_at<320, 576>(result, level_0_rd20_res);
	hw_uint<16> level_0_rd21_res = level_0_rd21_select(in, d0, d1, dynamic_address);
	set_at<336, 576>(result, level_0_rd21_res);
	hw_uint<16> level_0_rd22_res = level_0_rd22_select(in, d0, d1, dynamic_address);
	set_at<352, 576>(result, level_0_rd22_res);
	hw_uint<16> level_0_rd23_res = level_0_rd23_select(in, d0, d1, dynamic_address);
	set_at<368, 576>(result, level_0_rd23_res);
	hw_uint<16> level_0_rd24_res = level_0_rd24_select(in, d0, d1, dynamic_address);
	set_at<384, 576>(result, level_0_rd24_res);
	hw_uint<16> level_0_rd25_res = level_0_rd25_select(in, d0, d1, dynamic_address);
	set_at<400, 576>(result, level_0_rd25_res);
	hw_uint<16> level_0_rd26_res = level_0_rd26_select(in, d0, d1, dynamic_address);
	set_at<416, 576>(result, level_0_rd26_res);
	hw_uint<16> level_0_rd27_res = level_0_rd27_select(in, d0, d1, dynamic_address);
	set_at<432, 576>(result, level_0_rd27_res);
	hw_uint<16> level_0_rd28_res = level_0_rd28_select(in, d0, d1, dynamic_address);
	set_at<448, 576>(result, level_0_rd28_res);
	hw_uint<16> level_0_rd29_res = level_0_rd29_select(in, d0, d1, dynamic_address);
	set_at<464, 576>(result, level_0_rd29_res);
	hw_uint<16> level_0_rd30_res = level_0_rd30_select(in, d0, d1, dynamic_address);
	set_at<480, 576>(result, level_0_rd30_res);
	hw_uint<16> level_0_rd31_res = level_0_rd31_select(in, d0, d1, dynamic_address);
	set_at<496, 576>(result, level_0_rd31_res);
	hw_uint<16> level_0_rd32_res = level_0_rd32_select(in, d0, d1, dynamic_address);
	set_at<512, 576>(result, level_0_rd32_res);
	hw_uint<16> level_0_rd33_res = level_0_rd33_select(in, d0, d1, dynamic_address);
	set_at<528, 576>(result, level_0_rd33_res);
	hw_uint<16> level_0_rd34_res = level_0_rd34_select(in, d0, d1, dynamic_address);
	set_at<544, 576>(result, level_0_rd34_res);
	hw_uint<16> level_0_rd35_res = level_0_rd35_select(in, d0, d1, dynamic_address);
	set_at<560, 576>(result, level_0_rd35_res);
	return result;
}

#include "hw_classes.h"

struct level_0_level_0_update_0_write0_merged_banks_6_cache {
	// RAM Box: {[0, 520], [0, 518]}
	// Capacity: 264
	// # of read delays: 6
  // 0, 1, 131, 132, 262, 263
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 129> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 129> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_130() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_131() {
		return f4;
	}

	inline hw_uint<16> peek_132() {
		return f6;
	}

	inline hw_uint<16> peek_261() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_262() {
		return f8;
	}

	inline hw_uint<16> peek_263() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
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

struct level_0_level_0_update_0_write1_merged_banks_3_cache {
	// RAM Box: {[1, 517], [0, 518]}
	// Capacity: 264
	// # of read delays: 4
  // 0, 1, 132, 263
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 130> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 130> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_131() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_132() {
		return f4;
	}

	inline hw_uint<16> peek_262() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_263() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct level_0_level_0_update_0_write2_merged_banks_6_cache {
	// RAM Box: {[2, 518], [0, 518]}
	// Capacity: 264
	// # of read delays: 4
  // 0, 1, 132, 263
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 130> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 130> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_131() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_132() {
		return f4;
	}

	inline hw_uint<16> peek_262() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_263() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct level_0_level_0_update_0_write3_merged_banks_3_cache {
	// RAM Box: {[3, 519], [0, 518]}
	// Capacity: 264
	// # of read delays: 4
  // 0, 1, 132, 263
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 130> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 130> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_131() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_132() {
		return f4;
	}

	inline hw_uint<16> peek_262() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_263() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct level_0_cache {
  // # of banks: 4
  level_0_level_0_update_0_write0_merged_banks_6_cache level_0_level_0_update_0_write0_merged_banks_6;
  level_0_level_0_update_0_write1_merged_banks_3_cache level_0_level_0_update_0_write1_merged_banks_3;
  level_0_level_0_update_0_write2_merged_banks_6_cache level_0_level_0_update_0_write2_merged_banks_6;
  level_0_level_0_update_0_write3_merged_banks_3_cache level_0_level_0_update_0_write3_merged_banks_3;
};



inline void level_0_level_0_update_0_write0_write(hw_uint<16>& level_0_level_0_update_0_write0, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write0_merged_banks_6.push(level_0_level_0_update_0_write0);
}

inline void level_0_level_0_update_0_write1_write(hw_uint<16>& level_0_level_0_update_0_write1, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write1_merged_banks_3.push(level_0_level_0_update_0_write1);
}

inline void level_0_level_0_update_0_write2_write(hw_uint<16>& level_0_level_0_update_0_write2, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write2_merged_banks_6.push(level_0_level_0_update_0_write2);
}

inline void level_0_level_0_update_0_write3_write(hw_uint<16>& level_0_level_0_update_0_write3, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write3_merged_banks_3.push(level_0_level_0_update_0_write3);
}

inline hw_uint<16> level_1_rd0_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd0 read pattern: { level_1_update_0[d0, d1] -> level_0[4d0, 2d1] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write0 = level_0.level_0_level_0_update_0_write0_merged_banks_6.peek_263();
  return value_level_0_level_0_update_0_write0;
  return 0;
}

inline hw_uint<16> level_1_rd1_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd1 read pattern: { level_1_update_0[d0, d1] -> level_0[4d0, 1 + 2d1] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write0 = level_0.level_0_level_0_update_0_write0_merged_banks_6.peek_132();
  return value_level_0_level_0_update_0_write0;
  return 0;
}

inline hw_uint<16> level_1_rd10_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd10 read pattern: { level_1_update_0[d0, d1] -> level_0[2 + 4d0, 1 + 2d1] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write2 = level_0.level_0_level_0_update_0_write2_merged_banks_6.peek_132();
  return value_level_0_level_0_update_0_write2;
  return 0;
}

inline hw_uint<16> level_1_rd11_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd11 read pattern: { level_1_update_0[d0, d1] -> level_0[2 + 4d0, 2 + 2d1] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write2 = level_0.level_0_level_0_update_0_write2_merged_banks_6.peek_1();
  return value_level_0_level_0_update_0_write2;
  return 0;
}

inline hw_uint<16> level_1_rd12_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd12 read pattern: { level_1_update_0[d0, d1] -> level_0[3 + 4d0, 2d1] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write3 = level_0.level_0_level_0_update_0_write3_merged_banks_3.peek_263();
  return value_level_0_level_0_update_0_write3;
  return 0;
}

inline hw_uint<16> level_1_rd13_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd13 read pattern: { level_1_update_0[d0, d1] -> level_0[3 + 4d0, 1 + 2d1] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write3 = level_0.level_0_level_0_update_0_write3_merged_banks_3.peek_132();
  return value_level_0_level_0_update_0_write3;
  return 0;
}

inline hw_uint<16> level_1_rd14_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd14 read pattern: { level_1_update_0[d0, d1] -> level_0[3 + 4d0, 2 + 2d1] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write3 = level_0.level_0_level_0_update_0_write3_merged_banks_3.peek_1();
  return value_level_0_level_0_update_0_write3;
  return 0;
}

inline hw_uint<16> level_1_rd15_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd15 read pattern: { level_1_update_0[d0, d1] -> level_0[4 + 4d0, 2d1] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write0 = level_0.level_0_level_0_update_0_write0_merged_banks_6.peek_262();
  return value_level_0_level_0_update_0_write0;
  return 0;
}

inline hw_uint<16> level_1_rd16_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd16 read pattern: { level_1_update_0[d0, d1] -> level_0[4 + 4d0, 1 + 2d1] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write0 = level_0.level_0_level_0_update_0_write0_merged_banks_6.peek_131();
  return value_level_0_level_0_update_0_write0;
  return 0;
}

inline hw_uint<16> level_1_rd17_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd17 read pattern: { level_1_update_0[d0, d1] -> level_0[4 + 4d0, 2 + 2d1] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write0 = level_0.level_0_level_0_update_0_write0_merged_banks_6.peek_0();
  return value_level_0_level_0_update_0_write0;
  return 0;
}

inline hw_uint<16> level_1_rd2_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd2 read pattern: { level_1_update_0[d0, d1] -> level_0[4d0, 2 + 2d1] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write0 = level_0.level_0_level_0_update_0_write0_merged_banks_6.peek_1();
  return value_level_0_level_0_update_0_write0;
  return 0;
}

inline hw_uint<16> level_1_rd3_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd3 read pattern: { level_1_update_0[d0, d1] -> level_0[1 + 4d0, 2d1] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write1 = level_0.level_0_level_0_update_0_write1_merged_banks_3.peek_263();
  return value_level_0_level_0_update_0_write1;
  return 0;
}

inline hw_uint<16> level_1_rd4_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd4 read pattern: { level_1_update_0[d0, d1] -> level_0[1 + 4d0, 1 + 2d1] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write1 = level_0.level_0_level_0_update_0_write1_merged_banks_3.peek_132();
  return value_level_0_level_0_update_0_write1;
  return 0;
}

inline hw_uint<16> level_1_rd5_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd5 read pattern: { level_1_update_0[d0, d1] -> level_0[1 + 4d0, 2 + 2d1] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write1 = level_0.level_0_level_0_update_0_write1_merged_banks_3.peek_1();
  return value_level_0_level_0_update_0_write1;
  return 0;
}

inline hw_uint<16> level_1_rd6_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd6 read pattern: { level_1_update_0[d0, d1] -> level_0[2 + 4d0, 2d1] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write2 = level_0.level_0_level_0_update_0_write2_merged_banks_6.peek_263();
  return value_level_0_level_0_update_0_write2;
  return 0;
}

inline hw_uint<16> level_1_rd7_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd7 read pattern: { level_1_update_0[d0, d1] -> level_0[2 + 4d0, 1 + 2d1] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write2 = level_0.level_0_level_0_update_0_write2_merged_banks_6.peek_132();
  return value_level_0_level_0_update_0_write2;
  return 0;
}

inline hw_uint<16> level_1_rd8_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd8 read pattern: { level_1_update_0[d0, d1] -> level_0[2 + 4d0, 2 + 2d1] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write2 = level_0.level_0_level_0_update_0_write2_merged_banks_6.peek_1();
  return value_level_0_level_0_update_0_write2;
  return 0;
}

inline hw_uint<16> level_1_rd9_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd9 read pattern: { level_1_update_0[d0, d1] -> level_0[2 + 4d0, 2d1] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write2 = level_0.level_0_level_0_update_0_write2_merged_banks_6.peek_263();
  return value_level_0_level_0_update_0_write2;
  return 0;
}

// # of bundles = 2
// level_0_update_0_write
//	level_0_level_0_update_0_write0
//	level_0_level_0_update_0_write1
//	level_0_level_0_update_0_write2
//	level_0_level_0_update_0_write3
inline void level_0_level_0_update_0_write_bundle_write(hw_uint<64>& level_0_update_0_write, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
	hw_uint<16> level_0_level_0_update_0_write0_res = level_0_update_0_write.extract<0, 15>();
	level_0_level_0_update_0_write0_write(level_0_level_0_update_0_write0_res, level_0, d0, d1, dynamic_address);
	hw_uint<16> level_0_level_0_update_0_write1_res = level_0_update_0_write.extract<16, 31>();
	level_0_level_0_update_0_write1_write(level_0_level_0_update_0_write1_res, level_0, d0, d1, dynamic_address);
	hw_uint<16> level_0_level_0_update_0_write2_res = level_0_update_0_write.extract<32, 47>();
	level_0_level_0_update_0_write2_write(level_0_level_0_update_0_write2_res, level_0, d0, d1, dynamic_address);
	hw_uint<16> level_0_level_0_update_0_write3_res = level_0_update_0_write.extract<48, 63>();
	level_0_level_0_update_0_write3_write(level_0_level_0_update_0_write3_res, level_0, d0, d1, dynamic_address);
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
//	level_1_rd9
//	level_1_rd10
//	level_1_rd11
//	level_1_rd12
//	level_1_rd13
//	level_1_rd14
//	level_1_rd15
//	level_1_rd16
//	level_1_rd17
inline hw_uint<288> level_0_level_1_update_0_read_bundle_read(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 18
    // level_1_rd0
    // level_1_rd1
    // level_1_rd2
    // level_1_rd3
    // level_1_rd4
    // level_1_rd5
    // level_1_rd6
    // level_1_rd7
    // level_1_rd8
    // level_1_rd9
    // level_1_rd10
    // level_1_rd11
    // level_1_rd12
    // level_1_rd13
    // level_1_rd14
    // level_1_rd15
    // level_1_rd16
    // level_1_rd17

	hw_uint<288> result;
	hw_uint<16> level_1_rd0_res = level_1_rd0_select(level_0, d0, d1, dynamic_address);
	set_at<0, 288>(result, level_1_rd0_res);
	hw_uint<16> level_1_rd1_res = level_1_rd1_select(level_0, d0, d1, dynamic_address);
	set_at<16, 288>(result, level_1_rd1_res);
	hw_uint<16> level_1_rd2_res = level_1_rd2_select(level_0, d0, d1, dynamic_address);
	set_at<32, 288>(result, level_1_rd2_res);
	hw_uint<16> level_1_rd3_res = level_1_rd3_select(level_0, d0, d1, dynamic_address);
	set_at<48, 288>(result, level_1_rd3_res);
	hw_uint<16> level_1_rd4_res = level_1_rd4_select(level_0, d0, d1, dynamic_address);
	set_at<64, 288>(result, level_1_rd4_res);
	hw_uint<16> level_1_rd5_res = level_1_rd5_select(level_0, d0, d1, dynamic_address);
	set_at<80, 288>(result, level_1_rd5_res);
	hw_uint<16> level_1_rd6_res = level_1_rd6_select(level_0, d0, d1, dynamic_address);
	set_at<96, 288>(result, level_1_rd6_res);
	hw_uint<16> level_1_rd7_res = level_1_rd7_select(level_0, d0, d1, dynamic_address);
	set_at<112, 288>(result, level_1_rd7_res);
	hw_uint<16> level_1_rd8_res = level_1_rd8_select(level_0, d0, d1, dynamic_address);
	set_at<128, 288>(result, level_1_rd8_res);
	hw_uint<16> level_1_rd9_res = level_1_rd9_select(level_0, d0, d1, dynamic_address);
	set_at<144, 288>(result, level_1_rd9_res);
	hw_uint<16> level_1_rd10_res = level_1_rd10_select(level_0, d0, d1, dynamic_address);
	set_at<160, 288>(result, level_1_rd10_res);
	hw_uint<16> level_1_rd11_res = level_1_rd11_select(level_0, d0, d1, dynamic_address);
	set_at<176, 288>(result, level_1_rd11_res);
	hw_uint<16> level_1_rd12_res = level_1_rd12_select(level_0, d0, d1, dynamic_address);
	set_at<192, 288>(result, level_1_rd12_res);
	hw_uint<16> level_1_rd13_res = level_1_rd13_select(level_0, d0, d1, dynamic_address);
	set_at<208, 288>(result, level_1_rd13_res);
	hw_uint<16> level_1_rd14_res = level_1_rd14_select(level_0, d0, d1, dynamic_address);
	set_at<224, 288>(result, level_1_rd14_res);
	hw_uint<16> level_1_rd15_res = level_1_rd15_select(level_0, d0, d1, dynamic_address);
	set_at<240, 288>(result, level_1_rd15_res);
	hw_uint<16> level_1_rd16_res = level_1_rd16_select(level_0, d0, d1, dynamic_address);
	set_at<256, 288>(result, level_1_rd16_res);
	hw_uint<16> level_1_rd17_res = level_1_rd17_select(level_0, d0, d1, dynamic_address);
	set_at<272, 288>(result, level_1_rd17_res);
	return result;
}

#include "hw_classes.h"

struct level_1_level_1_update_0_write0_merged_banks_6_cache {
	// RAM Box: {[0, 258], [0, 258]}
	// Capacity: 262
	// # of read delays: 6
  // 0, 1, 130, 131, 260, 261
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 128> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 128> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_129() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_130() {
		return f4;
	}

	inline hw_uint<16> peek_131() {
		return f6;
	}

	inline hw_uint<16> peek_259() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_260() {
		return f8;
	}

	inline hw_uint<16> peek_261() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
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

struct level_1_level_1_update_0_write1_merged_banks_3_cache {
	// RAM Box: {[1, 257], [0, 258]}
	// Capacity: 262
	// # of read delays: 4
  // 0, 1, 131, 261
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 129> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 129> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_130() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_131() {
		return f4;
	}

	inline hw_uint<16> peek_260() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_261() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct level_1_cache {
  // # of banks: 2
  level_1_level_1_update_0_write0_merged_banks_6_cache level_1_level_1_update_0_write0_merged_banks_6;
  level_1_level_1_update_0_write1_merged_banks_3_cache level_1_level_1_update_0_write1_merged_banks_3;
};



inline void level_1_level_1_update_0_write0_write(hw_uint<16>& level_1_level_1_update_0_write0, level_1_cache& level_1, int d0, int d1, int dynamic_address) {
  level_1.level_1_level_1_update_0_write0_merged_banks_6.push(level_1_level_1_update_0_write0);
}

inline void level_1_level_1_update_0_write1_write(hw_uint<16>& level_1_level_1_update_0_write1, level_1_cache& level_1, int d0, int d1, int dynamic_address) {
  level_1.level_1_level_1_update_0_write1_merged_banks_3.push(level_1_level_1_update_0_write1);
}

inline hw_uint<16> level_2_rd0_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd0 read pattern: { level_2_update_0[d0, d1] -> level_1[2d0, 2d1] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_6.peek_261();
  return value_level_1_level_1_update_0_write0;
  return 0;
}

inline hw_uint<16> level_2_rd1_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd1 read pattern: { level_2_update_0[d0, d1] -> level_1[2d0, 1 + 2d1] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_6.peek_131();
  return value_level_1_level_1_update_0_write0;
  return 0;
}

inline hw_uint<16> level_2_rd2_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd2 read pattern: { level_2_update_0[d0, d1] -> level_1[2d0, 2 + 2d1] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_6.peek_1();
  return value_level_1_level_1_update_0_write0;
  return 0;
}

inline hw_uint<16> level_2_rd3_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd3 read pattern: { level_2_update_0[d0, d1] -> level_1[1 + 2d0, 2d1] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write1 = level_1.level_1_level_1_update_0_write1_merged_banks_3.peek_261();
  return value_level_1_level_1_update_0_write1;
  return 0;
}

inline hw_uint<16> level_2_rd4_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd4 read pattern: { level_2_update_0[d0, d1] -> level_1[1 + 2d0, 1 + 2d1] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write1 = level_1.level_1_level_1_update_0_write1_merged_banks_3.peek_131();
  return value_level_1_level_1_update_0_write1;
  return 0;
}

inline hw_uint<16> level_2_rd5_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd5 read pattern: { level_2_update_0[d0, d1] -> level_1[1 + 2d0, 2 + 2d1] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write1 = level_1.level_1_level_1_update_0_write1_merged_banks_3.peek_1();
  return value_level_1_level_1_update_0_write1;
  return 0;
}

inline hw_uint<16> level_2_rd6_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd6 read pattern: { level_2_update_0[d0, d1] -> level_1[2 + 2d0, 2d1] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_6.peek_260();
  return value_level_1_level_1_update_0_write0;
  return 0;
}

inline hw_uint<16> level_2_rd7_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd7 read pattern: { level_2_update_0[d0, d1] -> level_1[2 + 2d0, 1 + 2d1] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_6.peek_130();
  return value_level_1_level_1_update_0_write0;
  return 0;
}

inline hw_uint<16> level_2_rd8_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd8 read pattern: { level_2_update_0[d0, d1] -> level_1[2 + 2d0, 2 + 2d1] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_6.peek_0();
  return value_level_1_level_1_update_0_write0;
  return 0;
}

// # of bundles = 2
// level_1_update_0_write
//	level_1_level_1_update_0_write0
//	level_1_level_1_update_0_write1
inline void level_1_level_1_update_0_write_bundle_write(hw_uint<32>& level_1_update_0_write, level_1_cache& level_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> level_1_level_1_update_0_write0_res = level_1_update_0_write.extract<0, 15>();
	level_1_level_1_update_0_write0_write(level_1_level_1_update_0_write0_res, level_1, d0, d1, dynamic_address);
	hw_uint<16> level_1_level_1_update_0_write1_res = level_1_update_0_write.extract<16, 31>();
	level_1_level_1_update_0_write1_write(level_1_level_1_update_0_write1_res, level_1, d0, d1, dynamic_address);
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
inline hw_uint<144> level_1_level_2_update_0_read_bundle_read(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
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
	hw_uint<16> level_2_rd0_res = level_2_rd0_select(level_1, d0, d1, dynamic_address);
	set_at<0, 144>(result, level_2_rd0_res);
	hw_uint<16> level_2_rd1_res = level_2_rd1_select(level_1, d0, d1, dynamic_address);
	set_at<16, 144>(result, level_2_rd1_res);
	hw_uint<16> level_2_rd2_res = level_2_rd2_select(level_1, d0, d1, dynamic_address);
	set_at<32, 144>(result, level_2_rd2_res);
	hw_uint<16> level_2_rd3_res = level_2_rd3_select(level_1, d0, d1, dynamic_address);
	set_at<48, 144>(result, level_2_rd3_res);
	hw_uint<16> level_2_rd4_res = level_2_rd4_select(level_1, d0, d1, dynamic_address);
	set_at<64, 144>(result, level_2_rd4_res);
	hw_uint<16> level_2_rd5_res = level_2_rd5_select(level_1, d0, d1, dynamic_address);
	set_at<80, 144>(result, level_2_rd5_res);
	hw_uint<16> level_2_rd6_res = level_2_rd6_select(level_1, d0, d1, dynamic_address);
	set_at<96, 144>(result, level_2_rd6_res);
	hw_uint<16> level_2_rd7_res = level_2_rd7_select(level_1, d0, d1, dynamic_address);
	set_at<112, 144>(result, level_2_rd7_res);
	hw_uint<16> level_2_rd8_res = level_2_rd8_select(level_1, d0, d1, dynamic_address);
	set_at<128, 144>(result, level_2_rd8_res);
	return result;
}

#include "hw_classes.h"

struct level_2_level_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 128], [0, 128]}
	// Capacity: 261
	// # of read delays: 9
  // 0, 1, 2, 129, 130, 131, 258, 259, 260
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 126> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	hw_uint<16> f10;
	fifo<hw_uint<16>, 126> f11;
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

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_129() {
		return f6;
	}

	inline hw_uint<16> peek_130() {
		return f8;
	}

	inline hw_uint<16> peek_131() {
		return f10;
	}

	inline hw_uint<16> peek_257() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f11.back();
	}

	inline hw_uint<16> peek_258() {
		return f12;
	}

	inline hw_uint<16> peek_259() {
		return f14;
	}

	inline hw_uint<16> peek_260() {
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
    // cap: 1 reading from capacity: 126
    f12 = f11.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 126 reading from capacity: 1
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
    // cap: 1 reading from capacity: 126
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 126 reading from capacity: 1
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
  // # of banks: 1
  level_2_level_2_update_0_write0_merged_banks_9_cache level_2_level_2_update_0_write0_merged_banks_9;
};



inline void level_2_level_2_update_0_write0_write(hw_uint<16>& level_2_level_2_update_0_write0, level_2_cache& level_2, int d0, int d1, int dynamic_address) {
  level_2.level_2_level_2_update_0_write0_merged_banks_9.push(level_2_level_2_update_0_write0);
}

inline hw_uint<16> level_3_rd0_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd0 read pattern: { level_3_update_0[d0, d1] -> level_2[2d0, 2d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 5 + 2d0, 5] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_9.peek_260();
  return value_level_2_level_2_update_0_write0;
  return 0;
}

inline hw_uint<16> level_3_rd1_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd1 read pattern: { level_3_update_0[d0, d1] -> level_2[2d0, 1 + 2d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 5 + 2d0, 5] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_9.peek_131();
  return value_level_2_level_2_update_0_write0;
  return 0;
}

inline hw_uint<16> level_3_rd2_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd2 read pattern: { level_3_update_0[d0, d1] -> level_2[2d0, 2 + 2d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 5 + 2d0, 5] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_9.peek_2();
  return value_level_2_level_2_update_0_write0;
  return 0;
}

inline hw_uint<16> level_3_rd3_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd3 read pattern: { level_3_update_0[d0, d1] -> level_2[1 + 2d0, 2d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 5 + 2d0, 5] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_9.peek_259();
  return value_level_2_level_2_update_0_write0;
  return 0;
}

inline hw_uint<16> level_3_rd4_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd4 read pattern: { level_3_update_0[d0, d1] -> level_2[1 + 2d0, 1 + 2d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 5 + 2d0, 5] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_9.peek_130();
  return value_level_2_level_2_update_0_write0;
  return 0;
}

inline hw_uint<16> level_3_rd5_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd5 read pattern: { level_3_update_0[d0, d1] -> level_2[1 + 2d0, 2 + 2d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 5 + 2d0, 5] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_9.peek_1();
  return value_level_2_level_2_update_0_write0;
  return 0;
}

inline hw_uint<16> level_3_rd6_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd6 read pattern: { level_3_update_0[d0, d1] -> level_2[2 + 2d0, 2d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 5 + 2d0, 5] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_9.peek_258();
  return value_level_2_level_2_update_0_write0;
  return 0;
}

inline hw_uint<16> level_3_rd7_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd7 read pattern: { level_3_update_0[d0, d1] -> level_2[2 + 2d0, 1 + 2d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 5 + 2d0, 5] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_9.peek_129();
  return value_level_2_level_2_update_0_write0;
  return 0;
}

inline hw_uint<16> level_3_rd8_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd8 read pattern: { level_3_update_0[d0, d1] -> level_2[2 + 2d0, 2 + 2d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 5 + 2d0, 5] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_9.peek_0();
  return value_level_2_level_2_update_0_write0;
  return 0;
}

// # of bundles = 2
// level_2_update_0_write
//	level_2_level_2_update_0_write0
inline void level_2_level_2_update_0_write_bundle_write(hw_uint<16>& level_2_update_0_write, level_2_cache& level_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> level_2_level_2_update_0_write0_res = level_2_update_0_write.extract<0, 15>();
	level_2_level_2_update_0_write0_write(level_2_level_2_update_0_write0_res, level_2, d0, d1, dynamic_address);
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
inline hw_uint<144> level_2_level_3_update_0_read_bundle_read(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
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
	hw_uint<16> level_3_rd0_res = level_3_rd0_select(level_2, d0, d1, dynamic_address);
	set_at<0, 144>(result, level_3_rd0_res);
	hw_uint<16> level_3_rd1_res = level_3_rd1_select(level_2, d0, d1, dynamic_address);
	set_at<16, 144>(result, level_3_rd1_res);
	hw_uint<16> level_3_rd2_res = level_3_rd2_select(level_2, d0, d1, dynamic_address);
	set_at<32, 144>(result, level_3_rd2_res);
	hw_uint<16> level_3_rd3_res = level_3_rd3_select(level_2, d0, d1, dynamic_address);
	set_at<48, 144>(result, level_3_rd3_res);
	hw_uint<16> level_3_rd4_res = level_3_rd4_select(level_2, d0, d1, dynamic_address);
	set_at<64, 144>(result, level_3_rd4_res);
	hw_uint<16> level_3_rd5_res = level_3_rd5_select(level_2, d0, d1, dynamic_address);
	set_at<80, 144>(result, level_3_rd5_res);
	hw_uint<16> level_3_rd6_res = level_3_rd6_select(level_2, d0, d1, dynamic_address);
	set_at<96, 144>(result, level_3_rd6_res);
	hw_uint<16> level_3_rd7_res = level_3_rd7_select(level_2, d0, d1, dynamic_address);
	set_at<112, 144>(result, level_3_rd7_res);
	hw_uint<16> level_3_rd8_res = level_3_rd8_select(level_2, d0, d1, dynamic_address);
	set_at<128, 144>(result, level_3_rd8_res);
	return result;
}

#include "hw_classes.h"

struct level_3_level_3_update_0_write0_to_gp64x64_8_rd0_cache {
	// RAM Box: {[0, 63], [0, 63]}
	// Capacity: 1
	// # of read delays: 2
  // 0, 0
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
  // # of banks: 1
  level_3_level_3_update_0_write0_to_gp64x64_8_rd0_cache level_3_level_3_update_0_write0_to_gp64x64_8_rd0;
};



inline void level_3_level_3_update_0_write0_write(hw_uint<16>& level_3_level_3_update_0_write0, level_3_cache& level_3, int d0, int d1, int dynamic_address) {
  level_3.level_3_level_3_update_0_write0_to_gp64x64_8_rd0.push(level_3_level_3_update_0_write0);
}

inline hw_uint<16> gp64x64_8_rd0_select(level_3_cache& level_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp64x64_8_rd0 read pattern: { gp64x64_8_update_0[d0, d1] -> level_3[d0, d1] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Read schedule : { gp64x64_8_update_0[d0, d1] -> [30 + 16d1, 5 + 2d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  // Write schedule: { level_3_update_0[d0, d1] -> [30 + 16d1, 5 + 2d0, 5] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
  auto value_level_3_level_3_update_0_write0 = level_3.level_3_level_3_update_0_write0_to_gp64x64_8_rd0.peek(/* one reader or all rams */ 0);
  return value_level_3_level_3_update_0_write0;
  return 0;
}

// # of bundles = 2
// gp64x64_8_update_0_read
//	gp64x64_8_rd0
inline hw_uint<16> level_3_gp64x64_8_update_0_read_bundle_read(level_3_cache& level_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 1
    // gp64x64_8_rd0

	hw_uint<16> result;
	hw_uint<16> gp64x64_8_rd0_res = gp64x64_8_rd0_select(level_3, d0, d1, dynamic_address);
	set_at<0, 16>(result, gp64x64_8_rd0_res);
	return result;
}

// level_3_update_0_write
//	level_3_level_3_update_0_write0
inline void level_3_level_3_update_0_write_bundle_write(hw_uint<16>& level_3_update_0_write, level_3_cache& level_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> level_3_level_3_update_0_write0_res = level_3_update_0_write.extract<0, 15>();
	level_3_level_3_update_0_write0_write(level_3_level_3_update_0_write0_res, level_3, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 63264 bits


// Operation logic
inline void in_update_0(HWStream<hw_uint<128> >& /* buffer_args num ports = 8 */in_off_chip, in_cache& in, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_off_chip
	auto in_off_chip_0_c__0_value = in_off_chip.read();
	auto compute_result = id_unrolled_8(in_off_chip_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(/* arg names */compute_result, in, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void level_0_update_0(in_cache& in, level_0_cache& level_0, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_level_0_update_0_read_bundle_read(in/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_4(in_0_c__0_value);
	// Produce: level_0
	level_0_level_0_update_0_write_bundle_write(/* arg names */compute_result, level_0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void level_1_update_0(level_0_cache& level_0, level_1_cache& level_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: level_0
	auto level_0_0_c__0_value = level_0_level_1_update_0_read_bundle_read(level_0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_2(level_0_0_c__0_value);
	// Produce: level_1
	level_1_level_1_update_0_write_bundle_write(/* arg names */compute_result, level_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void level_2_update_0(level_1_cache& level_1, level_2_cache& level_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: level_1
	auto level_1_0_c__0_value = level_1_level_2_update_0_read_bundle_read(level_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(level_1_0_c__0_value);
	// Produce: level_2
	level_2_level_2_update_0_write_bundle_write(/* arg names */compute_result, level_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void level_3_update_0(level_2_cache& level_2, level_3_cache& level_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: level_2
	auto level_2_0_c__0_value = level_2_level_3_update_0_read_bundle_read(level_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_1(level_2_0_c__0_value);
	// Produce: level_3
	level_3_level_3_update_0_write_bundle_write(/* arg names */compute_result, level_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp64x64_8_update_0(level_3_cache& level_3, HWStream<hw_uint<16> >& /* buffer_args num ports = 1 */gp64x64_8, int d0, int d1) {
  // Dynamic address computation

	// Consume: level_3
	auto level_3_0_c__0_value = level_3_gp64x64_8_update_0_read_bundle_read(level_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_1(level_3_0_c__0_value);
	// Produce: gp64x64_8
	gp64x64_8.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void gp64x64_8_opt(HWStream<hw_uint<128> >& /* get_args num ports = 8 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */gp64x64_8) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("gp64x64_8_opt_debug.csv");
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
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { level_3_update_0[d0, d1] -> [30 + 16d1, 5 + 2d0, 5] : 0 <= d0 <= 63 and 0 <= d1 <= 63; level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518; level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 128 and 0 <= d1 <= 128; in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038; gp64x64_8_update_0[d0, d1] -> [30 + 16d1, 5 + 2d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 63; level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
//   { level_3_update_0[d0, d1] -> [30 + 16d1, 5 + 2d0, 5] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
// Condition for level_3_update_0(((-2 - i0 + 16*floord(2 + i0, 16) == 0) && (-1 - i1 + 2*floord(1 + i1, 2) == 0) && (-5 + i2 == 0) && (-5 + i1 >= 0) && (131 - i1 >= 0) && (-30 + i0 >= 0) && (1038 - i0 >= 0)))
//   { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 130 and 0 <= d1 <= 518 }
// Condition for level_0_update_0(((-i0 + 2*floord(i0, 2) == 0) && (-2 + i2 == 0) && (-1 + i1 >= 0) && (131 - i1 >= 0) && (-2 + i0 >= 0) && (1038 - i0 >= 0)))
//   { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 128 and 0 <= d1 <= 128 }
// Condition for level_2_update_0(((-2 - i0 + 8*floord(2 + i0, 8) == 0) && (-4 + i2 == 0) && (-3 + i1 >= 0) && (131 - i1 >= 0) && (-14 + i0 >= 0) && (1038 - i0 >= 0)))
//   { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 131 and 0 <= d1 <= 1038 }
// Condition for in_update_0(((-1 + i2 == 0) && (i1 >= 0) && (131 - i1 >= 0) && (i0 >= 0) && (1038 - i0 >= 0)))
//   { gp64x64_8_update_0[d0, d1] -> [30 + 16d1, 5 + 2d0, 6] : 0 <= d0 <= 63 and 0 <= d1 <= 63 }
// Condition for gp64x64_8_update_0(((-2 - i0 + 16*floord(2 + i0, 16) == 0) && (-1 - i1 + 2*floord(1 + i1, 2) == 0) && (-6 + i2 == 0) && (-5 + i1 >= 0) && (131 - i1 >= 0) && (-30 + i0 >= 0) && (1038 - i0 >= 0)))
//   { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 129 and 0 <= d1 <= 258 }
// Condition for level_1_update_0(((-2 - i0 + 4*floord(2 + i0, 4) == 0) && (-3 + i2 == 0) && (-2 + i1 >= 0) && (131 - i1 >= 0) && (-6 + i0 >= 0) && (1038 - i0 >= 0)))

  /*
  // Schedules...
    // gp64x64_8_update_0 -> [1*d1*1*16 + 1*30,1*d0*1*2 + 1*5,1*6]
    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // level_0_update_0 -> [1*d1*1*2 + 1*2,1*d0*1*1 + 1*1,1*2]
    // level_1_update_0 -> [1*d1*1*4 + 1*6,1*d0*1*1 + 1*2,1*3]
    // level_2_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*1 + 1*3,1*4]
    // level_3_update_0 -> [1*d1*1*16 + 1*30,1*d0*1*2 + 1*5,1*5]
for (int c0 = 0; c0 <= 1038; c0++) {
  for (int c1 = 0; c1 <= 131; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((0 <= c1 && c1 <= 131) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1038) && ((c0 - 0) % 1 == 0)) {
      in_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((1 <= c1 && c1 <= 131) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1038) && ((c0 - 2) % 2 == 0)) {
      level_0_update_0((c1 - 1) / 1, (c0 - 2) / 2);
    }

    if ((2 <= c1 && c1 <= 131) && ((c1 - 2) % 1 == 0) && (6 <= c0 && c0 <= 1038) && ((c0 - 6) % 4 == 0)) {
      level_1_update_0((c1 - 2) / 1, (c0 - 6) / 4);
    }

    if ((3 <= c1 && c1 <= 131) && ((c1 - 3) % 1 == 0) && (14 <= c0 && c0 <= 1038) && ((c0 - 14) % 8 == 0)) {
      level_2_update_0((c1 - 3) / 1, (c0 - 14) / 8);
    }

    if ((5 <= c1 && c1 <= 131) && ((c1 - 5) % 2 == 0) && (30 <= c0 && c0 <= 1038) && ((c0 - 30) % 16 == 0)) {
      level_3_update_0((c1 - 5) / 2, (c0 - 30) / 16);
    }

    if ((5 <= c1 && c1 <= 131) && ((c1 - 5) % 2 == 0) && (30 <= c0 && c0 <= 1038) && ((c0 - 30) % 16 == 0)) {
      gp64x64_8_update_0((c1 - 5) / 2, (c0 - 30) / 16);
    }

  }
}

  */
	  // Schedules...
	    // gp64x64_8_update_0 -> [1*d1*1*16 + 1*30,1*d0*1*2 + 1*5,1*6]
	    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // level_0_update_0 -> [1*d1*1*2 + 1*2,1*d0*1*1 + 1*1,1*2]
	    // level_1_update_0 -> [1*d1*1*4 + 1*6,1*d0*1*1 + 1*2,1*3]
	    // level_2_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*1 + 1*3,1*4]
	    // level_3_update_0 -> [1*d1*1*16 + 1*30,1*d0*1*2 + 1*5,1*5]
	for (int c0 = 0; c0 <= 1038; c0++) {
	  for (int c1 = 0; c1 <= 131; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 131) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1038) && ((c0 - 0) % 1 == 0)) {
	      in_update_0(in_off_chip /* buf name */, in, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 131) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1038) && ((c0 - 2) % 2 == 0)) {
	      level_0_update_0(in /* buf name */, level_0, (c1 - 1) / 1, (c0 - 2) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 131) && ((c1 - 2) % 1 == 0) && (6 <= c0 && c0 <= 1038) && ((c0 - 6) % 4 == 0)) {
	      level_1_update_0(level_0 /* buf name */, level_1, (c1 - 2) / 1, (c0 - 6) / 4);
	    }
	
	    if ((3 <= c1 && c1 <= 131) && ((c1 - 3) % 1 == 0) && (14 <= c0 && c0 <= 1038) && ((c0 - 14) % 8 == 0)) {
	      level_2_update_0(level_1 /* buf name */, level_2, (c1 - 3) / 1, (c0 - 14) / 8);
	    }
	
	    if ((5 <= c1 && c1 <= 131) && ((c1 - 5) % 2 == 0) && (30 <= c0 && c0 <= 1038) && ((c0 - 30) % 16 == 0)) {
	      level_3_update_0(level_2 /* buf name */, level_3, (c1 - 5) / 2, (c0 - 30) / 16);
	    }
	
	    if ((5 <= c1 && c1 <= 131) && ((c1 - 5) % 2 == 0) && (30 <= c0 && c0 <= 1038) && ((c0 - 30) % 16 == 0)) {
	      gp64x64_8_update_0(level_3 /* buf name */, gp64x64_8, (c1 - 5) / 2, (c0 - 30) / 16);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void gp64x64_8_opt_wrapper(HWStream<hw_uint<128> >& /* get_args num ports = 8 */in_off_chip, HWStream<hw_uint<16> >& /* get_args num ports = 1 */gp64x64_8, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    gp64x64_8_opt(in_off_chip, gp64x64_8);
  }
}
#ifdef __VIVADO_SYNTH__
  // { gp64x64_8_update_0[root = 0, gp64x64_8_0, gp64x64_8_1] -> gp64x64_8[0, 0] : 0 <= gp64x64_8_0 <= 63 and 0 <= gp64x64_8_1 <= 63 }
const int gp64x64_8_update_0_write_pipe0_num_transfers = 4096;
  // { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : 0 <= in_0 <= 131 and 0 <= in_1 <= 1038 }
const int in_update_0_read_pipe0_num_transfers = 137148;


extern "C" {

void gp64x64_8_opt_accel(hw_uint<128>* in_update_0_read_pipe0, hw_uint<16>* gp64x64_8_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = gp64x64_8_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = gp64x64_8_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<128> > in_update_0_read_pipe0_channel;
  static HWStream<hw_uint<16> > gp64x64_8_update_0_write_pipe0_channel;

  burst_read<128>(in_update_0_read_pipe0, in_update_0_read_pipe0_channel, in_update_0_read_pipe0_num_transfers*size);

  gp64x64_8_opt_wrapper(in_update_0_read_pipe0_channel, gp64x64_8_update_0_write_pipe0_channel, size);

  burst_write<16>(gp64x64_8_update_0_write_pipe0, gp64x64_8_update_0_write_pipe0_channel, gp64x64_8_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void gp64x64_8_opt_rdai(HWStream<hw_uint<128> >& in_update_0_read_pipe0, HWStream<hw_uint<16> >&  gp64x64_8_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = gp64x64_8_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  gp64x64_8_opt(in_update_0_read_pipe0, gp64x64_8_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

