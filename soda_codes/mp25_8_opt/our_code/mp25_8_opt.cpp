#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: mp25_8_opt_compute_units.h
#include "mp25_8_opt_compute_units.h"

#include "hw_classes.h"

struct in_in_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 120], [0, 127], [0, 63]}
	// Capacity: 17
	// # of read delays: 2
  // 0, 16
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 15> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_15() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_16() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 15
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 15 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write1_merged_banks_2_cache {
	// RAM Box: {[1, 121], [0, 127], [0, 63]}
	// Capacity: 17
	// # of read delays: 2
  // 0, 16
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 15> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_15() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_16() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 15
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 15 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write2_merged_banks_2_cache {
	// RAM Box: {[2, 122], [0, 127], [0, 63]}
	// Capacity: 17
	// # of read delays: 2
  // 0, 16
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 15> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_15() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_16() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 15
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 15 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write3_merged_banks_2_cache {
	// RAM Box: {[3, 123], [0, 127], [0, 63]}
	// Capacity: 17
	// # of read delays: 2
  // 0, 16
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 15> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_15() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_16() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 15
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 15 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write4_merged_banks_2_cache {
	// RAM Box: {[4, 124], [0, 127], [0, 63]}
	// Capacity: 17
	// # of read delays: 2
  // 0, 16
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 15> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_15() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_16() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 15
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 15 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write5_merged_banks_2_cache {
	// RAM Box: {[5, 125], [0, 127], [0, 63]}
	// Capacity: 17
	// # of read delays: 2
  // 0, 16
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 15> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_15() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_16() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 15
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 15 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write6_merged_banks_2_cache {
	// RAM Box: {[6, 126], [0, 127], [0, 63]}
	// Capacity: 17
	// # of read delays: 2
  // 0, 16
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 15> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_15() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_16() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 15
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 15 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write7_merged_banks_2_cache {
	// RAM Box: {[7, 127], [0, 127], [0, 63]}
	// Capacity: 17
	// # of read delays: 2
  // 0, 16
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 15> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_15() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_16() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 15
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 15 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cache {
  // # of banks: 8
  in_in_update_0_write0_merged_banks_2_cache in_in_update_0_write0_merged_banks_2;
  in_in_update_0_write1_merged_banks_2_cache in_in_update_0_write1_merged_banks_2;
  in_in_update_0_write2_merged_banks_2_cache in_in_update_0_write2_merged_banks_2;
  in_in_update_0_write3_merged_banks_2_cache in_in_update_0_write3_merged_banks_2;
  in_in_update_0_write4_merged_banks_2_cache in_in_update_0_write4_merged_banks_2;
  in_in_update_0_write5_merged_banks_2_cache in_in_update_0_write5_merged_banks_2;
  in_in_update_0_write6_merged_banks_2_cache in_in_update_0_write6_merged_banks_2;
  in_in_update_0_write7_merged_banks_2_cache in_in_update_0_write7_merged_banks_2;
};



inline void in_in_update_0_write0_write(hw_uint<32> & in_in_update_0_write0, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write0_merged_banks_2.push(in_in_update_0_write0);
}

inline void in_in_update_0_write1_write(hw_uint<32> & in_in_update_0_write1, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write1_merged_banks_2.push(in_in_update_0_write1);
}

inline void in_in_update_0_write2_write(hw_uint<32> & in_in_update_0_write2, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write2_merged_banks_2.push(in_in_update_0_write2);
}

inline void in_in_update_0_write3_write(hw_uint<32> & in_in_update_0_write3, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write3_merged_banks_2.push(in_in_update_0_write3);
}

inline void in_in_update_0_write4_write(hw_uint<32> & in_in_update_0_write4, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write4_merged_banks_2.push(in_in_update_0_write4);
}

inline void in_in_update_0_write5_write(hw_uint<32> & in_in_update_0_write5, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write5_merged_banks_2.push(in_in_update_0_write5);
}

inline void in_in_update_0_write6_write(hw_uint<32> & in_in_update_0_write6, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write6_merged_banks_2.push(in_in_update_0_write6);
}

inline void in_in_update_0_write7_write(hw_uint<32> & in_in_update_0_write7, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write7_merged_banks_2.push(in_in_update_0_write7);
}

inline hw_uint<32>  mp25_8_rd0_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_8_rd0 read pattern: { mp25_8_update_0[d0, d1, d2] -> in[8d0, 2d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_8_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek_16();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<32>  mp25_8_rd1_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_8_rd1 read pattern: { mp25_8_update_0[d0, d1, d2] -> in[8d0, 1 + 2d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_8_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek_0();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<32>  mp25_8_rd10_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_8_rd10 read pattern: { mp25_8_update_0[d0, d1, d2] -> in[5 + 8d0, 2d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_8_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_2.peek_16();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<32>  mp25_8_rd11_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_8_rd11 read pattern: { mp25_8_update_0[d0, d1, d2] -> in[5 + 8d0, 1 + 2d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_8_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_2.peek_0();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<32>  mp25_8_rd12_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_8_rd12 read pattern: { mp25_8_update_0[d0, d1, d2] -> in[6 + 8d0, 2d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_8_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_2.peek_16();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<32>  mp25_8_rd13_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_8_rd13 read pattern: { mp25_8_update_0[d0, d1, d2] -> in[6 + 8d0, 1 + 2d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_8_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_2.peek_0();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<32>  mp25_8_rd14_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_8_rd14 read pattern: { mp25_8_update_0[d0, d1, d2] -> in[7 + 8d0, 2d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_8_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_2.peek_16();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<32>  mp25_8_rd15_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_8_rd15 read pattern: { mp25_8_update_0[d0, d1, d2] -> in[7 + 8d0, 1 + 2d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_8_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_2.peek_0();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<32>  mp25_8_rd2_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_8_rd2 read pattern: { mp25_8_update_0[d0, d1, d2] -> in[1 + 8d0, 2d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_8_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_2.peek_16();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<32>  mp25_8_rd3_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_8_rd3 read pattern: { mp25_8_update_0[d0, d1, d2] -> in[1 + 8d0, 1 + 2d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_8_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_2.peek_0();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<32>  mp25_8_rd4_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_8_rd4 read pattern: { mp25_8_update_0[d0, d1, d2] -> in[2 + 8d0, 2d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_8_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_2.peek_16();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<32>  mp25_8_rd5_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_8_rd5 read pattern: { mp25_8_update_0[d0, d1, d2] -> in[2 + 8d0, 1 + 2d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_8_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_2.peek_0();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<32>  mp25_8_rd6_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_8_rd6 read pattern: { mp25_8_update_0[d0, d1, d2] -> in[3 + 8d0, 2d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_8_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_2.peek_16();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<32>  mp25_8_rd7_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_8_rd7 read pattern: { mp25_8_update_0[d0, d1, d2] -> in[3 + 8d0, 1 + 2d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_8_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_2.peek_0();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<32>  mp25_8_rd8_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_8_rd8 read pattern: { mp25_8_update_0[d0, d1, d2] -> in[4 + 8d0, 2d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_8_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_2.peek_16();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<32>  mp25_8_rd9_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_8_rd9 read pattern: { mp25_8_update_0[d0, d1, d2] -> in[4 + 8d0, 1 + 2d1, d2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_8_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_2.peek_0();
  return value_in_in_update_0_write4;
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
inline void in_in_update_0_write_bundle_write(hw_uint<256>& in_update_0_write, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<32>  in_in_update_0_write0_res = in_update_0_write.extract<0, 31>();
	in_in_update_0_write0_write(in_in_update_0_write0_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write1_res = in_update_0_write.extract<32, 63>();
	in_in_update_0_write1_write(in_in_update_0_write1_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write2_res = in_update_0_write.extract<64, 95>();
	in_in_update_0_write2_write(in_in_update_0_write2_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write3_res = in_update_0_write.extract<96, 127>();
	in_in_update_0_write3_write(in_in_update_0_write3_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write4_res = in_update_0_write.extract<128, 159>();
	in_in_update_0_write4_write(in_in_update_0_write4_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write5_res = in_update_0_write.extract<160, 191>();
	in_in_update_0_write5_write(in_in_update_0_write5_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write6_res = in_update_0_write.extract<192, 223>();
	in_in_update_0_write6_write(in_in_update_0_write6_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write7_res = in_update_0_write.extract<224, 255>();
	in_in_update_0_write7_write(in_in_update_0_write7_res, in, d0, d1, d2, dynamic_address);
}

// mp25_8_update_0_read
//	mp25_8_rd0
//	mp25_8_rd1
//	mp25_8_rd2
//	mp25_8_rd3
//	mp25_8_rd4
//	mp25_8_rd5
//	mp25_8_rd6
//	mp25_8_rd7
//	mp25_8_rd8
//	mp25_8_rd9
//	mp25_8_rd10
//	mp25_8_rd11
//	mp25_8_rd12
//	mp25_8_rd13
//	mp25_8_rd14
//	mp25_8_rd15
inline hw_uint<512> in_mp25_8_update_0_read_bundle_read(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 16
    // mp25_8_rd0
    // mp25_8_rd1
    // mp25_8_rd2
    // mp25_8_rd3
    // mp25_8_rd4
    // mp25_8_rd5
    // mp25_8_rd6
    // mp25_8_rd7
    // mp25_8_rd8
    // mp25_8_rd9
    // mp25_8_rd10
    // mp25_8_rd11
    // mp25_8_rd12
    // mp25_8_rd13
    // mp25_8_rd14
    // mp25_8_rd15

	hw_uint<512> result;
	hw_uint<32>  mp25_8_rd0_res = mp25_8_rd0_select(in, d0, d1, d2, dynamic_address);
	set_at<0, 512>(result, mp25_8_rd0_res);
	hw_uint<32>  mp25_8_rd1_res = mp25_8_rd1_select(in, d0, d1, d2, dynamic_address);
	set_at<32, 512>(result, mp25_8_rd1_res);
	hw_uint<32>  mp25_8_rd2_res = mp25_8_rd2_select(in, d0, d1, d2, dynamic_address);
	set_at<64, 512>(result, mp25_8_rd2_res);
	hw_uint<32>  mp25_8_rd3_res = mp25_8_rd3_select(in, d0, d1, d2, dynamic_address);
	set_at<96, 512>(result, mp25_8_rd3_res);
	hw_uint<32>  mp25_8_rd4_res = mp25_8_rd4_select(in, d0, d1, d2, dynamic_address);
	set_at<128, 512>(result, mp25_8_rd4_res);
	hw_uint<32>  mp25_8_rd5_res = mp25_8_rd5_select(in, d0, d1, d2, dynamic_address);
	set_at<160, 512>(result, mp25_8_rd5_res);
	hw_uint<32>  mp25_8_rd6_res = mp25_8_rd6_select(in, d0, d1, d2, dynamic_address);
	set_at<192, 512>(result, mp25_8_rd6_res);
	hw_uint<32>  mp25_8_rd7_res = mp25_8_rd7_select(in, d0, d1, d2, dynamic_address);
	set_at<224, 512>(result, mp25_8_rd7_res);
	hw_uint<32>  mp25_8_rd8_res = mp25_8_rd8_select(in, d0, d1, d2, dynamic_address);
	set_at<256, 512>(result, mp25_8_rd8_res);
	hw_uint<32>  mp25_8_rd9_res = mp25_8_rd9_select(in, d0, d1, d2, dynamic_address);
	set_at<288, 512>(result, mp25_8_rd9_res);
	hw_uint<32>  mp25_8_rd10_res = mp25_8_rd10_select(in, d0, d1, d2, dynamic_address);
	set_at<320, 512>(result, mp25_8_rd10_res);
	hw_uint<32>  mp25_8_rd11_res = mp25_8_rd11_select(in, d0, d1, d2, dynamic_address);
	set_at<352, 512>(result, mp25_8_rd11_res);
	hw_uint<32>  mp25_8_rd12_res = mp25_8_rd12_select(in, d0, d1, d2, dynamic_address);
	set_at<384, 512>(result, mp25_8_rd12_res);
	hw_uint<32>  mp25_8_rd13_res = mp25_8_rd13_select(in, d0, d1, d2, dynamic_address);
	set_at<416, 512>(result, mp25_8_rd13_res);
	hw_uint<32>  mp25_8_rd14_res = mp25_8_rd14_select(in, d0, d1, d2, dynamic_address);
	set_at<448, 512>(result, mp25_8_rd14_res);
	hw_uint<32>  mp25_8_rd15_res = mp25_8_rd15_select(in, d0, d1, d2, dynamic_address);
	set_at<480, 512>(result, mp25_8_rd15_res);
	return result;
}

// Total re-use buffer capacity: 4096 bits


// Operation logic
inline void mp25_8_update_0(in_cache& in, HWStream<hw_uint<128> >& /* buffer_args num ports = 4 */mp25_8, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_mp25_8_update_0_read_bundle_read(in/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = max_pool_2x2_unrolled_4(in_0_c__0_value);
	// Produce: mp25_8
	mp25_8.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_update_0(HWStream<hw_uint<256> >& /* buffer_args num ports = 8 */in_oc, in_cache& in, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_oc
	auto in_oc_0_c__0_value = in_oc.read();
	auto compute_result = id_unrolled_8(in_oc_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(/* arg names */compute_result, in, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void mp25_8_opt(HWStream<hw_uint<256> >& /* get_args num ports = 8 */in_oc, HWStream<hw_uint<128> >& /* get_args num ports = 4 */mp25_8) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("mp25_8_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { mp25_8_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63; in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
//   { mp25_8_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 15 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for mp25_8_update_0(((-1 - i1 + 2*floord(1 + i1, 2) == 0) && (-2 + i3 == 0) && (i2 >= 0) && (15 - i2 >= 0) && (-1 + i1 >= 0) && (127 - i1 >= 0) && (i0 >= 0) && (63 - i0 >= 0)))
//   { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 15 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
// Condition for in_update_0(((-1 + i3 == 0) && (i2 >= 0) && (15 - i2 >= 0) && (i1 >= 0) && (127 - i1 >= 0) && (i0 >= 0) && (63 - i0 >= 0)))

  /*
  // Schedules...
    // in_oc_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // in_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // mp25_8_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*2 + 1*1,1*d0*1*1 + 1*0,1*2]
for (int c0 = 0; c0 <= 63; c0++) {
  for (int c1 = 0; c1 <= 127; c1++) {
    for (int c2 = 0; c2 <= 15; c2++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

      if ((0 <= c2 && c2 <= 15) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 127) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
        in_update_0((c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
      }

      if ((0 <= c2 && c2 <= 15) && ((c2 - 0) % 1 == 0) && (1 <= c1 && c1 <= 127) && ((c1 - 1) % 2 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
        mp25_8_update_0((c2 - 0) / 1, (c1 - 1) / 2, (c0 - 0) / 1);
      }

    }
  }
}

  */
	  // Schedules...
	    // in_oc_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // mp25_8_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*2 + 1*1,1*d0*1*1 + 1*0,1*2]
	for (int c0 = 0; c0 <= 63; c0++) {
	  for (int c1 = 0; c1 <= 127; c1++) {
	    for (int c2 = 0; c2 <= 15; c2++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	      if ((0 <= c2 && c2 <= 15) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 127) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
	        in_update_0(in_oc /* buf name */, in, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((0 <= c2 && c2 <= 15) && ((c2 - 0) % 1 == 0) && (1 <= c1 && c1 <= 127) && ((c1 - 1) % 2 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
	        mp25_8_update_0(in /* buf name */, mp25_8, (c2 - 0) / 1, (c1 - 1) / 2, (c0 - 0) / 1);
	      }
	
	    }
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void mp25_8_opt_wrapper(HWStream<hw_uint<256> >& /* get_args num ports = 8 */in_oc, HWStream<hw_uint<128> >& /* get_args num ports = 4 */mp25_8, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    mp25_8_opt(in_oc, mp25_8);
  }
}
#ifdef __VIVADO_SYNTH__
  // { in_update_0[root = 0, in_0, in_1, in_2] -> in_oc[0, 0] : 0 <= in_0 <= 15 and 0 <= in_1 <= 127 and 0 <= in_2 <= 63 }
const int in_update_0_read_pipe0_num_transfers = 131072;
  // { mp25_8_update_0[root = 0, mp25_8_0, mp25_8_1, mp25_8_2] -> mp25_8[0, 0] : 0 <= mp25_8_0 <= 15 and 0 <= mp25_8_1 <= 63 and 0 <= mp25_8_2 <= 63 }
const int mp25_8_update_0_write_pipe0_num_transfers = 65536;


extern "C" {

void mp25_8_opt_accel(hw_uint<256>* in_update_0_read_pipe0, hw_uint<128>* mp25_8_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = mp25_8_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = mp25_8_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<256> > in_update_0_read_pipe0_channel;
  static HWStream<hw_uint<128> > mp25_8_update_0_write_pipe0_channel;

  burst_read<256>(in_update_0_read_pipe0, in_update_0_read_pipe0_channel, in_update_0_read_pipe0_num_transfers*size);

  mp25_8_opt_wrapper(in_update_0_read_pipe0_channel, mp25_8_update_0_write_pipe0_channel, size);

  burst_write<128>(mp25_8_update_0_write_pipe0, mp25_8_update_0_write_pipe0_channel, mp25_8_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void mp25_8_opt_rdai(HWStream<hw_uint<256> >& in_update_0_read_pipe0, HWStream<hw_uint<128> >&  mp25_8_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = mp25_8_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  mp25_8_opt(in_update_0_read_pipe0, mp25_8_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

