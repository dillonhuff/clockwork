#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: icsc_300MHz_16_opt_compute_units.h
#include "icsc_300MHz_16_opt_compute_units.h"

struct in_in_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-144, 2064], [0, 1088]}
	// Capacity: 142
	// # of read delays: 4
  // 0, 1, 140, 141
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 138> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_139() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_140() {
		return f4;
	}

	inline hw_uint<16> peek_141() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write1_merged_banks_4_cache {
	// RAM Box: {[-143, 2049], [0, 1089]}
	// Capacity: 142
	// # of read delays: 3
  // 0, 1, 141
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 139> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_141() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write10_merged_banks_4_cache {
	// RAM Box: {[-134, 2058], [0, 1089]}
	// Capacity: 142
	// # of read delays: 3
  // 0, 1, 141
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 139> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_141() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write11_merged_banks_4_cache {
	// RAM Box: {[-133, 2059], [0, 1089]}
	// Capacity: 142
	// # of read delays: 3
  // 0, 1, 141
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 139> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_141() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write12_merged_banks_4_cache {
	// RAM Box: {[-132, 2060], [0, 1089]}
	// Capacity: 142
	// # of read delays: 3
  // 0, 1, 141
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 139> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_141() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write13_merged_banks_4_cache {
	// RAM Box: {[-131, 2061], [0, 1089]}
	// Capacity: 142
	// # of read delays: 3
  // 0, 1, 141
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 139> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_141() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write14_merged_banks_4_cache {
	// RAM Box: {[-130, 2062], [0, 1089]}
	// Capacity: 142
	// # of read delays: 3
  // 0, 1, 141
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 139> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_141() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write15_merged_banks_4_cache {
	// RAM Box: {[-145, 2063], [0, 1089]}
	// Capacity: 143
	// # of read delays: 4
  // 0, 1, 141, 142
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 139> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_141() {
		return f4;
	}

	inline hw_uint<16> peek_142() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write2_merged_banks_4_cache {
	// RAM Box: {[-142, 2050], [0, 1089]}
	// Capacity: 142
	// # of read delays: 3
  // 0, 1, 141
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 139> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_141() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write3_merged_banks_4_cache {
	// RAM Box: {[-141, 2051], [0, 1089]}
	// Capacity: 142
	// # of read delays: 3
  // 0, 1, 141
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 139> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_141() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write4_merged_banks_4_cache {
	// RAM Box: {[-140, 2052], [0, 1089]}
	// Capacity: 142
	// # of read delays: 3
  // 0, 1, 141
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 139> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_141() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write5_merged_banks_4_cache {
	// RAM Box: {[-139, 2053], [0, 1089]}
	// Capacity: 142
	// # of read delays: 3
  // 0, 1, 141
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 139> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_141() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write6_merged_banks_4_cache {
	// RAM Box: {[-138, 2054], [0, 1089]}
	// Capacity: 142
	// # of read delays: 3
  // 0, 1, 141
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 139> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_141() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write7_merged_banks_4_cache {
	// RAM Box: {[-137, 2055], [0, 1089]}
	// Capacity: 142
	// # of read delays: 3
  // 0, 1, 141
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 139> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_141() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write8_merged_banks_4_cache {
	// RAM Box: {[-136, 2056], [0, 1089]}
	// Capacity: 142
	// # of read delays: 3
  // 0, 1, 141
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 139> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_141() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write9_merged_banks_4_cache {
	// RAM Box: {[-135, 2057], [0, 1089]}
	// Capacity: 142
	// # of read delays: 3
  // 0, 1, 141
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 139> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_140() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_141() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_cache {
  // # of banks: 16
  in_in_update_0_write0_merged_banks_4_cache in_in_update_0_write0_merged_banks_4;
  in_in_update_0_write1_merged_banks_4_cache in_in_update_0_write1_merged_banks_4;
  in_in_update_0_write10_merged_banks_4_cache in_in_update_0_write10_merged_banks_4;
  in_in_update_0_write11_merged_banks_4_cache in_in_update_0_write11_merged_banks_4;
  in_in_update_0_write12_merged_banks_4_cache in_in_update_0_write12_merged_banks_4;
  in_in_update_0_write13_merged_banks_4_cache in_in_update_0_write13_merged_banks_4;
  in_in_update_0_write14_merged_banks_4_cache in_in_update_0_write14_merged_banks_4;
  in_in_update_0_write15_merged_banks_4_cache in_in_update_0_write15_merged_banks_4;
  in_in_update_0_write2_merged_banks_4_cache in_in_update_0_write2_merged_banks_4;
  in_in_update_0_write3_merged_banks_4_cache in_in_update_0_write3_merged_banks_4;
  in_in_update_0_write4_merged_banks_4_cache in_in_update_0_write4_merged_banks_4;
  in_in_update_0_write5_merged_banks_4_cache in_in_update_0_write5_merged_banks_4;
  in_in_update_0_write6_merged_banks_4_cache in_in_update_0_write6_merged_banks_4;
  in_in_update_0_write7_merged_banks_4_cache in_in_update_0_write7_merged_banks_4;
  in_in_update_0_write8_merged_banks_4_cache in_in_update_0_write8_merged_banks_4;
  in_in_update_0_write9_merged_banks_4_cache in_in_update_0_write9_merged_banks_4;
};



inline void in_in_update_0_write0_write(hw_uint<16>& in_in_update_0_write0, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write0_merged_banks_4.push(in_in_update_0_write0);
}

inline void in_in_update_0_write1_write(hw_uint<16>& in_in_update_0_write1, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write1_merged_banks_4.push(in_in_update_0_write1);
}

inline void in_in_update_0_write10_write(hw_uint<16>& in_in_update_0_write10, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write10_merged_banks_4.push(in_in_update_0_write10);
}

inline void in_in_update_0_write11_write(hw_uint<16>& in_in_update_0_write11, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write11_merged_banks_4.push(in_in_update_0_write11);
}

inline void in_in_update_0_write12_write(hw_uint<16>& in_in_update_0_write12, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write12_merged_banks_4.push(in_in_update_0_write12);
}

inline void in_in_update_0_write13_write(hw_uint<16>& in_in_update_0_write13, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write13_merged_banks_4.push(in_in_update_0_write13);
}

inline void in_in_update_0_write14_write(hw_uint<16>& in_in_update_0_write14, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write14_merged_banks_4.push(in_in_update_0_write14);
}

inline void in_in_update_0_write15_write(hw_uint<16>& in_in_update_0_write15, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write15_merged_banks_4.push(in_in_update_0_write15);
}

inline void in_in_update_0_write2_write(hw_uint<16>& in_in_update_0_write2, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write2_merged_banks_4.push(in_in_update_0_write2);
}

inline void in_in_update_0_write3_write(hw_uint<16>& in_in_update_0_write3, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write3_merged_banks_4.push(in_in_update_0_write3);
}

inline void in_in_update_0_write4_write(hw_uint<16>& in_in_update_0_write4, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write4_merged_banks_4.push(in_in_update_0_write4);
}

inline void in_in_update_0_write5_write(hw_uint<16>& in_in_update_0_write5, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write5_merged_banks_4.push(in_in_update_0_write5);
}

inline void in_in_update_0_write6_write(hw_uint<16>& in_in_update_0_write6, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write6_merged_banks_4.push(in_in_update_0_write6);
}

inline void in_in_update_0_write7_write(hw_uint<16>& in_in_update_0_write7, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write7_merged_banks_4.push(in_in_update_0_write7);
}

inline void in_in_update_0_write8_write(hw_uint<16>& in_in_update_0_write8, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write8_merged_banks_4.push(in_in_update_0_write8);
}

inline void in_in_update_0_write9_write(hw_uint<16>& in_in_update_0_write9, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write9_merged_banks_4.push(in_in_update_0_write9);
}

inline hw_uint<16> stg0_rd0_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd0 read pattern: { stg0_update_0[d0, d1] -> in[-1 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_4.peek_142();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> stg0_rd1_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd1 read pattern: { stg0_update_0[d0, d1] -> in[16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_141();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> stg0_rd10_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd10 read pattern: { stg0_update_0[d0, d1] -> in[2 + 16d0, 1 + d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_4.peek_1();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> stg0_rd11_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd11 read pattern: { stg0_update_0[d0, d1] -> in[3 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_4.peek_141();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> stg0_rd12_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd12 read pattern: { stg0_update_0[d0, d1] -> in[2 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_4.peek_141();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> stg0_rd13_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd13 read pattern: { stg0_update_0[d0, d1] -> in[3 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_4.peek_141();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> stg0_rd14_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd14 read pattern: { stg0_update_0[d0, d1] -> in[3 + 16d0, 1 + d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_4.peek_1();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> stg0_rd15_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd15 read pattern: { stg0_update_0[d0, d1] -> in[4 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_4.peek_141();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> stg0_rd16_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd16 read pattern: { stg0_update_0[d0, d1] -> in[3 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_4.peek_141();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> stg0_rd17_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd17 read pattern: { stg0_update_0[d0, d1] -> in[4 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_4.peek_141();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> stg0_rd18_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd18 read pattern: { stg0_update_0[d0, d1] -> in[4 + 16d0, 1 + d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_4.peek_1();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> stg0_rd19_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd19 read pattern: { stg0_update_0[d0, d1] -> in[5 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_4.peek_141();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> stg0_rd2_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd2 read pattern: { stg0_update_0[d0, d1] -> in[16d0, 1 + d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_1();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> stg0_rd20_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd20 read pattern: { stg0_update_0[d0, d1] -> in[4 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_4.peek_141();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> stg0_rd21_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd21 read pattern: { stg0_update_0[d0, d1] -> in[5 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_4.peek_141();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> stg0_rd22_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd22 read pattern: { stg0_update_0[d0, d1] -> in[5 + 16d0, 1 + d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_4.peek_1();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> stg0_rd23_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd23 read pattern: { stg0_update_0[d0, d1] -> in[6 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_4.peek_141();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> stg0_rd24_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd24 read pattern: { stg0_update_0[d0, d1] -> in[5 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_4.peek_141();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> stg0_rd25_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd25 read pattern: { stg0_update_0[d0, d1] -> in[6 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_4.peek_141();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> stg0_rd26_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd26 read pattern: { stg0_update_0[d0, d1] -> in[6 + 16d0, 1 + d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_4.peek_1();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> stg0_rd27_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd27 read pattern: { stg0_update_0[d0, d1] -> in[7 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_4.peek_141();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> stg0_rd28_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd28 read pattern: { stg0_update_0[d0, d1] -> in[6 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_4.peek_141();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> stg0_rd29_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd29 read pattern: { stg0_update_0[d0, d1] -> in[7 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_4.peek_141();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> stg0_rd3_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd3 read pattern: { stg0_update_0[d0, d1] -> in[1 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_4.peek_141();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> stg0_rd30_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd30 read pattern: { stg0_update_0[d0, d1] -> in[7 + 16d0, 1 + d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_4.peek_1();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> stg0_rd31_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd31 read pattern: { stg0_update_0[d0, d1] -> in[8 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_4.peek_141();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> stg0_rd32_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd32 read pattern: { stg0_update_0[d0, d1] -> in[7 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_4.peek_141();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> stg0_rd33_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd33 read pattern: { stg0_update_0[d0, d1] -> in[8 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_4.peek_141();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> stg0_rd34_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd34 read pattern: { stg0_update_0[d0, d1] -> in[8 + 16d0, 1 + d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_4.peek_1();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> stg0_rd35_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd35 read pattern: { stg0_update_0[d0, d1] -> in[9 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_4.peek_141();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> stg0_rd36_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd36 read pattern: { stg0_update_0[d0, d1] -> in[8 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_4.peek_141();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> stg0_rd37_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd37 read pattern: { stg0_update_0[d0, d1] -> in[9 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_4.peek_141();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> stg0_rd38_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd38 read pattern: { stg0_update_0[d0, d1] -> in[9 + 16d0, 1 + d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_4.peek_1();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> stg0_rd39_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd39 read pattern: { stg0_update_0[d0, d1] -> in[10 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_4.peek_141();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> stg0_rd4_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd4 read pattern: { stg0_update_0[d0, d1] -> in[16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_141();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> stg0_rd40_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd40 read pattern: { stg0_update_0[d0, d1] -> in[9 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_4.peek_141();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> stg0_rd41_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd41 read pattern: { stg0_update_0[d0, d1] -> in[10 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_4.peek_141();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> stg0_rd42_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd42 read pattern: { stg0_update_0[d0, d1] -> in[10 + 16d0, 1 + d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_4.peek_1();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> stg0_rd43_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd43 read pattern: { stg0_update_0[d0, d1] -> in[11 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_4.peek_141();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> stg0_rd44_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd44 read pattern: { stg0_update_0[d0, d1] -> in[10 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_4.peek_141();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> stg0_rd45_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd45 read pattern: { stg0_update_0[d0, d1] -> in[11 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_4.peek_141();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> stg0_rd46_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd46 read pattern: { stg0_update_0[d0, d1] -> in[11 + 16d0, 1 + d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_4.peek_1();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> stg0_rd47_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd47 read pattern: { stg0_update_0[d0, d1] -> in[12 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_4.peek_141();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> stg0_rd48_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd48 read pattern: { stg0_update_0[d0, d1] -> in[11 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_4.peek_141();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> stg0_rd49_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd49 read pattern: { stg0_update_0[d0, d1] -> in[12 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_4.peek_141();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> stg0_rd5_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd5 read pattern: { stg0_update_0[d0, d1] -> in[1 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_4.peek_141();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> stg0_rd50_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd50 read pattern: { stg0_update_0[d0, d1] -> in[12 + 16d0, 1 + d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_4.peek_1();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> stg0_rd51_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd51 read pattern: { stg0_update_0[d0, d1] -> in[13 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_4.peek_141();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> stg0_rd52_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd52 read pattern: { stg0_update_0[d0, d1] -> in[12 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_4.peek_141();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> stg0_rd53_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd53 read pattern: { stg0_update_0[d0, d1] -> in[13 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_4.peek_141();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> stg0_rd54_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd54 read pattern: { stg0_update_0[d0, d1] -> in[13 + 16d0, 1 + d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_4.peek_1();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> stg0_rd55_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd55 read pattern: { stg0_update_0[d0, d1] -> in[14 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_4.peek_141();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> stg0_rd56_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd56 read pattern: { stg0_update_0[d0, d1] -> in[13 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_4.peek_141();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> stg0_rd57_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd57 read pattern: { stg0_update_0[d0, d1] -> in[14 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_4.peek_141();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> stg0_rd58_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd58 read pattern: { stg0_update_0[d0, d1] -> in[14 + 16d0, 1 + d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_4.peek_1();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> stg0_rd59_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd59 read pattern: { stg0_update_0[d0, d1] -> in[15 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_4.peek_141();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> stg0_rd6_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd6 read pattern: { stg0_update_0[d0, d1] -> in[1 + 16d0, 1 + d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_4.peek_1();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> stg0_rd60_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd60 read pattern: { stg0_update_0[d0, d1] -> in[14 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_4.peek_141();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> stg0_rd61_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd61 read pattern: { stg0_update_0[d0, d1] -> in[15 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_4.peek_141();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> stg0_rd62_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd62 read pattern: { stg0_update_0[d0, d1] -> in[15 + 16d0, 1 + d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_4.peek_1();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> stg0_rd63_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd63 read pattern: { stg0_update_0[d0, d1] -> in[16 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_140();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> stg0_rd7_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd7 read pattern: { stg0_update_0[d0, d1] -> in[2 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_4.peek_141();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> stg0_rd8_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd8 read pattern: { stg0_update_0[d0, d1] -> in[1 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_4.peek_141();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> stg0_rd9_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd9 read pattern: { stg0_update_0[d0, d1] -> in[2 + 16d0, d1] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_4.peek_141();
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
//	in_in_update_0_write8
//	in_in_update_0_write9
//	in_in_update_0_write10
//	in_in_update_0_write11
//	in_in_update_0_write12
//	in_in_update_0_write13
//	in_in_update_0_write14
//	in_in_update_0_write15
inline void in_in_update_0_write_bundle_write(hw_uint<256>& in_update_0_write, in_cache& in, int d0, int d1, int dynamic_address) {
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
	hw_uint<16> in_in_update_0_write8_res = in_update_0_write.extract<128, 143>();
	in_in_update_0_write8_write(in_in_update_0_write8_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write9_res = in_update_0_write.extract<144, 159>();
	in_in_update_0_write9_write(in_in_update_0_write9_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write10_res = in_update_0_write.extract<160, 175>();
	in_in_update_0_write10_write(in_in_update_0_write10_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write11_res = in_update_0_write.extract<176, 191>();
	in_in_update_0_write11_write(in_in_update_0_write11_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write12_res = in_update_0_write.extract<192, 207>();
	in_in_update_0_write12_write(in_in_update_0_write12_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write13_res = in_update_0_write.extract<208, 223>();
	in_in_update_0_write13_write(in_in_update_0_write13_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write14_res = in_update_0_write.extract<224, 239>();
	in_in_update_0_write14_write(in_in_update_0_write14_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write15_res = in_update_0_write.extract<240, 255>();
	in_in_update_0_write15_write(in_in_update_0_write15_res, in, d0, d1, dynamic_address);
}

// stg0_update_0_read
//	stg0_rd0
//	stg0_rd1
//	stg0_rd2
//	stg0_rd3
//	stg0_rd4
//	stg0_rd5
//	stg0_rd6
//	stg0_rd7
//	stg0_rd8
//	stg0_rd9
//	stg0_rd10
//	stg0_rd11
//	stg0_rd12
//	stg0_rd13
//	stg0_rd14
//	stg0_rd15
//	stg0_rd16
//	stg0_rd17
//	stg0_rd18
//	stg0_rd19
//	stg0_rd20
//	stg0_rd21
//	stg0_rd22
//	stg0_rd23
//	stg0_rd24
//	stg0_rd25
//	stg0_rd26
//	stg0_rd27
//	stg0_rd28
//	stg0_rd29
//	stg0_rd30
//	stg0_rd31
//	stg0_rd32
//	stg0_rd33
//	stg0_rd34
//	stg0_rd35
//	stg0_rd36
//	stg0_rd37
//	stg0_rd38
//	stg0_rd39
//	stg0_rd40
//	stg0_rd41
//	stg0_rd42
//	stg0_rd43
//	stg0_rd44
//	stg0_rd45
//	stg0_rd46
//	stg0_rd47
//	stg0_rd48
//	stg0_rd49
//	stg0_rd50
//	stg0_rd51
//	stg0_rd52
//	stg0_rd53
//	stg0_rd54
//	stg0_rd55
//	stg0_rd56
//	stg0_rd57
//	stg0_rd58
//	stg0_rd59
//	stg0_rd60
//	stg0_rd61
//	stg0_rd62
//	stg0_rd63
inline hw_uint<1024> in_stg0_update_0_read_bundle_read(in_cache& in, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 64
    // stg0_rd0
    // stg0_rd1
    // stg0_rd2
    // stg0_rd3
    // stg0_rd4
    // stg0_rd5
    // stg0_rd6
    // stg0_rd7
    // stg0_rd8
    // stg0_rd9
    // stg0_rd10
    // stg0_rd11
    // stg0_rd12
    // stg0_rd13
    // stg0_rd14
    // stg0_rd15
    // stg0_rd16
    // stg0_rd17
    // stg0_rd18
    // stg0_rd19
    // stg0_rd20
    // stg0_rd21
    // stg0_rd22
    // stg0_rd23
    // stg0_rd24
    // stg0_rd25
    // stg0_rd26
    // stg0_rd27
    // stg0_rd28
    // stg0_rd29
    // stg0_rd30
    // stg0_rd31
    // stg0_rd32
    // stg0_rd33
    // stg0_rd34
    // stg0_rd35
    // stg0_rd36
    // stg0_rd37
    // stg0_rd38
    // stg0_rd39
    // stg0_rd40
    // stg0_rd41
    // stg0_rd42
    // stg0_rd43
    // stg0_rd44
    // stg0_rd45
    // stg0_rd46
    // stg0_rd47
    // stg0_rd48
    // stg0_rd49
    // stg0_rd50
    // stg0_rd51
    // stg0_rd52
    // stg0_rd53
    // stg0_rd54
    // stg0_rd55
    // stg0_rd56
    // stg0_rd57
    // stg0_rd58
    // stg0_rd59
    // stg0_rd60
    // stg0_rd61
    // stg0_rd62
    // stg0_rd63

	hw_uint<1024> result;
	hw_uint<16> stg0_rd0_res = stg0_rd0_select(in, d0, d1, dynamic_address);
	set_at<0, 1024>(result, stg0_rd0_res);
	hw_uint<16> stg0_rd1_res = stg0_rd1_select(in, d0, d1, dynamic_address);
	set_at<16, 1024>(result, stg0_rd1_res);
	hw_uint<16> stg0_rd2_res = stg0_rd2_select(in, d0, d1, dynamic_address);
	set_at<32, 1024>(result, stg0_rd2_res);
	hw_uint<16> stg0_rd3_res = stg0_rd3_select(in, d0, d1, dynamic_address);
	set_at<48, 1024>(result, stg0_rd3_res);
	hw_uint<16> stg0_rd4_res = stg0_rd4_select(in, d0, d1, dynamic_address);
	set_at<64, 1024>(result, stg0_rd4_res);
	hw_uint<16> stg0_rd5_res = stg0_rd5_select(in, d0, d1, dynamic_address);
	set_at<80, 1024>(result, stg0_rd5_res);
	hw_uint<16> stg0_rd6_res = stg0_rd6_select(in, d0, d1, dynamic_address);
	set_at<96, 1024>(result, stg0_rd6_res);
	hw_uint<16> stg0_rd7_res = stg0_rd7_select(in, d0, d1, dynamic_address);
	set_at<112, 1024>(result, stg0_rd7_res);
	hw_uint<16> stg0_rd8_res = stg0_rd8_select(in, d0, d1, dynamic_address);
	set_at<128, 1024>(result, stg0_rd8_res);
	hw_uint<16> stg0_rd9_res = stg0_rd9_select(in, d0, d1, dynamic_address);
	set_at<144, 1024>(result, stg0_rd9_res);
	hw_uint<16> stg0_rd10_res = stg0_rd10_select(in, d0, d1, dynamic_address);
	set_at<160, 1024>(result, stg0_rd10_res);
	hw_uint<16> stg0_rd11_res = stg0_rd11_select(in, d0, d1, dynamic_address);
	set_at<176, 1024>(result, stg0_rd11_res);
	hw_uint<16> stg0_rd12_res = stg0_rd12_select(in, d0, d1, dynamic_address);
	set_at<192, 1024>(result, stg0_rd12_res);
	hw_uint<16> stg0_rd13_res = stg0_rd13_select(in, d0, d1, dynamic_address);
	set_at<208, 1024>(result, stg0_rd13_res);
	hw_uint<16> stg0_rd14_res = stg0_rd14_select(in, d0, d1, dynamic_address);
	set_at<224, 1024>(result, stg0_rd14_res);
	hw_uint<16> stg0_rd15_res = stg0_rd15_select(in, d0, d1, dynamic_address);
	set_at<240, 1024>(result, stg0_rd15_res);
	hw_uint<16> stg0_rd16_res = stg0_rd16_select(in, d0, d1, dynamic_address);
	set_at<256, 1024>(result, stg0_rd16_res);
	hw_uint<16> stg0_rd17_res = stg0_rd17_select(in, d0, d1, dynamic_address);
	set_at<272, 1024>(result, stg0_rd17_res);
	hw_uint<16> stg0_rd18_res = stg0_rd18_select(in, d0, d1, dynamic_address);
	set_at<288, 1024>(result, stg0_rd18_res);
	hw_uint<16> stg0_rd19_res = stg0_rd19_select(in, d0, d1, dynamic_address);
	set_at<304, 1024>(result, stg0_rd19_res);
	hw_uint<16> stg0_rd20_res = stg0_rd20_select(in, d0, d1, dynamic_address);
	set_at<320, 1024>(result, stg0_rd20_res);
	hw_uint<16> stg0_rd21_res = stg0_rd21_select(in, d0, d1, dynamic_address);
	set_at<336, 1024>(result, stg0_rd21_res);
	hw_uint<16> stg0_rd22_res = stg0_rd22_select(in, d0, d1, dynamic_address);
	set_at<352, 1024>(result, stg0_rd22_res);
	hw_uint<16> stg0_rd23_res = stg0_rd23_select(in, d0, d1, dynamic_address);
	set_at<368, 1024>(result, stg0_rd23_res);
	hw_uint<16> stg0_rd24_res = stg0_rd24_select(in, d0, d1, dynamic_address);
	set_at<384, 1024>(result, stg0_rd24_res);
	hw_uint<16> stg0_rd25_res = stg0_rd25_select(in, d0, d1, dynamic_address);
	set_at<400, 1024>(result, stg0_rd25_res);
	hw_uint<16> stg0_rd26_res = stg0_rd26_select(in, d0, d1, dynamic_address);
	set_at<416, 1024>(result, stg0_rd26_res);
	hw_uint<16> stg0_rd27_res = stg0_rd27_select(in, d0, d1, dynamic_address);
	set_at<432, 1024>(result, stg0_rd27_res);
	hw_uint<16> stg0_rd28_res = stg0_rd28_select(in, d0, d1, dynamic_address);
	set_at<448, 1024>(result, stg0_rd28_res);
	hw_uint<16> stg0_rd29_res = stg0_rd29_select(in, d0, d1, dynamic_address);
	set_at<464, 1024>(result, stg0_rd29_res);
	hw_uint<16> stg0_rd30_res = stg0_rd30_select(in, d0, d1, dynamic_address);
	set_at<480, 1024>(result, stg0_rd30_res);
	hw_uint<16> stg0_rd31_res = stg0_rd31_select(in, d0, d1, dynamic_address);
	set_at<496, 1024>(result, stg0_rd31_res);
	hw_uint<16> stg0_rd32_res = stg0_rd32_select(in, d0, d1, dynamic_address);
	set_at<512, 1024>(result, stg0_rd32_res);
	hw_uint<16> stg0_rd33_res = stg0_rd33_select(in, d0, d1, dynamic_address);
	set_at<528, 1024>(result, stg0_rd33_res);
	hw_uint<16> stg0_rd34_res = stg0_rd34_select(in, d0, d1, dynamic_address);
	set_at<544, 1024>(result, stg0_rd34_res);
	hw_uint<16> stg0_rd35_res = stg0_rd35_select(in, d0, d1, dynamic_address);
	set_at<560, 1024>(result, stg0_rd35_res);
	hw_uint<16> stg0_rd36_res = stg0_rd36_select(in, d0, d1, dynamic_address);
	set_at<576, 1024>(result, stg0_rd36_res);
	hw_uint<16> stg0_rd37_res = stg0_rd37_select(in, d0, d1, dynamic_address);
	set_at<592, 1024>(result, stg0_rd37_res);
	hw_uint<16> stg0_rd38_res = stg0_rd38_select(in, d0, d1, dynamic_address);
	set_at<608, 1024>(result, stg0_rd38_res);
	hw_uint<16> stg0_rd39_res = stg0_rd39_select(in, d0, d1, dynamic_address);
	set_at<624, 1024>(result, stg0_rd39_res);
	hw_uint<16> stg0_rd40_res = stg0_rd40_select(in, d0, d1, dynamic_address);
	set_at<640, 1024>(result, stg0_rd40_res);
	hw_uint<16> stg0_rd41_res = stg0_rd41_select(in, d0, d1, dynamic_address);
	set_at<656, 1024>(result, stg0_rd41_res);
	hw_uint<16> stg0_rd42_res = stg0_rd42_select(in, d0, d1, dynamic_address);
	set_at<672, 1024>(result, stg0_rd42_res);
	hw_uint<16> stg0_rd43_res = stg0_rd43_select(in, d0, d1, dynamic_address);
	set_at<688, 1024>(result, stg0_rd43_res);
	hw_uint<16> stg0_rd44_res = stg0_rd44_select(in, d0, d1, dynamic_address);
	set_at<704, 1024>(result, stg0_rd44_res);
	hw_uint<16> stg0_rd45_res = stg0_rd45_select(in, d0, d1, dynamic_address);
	set_at<720, 1024>(result, stg0_rd45_res);
	hw_uint<16> stg0_rd46_res = stg0_rd46_select(in, d0, d1, dynamic_address);
	set_at<736, 1024>(result, stg0_rd46_res);
	hw_uint<16> stg0_rd47_res = stg0_rd47_select(in, d0, d1, dynamic_address);
	set_at<752, 1024>(result, stg0_rd47_res);
	hw_uint<16> stg0_rd48_res = stg0_rd48_select(in, d0, d1, dynamic_address);
	set_at<768, 1024>(result, stg0_rd48_res);
	hw_uint<16> stg0_rd49_res = stg0_rd49_select(in, d0, d1, dynamic_address);
	set_at<784, 1024>(result, stg0_rd49_res);
	hw_uint<16> stg0_rd50_res = stg0_rd50_select(in, d0, d1, dynamic_address);
	set_at<800, 1024>(result, stg0_rd50_res);
	hw_uint<16> stg0_rd51_res = stg0_rd51_select(in, d0, d1, dynamic_address);
	set_at<816, 1024>(result, stg0_rd51_res);
	hw_uint<16> stg0_rd52_res = stg0_rd52_select(in, d0, d1, dynamic_address);
	set_at<832, 1024>(result, stg0_rd52_res);
	hw_uint<16> stg0_rd53_res = stg0_rd53_select(in, d0, d1, dynamic_address);
	set_at<848, 1024>(result, stg0_rd53_res);
	hw_uint<16> stg0_rd54_res = stg0_rd54_select(in, d0, d1, dynamic_address);
	set_at<864, 1024>(result, stg0_rd54_res);
	hw_uint<16> stg0_rd55_res = stg0_rd55_select(in, d0, d1, dynamic_address);
	set_at<880, 1024>(result, stg0_rd55_res);
	hw_uint<16> stg0_rd56_res = stg0_rd56_select(in, d0, d1, dynamic_address);
	set_at<896, 1024>(result, stg0_rd56_res);
	hw_uint<16> stg0_rd57_res = stg0_rd57_select(in, d0, d1, dynamic_address);
	set_at<912, 1024>(result, stg0_rd57_res);
	hw_uint<16> stg0_rd58_res = stg0_rd58_select(in, d0, d1, dynamic_address);
	set_at<928, 1024>(result, stg0_rd58_res);
	hw_uint<16> stg0_rd59_res = stg0_rd59_select(in, d0, d1, dynamic_address);
	set_at<944, 1024>(result, stg0_rd59_res);
	hw_uint<16> stg0_rd60_res = stg0_rd60_select(in, d0, d1, dynamic_address);
	set_at<960, 1024>(result, stg0_rd60_res);
	hw_uint<16> stg0_rd61_res = stg0_rd61_select(in, d0, d1, dynamic_address);
	set_at<976, 1024>(result, stg0_rd61_res);
	hw_uint<16> stg0_rd62_res = stg0_rd62_select(in, d0, d1, dynamic_address);
	set_at<992, 1024>(result, stg0_rd62_res);
	hw_uint<16> stg0_rd63_res = stg0_rd63_select(in, d0, d1, dynamic_address);
	set_at<1008, 1024>(result, stg0_rd63_res);
	return result;
}

struct stg0_stg0_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-128, 2048], [0, 1087]}
	// Capacity: 140
	// # of read delays: 4
  // 0, 1, 138, 139
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 136> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_137() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_138() {
		return f4;
	}

	inline hw_uint<16> peek_139() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write1_merged_banks_4_cache {
	// RAM Box: {[-127, 2033], [0, 1088]}
	// Capacity: 140
	// # of read delays: 3
  // 0, 1, 139
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 137> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_138() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_139() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write10_merged_banks_4_cache {
	// RAM Box: {[-118, 2042], [0, 1088]}
	// Capacity: 140
	// # of read delays: 3
  // 0, 1, 139
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 137> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_138() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_139() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write11_merged_banks_4_cache {
	// RAM Box: {[-117, 2043], [0, 1088]}
	// Capacity: 140
	// # of read delays: 3
  // 0, 1, 139
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 137> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_138() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_139() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write12_merged_banks_4_cache {
	// RAM Box: {[-116, 2044], [0, 1088]}
	// Capacity: 140
	// # of read delays: 3
  // 0, 1, 139
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 137> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_138() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_139() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write13_merged_banks_4_cache {
	// RAM Box: {[-115, 2045], [0, 1088]}
	// Capacity: 140
	// # of read delays: 3
  // 0, 1, 139
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 137> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_138() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_139() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write14_merged_banks_4_cache {
	// RAM Box: {[-114, 2046], [0, 1088]}
	// Capacity: 140
	// # of read delays: 3
  // 0, 1, 139
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 137> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_138() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_139() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write15_merged_banks_4_cache {
	// RAM Box: {[-129, 2047], [0, 1088]}
	// Capacity: 141
	// # of read delays: 4
  // 0, 1, 139, 140
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 137> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_138() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_139() {
		return f4;
	}

	inline hw_uint<16> peek_140() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write2_merged_banks_4_cache {
	// RAM Box: {[-126, 2034], [0, 1088]}
	// Capacity: 140
	// # of read delays: 3
  // 0, 1, 139
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 137> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_138() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_139() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write3_merged_banks_4_cache {
	// RAM Box: {[-125, 2035], [0, 1088]}
	// Capacity: 140
	// # of read delays: 3
  // 0, 1, 139
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 137> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_138() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_139() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write4_merged_banks_4_cache {
	// RAM Box: {[-124, 2036], [0, 1088]}
	// Capacity: 140
	// # of read delays: 3
  // 0, 1, 139
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 137> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_138() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_139() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write5_merged_banks_4_cache {
	// RAM Box: {[-123, 2037], [0, 1088]}
	// Capacity: 140
	// # of read delays: 3
  // 0, 1, 139
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 137> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_138() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_139() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write6_merged_banks_4_cache {
	// RAM Box: {[-122, 2038], [0, 1088]}
	// Capacity: 140
	// # of read delays: 3
  // 0, 1, 139
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 137> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_138() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_139() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write7_merged_banks_4_cache {
	// RAM Box: {[-121, 2039], [0, 1088]}
	// Capacity: 140
	// # of read delays: 3
  // 0, 1, 139
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 137> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_138() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_139() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write8_merged_banks_4_cache {
	// RAM Box: {[-120, 2040], [0, 1088]}
	// Capacity: 140
	// # of read delays: 3
  // 0, 1, 139
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 137> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_138() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_139() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write9_merged_banks_4_cache {
	// RAM Box: {[-119, 2041], [0, 1088]}
	// Capacity: 140
	// # of read delays: 3
  // 0, 1, 139
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 137> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_138() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_139() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_cache {
  // # of banks: 16
  stg0_stg0_update_0_write0_merged_banks_4_cache stg0_stg0_update_0_write0_merged_banks_4;
  stg0_stg0_update_0_write1_merged_banks_4_cache stg0_stg0_update_0_write1_merged_banks_4;
  stg0_stg0_update_0_write10_merged_banks_4_cache stg0_stg0_update_0_write10_merged_banks_4;
  stg0_stg0_update_0_write11_merged_banks_4_cache stg0_stg0_update_0_write11_merged_banks_4;
  stg0_stg0_update_0_write12_merged_banks_4_cache stg0_stg0_update_0_write12_merged_banks_4;
  stg0_stg0_update_0_write13_merged_banks_4_cache stg0_stg0_update_0_write13_merged_banks_4;
  stg0_stg0_update_0_write14_merged_banks_4_cache stg0_stg0_update_0_write14_merged_banks_4;
  stg0_stg0_update_0_write15_merged_banks_4_cache stg0_stg0_update_0_write15_merged_banks_4;
  stg0_stg0_update_0_write2_merged_banks_4_cache stg0_stg0_update_0_write2_merged_banks_4;
  stg0_stg0_update_0_write3_merged_banks_4_cache stg0_stg0_update_0_write3_merged_banks_4;
  stg0_stg0_update_0_write4_merged_banks_4_cache stg0_stg0_update_0_write4_merged_banks_4;
  stg0_stg0_update_0_write5_merged_banks_4_cache stg0_stg0_update_0_write5_merged_banks_4;
  stg0_stg0_update_0_write6_merged_banks_4_cache stg0_stg0_update_0_write6_merged_banks_4;
  stg0_stg0_update_0_write7_merged_banks_4_cache stg0_stg0_update_0_write7_merged_banks_4;
  stg0_stg0_update_0_write8_merged_banks_4_cache stg0_stg0_update_0_write8_merged_banks_4;
  stg0_stg0_update_0_write9_merged_banks_4_cache stg0_stg0_update_0_write9_merged_banks_4;
};



inline void stg0_stg0_update_0_write0_write(hw_uint<16>& stg0_stg0_update_0_write0, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write0_merged_banks_4.push(stg0_stg0_update_0_write0);
}

inline void stg0_stg0_update_0_write1_write(hw_uint<16>& stg0_stg0_update_0_write1, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write1_merged_banks_4.push(stg0_stg0_update_0_write1);
}

inline void stg0_stg0_update_0_write10_write(hw_uint<16>& stg0_stg0_update_0_write10, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write10_merged_banks_4.push(stg0_stg0_update_0_write10);
}

inline void stg0_stg0_update_0_write11_write(hw_uint<16>& stg0_stg0_update_0_write11, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write11_merged_banks_4.push(stg0_stg0_update_0_write11);
}

inline void stg0_stg0_update_0_write12_write(hw_uint<16>& stg0_stg0_update_0_write12, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write12_merged_banks_4.push(stg0_stg0_update_0_write12);
}

inline void stg0_stg0_update_0_write13_write(hw_uint<16>& stg0_stg0_update_0_write13, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write13_merged_banks_4.push(stg0_stg0_update_0_write13);
}

inline void stg0_stg0_update_0_write14_write(hw_uint<16>& stg0_stg0_update_0_write14, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write14_merged_banks_4.push(stg0_stg0_update_0_write14);
}

inline void stg0_stg0_update_0_write15_write(hw_uint<16>& stg0_stg0_update_0_write15, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write15_merged_banks_4.push(stg0_stg0_update_0_write15);
}

inline void stg0_stg0_update_0_write2_write(hw_uint<16>& stg0_stg0_update_0_write2, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write2_merged_banks_4.push(stg0_stg0_update_0_write2);
}

inline void stg0_stg0_update_0_write3_write(hw_uint<16>& stg0_stg0_update_0_write3, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write3_merged_banks_4.push(stg0_stg0_update_0_write3);
}

inline void stg0_stg0_update_0_write4_write(hw_uint<16>& stg0_stg0_update_0_write4, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write4_merged_banks_4.push(stg0_stg0_update_0_write4);
}

inline void stg0_stg0_update_0_write5_write(hw_uint<16>& stg0_stg0_update_0_write5, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write5_merged_banks_4.push(stg0_stg0_update_0_write5);
}

inline void stg0_stg0_update_0_write6_write(hw_uint<16>& stg0_stg0_update_0_write6, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write6_merged_banks_4.push(stg0_stg0_update_0_write6);
}

inline void stg0_stg0_update_0_write7_write(hw_uint<16>& stg0_stg0_update_0_write7, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write7_merged_banks_4.push(stg0_stg0_update_0_write7);
}

inline void stg0_stg0_update_0_write8_write(hw_uint<16>& stg0_stg0_update_0_write8, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write8_merged_banks_4.push(stg0_stg0_update_0_write8);
}

inline void stg0_stg0_update_0_write9_write(hw_uint<16>& stg0_stg0_update_0_write9, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write9_merged_banks_4.push(stg0_stg0_update_0_write9);
}

inline hw_uint<16> stg1_rd0_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd0 read pattern: { stg1_update_0[d0, d1] -> stg0[-1 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write15 = stg0.stg0_stg0_update_0_write15_merged_banks_4.peek_140();
  return value_stg0_stg0_update_0_write15;
  return 0;
}

inline hw_uint<16> stg1_rd1_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd1 read pattern: { stg1_update_0[d0, d1] -> stg0[16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write0 = stg0.stg0_stg0_update_0_write0_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write0;
  return 0;
}

inline hw_uint<16> stg1_rd10_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd10 read pattern: { stg1_update_0[d0, d1] -> stg0[2 + 16d0, 1 + d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write2 = stg0.stg0_stg0_update_0_write2_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write2;
  return 0;
}

inline hw_uint<16> stg1_rd11_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd11 read pattern: { stg1_update_0[d0, d1] -> stg0[3 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write3 = stg0.stg0_stg0_update_0_write3_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write3;
  return 0;
}

inline hw_uint<16> stg1_rd12_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd12 read pattern: { stg1_update_0[d0, d1] -> stg0[2 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write2 = stg0.stg0_stg0_update_0_write2_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write2;
  return 0;
}

inline hw_uint<16> stg1_rd13_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd13 read pattern: { stg1_update_0[d0, d1] -> stg0[3 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write3 = stg0.stg0_stg0_update_0_write3_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write3;
  return 0;
}

inline hw_uint<16> stg1_rd14_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd14 read pattern: { stg1_update_0[d0, d1] -> stg0[3 + 16d0, 1 + d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write3 = stg0.stg0_stg0_update_0_write3_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write3;
  return 0;
}

inline hw_uint<16> stg1_rd15_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd15 read pattern: { stg1_update_0[d0, d1] -> stg0[4 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write4 = stg0.stg0_stg0_update_0_write4_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write4;
  return 0;
}

inline hw_uint<16> stg1_rd16_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd16 read pattern: { stg1_update_0[d0, d1] -> stg0[3 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write3 = stg0.stg0_stg0_update_0_write3_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write3;
  return 0;
}

inline hw_uint<16> stg1_rd17_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd17 read pattern: { stg1_update_0[d0, d1] -> stg0[4 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write4 = stg0.stg0_stg0_update_0_write4_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write4;
  return 0;
}

inline hw_uint<16> stg1_rd18_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd18 read pattern: { stg1_update_0[d0, d1] -> stg0[4 + 16d0, 1 + d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write4 = stg0.stg0_stg0_update_0_write4_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write4;
  return 0;
}

inline hw_uint<16> stg1_rd19_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd19 read pattern: { stg1_update_0[d0, d1] -> stg0[5 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write5 = stg0.stg0_stg0_update_0_write5_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write5;
  return 0;
}

inline hw_uint<16> stg1_rd2_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd2 read pattern: { stg1_update_0[d0, d1] -> stg0[16d0, 1 + d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write0 = stg0.stg0_stg0_update_0_write0_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write0;
  return 0;
}

inline hw_uint<16> stg1_rd20_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd20 read pattern: { stg1_update_0[d0, d1] -> stg0[4 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write4 = stg0.stg0_stg0_update_0_write4_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write4;
  return 0;
}

inline hw_uint<16> stg1_rd21_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd21 read pattern: { stg1_update_0[d0, d1] -> stg0[5 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write5 = stg0.stg0_stg0_update_0_write5_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write5;
  return 0;
}

inline hw_uint<16> stg1_rd22_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd22 read pattern: { stg1_update_0[d0, d1] -> stg0[5 + 16d0, 1 + d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write5 = stg0.stg0_stg0_update_0_write5_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write5;
  return 0;
}

inline hw_uint<16> stg1_rd23_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd23 read pattern: { stg1_update_0[d0, d1] -> stg0[6 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write6 = stg0.stg0_stg0_update_0_write6_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write6;
  return 0;
}

inline hw_uint<16> stg1_rd24_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd24 read pattern: { stg1_update_0[d0, d1] -> stg0[5 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write5 = stg0.stg0_stg0_update_0_write5_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write5;
  return 0;
}

inline hw_uint<16> stg1_rd25_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd25 read pattern: { stg1_update_0[d0, d1] -> stg0[6 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write6 = stg0.stg0_stg0_update_0_write6_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write6;
  return 0;
}

inline hw_uint<16> stg1_rd26_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd26 read pattern: { stg1_update_0[d0, d1] -> stg0[6 + 16d0, 1 + d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write6 = stg0.stg0_stg0_update_0_write6_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write6;
  return 0;
}

inline hw_uint<16> stg1_rd27_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd27 read pattern: { stg1_update_0[d0, d1] -> stg0[7 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write7 = stg0.stg0_stg0_update_0_write7_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write7;
  return 0;
}

inline hw_uint<16> stg1_rd28_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd28 read pattern: { stg1_update_0[d0, d1] -> stg0[6 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write6 = stg0.stg0_stg0_update_0_write6_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write6;
  return 0;
}

inline hw_uint<16> stg1_rd29_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd29 read pattern: { stg1_update_0[d0, d1] -> stg0[7 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write7 = stg0.stg0_stg0_update_0_write7_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write7;
  return 0;
}

inline hw_uint<16> stg1_rd3_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd3 read pattern: { stg1_update_0[d0, d1] -> stg0[1 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write1 = stg0.stg0_stg0_update_0_write1_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write1;
  return 0;
}

inline hw_uint<16> stg1_rd30_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd30 read pattern: { stg1_update_0[d0, d1] -> stg0[7 + 16d0, 1 + d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write7 = stg0.stg0_stg0_update_0_write7_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write7;
  return 0;
}

inline hw_uint<16> stg1_rd31_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd31 read pattern: { stg1_update_0[d0, d1] -> stg0[8 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write8 = stg0.stg0_stg0_update_0_write8_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write8;
  return 0;
}

inline hw_uint<16> stg1_rd32_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd32 read pattern: { stg1_update_0[d0, d1] -> stg0[7 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write7 = stg0.stg0_stg0_update_0_write7_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write7;
  return 0;
}

inline hw_uint<16> stg1_rd33_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd33 read pattern: { stg1_update_0[d0, d1] -> stg0[8 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write8 = stg0.stg0_stg0_update_0_write8_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write8;
  return 0;
}

inline hw_uint<16> stg1_rd34_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd34 read pattern: { stg1_update_0[d0, d1] -> stg0[8 + 16d0, 1 + d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write8 = stg0.stg0_stg0_update_0_write8_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write8;
  return 0;
}

inline hw_uint<16> stg1_rd35_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd35 read pattern: { stg1_update_0[d0, d1] -> stg0[9 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write9 = stg0.stg0_stg0_update_0_write9_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write9;
  return 0;
}

inline hw_uint<16> stg1_rd36_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd36 read pattern: { stg1_update_0[d0, d1] -> stg0[8 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write8 = stg0.stg0_stg0_update_0_write8_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write8;
  return 0;
}

inline hw_uint<16> stg1_rd37_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd37 read pattern: { stg1_update_0[d0, d1] -> stg0[9 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write9 = stg0.stg0_stg0_update_0_write9_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write9;
  return 0;
}

inline hw_uint<16> stg1_rd38_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd38 read pattern: { stg1_update_0[d0, d1] -> stg0[9 + 16d0, 1 + d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write9 = stg0.stg0_stg0_update_0_write9_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write9;
  return 0;
}

inline hw_uint<16> stg1_rd39_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd39 read pattern: { stg1_update_0[d0, d1] -> stg0[10 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write10 = stg0.stg0_stg0_update_0_write10_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write10;
  return 0;
}

inline hw_uint<16> stg1_rd4_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd4 read pattern: { stg1_update_0[d0, d1] -> stg0[16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write0 = stg0.stg0_stg0_update_0_write0_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write0;
  return 0;
}

inline hw_uint<16> stg1_rd40_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd40 read pattern: { stg1_update_0[d0, d1] -> stg0[9 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write9 = stg0.stg0_stg0_update_0_write9_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write9;
  return 0;
}

inline hw_uint<16> stg1_rd41_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd41 read pattern: { stg1_update_0[d0, d1] -> stg0[10 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write10 = stg0.stg0_stg0_update_0_write10_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write10;
  return 0;
}

inline hw_uint<16> stg1_rd42_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd42 read pattern: { stg1_update_0[d0, d1] -> stg0[10 + 16d0, 1 + d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write10 = stg0.stg0_stg0_update_0_write10_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write10;
  return 0;
}

inline hw_uint<16> stg1_rd43_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd43 read pattern: { stg1_update_0[d0, d1] -> stg0[11 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write11 = stg0.stg0_stg0_update_0_write11_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write11;
  return 0;
}

inline hw_uint<16> stg1_rd44_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd44 read pattern: { stg1_update_0[d0, d1] -> stg0[10 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write10 = stg0.stg0_stg0_update_0_write10_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write10;
  return 0;
}

inline hw_uint<16> stg1_rd45_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd45 read pattern: { stg1_update_0[d0, d1] -> stg0[11 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write11 = stg0.stg0_stg0_update_0_write11_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write11;
  return 0;
}

inline hw_uint<16> stg1_rd46_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd46 read pattern: { stg1_update_0[d0, d1] -> stg0[11 + 16d0, 1 + d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write11 = stg0.stg0_stg0_update_0_write11_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write11;
  return 0;
}

inline hw_uint<16> stg1_rd47_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd47 read pattern: { stg1_update_0[d0, d1] -> stg0[12 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write12 = stg0.stg0_stg0_update_0_write12_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write12;
  return 0;
}

inline hw_uint<16> stg1_rd48_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd48 read pattern: { stg1_update_0[d0, d1] -> stg0[11 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write11 = stg0.stg0_stg0_update_0_write11_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write11;
  return 0;
}

inline hw_uint<16> stg1_rd49_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd49 read pattern: { stg1_update_0[d0, d1] -> stg0[12 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write12 = stg0.stg0_stg0_update_0_write12_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write12;
  return 0;
}

inline hw_uint<16> stg1_rd5_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd5 read pattern: { stg1_update_0[d0, d1] -> stg0[1 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write1 = stg0.stg0_stg0_update_0_write1_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write1;
  return 0;
}

inline hw_uint<16> stg1_rd50_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd50 read pattern: { stg1_update_0[d0, d1] -> stg0[12 + 16d0, 1 + d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write12 = stg0.stg0_stg0_update_0_write12_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write12;
  return 0;
}

inline hw_uint<16> stg1_rd51_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd51 read pattern: { stg1_update_0[d0, d1] -> stg0[13 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write13 = stg0.stg0_stg0_update_0_write13_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write13;
  return 0;
}

inline hw_uint<16> stg1_rd52_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd52 read pattern: { stg1_update_0[d0, d1] -> stg0[12 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write12 = stg0.stg0_stg0_update_0_write12_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write12;
  return 0;
}

inline hw_uint<16> stg1_rd53_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd53 read pattern: { stg1_update_0[d0, d1] -> stg0[13 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write13 = stg0.stg0_stg0_update_0_write13_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write13;
  return 0;
}

inline hw_uint<16> stg1_rd54_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd54 read pattern: { stg1_update_0[d0, d1] -> stg0[13 + 16d0, 1 + d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write13 = stg0.stg0_stg0_update_0_write13_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write13;
  return 0;
}

inline hw_uint<16> stg1_rd55_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd55 read pattern: { stg1_update_0[d0, d1] -> stg0[14 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write14 = stg0.stg0_stg0_update_0_write14_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write14;
  return 0;
}

inline hw_uint<16> stg1_rd56_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd56 read pattern: { stg1_update_0[d0, d1] -> stg0[13 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write13 = stg0.stg0_stg0_update_0_write13_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write13;
  return 0;
}

inline hw_uint<16> stg1_rd57_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd57 read pattern: { stg1_update_0[d0, d1] -> stg0[14 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write14 = stg0.stg0_stg0_update_0_write14_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write14;
  return 0;
}

inline hw_uint<16> stg1_rd58_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd58 read pattern: { stg1_update_0[d0, d1] -> stg0[14 + 16d0, 1 + d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write14 = stg0.stg0_stg0_update_0_write14_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write14;
  return 0;
}

inline hw_uint<16> stg1_rd59_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd59 read pattern: { stg1_update_0[d0, d1] -> stg0[15 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write15 = stg0.stg0_stg0_update_0_write15_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write15;
  return 0;
}

inline hw_uint<16> stg1_rd6_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd6 read pattern: { stg1_update_0[d0, d1] -> stg0[1 + 16d0, 1 + d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write1 = stg0.stg0_stg0_update_0_write1_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write1;
  return 0;
}

inline hw_uint<16> stg1_rd60_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd60 read pattern: { stg1_update_0[d0, d1] -> stg0[14 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write14 = stg0.stg0_stg0_update_0_write14_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write14;
  return 0;
}

inline hw_uint<16> stg1_rd61_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd61 read pattern: { stg1_update_0[d0, d1] -> stg0[15 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write15 = stg0.stg0_stg0_update_0_write15_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write15;
  return 0;
}

inline hw_uint<16> stg1_rd62_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd62 read pattern: { stg1_update_0[d0, d1] -> stg0[15 + 16d0, 1 + d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write15 = stg0.stg0_stg0_update_0_write15_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write15;
  return 0;
}

inline hw_uint<16> stg1_rd63_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd63 read pattern: { stg1_update_0[d0, d1] -> stg0[16 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write0 = stg0.stg0_stg0_update_0_write0_merged_banks_4.peek_138();
  return value_stg0_stg0_update_0_write0;
  return 0;
}

inline hw_uint<16> stg1_rd7_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd7 read pattern: { stg1_update_0[d0, d1] -> stg0[2 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write2 = stg0.stg0_stg0_update_0_write2_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write2;
  return 0;
}

inline hw_uint<16> stg1_rd8_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd8 read pattern: { stg1_update_0[d0, d1] -> stg0[1 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write1 = stg0.stg0_stg0_update_0_write1_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write1;
  return 0;
}

inline hw_uint<16> stg1_rd9_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd9 read pattern: { stg1_update_0[d0, d1] -> stg0[2 + 16d0, d1] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
  auto value_stg0_stg0_update_0_write2 = stg0.stg0_stg0_update_0_write2_merged_banks_4.peek_139();
  return value_stg0_stg0_update_0_write2;
  return 0;
}

// # of bundles = 2
// stg0_update_0_write
//	stg0_stg0_update_0_write0
//	stg0_stg0_update_0_write1
//	stg0_stg0_update_0_write2
//	stg0_stg0_update_0_write3
//	stg0_stg0_update_0_write4
//	stg0_stg0_update_0_write5
//	stg0_stg0_update_0_write6
//	stg0_stg0_update_0_write7
//	stg0_stg0_update_0_write8
//	stg0_stg0_update_0_write9
//	stg0_stg0_update_0_write10
//	stg0_stg0_update_0_write11
//	stg0_stg0_update_0_write12
//	stg0_stg0_update_0_write13
//	stg0_stg0_update_0_write14
//	stg0_stg0_update_0_write15
inline void stg0_stg0_update_0_write_bundle_write(hw_uint<256>& stg0_update_0_write, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg0_stg0_update_0_write0_res = stg0_update_0_write.extract<0, 15>();
	stg0_stg0_update_0_write0_write(stg0_stg0_update_0_write0_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write1_res = stg0_update_0_write.extract<16, 31>();
	stg0_stg0_update_0_write1_write(stg0_stg0_update_0_write1_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write2_res = stg0_update_0_write.extract<32, 47>();
	stg0_stg0_update_0_write2_write(stg0_stg0_update_0_write2_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write3_res = stg0_update_0_write.extract<48, 63>();
	stg0_stg0_update_0_write3_write(stg0_stg0_update_0_write3_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write4_res = stg0_update_0_write.extract<64, 79>();
	stg0_stg0_update_0_write4_write(stg0_stg0_update_0_write4_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write5_res = stg0_update_0_write.extract<80, 95>();
	stg0_stg0_update_0_write5_write(stg0_stg0_update_0_write5_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write6_res = stg0_update_0_write.extract<96, 111>();
	stg0_stg0_update_0_write6_write(stg0_stg0_update_0_write6_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write7_res = stg0_update_0_write.extract<112, 127>();
	stg0_stg0_update_0_write7_write(stg0_stg0_update_0_write7_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write8_res = stg0_update_0_write.extract<128, 143>();
	stg0_stg0_update_0_write8_write(stg0_stg0_update_0_write8_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write9_res = stg0_update_0_write.extract<144, 159>();
	stg0_stg0_update_0_write9_write(stg0_stg0_update_0_write9_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write10_res = stg0_update_0_write.extract<160, 175>();
	stg0_stg0_update_0_write10_write(stg0_stg0_update_0_write10_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write11_res = stg0_update_0_write.extract<176, 191>();
	stg0_stg0_update_0_write11_write(stg0_stg0_update_0_write11_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write12_res = stg0_update_0_write.extract<192, 207>();
	stg0_stg0_update_0_write12_write(stg0_stg0_update_0_write12_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write13_res = stg0_update_0_write.extract<208, 223>();
	stg0_stg0_update_0_write13_write(stg0_stg0_update_0_write13_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write14_res = stg0_update_0_write.extract<224, 239>();
	stg0_stg0_update_0_write14_write(stg0_stg0_update_0_write14_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write15_res = stg0_update_0_write.extract<240, 255>();
	stg0_stg0_update_0_write15_write(stg0_stg0_update_0_write15_res, stg0, d0, d1, dynamic_address);
}

// stg1_update_0_read
//	stg1_rd0
//	stg1_rd1
//	stg1_rd2
//	stg1_rd3
//	stg1_rd4
//	stg1_rd5
//	stg1_rd6
//	stg1_rd7
//	stg1_rd8
//	stg1_rd9
//	stg1_rd10
//	stg1_rd11
//	stg1_rd12
//	stg1_rd13
//	stg1_rd14
//	stg1_rd15
//	stg1_rd16
//	stg1_rd17
//	stg1_rd18
//	stg1_rd19
//	stg1_rd20
//	stg1_rd21
//	stg1_rd22
//	stg1_rd23
//	stg1_rd24
//	stg1_rd25
//	stg1_rd26
//	stg1_rd27
//	stg1_rd28
//	stg1_rd29
//	stg1_rd30
//	stg1_rd31
//	stg1_rd32
//	stg1_rd33
//	stg1_rd34
//	stg1_rd35
//	stg1_rd36
//	stg1_rd37
//	stg1_rd38
//	stg1_rd39
//	stg1_rd40
//	stg1_rd41
//	stg1_rd42
//	stg1_rd43
//	stg1_rd44
//	stg1_rd45
//	stg1_rd46
//	stg1_rd47
//	stg1_rd48
//	stg1_rd49
//	stg1_rd50
//	stg1_rd51
//	stg1_rd52
//	stg1_rd53
//	stg1_rd54
//	stg1_rd55
//	stg1_rd56
//	stg1_rd57
//	stg1_rd58
//	stg1_rd59
//	stg1_rd60
//	stg1_rd61
//	stg1_rd62
//	stg1_rd63
inline hw_uint<1024> stg0_stg1_update_0_read_bundle_read(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 64
    // stg1_rd0
    // stg1_rd1
    // stg1_rd2
    // stg1_rd3
    // stg1_rd4
    // stg1_rd5
    // stg1_rd6
    // stg1_rd7
    // stg1_rd8
    // stg1_rd9
    // stg1_rd10
    // stg1_rd11
    // stg1_rd12
    // stg1_rd13
    // stg1_rd14
    // stg1_rd15
    // stg1_rd16
    // stg1_rd17
    // stg1_rd18
    // stg1_rd19
    // stg1_rd20
    // stg1_rd21
    // stg1_rd22
    // stg1_rd23
    // stg1_rd24
    // stg1_rd25
    // stg1_rd26
    // stg1_rd27
    // stg1_rd28
    // stg1_rd29
    // stg1_rd30
    // stg1_rd31
    // stg1_rd32
    // stg1_rd33
    // stg1_rd34
    // stg1_rd35
    // stg1_rd36
    // stg1_rd37
    // stg1_rd38
    // stg1_rd39
    // stg1_rd40
    // stg1_rd41
    // stg1_rd42
    // stg1_rd43
    // stg1_rd44
    // stg1_rd45
    // stg1_rd46
    // stg1_rd47
    // stg1_rd48
    // stg1_rd49
    // stg1_rd50
    // stg1_rd51
    // stg1_rd52
    // stg1_rd53
    // stg1_rd54
    // stg1_rd55
    // stg1_rd56
    // stg1_rd57
    // stg1_rd58
    // stg1_rd59
    // stg1_rd60
    // stg1_rd61
    // stg1_rd62
    // stg1_rd63

	hw_uint<1024> result;
	hw_uint<16> stg1_rd0_res = stg1_rd0_select(stg0, d0, d1, dynamic_address);
	set_at<0, 1024>(result, stg1_rd0_res);
	hw_uint<16> stg1_rd1_res = stg1_rd1_select(stg0, d0, d1, dynamic_address);
	set_at<16, 1024>(result, stg1_rd1_res);
	hw_uint<16> stg1_rd2_res = stg1_rd2_select(stg0, d0, d1, dynamic_address);
	set_at<32, 1024>(result, stg1_rd2_res);
	hw_uint<16> stg1_rd3_res = stg1_rd3_select(stg0, d0, d1, dynamic_address);
	set_at<48, 1024>(result, stg1_rd3_res);
	hw_uint<16> stg1_rd4_res = stg1_rd4_select(stg0, d0, d1, dynamic_address);
	set_at<64, 1024>(result, stg1_rd4_res);
	hw_uint<16> stg1_rd5_res = stg1_rd5_select(stg0, d0, d1, dynamic_address);
	set_at<80, 1024>(result, stg1_rd5_res);
	hw_uint<16> stg1_rd6_res = stg1_rd6_select(stg0, d0, d1, dynamic_address);
	set_at<96, 1024>(result, stg1_rd6_res);
	hw_uint<16> stg1_rd7_res = stg1_rd7_select(stg0, d0, d1, dynamic_address);
	set_at<112, 1024>(result, stg1_rd7_res);
	hw_uint<16> stg1_rd8_res = stg1_rd8_select(stg0, d0, d1, dynamic_address);
	set_at<128, 1024>(result, stg1_rd8_res);
	hw_uint<16> stg1_rd9_res = stg1_rd9_select(stg0, d0, d1, dynamic_address);
	set_at<144, 1024>(result, stg1_rd9_res);
	hw_uint<16> stg1_rd10_res = stg1_rd10_select(stg0, d0, d1, dynamic_address);
	set_at<160, 1024>(result, stg1_rd10_res);
	hw_uint<16> stg1_rd11_res = stg1_rd11_select(stg0, d0, d1, dynamic_address);
	set_at<176, 1024>(result, stg1_rd11_res);
	hw_uint<16> stg1_rd12_res = stg1_rd12_select(stg0, d0, d1, dynamic_address);
	set_at<192, 1024>(result, stg1_rd12_res);
	hw_uint<16> stg1_rd13_res = stg1_rd13_select(stg0, d0, d1, dynamic_address);
	set_at<208, 1024>(result, stg1_rd13_res);
	hw_uint<16> stg1_rd14_res = stg1_rd14_select(stg0, d0, d1, dynamic_address);
	set_at<224, 1024>(result, stg1_rd14_res);
	hw_uint<16> stg1_rd15_res = stg1_rd15_select(stg0, d0, d1, dynamic_address);
	set_at<240, 1024>(result, stg1_rd15_res);
	hw_uint<16> stg1_rd16_res = stg1_rd16_select(stg0, d0, d1, dynamic_address);
	set_at<256, 1024>(result, stg1_rd16_res);
	hw_uint<16> stg1_rd17_res = stg1_rd17_select(stg0, d0, d1, dynamic_address);
	set_at<272, 1024>(result, stg1_rd17_res);
	hw_uint<16> stg1_rd18_res = stg1_rd18_select(stg0, d0, d1, dynamic_address);
	set_at<288, 1024>(result, stg1_rd18_res);
	hw_uint<16> stg1_rd19_res = stg1_rd19_select(stg0, d0, d1, dynamic_address);
	set_at<304, 1024>(result, stg1_rd19_res);
	hw_uint<16> stg1_rd20_res = stg1_rd20_select(stg0, d0, d1, dynamic_address);
	set_at<320, 1024>(result, stg1_rd20_res);
	hw_uint<16> stg1_rd21_res = stg1_rd21_select(stg0, d0, d1, dynamic_address);
	set_at<336, 1024>(result, stg1_rd21_res);
	hw_uint<16> stg1_rd22_res = stg1_rd22_select(stg0, d0, d1, dynamic_address);
	set_at<352, 1024>(result, stg1_rd22_res);
	hw_uint<16> stg1_rd23_res = stg1_rd23_select(stg0, d0, d1, dynamic_address);
	set_at<368, 1024>(result, stg1_rd23_res);
	hw_uint<16> stg1_rd24_res = stg1_rd24_select(stg0, d0, d1, dynamic_address);
	set_at<384, 1024>(result, stg1_rd24_res);
	hw_uint<16> stg1_rd25_res = stg1_rd25_select(stg0, d0, d1, dynamic_address);
	set_at<400, 1024>(result, stg1_rd25_res);
	hw_uint<16> stg1_rd26_res = stg1_rd26_select(stg0, d0, d1, dynamic_address);
	set_at<416, 1024>(result, stg1_rd26_res);
	hw_uint<16> stg1_rd27_res = stg1_rd27_select(stg0, d0, d1, dynamic_address);
	set_at<432, 1024>(result, stg1_rd27_res);
	hw_uint<16> stg1_rd28_res = stg1_rd28_select(stg0, d0, d1, dynamic_address);
	set_at<448, 1024>(result, stg1_rd28_res);
	hw_uint<16> stg1_rd29_res = stg1_rd29_select(stg0, d0, d1, dynamic_address);
	set_at<464, 1024>(result, stg1_rd29_res);
	hw_uint<16> stg1_rd30_res = stg1_rd30_select(stg0, d0, d1, dynamic_address);
	set_at<480, 1024>(result, stg1_rd30_res);
	hw_uint<16> stg1_rd31_res = stg1_rd31_select(stg0, d0, d1, dynamic_address);
	set_at<496, 1024>(result, stg1_rd31_res);
	hw_uint<16> stg1_rd32_res = stg1_rd32_select(stg0, d0, d1, dynamic_address);
	set_at<512, 1024>(result, stg1_rd32_res);
	hw_uint<16> stg1_rd33_res = stg1_rd33_select(stg0, d0, d1, dynamic_address);
	set_at<528, 1024>(result, stg1_rd33_res);
	hw_uint<16> stg1_rd34_res = stg1_rd34_select(stg0, d0, d1, dynamic_address);
	set_at<544, 1024>(result, stg1_rd34_res);
	hw_uint<16> stg1_rd35_res = stg1_rd35_select(stg0, d0, d1, dynamic_address);
	set_at<560, 1024>(result, stg1_rd35_res);
	hw_uint<16> stg1_rd36_res = stg1_rd36_select(stg0, d0, d1, dynamic_address);
	set_at<576, 1024>(result, stg1_rd36_res);
	hw_uint<16> stg1_rd37_res = stg1_rd37_select(stg0, d0, d1, dynamic_address);
	set_at<592, 1024>(result, stg1_rd37_res);
	hw_uint<16> stg1_rd38_res = stg1_rd38_select(stg0, d0, d1, dynamic_address);
	set_at<608, 1024>(result, stg1_rd38_res);
	hw_uint<16> stg1_rd39_res = stg1_rd39_select(stg0, d0, d1, dynamic_address);
	set_at<624, 1024>(result, stg1_rd39_res);
	hw_uint<16> stg1_rd40_res = stg1_rd40_select(stg0, d0, d1, dynamic_address);
	set_at<640, 1024>(result, stg1_rd40_res);
	hw_uint<16> stg1_rd41_res = stg1_rd41_select(stg0, d0, d1, dynamic_address);
	set_at<656, 1024>(result, stg1_rd41_res);
	hw_uint<16> stg1_rd42_res = stg1_rd42_select(stg0, d0, d1, dynamic_address);
	set_at<672, 1024>(result, stg1_rd42_res);
	hw_uint<16> stg1_rd43_res = stg1_rd43_select(stg0, d0, d1, dynamic_address);
	set_at<688, 1024>(result, stg1_rd43_res);
	hw_uint<16> stg1_rd44_res = stg1_rd44_select(stg0, d0, d1, dynamic_address);
	set_at<704, 1024>(result, stg1_rd44_res);
	hw_uint<16> stg1_rd45_res = stg1_rd45_select(stg0, d0, d1, dynamic_address);
	set_at<720, 1024>(result, stg1_rd45_res);
	hw_uint<16> stg1_rd46_res = stg1_rd46_select(stg0, d0, d1, dynamic_address);
	set_at<736, 1024>(result, stg1_rd46_res);
	hw_uint<16> stg1_rd47_res = stg1_rd47_select(stg0, d0, d1, dynamic_address);
	set_at<752, 1024>(result, stg1_rd47_res);
	hw_uint<16> stg1_rd48_res = stg1_rd48_select(stg0, d0, d1, dynamic_address);
	set_at<768, 1024>(result, stg1_rd48_res);
	hw_uint<16> stg1_rd49_res = stg1_rd49_select(stg0, d0, d1, dynamic_address);
	set_at<784, 1024>(result, stg1_rd49_res);
	hw_uint<16> stg1_rd50_res = stg1_rd50_select(stg0, d0, d1, dynamic_address);
	set_at<800, 1024>(result, stg1_rd50_res);
	hw_uint<16> stg1_rd51_res = stg1_rd51_select(stg0, d0, d1, dynamic_address);
	set_at<816, 1024>(result, stg1_rd51_res);
	hw_uint<16> stg1_rd52_res = stg1_rd52_select(stg0, d0, d1, dynamic_address);
	set_at<832, 1024>(result, stg1_rd52_res);
	hw_uint<16> stg1_rd53_res = stg1_rd53_select(stg0, d0, d1, dynamic_address);
	set_at<848, 1024>(result, stg1_rd53_res);
	hw_uint<16> stg1_rd54_res = stg1_rd54_select(stg0, d0, d1, dynamic_address);
	set_at<864, 1024>(result, stg1_rd54_res);
	hw_uint<16> stg1_rd55_res = stg1_rd55_select(stg0, d0, d1, dynamic_address);
	set_at<880, 1024>(result, stg1_rd55_res);
	hw_uint<16> stg1_rd56_res = stg1_rd56_select(stg0, d0, d1, dynamic_address);
	set_at<896, 1024>(result, stg1_rd56_res);
	hw_uint<16> stg1_rd57_res = stg1_rd57_select(stg0, d0, d1, dynamic_address);
	set_at<912, 1024>(result, stg1_rd57_res);
	hw_uint<16> stg1_rd58_res = stg1_rd58_select(stg0, d0, d1, dynamic_address);
	set_at<928, 1024>(result, stg1_rd58_res);
	hw_uint<16> stg1_rd59_res = stg1_rd59_select(stg0, d0, d1, dynamic_address);
	set_at<944, 1024>(result, stg1_rd59_res);
	hw_uint<16> stg1_rd60_res = stg1_rd60_select(stg0, d0, d1, dynamic_address);
	set_at<960, 1024>(result, stg1_rd60_res);
	hw_uint<16> stg1_rd61_res = stg1_rd61_select(stg0, d0, d1, dynamic_address);
	set_at<976, 1024>(result, stg1_rd61_res);
	hw_uint<16> stg1_rd62_res = stg1_rd62_select(stg0, d0, d1, dynamic_address);
	set_at<992, 1024>(result, stg1_rd62_res);
	hw_uint<16> stg1_rd63_res = stg1_rd63_select(stg0, d0, d1, dynamic_address);
	set_at<1008, 1024>(result, stg1_rd63_res);
	return result;
}

struct stg1_stg1_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-112, 2032], [0, 1086]}
	// Capacity: 138
	// # of read delays: 4
  // 0, 1, 136, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 134> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_135() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_136() {
		return f4;
	}

	inline hw_uint<16> peek_137() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write1_merged_banks_4_cache {
	// RAM Box: {[-111, 2017], [0, 1087]}
	// Capacity: 138
	// # of read delays: 3
  // 0, 1, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 135> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_137() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write10_merged_banks_4_cache {
	// RAM Box: {[-102, 2026], [0, 1087]}
	// Capacity: 138
	// # of read delays: 3
  // 0, 1, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 135> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_137() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write11_merged_banks_4_cache {
	// RAM Box: {[-101, 2027], [0, 1087]}
	// Capacity: 138
	// # of read delays: 3
  // 0, 1, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 135> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_137() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write12_merged_banks_4_cache {
	// RAM Box: {[-100, 2028], [0, 1087]}
	// Capacity: 138
	// # of read delays: 3
  // 0, 1, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 135> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_137() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write13_merged_banks_4_cache {
	// RAM Box: {[-99, 2029], [0, 1087]}
	// Capacity: 138
	// # of read delays: 3
  // 0, 1, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 135> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_137() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write14_merged_banks_4_cache {
	// RAM Box: {[-98, 2030], [0, 1087]}
	// Capacity: 138
	// # of read delays: 3
  // 0, 1, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 135> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_137() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write15_merged_banks_4_cache {
	// RAM Box: {[-113, 2031], [0, 1087]}
	// Capacity: 139
	// # of read delays: 4
  // 0, 1, 137, 138
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 135> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_137() {
		return f4;
	}

	inline hw_uint<16> peek_138() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write2_merged_banks_4_cache {
	// RAM Box: {[-110, 2018], [0, 1087]}
	// Capacity: 138
	// # of read delays: 3
  // 0, 1, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 135> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_137() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write3_merged_banks_4_cache {
	// RAM Box: {[-109, 2019], [0, 1087]}
	// Capacity: 138
	// # of read delays: 3
  // 0, 1, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 135> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_137() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write4_merged_banks_4_cache {
	// RAM Box: {[-108, 2020], [0, 1087]}
	// Capacity: 138
	// # of read delays: 3
  // 0, 1, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 135> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_137() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write5_merged_banks_4_cache {
	// RAM Box: {[-107, 2021], [0, 1087]}
	// Capacity: 138
	// # of read delays: 3
  // 0, 1, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 135> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_137() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write6_merged_banks_4_cache {
	// RAM Box: {[-106, 2022], [0, 1087]}
	// Capacity: 138
	// # of read delays: 3
  // 0, 1, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 135> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_137() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write7_merged_banks_4_cache {
	// RAM Box: {[-105, 2023], [0, 1087]}
	// Capacity: 138
	// # of read delays: 3
  // 0, 1, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 135> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_137() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write8_merged_banks_4_cache {
	// RAM Box: {[-104, 2024], [0, 1087]}
	// Capacity: 138
	// # of read delays: 3
  // 0, 1, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 135> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_137() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write9_merged_banks_4_cache {
	// RAM Box: {[-103, 2025], [0, 1087]}
	// Capacity: 138
	// # of read delays: 3
  // 0, 1, 137
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 135> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_136() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_137() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_cache {
  // # of banks: 16
  stg1_stg1_update_0_write0_merged_banks_4_cache stg1_stg1_update_0_write0_merged_banks_4;
  stg1_stg1_update_0_write1_merged_banks_4_cache stg1_stg1_update_0_write1_merged_banks_4;
  stg1_stg1_update_0_write10_merged_banks_4_cache stg1_stg1_update_0_write10_merged_banks_4;
  stg1_stg1_update_0_write11_merged_banks_4_cache stg1_stg1_update_0_write11_merged_banks_4;
  stg1_stg1_update_0_write12_merged_banks_4_cache stg1_stg1_update_0_write12_merged_banks_4;
  stg1_stg1_update_0_write13_merged_banks_4_cache stg1_stg1_update_0_write13_merged_banks_4;
  stg1_stg1_update_0_write14_merged_banks_4_cache stg1_stg1_update_0_write14_merged_banks_4;
  stg1_stg1_update_0_write15_merged_banks_4_cache stg1_stg1_update_0_write15_merged_banks_4;
  stg1_stg1_update_0_write2_merged_banks_4_cache stg1_stg1_update_0_write2_merged_banks_4;
  stg1_stg1_update_0_write3_merged_banks_4_cache stg1_stg1_update_0_write3_merged_banks_4;
  stg1_stg1_update_0_write4_merged_banks_4_cache stg1_stg1_update_0_write4_merged_banks_4;
  stg1_stg1_update_0_write5_merged_banks_4_cache stg1_stg1_update_0_write5_merged_banks_4;
  stg1_stg1_update_0_write6_merged_banks_4_cache stg1_stg1_update_0_write6_merged_banks_4;
  stg1_stg1_update_0_write7_merged_banks_4_cache stg1_stg1_update_0_write7_merged_banks_4;
  stg1_stg1_update_0_write8_merged_banks_4_cache stg1_stg1_update_0_write8_merged_banks_4;
  stg1_stg1_update_0_write9_merged_banks_4_cache stg1_stg1_update_0_write9_merged_banks_4;
};



inline void stg1_stg1_update_0_write0_write(hw_uint<16>& stg1_stg1_update_0_write0, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write0_merged_banks_4.push(stg1_stg1_update_0_write0);
}

inline void stg1_stg1_update_0_write1_write(hw_uint<16>& stg1_stg1_update_0_write1, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write1_merged_banks_4.push(stg1_stg1_update_0_write1);
}

inline void stg1_stg1_update_0_write10_write(hw_uint<16>& stg1_stg1_update_0_write10, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write10_merged_banks_4.push(stg1_stg1_update_0_write10);
}

inline void stg1_stg1_update_0_write11_write(hw_uint<16>& stg1_stg1_update_0_write11, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write11_merged_banks_4.push(stg1_stg1_update_0_write11);
}

inline void stg1_stg1_update_0_write12_write(hw_uint<16>& stg1_stg1_update_0_write12, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write12_merged_banks_4.push(stg1_stg1_update_0_write12);
}

inline void stg1_stg1_update_0_write13_write(hw_uint<16>& stg1_stg1_update_0_write13, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write13_merged_banks_4.push(stg1_stg1_update_0_write13);
}

inline void stg1_stg1_update_0_write14_write(hw_uint<16>& stg1_stg1_update_0_write14, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write14_merged_banks_4.push(stg1_stg1_update_0_write14);
}

inline void stg1_stg1_update_0_write15_write(hw_uint<16>& stg1_stg1_update_0_write15, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write15_merged_banks_4.push(stg1_stg1_update_0_write15);
}

inline void stg1_stg1_update_0_write2_write(hw_uint<16>& stg1_stg1_update_0_write2, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write2_merged_banks_4.push(stg1_stg1_update_0_write2);
}

inline void stg1_stg1_update_0_write3_write(hw_uint<16>& stg1_stg1_update_0_write3, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write3_merged_banks_4.push(stg1_stg1_update_0_write3);
}

inline void stg1_stg1_update_0_write4_write(hw_uint<16>& stg1_stg1_update_0_write4, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write4_merged_banks_4.push(stg1_stg1_update_0_write4);
}

inline void stg1_stg1_update_0_write5_write(hw_uint<16>& stg1_stg1_update_0_write5, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write5_merged_banks_4.push(stg1_stg1_update_0_write5);
}

inline void stg1_stg1_update_0_write6_write(hw_uint<16>& stg1_stg1_update_0_write6, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write6_merged_banks_4.push(stg1_stg1_update_0_write6);
}

inline void stg1_stg1_update_0_write7_write(hw_uint<16>& stg1_stg1_update_0_write7, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write7_merged_banks_4.push(stg1_stg1_update_0_write7);
}

inline void stg1_stg1_update_0_write8_write(hw_uint<16>& stg1_stg1_update_0_write8, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write8_merged_banks_4.push(stg1_stg1_update_0_write8);
}

inline void stg1_stg1_update_0_write9_write(hw_uint<16>& stg1_stg1_update_0_write9, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write9_merged_banks_4.push(stg1_stg1_update_0_write9);
}

inline hw_uint<16> stg2_rd0_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd0 read pattern: { stg2_update_0[d0, d1] -> stg1[-1 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write15 = stg1.stg1_stg1_update_0_write15_merged_banks_4.peek_138();
  return value_stg1_stg1_update_0_write15;
  return 0;
}

inline hw_uint<16> stg2_rd1_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd1 read pattern: { stg2_update_0[d0, d1] -> stg1[16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write0 = stg1.stg1_stg1_update_0_write0_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write0;
  return 0;
}

inline hw_uint<16> stg2_rd10_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd10 read pattern: { stg2_update_0[d0, d1] -> stg1[2 + 16d0, 1 + d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write2 = stg1.stg1_stg1_update_0_write2_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write2;
  return 0;
}

inline hw_uint<16> stg2_rd11_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd11 read pattern: { stg2_update_0[d0, d1] -> stg1[3 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write3 = stg1.stg1_stg1_update_0_write3_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write3;
  return 0;
}

inline hw_uint<16> stg2_rd12_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd12 read pattern: { stg2_update_0[d0, d1] -> stg1[2 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write2 = stg1.stg1_stg1_update_0_write2_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write2;
  return 0;
}

inline hw_uint<16> stg2_rd13_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd13 read pattern: { stg2_update_0[d0, d1] -> stg1[3 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write3 = stg1.stg1_stg1_update_0_write3_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write3;
  return 0;
}

inline hw_uint<16> stg2_rd14_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd14 read pattern: { stg2_update_0[d0, d1] -> stg1[3 + 16d0, 1 + d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write3 = stg1.stg1_stg1_update_0_write3_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write3;
  return 0;
}

inline hw_uint<16> stg2_rd15_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd15 read pattern: { stg2_update_0[d0, d1] -> stg1[4 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write4 = stg1.stg1_stg1_update_0_write4_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write4;
  return 0;
}

inline hw_uint<16> stg2_rd16_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd16 read pattern: { stg2_update_0[d0, d1] -> stg1[3 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write3 = stg1.stg1_stg1_update_0_write3_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write3;
  return 0;
}

inline hw_uint<16> stg2_rd17_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd17 read pattern: { stg2_update_0[d0, d1] -> stg1[4 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write4 = stg1.stg1_stg1_update_0_write4_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write4;
  return 0;
}

inline hw_uint<16> stg2_rd18_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd18 read pattern: { stg2_update_0[d0, d1] -> stg1[4 + 16d0, 1 + d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write4 = stg1.stg1_stg1_update_0_write4_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write4;
  return 0;
}

inline hw_uint<16> stg2_rd19_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd19 read pattern: { stg2_update_0[d0, d1] -> stg1[5 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write5 = stg1.stg1_stg1_update_0_write5_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write5;
  return 0;
}

inline hw_uint<16> stg2_rd2_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd2 read pattern: { stg2_update_0[d0, d1] -> stg1[16d0, 1 + d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write0 = stg1.stg1_stg1_update_0_write0_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write0;
  return 0;
}

inline hw_uint<16> stg2_rd20_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd20 read pattern: { stg2_update_0[d0, d1] -> stg1[4 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write4 = stg1.stg1_stg1_update_0_write4_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write4;
  return 0;
}

inline hw_uint<16> stg2_rd21_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd21 read pattern: { stg2_update_0[d0, d1] -> stg1[5 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write5 = stg1.stg1_stg1_update_0_write5_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write5;
  return 0;
}

inline hw_uint<16> stg2_rd22_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd22 read pattern: { stg2_update_0[d0, d1] -> stg1[5 + 16d0, 1 + d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write5 = stg1.stg1_stg1_update_0_write5_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write5;
  return 0;
}

inline hw_uint<16> stg2_rd23_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd23 read pattern: { stg2_update_0[d0, d1] -> stg1[6 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write6 = stg1.stg1_stg1_update_0_write6_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write6;
  return 0;
}

inline hw_uint<16> stg2_rd24_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd24 read pattern: { stg2_update_0[d0, d1] -> stg1[5 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write5 = stg1.stg1_stg1_update_0_write5_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write5;
  return 0;
}

inline hw_uint<16> stg2_rd25_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd25 read pattern: { stg2_update_0[d0, d1] -> stg1[6 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write6 = stg1.stg1_stg1_update_0_write6_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write6;
  return 0;
}

inline hw_uint<16> stg2_rd26_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd26 read pattern: { stg2_update_0[d0, d1] -> stg1[6 + 16d0, 1 + d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write6 = stg1.stg1_stg1_update_0_write6_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write6;
  return 0;
}

inline hw_uint<16> stg2_rd27_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd27 read pattern: { stg2_update_0[d0, d1] -> stg1[7 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write7 = stg1.stg1_stg1_update_0_write7_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write7;
  return 0;
}

inline hw_uint<16> stg2_rd28_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd28 read pattern: { stg2_update_0[d0, d1] -> stg1[6 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write6 = stg1.stg1_stg1_update_0_write6_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write6;
  return 0;
}

inline hw_uint<16> stg2_rd29_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd29 read pattern: { stg2_update_0[d0, d1] -> stg1[7 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write7 = stg1.stg1_stg1_update_0_write7_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write7;
  return 0;
}

inline hw_uint<16> stg2_rd3_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd3 read pattern: { stg2_update_0[d0, d1] -> stg1[1 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write1 = stg1.stg1_stg1_update_0_write1_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write1;
  return 0;
}

inline hw_uint<16> stg2_rd30_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd30 read pattern: { stg2_update_0[d0, d1] -> stg1[7 + 16d0, 1 + d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write7 = stg1.stg1_stg1_update_0_write7_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write7;
  return 0;
}

inline hw_uint<16> stg2_rd31_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd31 read pattern: { stg2_update_0[d0, d1] -> stg1[8 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write8 = stg1.stg1_stg1_update_0_write8_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write8;
  return 0;
}

inline hw_uint<16> stg2_rd32_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd32 read pattern: { stg2_update_0[d0, d1] -> stg1[7 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write7 = stg1.stg1_stg1_update_0_write7_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write7;
  return 0;
}

inline hw_uint<16> stg2_rd33_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd33 read pattern: { stg2_update_0[d0, d1] -> stg1[8 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write8 = stg1.stg1_stg1_update_0_write8_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write8;
  return 0;
}

inline hw_uint<16> stg2_rd34_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd34 read pattern: { stg2_update_0[d0, d1] -> stg1[8 + 16d0, 1 + d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write8 = stg1.stg1_stg1_update_0_write8_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write8;
  return 0;
}

inline hw_uint<16> stg2_rd35_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd35 read pattern: { stg2_update_0[d0, d1] -> stg1[9 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write9 = stg1.stg1_stg1_update_0_write9_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write9;
  return 0;
}

inline hw_uint<16> stg2_rd36_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd36 read pattern: { stg2_update_0[d0, d1] -> stg1[8 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write8 = stg1.stg1_stg1_update_0_write8_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write8;
  return 0;
}

inline hw_uint<16> stg2_rd37_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd37 read pattern: { stg2_update_0[d0, d1] -> stg1[9 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write9 = stg1.stg1_stg1_update_0_write9_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write9;
  return 0;
}

inline hw_uint<16> stg2_rd38_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd38 read pattern: { stg2_update_0[d0, d1] -> stg1[9 + 16d0, 1 + d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write9 = stg1.stg1_stg1_update_0_write9_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write9;
  return 0;
}

inline hw_uint<16> stg2_rd39_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd39 read pattern: { stg2_update_0[d0, d1] -> stg1[10 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write10 = stg1.stg1_stg1_update_0_write10_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write10;
  return 0;
}

inline hw_uint<16> stg2_rd4_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd4 read pattern: { stg2_update_0[d0, d1] -> stg1[16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write0 = stg1.stg1_stg1_update_0_write0_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write0;
  return 0;
}

inline hw_uint<16> stg2_rd40_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd40 read pattern: { stg2_update_0[d0, d1] -> stg1[9 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write9 = stg1.stg1_stg1_update_0_write9_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write9;
  return 0;
}

inline hw_uint<16> stg2_rd41_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd41 read pattern: { stg2_update_0[d0, d1] -> stg1[10 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write10 = stg1.stg1_stg1_update_0_write10_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write10;
  return 0;
}

inline hw_uint<16> stg2_rd42_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd42 read pattern: { stg2_update_0[d0, d1] -> stg1[10 + 16d0, 1 + d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write10 = stg1.stg1_stg1_update_0_write10_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write10;
  return 0;
}

inline hw_uint<16> stg2_rd43_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd43 read pattern: { stg2_update_0[d0, d1] -> stg1[11 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write11 = stg1.stg1_stg1_update_0_write11_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write11;
  return 0;
}

inline hw_uint<16> stg2_rd44_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd44 read pattern: { stg2_update_0[d0, d1] -> stg1[10 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write10 = stg1.stg1_stg1_update_0_write10_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write10;
  return 0;
}

inline hw_uint<16> stg2_rd45_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd45 read pattern: { stg2_update_0[d0, d1] -> stg1[11 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write11 = stg1.stg1_stg1_update_0_write11_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write11;
  return 0;
}

inline hw_uint<16> stg2_rd46_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd46 read pattern: { stg2_update_0[d0, d1] -> stg1[11 + 16d0, 1 + d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write11 = stg1.stg1_stg1_update_0_write11_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write11;
  return 0;
}

inline hw_uint<16> stg2_rd47_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd47 read pattern: { stg2_update_0[d0, d1] -> stg1[12 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write12 = stg1.stg1_stg1_update_0_write12_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write12;
  return 0;
}

inline hw_uint<16> stg2_rd48_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd48 read pattern: { stg2_update_0[d0, d1] -> stg1[11 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write11 = stg1.stg1_stg1_update_0_write11_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write11;
  return 0;
}

inline hw_uint<16> stg2_rd49_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd49 read pattern: { stg2_update_0[d0, d1] -> stg1[12 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write12 = stg1.stg1_stg1_update_0_write12_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write12;
  return 0;
}

inline hw_uint<16> stg2_rd5_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd5 read pattern: { stg2_update_0[d0, d1] -> stg1[1 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write1 = stg1.stg1_stg1_update_0_write1_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write1;
  return 0;
}

inline hw_uint<16> stg2_rd50_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd50 read pattern: { stg2_update_0[d0, d1] -> stg1[12 + 16d0, 1 + d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write12 = stg1.stg1_stg1_update_0_write12_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write12;
  return 0;
}

inline hw_uint<16> stg2_rd51_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd51 read pattern: { stg2_update_0[d0, d1] -> stg1[13 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write13 = stg1.stg1_stg1_update_0_write13_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write13;
  return 0;
}

inline hw_uint<16> stg2_rd52_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd52 read pattern: { stg2_update_0[d0, d1] -> stg1[12 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write12 = stg1.stg1_stg1_update_0_write12_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write12;
  return 0;
}

inline hw_uint<16> stg2_rd53_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd53 read pattern: { stg2_update_0[d0, d1] -> stg1[13 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write13 = stg1.stg1_stg1_update_0_write13_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write13;
  return 0;
}

inline hw_uint<16> stg2_rd54_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd54 read pattern: { stg2_update_0[d0, d1] -> stg1[13 + 16d0, 1 + d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write13 = stg1.stg1_stg1_update_0_write13_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write13;
  return 0;
}

inline hw_uint<16> stg2_rd55_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd55 read pattern: { stg2_update_0[d0, d1] -> stg1[14 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write14 = stg1.stg1_stg1_update_0_write14_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write14;
  return 0;
}

inline hw_uint<16> stg2_rd56_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd56 read pattern: { stg2_update_0[d0, d1] -> stg1[13 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write13 = stg1.stg1_stg1_update_0_write13_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write13;
  return 0;
}

inline hw_uint<16> stg2_rd57_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd57 read pattern: { stg2_update_0[d0, d1] -> stg1[14 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write14 = stg1.stg1_stg1_update_0_write14_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write14;
  return 0;
}

inline hw_uint<16> stg2_rd58_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd58 read pattern: { stg2_update_0[d0, d1] -> stg1[14 + 16d0, 1 + d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write14 = stg1.stg1_stg1_update_0_write14_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write14;
  return 0;
}

inline hw_uint<16> stg2_rd59_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd59 read pattern: { stg2_update_0[d0, d1] -> stg1[15 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write15 = stg1.stg1_stg1_update_0_write15_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write15;
  return 0;
}

inline hw_uint<16> stg2_rd6_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd6 read pattern: { stg2_update_0[d0, d1] -> stg1[1 + 16d0, 1 + d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write1 = stg1.stg1_stg1_update_0_write1_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write1;
  return 0;
}

inline hw_uint<16> stg2_rd60_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd60 read pattern: { stg2_update_0[d0, d1] -> stg1[14 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write14 = stg1.stg1_stg1_update_0_write14_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write14;
  return 0;
}

inline hw_uint<16> stg2_rd61_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd61 read pattern: { stg2_update_0[d0, d1] -> stg1[15 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write15 = stg1.stg1_stg1_update_0_write15_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write15;
  return 0;
}

inline hw_uint<16> stg2_rd62_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd62 read pattern: { stg2_update_0[d0, d1] -> stg1[15 + 16d0, 1 + d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write15 = stg1.stg1_stg1_update_0_write15_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write15;
  return 0;
}

inline hw_uint<16> stg2_rd63_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd63 read pattern: { stg2_update_0[d0, d1] -> stg1[16 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write0 = stg1.stg1_stg1_update_0_write0_merged_banks_4.peek_136();
  return value_stg1_stg1_update_0_write0;
  return 0;
}

inline hw_uint<16> stg2_rd7_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd7 read pattern: { stg2_update_0[d0, d1] -> stg1[2 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write2 = stg1.stg1_stg1_update_0_write2_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write2;
  return 0;
}

inline hw_uint<16> stg2_rd8_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd8 read pattern: { stg2_update_0[d0, d1] -> stg1[1 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write1 = stg1.stg1_stg1_update_0_write1_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write1;
  return 0;
}

inline hw_uint<16> stg2_rd9_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd9 read pattern: { stg2_update_0[d0, d1] -> stg1[2 + 16d0, d1] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
  auto value_stg1_stg1_update_0_write2 = stg1.stg1_stg1_update_0_write2_merged_banks_4.peek_137();
  return value_stg1_stg1_update_0_write2;
  return 0;
}

// # of bundles = 2
// stg1_update_0_write
//	stg1_stg1_update_0_write0
//	stg1_stg1_update_0_write1
//	stg1_stg1_update_0_write2
//	stg1_stg1_update_0_write3
//	stg1_stg1_update_0_write4
//	stg1_stg1_update_0_write5
//	stg1_stg1_update_0_write6
//	stg1_stg1_update_0_write7
//	stg1_stg1_update_0_write8
//	stg1_stg1_update_0_write9
//	stg1_stg1_update_0_write10
//	stg1_stg1_update_0_write11
//	stg1_stg1_update_0_write12
//	stg1_stg1_update_0_write13
//	stg1_stg1_update_0_write14
//	stg1_stg1_update_0_write15
inline void stg1_stg1_update_0_write_bundle_write(hw_uint<256>& stg1_update_0_write, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg1_stg1_update_0_write0_res = stg1_update_0_write.extract<0, 15>();
	stg1_stg1_update_0_write0_write(stg1_stg1_update_0_write0_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write1_res = stg1_update_0_write.extract<16, 31>();
	stg1_stg1_update_0_write1_write(stg1_stg1_update_0_write1_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write2_res = stg1_update_0_write.extract<32, 47>();
	stg1_stg1_update_0_write2_write(stg1_stg1_update_0_write2_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write3_res = stg1_update_0_write.extract<48, 63>();
	stg1_stg1_update_0_write3_write(stg1_stg1_update_0_write3_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write4_res = stg1_update_0_write.extract<64, 79>();
	stg1_stg1_update_0_write4_write(stg1_stg1_update_0_write4_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write5_res = stg1_update_0_write.extract<80, 95>();
	stg1_stg1_update_0_write5_write(stg1_stg1_update_0_write5_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write6_res = stg1_update_0_write.extract<96, 111>();
	stg1_stg1_update_0_write6_write(stg1_stg1_update_0_write6_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write7_res = stg1_update_0_write.extract<112, 127>();
	stg1_stg1_update_0_write7_write(stg1_stg1_update_0_write7_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write8_res = stg1_update_0_write.extract<128, 143>();
	stg1_stg1_update_0_write8_write(stg1_stg1_update_0_write8_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write9_res = stg1_update_0_write.extract<144, 159>();
	stg1_stg1_update_0_write9_write(stg1_stg1_update_0_write9_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write10_res = stg1_update_0_write.extract<160, 175>();
	stg1_stg1_update_0_write10_write(stg1_stg1_update_0_write10_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write11_res = stg1_update_0_write.extract<176, 191>();
	stg1_stg1_update_0_write11_write(stg1_stg1_update_0_write11_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write12_res = stg1_update_0_write.extract<192, 207>();
	stg1_stg1_update_0_write12_write(stg1_stg1_update_0_write12_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write13_res = stg1_update_0_write.extract<208, 223>();
	stg1_stg1_update_0_write13_write(stg1_stg1_update_0_write13_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write14_res = stg1_update_0_write.extract<224, 239>();
	stg1_stg1_update_0_write14_write(stg1_stg1_update_0_write14_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write15_res = stg1_update_0_write.extract<240, 255>();
	stg1_stg1_update_0_write15_write(stg1_stg1_update_0_write15_res, stg1, d0, d1, dynamic_address);
}

// stg2_update_0_read
//	stg2_rd0
//	stg2_rd1
//	stg2_rd2
//	stg2_rd3
//	stg2_rd4
//	stg2_rd5
//	stg2_rd6
//	stg2_rd7
//	stg2_rd8
//	stg2_rd9
//	stg2_rd10
//	stg2_rd11
//	stg2_rd12
//	stg2_rd13
//	stg2_rd14
//	stg2_rd15
//	stg2_rd16
//	stg2_rd17
//	stg2_rd18
//	stg2_rd19
//	stg2_rd20
//	stg2_rd21
//	stg2_rd22
//	stg2_rd23
//	stg2_rd24
//	stg2_rd25
//	stg2_rd26
//	stg2_rd27
//	stg2_rd28
//	stg2_rd29
//	stg2_rd30
//	stg2_rd31
//	stg2_rd32
//	stg2_rd33
//	stg2_rd34
//	stg2_rd35
//	stg2_rd36
//	stg2_rd37
//	stg2_rd38
//	stg2_rd39
//	stg2_rd40
//	stg2_rd41
//	stg2_rd42
//	stg2_rd43
//	stg2_rd44
//	stg2_rd45
//	stg2_rd46
//	stg2_rd47
//	stg2_rd48
//	stg2_rd49
//	stg2_rd50
//	stg2_rd51
//	stg2_rd52
//	stg2_rd53
//	stg2_rd54
//	stg2_rd55
//	stg2_rd56
//	stg2_rd57
//	stg2_rd58
//	stg2_rd59
//	stg2_rd60
//	stg2_rd61
//	stg2_rd62
//	stg2_rd63
inline hw_uint<1024> stg1_stg2_update_0_read_bundle_read(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 64
    // stg2_rd0
    // stg2_rd1
    // stg2_rd2
    // stg2_rd3
    // stg2_rd4
    // stg2_rd5
    // stg2_rd6
    // stg2_rd7
    // stg2_rd8
    // stg2_rd9
    // stg2_rd10
    // stg2_rd11
    // stg2_rd12
    // stg2_rd13
    // stg2_rd14
    // stg2_rd15
    // stg2_rd16
    // stg2_rd17
    // stg2_rd18
    // stg2_rd19
    // stg2_rd20
    // stg2_rd21
    // stg2_rd22
    // stg2_rd23
    // stg2_rd24
    // stg2_rd25
    // stg2_rd26
    // stg2_rd27
    // stg2_rd28
    // stg2_rd29
    // stg2_rd30
    // stg2_rd31
    // stg2_rd32
    // stg2_rd33
    // stg2_rd34
    // stg2_rd35
    // stg2_rd36
    // stg2_rd37
    // stg2_rd38
    // stg2_rd39
    // stg2_rd40
    // stg2_rd41
    // stg2_rd42
    // stg2_rd43
    // stg2_rd44
    // stg2_rd45
    // stg2_rd46
    // stg2_rd47
    // stg2_rd48
    // stg2_rd49
    // stg2_rd50
    // stg2_rd51
    // stg2_rd52
    // stg2_rd53
    // stg2_rd54
    // stg2_rd55
    // stg2_rd56
    // stg2_rd57
    // stg2_rd58
    // stg2_rd59
    // stg2_rd60
    // stg2_rd61
    // stg2_rd62
    // stg2_rd63

	hw_uint<1024> result;
	hw_uint<16> stg2_rd0_res = stg2_rd0_select(stg1, d0, d1, dynamic_address);
	set_at<0, 1024>(result, stg2_rd0_res);
	hw_uint<16> stg2_rd1_res = stg2_rd1_select(stg1, d0, d1, dynamic_address);
	set_at<16, 1024>(result, stg2_rd1_res);
	hw_uint<16> stg2_rd2_res = stg2_rd2_select(stg1, d0, d1, dynamic_address);
	set_at<32, 1024>(result, stg2_rd2_res);
	hw_uint<16> stg2_rd3_res = stg2_rd3_select(stg1, d0, d1, dynamic_address);
	set_at<48, 1024>(result, stg2_rd3_res);
	hw_uint<16> stg2_rd4_res = stg2_rd4_select(stg1, d0, d1, dynamic_address);
	set_at<64, 1024>(result, stg2_rd4_res);
	hw_uint<16> stg2_rd5_res = stg2_rd5_select(stg1, d0, d1, dynamic_address);
	set_at<80, 1024>(result, stg2_rd5_res);
	hw_uint<16> stg2_rd6_res = stg2_rd6_select(stg1, d0, d1, dynamic_address);
	set_at<96, 1024>(result, stg2_rd6_res);
	hw_uint<16> stg2_rd7_res = stg2_rd7_select(stg1, d0, d1, dynamic_address);
	set_at<112, 1024>(result, stg2_rd7_res);
	hw_uint<16> stg2_rd8_res = stg2_rd8_select(stg1, d0, d1, dynamic_address);
	set_at<128, 1024>(result, stg2_rd8_res);
	hw_uint<16> stg2_rd9_res = stg2_rd9_select(stg1, d0, d1, dynamic_address);
	set_at<144, 1024>(result, stg2_rd9_res);
	hw_uint<16> stg2_rd10_res = stg2_rd10_select(stg1, d0, d1, dynamic_address);
	set_at<160, 1024>(result, stg2_rd10_res);
	hw_uint<16> stg2_rd11_res = stg2_rd11_select(stg1, d0, d1, dynamic_address);
	set_at<176, 1024>(result, stg2_rd11_res);
	hw_uint<16> stg2_rd12_res = stg2_rd12_select(stg1, d0, d1, dynamic_address);
	set_at<192, 1024>(result, stg2_rd12_res);
	hw_uint<16> stg2_rd13_res = stg2_rd13_select(stg1, d0, d1, dynamic_address);
	set_at<208, 1024>(result, stg2_rd13_res);
	hw_uint<16> stg2_rd14_res = stg2_rd14_select(stg1, d0, d1, dynamic_address);
	set_at<224, 1024>(result, stg2_rd14_res);
	hw_uint<16> stg2_rd15_res = stg2_rd15_select(stg1, d0, d1, dynamic_address);
	set_at<240, 1024>(result, stg2_rd15_res);
	hw_uint<16> stg2_rd16_res = stg2_rd16_select(stg1, d0, d1, dynamic_address);
	set_at<256, 1024>(result, stg2_rd16_res);
	hw_uint<16> stg2_rd17_res = stg2_rd17_select(stg1, d0, d1, dynamic_address);
	set_at<272, 1024>(result, stg2_rd17_res);
	hw_uint<16> stg2_rd18_res = stg2_rd18_select(stg1, d0, d1, dynamic_address);
	set_at<288, 1024>(result, stg2_rd18_res);
	hw_uint<16> stg2_rd19_res = stg2_rd19_select(stg1, d0, d1, dynamic_address);
	set_at<304, 1024>(result, stg2_rd19_res);
	hw_uint<16> stg2_rd20_res = stg2_rd20_select(stg1, d0, d1, dynamic_address);
	set_at<320, 1024>(result, stg2_rd20_res);
	hw_uint<16> stg2_rd21_res = stg2_rd21_select(stg1, d0, d1, dynamic_address);
	set_at<336, 1024>(result, stg2_rd21_res);
	hw_uint<16> stg2_rd22_res = stg2_rd22_select(stg1, d0, d1, dynamic_address);
	set_at<352, 1024>(result, stg2_rd22_res);
	hw_uint<16> stg2_rd23_res = stg2_rd23_select(stg1, d0, d1, dynamic_address);
	set_at<368, 1024>(result, stg2_rd23_res);
	hw_uint<16> stg2_rd24_res = stg2_rd24_select(stg1, d0, d1, dynamic_address);
	set_at<384, 1024>(result, stg2_rd24_res);
	hw_uint<16> stg2_rd25_res = stg2_rd25_select(stg1, d0, d1, dynamic_address);
	set_at<400, 1024>(result, stg2_rd25_res);
	hw_uint<16> stg2_rd26_res = stg2_rd26_select(stg1, d0, d1, dynamic_address);
	set_at<416, 1024>(result, stg2_rd26_res);
	hw_uint<16> stg2_rd27_res = stg2_rd27_select(stg1, d0, d1, dynamic_address);
	set_at<432, 1024>(result, stg2_rd27_res);
	hw_uint<16> stg2_rd28_res = stg2_rd28_select(stg1, d0, d1, dynamic_address);
	set_at<448, 1024>(result, stg2_rd28_res);
	hw_uint<16> stg2_rd29_res = stg2_rd29_select(stg1, d0, d1, dynamic_address);
	set_at<464, 1024>(result, stg2_rd29_res);
	hw_uint<16> stg2_rd30_res = stg2_rd30_select(stg1, d0, d1, dynamic_address);
	set_at<480, 1024>(result, stg2_rd30_res);
	hw_uint<16> stg2_rd31_res = stg2_rd31_select(stg1, d0, d1, dynamic_address);
	set_at<496, 1024>(result, stg2_rd31_res);
	hw_uint<16> stg2_rd32_res = stg2_rd32_select(stg1, d0, d1, dynamic_address);
	set_at<512, 1024>(result, stg2_rd32_res);
	hw_uint<16> stg2_rd33_res = stg2_rd33_select(stg1, d0, d1, dynamic_address);
	set_at<528, 1024>(result, stg2_rd33_res);
	hw_uint<16> stg2_rd34_res = stg2_rd34_select(stg1, d0, d1, dynamic_address);
	set_at<544, 1024>(result, stg2_rd34_res);
	hw_uint<16> stg2_rd35_res = stg2_rd35_select(stg1, d0, d1, dynamic_address);
	set_at<560, 1024>(result, stg2_rd35_res);
	hw_uint<16> stg2_rd36_res = stg2_rd36_select(stg1, d0, d1, dynamic_address);
	set_at<576, 1024>(result, stg2_rd36_res);
	hw_uint<16> stg2_rd37_res = stg2_rd37_select(stg1, d0, d1, dynamic_address);
	set_at<592, 1024>(result, stg2_rd37_res);
	hw_uint<16> stg2_rd38_res = stg2_rd38_select(stg1, d0, d1, dynamic_address);
	set_at<608, 1024>(result, stg2_rd38_res);
	hw_uint<16> stg2_rd39_res = stg2_rd39_select(stg1, d0, d1, dynamic_address);
	set_at<624, 1024>(result, stg2_rd39_res);
	hw_uint<16> stg2_rd40_res = stg2_rd40_select(stg1, d0, d1, dynamic_address);
	set_at<640, 1024>(result, stg2_rd40_res);
	hw_uint<16> stg2_rd41_res = stg2_rd41_select(stg1, d0, d1, dynamic_address);
	set_at<656, 1024>(result, stg2_rd41_res);
	hw_uint<16> stg2_rd42_res = stg2_rd42_select(stg1, d0, d1, dynamic_address);
	set_at<672, 1024>(result, stg2_rd42_res);
	hw_uint<16> stg2_rd43_res = stg2_rd43_select(stg1, d0, d1, dynamic_address);
	set_at<688, 1024>(result, stg2_rd43_res);
	hw_uint<16> stg2_rd44_res = stg2_rd44_select(stg1, d0, d1, dynamic_address);
	set_at<704, 1024>(result, stg2_rd44_res);
	hw_uint<16> stg2_rd45_res = stg2_rd45_select(stg1, d0, d1, dynamic_address);
	set_at<720, 1024>(result, stg2_rd45_res);
	hw_uint<16> stg2_rd46_res = stg2_rd46_select(stg1, d0, d1, dynamic_address);
	set_at<736, 1024>(result, stg2_rd46_res);
	hw_uint<16> stg2_rd47_res = stg2_rd47_select(stg1, d0, d1, dynamic_address);
	set_at<752, 1024>(result, stg2_rd47_res);
	hw_uint<16> stg2_rd48_res = stg2_rd48_select(stg1, d0, d1, dynamic_address);
	set_at<768, 1024>(result, stg2_rd48_res);
	hw_uint<16> stg2_rd49_res = stg2_rd49_select(stg1, d0, d1, dynamic_address);
	set_at<784, 1024>(result, stg2_rd49_res);
	hw_uint<16> stg2_rd50_res = stg2_rd50_select(stg1, d0, d1, dynamic_address);
	set_at<800, 1024>(result, stg2_rd50_res);
	hw_uint<16> stg2_rd51_res = stg2_rd51_select(stg1, d0, d1, dynamic_address);
	set_at<816, 1024>(result, stg2_rd51_res);
	hw_uint<16> stg2_rd52_res = stg2_rd52_select(stg1, d0, d1, dynamic_address);
	set_at<832, 1024>(result, stg2_rd52_res);
	hw_uint<16> stg2_rd53_res = stg2_rd53_select(stg1, d0, d1, dynamic_address);
	set_at<848, 1024>(result, stg2_rd53_res);
	hw_uint<16> stg2_rd54_res = stg2_rd54_select(stg1, d0, d1, dynamic_address);
	set_at<864, 1024>(result, stg2_rd54_res);
	hw_uint<16> stg2_rd55_res = stg2_rd55_select(stg1, d0, d1, dynamic_address);
	set_at<880, 1024>(result, stg2_rd55_res);
	hw_uint<16> stg2_rd56_res = stg2_rd56_select(stg1, d0, d1, dynamic_address);
	set_at<896, 1024>(result, stg2_rd56_res);
	hw_uint<16> stg2_rd57_res = stg2_rd57_select(stg1, d0, d1, dynamic_address);
	set_at<912, 1024>(result, stg2_rd57_res);
	hw_uint<16> stg2_rd58_res = stg2_rd58_select(stg1, d0, d1, dynamic_address);
	set_at<928, 1024>(result, stg2_rd58_res);
	hw_uint<16> stg2_rd59_res = stg2_rd59_select(stg1, d0, d1, dynamic_address);
	set_at<944, 1024>(result, stg2_rd59_res);
	hw_uint<16> stg2_rd60_res = stg2_rd60_select(stg1, d0, d1, dynamic_address);
	set_at<960, 1024>(result, stg2_rd60_res);
	hw_uint<16> stg2_rd61_res = stg2_rd61_select(stg1, d0, d1, dynamic_address);
	set_at<976, 1024>(result, stg2_rd61_res);
	hw_uint<16> stg2_rd62_res = stg2_rd62_select(stg1, d0, d1, dynamic_address);
	set_at<992, 1024>(result, stg2_rd62_res);
	hw_uint<16> stg2_rd63_res = stg2_rd63_select(stg1, d0, d1, dynamic_address);
	set_at<1008, 1024>(result, stg2_rd63_res);
	return result;
}

struct stg2_stg2_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-96, 2016], [0, 1085]}
	// Capacity: 136
	// # of read delays: 4
  // 0, 1, 134, 135
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 132> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_133() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_134() {
		return f4;
	}

	inline hw_uint<16> peek_135() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg2_stg2_update_0_write1_merged_banks_4_cache {
	// RAM Box: {[-95, 2001], [0, 1086]}
	// Capacity: 136
	// # of read delays: 3
  // 0, 1, 135
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 133> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_135() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg2_stg2_update_0_write10_merged_banks_4_cache {
	// RAM Box: {[-86, 2010], [0, 1086]}
	// Capacity: 136
	// # of read delays: 3
  // 0, 1, 135
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 133> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_135() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg2_stg2_update_0_write11_merged_banks_4_cache {
	// RAM Box: {[-85, 2011], [0, 1086]}
	// Capacity: 136
	// # of read delays: 3
  // 0, 1, 135
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 133> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_135() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg2_stg2_update_0_write12_merged_banks_4_cache {
	// RAM Box: {[-84, 2012], [0, 1086]}
	// Capacity: 136
	// # of read delays: 3
  // 0, 1, 135
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 133> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_135() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg2_stg2_update_0_write13_merged_banks_4_cache {
	// RAM Box: {[-83, 2013], [0, 1086]}
	// Capacity: 136
	// # of read delays: 3
  // 0, 1, 135
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 133> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_135() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg2_stg2_update_0_write14_merged_banks_4_cache {
	// RAM Box: {[-82, 2014], [0, 1086]}
	// Capacity: 136
	// # of read delays: 3
  // 0, 1, 135
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 133> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_135() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg2_stg2_update_0_write15_merged_banks_4_cache {
	// RAM Box: {[-97, 2015], [0, 1086]}
	// Capacity: 137
	// # of read delays: 4
  // 0, 1, 135, 136
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 133> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_135() {
		return f4;
	}

	inline hw_uint<16> peek_136() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg2_stg2_update_0_write2_merged_banks_4_cache {
	// RAM Box: {[-94, 2002], [0, 1086]}
	// Capacity: 136
	// # of read delays: 3
  // 0, 1, 135
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 133> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_135() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg2_stg2_update_0_write3_merged_banks_4_cache {
	// RAM Box: {[-93, 2003], [0, 1086]}
	// Capacity: 136
	// # of read delays: 3
  // 0, 1, 135
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 133> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_135() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg2_stg2_update_0_write4_merged_banks_4_cache {
	// RAM Box: {[-92, 2004], [0, 1086]}
	// Capacity: 136
	// # of read delays: 3
  // 0, 1, 135
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 133> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_135() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg2_stg2_update_0_write5_merged_banks_4_cache {
	// RAM Box: {[-91, 2005], [0, 1086]}
	// Capacity: 136
	// # of read delays: 3
  // 0, 1, 135
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 133> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_135() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg2_stg2_update_0_write6_merged_banks_4_cache {
	// RAM Box: {[-90, 2006], [0, 1086]}
	// Capacity: 136
	// # of read delays: 3
  // 0, 1, 135
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 133> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_135() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg2_stg2_update_0_write7_merged_banks_4_cache {
	// RAM Box: {[-89, 2007], [0, 1086]}
	// Capacity: 136
	// # of read delays: 3
  // 0, 1, 135
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 133> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_135() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg2_stg2_update_0_write8_merged_banks_4_cache {
	// RAM Box: {[-88, 2008], [0, 1086]}
	// Capacity: 136
	// # of read delays: 3
  // 0, 1, 135
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 133> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_135() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg2_stg2_update_0_write9_merged_banks_4_cache {
	// RAM Box: {[-87, 2009], [0, 1086]}
	// Capacity: 136
	// # of read delays: 3
  // 0, 1, 135
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 133> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_134() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_135() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg2_cache {
  // # of banks: 16
  stg2_stg2_update_0_write0_merged_banks_4_cache stg2_stg2_update_0_write0_merged_banks_4;
  stg2_stg2_update_0_write1_merged_banks_4_cache stg2_stg2_update_0_write1_merged_banks_4;
  stg2_stg2_update_0_write10_merged_banks_4_cache stg2_stg2_update_0_write10_merged_banks_4;
  stg2_stg2_update_0_write11_merged_banks_4_cache stg2_stg2_update_0_write11_merged_banks_4;
  stg2_stg2_update_0_write12_merged_banks_4_cache stg2_stg2_update_0_write12_merged_banks_4;
  stg2_stg2_update_0_write13_merged_banks_4_cache stg2_stg2_update_0_write13_merged_banks_4;
  stg2_stg2_update_0_write14_merged_banks_4_cache stg2_stg2_update_0_write14_merged_banks_4;
  stg2_stg2_update_0_write15_merged_banks_4_cache stg2_stg2_update_0_write15_merged_banks_4;
  stg2_stg2_update_0_write2_merged_banks_4_cache stg2_stg2_update_0_write2_merged_banks_4;
  stg2_stg2_update_0_write3_merged_banks_4_cache stg2_stg2_update_0_write3_merged_banks_4;
  stg2_stg2_update_0_write4_merged_banks_4_cache stg2_stg2_update_0_write4_merged_banks_4;
  stg2_stg2_update_0_write5_merged_banks_4_cache stg2_stg2_update_0_write5_merged_banks_4;
  stg2_stg2_update_0_write6_merged_banks_4_cache stg2_stg2_update_0_write6_merged_banks_4;
  stg2_stg2_update_0_write7_merged_banks_4_cache stg2_stg2_update_0_write7_merged_banks_4;
  stg2_stg2_update_0_write8_merged_banks_4_cache stg2_stg2_update_0_write8_merged_banks_4;
  stg2_stg2_update_0_write9_merged_banks_4_cache stg2_stg2_update_0_write9_merged_banks_4;
};



inline void stg2_stg2_update_0_write0_write(hw_uint<16>& stg2_stg2_update_0_write0, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write0_merged_banks_4.push(stg2_stg2_update_0_write0);
}

inline void stg2_stg2_update_0_write1_write(hw_uint<16>& stg2_stg2_update_0_write1, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write1_merged_banks_4.push(stg2_stg2_update_0_write1);
}

inline void stg2_stg2_update_0_write10_write(hw_uint<16>& stg2_stg2_update_0_write10, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write10_merged_banks_4.push(stg2_stg2_update_0_write10);
}

inline void stg2_stg2_update_0_write11_write(hw_uint<16>& stg2_stg2_update_0_write11, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write11_merged_banks_4.push(stg2_stg2_update_0_write11);
}

inline void stg2_stg2_update_0_write12_write(hw_uint<16>& stg2_stg2_update_0_write12, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write12_merged_banks_4.push(stg2_stg2_update_0_write12);
}

inline void stg2_stg2_update_0_write13_write(hw_uint<16>& stg2_stg2_update_0_write13, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write13_merged_banks_4.push(stg2_stg2_update_0_write13);
}

inline void stg2_stg2_update_0_write14_write(hw_uint<16>& stg2_stg2_update_0_write14, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write14_merged_banks_4.push(stg2_stg2_update_0_write14);
}

inline void stg2_stg2_update_0_write15_write(hw_uint<16>& stg2_stg2_update_0_write15, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write15_merged_banks_4.push(stg2_stg2_update_0_write15);
}

inline void stg2_stg2_update_0_write2_write(hw_uint<16>& stg2_stg2_update_0_write2, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write2_merged_banks_4.push(stg2_stg2_update_0_write2);
}

inline void stg2_stg2_update_0_write3_write(hw_uint<16>& stg2_stg2_update_0_write3, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write3_merged_banks_4.push(stg2_stg2_update_0_write3);
}

inline void stg2_stg2_update_0_write4_write(hw_uint<16>& stg2_stg2_update_0_write4, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write4_merged_banks_4.push(stg2_stg2_update_0_write4);
}

inline void stg2_stg2_update_0_write5_write(hw_uint<16>& stg2_stg2_update_0_write5, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write5_merged_banks_4.push(stg2_stg2_update_0_write5);
}

inline void stg2_stg2_update_0_write6_write(hw_uint<16>& stg2_stg2_update_0_write6, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write6_merged_banks_4.push(stg2_stg2_update_0_write6);
}

inline void stg2_stg2_update_0_write7_write(hw_uint<16>& stg2_stg2_update_0_write7, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write7_merged_banks_4.push(stg2_stg2_update_0_write7);
}

inline void stg2_stg2_update_0_write8_write(hw_uint<16>& stg2_stg2_update_0_write8, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write8_merged_banks_4.push(stg2_stg2_update_0_write8);
}

inline void stg2_stg2_update_0_write9_write(hw_uint<16>& stg2_stg2_update_0_write9, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write9_merged_banks_4.push(stg2_stg2_update_0_write9);
}

inline hw_uint<16> stg3_rd0_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd0 read pattern: { stg3_update_0[d0, d1] -> stg2[-1 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write15 = stg2.stg2_stg2_update_0_write15_merged_banks_4.peek_136();
  return value_stg2_stg2_update_0_write15;
  return 0;
}

inline hw_uint<16> stg3_rd1_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd1 read pattern: { stg3_update_0[d0, d1] -> stg2[16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write0 = stg2.stg2_stg2_update_0_write0_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write0;
  return 0;
}

inline hw_uint<16> stg3_rd10_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd10 read pattern: { stg3_update_0[d0, d1] -> stg2[2 + 16d0, 1 + d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write2 = stg2.stg2_stg2_update_0_write2_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write2;
  return 0;
}

inline hw_uint<16> stg3_rd11_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd11 read pattern: { stg3_update_0[d0, d1] -> stg2[3 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write3 = stg2.stg2_stg2_update_0_write3_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write3;
  return 0;
}

inline hw_uint<16> stg3_rd12_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd12 read pattern: { stg3_update_0[d0, d1] -> stg2[2 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write2 = stg2.stg2_stg2_update_0_write2_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write2;
  return 0;
}

inline hw_uint<16> stg3_rd13_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd13 read pattern: { stg3_update_0[d0, d1] -> stg2[3 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write3 = stg2.stg2_stg2_update_0_write3_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write3;
  return 0;
}

inline hw_uint<16> stg3_rd14_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd14 read pattern: { stg3_update_0[d0, d1] -> stg2[3 + 16d0, 1 + d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write3 = stg2.stg2_stg2_update_0_write3_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write3;
  return 0;
}

inline hw_uint<16> stg3_rd15_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd15 read pattern: { stg3_update_0[d0, d1] -> stg2[4 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write4 = stg2.stg2_stg2_update_0_write4_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write4;
  return 0;
}

inline hw_uint<16> stg3_rd16_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd16 read pattern: { stg3_update_0[d0, d1] -> stg2[3 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write3 = stg2.stg2_stg2_update_0_write3_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write3;
  return 0;
}

inline hw_uint<16> stg3_rd17_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd17 read pattern: { stg3_update_0[d0, d1] -> stg2[4 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write4 = stg2.stg2_stg2_update_0_write4_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write4;
  return 0;
}

inline hw_uint<16> stg3_rd18_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd18 read pattern: { stg3_update_0[d0, d1] -> stg2[4 + 16d0, 1 + d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write4 = stg2.stg2_stg2_update_0_write4_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write4;
  return 0;
}

inline hw_uint<16> stg3_rd19_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd19 read pattern: { stg3_update_0[d0, d1] -> stg2[5 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write5 = stg2.stg2_stg2_update_0_write5_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write5;
  return 0;
}

inline hw_uint<16> stg3_rd2_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd2 read pattern: { stg3_update_0[d0, d1] -> stg2[16d0, 1 + d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write0 = stg2.stg2_stg2_update_0_write0_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write0;
  return 0;
}

inline hw_uint<16> stg3_rd20_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd20 read pattern: { stg3_update_0[d0, d1] -> stg2[4 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write4 = stg2.stg2_stg2_update_0_write4_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write4;
  return 0;
}

inline hw_uint<16> stg3_rd21_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd21 read pattern: { stg3_update_0[d0, d1] -> stg2[5 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write5 = stg2.stg2_stg2_update_0_write5_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write5;
  return 0;
}

inline hw_uint<16> stg3_rd22_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd22 read pattern: { stg3_update_0[d0, d1] -> stg2[5 + 16d0, 1 + d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write5 = stg2.stg2_stg2_update_0_write5_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write5;
  return 0;
}

inline hw_uint<16> stg3_rd23_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd23 read pattern: { stg3_update_0[d0, d1] -> stg2[6 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write6 = stg2.stg2_stg2_update_0_write6_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write6;
  return 0;
}

inline hw_uint<16> stg3_rd24_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd24 read pattern: { stg3_update_0[d0, d1] -> stg2[5 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write5 = stg2.stg2_stg2_update_0_write5_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write5;
  return 0;
}

inline hw_uint<16> stg3_rd25_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd25 read pattern: { stg3_update_0[d0, d1] -> stg2[6 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write6 = stg2.stg2_stg2_update_0_write6_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write6;
  return 0;
}

inline hw_uint<16> stg3_rd26_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd26 read pattern: { stg3_update_0[d0, d1] -> stg2[6 + 16d0, 1 + d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write6 = stg2.stg2_stg2_update_0_write6_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write6;
  return 0;
}

inline hw_uint<16> stg3_rd27_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd27 read pattern: { stg3_update_0[d0, d1] -> stg2[7 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write7 = stg2.stg2_stg2_update_0_write7_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write7;
  return 0;
}

inline hw_uint<16> stg3_rd28_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd28 read pattern: { stg3_update_0[d0, d1] -> stg2[6 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write6 = stg2.stg2_stg2_update_0_write6_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write6;
  return 0;
}

inline hw_uint<16> stg3_rd29_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd29 read pattern: { stg3_update_0[d0, d1] -> stg2[7 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write7 = stg2.stg2_stg2_update_0_write7_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write7;
  return 0;
}

inline hw_uint<16> stg3_rd3_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd3 read pattern: { stg3_update_0[d0, d1] -> stg2[1 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write1 = stg2.stg2_stg2_update_0_write1_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write1;
  return 0;
}

inline hw_uint<16> stg3_rd30_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd30 read pattern: { stg3_update_0[d0, d1] -> stg2[7 + 16d0, 1 + d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write7 = stg2.stg2_stg2_update_0_write7_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write7;
  return 0;
}

inline hw_uint<16> stg3_rd31_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd31 read pattern: { stg3_update_0[d0, d1] -> stg2[8 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write8 = stg2.stg2_stg2_update_0_write8_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write8;
  return 0;
}

inline hw_uint<16> stg3_rd32_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd32 read pattern: { stg3_update_0[d0, d1] -> stg2[7 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write7 = stg2.stg2_stg2_update_0_write7_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write7;
  return 0;
}

inline hw_uint<16> stg3_rd33_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd33 read pattern: { stg3_update_0[d0, d1] -> stg2[8 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write8 = stg2.stg2_stg2_update_0_write8_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write8;
  return 0;
}

inline hw_uint<16> stg3_rd34_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd34 read pattern: { stg3_update_0[d0, d1] -> stg2[8 + 16d0, 1 + d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write8 = stg2.stg2_stg2_update_0_write8_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write8;
  return 0;
}

inline hw_uint<16> stg3_rd35_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd35 read pattern: { stg3_update_0[d0, d1] -> stg2[9 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write9 = stg2.stg2_stg2_update_0_write9_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write9;
  return 0;
}

inline hw_uint<16> stg3_rd36_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd36 read pattern: { stg3_update_0[d0, d1] -> stg2[8 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write8 = stg2.stg2_stg2_update_0_write8_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write8;
  return 0;
}

inline hw_uint<16> stg3_rd37_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd37 read pattern: { stg3_update_0[d0, d1] -> stg2[9 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write9 = stg2.stg2_stg2_update_0_write9_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write9;
  return 0;
}

inline hw_uint<16> stg3_rd38_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd38 read pattern: { stg3_update_0[d0, d1] -> stg2[9 + 16d0, 1 + d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write9 = stg2.stg2_stg2_update_0_write9_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write9;
  return 0;
}

inline hw_uint<16> stg3_rd39_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd39 read pattern: { stg3_update_0[d0, d1] -> stg2[10 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write10 = stg2.stg2_stg2_update_0_write10_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write10;
  return 0;
}

inline hw_uint<16> stg3_rd4_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd4 read pattern: { stg3_update_0[d0, d1] -> stg2[16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write0 = stg2.stg2_stg2_update_0_write0_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write0;
  return 0;
}

inline hw_uint<16> stg3_rd40_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd40 read pattern: { stg3_update_0[d0, d1] -> stg2[9 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write9 = stg2.stg2_stg2_update_0_write9_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write9;
  return 0;
}

inline hw_uint<16> stg3_rd41_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd41 read pattern: { stg3_update_0[d0, d1] -> stg2[10 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write10 = stg2.stg2_stg2_update_0_write10_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write10;
  return 0;
}

inline hw_uint<16> stg3_rd42_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd42 read pattern: { stg3_update_0[d0, d1] -> stg2[10 + 16d0, 1 + d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write10 = stg2.stg2_stg2_update_0_write10_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write10;
  return 0;
}

inline hw_uint<16> stg3_rd43_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd43 read pattern: { stg3_update_0[d0, d1] -> stg2[11 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write11 = stg2.stg2_stg2_update_0_write11_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write11;
  return 0;
}

inline hw_uint<16> stg3_rd44_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd44 read pattern: { stg3_update_0[d0, d1] -> stg2[10 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write10 = stg2.stg2_stg2_update_0_write10_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write10;
  return 0;
}

inline hw_uint<16> stg3_rd45_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd45 read pattern: { stg3_update_0[d0, d1] -> stg2[11 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write11 = stg2.stg2_stg2_update_0_write11_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write11;
  return 0;
}

inline hw_uint<16> stg3_rd46_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd46 read pattern: { stg3_update_0[d0, d1] -> stg2[11 + 16d0, 1 + d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write11 = stg2.stg2_stg2_update_0_write11_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write11;
  return 0;
}

inline hw_uint<16> stg3_rd47_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd47 read pattern: { stg3_update_0[d0, d1] -> stg2[12 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write12 = stg2.stg2_stg2_update_0_write12_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write12;
  return 0;
}

inline hw_uint<16> stg3_rd48_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd48 read pattern: { stg3_update_0[d0, d1] -> stg2[11 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write11 = stg2.stg2_stg2_update_0_write11_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write11;
  return 0;
}

inline hw_uint<16> stg3_rd49_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd49 read pattern: { stg3_update_0[d0, d1] -> stg2[12 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write12 = stg2.stg2_stg2_update_0_write12_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write12;
  return 0;
}

inline hw_uint<16> stg3_rd5_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd5 read pattern: { stg3_update_0[d0, d1] -> stg2[1 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write1 = stg2.stg2_stg2_update_0_write1_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write1;
  return 0;
}

inline hw_uint<16> stg3_rd50_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd50 read pattern: { stg3_update_0[d0, d1] -> stg2[12 + 16d0, 1 + d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write12 = stg2.stg2_stg2_update_0_write12_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write12;
  return 0;
}

inline hw_uint<16> stg3_rd51_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd51 read pattern: { stg3_update_0[d0, d1] -> stg2[13 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write13 = stg2.stg2_stg2_update_0_write13_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write13;
  return 0;
}

inline hw_uint<16> stg3_rd52_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd52 read pattern: { stg3_update_0[d0, d1] -> stg2[12 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write12 = stg2.stg2_stg2_update_0_write12_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write12;
  return 0;
}

inline hw_uint<16> stg3_rd53_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd53 read pattern: { stg3_update_0[d0, d1] -> stg2[13 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write13 = stg2.stg2_stg2_update_0_write13_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write13;
  return 0;
}

inline hw_uint<16> stg3_rd54_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd54 read pattern: { stg3_update_0[d0, d1] -> stg2[13 + 16d0, 1 + d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write13 = stg2.stg2_stg2_update_0_write13_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write13;
  return 0;
}

inline hw_uint<16> stg3_rd55_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd55 read pattern: { stg3_update_0[d0, d1] -> stg2[14 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write14 = stg2.stg2_stg2_update_0_write14_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write14;
  return 0;
}

inline hw_uint<16> stg3_rd56_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd56 read pattern: { stg3_update_0[d0, d1] -> stg2[13 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write13 = stg2.stg2_stg2_update_0_write13_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write13;
  return 0;
}

inline hw_uint<16> stg3_rd57_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd57 read pattern: { stg3_update_0[d0, d1] -> stg2[14 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write14 = stg2.stg2_stg2_update_0_write14_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write14;
  return 0;
}

inline hw_uint<16> stg3_rd58_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd58 read pattern: { stg3_update_0[d0, d1] -> stg2[14 + 16d0, 1 + d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write14 = stg2.stg2_stg2_update_0_write14_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write14;
  return 0;
}

inline hw_uint<16> stg3_rd59_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd59 read pattern: { stg3_update_0[d0, d1] -> stg2[15 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write15 = stg2.stg2_stg2_update_0_write15_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write15;
  return 0;
}

inline hw_uint<16> stg3_rd6_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd6 read pattern: { stg3_update_0[d0, d1] -> stg2[1 + 16d0, 1 + d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write1 = stg2.stg2_stg2_update_0_write1_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write1;
  return 0;
}

inline hw_uint<16> stg3_rd60_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd60 read pattern: { stg3_update_0[d0, d1] -> stg2[14 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write14 = stg2.stg2_stg2_update_0_write14_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write14;
  return 0;
}

inline hw_uint<16> stg3_rd61_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd61 read pattern: { stg3_update_0[d0, d1] -> stg2[15 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write15 = stg2.stg2_stg2_update_0_write15_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write15;
  return 0;
}

inline hw_uint<16> stg3_rd62_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd62 read pattern: { stg3_update_0[d0, d1] -> stg2[15 + 16d0, 1 + d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write15 = stg2.stg2_stg2_update_0_write15_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write15;
  return 0;
}

inline hw_uint<16> stg3_rd63_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd63 read pattern: { stg3_update_0[d0, d1] -> stg2[16 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write0 = stg2.stg2_stg2_update_0_write0_merged_banks_4.peek_134();
  return value_stg2_stg2_update_0_write0;
  return 0;
}

inline hw_uint<16> stg3_rd7_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd7 read pattern: { stg3_update_0[d0, d1] -> stg2[2 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write2 = stg2.stg2_stg2_update_0_write2_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write2;
  return 0;
}

inline hw_uint<16> stg3_rd8_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd8 read pattern: { stg3_update_0[d0, d1] -> stg2[1 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write1 = stg2.stg2_stg2_update_0_write1_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write1;
  return 0;
}

inline hw_uint<16> stg3_rd9_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd9 read pattern: { stg3_update_0[d0, d1] -> stg2[2 + 16d0, d1] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
  auto value_stg2_stg2_update_0_write2 = stg2.stg2_stg2_update_0_write2_merged_banks_4.peek_135();
  return value_stg2_stg2_update_0_write2;
  return 0;
}

// # of bundles = 2
// stg2_update_0_write
//	stg2_stg2_update_0_write0
//	stg2_stg2_update_0_write1
//	stg2_stg2_update_0_write2
//	stg2_stg2_update_0_write3
//	stg2_stg2_update_0_write4
//	stg2_stg2_update_0_write5
//	stg2_stg2_update_0_write6
//	stg2_stg2_update_0_write7
//	stg2_stg2_update_0_write8
//	stg2_stg2_update_0_write9
//	stg2_stg2_update_0_write10
//	stg2_stg2_update_0_write11
//	stg2_stg2_update_0_write12
//	stg2_stg2_update_0_write13
//	stg2_stg2_update_0_write14
//	stg2_stg2_update_0_write15
inline void stg2_stg2_update_0_write_bundle_write(hw_uint<256>& stg2_update_0_write, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg2_stg2_update_0_write0_res = stg2_update_0_write.extract<0, 15>();
	stg2_stg2_update_0_write0_write(stg2_stg2_update_0_write0_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write1_res = stg2_update_0_write.extract<16, 31>();
	stg2_stg2_update_0_write1_write(stg2_stg2_update_0_write1_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write2_res = stg2_update_0_write.extract<32, 47>();
	stg2_stg2_update_0_write2_write(stg2_stg2_update_0_write2_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write3_res = stg2_update_0_write.extract<48, 63>();
	stg2_stg2_update_0_write3_write(stg2_stg2_update_0_write3_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write4_res = stg2_update_0_write.extract<64, 79>();
	stg2_stg2_update_0_write4_write(stg2_stg2_update_0_write4_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write5_res = stg2_update_0_write.extract<80, 95>();
	stg2_stg2_update_0_write5_write(stg2_stg2_update_0_write5_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write6_res = stg2_update_0_write.extract<96, 111>();
	stg2_stg2_update_0_write6_write(stg2_stg2_update_0_write6_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write7_res = stg2_update_0_write.extract<112, 127>();
	stg2_stg2_update_0_write7_write(stg2_stg2_update_0_write7_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write8_res = stg2_update_0_write.extract<128, 143>();
	stg2_stg2_update_0_write8_write(stg2_stg2_update_0_write8_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write9_res = stg2_update_0_write.extract<144, 159>();
	stg2_stg2_update_0_write9_write(stg2_stg2_update_0_write9_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write10_res = stg2_update_0_write.extract<160, 175>();
	stg2_stg2_update_0_write10_write(stg2_stg2_update_0_write10_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write11_res = stg2_update_0_write.extract<176, 191>();
	stg2_stg2_update_0_write11_write(stg2_stg2_update_0_write11_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write12_res = stg2_update_0_write.extract<192, 207>();
	stg2_stg2_update_0_write12_write(stg2_stg2_update_0_write12_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write13_res = stg2_update_0_write.extract<208, 223>();
	stg2_stg2_update_0_write13_write(stg2_stg2_update_0_write13_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write14_res = stg2_update_0_write.extract<224, 239>();
	stg2_stg2_update_0_write14_write(stg2_stg2_update_0_write14_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write15_res = stg2_update_0_write.extract<240, 255>();
	stg2_stg2_update_0_write15_write(stg2_stg2_update_0_write15_res, stg2, d0, d1, dynamic_address);
}

// stg3_update_0_read
//	stg3_rd0
//	stg3_rd1
//	stg3_rd2
//	stg3_rd3
//	stg3_rd4
//	stg3_rd5
//	stg3_rd6
//	stg3_rd7
//	stg3_rd8
//	stg3_rd9
//	stg3_rd10
//	stg3_rd11
//	stg3_rd12
//	stg3_rd13
//	stg3_rd14
//	stg3_rd15
//	stg3_rd16
//	stg3_rd17
//	stg3_rd18
//	stg3_rd19
//	stg3_rd20
//	stg3_rd21
//	stg3_rd22
//	stg3_rd23
//	stg3_rd24
//	stg3_rd25
//	stg3_rd26
//	stg3_rd27
//	stg3_rd28
//	stg3_rd29
//	stg3_rd30
//	stg3_rd31
//	stg3_rd32
//	stg3_rd33
//	stg3_rd34
//	stg3_rd35
//	stg3_rd36
//	stg3_rd37
//	stg3_rd38
//	stg3_rd39
//	stg3_rd40
//	stg3_rd41
//	stg3_rd42
//	stg3_rd43
//	stg3_rd44
//	stg3_rd45
//	stg3_rd46
//	stg3_rd47
//	stg3_rd48
//	stg3_rd49
//	stg3_rd50
//	stg3_rd51
//	stg3_rd52
//	stg3_rd53
//	stg3_rd54
//	stg3_rd55
//	stg3_rd56
//	stg3_rd57
//	stg3_rd58
//	stg3_rd59
//	stg3_rd60
//	stg3_rd61
//	stg3_rd62
//	stg3_rd63
inline hw_uint<1024> stg2_stg3_update_0_read_bundle_read(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 64
    // stg3_rd0
    // stg3_rd1
    // stg3_rd2
    // stg3_rd3
    // stg3_rd4
    // stg3_rd5
    // stg3_rd6
    // stg3_rd7
    // stg3_rd8
    // stg3_rd9
    // stg3_rd10
    // stg3_rd11
    // stg3_rd12
    // stg3_rd13
    // stg3_rd14
    // stg3_rd15
    // stg3_rd16
    // stg3_rd17
    // stg3_rd18
    // stg3_rd19
    // stg3_rd20
    // stg3_rd21
    // stg3_rd22
    // stg3_rd23
    // stg3_rd24
    // stg3_rd25
    // stg3_rd26
    // stg3_rd27
    // stg3_rd28
    // stg3_rd29
    // stg3_rd30
    // stg3_rd31
    // stg3_rd32
    // stg3_rd33
    // stg3_rd34
    // stg3_rd35
    // stg3_rd36
    // stg3_rd37
    // stg3_rd38
    // stg3_rd39
    // stg3_rd40
    // stg3_rd41
    // stg3_rd42
    // stg3_rd43
    // stg3_rd44
    // stg3_rd45
    // stg3_rd46
    // stg3_rd47
    // stg3_rd48
    // stg3_rd49
    // stg3_rd50
    // stg3_rd51
    // stg3_rd52
    // stg3_rd53
    // stg3_rd54
    // stg3_rd55
    // stg3_rd56
    // stg3_rd57
    // stg3_rd58
    // stg3_rd59
    // stg3_rd60
    // stg3_rd61
    // stg3_rd62
    // stg3_rd63

	hw_uint<1024> result;
	hw_uint<16> stg3_rd0_res = stg3_rd0_select(stg2, d0, d1, dynamic_address);
	set_at<0, 1024>(result, stg3_rd0_res);
	hw_uint<16> stg3_rd1_res = stg3_rd1_select(stg2, d0, d1, dynamic_address);
	set_at<16, 1024>(result, stg3_rd1_res);
	hw_uint<16> stg3_rd2_res = stg3_rd2_select(stg2, d0, d1, dynamic_address);
	set_at<32, 1024>(result, stg3_rd2_res);
	hw_uint<16> stg3_rd3_res = stg3_rd3_select(stg2, d0, d1, dynamic_address);
	set_at<48, 1024>(result, stg3_rd3_res);
	hw_uint<16> stg3_rd4_res = stg3_rd4_select(stg2, d0, d1, dynamic_address);
	set_at<64, 1024>(result, stg3_rd4_res);
	hw_uint<16> stg3_rd5_res = stg3_rd5_select(stg2, d0, d1, dynamic_address);
	set_at<80, 1024>(result, stg3_rd5_res);
	hw_uint<16> stg3_rd6_res = stg3_rd6_select(stg2, d0, d1, dynamic_address);
	set_at<96, 1024>(result, stg3_rd6_res);
	hw_uint<16> stg3_rd7_res = stg3_rd7_select(stg2, d0, d1, dynamic_address);
	set_at<112, 1024>(result, stg3_rd7_res);
	hw_uint<16> stg3_rd8_res = stg3_rd8_select(stg2, d0, d1, dynamic_address);
	set_at<128, 1024>(result, stg3_rd8_res);
	hw_uint<16> stg3_rd9_res = stg3_rd9_select(stg2, d0, d1, dynamic_address);
	set_at<144, 1024>(result, stg3_rd9_res);
	hw_uint<16> stg3_rd10_res = stg3_rd10_select(stg2, d0, d1, dynamic_address);
	set_at<160, 1024>(result, stg3_rd10_res);
	hw_uint<16> stg3_rd11_res = stg3_rd11_select(stg2, d0, d1, dynamic_address);
	set_at<176, 1024>(result, stg3_rd11_res);
	hw_uint<16> stg3_rd12_res = stg3_rd12_select(stg2, d0, d1, dynamic_address);
	set_at<192, 1024>(result, stg3_rd12_res);
	hw_uint<16> stg3_rd13_res = stg3_rd13_select(stg2, d0, d1, dynamic_address);
	set_at<208, 1024>(result, stg3_rd13_res);
	hw_uint<16> stg3_rd14_res = stg3_rd14_select(stg2, d0, d1, dynamic_address);
	set_at<224, 1024>(result, stg3_rd14_res);
	hw_uint<16> stg3_rd15_res = stg3_rd15_select(stg2, d0, d1, dynamic_address);
	set_at<240, 1024>(result, stg3_rd15_res);
	hw_uint<16> stg3_rd16_res = stg3_rd16_select(stg2, d0, d1, dynamic_address);
	set_at<256, 1024>(result, stg3_rd16_res);
	hw_uint<16> stg3_rd17_res = stg3_rd17_select(stg2, d0, d1, dynamic_address);
	set_at<272, 1024>(result, stg3_rd17_res);
	hw_uint<16> stg3_rd18_res = stg3_rd18_select(stg2, d0, d1, dynamic_address);
	set_at<288, 1024>(result, stg3_rd18_res);
	hw_uint<16> stg3_rd19_res = stg3_rd19_select(stg2, d0, d1, dynamic_address);
	set_at<304, 1024>(result, stg3_rd19_res);
	hw_uint<16> stg3_rd20_res = stg3_rd20_select(stg2, d0, d1, dynamic_address);
	set_at<320, 1024>(result, stg3_rd20_res);
	hw_uint<16> stg3_rd21_res = stg3_rd21_select(stg2, d0, d1, dynamic_address);
	set_at<336, 1024>(result, stg3_rd21_res);
	hw_uint<16> stg3_rd22_res = stg3_rd22_select(stg2, d0, d1, dynamic_address);
	set_at<352, 1024>(result, stg3_rd22_res);
	hw_uint<16> stg3_rd23_res = stg3_rd23_select(stg2, d0, d1, dynamic_address);
	set_at<368, 1024>(result, stg3_rd23_res);
	hw_uint<16> stg3_rd24_res = stg3_rd24_select(stg2, d0, d1, dynamic_address);
	set_at<384, 1024>(result, stg3_rd24_res);
	hw_uint<16> stg3_rd25_res = stg3_rd25_select(stg2, d0, d1, dynamic_address);
	set_at<400, 1024>(result, stg3_rd25_res);
	hw_uint<16> stg3_rd26_res = stg3_rd26_select(stg2, d0, d1, dynamic_address);
	set_at<416, 1024>(result, stg3_rd26_res);
	hw_uint<16> stg3_rd27_res = stg3_rd27_select(stg2, d0, d1, dynamic_address);
	set_at<432, 1024>(result, stg3_rd27_res);
	hw_uint<16> stg3_rd28_res = stg3_rd28_select(stg2, d0, d1, dynamic_address);
	set_at<448, 1024>(result, stg3_rd28_res);
	hw_uint<16> stg3_rd29_res = stg3_rd29_select(stg2, d0, d1, dynamic_address);
	set_at<464, 1024>(result, stg3_rd29_res);
	hw_uint<16> stg3_rd30_res = stg3_rd30_select(stg2, d0, d1, dynamic_address);
	set_at<480, 1024>(result, stg3_rd30_res);
	hw_uint<16> stg3_rd31_res = stg3_rd31_select(stg2, d0, d1, dynamic_address);
	set_at<496, 1024>(result, stg3_rd31_res);
	hw_uint<16> stg3_rd32_res = stg3_rd32_select(stg2, d0, d1, dynamic_address);
	set_at<512, 1024>(result, stg3_rd32_res);
	hw_uint<16> stg3_rd33_res = stg3_rd33_select(stg2, d0, d1, dynamic_address);
	set_at<528, 1024>(result, stg3_rd33_res);
	hw_uint<16> stg3_rd34_res = stg3_rd34_select(stg2, d0, d1, dynamic_address);
	set_at<544, 1024>(result, stg3_rd34_res);
	hw_uint<16> stg3_rd35_res = stg3_rd35_select(stg2, d0, d1, dynamic_address);
	set_at<560, 1024>(result, stg3_rd35_res);
	hw_uint<16> stg3_rd36_res = stg3_rd36_select(stg2, d0, d1, dynamic_address);
	set_at<576, 1024>(result, stg3_rd36_res);
	hw_uint<16> stg3_rd37_res = stg3_rd37_select(stg2, d0, d1, dynamic_address);
	set_at<592, 1024>(result, stg3_rd37_res);
	hw_uint<16> stg3_rd38_res = stg3_rd38_select(stg2, d0, d1, dynamic_address);
	set_at<608, 1024>(result, stg3_rd38_res);
	hw_uint<16> stg3_rd39_res = stg3_rd39_select(stg2, d0, d1, dynamic_address);
	set_at<624, 1024>(result, stg3_rd39_res);
	hw_uint<16> stg3_rd40_res = stg3_rd40_select(stg2, d0, d1, dynamic_address);
	set_at<640, 1024>(result, stg3_rd40_res);
	hw_uint<16> stg3_rd41_res = stg3_rd41_select(stg2, d0, d1, dynamic_address);
	set_at<656, 1024>(result, stg3_rd41_res);
	hw_uint<16> stg3_rd42_res = stg3_rd42_select(stg2, d0, d1, dynamic_address);
	set_at<672, 1024>(result, stg3_rd42_res);
	hw_uint<16> stg3_rd43_res = stg3_rd43_select(stg2, d0, d1, dynamic_address);
	set_at<688, 1024>(result, stg3_rd43_res);
	hw_uint<16> stg3_rd44_res = stg3_rd44_select(stg2, d0, d1, dynamic_address);
	set_at<704, 1024>(result, stg3_rd44_res);
	hw_uint<16> stg3_rd45_res = stg3_rd45_select(stg2, d0, d1, dynamic_address);
	set_at<720, 1024>(result, stg3_rd45_res);
	hw_uint<16> stg3_rd46_res = stg3_rd46_select(stg2, d0, d1, dynamic_address);
	set_at<736, 1024>(result, stg3_rd46_res);
	hw_uint<16> stg3_rd47_res = stg3_rd47_select(stg2, d0, d1, dynamic_address);
	set_at<752, 1024>(result, stg3_rd47_res);
	hw_uint<16> stg3_rd48_res = stg3_rd48_select(stg2, d0, d1, dynamic_address);
	set_at<768, 1024>(result, stg3_rd48_res);
	hw_uint<16> stg3_rd49_res = stg3_rd49_select(stg2, d0, d1, dynamic_address);
	set_at<784, 1024>(result, stg3_rd49_res);
	hw_uint<16> stg3_rd50_res = stg3_rd50_select(stg2, d0, d1, dynamic_address);
	set_at<800, 1024>(result, stg3_rd50_res);
	hw_uint<16> stg3_rd51_res = stg3_rd51_select(stg2, d0, d1, dynamic_address);
	set_at<816, 1024>(result, stg3_rd51_res);
	hw_uint<16> stg3_rd52_res = stg3_rd52_select(stg2, d0, d1, dynamic_address);
	set_at<832, 1024>(result, stg3_rd52_res);
	hw_uint<16> stg3_rd53_res = stg3_rd53_select(stg2, d0, d1, dynamic_address);
	set_at<848, 1024>(result, stg3_rd53_res);
	hw_uint<16> stg3_rd54_res = stg3_rd54_select(stg2, d0, d1, dynamic_address);
	set_at<864, 1024>(result, stg3_rd54_res);
	hw_uint<16> stg3_rd55_res = stg3_rd55_select(stg2, d0, d1, dynamic_address);
	set_at<880, 1024>(result, stg3_rd55_res);
	hw_uint<16> stg3_rd56_res = stg3_rd56_select(stg2, d0, d1, dynamic_address);
	set_at<896, 1024>(result, stg3_rd56_res);
	hw_uint<16> stg3_rd57_res = stg3_rd57_select(stg2, d0, d1, dynamic_address);
	set_at<912, 1024>(result, stg3_rd57_res);
	hw_uint<16> stg3_rd58_res = stg3_rd58_select(stg2, d0, d1, dynamic_address);
	set_at<928, 1024>(result, stg3_rd58_res);
	hw_uint<16> stg3_rd59_res = stg3_rd59_select(stg2, d0, d1, dynamic_address);
	set_at<944, 1024>(result, stg3_rd59_res);
	hw_uint<16> stg3_rd60_res = stg3_rd60_select(stg2, d0, d1, dynamic_address);
	set_at<960, 1024>(result, stg3_rd60_res);
	hw_uint<16> stg3_rd61_res = stg3_rd61_select(stg2, d0, d1, dynamic_address);
	set_at<976, 1024>(result, stg3_rd61_res);
	hw_uint<16> stg3_rd62_res = stg3_rd62_select(stg2, d0, d1, dynamic_address);
	set_at<992, 1024>(result, stg3_rd62_res);
	hw_uint<16> stg3_rd63_res = stg3_rd63_select(stg2, d0, d1, dynamic_address);
	set_at<1008, 1024>(result, stg3_rd63_res);
	return result;
}

struct stg3_stg3_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-80, 2000], [0, 1084]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 132, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 130> f3;
	hw_uint<16> f4;
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

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg3_stg3_update_0_write1_merged_banks_4_cache {
	// RAM Box: {[-79, 1985], [0, 1085]}
	// Capacity: 134
	// # of read delays: 3
  // 0, 1, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 131> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg3_stg3_update_0_write10_merged_banks_4_cache {
	// RAM Box: {[-70, 1994], [0, 1085]}
	// Capacity: 134
	// # of read delays: 3
  // 0, 1, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 131> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg3_stg3_update_0_write11_merged_banks_4_cache {
	// RAM Box: {[-69, 1995], [0, 1085]}
	// Capacity: 134
	// # of read delays: 3
  // 0, 1, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 131> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg3_stg3_update_0_write12_merged_banks_4_cache {
	// RAM Box: {[-68, 1996], [0, 1085]}
	// Capacity: 134
	// # of read delays: 3
  // 0, 1, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 131> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg3_stg3_update_0_write13_merged_banks_4_cache {
	// RAM Box: {[-67, 1997], [0, 1085]}
	// Capacity: 134
	// # of read delays: 3
  // 0, 1, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 131> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg3_stg3_update_0_write14_merged_banks_4_cache {
	// RAM Box: {[-66, 1998], [0, 1085]}
	// Capacity: 134
	// # of read delays: 3
  // 0, 1, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 131> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg3_stg3_update_0_write15_merged_banks_4_cache {
	// RAM Box: {[-81, 1999], [0, 1085]}
	// Capacity: 135
	// # of read delays: 4
  // 0, 1, 133, 134
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 131> f3;
	hw_uint<16> f4;
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

	inline hw_uint<16> peek_134() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg3_stg3_update_0_write2_merged_banks_4_cache {
	// RAM Box: {[-78, 1986], [0, 1085]}
	// Capacity: 134
	// # of read delays: 3
  // 0, 1, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 131> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg3_stg3_update_0_write3_merged_banks_4_cache {
	// RAM Box: {[-77, 1987], [0, 1085]}
	// Capacity: 134
	// # of read delays: 3
  // 0, 1, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 131> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg3_stg3_update_0_write4_merged_banks_4_cache {
	// RAM Box: {[-76, 1988], [0, 1085]}
	// Capacity: 134
	// # of read delays: 3
  // 0, 1, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 131> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg3_stg3_update_0_write5_merged_banks_4_cache {
	// RAM Box: {[-75, 1989], [0, 1085]}
	// Capacity: 134
	// # of read delays: 3
  // 0, 1, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 131> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg3_stg3_update_0_write6_merged_banks_4_cache {
	// RAM Box: {[-74, 1990], [0, 1085]}
	// Capacity: 134
	// # of read delays: 3
  // 0, 1, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 131> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg3_stg3_update_0_write7_merged_banks_4_cache {
	// RAM Box: {[-73, 1991], [0, 1085]}
	// Capacity: 134
	// # of read delays: 3
  // 0, 1, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 131> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg3_stg3_update_0_write8_merged_banks_4_cache {
	// RAM Box: {[-72, 1992], [0, 1085]}
	// Capacity: 134
	// # of read delays: 3
  // 0, 1, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 131> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg3_stg3_update_0_write9_merged_banks_4_cache {
	// RAM Box: {[-71, 1993], [0, 1085]}
	// Capacity: 134
	// # of read delays: 3
  // 0, 1, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 131> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg3_cache {
  // # of banks: 16
  stg3_stg3_update_0_write0_merged_banks_4_cache stg3_stg3_update_0_write0_merged_banks_4;
  stg3_stg3_update_0_write1_merged_banks_4_cache stg3_stg3_update_0_write1_merged_banks_4;
  stg3_stg3_update_0_write10_merged_banks_4_cache stg3_stg3_update_0_write10_merged_banks_4;
  stg3_stg3_update_0_write11_merged_banks_4_cache stg3_stg3_update_0_write11_merged_banks_4;
  stg3_stg3_update_0_write12_merged_banks_4_cache stg3_stg3_update_0_write12_merged_banks_4;
  stg3_stg3_update_0_write13_merged_banks_4_cache stg3_stg3_update_0_write13_merged_banks_4;
  stg3_stg3_update_0_write14_merged_banks_4_cache stg3_stg3_update_0_write14_merged_banks_4;
  stg3_stg3_update_0_write15_merged_banks_4_cache stg3_stg3_update_0_write15_merged_banks_4;
  stg3_stg3_update_0_write2_merged_banks_4_cache stg3_stg3_update_0_write2_merged_banks_4;
  stg3_stg3_update_0_write3_merged_banks_4_cache stg3_stg3_update_0_write3_merged_banks_4;
  stg3_stg3_update_0_write4_merged_banks_4_cache stg3_stg3_update_0_write4_merged_banks_4;
  stg3_stg3_update_0_write5_merged_banks_4_cache stg3_stg3_update_0_write5_merged_banks_4;
  stg3_stg3_update_0_write6_merged_banks_4_cache stg3_stg3_update_0_write6_merged_banks_4;
  stg3_stg3_update_0_write7_merged_banks_4_cache stg3_stg3_update_0_write7_merged_banks_4;
  stg3_stg3_update_0_write8_merged_banks_4_cache stg3_stg3_update_0_write8_merged_banks_4;
  stg3_stg3_update_0_write9_merged_banks_4_cache stg3_stg3_update_0_write9_merged_banks_4;
};



inline void stg3_stg3_update_0_write0_write(hw_uint<16>& stg3_stg3_update_0_write0, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write0_merged_banks_4.push(stg3_stg3_update_0_write0);
}

inline void stg3_stg3_update_0_write1_write(hw_uint<16>& stg3_stg3_update_0_write1, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write1_merged_banks_4.push(stg3_stg3_update_0_write1);
}

inline void stg3_stg3_update_0_write10_write(hw_uint<16>& stg3_stg3_update_0_write10, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write10_merged_banks_4.push(stg3_stg3_update_0_write10);
}

inline void stg3_stg3_update_0_write11_write(hw_uint<16>& stg3_stg3_update_0_write11, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write11_merged_banks_4.push(stg3_stg3_update_0_write11);
}

inline void stg3_stg3_update_0_write12_write(hw_uint<16>& stg3_stg3_update_0_write12, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write12_merged_banks_4.push(stg3_stg3_update_0_write12);
}

inline void stg3_stg3_update_0_write13_write(hw_uint<16>& stg3_stg3_update_0_write13, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write13_merged_banks_4.push(stg3_stg3_update_0_write13);
}

inline void stg3_stg3_update_0_write14_write(hw_uint<16>& stg3_stg3_update_0_write14, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write14_merged_banks_4.push(stg3_stg3_update_0_write14);
}

inline void stg3_stg3_update_0_write15_write(hw_uint<16>& stg3_stg3_update_0_write15, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write15_merged_banks_4.push(stg3_stg3_update_0_write15);
}

inline void stg3_stg3_update_0_write2_write(hw_uint<16>& stg3_stg3_update_0_write2, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write2_merged_banks_4.push(stg3_stg3_update_0_write2);
}

inline void stg3_stg3_update_0_write3_write(hw_uint<16>& stg3_stg3_update_0_write3, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write3_merged_banks_4.push(stg3_stg3_update_0_write3);
}

inline void stg3_stg3_update_0_write4_write(hw_uint<16>& stg3_stg3_update_0_write4, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write4_merged_banks_4.push(stg3_stg3_update_0_write4);
}

inline void stg3_stg3_update_0_write5_write(hw_uint<16>& stg3_stg3_update_0_write5, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write5_merged_banks_4.push(stg3_stg3_update_0_write5);
}

inline void stg3_stg3_update_0_write6_write(hw_uint<16>& stg3_stg3_update_0_write6, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write6_merged_banks_4.push(stg3_stg3_update_0_write6);
}

inline void stg3_stg3_update_0_write7_write(hw_uint<16>& stg3_stg3_update_0_write7, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write7_merged_banks_4.push(stg3_stg3_update_0_write7);
}

inline void stg3_stg3_update_0_write8_write(hw_uint<16>& stg3_stg3_update_0_write8, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write8_merged_banks_4.push(stg3_stg3_update_0_write8);
}

inline void stg3_stg3_update_0_write9_write(hw_uint<16>& stg3_stg3_update_0_write9, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write9_merged_banks_4.push(stg3_stg3_update_0_write9);
}

inline hw_uint<16> stg4_rd0_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd0 read pattern: { stg4_update_0[d0, d1] -> stg3[-1 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write15 = stg3.stg3_stg3_update_0_write15_merged_banks_4.peek_134();
  return value_stg3_stg3_update_0_write15;
  return 0;
}

inline hw_uint<16> stg4_rd1_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd1 read pattern: { stg4_update_0[d0, d1] -> stg3[16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write0 = stg3.stg3_stg3_update_0_write0_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write0;
  return 0;
}

inline hw_uint<16> stg4_rd10_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd10 read pattern: { stg4_update_0[d0, d1] -> stg3[2 + 16d0, 1 + d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write2 = stg3.stg3_stg3_update_0_write2_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write2;
  return 0;
}

inline hw_uint<16> stg4_rd11_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd11 read pattern: { stg4_update_0[d0, d1] -> stg3[3 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write3 = stg3.stg3_stg3_update_0_write3_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write3;
  return 0;
}

inline hw_uint<16> stg4_rd12_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd12 read pattern: { stg4_update_0[d0, d1] -> stg3[2 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write2 = stg3.stg3_stg3_update_0_write2_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write2;
  return 0;
}

inline hw_uint<16> stg4_rd13_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd13 read pattern: { stg4_update_0[d0, d1] -> stg3[3 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write3 = stg3.stg3_stg3_update_0_write3_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write3;
  return 0;
}

inline hw_uint<16> stg4_rd14_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd14 read pattern: { stg4_update_0[d0, d1] -> stg3[3 + 16d0, 1 + d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write3 = stg3.stg3_stg3_update_0_write3_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write3;
  return 0;
}

inline hw_uint<16> stg4_rd15_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd15 read pattern: { stg4_update_0[d0, d1] -> stg3[4 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write4 = stg3.stg3_stg3_update_0_write4_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write4;
  return 0;
}

inline hw_uint<16> stg4_rd16_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd16 read pattern: { stg4_update_0[d0, d1] -> stg3[3 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write3 = stg3.stg3_stg3_update_0_write3_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write3;
  return 0;
}

inline hw_uint<16> stg4_rd17_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd17 read pattern: { stg4_update_0[d0, d1] -> stg3[4 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write4 = stg3.stg3_stg3_update_0_write4_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write4;
  return 0;
}

inline hw_uint<16> stg4_rd18_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd18 read pattern: { stg4_update_0[d0, d1] -> stg3[4 + 16d0, 1 + d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write4 = stg3.stg3_stg3_update_0_write4_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write4;
  return 0;
}

inline hw_uint<16> stg4_rd19_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd19 read pattern: { stg4_update_0[d0, d1] -> stg3[5 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write5 = stg3.stg3_stg3_update_0_write5_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write5;
  return 0;
}

inline hw_uint<16> stg4_rd2_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd2 read pattern: { stg4_update_0[d0, d1] -> stg3[16d0, 1 + d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write0 = stg3.stg3_stg3_update_0_write0_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write0;
  return 0;
}

inline hw_uint<16> stg4_rd20_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd20 read pattern: { stg4_update_0[d0, d1] -> stg3[4 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write4 = stg3.stg3_stg3_update_0_write4_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write4;
  return 0;
}

inline hw_uint<16> stg4_rd21_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd21 read pattern: { stg4_update_0[d0, d1] -> stg3[5 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write5 = stg3.stg3_stg3_update_0_write5_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write5;
  return 0;
}

inline hw_uint<16> stg4_rd22_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd22 read pattern: { stg4_update_0[d0, d1] -> stg3[5 + 16d0, 1 + d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write5 = stg3.stg3_stg3_update_0_write5_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write5;
  return 0;
}

inline hw_uint<16> stg4_rd23_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd23 read pattern: { stg4_update_0[d0, d1] -> stg3[6 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write6 = stg3.stg3_stg3_update_0_write6_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write6;
  return 0;
}

inline hw_uint<16> stg4_rd24_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd24 read pattern: { stg4_update_0[d0, d1] -> stg3[5 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write5 = stg3.stg3_stg3_update_0_write5_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write5;
  return 0;
}

inline hw_uint<16> stg4_rd25_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd25 read pattern: { stg4_update_0[d0, d1] -> stg3[6 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write6 = stg3.stg3_stg3_update_0_write6_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write6;
  return 0;
}

inline hw_uint<16> stg4_rd26_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd26 read pattern: { stg4_update_0[d0, d1] -> stg3[6 + 16d0, 1 + d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write6 = stg3.stg3_stg3_update_0_write6_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write6;
  return 0;
}

inline hw_uint<16> stg4_rd27_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd27 read pattern: { stg4_update_0[d0, d1] -> stg3[7 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write7 = stg3.stg3_stg3_update_0_write7_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write7;
  return 0;
}

inline hw_uint<16> stg4_rd28_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd28 read pattern: { stg4_update_0[d0, d1] -> stg3[6 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write6 = stg3.stg3_stg3_update_0_write6_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write6;
  return 0;
}

inline hw_uint<16> stg4_rd29_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd29 read pattern: { stg4_update_0[d0, d1] -> stg3[7 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write7 = stg3.stg3_stg3_update_0_write7_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write7;
  return 0;
}

inline hw_uint<16> stg4_rd3_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd3 read pattern: { stg4_update_0[d0, d1] -> stg3[1 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write1 = stg3.stg3_stg3_update_0_write1_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write1;
  return 0;
}

inline hw_uint<16> stg4_rd30_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd30 read pattern: { stg4_update_0[d0, d1] -> stg3[7 + 16d0, 1 + d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write7 = stg3.stg3_stg3_update_0_write7_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write7;
  return 0;
}

inline hw_uint<16> stg4_rd31_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd31 read pattern: { stg4_update_0[d0, d1] -> stg3[8 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write8 = stg3.stg3_stg3_update_0_write8_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write8;
  return 0;
}

inline hw_uint<16> stg4_rd32_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd32 read pattern: { stg4_update_0[d0, d1] -> stg3[7 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write7 = stg3.stg3_stg3_update_0_write7_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write7;
  return 0;
}

inline hw_uint<16> stg4_rd33_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd33 read pattern: { stg4_update_0[d0, d1] -> stg3[8 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write8 = stg3.stg3_stg3_update_0_write8_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write8;
  return 0;
}

inline hw_uint<16> stg4_rd34_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd34 read pattern: { stg4_update_0[d0, d1] -> stg3[8 + 16d0, 1 + d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write8 = stg3.stg3_stg3_update_0_write8_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write8;
  return 0;
}

inline hw_uint<16> stg4_rd35_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd35 read pattern: { stg4_update_0[d0, d1] -> stg3[9 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write9 = stg3.stg3_stg3_update_0_write9_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write9;
  return 0;
}

inline hw_uint<16> stg4_rd36_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd36 read pattern: { stg4_update_0[d0, d1] -> stg3[8 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write8 = stg3.stg3_stg3_update_0_write8_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write8;
  return 0;
}

inline hw_uint<16> stg4_rd37_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd37 read pattern: { stg4_update_0[d0, d1] -> stg3[9 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write9 = stg3.stg3_stg3_update_0_write9_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write9;
  return 0;
}

inline hw_uint<16> stg4_rd38_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd38 read pattern: { stg4_update_0[d0, d1] -> stg3[9 + 16d0, 1 + d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write9 = stg3.stg3_stg3_update_0_write9_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write9;
  return 0;
}

inline hw_uint<16> stg4_rd39_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd39 read pattern: { stg4_update_0[d0, d1] -> stg3[10 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write10 = stg3.stg3_stg3_update_0_write10_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write10;
  return 0;
}

inline hw_uint<16> stg4_rd4_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd4 read pattern: { stg4_update_0[d0, d1] -> stg3[16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write0 = stg3.stg3_stg3_update_0_write0_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write0;
  return 0;
}

inline hw_uint<16> stg4_rd40_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd40 read pattern: { stg4_update_0[d0, d1] -> stg3[9 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write9 = stg3.stg3_stg3_update_0_write9_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write9;
  return 0;
}

inline hw_uint<16> stg4_rd41_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd41 read pattern: { stg4_update_0[d0, d1] -> stg3[10 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write10 = stg3.stg3_stg3_update_0_write10_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write10;
  return 0;
}

inline hw_uint<16> stg4_rd42_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd42 read pattern: { stg4_update_0[d0, d1] -> stg3[10 + 16d0, 1 + d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write10 = stg3.stg3_stg3_update_0_write10_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write10;
  return 0;
}

inline hw_uint<16> stg4_rd43_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd43 read pattern: { stg4_update_0[d0, d1] -> stg3[11 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write11 = stg3.stg3_stg3_update_0_write11_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write11;
  return 0;
}

inline hw_uint<16> stg4_rd44_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd44 read pattern: { stg4_update_0[d0, d1] -> stg3[10 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write10 = stg3.stg3_stg3_update_0_write10_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write10;
  return 0;
}

inline hw_uint<16> stg4_rd45_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd45 read pattern: { stg4_update_0[d0, d1] -> stg3[11 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write11 = stg3.stg3_stg3_update_0_write11_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write11;
  return 0;
}

inline hw_uint<16> stg4_rd46_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd46 read pattern: { stg4_update_0[d0, d1] -> stg3[11 + 16d0, 1 + d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write11 = stg3.stg3_stg3_update_0_write11_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write11;
  return 0;
}

inline hw_uint<16> stg4_rd47_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd47 read pattern: { stg4_update_0[d0, d1] -> stg3[12 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write12 = stg3.stg3_stg3_update_0_write12_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write12;
  return 0;
}

inline hw_uint<16> stg4_rd48_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd48 read pattern: { stg4_update_0[d0, d1] -> stg3[11 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write11 = stg3.stg3_stg3_update_0_write11_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write11;
  return 0;
}

inline hw_uint<16> stg4_rd49_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd49 read pattern: { stg4_update_0[d0, d1] -> stg3[12 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write12 = stg3.stg3_stg3_update_0_write12_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write12;
  return 0;
}

inline hw_uint<16> stg4_rd5_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd5 read pattern: { stg4_update_0[d0, d1] -> stg3[1 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write1 = stg3.stg3_stg3_update_0_write1_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write1;
  return 0;
}

inline hw_uint<16> stg4_rd50_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd50 read pattern: { stg4_update_0[d0, d1] -> stg3[12 + 16d0, 1 + d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write12 = stg3.stg3_stg3_update_0_write12_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write12;
  return 0;
}

inline hw_uint<16> stg4_rd51_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd51 read pattern: { stg4_update_0[d0, d1] -> stg3[13 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write13 = stg3.stg3_stg3_update_0_write13_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write13;
  return 0;
}

inline hw_uint<16> stg4_rd52_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd52 read pattern: { stg4_update_0[d0, d1] -> stg3[12 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write12 = stg3.stg3_stg3_update_0_write12_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write12;
  return 0;
}

inline hw_uint<16> stg4_rd53_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd53 read pattern: { stg4_update_0[d0, d1] -> stg3[13 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write13 = stg3.stg3_stg3_update_0_write13_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write13;
  return 0;
}

inline hw_uint<16> stg4_rd54_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd54 read pattern: { stg4_update_0[d0, d1] -> stg3[13 + 16d0, 1 + d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write13 = stg3.stg3_stg3_update_0_write13_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write13;
  return 0;
}

inline hw_uint<16> stg4_rd55_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd55 read pattern: { stg4_update_0[d0, d1] -> stg3[14 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write14 = stg3.stg3_stg3_update_0_write14_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write14;
  return 0;
}

inline hw_uint<16> stg4_rd56_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd56 read pattern: { stg4_update_0[d0, d1] -> stg3[13 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write13 = stg3.stg3_stg3_update_0_write13_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write13;
  return 0;
}

inline hw_uint<16> stg4_rd57_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd57 read pattern: { stg4_update_0[d0, d1] -> stg3[14 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write14 = stg3.stg3_stg3_update_0_write14_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write14;
  return 0;
}

inline hw_uint<16> stg4_rd58_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd58 read pattern: { stg4_update_0[d0, d1] -> stg3[14 + 16d0, 1 + d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write14 = stg3.stg3_stg3_update_0_write14_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write14;
  return 0;
}

inline hw_uint<16> stg4_rd59_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd59 read pattern: { stg4_update_0[d0, d1] -> stg3[15 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write15 = stg3.stg3_stg3_update_0_write15_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write15;
  return 0;
}

inline hw_uint<16> stg4_rd6_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd6 read pattern: { stg4_update_0[d0, d1] -> stg3[1 + 16d0, 1 + d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write1 = stg3.stg3_stg3_update_0_write1_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write1;
  return 0;
}

inline hw_uint<16> stg4_rd60_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd60 read pattern: { stg4_update_0[d0, d1] -> stg3[14 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write14 = stg3.stg3_stg3_update_0_write14_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write14;
  return 0;
}

inline hw_uint<16> stg4_rd61_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd61 read pattern: { stg4_update_0[d0, d1] -> stg3[15 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write15 = stg3.stg3_stg3_update_0_write15_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write15;
  return 0;
}

inline hw_uint<16> stg4_rd62_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd62 read pattern: { stg4_update_0[d0, d1] -> stg3[15 + 16d0, 1 + d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write15 = stg3.stg3_stg3_update_0_write15_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write15;
  return 0;
}

inline hw_uint<16> stg4_rd63_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd63 read pattern: { stg4_update_0[d0, d1] -> stg3[16 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write0 = stg3.stg3_stg3_update_0_write0_merged_banks_4.peek_132();
  return value_stg3_stg3_update_0_write0;
  return 0;
}

inline hw_uint<16> stg4_rd7_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd7 read pattern: { stg4_update_0[d0, d1] -> stg3[2 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write2 = stg3.stg3_stg3_update_0_write2_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write2;
  return 0;
}

inline hw_uint<16> stg4_rd8_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd8 read pattern: { stg4_update_0[d0, d1] -> stg3[1 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write1 = stg3.stg3_stg3_update_0_write1_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write1;
  return 0;
}

inline hw_uint<16> stg4_rd9_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd9 read pattern: { stg4_update_0[d0, d1] -> stg3[2 + 16d0, d1] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
  auto value_stg3_stg3_update_0_write2 = stg3.stg3_stg3_update_0_write2_merged_banks_4.peek_133();
  return value_stg3_stg3_update_0_write2;
  return 0;
}

// # of bundles = 2
// stg3_update_0_write
//	stg3_stg3_update_0_write0
//	stg3_stg3_update_0_write1
//	stg3_stg3_update_0_write2
//	stg3_stg3_update_0_write3
//	stg3_stg3_update_0_write4
//	stg3_stg3_update_0_write5
//	stg3_stg3_update_0_write6
//	stg3_stg3_update_0_write7
//	stg3_stg3_update_0_write8
//	stg3_stg3_update_0_write9
//	stg3_stg3_update_0_write10
//	stg3_stg3_update_0_write11
//	stg3_stg3_update_0_write12
//	stg3_stg3_update_0_write13
//	stg3_stg3_update_0_write14
//	stg3_stg3_update_0_write15
inline void stg3_stg3_update_0_write_bundle_write(hw_uint<256>& stg3_update_0_write, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg3_stg3_update_0_write0_res = stg3_update_0_write.extract<0, 15>();
	stg3_stg3_update_0_write0_write(stg3_stg3_update_0_write0_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write1_res = stg3_update_0_write.extract<16, 31>();
	stg3_stg3_update_0_write1_write(stg3_stg3_update_0_write1_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write2_res = stg3_update_0_write.extract<32, 47>();
	stg3_stg3_update_0_write2_write(stg3_stg3_update_0_write2_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write3_res = stg3_update_0_write.extract<48, 63>();
	stg3_stg3_update_0_write3_write(stg3_stg3_update_0_write3_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write4_res = stg3_update_0_write.extract<64, 79>();
	stg3_stg3_update_0_write4_write(stg3_stg3_update_0_write4_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write5_res = stg3_update_0_write.extract<80, 95>();
	stg3_stg3_update_0_write5_write(stg3_stg3_update_0_write5_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write6_res = stg3_update_0_write.extract<96, 111>();
	stg3_stg3_update_0_write6_write(stg3_stg3_update_0_write6_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write7_res = stg3_update_0_write.extract<112, 127>();
	stg3_stg3_update_0_write7_write(stg3_stg3_update_0_write7_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write8_res = stg3_update_0_write.extract<128, 143>();
	stg3_stg3_update_0_write8_write(stg3_stg3_update_0_write8_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write9_res = stg3_update_0_write.extract<144, 159>();
	stg3_stg3_update_0_write9_write(stg3_stg3_update_0_write9_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write10_res = stg3_update_0_write.extract<160, 175>();
	stg3_stg3_update_0_write10_write(stg3_stg3_update_0_write10_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write11_res = stg3_update_0_write.extract<176, 191>();
	stg3_stg3_update_0_write11_write(stg3_stg3_update_0_write11_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write12_res = stg3_update_0_write.extract<192, 207>();
	stg3_stg3_update_0_write12_write(stg3_stg3_update_0_write12_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write13_res = stg3_update_0_write.extract<208, 223>();
	stg3_stg3_update_0_write13_write(stg3_stg3_update_0_write13_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write14_res = stg3_update_0_write.extract<224, 239>();
	stg3_stg3_update_0_write14_write(stg3_stg3_update_0_write14_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write15_res = stg3_update_0_write.extract<240, 255>();
	stg3_stg3_update_0_write15_write(stg3_stg3_update_0_write15_res, stg3, d0, d1, dynamic_address);
}

// stg4_update_0_read
//	stg4_rd0
//	stg4_rd1
//	stg4_rd2
//	stg4_rd3
//	stg4_rd4
//	stg4_rd5
//	stg4_rd6
//	stg4_rd7
//	stg4_rd8
//	stg4_rd9
//	stg4_rd10
//	stg4_rd11
//	stg4_rd12
//	stg4_rd13
//	stg4_rd14
//	stg4_rd15
//	stg4_rd16
//	stg4_rd17
//	stg4_rd18
//	stg4_rd19
//	stg4_rd20
//	stg4_rd21
//	stg4_rd22
//	stg4_rd23
//	stg4_rd24
//	stg4_rd25
//	stg4_rd26
//	stg4_rd27
//	stg4_rd28
//	stg4_rd29
//	stg4_rd30
//	stg4_rd31
//	stg4_rd32
//	stg4_rd33
//	stg4_rd34
//	stg4_rd35
//	stg4_rd36
//	stg4_rd37
//	stg4_rd38
//	stg4_rd39
//	stg4_rd40
//	stg4_rd41
//	stg4_rd42
//	stg4_rd43
//	stg4_rd44
//	stg4_rd45
//	stg4_rd46
//	stg4_rd47
//	stg4_rd48
//	stg4_rd49
//	stg4_rd50
//	stg4_rd51
//	stg4_rd52
//	stg4_rd53
//	stg4_rd54
//	stg4_rd55
//	stg4_rd56
//	stg4_rd57
//	stg4_rd58
//	stg4_rd59
//	stg4_rd60
//	stg4_rd61
//	stg4_rd62
//	stg4_rd63
inline hw_uint<1024> stg3_stg4_update_0_read_bundle_read(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 64
    // stg4_rd0
    // stg4_rd1
    // stg4_rd2
    // stg4_rd3
    // stg4_rd4
    // stg4_rd5
    // stg4_rd6
    // stg4_rd7
    // stg4_rd8
    // stg4_rd9
    // stg4_rd10
    // stg4_rd11
    // stg4_rd12
    // stg4_rd13
    // stg4_rd14
    // stg4_rd15
    // stg4_rd16
    // stg4_rd17
    // stg4_rd18
    // stg4_rd19
    // stg4_rd20
    // stg4_rd21
    // stg4_rd22
    // stg4_rd23
    // stg4_rd24
    // stg4_rd25
    // stg4_rd26
    // stg4_rd27
    // stg4_rd28
    // stg4_rd29
    // stg4_rd30
    // stg4_rd31
    // stg4_rd32
    // stg4_rd33
    // stg4_rd34
    // stg4_rd35
    // stg4_rd36
    // stg4_rd37
    // stg4_rd38
    // stg4_rd39
    // stg4_rd40
    // stg4_rd41
    // stg4_rd42
    // stg4_rd43
    // stg4_rd44
    // stg4_rd45
    // stg4_rd46
    // stg4_rd47
    // stg4_rd48
    // stg4_rd49
    // stg4_rd50
    // stg4_rd51
    // stg4_rd52
    // stg4_rd53
    // stg4_rd54
    // stg4_rd55
    // stg4_rd56
    // stg4_rd57
    // stg4_rd58
    // stg4_rd59
    // stg4_rd60
    // stg4_rd61
    // stg4_rd62
    // stg4_rd63

	hw_uint<1024> result;
	hw_uint<16> stg4_rd0_res = stg4_rd0_select(stg3, d0, d1, dynamic_address);
	set_at<0, 1024>(result, stg4_rd0_res);
	hw_uint<16> stg4_rd1_res = stg4_rd1_select(stg3, d0, d1, dynamic_address);
	set_at<16, 1024>(result, stg4_rd1_res);
	hw_uint<16> stg4_rd2_res = stg4_rd2_select(stg3, d0, d1, dynamic_address);
	set_at<32, 1024>(result, stg4_rd2_res);
	hw_uint<16> stg4_rd3_res = stg4_rd3_select(stg3, d0, d1, dynamic_address);
	set_at<48, 1024>(result, stg4_rd3_res);
	hw_uint<16> stg4_rd4_res = stg4_rd4_select(stg3, d0, d1, dynamic_address);
	set_at<64, 1024>(result, stg4_rd4_res);
	hw_uint<16> stg4_rd5_res = stg4_rd5_select(stg3, d0, d1, dynamic_address);
	set_at<80, 1024>(result, stg4_rd5_res);
	hw_uint<16> stg4_rd6_res = stg4_rd6_select(stg3, d0, d1, dynamic_address);
	set_at<96, 1024>(result, stg4_rd6_res);
	hw_uint<16> stg4_rd7_res = stg4_rd7_select(stg3, d0, d1, dynamic_address);
	set_at<112, 1024>(result, stg4_rd7_res);
	hw_uint<16> stg4_rd8_res = stg4_rd8_select(stg3, d0, d1, dynamic_address);
	set_at<128, 1024>(result, stg4_rd8_res);
	hw_uint<16> stg4_rd9_res = stg4_rd9_select(stg3, d0, d1, dynamic_address);
	set_at<144, 1024>(result, stg4_rd9_res);
	hw_uint<16> stg4_rd10_res = stg4_rd10_select(stg3, d0, d1, dynamic_address);
	set_at<160, 1024>(result, stg4_rd10_res);
	hw_uint<16> stg4_rd11_res = stg4_rd11_select(stg3, d0, d1, dynamic_address);
	set_at<176, 1024>(result, stg4_rd11_res);
	hw_uint<16> stg4_rd12_res = stg4_rd12_select(stg3, d0, d1, dynamic_address);
	set_at<192, 1024>(result, stg4_rd12_res);
	hw_uint<16> stg4_rd13_res = stg4_rd13_select(stg3, d0, d1, dynamic_address);
	set_at<208, 1024>(result, stg4_rd13_res);
	hw_uint<16> stg4_rd14_res = stg4_rd14_select(stg3, d0, d1, dynamic_address);
	set_at<224, 1024>(result, stg4_rd14_res);
	hw_uint<16> stg4_rd15_res = stg4_rd15_select(stg3, d0, d1, dynamic_address);
	set_at<240, 1024>(result, stg4_rd15_res);
	hw_uint<16> stg4_rd16_res = stg4_rd16_select(stg3, d0, d1, dynamic_address);
	set_at<256, 1024>(result, stg4_rd16_res);
	hw_uint<16> stg4_rd17_res = stg4_rd17_select(stg3, d0, d1, dynamic_address);
	set_at<272, 1024>(result, stg4_rd17_res);
	hw_uint<16> stg4_rd18_res = stg4_rd18_select(stg3, d0, d1, dynamic_address);
	set_at<288, 1024>(result, stg4_rd18_res);
	hw_uint<16> stg4_rd19_res = stg4_rd19_select(stg3, d0, d1, dynamic_address);
	set_at<304, 1024>(result, stg4_rd19_res);
	hw_uint<16> stg4_rd20_res = stg4_rd20_select(stg3, d0, d1, dynamic_address);
	set_at<320, 1024>(result, stg4_rd20_res);
	hw_uint<16> stg4_rd21_res = stg4_rd21_select(stg3, d0, d1, dynamic_address);
	set_at<336, 1024>(result, stg4_rd21_res);
	hw_uint<16> stg4_rd22_res = stg4_rd22_select(stg3, d0, d1, dynamic_address);
	set_at<352, 1024>(result, stg4_rd22_res);
	hw_uint<16> stg4_rd23_res = stg4_rd23_select(stg3, d0, d1, dynamic_address);
	set_at<368, 1024>(result, stg4_rd23_res);
	hw_uint<16> stg4_rd24_res = stg4_rd24_select(stg3, d0, d1, dynamic_address);
	set_at<384, 1024>(result, stg4_rd24_res);
	hw_uint<16> stg4_rd25_res = stg4_rd25_select(stg3, d0, d1, dynamic_address);
	set_at<400, 1024>(result, stg4_rd25_res);
	hw_uint<16> stg4_rd26_res = stg4_rd26_select(stg3, d0, d1, dynamic_address);
	set_at<416, 1024>(result, stg4_rd26_res);
	hw_uint<16> stg4_rd27_res = stg4_rd27_select(stg3, d0, d1, dynamic_address);
	set_at<432, 1024>(result, stg4_rd27_res);
	hw_uint<16> stg4_rd28_res = stg4_rd28_select(stg3, d0, d1, dynamic_address);
	set_at<448, 1024>(result, stg4_rd28_res);
	hw_uint<16> stg4_rd29_res = stg4_rd29_select(stg3, d0, d1, dynamic_address);
	set_at<464, 1024>(result, stg4_rd29_res);
	hw_uint<16> stg4_rd30_res = stg4_rd30_select(stg3, d0, d1, dynamic_address);
	set_at<480, 1024>(result, stg4_rd30_res);
	hw_uint<16> stg4_rd31_res = stg4_rd31_select(stg3, d0, d1, dynamic_address);
	set_at<496, 1024>(result, stg4_rd31_res);
	hw_uint<16> stg4_rd32_res = stg4_rd32_select(stg3, d0, d1, dynamic_address);
	set_at<512, 1024>(result, stg4_rd32_res);
	hw_uint<16> stg4_rd33_res = stg4_rd33_select(stg3, d0, d1, dynamic_address);
	set_at<528, 1024>(result, stg4_rd33_res);
	hw_uint<16> stg4_rd34_res = stg4_rd34_select(stg3, d0, d1, dynamic_address);
	set_at<544, 1024>(result, stg4_rd34_res);
	hw_uint<16> stg4_rd35_res = stg4_rd35_select(stg3, d0, d1, dynamic_address);
	set_at<560, 1024>(result, stg4_rd35_res);
	hw_uint<16> stg4_rd36_res = stg4_rd36_select(stg3, d0, d1, dynamic_address);
	set_at<576, 1024>(result, stg4_rd36_res);
	hw_uint<16> stg4_rd37_res = stg4_rd37_select(stg3, d0, d1, dynamic_address);
	set_at<592, 1024>(result, stg4_rd37_res);
	hw_uint<16> stg4_rd38_res = stg4_rd38_select(stg3, d0, d1, dynamic_address);
	set_at<608, 1024>(result, stg4_rd38_res);
	hw_uint<16> stg4_rd39_res = stg4_rd39_select(stg3, d0, d1, dynamic_address);
	set_at<624, 1024>(result, stg4_rd39_res);
	hw_uint<16> stg4_rd40_res = stg4_rd40_select(stg3, d0, d1, dynamic_address);
	set_at<640, 1024>(result, stg4_rd40_res);
	hw_uint<16> stg4_rd41_res = stg4_rd41_select(stg3, d0, d1, dynamic_address);
	set_at<656, 1024>(result, stg4_rd41_res);
	hw_uint<16> stg4_rd42_res = stg4_rd42_select(stg3, d0, d1, dynamic_address);
	set_at<672, 1024>(result, stg4_rd42_res);
	hw_uint<16> stg4_rd43_res = stg4_rd43_select(stg3, d0, d1, dynamic_address);
	set_at<688, 1024>(result, stg4_rd43_res);
	hw_uint<16> stg4_rd44_res = stg4_rd44_select(stg3, d0, d1, dynamic_address);
	set_at<704, 1024>(result, stg4_rd44_res);
	hw_uint<16> stg4_rd45_res = stg4_rd45_select(stg3, d0, d1, dynamic_address);
	set_at<720, 1024>(result, stg4_rd45_res);
	hw_uint<16> stg4_rd46_res = stg4_rd46_select(stg3, d0, d1, dynamic_address);
	set_at<736, 1024>(result, stg4_rd46_res);
	hw_uint<16> stg4_rd47_res = stg4_rd47_select(stg3, d0, d1, dynamic_address);
	set_at<752, 1024>(result, stg4_rd47_res);
	hw_uint<16> stg4_rd48_res = stg4_rd48_select(stg3, d0, d1, dynamic_address);
	set_at<768, 1024>(result, stg4_rd48_res);
	hw_uint<16> stg4_rd49_res = stg4_rd49_select(stg3, d0, d1, dynamic_address);
	set_at<784, 1024>(result, stg4_rd49_res);
	hw_uint<16> stg4_rd50_res = stg4_rd50_select(stg3, d0, d1, dynamic_address);
	set_at<800, 1024>(result, stg4_rd50_res);
	hw_uint<16> stg4_rd51_res = stg4_rd51_select(stg3, d0, d1, dynamic_address);
	set_at<816, 1024>(result, stg4_rd51_res);
	hw_uint<16> stg4_rd52_res = stg4_rd52_select(stg3, d0, d1, dynamic_address);
	set_at<832, 1024>(result, stg4_rd52_res);
	hw_uint<16> stg4_rd53_res = stg4_rd53_select(stg3, d0, d1, dynamic_address);
	set_at<848, 1024>(result, stg4_rd53_res);
	hw_uint<16> stg4_rd54_res = stg4_rd54_select(stg3, d0, d1, dynamic_address);
	set_at<864, 1024>(result, stg4_rd54_res);
	hw_uint<16> stg4_rd55_res = stg4_rd55_select(stg3, d0, d1, dynamic_address);
	set_at<880, 1024>(result, stg4_rd55_res);
	hw_uint<16> stg4_rd56_res = stg4_rd56_select(stg3, d0, d1, dynamic_address);
	set_at<896, 1024>(result, stg4_rd56_res);
	hw_uint<16> stg4_rd57_res = stg4_rd57_select(stg3, d0, d1, dynamic_address);
	set_at<912, 1024>(result, stg4_rd57_res);
	hw_uint<16> stg4_rd58_res = stg4_rd58_select(stg3, d0, d1, dynamic_address);
	set_at<928, 1024>(result, stg4_rd58_res);
	hw_uint<16> stg4_rd59_res = stg4_rd59_select(stg3, d0, d1, dynamic_address);
	set_at<944, 1024>(result, stg4_rd59_res);
	hw_uint<16> stg4_rd60_res = stg4_rd60_select(stg3, d0, d1, dynamic_address);
	set_at<960, 1024>(result, stg4_rd60_res);
	hw_uint<16> stg4_rd61_res = stg4_rd61_select(stg3, d0, d1, dynamic_address);
	set_at<976, 1024>(result, stg4_rd61_res);
	hw_uint<16> stg4_rd62_res = stg4_rd62_select(stg3, d0, d1, dynamic_address);
	set_at<992, 1024>(result, stg4_rd62_res);
	hw_uint<16> stg4_rd63_res = stg4_rd63_select(stg3, d0, d1, dynamic_address);
	set_at<1008, 1024>(result, stg4_rd63_res);
	return result;
}

struct stg4_stg4_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-64, 1984], [0, 1083]}
	// Capacity: 132
	// # of read delays: 4
  // 0, 1, 130, 131
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 128> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


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



	inline void push(const hw_uint<16> value) {
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

struct stg4_stg4_update_0_write1_merged_banks_4_cache {
	// RAM Box: {[-63, 1969], [0, 1084]}
	// Capacity: 132
	// # of read delays: 3
  // 0, 1, 131
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 129> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg4_stg4_update_0_write10_merged_banks_4_cache {
	// RAM Box: {[-54, 1978], [0, 1084]}
	// Capacity: 132
	// # of read delays: 3
  // 0, 1, 131
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 129> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg4_stg4_update_0_write11_merged_banks_4_cache {
	// RAM Box: {[-53, 1979], [0, 1084]}
	// Capacity: 132
	// # of read delays: 3
  // 0, 1, 131
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 129> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg4_stg4_update_0_write12_merged_banks_4_cache {
	// RAM Box: {[-52, 1980], [0, 1084]}
	// Capacity: 132
	// # of read delays: 3
  // 0, 1, 131
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 129> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg4_stg4_update_0_write13_merged_banks_4_cache {
	// RAM Box: {[-51, 1981], [0, 1084]}
	// Capacity: 132
	// # of read delays: 3
  // 0, 1, 131
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 129> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg4_stg4_update_0_write14_merged_banks_4_cache {
	// RAM Box: {[-50, 1982], [0, 1084]}
	// Capacity: 132
	// # of read delays: 3
  // 0, 1, 131
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 129> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg4_stg4_update_0_write15_merged_banks_4_cache {
	// RAM Box: {[-65, 1983], [0, 1084]}
	// Capacity: 133
	// # of read delays: 4
  // 0, 1, 131, 132
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 129> f3;
	hw_uint<16> f4;
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

	inline hw_uint<16> peek_132() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg4_stg4_update_0_write2_merged_banks_4_cache {
	// RAM Box: {[-62, 1970], [0, 1084]}
	// Capacity: 132
	// # of read delays: 3
  // 0, 1, 131
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 129> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg4_stg4_update_0_write3_merged_banks_4_cache {
	// RAM Box: {[-61, 1971], [0, 1084]}
	// Capacity: 132
	// # of read delays: 3
  // 0, 1, 131
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 129> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg4_stg4_update_0_write4_merged_banks_4_cache {
	// RAM Box: {[-60, 1972], [0, 1084]}
	// Capacity: 132
	// # of read delays: 3
  // 0, 1, 131
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 129> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg4_stg4_update_0_write5_merged_banks_4_cache {
	// RAM Box: {[-59, 1973], [0, 1084]}
	// Capacity: 132
	// # of read delays: 3
  // 0, 1, 131
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 129> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg4_stg4_update_0_write6_merged_banks_4_cache {
	// RAM Box: {[-58, 1974], [0, 1084]}
	// Capacity: 132
	// # of read delays: 3
  // 0, 1, 131
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 129> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg4_stg4_update_0_write7_merged_banks_4_cache {
	// RAM Box: {[-57, 1975], [0, 1084]}
	// Capacity: 132
	// # of read delays: 3
  // 0, 1, 131
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 129> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg4_stg4_update_0_write8_merged_banks_4_cache {
	// RAM Box: {[-56, 1976], [0, 1084]}
	// Capacity: 132
	// # of read delays: 3
  // 0, 1, 131
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 129> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg4_stg4_update_0_write9_merged_banks_4_cache {
	// RAM Box: {[-55, 1977], [0, 1084]}
	// Capacity: 132
	// # of read delays: 3
  // 0, 1, 131
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 129> f3;
	hw_uint<16> f4;


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



	inline void push(const hw_uint<16> value) {
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

struct stg4_cache {
  // # of banks: 16
  stg4_stg4_update_0_write0_merged_banks_4_cache stg4_stg4_update_0_write0_merged_banks_4;
  stg4_stg4_update_0_write1_merged_banks_4_cache stg4_stg4_update_0_write1_merged_banks_4;
  stg4_stg4_update_0_write10_merged_banks_4_cache stg4_stg4_update_0_write10_merged_banks_4;
  stg4_stg4_update_0_write11_merged_banks_4_cache stg4_stg4_update_0_write11_merged_banks_4;
  stg4_stg4_update_0_write12_merged_banks_4_cache stg4_stg4_update_0_write12_merged_banks_4;
  stg4_stg4_update_0_write13_merged_banks_4_cache stg4_stg4_update_0_write13_merged_banks_4;
  stg4_stg4_update_0_write14_merged_banks_4_cache stg4_stg4_update_0_write14_merged_banks_4;
  stg4_stg4_update_0_write15_merged_banks_4_cache stg4_stg4_update_0_write15_merged_banks_4;
  stg4_stg4_update_0_write2_merged_banks_4_cache stg4_stg4_update_0_write2_merged_banks_4;
  stg4_stg4_update_0_write3_merged_banks_4_cache stg4_stg4_update_0_write3_merged_banks_4;
  stg4_stg4_update_0_write4_merged_banks_4_cache stg4_stg4_update_0_write4_merged_banks_4;
  stg4_stg4_update_0_write5_merged_banks_4_cache stg4_stg4_update_0_write5_merged_banks_4;
  stg4_stg4_update_0_write6_merged_banks_4_cache stg4_stg4_update_0_write6_merged_banks_4;
  stg4_stg4_update_0_write7_merged_banks_4_cache stg4_stg4_update_0_write7_merged_banks_4;
  stg4_stg4_update_0_write8_merged_banks_4_cache stg4_stg4_update_0_write8_merged_banks_4;
  stg4_stg4_update_0_write9_merged_banks_4_cache stg4_stg4_update_0_write9_merged_banks_4;
};



inline void stg4_stg4_update_0_write0_write(hw_uint<16>& stg4_stg4_update_0_write0, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write0_merged_banks_4.push(stg4_stg4_update_0_write0);
}

inline void stg4_stg4_update_0_write1_write(hw_uint<16>& stg4_stg4_update_0_write1, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write1_merged_banks_4.push(stg4_stg4_update_0_write1);
}

inline void stg4_stg4_update_0_write10_write(hw_uint<16>& stg4_stg4_update_0_write10, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write10_merged_banks_4.push(stg4_stg4_update_0_write10);
}

inline void stg4_stg4_update_0_write11_write(hw_uint<16>& stg4_stg4_update_0_write11, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write11_merged_banks_4.push(stg4_stg4_update_0_write11);
}

inline void stg4_stg4_update_0_write12_write(hw_uint<16>& stg4_stg4_update_0_write12, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write12_merged_banks_4.push(stg4_stg4_update_0_write12);
}

inline void stg4_stg4_update_0_write13_write(hw_uint<16>& stg4_stg4_update_0_write13, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write13_merged_banks_4.push(stg4_stg4_update_0_write13);
}

inline void stg4_stg4_update_0_write14_write(hw_uint<16>& stg4_stg4_update_0_write14, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write14_merged_banks_4.push(stg4_stg4_update_0_write14);
}

inline void stg4_stg4_update_0_write15_write(hw_uint<16>& stg4_stg4_update_0_write15, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write15_merged_banks_4.push(stg4_stg4_update_0_write15);
}

inline void stg4_stg4_update_0_write2_write(hw_uint<16>& stg4_stg4_update_0_write2, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write2_merged_banks_4.push(stg4_stg4_update_0_write2);
}

inline void stg4_stg4_update_0_write3_write(hw_uint<16>& stg4_stg4_update_0_write3, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write3_merged_banks_4.push(stg4_stg4_update_0_write3);
}

inline void stg4_stg4_update_0_write4_write(hw_uint<16>& stg4_stg4_update_0_write4, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write4_merged_banks_4.push(stg4_stg4_update_0_write4);
}

inline void stg4_stg4_update_0_write5_write(hw_uint<16>& stg4_stg4_update_0_write5, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write5_merged_banks_4.push(stg4_stg4_update_0_write5);
}

inline void stg4_stg4_update_0_write6_write(hw_uint<16>& stg4_stg4_update_0_write6, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write6_merged_banks_4.push(stg4_stg4_update_0_write6);
}

inline void stg4_stg4_update_0_write7_write(hw_uint<16>& stg4_stg4_update_0_write7, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write7_merged_banks_4.push(stg4_stg4_update_0_write7);
}

inline void stg4_stg4_update_0_write8_write(hw_uint<16>& stg4_stg4_update_0_write8, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write8_merged_banks_4.push(stg4_stg4_update_0_write8);
}

inline void stg4_stg4_update_0_write9_write(hw_uint<16>& stg4_stg4_update_0_write9, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write9_merged_banks_4.push(stg4_stg4_update_0_write9);
}

inline hw_uint<16> stg5_rd0_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd0 read pattern: { stg5_update_0[d0, d1] -> stg4[-1 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write15 = stg4.stg4_stg4_update_0_write15_merged_banks_4.peek_132();
  return value_stg4_stg4_update_0_write15;
  return 0;
}

inline hw_uint<16> stg5_rd1_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd1 read pattern: { stg5_update_0[d0, d1] -> stg4[16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write0 = stg4.stg4_stg4_update_0_write0_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write0;
  return 0;
}

inline hw_uint<16> stg5_rd10_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd10 read pattern: { stg5_update_0[d0, d1] -> stg4[2 + 16d0, 1 + d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write2 = stg4.stg4_stg4_update_0_write2_merged_banks_4.peek_1();
  return value_stg4_stg4_update_0_write2;
  return 0;
}

inline hw_uint<16> stg5_rd11_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd11 read pattern: { stg5_update_0[d0, d1] -> stg4[3 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write3 = stg4.stg4_stg4_update_0_write3_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write3;
  return 0;
}

inline hw_uint<16> stg5_rd12_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd12 read pattern: { stg5_update_0[d0, d1] -> stg4[2 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write2 = stg4.stg4_stg4_update_0_write2_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write2;
  return 0;
}

inline hw_uint<16> stg5_rd13_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd13 read pattern: { stg5_update_0[d0, d1] -> stg4[3 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write3 = stg4.stg4_stg4_update_0_write3_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write3;
  return 0;
}

inline hw_uint<16> stg5_rd14_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd14 read pattern: { stg5_update_0[d0, d1] -> stg4[3 + 16d0, 1 + d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write3 = stg4.stg4_stg4_update_0_write3_merged_banks_4.peek_1();
  return value_stg4_stg4_update_0_write3;
  return 0;
}

inline hw_uint<16> stg5_rd15_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd15 read pattern: { stg5_update_0[d0, d1] -> stg4[4 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write4 = stg4.stg4_stg4_update_0_write4_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write4;
  return 0;
}

inline hw_uint<16> stg5_rd16_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd16 read pattern: { stg5_update_0[d0, d1] -> stg4[3 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write3 = stg4.stg4_stg4_update_0_write3_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write3;
  return 0;
}

inline hw_uint<16> stg5_rd17_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd17 read pattern: { stg5_update_0[d0, d1] -> stg4[4 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write4 = stg4.stg4_stg4_update_0_write4_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write4;
  return 0;
}

inline hw_uint<16> stg5_rd18_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd18 read pattern: { stg5_update_0[d0, d1] -> stg4[4 + 16d0, 1 + d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write4 = stg4.stg4_stg4_update_0_write4_merged_banks_4.peek_1();
  return value_stg4_stg4_update_0_write4;
  return 0;
}

inline hw_uint<16> stg5_rd19_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd19 read pattern: { stg5_update_0[d0, d1] -> stg4[5 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write5 = stg4.stg4_stg4_update_0_write5_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write5;
  return 0;
}

inline hw_uint<16> stg5_rd2_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd2 read pattern: { stg5_update_0[d0, d1] -> stg4[16d0, 1 + d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write0 = stg4.stg4_stg4_update_0_write0_merged_banks_4.peek_1();
  return value_stg4_stg4_update_0_write0;
  return 0;
}

inline hw_uint<16> stg5_rd20_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd20 read pattern: { stg5_update_0[d0, d1] -> stg4[4 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write4 = stg4.stg4_stg4_update_0_write4_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write4;
  return 0;
}

inline hw_uint<16> stg5_rd21_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd21 read pattern: { stg5_update_0[d0, d1] -> stg4[5 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write5 = stg4.stg4_stg4_update_0_write5_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write5;
  return 0;
}

inline hw_uint<16> stg5_rd22_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd22 read pattern: { stg5_update_0[d0, d1] -> stg4[5 + 16d0, 1 + d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write5 = stg4.stg4_stg4_update_0_write5_merged_banks_4.peek_1();
  return value_stg4_stg4_update_0_write5;
  return 0;
}

inline hw_uint<16> stg5_rd23_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd23 read pattern: { stg5_update_0[d0, d1] -> stg4[6 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write6 = stg4.stg4_stg4_update_0_write6_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write6;
  return 0;
}

inline hw_uint<16> stg5_rd24_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd24 read pattern: { stg5_update_0[d0, d1] -> stg4[5 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write5 = stg4.stg4_stg4_update_0_write5_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write5;
  return 0;
}

inline hw_uint<16> stg5_rd25_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd25 read pattern: { stg5_update_0[d0, d1] -> stg4[6 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write6 = stg4.stg4_stg4_update_0_write6_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write6;
  return 0;
}

inline hw_uint<16> stg5_rd26_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd26 read pattern: { stg5_update_0[d0, d1] -> stg4[6 + 16d0, 1 + d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write6 = stg4.stg4_stg4_update_0_write6_merged_banks_4.peek_1();
  return value_stg4_stg4_update_0_write6;
  return 0;
}

inline hw_uint<16> stg5_rd27_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd27 read pattern: { stg5_update_0[d0, d1] -> stg4[7 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write7 = stg4.stg4_stg4_update_0_write7_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write7;
  return 0;
}

inline hw_uint<16> stg5_rd28_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd28 read pattern: { stg5_update_0[d0, d1] -> stg4[6 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write6 = stg4.stg4_stg4_update_0_write6_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write6;
  return 0;
}

inline hw_uint<16> stg5_rd29_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd29 read pattern: { stg5_update_0[d0, d1] -> stg4[7 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write7 = stg4.stg4_stg4_update_0_write7_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write7;
  return 0;
}

inline hw_uint<16> stg5_rd3_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd3 read pattern: { stg5_update_0[d0, d1] -> stg4[1 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write1 = stg4.stg4_stg4_update_0_write1_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write1;
  return 0;
}

inline hw_uint<16> stg5_rd30_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd30 read pattern: { stg5_update_0[d0, d1] -> stg4[7 + 16d0, 1 + d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write7 = stg4.stg4_stg4_update_0_write7_merged_banks_4.peek_1();
  return value_stg4_stg4_update_0_write7;
  return 0;
}

inline hw_uint<16> stg5_rd31_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd31 read pattern: { stg5_update_0[d0, d1] -> stg4[8 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write8 = stg4.stg4_stg4_update_0_write8_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write8;
  return 0;
}

inline hw_uint<16> stg5_rd32_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd32 read pattern: { stg5_update_0[d0, d1] -> stg4[7 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write7 = stg4.stg4_stg4_update_0_write7_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write7;
  return 0;
}

inline hw_uint<16> stg5_rd33_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd33 read pattern: { stg5_update_0[d0, d1] -> stg4[8 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write8 = stg4.stg4_stg4_update_0_write8_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write8;
  return 0;
}

inline hw_uint<16> stg5_rd34_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd34 read pattern: { stg5_update_0[d0, d1] -> stg4[8 + 16d0, 1 + d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write8 = stg4.stg4_stg4_update_0_write8_merged_banks_4.peek_1();
  return value_stg4_stg4_update_0_write8;
  return 0;
}

inline hw_uint<16> stg5_rd35_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd35 read pattern: { stg5_update_0[d0, d1] -> stg4[9 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write9 = stg4.stg4_stg4_update_0_write9_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write9;
  return 0;
}

inline hw_uint<16> stg5_rd36_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd36 read pattern: { stg5_update_0[d0, d1] -> stg4[8 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write8 = stg4.stg4_stg4_update_0_write8_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write8;
  return 0;
}

inline hw_uint<16> stg5_rd37_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd37 read pattern: { stg5_update_0[d0, d1] -> stg4[9 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write9 = stg4.stg4_stg4_update_0_write9_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write9;
  return 0;
}

inline hw_uint<16> stg5_rd38_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd38 read pattern: { stg5_update_0[d0, d1] -> stg4[9 + 16d0, 1 + d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write9 = stg4.stg4_stg4_update_0_write9_merged_banks_4.peek_1();
  return value_stg4_stg4_update_0_write9;
  return 0;
}

inline hw_uint<16> stg5_rd39_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd39 read pattern: { stg5_update_0[d0, d1] -> stg4[10 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write10 = stg4.stg4_stg4_update_0_write10_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write10;
  return 0;
}

inline hw_uint<16> stg5_rd4_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd4 read pattern: { stg5_update_0[d0, d1] -> stg4[16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write0 = stg4.stg4_stg4_update_0_write0_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write0;
  return 0;
}

inline hw_uint<16> stg5_rd40_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd40 read pattern: { stg5_update_0[d0, d1] -> stg4[9 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write9 = stg4.stg4_stg4_update_0_write9_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write9;
  return 0;
}

inline hw_uint<16> stg5_rd41_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd41 read pattern: { stg5_update_0[d0, d1] -> stg4[10 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write10 = stg4.stg4_stg4_update_0_write10_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write10;
  return 0;
}

inline hw_uint<16> stg5_rd42_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd42 read pattern: { stg5_update_0[d0, d1] -> stg4[10 + 16d0, 1 + d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write10 = stg4.stg4_stg4_update_0_write10_merged_banks_4.peek_1();
  return value_stg4_stg4_update_0_write10;
  return 0;
}

inline hw_uint<16> stg5_rd43_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd43 read pattern: { stg5_update_0[d0, d1] -> stg4[11 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write11 = stg4.stg4_stg4_update_0_write11_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write11;
  return 0;
}

inline hw_uint<16> stg5_rd44_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd44 read pattern: { stg5_update_0[d0, d1] -> stg4[10 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write10 = stg4.stg4_stg4_update_0_write10_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write10;
  return 0;
}

inline hw_uint<16> stg5_rd45_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd45 read pattern: { stg5_update_0[d0, d1] -> stg4[11 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write11 = stg4.stg4_stg4_update_0_write11_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write11;
  return 0;
}

inline hw_uint<16> stg5_rd46_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd46 read pattern: { stg5_update_0[d0, d1] -> stg4[11 + 16d0, 1 + d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write11 = stg4.stg4_stg4_update_0_write11_merged_banks_4.peek_1();
  return value_stg4_stg4_update_0_write11;
  return 0;
}

inline hw_uint<16> stg5_rd47_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd47 read pattern: { stg5_update_0[d0, d1] -> stg4[12 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write12 = stg4.stg4_stg4_update_0_write12_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write12;
  return 0;
}

inline hw_uint<16> stg5_rd48_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd48 read pattern: { stg5_update_0[d0, d1] -> stg4[11 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write11 = stg4.stg4_stg4_update_0_write11_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write11;
  return 0;
}

inline hw_uint<16> stg5_rd49_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd49 read pattern: { stg5_update_0[d0, d1] -> stg4[12 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write12 = stg4.stg4_stg4_update_0_write12_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write12;
  return 0;
}

inline hw_uint<16> stg5_rd5_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd5 read pattern: { stg5_update_0[d0, d1] -> stg4[1 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write1 = stg4.stg4_stg4_update_0_write1_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write1;
  return 0;
}

inline hw_uint<16> stg5_rd50_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd50 read pattern: { stg5_update_0[d0, d1] -> stg4[12 + 16d0, 1 + d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write12 = stg4.stg4_stg4_update_0_write12_merged_banks_4.peek_1();
  return value_stg4_stg4_update_0_write12;
  return 0;
}

inline hw_uint<16> stg5_rd51_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd51 read pattern: { stg5_update_0[d0, d1] -> stg4[13 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write13 = stg4.stg4_stg4_update_0_write13_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write13;
  return 0;
}

inline hw_uint<16> stg5_rd52_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd52 read pattern: { stg5_update_0[d0, d1] -> stg4[12 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write12 = stg4.stg4_stg4_update_0_write12_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write12;
  return 0;
}

inline hw_uint<16> stg5_rd53_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd53 read pattern: { stg5_update_0[d0, d1] -> stg4[13 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write13 = stg4.stg4_stg4_update_0_write13_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write13;
  return 0;
}

inline hw_uint<16> stg5_rd54_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd54 read pattern: { stg5_update_0[d0, d1] -> stg4[13 + 16d0, 1 + d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write13 = stg4.stg4_stg4_update_0_write13_merged_banks_4.peek_1();
  return value_stg4_stg4_update_0_write13;
  return 0;
}

inline hw_uint<16> stg5_rd55_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd55 read pattern: { stg5_update_0[d0, d1] -> stg4[14 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write14 = stg4.stg4_stg4_update_0_write14_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write14;
  return 0;
}

inline hw_uint<16> stg5_rd56_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd56 read pattern: { stg5_update_0[d0, d1] -> stg4[13 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write13 = stg4.stg4_stg4_update_0_write13_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write13;
  return 0;
}

inline hw_uint<16> stg5_rd57_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd57 read pattern: { stg5_update_0[d0, d1] -> stg4[14 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write14 = stg4.stg4_stg4_update_0_write14_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write14;
  return 0;
}

inline hw_uint<16> stg5_rd58_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd58 read pattern: { stg5_update_0[d0, d1] -> stg4[14 + 16d0, 1 + d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write14 = stg4.stg4_stg4_update_0_write14_merged_banks_4.peek_1();
  return value_stg4_stg4_update_0_write14;
  return 0;
}

inline hw_uint<16> stg5_rd59_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd59 read pattern: { stg5_update_0[d0, d1] -> stg4[15 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write15 = stg4.stg4_stg4_update_0_write15_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write15;
  return 0;
}

inline hw_uint<16> stg5_rd6_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd6 read pattern: { stg5_update_0[d0, d1] -> stg4[1 + 16d0, 1 + d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write1 = stg4.stg4_stg4_update_0_write1_merged_banks_4.peek_1();
  return value_stg4_stg4_update_0_write1;
  return 0;
}

inline hw_uint<16> stg5_rd60_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd60 read pattern: { stg5_update_0[d0, d1] -> stg4[14 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write14 = stg4.stg4_stg4_update_0_write14_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write14;
  return 0;
}

inline hw_uint<16> stg5_rd61_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd61 read pattern: { stg5_update_0[d0, d1] -> stg4[15 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write15 = stg4.stg4_stg4_update_0_write15_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write15;
  return 0;
}

inline hw_uint<16> stg5_rd62_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd62 read pattern: { stg5_update_0[d0, d1] -> stg4[15 + 16d0, 1 + d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write15 = stg4.stg4_stg4_update_0_write15_merged_banks_4.peek_1();
  return value_stg4_stg4_update_0_write15;
  return 0;
}

inline hw_uint<16> stg5_rd63_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd63 read pattern: { stg5_update_0[d0, d1] -> stg4[16 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write0 = stg4.stg4_stg4_update_0_write0_merged_banks_4.peek_130();
  return value_stg4_stg4_update_0_write0;
  return 0;
}

inline hw_uint<16> stg5_rd7_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd7 read pattern: { stg5_update_0[d0, d1] -> stg4[2 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write2 = stg4.stg4_stg4_update_0_write2_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write2;
  return 0;
}

inline hw_uint<16> stg5_rd8_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd8 read pattern: { stg5_update_0[d0, d1] -> stg4[1 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write1 = stg4.stg4_stg4_update_0_write1_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write1;
  return 0;
}

inline hw_uint<16> stg5_rd9_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg5_rd9 read pattern: { stg5_update_0[d0, d1] -> stg4[2 + 16d0, d1] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Read schedule : { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
  auto value_stg4_stg4_update_0_write2 = stg4.stg4_stg4_update_0_write2_merged_banks_4.peek_131();
  return value_stg4_stg4_update_0_write2;
  return 0;
}

// # of bundles = 2
// stg4_update_0_write
//	stg4_stg4_update_0_write0
//	stg4_stg4_update_0_write1
//	stg4_stg4_update_0_write2
//	stg4_stg4_update_0_write3
//	stg4_stg4_update_0_write4
//	stg4_stg4_update_0_write5
//	stg4_stg4_update_0_write6
//	stg4_stg4_update_0_write7
//	stg4_stg4_update_0_write8
//	stg4_stg4_update_0_write9
//	stg4_stg4_update_0_write10
//	stg4_stg4_update_0_write11
//	stg4_stg4_update_0_write12
//	stg4_stg4_update_0_write13
//	stg4_stg4_update_0_write14
//	stg4_stg4_update_0_write15
inline void stg4_stg4_update_0_write_bundle_write(hw_uint<256>& stg4_update_0_write, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg4_stg4_update_0_write0_res = stg4_update_0_write.extract<0, 15>();
	stg4_stg4_update_0_write0_write(stg4_stg4_update_0_write0_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write1_res = stg4_update_0_write.extract<16, 31>();
	stg4_stg4_update_0_write1_write(stg4_stg4_update_0_write1_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write2_res = stg4_update_0_write.extract<32, 47>();
	stg4_stg4_update_0_write2_write(stg4_stg4_update_0_write2_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write3_res = stg4_update_0_write.extract<48, 63>();
	stg4_stg4_update_0_write3_write(stg4_stg4_update_0_write3_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write4_res = stg4_update_0_write.extract<64, 79>();
	stg4_stg4_update_0_write4_write(stg4_stg4_update_0_write4_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write5_res = stg4_update_0_write.extract<80, 95>();
	stg4_stg4_update_0_write5_write(stg4_stg4_update_0_write5_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write6_res = stg4_update_0_write.extract<96, 111>();
	stg4_stg4_update_0_write6_write(stg4_stg4_update_0_write6_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write7_res = stg4_update_0_write.extract<112, 127>();
	stg4_stg4_update_0_write7_write(stg4_stg4_update_0_write7_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write8_res = stg4_update_0_write.extract<128, 143>();
	stg4_stg4_update_0_write8_write(stg4_stg4_update_0_write8_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write9_res = stg4_update_0_write.extract<144, 159>();
	stg4_stg4_update_0_write9_write(stg4_stg4_update_0_write9_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write10_res = stg4_update_0_write.extract<160, 175>();
	stg4_stg4_update_0_write10_write(stg4_stg4_update_0_write10_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write11_res = stg4_update_0_write.extract<176, 191>();
	stg4_stg4_update_0_write11_write(stg4_stg4_update_0_write11_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write12_res = stg4_update_0_write.extract<192, 207>();
	stg4_stg4_update_0_write12_write(stg4_stg4_update_0_write12_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write13_res = stg4_update_0_write.extract<208, 223>();
	stg4_stg4_update_0_write13_write(stg4_stg4_update_0_write13_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write14_res = stg4_update_0_write.extract<224, 239>();
	stg4_stg4_update_0_write14_write(stg4_stg4_update_0_write14_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write15_res = stg4_update_0_write.extract<240, 255>();
	stg4_stg4_update_0_write15_write(stg4_stg4_update_0_write15_res, stg4, d0, d1, dynamic_address);
}

// stg5_update_0_read
//	stg5_rd0
//	stg5_rd1
//	stg5_rd2
//	stg5_rd3
//	stg5_rd4
//	stg5_rd5
//	stg5_rd6
//	stg5_rd7
//	stg5_rd8
//	stg5_rd9
//	stg5_rd10
//	stg5_rd11
//	stg5_rd12
//	stg5_rd13
//	stg5_rd14
//	stg5_rd15
//	stg5_rd16
//	stg5_rd17
//	stg5_rd18
//	stg5_rd19
//	stg5_rd20
//	stg5_rd21
//	stg5_rd22
//	stg5_rd23
//	stg5_rd24
//	stg5_rd25
//	stg5_rd26
//	stg5_rd27
//	stg5_rd28
//	stg5_rd29
//	stg5_rd30
//	stg5_rd31
//	stg5_rd32
//	stg5_rd33
//	stg5_rd34
//	stg5_rd35
//	stg5_rd36
//	stg5_rd37
//	stg5_rd38
//	stg5_rd39
//	stg5_rd40
//	stg5_rd41
//	stg5_rd42
//	stg5_rd43
//	stg5_rd44
//	stg5_rd45
//	stg5_rd46
//	stg5_rd47
//	stg5_rd48
//	stg5_rd49
//	stg5_rd50
//	stg5_rd51
//	stg5_rd52
//	stg5_rd53
//	stg5_rd54
//	stg5_rd55
//	stg5_rd56
//	stg5_rd57
//	stg5_rd58
//	stg5_rd59
//	stg5_rd60
//	stg5_rd61
//	stg5_rd62
//	stg5_rd63
inline hw_uint<1024> stg4_stg5_update_0_read_bundle_read(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 64
    // stg5_rd0
    // stg5_rd1
    // stg5_rd2
    // stg5_rd3
    // stg5_rd4
    // stg5_rd5
    // stg5_rd6
    // stg5_rd7
    // stg5_rd8
    // stg5_rd9
    // stg5_rd10
    // stg5_rd11
    // stg5_rd12
    // stg5_rd13
    // stg5_rd14
    // stg5_rd15
    // stg5_rd16
    // stg5_rd17
    // stg5_rd18
    // stg5_rd19
    // stg5_rd20
    // stg5_rd21
    // stg5_rd22
    // stg5_rd23
    // stg5_rd24
    // stg5_rd25
    // stg5_rd26
    // stg5_rd27
    // stg5_rd28
    // stg5_rd29
    // stg5_rd30
    // stg5_rd31
    // stg5_rd32
    // stg5_rd33
    // stg5_rd34
    // stg5_rd35
    // stg5_rd36
    // stg5_rd37
    // stg5_rd38
    // stg5_rd39
    // stg5_rd40
    // stg5_rd41
    // stg5_rd42
    // stg5_rd43
    // stg5_rd44
    // stg5_rd45
    // stg5_rd46
    // stg5_rd47
    // stg5_rd48
    // stg5_rd49
    // stg5_rd50
    // stg5_rd51
    // stg5_rd52
    // stg5_rd53
    // stg5_rd54
    // stg5_rd55
    // stg5_rd56
    // stg5_rd57
    // stg5_rd58
    // stg5_rd59
    // stg5_rd60
    // stg5_rd61
    // stg5_rd62
    // stg5_rd63

	hw_uint<1024> result;
	hw_uint<16> stg5_rd0_res = stg5_rd0_select(stg4, d0, d1, dynamic_address);
	set_at<0, 1024>(result, stg5_rd0_res);
	hw_uint<16> stg5_rd1_res = stg5_rd1_select(stg4, d0, d1, dynamic_address);
	set_at<16, 1024>(result, stg5_rd1_res);
	hw_uint<16> stg5_rd2_res = stg5_rd2_select(stg4, d0, d1, dynamic_address);
	set_at<32, 1024>(result, stg5_rd2_res);
	hw_uint<16> stg5_rd3_res = stg5_rd3_select(stg4, d0, d1, dynamic_address);
	set_at<48, 1024>(result, stg5_rd3_res);
	hw_uint<16> stg5_rd4_res = stg5_rd4_select(stg4, d0, d1, dynamic_address);
	set_at<64, 1024>(result, stg5_rd4_res);
	hw_uint<16> stg5_rd5_res = stg5_rd5_select(stg4, d0, d1, dynamic_address);
	set_at<80, 1024>(result, stg5_rd5_res);
	hw_uint<16> stg5_rd6_res = stg5_rd6_select(stg4, d0, d1, dynamic_address);
	set_at<96, 1024>(result, stg5_rd6_res);
	hw_uint<16> stg5_rd7_res = stg5_rd7_select(stg4, d0, d1, dynamic_address);
	set_at<112, 1024>(result, stg5_rd7_res);
	hw_uint<16> stg5_rd8_res = stg5_rd8_select(stg4, d0, d1, dynamic_address);
	set_at<128, 1024>(result, stg5_rd8_res);
	hw_uint<16> stg5_rd9_res = stg5_rd9_select(stg4, d0, d1, dynamic_address);
	set_at<144, 1024>(result, stg5_rd9_res);
	hw_uint<16> stg5_rd10_res = stg5_rd10_select(stg4, d0, d1, dynamic_address);
	set_at<160, 1024>(result, stg5_rd10_res);
	hw_uint<16> stg5_rd11_res = stg5_rd11_select(stg4, d0, d1, dynamic_address);
	set_at<176, 1024>(result, stg5_rd11_res);
	hw_uint<16> stg5_rd12_res = stg5_rd12_select(stg4, d0, d1, dynamic_address);
	set_at<192, 1024>(result, stg5_rd12_res);
	hw_uint<16> stg5_rd13_res = stg5_rd13_select(stg4, d0, d1, dynamic_address);
	set_at<208, 1024>(result, stg5_rd13_res);
	hw_uint<16> stg5_rd14_res = stg5_rd14_select(stg4, d0, d1, dynamic_address);
	set_at<224, 1024>(result, stg5_rd14_res);
	hw_uint<16> stg5_rd15_res = stg5_rd15_select(stg4, d0, d1, dynamic_address);
	set_at<240, 1024>(result, stg5_rd15_res);
	hw_uint<16> stg5_rd16_res = stg5_rd16_select(stg4, d0, d1, dynamic_address);
	set_at<256, 1024>(result, stg5_rd16_res);
	hw_uint<16> stg5_rd17_res = stg5_rd17_select(stg4, d0, d1, dynamic_address);
	set_at<272, 1024>(result, stg5_rd17_res);
	hw_uint<16> stg5_rd18_res = stg5_rd18_select(stg4, d0, d1, dynamic_address);
	set_at<288, 1024>(result, stg5_rd18_res);
	hw_uint<16> stg5_rd19_res = stg5_rd19_select(stg4, d0, d1, dynamic_address);
	set_at<304, 1024>(result, stg5_rd19_res);
	hw_uint<16> stg5_rd20_res = stg5_rd20_select(stg4, d0, d1, dynamic_address);
	set_at<320, 1024>(result, stg5_rd20_res);
	hw_uint<16> stg5_rd21_res = stg5_rd21_select(stg4, d0, d1, dynamic_address);
	set_at<336, 1024>(result, stg5_rd21_res);
	hw_uint<16> stg5_rd22_res = stg5_rd22_select(stg4, d0, d1, dynamic_address);
	set_at<352, 1024>(result, stg5_rd22_res);
	hw_uint<16> stg5_rd23_res = stg5_rd23_select(stg4, d0, d1, dynamic_address);
	set_at<368, 1024>(result, stg5_rd23_res);
	hw_uint<16> stg5_rd24_res = stg5_rd24_select(stg4, d0, d1, dynamic_address);
	set_at<384, 1024>(result, stg5_rd24_res);
	hw_uint<16> stg5_rd25_res = stg5_rd25_select(stg4, d0, d1, dynamic_address);
	set_at<400, 1024>(result, stg5_rd25_res);
	hw_uint<16> stg5_rd26_res = stg5_rd26_select(stg4, d0, d1, dynamic_address);
	set_at<416, 1024>(result, stg5_rd26_res);
	hw_uint<16> stg5_rd27_res = stg5_rd27_select(stg4, d0, d1, dynamic_address);
	set_at<432, 1024>(result, stg5_rd27_res);
	hw_uint<16> stg5_rd28_res = stg5_rd28_select(stg4, d0, d1, dynamic_address);
	set_at<448, 1024>(result, stg5_rd28_res);
	hw_uint<16> stg5_rd29_res = stg5_rd29_select(stg4, d0, d1, dynamic_address);
	set_at<464, 1024>(result, stg5_rd29_res);
	hw_uint<16> stg5_rd30_res = stg5_rd30_select(stg4, d0, d1, dynamic_address);
	set_at<480, 1024>(result, stg5_rd30_res);
	hw_uint<16> stg5_rd31_res = stg5_rd31_select(stg4, d0, d1, dynamic_address);
	set_at<496, 1024>(result, stg5_rd31_res);
	hw_uint<16> stg5_rd32_res = stg5_rd32_select(stg4, d0, d1, dynamic_address);
	set_at<512, 1024>(result, stg5_rd32_res);
	hw_uint<16> stg5_rd33_res = stg5_rd33_select(stg4, d0, d1, dynamic_address);
	set_at<528, 1024>(result, stg5_rd33_res);
	hw_uint<16> stg5_rd34_res = stg5_rd34_select(stg4, d0, d1, dynamic_address);
	set_at<544, 1024>(result, stg5_rd34_res);
	hw_uint<16> stg5_rd35_res = stg5_rd35_select(stg4, d0, d1, dynamic_address);
	set_at<560, 1024>(result, stg5_rd35_res);
	hw_uint<16> stg5_rd36_res = stg5_rd36_select(stg4, d0, d1, dynamic_address);
	set_at<576, 1024>(result, stg5_rd36_res);
	hw_uint<16> stg5_rd37_res = stg5_rd37_select(stg4, d0, d1, dynamic_address);
	set_at<592, 1024>(result, stg5_rd37_res);
	hw_uint<16> stg5_rd38_res = stg5_rd38_select(stg4, d0, d1, dynamic_address);
	set_at<608, 1024>(result, stg5_rd38_res);
	hw_uint<16> stg5_rd39_res = stg5_rd39_select(stg4, d0, d1, dynamic_address);
	set_at<624, 1024>(result, stg5_rd39_res);
	hw_uint<16> stg5_rd40_res = stg5_rd40_select(stg4, d0, d1, dynamic_address);
	set_at<640, 1024>(result, stg5_rd40_res);
	hw_uint<16> stg5_rd41_res = stg5_rd41_select(stg4, d0, d1, dynamic_address);
	set_at<656, 1024>(result, stg5_rd41_res);
	hw_uint<16> stg5_rd42_res = stg5_rd42_select(stg4, d0, d1, dynamic_address);
	set_at<672, 1024>(result, stg5_rd42_res);
	hw_uint<16> stg5_rd43_res = stg5_rd43_select(stg4, d0, d1, dynamic_address);
	set_at<688, 1024>(result, stg5_rd43_res);
	hw_uint<16> stg5_rd44_res = stg5_rd44_select(stg4, d0, d1, dynamic_address);
	set_at<704, 1024>(result, stg5_rd44_res);
	hw_uint<16> stg5_rd45_res = stg5_rd45_select(stg4, d0, d1, dynamic_address);
	set_at<720, 1024>(result, stg5_rd45_res);
	hw_uint<16> stg5_rd46_res = stg5_rd46_select(stg4, d0, d1, dynamic_address);
	set_at<736, 1024>(result, stg5_rd46_res);
	hw_uint<16> stg5_rd47_res = stg5_rd47_select(stg4, d0, d1, dynamic_address);
	set_at<752, 1024>(result, stg5_rd47_res);
	hw_uint<16> stg5_rd48_res = stg5_rd48_select(stg4, d0, d1, dynamic_address);
	set_at<768, 1024>(result, stg5_rd48_res);
	hw_uint<16> stg5_rd49_res = stg5_rd49_select(stg4, d0, d1, dynamic_address);
	set_at<784, 1024>(result, stg5_rd49_res);
	hw_uint<16> stg5_rd50_res = stg5_rd50_select(stg4, d0, d1, dynamic_address);
	set_at<800, 1024>(result, stg5_rd50_res);
	hw_uint<16> stg5_rd51_res = stg5_rd51_select(stg4, d0, d1, dynamic_address);
	set_at<816, 1024>(result, stg5_rd51_res);
	hw_uint<16> stg5_rd52_res = stg5_rd52_select(stg4, d0, d1, dynamic_address);
	set_at<832, 1024>(result, stg5_rd52_res);
	hw_uint<16> stg5_rd53_res = stg5_rd53_select(stg4, d0, d1, dynamic_address);
	set_at<848, 1024>(result, stg5_rd53_res);
	hw_uint<16> stg5_rd54_res = stg5_rd54_select(stg4, d0, d1, dynamic_address);
	set_at<864, 1024>(result, stg5_rd54_res);
	hw_uint<16> stg5_rd55_res = stg5_rd55_select(stg4, d0, d1, dynamic_address);
	set_at<880, 1024>(result, stg5_rd55_res);
	hw_uint<16> stg5_rd56_res = stg5_rd56_select(stg4, d0, d1, dynamic_address);
	set_at<896, 1024>(result, stg5_rd56_res);
	hw_uint<16> stg5_rd57_res = stg5_rd57_select(stg4, d0, d1, dynamic_address);
	set_at<912, 1024>(result, stg5_rd57_res);
	hw_uint<16> stg5_rd58_res = stg5_rd58_select(stg4, d0, d1, dynamic_address);
	set_at<928, 1024>(result, stg5_rd58_res);
	hw_uint<16> stg5_rd59_res = stg5_rd59_select(stg4, d0, d1, dynamic_address);
	set_at<944, 1024>(result, stg5_rd59_res);
	hw_uint<16> stg5_rd60_res = stg5_rd60_select(stg4, d0, d1, dynamic_address);
	set_at<960, 1024>(result, stg5_rd60_res);
	hw_uint<16> stg5_rd61_res = stg5_rd61_select(stg4, d0, d1, dynamic_address);
	set_at<976, 1024>(result, stg5_rd61_res);
	hw_uint<16> stg5_rd62_res = stg5_rd62_select(stg4, d0, d1, dynamic_address);
	set_at<992, 1024>(result, stg5_rd62_res);
	hw_uint<16> stg5_rd63_res = stg5_rd63_select(stg4, d0, d1, dynamic_address);
	set_at<1008, 1024>(result, stg5_rd63_res);
	return result;
}

struct stg5_stg5_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-48, 1968], [0, 1082]}
	// Capacity: 130
	// # of read delays: 4
  // 0, 1, 128, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 126> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_127() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_128() {
		return f4;
	}

	inline hw_uint<16> peek_129() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 126
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 126 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg5_stg5_update_0_write1_merged_banks_4_cache {
	// RAM Box: {[-47, 1953], [0, 1083]}
	// Capacity: 130
	// # of read delays: 3
  // 0, 1, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 127> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_129() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 127
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 127 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg5_stg5_update_0_write10_merged_banks_4_cache {
	// RAM Box: {[-38, 1962], [0, 1083]}
	// Capacity: 130
	// # of read delays: 3
  // 0, 1, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 127> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_129() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 127
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 127 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg5_stg5_update_0_write11_merged_banks_4_cache {
	// RAM Box: {[-37, 1963], [0, 1083]}
	// Capacity: 130
	// # of read delays: 3
  // 0, 1, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 127> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_129() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 127
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 127 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg5_stg5_update_0_write12_merged_banks_4_cache {
	// RAM Box: {[-36, 1964], [0, 1083]}
	// Capacity: 130
	// # of read delays: 3
  // 0, 1, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 127> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_129() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 127
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 127 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg5_stg5_update_0_write13_merged_banks_4_cache {
	// RAM Box: {[-35, 1965], [0, 1083]}
	// Capacity: 130
	// # of read delays: 3
  // 0, 1, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 127> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_129() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 127
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 127 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg5_stg5_update_0_write14_merged_banks_4_cache {
	// RAM Box: {[-34, 1966], [0, 1083]}
	// Capacity: 130
	// # of read delays: 3
  // 0, 1, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 127> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_129() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 127
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 127 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg5_stg5_update_0_write15_merged_banks_4_cache {
	// RAM Box: {[-49, 1967], [0, 1083]}
	// Capacity: 131
	// # of read delays: 4
  // 0, 1, 129, 130
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 127> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_129() {
		return f4;
	}

	inline hw_uint<16> peek_130() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 127
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 127 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg5_stg5_update_0_write2_merged_banks_4_cache {
	// RAM Box: {[-46, 1954], [0, 1083]}
	// Capacity: 130
	// # of read delays: 3
  // 0, 1, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 127> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_129() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 127
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 127 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg5_stg5_update_0_write3_merged_banks_4_cache {
	// RAM Box: {[-45, 1955], [0, 1083]}
	// Capacity: 130
	// # of read delays: 3
  // 0, 1, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 127> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_129() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 127
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 127 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg5_stg5_update_0_write4_merged_banks_4_cache {
	// RAM Box: {[-44, 1956], [0, 1083]}
	// Capacity: 130
	// # of read delays: 3
  // 0, 1, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 127> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_129() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 127
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 127 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg5_stg5_update_0_write5_merged_banks_4_cache {
	// RAM Box: {[-43, 1957], [0, 1083]}
	// Capacity: 130
	// # of read delays: 3
  // 0, 1, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 127> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_129() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 127
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 127 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg5_stg5_update_0_write6_merged_banks_4_cache {
	// RAM Box: {[-42, 1958], [0, 1083]}
	// Capacity: 130
	// # of read delays: 3
  // 0, 1, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 127> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_129() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 127
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 127 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg5_stg5_update_0_write7_merged_banks_4_cache {
	// RAM Box: {[-41, 1959], [0, 1083]}
	// Capacity: 130
	// # of read delays: 3
  // 0, 1, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 127> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_129() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 127
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 127 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg5_stg5_update_0_write8_merged_banks_4_cache {
	// RAM Box: {[-40, 1960], [0, 1083]}
	// Capacity: 130
	// # of read delays: 3
  // 0, 1, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 127> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_129() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 127
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 127 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg5_stg5_update_0_write9_merged_banks_4_cache {
	// RAM Box: {[-39, 1961], [0, 1083]}
	// Capacity: 130
	// # of read delays: 3
  // 0, 1, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 127> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_129() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 127
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 127 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg5_cache {
  // # of banks: 16
  stg5_stg5_update_0_write0_merged_banks_4_cache stg5_stg5_update_0_write0_merged_banks_4;
  stg5_stg5_update_0_write1_merged_banks_4_cache stg5_stg5_update_0_write1_merged_banks_4;
  stg5_stg5_update_0_write10_merged_banks_4_cache stg5_stg5_update_0_write10_merged_banks_4;
  stg5_stg5_update_0_write11_merged_banks_4_cache stg5_stg5_update_0_write11_merged_banks_4;
  stg5_stg5_update_0_write12_merged_banks_4_cache stg5_stg5_update_0_write12_merged_banks_4;
  stg5_stg5_update_0_write13_merged_banks_4_cache stg5_stg5_update_0_write13_merged_banks_4;
  stg5_stg5_update_0_write14_merged_banks_4_cache stg5_stg5_update_0_write14_merged_banks_4;
  stg5_stg5_update_0_write15_merged_banks_4_cache stg5_stg5_update_0_write15_merged_banks_4;
  stg5_stg5_update_0_write2_merged_banks_4_cache stg5_stg5_update_0_write2_merged_banks_4;
  stg5_stg5_update_0_write3_merged_banks_4_cache stg5_stg5_update_0_write3_merged_banks_4;
  stg5_stg5_update_0_write4_merged_banks_4_cache stg5_stg5_update_0_write4_merged_banks_4;
  stg5_stg5_update_0_write5_merged_banks_4_cache stg5_stg5_update_0_write5_merged_banks_4;
  stg5_stg5_update_0_write6_merged_banks_4_cache stg5_stg5_update_0_write6_merged_banks_4;
  stg5_stg5_update_0_write7_merged_banks_4_cache stg5_stg5_update_0_write7_merged_banks_4;
  stg5_stg5_update_0_write8_merged_banks_4_cache stg5_stg5_update_0_write8_merged_banks_4;
  stg5_stg5_update_0_write9_merged_banks_4_cache stg5_stg5_update_0_write9_merged_banks_4;
};



inline void stg5_stg5_update_0_write0_write(hw_uint<16>& stg5_stg5_update_0_write0, stg5_cache& stg5, int d0, int d1, int dynamic_address) {
  stg5.stg5_stg5_update_0_write0_merged_banks_4.push(stg5_stg5_update_0_write0);
}

inline void stg5_stg5_update_0_write1_write(hw_uint<16>& stg5_stg5_update_0_write1, stg5_cache& stg5, int d0, int d1, int dynamic_address) {
  stg5.stg5_stg5_update_0_write1_merged_banks_4.push(stg5_stg5_update_0_write1);
}

inline void stg5_stg5_update_0_write10_write(hw_uint<16>& stg5_stg5_update_0_write10, stg5_cache& stg5, int d0, int d1, int dynamic_address) {
  stg5.stg5_stg5_update_0_write10_merged_banks_4.push(stg5_stg5_update_0_write10);
}

inline void stg5_stg5_update_0_write11_write(hw_uint<16>& stg5_stg5_update_0_write11, stg5_cache& stg5, int d0, int d1, int dynamic_address) {
  stg5.stg5_stg5_update_0_write11_merged_banks_4.push(stg5_stg5_update_0_write11);
}

inline void stg5_stg5_update_0_write12_write(hw_uint<16>& stg5_stg5_update_0_write12, stg5_cache& stg5, int d0, int d1, int dynamic_address) {
  stg5.stg5_stg5_update_0_write12_merged_banks_4.push(stg5_stg5_update_0_write12);
}

inline void stg5_stg5_update_0_write13_write(hw_uint<16>& stg5_stg5_update_0_write13, stg5_cache& stg5, int d0, int d1, int dynamic_address) {
  stg5.stg5_stg5_update_0_write13_merged_banks_4.push(stg5_stg5_update_0_write13);
}

inline void stg5_stg5_update_0_write14_write(hw_uint<16>& stg5_stg5_update_0_write14, stg5_cache& stg5, int d0, int d1, int dynamic_address) {
  stg5.stg5_stg5_update_0_write14_merged_banks_4.push(stg5_stg5_update_0_write14);
}

inline void stg5_stg5_update_0_write15_write(hw_uint<16>& stg5_stg5_update_0_write15, stg5_cache& stg5, int d0, int d1, int dynamic_address) {
  stg5.stg5_stg5_update_0_write15_merged_banks_4.push(stg5_stg5_update_0_write15);
}

inline void stg5_stg5_update_0_write2_write(hw_uint<16>& stg5_stg5_update_0_write2, stg5_cache& stg5, int d0, int d1, int dynamic_address) {
  stg5.stg5_stg5_update_0_write2_merged_banks_4.push(stg5_stg5_update_0_write2);
}

inline void stg5_stg5_update_0_write3_write(hw_uint<16>& stg5_stg5_update_0_write3, stg5_cache& stg5, int d0, int d1, int dynamic_address) {
  stg5.stg5_stg5_update_0_write3_merged_banks_4.push(stg5_stg5_update_0_write3);
}

inline void stg5_stg5_update_0_write4_write(hw_uint<16>& stg5_stg5_update_0_write4, stg5_cache& stg5, int d0, int d1, int dynamic_address) {
  stg5.stg5_stg5_update_0_write4_merged_banks_4.push(stg5_stg5_update_0_write4);
}

inline void stg5_stg5_update_0_write5_write(hw_uint<16>& stg5_stg5_update_0_write5, stg5_cache& stg5, int d0, int d1, int dynamic_address) {
  stg5.stg5_stg5_update_0_write5_merged_banks_4.push(stg5_stg5_update_0_write5);
}

inline void stg5_stg5_update_0_write6_write(hw_uint<16>& stg5_stg5_update_0_write6, stg5_cache& stg5, int d0, int d1, int dynamic_address) {
  stg5.stg5_stg5_update_0_write6_merged_banks_4.push(stg5_stg5_update_0_write6);
}

inline void stg5_stg5_update_0_write7_write(hw_uint<16>& stg5_stg5_update_0_write7, stg5_cache& stg5, int d0, int d1, int dynamic_address) {
  stg5.stg5_stg5_update_0_write7_merged_banks_4.push(stg5_stg5_update_0_write7);
}

inline void stg5_stg5_update_0_write8_write(hw_uint<16>& stg5_stg5_update_0_write8, stg5_cache& stg5, int d0, int d1, int dynamic_address) {
  stg5.stg5_stg5_update_0_write8_merged_banks_4.push(stg5_stg5_update_0_write8);
}

inline void stg5_stg5_update_0_write9_write(hw_uint<16>& stg5_stg5_update_0_write9, stg5_cache& stg5, int d0, int d1, int dynamic_address) {
  stg5.stg5_stg5_update_0_write9_merged_banks_4.push(stg5_stg5_update_0_write9);
}

inline hw_uint<16> stg6_rd0_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd0 read pattern: { stg6_update_0[d0, d1] -> stg5[-1 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write15 = stg5.stg5_stg5_update_0_write15_merged_banks_4.peek_130();
  return value_stg5_stg5_update_0_write15;
  return 0;
}

inline hw_uint<16> stg6_rd1_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd1 read pattern: { stg6_update_0[d0, d1] -> stg5[16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write0 = stg5.stg5_stg5_update_0_write0_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write0;
  return 0;
}

inline hw_uint<16> stg6_rd10_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd10 read pattern: { stg6_update_0[d0, d1] -> stg5[2 + 16d0, 1 + d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write2 = stg5.stg5_stg5_update_0_write2_merged_banks_4.peek_1();
  return value_stg5_stg5_update_0_write2;
  return 0;
}

inline hw_uint<16> stg6_rd11_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd11 read pattern: { stg6_update_0[d0, d1] -> stg5[3 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write3 = stg5.stg5_stg5_update_0_write3_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write3;
  return 0;
}

inline hw_uint<16> stg6_rd12_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd12 read pattern: { stg6_update_0[d0, d1] -> stg5[2 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write2 = stg5.stg5_stg5_update_0_write2_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write2;
  return 0;
}

inline hw_uint<16> stg6_rd13_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd13 read pattern: { stg6_update_0[d0, d1] -> stg5[3 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write3 = stg5.stg5_stg5_update_0_write3_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write3;
  return 0;
}

inline hw_uint<16> stg6_rd14_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd14 read pattern: { stg6_update_0[d0, d1] -> stg5[3 + 16d0, 1 + d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write3 = stg5.stg5_stg5_update_0_write3_merged_banks_4.peek_1();
  return value_stg5_stg5_update_0_write3;
  return 0;
}

inline hw_uint<16> stg6_rd15_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd15 read pattern: { stg6_update_0[d0, d1] -> stg5[4 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write4 = stg5.stg5_stg5_update_0_write4_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write4;
  return 0;
}

inline hw_uint<16> stg6_rd16_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd16 read pattern: { stg6_update_0[d0, d1] -> stg5[3 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write3 = stg5.stg5_stg5_update_0_write3_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write3;
  return 0;
}

inline hw_uint<16> stg6_rd17_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd17 read pattern: { stg6_update_0[d0, d1] -> stg5[4 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write4 = stg5.stg5_stg5_update_0_write4_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write4;
  return 0;
}

inline hw_uint<16> stg6_rd18_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd18 read pattern: { stg6_update_0[d0, d1] -> stg5[4 + 16d0, 1 + d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write4 = stg5.stg5_stg5_update_0_write4_merged_banks_4.peek_1();
  return value_stg5_stg5_update_0_write4;
  return 0;
}

inline hw_uint<16> stg6_rd19_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd19 read pattern: { stg6_update_0[d0, d1] -> stg5[5 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write5 = stg5.stg5_stg5_update_0_write5_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write5;
  return 0;
}

inline hw_uint<16> stg6_rd2_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd2 read pattern: { stg6_update_0[d0, d1] -> stg5[16d0, 1 + d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write0 = stg5.stg5_stg5_update_0_write0_merged_banks_4.peek_1();
  return value_stg5_stg5_update_0_write0;
  return 0;
}

inline hw_uint<16> stg6_rd20_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd20 read pattern: { stg6_update_0[d0, d1] -> stg5[4 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write4 = stg5.stg5_stg5_update_0_write4_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write4;
  return 0;
}

inline hw_uint<16> stg6_rd21_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd21 read pattern: { stg6_update_0[d0, d1] -> stg5[5 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write5 = stg5.stg5_stg5_update_0_write5_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write5;
  return 0;
}

inline hw_uint<16> stg6_rd22_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd22 read pattern: { stg6_update_0[d0, d1] -> stg5[5 + 16d0, 1 + d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write5 = stg5.stg5_stg5_update_0_write5_merged_banks_4.peek_1();
  return value_stg5_stg5_update_0_write5;
  return 0;
}

inline hw_uint<16> stg6_rd23_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd23 read pattern: { stg6_update_0[d0, d1] -> stg5[6 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write6 = stg5.stg5_stg5_update_0_write6_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write6;
  return 0;
}

inline hw_uint<16> stg6_rd24_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd24 read pattern: { stg6_update_0[d0, d1] -> stg5[5 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write5 = stg5.stg5_stg5_update_0_write5_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write5;
  return 0;
}

inline hw_uint<16> stg6_rd25_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd25 read pattern: { stg6_update_0[d0, d1] -> stg5[6 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write6 = stg5.stg5_stg5_update_0_write6_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write6;
  return 0;
}

inline hw_uint<16> stg6_rd26_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd26 read pattern: { stg6_update_0[d0, d1] -> stg5[6 + 16d0, 1 + d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write6 = stg5.stg5_stg5_update_0_write6_merged_banks_4.peek_1();
  return value_stg5_stg5_update_0_write6;
  return 0;
}

inline hw_uint<16> stg6_rd27_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd27 read pattern: { stg6_update_0[d0, d1] -> stg5[7 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write7 = stg5.stg5_stg5_update_0_write7_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write7;
  return 0;
}

inline hw_uint<16> stg6_rd28_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd28 read pattern: { stg6_update_0[d0, d1] -> stg5[6 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write6 = stg5.stg5_stg5_update_0_write6_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write6;
  return 0;
}

inline hw_uint<16> stg6_rd29_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd29 read pattern: { stg6_update_0[d0, d1] -> stg5[7 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write7 = stg5.stg5_stg5_update_0_write7_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write7;
  return 0;
}

inline hw_uint<16> stg6_rd3_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd3 read pattern: { stg6_update_0[d0, d1] -> stg5[1 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write1 = stg5.stg5_stg5_update_0_write1_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write1;
  return 0;
}

inline hw_uint<16> stg6_rd30_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd30 read pattern: { stg6_update_0[d0, d1] -> stg5[7 + 16d0, 1 + d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write7 = stg5.stg5_stg5_update_0_write7_merged_banks_4.peek_1();
  return value_stg5_stg5_update_0_write7;
  return 0;
}

inline hw_uint<16> stg6_rd31_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd31 read pattern: { stg6_update_0[d0, d1] -> stg5[8 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write8 = stg5.stg5_stg5_update_0_write8_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write8;
  return 0;
}

inline hw_uint<16> stg6_rd32_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd32 read pattern: { stg6_update_0[d0, d1] -> stg5[7 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write7 = stg5.stg5_stg5_update_0_write7_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write7;
  return 0;
}

inline hw_uint<16> stg6_rd33_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd33 read pattern: { stg6_update_0[d0, d1] -> stg5[8 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write8 = stg5.stg5_stg5_update_0_write8_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write8;
  return 0;
}

inline hw_uint<16> stg6_rd34_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd34 read pattern: { stg6_update_0[d0, d1] -> stg5[8 + 16d0, 1 + d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write8 = stg5.stg5_stg5_update_0_write8_merged_banks_4.peek_1();
  return value_stg5_stg5_update_0_write8;
  return 0;
}

inline hw_uint<16> stg6_rd35_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd35 read pattern: { stg6_update_0[d0, d1] -> stg5[9 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write9 = stg5.stg5_stg5_update_0_write9_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write9;
  return 0;
}

inline hw_uint<16> stg6_rd36_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd36 read pattern: { stg6_update_0[d0, d1] -> stg5[8 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write8 = stg5.stg5_stg5_update_0_write8_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write8;
  return 0;
}

inline hw_uint<16> stg6_rd37_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd37 read pattern: { stg6_update_0[d0, d1] -> stg5[9 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write9 = stg5.stg5_stg5_update_0_write9_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write9;
  return 0;
}

inline hw_uint<16> stg6_rd38_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd38 read pattern: { stg6_update_0[d0, d1] -> stg5[9 + 16d0, 1 + d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write9 = stg5.stg5_stg5_update_0_write9_merged_banks_4.peek_1();
  return value_stg5_stg5_update_0_write9;
  return 0;
}

inline hw_uint<16> stg6_rd39_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd39 read pattern: { stg6_update_0[d0, d1] -> stg5[10 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write10 = stg5.stg5_stg5_update_0_write10_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write10;
  return 0;
}

inline hw_uint<16> stg6_rd4_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd4 read pattern: { stg6_update_0[d0, d1] -> stg5[16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write0 = stg5.stg5_stg5_update_0_write0_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write0;
  return 0;
}

inline hw_uint<16> stg6_rd40_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd40 read pattern: { stg6_update_0[d0, d1] -> stg5[9 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write9 = stg5.stg5_stg5_update_0_write9_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write9;
  return 0;
}

inline hw_uint<16> stg6_rd41_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd41 read pattern: { stg6_update_0[d0, d1] -> stg5[10 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write10 = stg5.stg5_stg5_update_0_write10_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write10;
  return 0;
}

inline hw_uint<16> stg6_rd42_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd42 read pattern: { stg6_update_0[d0, d1] -> stg5[10 + 16d0, 1 + d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write10 = stg5.stg5_stg5_update_0_write10_merged_banks_4.peek_1();
  return value_stg5_stg5_update_0_write10;
  return 0;
}

inline hw_uint<16> stg6_rd43_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd43 read pattern: { stg6_update_0[d0, d1] -> stg5[11 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write11 = stg5.stg5_stg5_update_0_write11_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write11;
  return 0;
}

inline hw_uint<16> stg6_rd44_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd44 read pattern: { stg6_update_0[d0, d1] -> stg5[10 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write10 = stg5.stg5_stg5_update_0_write10_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write10;
  return 0;
}

inline hw_uint<16> stg6_rd45_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd45 read pattern: { stg6_update_0[d0, d1] -> stg5[11 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write11 = stg5.stg5_stg5_update_0_write11_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write11;
  return 0;
}

inline hw_uint<16> stg6_rd46_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd46 read pattern: { stg6_update_0[d0, d1] -> stg5[11 + 16d0, 1 + d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write11 = stg5.stg5_stg5_update_0_write11_merged_banks_4.peek_1();
  return value_stg5_stg5_update_0_write11;
  return 0;
}

inline hw_uint<16> stg6_rd47_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd47 read pattern: { stg6_update_0[d0, d1] -> stg5[12 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write12 = stg5.stg5_stg5_update_0_write12_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write12;
  return 0;
}

inline hw_uint<16> stg6_rd48_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd48 read pattern: { stg6_update_0[d0, d1] -> stg5[11 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write11 = stg5.stg5_stg5_update_0_write11_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write11;
  return 0;
}

inline hw_uint<16> stg6_rd49_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd49 read pattern: { stg6_update_0[d0, d1] -> stg5[12 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write12 = stg5.stg5_stg5_update_0_write12_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write12;
  return 0;
}

inline hw_uint<16> stg6_rd5_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd5 read pattern: { stg6_update_0[d0, d1] -> stg5[1 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write1 = stg5.stg5_stg5_update_0_write1_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write1;
  return 0;
}

inline hw_uint<16> stg6_rd50_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd50 read pattern: { stg6_update_0[d0, d1] -> stg5[12 + 16d0, 1 + d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write12 = stg5.stg5_stg5_update_0_write12_merged_banks_4.peek_1();
  return value_stg5_stg5_update_0_write12;
  return 0;
}

inline hw_uint<16> stg6_rd51_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd51 read pattern: { stg6_update_0[d0, d1] -> stg5[13 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write13 = stg5.stg5_stg5_update_0_write13_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write13;
  return 0;
}

inline hw_uint<16> stg6_rd52_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd52 read pattern: { stg6_update_0[d0, d1] -> stg5[12 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write12 = stg5.stg5_stg5_update_0_write12_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write12;
  return 0;
}

inline hw_uint<16> stg6_rd53_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd53 read pattern: { stg6_update_0[d0, d1] -> stg5[13 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write13 = stg5.stg5_stg5_update_0_write13_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write13;
  return 0;
}

inline hw_uint<16> stg6_rd54_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd54 read pattern: { stg6_update_0[d0, d1] -> stg5[13 + 16d0, 1 + d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write13 = stg5.stg5_stg5_update_0_write13_merged_banks_4.peek_1();
  return value_stg5_stg5_update_0_write13;
  return 0;
}

inline hw_uint<16> stg6_rd55_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd55 read pattern: { stg6_update_0[d0, d1] -> stg5[14 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write14 = stg5.stg5_stg5_update_0_write14_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write14;
  return 0;
}

inline hw_uint<16> stg6_rd56_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd56 read pattern: { stg6_update_0[d0, d1] -> stg5[13 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write13 = stg5.stg5_stg5_update_0_write13_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write13;
  return 0;
}

inline hw_uint<16> stg6_rd57_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd57 read pattern: { stg6_update_0[d0, d1] -> stg5[14 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write14 = stg5.stg5_stg5_update_0_write14_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write14;
  return 0;
}

inline hw_uint<16> stg6_rd58_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd58 read pattern: { stg6_update_0[d0, d1] -> stg5[14 + 16d0, 1 + d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write14 = stg5.stg5_stg5_update_0_write14_merged_banks_4.peek_1();
  return value_stg5_stg5_update_0_write14;
  return 0;
}

inline hw_uint<16> stg6_rd59_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd59 read pattern: { stg6_update_0[d0, d1] -> stg5[15 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write15 = stg5.stg5_stg5_update_0_write15_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write15;
  return 0;
}

inline hw_uint<16> stg6_rd6_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd6 read pattern: { stg6_update_0[d0, d1] -> stg5[1 + 16d0, 1 + d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write1 = stg5.stg5_stg5_update_0_write1_merged_banks_4.peek_1();
  return value_stg5_stg5_update_0_write1;
  return 0;
}

inline hw_uint<16> stg6_rd60_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd60 read pattern: { stg6_update_0[d0, d1] -> stg5[14 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write14 = stg5.stg5_stg5_update_0_write14_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write14;
  return 0;
}

inline hw_uint<16> stg6_rd61_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd61 read pattern: { stg6_update_0[d0, d1] -> stg5[15 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write15 = stg5.stg5_stg5_update_0_write15_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write15;
  return 0;
}

inline hw_uint<16> stg6_rd62_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd62 read pattern: { stg6_update_0[d0, d1] -> stg5[15 + 16d0, 1 + d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write15 = stg5.stg5_stg5_update_0_write15_merged_banks_4.peek_1();
  return value_stg5_stg5_update_0_write15;
  return 0;
}

inline hw_uint<16> stg6_rd63_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd63 read pattern: { stg6_update_0[d0, d1] -> stg5[16 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write0 = stg5.stg5_stg5_update_0_write0_merged_banks_4.peek_128();
  return value_stg5_stg5_update_0_write0;
  return 0;
}

inline hw_uint<16> stg6_rd7_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd7 read pattern: { stg6_update_0[d0, d1] -> stg5[2 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write2 = stg5.stg5_stg5_update_0_write2_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write2;
  return 0;
}

inline hw_uint<16> stg6_rd8_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd8 read pattern: { stg6_update_0[d0, d1] -> stg5[1 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write1 = stg5.stg5_stg5_update_0_write1_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write1;
  return 0;
}

inline hw_uint<16> stg6_rd9_select(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg6_rd9 read pattern: { stg6_update_0[d0, d1] -> stg5[2 + 16d0, d1] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Read schedule : { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  // Write schedule: { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
  auto value_stg5_stg5_update_0_write2 = stg5.stg5_stg5_update_0_write2_merged_banks_4.peek_129();
  return value_stg5_stg5_update_0_write2;
  return 0;
}

// # of bundles = 2
// stg5_update_0_write
//	stg5_stg5_update_0_write0
//	stg5_stg5_update_0_write1
//	stg5_stg5_update_0_write2
//	stg5_stg5_update_0_write3
//	stg5_stg5_update_0_write4
//	stg5_stg5_update_0_write5
//	stg5_stg5_update_0_write6
//	stg5_stg5_update_0_write7
//	stg5_stg5_update_0_write8
//	stg5_stg5_update_0_write9
//	stg5_stg5_update_0_write10
//	stg5_stg5_update_0_write11
//	stg5_stg5_update_0_write12
//	stg5_stg5_update_0_write13
//	stg5_stg5_update_0_write14
//	stg5_stg5_update_0_write15
inline void stg5_stg5_update_0_write_bundle_write(hw_uint<256>& stg5_update_0_write, stg5_cache& stg5, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg5_stg5_update_0_write0_res = stg5_update_0_write.extract<0, 15>();
	stg5_stg5_update_0_write0_write(stg5_stg5_update_0_write0_res, stg5, d0, d1, dynamic_address);
	hw_uint<16> stg5_stg5_update_0_write1_res = stg5_update_0_write.extract<16, 31>();
	stg5_stg5_update_0_write1_write(stg5_stg5_update_0_write1_res, stg5, d0, d1, dynamic_address);
	hw_uint<16> stg5_stg5_update_0_write2_res = stg5_update_0_write.extract<32, 47>();
	stg5_stg5_update_0_write2_write(stg5_stg5_update_0_write2_res, stg5, d0, d1, dynamic_address);
	hw_uint<16> stg5_stg5_update_0_write3_res = stg5_update_0_write.extract<48, 63>();
	stg5_stg5_update_0_write3_write(stg5_stg5_update_0_write3_res, stg5, d0, d1, dynamic_address);
	hw_uint<16> stg5_stg5_update_0_write4_res = stg5_update_0_write.extract<64, 79>();
	stg5_stg5_update_0_write4_write(stg5_stg5_update_0_write4_res, stg5, d0, d1, dynamic_address);
	hw_uint<16> stg5_stg5_update_0_write5_res = stg5_update_0_write.extract<80, 95>();
	stg5_stg5_update_0_write5_write(stg5_stg5_update_0_write5_res, stg5, d0, d1, dynamic_address);
	hw_uint<16> stg5_stg5_update_0_write6_res = stg5_update_0_write.extract<96, 111>();
	stg5_stg5_update_0_write6_write(stg5_stg5_update_0_write6_res, stg5, d0, d1, dynamic_address);
	hw_uint<16> stg5_stg5_update_0_write7_res = stg5_update_0_write.extract<112, 127>();
	stg5_stg5_update_0_write7_write(stg5_stg5_update_0_write7_res, stg5, d0, d1, dynamic_address);
	hw_uint<16> stg5_stg5_update_0_write8_res = stg5_update_0_write.extract<128, 143>();
	stg5_stg5_update_0_write8_write(stg5_stg5_update_0_write8_res, stg5, d0, d1, dynamic_address);
	hw_uint<16> stg5_stg5_update_0_write9_res = stg5_update_0_write.extract<144, 159>();
	stg5_stg5_update_0_write9_write(stg5_stg5_update_0_write9_res, stg5, d0, d1, dynamic_address);
	hw_uint<16> stg5_stg5_update_0_write10_res = stg5_update_0_write.extract<160, 175>();
	stg5_stg5_update_0_write10_write(stg5_stg5_update_0_write10_res, stg5, d0, d1, dynamic_address);
	hw_uint<16> stg5_stg5_update_0_write11_res = stg5_update_0_write.extract<176, 191>();
	stg5_stg5_update_0_write11_write(stg5_stg5_update_0_write11_res, stg5, d0, d1, dynamic_address);
	hw_uint<16> stg5_stg5_update_0_write12_res = stg5_update_0_write.extract<192, 207>();
	stg5_stg5_update_0_write12_write(stg5_stg5_update_0_write12_res, stg5, d0, d1, dynamic_address);
	hw_uint<16> stg5_stg5_update_0_write13_res = stg5_update_0_write.extract<208, 223>();
	stg5_stg5_update_0_write13_write(stg5_stg5_update_0_write13_res, stg5, d0, d1, dynamic_address);
	hw_uint<16> stg5_stg5_update_0_write14_res = stg5_update_0_write.extract<224, 239>();
	stg5_stg5_update_0_write14_write(stg5_stg5_update_0_write14_res, stg5, d0, d1, dynamic_address);
	hw_uint<16> stg5_stg5_update_0_write15_res = stg5_update_0_write.extract<240, 255>();
	stg5_stg5_update_0_write15_write(stg5_stg5_update_0_write15_res, stg5, d0, d1, dynamic_address);
}

// stg6_update_0_read
//	stg6_rd0
//	stg6_rd1
//	stg6_rd2
//	stg6_rd3
//	stg6_rd4
//	stg6_rd5
//	stg6_rd6
//	stg6_rd7
//	stg6_rd8
//	stg6_rd9
//	stg6_rd10
//	stg6_rd11
//	stg6_rd12
//	stg6_rd13
//	stg6_rd14
//	stg6_rd15
//	stg6_rd16
//	stg6_rd17
//	stg6_rd18
//	stg6_rd19
//	stg6_rd20
//	stg6_rd21
//	stg6_rd22
//	stg6_rd23
//	stg6_rd24
//	stg6_rd25
//	stg6_rd26
//	stg6_rd27
//	stg6_rd28
//	stg6_rd29
//	stg6_rd30
//	stg6_rd31
//	stg6_rd32
//	stg6_rd33
//	stg6_rd34
//	stg6_rd35
//	stg6_rd36
//	stg6_rd37
//	stg6_rd38
//	stg6_rd39
//	stg6_rd40
//	stg6_rd41
//	stg6_rd42
//	stg6_rd43
//	stg6_rd44
//	stg6_rd45
//	stg6_rd46
//	stg6_rd47
//	stg6_rd48
//	stg6_rd49
//	stg6_rd50
//	stg6_rd51
//	stg6_rd52
//	stg6_rd53
//	stg6_rd54
//	stg6_rd55
//	stg6_rd56
//	stg6_rd57
//	stg6_rd58
//	stg6_rd59
//	stg6_rd60
//	stg6_rd61
//	stg6_rd62
//	stg6_rd63
inline hw_uint<1024> stg5_stg6_update_0_read_bundle_read(stg5_cache& stg5, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 64
    // stg6_rd0
    // stg6_rd1
    // stg6_rd2
    // stg6_rd3
    // stg6_rd4
    // stg6_rd5
    // stg6_rd6
    // stg6_rd7
    // stg6_rd8
    // stg6_rd9
    // stg6_rd10
    // stg6_rd11
    // stg6_rd12
    // stg6_rd13
    // stg6_rd14
    // stg6_rd15
    // stg6_rd16
    // stg6_rd17
    // stg6_rd18
    // stg6_rd19
    // stg6_rd20
    // stg6_rd21
    // stg6_rd22
    // stg6_rd23
    // stg6_rd24
    // stg6_rd25
    // stg6_rd26
    // stg6_rd27
    // stg6_rd28
    // stg6_rd29
    // stg6_rd30
    // stg6_rd31
    // stg6_rd32
    // stg6_rd33
    // stg6_rd34
    // stg6_rd35
    // stg6_rd36
    // stg6_rd37
    // stg6_rd38
    // stg6_rd39
    // stg6_rd40
    // stg6_rd41
    // stg6_rd42
    // stg6_rd43
    // stg6_rd44
    // stg6_rd45
    // stg6_rd46
    // stg6_rd47
    // stg6_rd48
    // stg6_rd49
    // stg6_rd50
    // stg6_rd51
    // stg6_rd52
    // stg6_rd53
    // stg6_rd54
    // stg6_rd55
    // stg6_rd56
    // stg6_rd57
    // stg6_rd58
    // stg6_rd59
    // stg6_rd60
    // stg6_rd61
    // stg6_rd62
    // stg6_rd63

	hw_uint<1024> result;
	hw_uint<16> stg6_rd0_res = stg6_rd0_select(stg5, d0, d1, dynamic_address);
	set_at<0, 1024>(result, stg6_rd0_res);
	hw_uint<16> stg6_rd1_res = stg6_rd1_select(stg5, d0, d1, dynamic_address);
	set_at<16, 1024>(result, stg6_rd1_res);
	hw_uint<16> stg6_rd2_res = stg6_rd2_select(stg5, d0, d1, dynamic_address);
	set_at<32, 1024>(result, stg6_rd2_res);
	hw_uint<16> stg6_rd3_res = stg6_rd3_select(stg5, d0, d1, dynamic_address);
	set_at<48, 1024>(result, stg6_rd3_res);
	hw_uint<16> stg6_rd4_res = stg6_rd4_select(stg5, d0, d1, dynamic_address);
	set_at<64, 1024>(result, stg6_rd4_res);
	hw_uint<16> stg6_rd5_res = stg6_rd5_select(stg5, d0, d1, dynamic_address);
	set_at<80, 1024>(result, stg6_rd5_res);
	hw_uint<16> stg6_rd6_res = stg6_rd6_select(stg5, d0, d1, dynamic_address);
	set_at<96, 1024>(result, stg6_rd6_res);
	hw_uint<16> stg6_rd7_res = stg6_rd7_select(stg5, d0, d1, dynamic_address);
	set_at<112, 1024>(result, stg6_rd7_res);
	hw_uint<16> stg6_rd8_res = stg6_rd8_select(stg5, d0, d1, dynamic_address);
	set_at<128, 1024>(result, stg6_rd8_res);
	hw_uint<16> stg6_rd9_res = stg6_rd9_select(stg5, d0, d1, dynamic_address);
	set_at<144, 1024>(result, stg6_rd9_res);
	hw_uint<16> stg6_rd10_res = stg6_rd10_select(stg5, d0, d1, dynamic_address);
	set_at<160, 1024>(result, stg6_rd10_res);
	hw_uint<16> stg6_rd11_res = stg6_rd11_select(stg5, d0, d1, dynamic_address);
	set_at<176, 1024>(result, stg6_rd11_res);
	hw_uint<16> stg6_rd12_res = stg6_rd12_select(stg5, d0, d1, dynamic_address);
	set_at<192, 1024>(result, stg6_rd12_res);
	hw_uint<16> stg6_rd13_res = stg6_rd13_select(stg5, d0, d1, dynamic_address);
	set_at<208, 1024>(result, stg6_rd13_res);
	hw_uint<16> stg6_rd14_res = stg6_rd14_select(stg5, d0, d1, dynamic_address);
	set_at<224, 1024>(result, stg6_rd14_res);
	hw_uint<16> stg6_rd15_res = stg6_rd15_select(stg5, d0, d1, dynamic_address);
	set_at<240, 1024>(result, stg6_rd15_res);
	hw_uint<16> stg6_rd16_res = stg6_rd16_select(stg5, d0, d1, dynamic_address);
	set_at<256, 1024>(result, stg6_rd16_res);
	hw_uint<16> stg6_rd17_res = stg6_rd17_select(stg5, d0, d1, dynamic_address);
	set_at<272, 1024>(result, stg6_rd17_res);
	hw_uint<16> stg6_rd18_res = stg6_rd18_select(stg5, d0, d1, dynamic_address);
	set_at<288, 1024>(result, stg6_rd18_res);
	hw_uint<16> stg6_rd19_res = stg6_rd19_select(stg5, d0, d1, dynamic_address);
	set_at<304, 1024>(result, stg6_rd19_res);
	hw_uint<16> stg6_rd20_res = stg6_rd20_select(stg5, d0, d1, dynamic_address);
	set_at<320, 1024>(result, stg6_rd20_res);
	hw_uint<16> stg6_rd21_res = stg6_rd21_select(stg5, d0, d1, dynamic_address);
	set_at<336, 1024>(result, stg6_rd21_res);
	hw_uint<16> stg6_rd22_res = stg6_rd22_select(stg5, d0, d1, dynamic_address);
	set_at<352, 1024>(result, stg6_rd22_res);
	hw_uint<16> stg6_rd23_res = stg6_rd23_select(stg5, d0, d1, dynamic_address);
	set_at<368, 1024>(result, stg6_rd23_res);
	hw_uint<16> stg6_rd24_res = stg6_rd24_select(stg5, d0, d1, dynamic_address);
	set_at<384, 1024>(result, stg6_rd24_res);
	hw_uint<16> stg6_rd25_res = stg6_rd25_select(stg5, d0, d1, dynamic_address);
	set_at<400, 1024>(result, stg6_rd25_res);
	hw_uint<16> stg6_rd26_res = stg6_rd26_select(stg5, d0, d1, dynamic_address);
	set_at<416, 1024>(result, stg6_rd26_res);
	hw_uint<16> stg6_rd27_res = stg6_rd27_select(stg5, d0, d1, dynamic_address);
	set_at<432, 1024>(result, stg6_rd27_res);
	hw_uint<16> stg6_rd28_res = stg6_rd28_select(stg5, d0, d1, dynamic_address);
	set_at<448, 1024>(result, stg6_rd28_res);
	hw_uint<16> stg6_rd29_res = stg6_rd29_select(stg5, d0, d1, dynamic_address);
	set_at<464, 1024>(result, stg6_rd29_res);
	hw_uint<16> stg6_rd30_res = stg6_rd30_select(stg5, d0, d1, dynamic_address);
	set_at<480, 1024>(result, stg6_rd30_res);
	hw_uint<16> stg6_rd31_res = stg6_rd31_select(stg5, d0, d1, dynamic_address);
	set_at<496, 1024>(result, stg6_rd31_res);
	hw_uint<16> stg6_rd32_res = stg6_rd32_select(stg5, d0, d1, dynamic_address);
	set_at<512, 1024>(result, stg6_rd32_res);
	hw_uint<16> stg6_rd33_res = stg6_rd33_select(stg5, d0, d1, dynamic_address);
	set_at<528, 1024>(result, stg6_rd33_res);
	hw_uint<16> stg6_rd34_res = stg6_rd34_select(stg5, d0, d1, dynamic_address);
	set_at<544, 1024>(result, stg6_rd34_res);
	hw_uint<16> stg6_rd35_res = stg6_rd35_select(stg5, d0, d1, dynamic_address);
	set_at<560, 1024>(result, stg6_rd35_res);
	hw_uint<16> stg6_rd36_res = stg6_rd36_select(stg5, d0, d1, dynamic_address);
	set_at<576, 1024>(result, stg6_rd36_res);
	hw_uint<16> stg6_rd37_res = stg6_rd37_select(stg5, d0, d1, dynamic_address);
	set_at<592, 1024>(result, stg6_rd37_res);
	hw_uint<16> stg6_rd38_res = stg6_rd38_select(stg5, d0, d1, dynamic_address);
	set_at<608, 1024>(result, stg6_rd38_res);
	hw_uint<16> stg6_rd39_res = stg6_rd39_select(stg5, d0, d1, dynamic_address);
	set_at<624, 1024>(result, stg6_rd39_res);
	hw_uint<16> stg6_rd40_res = stg6_rd40_select(stg5, d0, d1, dynamic_address);
	set_at<640, 1024>(result, stg6_rd40_res);
	hw_uint<16> stg6_rd41_res = stg6_rd41_select(stg5, d0, d1, dynamic_address);
	set_at<656, 1024>(result, stg6_rd41_res);
	hw_uint<16> stg6_rd42_res = stg6_rd42_select(stg5, d0, d1, dynamic_address);
	set_at<672, 1024>(result, stg6_rd42_res);
	hw_uint<16> stg6_rd43_res = stg6_rd43_select(stg5, d0, d1, dynamic_address);
	set_at<688, 1024>(result, stg6_rd43_res);
	hw_uint<16> stg6_rd44_res = stg6_rd44_select(stg5, d0, d1, dynamic_address);
	set_at<704, 1024>(result, stg6_rd44_res);
	hw_uint<16> stg6_rd45_res = stg6_rd45_select(stg5, d0, d1, dynamic_address);
	set_at<720, 1024>(result, stg6_rd45_res);
	hw_uint<16> stg6_rd46_res = stg6_rd46_select(stg5, d0, d1, dynamic_address);
	set_at<736, 1024>(result, stg6_rd46_res);
	hw_uint<16> stg6_rd47_res = stg6_rd47_select(stg5, d0, d1, dynamic_address);
	set_at<752, 1024>(result, stg6_rd47_res);
	hw_uint<16> stg6_rd48_res = stg6_rd48_select(stg5, d0, d1, dynamic_address);
	set_at<768, 1024>(result, stg6_rd48_res);
	hw_uint<16> stg6_rd49_res = stg6_rd49_select(stg5, d0, d1, dynamic_address);
	set_at<784, 1024>(result, stg6_rd49_res);
	hw_uint<16> stg6_rd50_res = stg6_rd50_select(stg5, d0, d1, dynamic_address);
	set_at<800, 1024>(result, stg6_rd50_res);
	hw_uint<16> stg6_rd51_res = stg6_rd51_select(stg5, d0, d1, dynamic_address);
	set_at<816, 1024>(result, stg6_rd51_res);
	hw_uint<16> stg6_rd52_res = stg6_rd52_select(stg5, d0, d1, dynamic_address);
	set_at<832, 1024>(result, stg6_rd52_res);
	hw_uint<16> stg6_rd53_res = stg6_rd53_select(stg5, d0, d1, dynamic_address);
	set_at<848, 1024>(result, stg6_rd53_res);
	hw_uint<16> stg6_rd54_res = stg6_rd54_select(stg5, d0, d1, dynamic_address);
	set_at<864, 1024>(result, stg6_rd54_res);
	hw_uint<16> stg6_rd55_res = stg6_rd55_select(stg5, d0, d1, dynamic_address);
	set_at<880, 1024>(result, stg6_rd55_res);
	hw_uint<16> stg6_rd56_res = stg6_rd56_select(stg5, d0, d1, dynamic_address);
	set_at<896, 1024>(result, stg6_rd56_res);
	hw_uint<16> stg6_rd57_res = stg6_rd57_select(stg5, d0, d1, dynamic_address);
	set_at<912, 1024>(result, stg6_rd57_res);
	hw_uint<16> stg6_rd58_res = stg6_rd58_select(stg5, d0, d1, dynamic_address);
	set_at<928, 1024>(result, stg6_rd58_res);
	hw_uint<16> stg6_rd59_res = stg6_rd59_select(stg5, d0, d1, dynamic_address);
	set_at<944, 1024>(result, stg6_rd59_res);
	hw_uint<16> stg6_rd60_res = stg6_rd60_select(stg5, d0, d1, dynamic_address);
	set_at<960, 1024>(result, stg6_rd60_res);
	hw_uint<16> stg6_rd61_res = stg6_rd61_select(stg5, d0, d1, dynamic_address);
	set_at<976, 1024>(result, stg6_rd61_res);
	hw_uint<16> stg6_rd62_res = stg6_rd62_select(stg5, d0, d1, dynamic_address);
	set_at<992, 1024>(result, stg6_rd62_res);
	hw_uint<16> stg6_rd63_res = stg6_rd63_select(stg5, d0, d1, dynamic_address);
	set_at<1008, 1024>(result, stg6_rd63_res);
	return result;
}

struct stg6_stg6_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-32, 1952], [0, 1081]}
	// Capacity: 128
	// # of read delays: 4
  // 0, 1, 126, 127
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 124> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_125() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_126() {
		return f4;
	}

	inline hw_uint<16> peek_127() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 124
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 124 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg6_stg6_update_0_write1_merged_banks_4_cache {
	// RAM Box: {[-31, 1937], [0, 1082]}
	// Capacity: 128
	// # of read delays: 3
  // 0, 1, 127
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_126() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_127() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg6_stg6_update_0_write10_merged_banks_4_cache {
	// RAM Box: {[-22, 1946], [0, 1082]}
	// Capacity: 128
	// # of read delays: 3
  // 0, 1, 127
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_126() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_127() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg6_stg6_update_0_write11_merged_banks_4_cache {
	// RAM Box: {[-21, 1947], [0, 1082]}
	// Capacity: 128
	// # of read delays: 3
  // 0, 1, 127
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_126() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_127() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg6_stg6_update_0_write12_merged_banks_4_cache {
	// RAM Box: {[-20, 1948], [0, 1082]}
	// Capacity: 128
	// # of read delays: 3
  // 0, 1, 127
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_126() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_127() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg6_stg6_update_0_write13_merged_banks_4_cache {
	// RAM Box: {[-19, 1949], [0, 1082]}
	// Capacity: 128
	// # of read delays: 3
  // 0, 1, 127
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_126() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_127() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg6_stg6_update_0_write14_merged_banks_4_cache {
	// RAM Box: {[-18, 1950], [0, 1082]}
	// Capacity: 128
	// # of read delays: 3
  // 0, 1, 127
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_126() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_127() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg6_stg6_update_0_write15_merged_banks_4_cache {
	// RAM Box: {[-33, 1951], [0, 1082]}
	// Capacity: 129
	// # of read delays: 4
  // 0, 1, 127, 128
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_126() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_127() {
		return f4;
	}

	inline hw_uint<16> peek_128() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg6_stg6_update_0_write2_merged_banks_4_cache {
	// RAM Box: {[-30, 1938], [0, 1082]}
	// Capacity: 128
	// # of read delays: 3
  // 0, 1, 127
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_126() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_127() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg6_stg6_update_0_write3_merged_banks_4_cache {
	// RAM Box: {[-29, 1939], [0, 1082]}
	// Capacity: 128
	// # of read delays: 3
  // 0, 1, 127
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_126() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_127() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg6_stg6_update_0_write4_merged_banks_4_cache {
	// RAM Box: {[-28, 1940], [0, 1082]}
	// Capacity: 128
	// # of read delays: 3
  // 0, 1, 127
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_126() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_127() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg6_stg6_update_0_write5_merged_banks_4_cache {
	// RAM Box: {[-27, 1941], [0, 1082]}
	// Capacity: 128
	// # of read delays: 3
  // 0, 1, 127
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_126() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_127() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg6_stg6_update_0_write6_merged_banks_4_cache {
	// RAM Box: {[-26, 1942], [0, 1082]}
	// Capacity: 128
	// # of read delays: 3
  // 0, 1, 127
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_126() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_127() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg6_stg6_update_0_write7_merged_banks_4_cache {
	// RAM Box: {[-25, 1943], [0, 1082]}
	// Capacity: 128
	// # of read delays: 3
  // 0, 1, 127
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_126() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_127() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg6_stg6_update_0_write8_merged_banks_4_cache {
	// RAM Box: {[-24, 1944], [0, 1082]}
	// Capacity: 128
	// # of read delays: 3
  // 0, 1, 127
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_126() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_127() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg6_stg6_update_0_write9_merged_banks_4_cache {
	// RAM Box: {[-23, 1945], [0, 1082]}
	// Capacity: 128
	// # of read delays: 3
  // 0, 1, 127
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_126() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_127() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg6_cache {
  // # of banks: 16
  stg6_stg6_update_0_write0_merged_banks_4_cache stg6_stg6_update_0_write0_merged_banks_4;
  stg6_stg6_update_0_write1_merged_banks_4_cache stg6_stg6_update_0_write1_merged_banks_4;
  stg6_stg6_update_0_write10_merged_banks_4_cache stg6_stg6_update_0_write10_merged_banks_4;
  stg6_stg6_update_0_write11_merged_banks_4_cache stg6_stg6_update_0_write11_merged_banks_4;
  stg6_stg6_update_0_write12_merged_banks_4_cache stg6_stg6_update_0_write12_merged_banks_4;
  stg6_stg6_update_0_write13_merged_banks_4_cache stg6_stg6_update_0_write13_merged_banks_4;
  stg6_stg6_update_0_write14_merged_banks_4_cache stg6_stg6_update_0_write14_merged_banks_4;
  stg6_stg6_update_0_write15_merged_banks_4_cache stg6_stg6_update_0_write15_merged_banks_4;
  stg6_stg6_update_0_write2_merged_banks_4_cache stg6_stg6_update_0_write2_merged_banks_4;
  stg6_stg6_update_0_write3_merged_banks_4_cache stg6_stg6_update_0_write3_merged_banks_4;
  stg6_stg6_update_0_write4_merged_banks_4_cache stg6_stg6_update_0_write4_merged_banks_4;
  stg6_stg6_update_0_write5_merged_banks_4_cache stg6_stg6_update_0_write5_merged_banks_4;
  stg6_stg6_update_0_write6_merged_banks_4_cache stg6_stg6_update_0_write6_merged_banks_4;
  stg6_stg6_update_0_write7_merged_banks_4_cache stg6_stg6_update_0_write7_merged_banks_4;
  stg6_stg6_update_0_write8_merged_banks_4_cache stg6_stg6_update_0_write8_merged_banks_4;
  stg6_stg6_update_0_write9_merged_banks_4_cache stg6_stg6_update_0_write9_merged_banks_4;
};



inline void stg6_stg6_update_0_write0_write(hw_uint<16>& stg6_stg6_update_0_write0, stg6_cache& stg6, int d0, int d1, int dynamic_address) {
  stg6.stg6_stg6_update_0_write0_merged_banks_4.push(stg6_stg6_update_0_write0);
}

inline void stg6_stg6_update_0_write1_write(hw_uint<16>& stg6_stg6_update_0_write1, stg6_cache& stg6, int d0, int d1, int dynamic_address) {
  stg6.stg6_stg6_update_0_write1_merged_banks_4.push(stg6_stg6_update_0_write1);
}

inline void stg6_stg6_update_0_write10_write(hw_uint<16>& stg6_stg6_update_0_write10, stg6_cache& stg6, int d0, int d1, int dynamic_address) {
  stg6.stg6_stg6_update_0_write10_merged_banks_4.push(stg6_stg6_update_0_write10);
}

inline void stg6_stg6_update_0_write11_write(hw_uint<16>& stg6_stg6_update_0_write11, stg6_cache& stg6, int d0, int d1, int dynamic_address) {
  stg6.stg6_stg6_update_0_write11_merged_banks_4.push(stg6_stg6_update_0_write11);
}

inline void stg6_stg6_update_0_write12_write(hw_uint<16>& stg6_stg6_update_0_write12, stg6_cache& stg6, int d0, int d1, int dynamic_address) {
  stg6.stg6_stg6_update_0_write12_merged_banks_4.push(stg6_stg6_update_0_write12);
}

inline void stg6_stg6_update_0_write13_write(hw_uint<16>& stg6_stg6_update_0_write13, stg6_cache& stg6, int d0, int d1, int dynamic_address) {
  stg6.stg6_stg6_update_0_write13_merged_banks_4.push(stg6_stg6_update_0_write13);
}

inline void stg6_stg6_update_0_write14_write(hw_uint<16>& stg6_stg6_update_0_write14, stg6_cache& stg6, int d0, int d1, int dynamic_address) {
  stg6.stg6_stg6_update_0_write14_merged_banks_4.push(stg6_stg6_update_0_write14);
}

inline void stg6_stg6_update_0_write15_write(hw_uint<16>& stg6_stg6_update_0_write15, stg6_cache& stg6, int d0, int d1, int dynamic_address) {
  stg6.stg6_stg6_update_0_write15_merged_banks_4.push(stg6_stg6_update_0_write15);
}

inline void stg6_stg6_update_0_write2_write(hw_uint<16>& stg6_stg6_update_0_write2, stg6_cache& stg6, int d0, int d1, int dynamic_address) {
  stg6.stg6_stg6_update_0_write2_merged_banks_4.push(stg6_stg6_update_0_write2);
}

inline void stg6_stg6_update_0_write3_write(hw_uint<16>& stg6_stg6_update_0_write3, stg6_cache& stg6, int d0, int d1, int dynamic_address) {
  stg6.stg6_stg6_update_0_write3_merged_banks_4.push(stg6_stg6_update_0_write3);
}

inline void stg6_stg6_update_0_write4_write(hw_uint<16>& stg6_stg6_update_0_write4, stg6_cache& stg6, int d0, int d1, int dynamic_address) {
  stg6.stg6_stg6_update_0_write4_merged_banks_4.push(stg6_stg6_update_0_write4);
}

inline void stg6_stg6_update_0_write5_write(hw_uint<16>& stg6_stg6_update_0_write5, stg6_cache& stg6, int d0, int d1, int dynamic_address) {
  stg6.stg6_stg6_update_0_write5_merged_banks_4.push(stg6_stg6_update_0_write5);
}

inline void stg6_stg6_update_0_write6_write(hw_uint<16>& stg6_stg6_update_0_write6, stg6_cache& stg6, int d0, int d1, int dynamic_address) {
  stg6.stg6_stg6_update_0_write6_merged_banks_4.push(stg6_stg6_update_0_write6);
}

inline void stg6_stg6_update_0_write7_write(hw_uint<16>& stg6_stg6_update_0_write7, stg6_cache& stg6, int d0, int d1, int dynamic_address) {
  stg6.stg6_stg6_update_0_write7_merged_banks_4.push(stg6_stg6_update_0_write7);
}

inline void stg6_stg6_update_0_write8_write(hw_uint<16>& stg6_stg6_update_0_write8, stg6_cache& stg6, int d0, int d1, int dynamic_address) {
  stg6.stg6_stg6_update_0_write8_merged_banks_4.push(stg6_stg6_update_0_write8);
}

inline void stg6_stg6_update_0_write9_write(hw_uint<16>& stg6_stg6_update_0_write9, stg6_cache& stg6, int d0, int d1, int dynamic_address) {
  stg6.stg6_stg6_update_0_write9_merged_banks_4.push(stg6_stg6_update_0_write9);
}

inline hw_uint<16> stg7_rd0_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd0 read pattern: { stg7_update_0[d0, d1] -> stg6[-1 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write15 = stg6.stg6_stg6_update_0_write15_merged_banks_4.peek_128();
  return value_stg6_stg6_update_0_write15;
  return 0;
}

inline hw_uint<16> stg7_rd1_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd1 read pattern: { stg7_update_0[d0, d1] -> stg6[16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write0 = stg6.stg6_stg6_update_0_write0_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write0;
  return 0;
}

inline hw_uint<16> stg7_rd10_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd10 read pattern: { stg7_update_0[d0, d1] -> stg6[2 + 16d0, 1 + d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write2 = stg6.stg6_stg6_update_0_write2_merged_banks_4.peek_1();
  return value_stg6_stg6_update_0_write2;
  return 0;
}

inline hw_uint<16> stg7_rd11_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd11 read pattern: { stg7_update_0[d0, d1] -> stg6[3 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write3 = stg6.stg6_stg6_update_0_write3_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write3;
  return 0;
}

inline hw_uint<16> stg7_rd12_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd12 read pattern: { stg7_update_0[d0, d1] -> stg6[2 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write2 = stg6.stg6_stg6_update_0_write2_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write2;
  return 0;
}

inline hw_uint<16> stg7_rd13_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd13 read pattern: { stg7_update_0[d0, d1] -> stg6[3 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write3 = stg6.stg6_stg6_update_0_write3_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write3;
  return 0;
}

inline hw_uint<16> stg7_rd14_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd14 read pattern: { stg7_update_0[d0, d1] -> stg6[3 + 16d0, 1 + d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write3 = stg6.stg6_stg6_update_0_write3_merged_banks_4.peek_1();
  return value_stg6_stg6_update_0_write3;
  return 0;
}

inline hw_uint<16> stg7_rd15_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd15 read pattern: { stg7_update_0[d0, d1] -> stg6[4 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write4 = stg6.stg6_stg6_update_0_write4_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write4;
  return 0;
}

inline hw_uint<16> stg7_rd16_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd16 read pattern: { stg7_update_0[d0, d1] -> stg6[3 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write3 = stg6.stg6_stg6_update_0_write3_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write3;
  return 0;
}

inline hw_uint<16> stg7_rd17_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd17 read pattern: { stg7_update_0[d0, d1] -> stg6[4 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write4 = stg6.stg6_stg6_update_0_write4_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write4;
  return 0;
}

inline hw_uint<16> stg7_rd18_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd18 read pattern: { stg7_update_0[d0, d1] -> stg6[4 + 16d0, 1 + d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write4 = stg6.stg6_stg6_update_0_write4_merged_banks_4.peek_1();
  return value_stg6_stg6_update_0_write4;
  return 0;
}

inline hw_uint<16> stg7_rd19_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd19 read pattern: { stg7_update_0[d0, d1] -> stg6[5 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write5 = stg6.stg6_stg6_update_0_write5_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write5;
  return 0;
}

inline hw_uint<16> stg7_rd2_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd2 read pattern: { stg7_update_0[d0, d1] -> stg6[16d0, 1 + d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write0 = stg6.stg6_stg6_update_0_write0_merged_banks_4.peek_1();
  return value_stg6_stg6_update_0_write0;
  return 0;
}

inline hw_uint<16> stg7_rd20_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd20 read pattern: { stg7_update_0[d0, d1] -> stg6[4 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write4 = stg6.stg6_stg6_update_0_write4_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write4;
  return 0;
}

inline hw_uint<16> stg7_rd21_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd21 read pattern: { stg7_update_0[d0, d1] -> stg6[5 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write5 = stg6.stg6_stg6_update_0_write5_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write5;
  return 0;
}

inline hw_uint<16> stg7_rd22_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd22 read pattern: { stg7_update_0[d0, d1] -> stg6[5 + 16d0, 1 + d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write5 = stg6.stg6_stg6_update_0_write5_merged_banks_4.peek_1();
  return value_stg6_stg6_update_0_write5;
  return 0;
}

inline hw_uint<16> stg7_rd23_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd23 read pattern: { stg7_update_0[d0, d1] -> stg6[6 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write6 = stg6.stg6_stg6_update_0_write6_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write6;
  return 0;
}

inline hw_uint<16> stg7_rd24_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd24 read pattern: { stg7_update_0[d0, d1] -> stg6[5 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write5 = stg6.stg6_stg6_update_0_write5_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write5;
  return 0;
}

inline hw_uint<16> stg7_rd25_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd25 read pattern: { stg7_update_0[d0, d1] -> stg6[6 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write6 = stg6.stg6_stg6_update_0_write6_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write6;
  return 0;
}

inline hw_uint<16> stg7_rd26_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd26 read pattern: { stg7_update_0[d0, d1] -> stg6[6 + 16d0, 1 + d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write6 = stg6.stg6_stg6_update_0_write6_merged_banks_4.peek_1();
  return value_stg6_stg6_update_0_write6;
  return 0;
}

inline hw_uint<16> stg7_rd27_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd27 read pattern: { stg7_update_0[d0, d1] -> stg6[7 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write7 = stg6.stg6_stg6_update_0_write7_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write7;
  return 0;
}

inline hw_uint<16> stg7_rd28_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd28 read pattern: { stg7_update_0[d0, d1] -> stg6[6 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write6 = stg6.stg6_stg6_update_0_write6_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write6;
  return 0;
}

inline hw_uint<16> stg7_rd29_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd29 read pattern: { stg7_update_0[d0, d1] -> stg6[7 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write7 = stg6.stg6_stg6_update_0_write7_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write7;
  return 0;
}

inline hw_uint<16> stg7_rd3_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd3 read pattern: { stg7_update_0[d0, d1] -> stg6[1 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write1 = stg6.stg6_stg6_update_0_write1_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write1;
  return 0;
}

inline hw_uint<16> stg7_rd30_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd30 read pattern: { stg7_update_0[d0, d1] -> stg6[7 + 16d0, 1 + d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write7 = stg6.stg6_stg6_update_0_write7_merged_banks_4.peek_1();
  return value_stg6_stg6_update_0_write7;
  return 0;
}

inline hw_uint<16> stg7_rd31_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd31 read pattern: { stg7_update_0[d0, d1] -> stg6[8 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write8 = stg6.stg6_stg6_update_0_write8_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write8;
  return 0;
}

inline hw_uint<16> stg7_rd32_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd32 read pattern: { stg7_update_0[d0, d1] -> stg6[7 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write7 = stg6.stg6_stg6_update_0_write7_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write7;
  return 0;
}

inline hw_uint<16> stg7_rd33_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd33 read pattern: { stg7_update_0[d0, d1] -> stg6[8 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write8 = stg6.stg6_stg6_update_0_write8_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write8;
  return 0;
}

inline hw_uint<16> stg7_rd34_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd34 read pattern: { stg7_update_0[d0, d1] -> stg6[8 + 16d0, 1 + d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write8 = stg6.stg6_stg6_update_0_write8_merged_banks_4.peek_1();
  return value_stg6_stg6_update_0_write8;
  return 0;
}

inline hw_uint<16> stg7_rd35_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd35 read pattern: { stg7_update_0[d0, d1] -> stg6[9 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write9 = stg6.stg6_stg6_update_0_write9_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write9;
  return 0;
}

inline hw_uint<16> stg7_rd36_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd36 read pattern: { stg7_update_0[d0, d1] -> stg6[8 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write8 = stg6.stg6_stg6_update_0_write8_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write8;
  return 0;
}

inline hw_uint<16> stg7_rd37_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd37 read pattern: { stg7_update_0[d0, d1] -> stg6[9 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write9 = stg6.stg6_stg6_update_0_write9_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write9;
  return 0;
}

inline hw_uint<16> stg7_rd38_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd38 read pattern: { stg7_update_0[d0, d1] -> stg6[9 + 16d0, 1 + d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write9 = stg6.stg6_stg6_update_0_write9_merged_banks_4.peek_1();
  return value_stg6_stg6_update_0_write9;
  return 0;
}

inline hw_uint<16> stg7_rd39_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd39 read pattern: { stg7_update_0[d0, d1] -> stg6[10 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write10 = stg6.stg6_stg6_update_0_write10_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write10;
  return 0;
}

inline hw_uint<16> stg7_rd4_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd4 read pattern: { stg7_update_0[d0, d1] -> stg6[16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write0 = stg6.stg6_stg6_update_0_write0_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write0;
  return 0;
}

inline hw_uint<16> stg7_rd40_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd40 read pattern: { stg7_update_0[d0, d1] -> stg6[9 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write9 = stg6.stg6_stg6_update_0_write9_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write9;
  return 0;
}

inline hw_uint<16> stg7_rd41_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd41 read pattern: { stg7_update_0[d0, d1] -> stg6[10 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write10 = stg6.stg6_stg6_update_0_write10_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write10;
  return 0;
}

inline hw_uint<16> stg7_rd42_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd42 read pattern: { stg7_update_0[d0, d1] -> stg6[10 + 16d0, 1 + d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write10 = stg6.stg6_stg6_update_0_write10_merged_banks_4.peek_1();
  return value_stg6_stg6_update_0_write10;
  return 0;
}

inline hw_uint<16> stg7_rd43_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd43 read pattern: { stg7_update_0[d0, d1] -> stg6[11 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write11 = stg6.stg6_stg6_update_0_write11_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write11;
  return 0;
}

inline hw_uint<16> stg7_rd44_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd44 read pattern: { stg7_update_0[d0, d1] -> stg6[10 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write10 = stg6.stg6_stg6_update_0_write10_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write10;
  return 0;
}

inline hw_uint<16> stg7_rd45_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd45 read pattern: { stg7_update_0[d0, d1] -> stg6[11 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write11 = stg6.stg6_stg6_update_0_write11_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write11;
  return 0;
}

inline hw_uint<16> stg7_rd46_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd46 read pattern: { stg7_update_0[d0, d1] -> stg6[11 + 16d0, 1 + d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write11 = stg6.stg6_stg6_update_0_write11_merged_banks_4.peek_1();
  return value_stg6_stg6_update_0_write11;
  return 0;
}

inline hw_uint<16> stg7_rd47_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd47 read pattern: { stg7_update_0[d0, d1] -> stg6[12 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write12 = stg6.stg6_stg6_update_0_write12_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write12;
  return 0;
}

inline hw_uint<16> stg7_rd48_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd48 read pattern: { stg7_update_0[d0, d1] -> stg6[11 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write11 = stg6.stg6_stg6_update_0_write11_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write11;
  return 0;
}

inline hw_uint<16> stg7_rd49_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd49 read pattern: { stg7_update_0[d0, d1] -> stg6[12 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write12 = stg6.stg6_stg6_update_0_write12_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write12;
  return 0;
}

inline hw_uint<16> stg7_rd5_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd5 read pattern: { stg7_update_0[d0, d1] -> stg6[1 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write1 = stg6.stg6_stg6_update_0_write1_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write1;
  return 0;
}

inline hw_uint<16> stg7_rd50_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd50 read pattern: { stg7_update_0[d0, d1] -> stg6[12 + 16d0, 1 + d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write12 = stg6.stg6_stg6_update_0_write12_merged_banks_4.peek_1();
  return value_stg6_stg6_update_0_write12;
  return 0;
}

inline hw_uint<16> stg7_rd51_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd51 read pattern: { stg7_update_0[d0, d1] -> stg6[13 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write13 = stg6.stg6_stg6_update_0_write13_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write13;
  return 0;
}

inline hw_uint<16> stg7_rd52_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd52 read pattern: { stg7_update_0[d0, d1] -> stg6[12 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write12 = stg6.stg6_stg6_update_0_write12_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write12;
  return 0;
}

inline hw_uint<16> stg7_rd53_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd53 read pattern: { stg7_update_0[d0, d1] -> stg6[13 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write13 = stg6.stg6_stg6_update_0_write13_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write13;
  return 0;
}

inline hw_uint<16> stg7_rd54_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd54 read pattern: { stg7_update_0[d0, d1] -> stg6[13 + 16d0, 1 + d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write13 = stg6.stg6_stg6_update_0_write13_merged_banks_4.peek_1();
  return value_stg6_stg6_update_0_write13;
  return 0;
}

inline hw_uint<16> stg7_rd55_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd55 read pattern: { stg7_update_0[d0, d1] -> stg6[14 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write14 = stg6.stg6_stg6_update_0_write14_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write14;
  return 0;
}

inline hw_uint<16> stg7_rd56_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd56 read pattern: { stg7_update_0[d0, d1] -> stg6[13 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write13 = stg6.stg6_stg6_update_0_write13_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write13;
  return 0;
}

inline hw_uint<16> stg7_rd57_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd57 read pattern: { stg7_update_0[d0, d1] -> stg6[14 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write14 = stg6.stg6_stg6_update_0_write14_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write14;
  return 0;
}

inline hw_uint<16> stg7_rd58_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd58 read pattern: { stg7_update_0[d0, d1] -> stg6[14 + 16d0, 1 + d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write14 = stg6.stg6_stg6_update_0_write14_merged_banks_4.peek_1();
  return value_stg6_stg6_update_0_write14;
  return 0;
}

inline hw_uint<16> stg7_rd59_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd59 read pattern: { stg7_update_0[d0, d1] -> stg6[15 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write15 = stg6.stg6_stg6_update_0_write15_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write15;
  return 0;
}

inline hw_uint<16> stg7_rd6_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd6 read pattern: { stg7_update_0[d0, d1] -> stg6[1 + 16d0, 1 + d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write1 = stg6.stg6_stg6_update_0_write1_merged_banks_4.peek_1();
  return value_stg6_stg6_update_0_write1;
  return 0;
}

inline hw_uint<16> stg7_rd60_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd60 read pattern: { stg7_update_0[d0, d1] -> stg6[14 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write14 = stg6.stg6_stg6_update_0_write14_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write14;
  return 0;
}

inline hw_uint<16> stg7_rd61_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd61 read pattern: { stg7_update_0[d0, d1] -> stg6[15 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write15 = stg6.stg6_stg6_update_0_write15_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write15;
  return 0;
}

inline hw_uint<16> stg7_rd62_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd62 read pattern: { stg7_update_0[d0, d1] -> stg6[15 + 16d0, 1 + d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write15 = stg6.stg6_stg6_update_0_write15_merged_banks_4.peek_1();
  return value_stg6_stg6_update_0_write15;
  return 0;
}

inline hw_uint<16> stg7_rd63_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd63 read pattern: { stg7_update_0[d0, d1] -> stg6[16 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write0 = stg6.stg6_stg6_update_0_write0_merged_banks_4.peek_126();
  return value_stg6_stg6_update_0_write0;
  return 0;
}

inline hw_uint<16> stg7_rd7_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd7 read pattern: { stg7_update_0[d0, d1] -> stg6[2 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write2 = stg6.stg6_stg6_update_0_write2_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write2;
  return 0;
}

inline hw_uint<16> stg7_rd8_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd8 read pattern: { stg7_update_0[d0, d1] -> stg6[1 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write1 = stg6.stg6_stg6_update_0_write1_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write1;
  return 0;
}

inline hw_uint<16> stg7_rd9_select(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg7_rd9 read pattern: { stg7_update_0[d0, d1] -> stg6[2 + 16d0, d1] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Read schedule : { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  // Write schedule: { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
  auto value_stg6_stg6_update_0_write2 = stg6.stg6_stg6_update_0_write2_merged_banks_4.peek_127();
  return value_stg6_stg6_update_0_write2;
  return 0;
}

// # of bundles = 2
// stg6_update_0_write
//	stg6_stg6_update_0_write0
//	stg6_stg6_update_0_write1
//	stg6_stg6_update_0_write2
//	stg6_stg6_update_0_write3
//	stg6_stg6_update_0_write4
//	stg6_stg6_update_0_write5
//	stg6_stg6_update_0_write6
//	stg6_stg6_update_0_write7
//	stg6_stg6_update_0_write8
//	stg6_stg6_update_0_write9
//	stg6_stg6_update_0_write10
//	stg6_stg6_update_0_write11
//	stg6_stg6_update_0_write12
//	stg6_stg6_update_0_write13
//	stg6_stg6_update_0_write14
//	stg6_stg6_update_0_write15
inline void stg6_stg6_update_0_write_bundle_write(hw_uint<256>& stg6_update_0_write, stg6_cache& stg6, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg6_stg6_update_0_write0_res = stg6_update_0_write.extract<0, 15>();
	stg6_stg6_update_0_write0_write(stg6_stg6_update_0_write0_res, stg6, d0, d1, dynamic_address);
	hw_uint<16> stg6_stg6_update_0_write1_res = stg6_update_0_write.extract<16, 31>();
	stg6_stg6_update_0_write1_write(stg6_stg6_update_0_write1_res, stg6, d0, d1, dynamic_address);
	hw_uint<16> stg6_stg6_update_0_write2_res = stg6_update_0_write.extract<32, 47>();
	stg6_stg6_update_0_write2_write(stg6_stg6_update_0_write2_res, stg6, d0, d1, dynamic_address);
	hw_uint<16> stg6_stg6_update_0_write3_res = stg6_update_0_write.extract<48, 63>();
	stg6_stg6_update_0_write3_write(stg6_stg6_update_0_write3_res, stg6, d0, d1, dynamic_address);
	hw_uint<16> stg6_stg6_update_0_write4_res = stg6_update_0_write.extract<64, 79>();
	stg6_stg6_update_0_write4_write(stg6_stg6_update_0_write4_res, stg6, d0, d1, dynamic_address);
	hw_uint<16> stg6_stg6_update_0_write5_res = stg6_update_0_write.extract<80, 95>();
	stg6_stg6_update_0_write5_write(stg6_stg6_update_0_write5_res, stg6, d0, d1, dynamic_address);
	hw_uint<16> stg6_stg6_update_0_write6_res = stg6_update_0_write.extract<96, 111>();
	stg6_stg6_update_0_write6_write(stg6_stg6_update_0_write6_res, stg6, d0, d1, dynamic_address);
	hw_uint<16> stg6_stg6_update_0_write7_res = stg6_update_0_write.extract<112, 127>();
	stg6_stg6_update_0_write7_write(stg6_stg6_update_0_write7_res, stg6, d0, d1, dynamic_address);
	hw_uint<16> stg6_stg6_update_0_write8_res = stg6_update_0_write.extract<128, 143>();
	stg6_stg6_update_0_write8_write(stg6_stg6_update_0_write8_res, stg6, d0, d1, dynamic_address);
	hw_uint<16> stg6_stg6_update_0_write9_res = stg6_update_0_write.extract<144, 159>();
	stg6_stg6_update_0_write9_write(stg6_stg6_update_0_write9_res, stg6, d0, d1, dynamic_address);
	hw_uint<16> stg6_stg6_update_0_write10_res = stg6_update_0_write.extract<160, 175>();
	stg6_stg6_update_0_write10_write(stg6_stg6_update_0_write10_res, stg6, d0, d1, dynamic_address);
	hw_uint<16> stg6_stg6_update_0_write11_res = stg6_update_0_write.extract<176, 191>();
	stg6_stg6_update_0_write11_write(stg6_stg6_update_0_write11_res, stg6, d0, d1, dynamic_address);
	hw_uint<16> stg6_stg6_update_0_write12_res = stg6_update_0_write.extract<192, 207>();
	stg6_stg6_update_0_write12_write(stg6_stg6_update_0_write12_res, stg6, d0, d1, dynamic_address);
	hw_uint<16> stg6_stg6_update_0_write13_res = stg6_update_0_write.extract<208, 223>();
	stg6_stg6_update_0_write13_write(stg6_stg6_update_0_write13_res, stg6, d0, d1, dynamic_address);
	hw_uint<16> stg6_stg6_update_0_write14_res = stg6_update_0_write.extract<224, 239>();
	stg6_stg6_update_0_write14_write(stg6_stg6_update_0_write14_res, stg6, d0, d1, dynamic_address);
	hw_uint<16> stg6_stg6_update_0_write15_res = stg6_update_0_write.extract<240, 255>();
	stg6_stg6_update_0_write15_write(stg6_stg6_update_0_write15_res, stg6, d0, d1, dynamic_address);
}

// stg7_update_0_read
//	stg7_rd0
//	stg7_rd1
//	stg7_rd2
//	stg7_rd3
//	stg7_rd4
//	stg7_rd5
//	stg7_rd6
//	stg7_rd7
//	stg7_rd8
//	stg7_rd9
//	stg7_rd10
//	stg7_rd11
//	stg7_rd12
//	stg7_rd13
//	stg7_rd14
//	stg7_rd15
//	stg7_rd16
//	stg7_rd17
//	stg7_rd18
//	stg7_rd19
//	stg7_rd20
//	stg7_rd21
//	stg7_rd22
//	stg7_rd23
//	stg7_rd24
//	stg7_rd25
//	stg7_rd26
//	stg7_rd27
//	stg7_rd28
//	stg7_rd29
//	stg7_rd30
//	stg7_rd31
//	stg7_rd32
//	stg7_rd33
//	stg7_rd34
//	stg7_rd35
//	stg7_rd36
//	stg7_rd37
//	stg7_rd38
//	stg7_rd39
//	stg7_rd40
//	stg7_rd41
//	stg7_rd42
//	stg7_rd43
//	stg7_rd44
//	stg7_rd45
//	stg7_rd46
//	stg7_rd47
//	stg7_rd48
//	stg7_rd49
//	stg7_rd50
//	stg7_rd51
//	stg7_rd52
//	stg7_rd53
//	stg7_rd54
//	stg7_rd55
//	stg7_rd56
//	stg7_rd57
//	stg7_rd58
//	stg7_rd59
//	stg7_rd60
//	stg7_rd61
//	stg7_rd62
//	stg7_rd63
inline hw_uint<1024> stg6_stg7_update_0_read_bundle_read(stg6_cache& stg6, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 64
    // stg7_rd0
    // stg7_rd1
    // stg7_rd2
    // stg7_rd3
    // stg7_rd4
    // stg7_rd5
    // stg7_rd6
    // stg7_rd7
    // stg7_rd8
    // stg7_rd9
    // stg7_rd10
    // stg7_rd11
    // stg7_rd12
    // stg7_rd13
    // stg7_rd14
    // stg7_rd15
    // stg7_rd16
    // stg7_rd17
    // stg7_rd18
    // stg7_rd19
    // stg7_rd20
    // stg7_rd21
    // stg7_rd22
    // stg7_rd23
    // stg7_rd24
    // stg7_rd25
    // stg7_rd26
    // stg7_rd27
    // stg7_rd28
    // stg7_rd29
    // stg7_rd30
    // stg7_rd31
    // stg7_rd32
    // stg7_rd33
    // stg7_rd34
    // stg7_rd35
    // stg7_rd36
    // stg7_rd37
    // stg7_rd38
    // stg7_rd39
    // stg7_rd40
    // stg7_rd41
    // stg7_rd42
    // stg7_rd43
    // stg7_rd44
    // stg7_rd45
    // stg7_rd46
    // stg7_rd47
    // stg7_rd48
    // stg7_rd49
    // stg7_rd50
    // stg7_rd51
    // stg7_rd52
    // stg7_rd53
    // stg7_rd54
    // stg7_rd55
    // stg7_rd56
    // stg7_rd57
    // stg7_rd58
    // stg7_rd59
    // stg7_rd60
    // stg7_rd61
    // stg7_rd62
    // stg7_rd63

	hw_uint<1024> result;
	hw_uint<16> stg7_rd0_res = stg7_rd0_select(stg6, d0, d1, dynamic_address);
	set_at<0, 1024>(result, stg7_rd0_res);
	hw_uint<16> stg7_rd1_res = stg7_rd1_select(stg6, d0, d1, dynamic_address);
	set_at<16, 1024>(result, stg7_rd1_res);
	hw_uint<16> stg7_rd2_res = stg7_rd2_select(stg6, d0, d1, dynamic_address);
	set_at<32, 1024>(result, stg7_rd2_res);
	hw_uint<16> stg7_rd3_res = stg7_rd3_select(stg6, d0, d1, dynamic_address);
	set_at<48, 1024>(result, stg7_rd3_res);
	hw_uint<16> stg7_rd4_res = stg7_rd4_select(stg6, d0, d1, dynamic_address);
	set_at<64, 1024>(result, stg7_rd4_res);
	hw_uint<16> stg7_rd5_res = stg7_rd5_select(stg6, d0, d1, dynamic_address);
	set_at<80, 1024>(result, stg7_rd5_res);
	hw_uint<16> stg7_rd6_res = stg7_rd6_select(stg6, d0, d1, dynamic_address);
	set_at<96, 1024>(result, stg7_rd6_res);
	hw_uint<16> stg7_rd7_res = stg7_rd7_select(stg6, d0, d1, dynamic_address);
	set_at<112, 1024>(result, stg7_rd7_res);
	hw_uint<16> stg7_rd8_res = stg7_rd8_select(stg6, d0, d1, dynamic_address);
	set_at<128, 1024>(result, stg7_rd8_res);
	hw_uint<16> stg7_rd9_res = stg7_rd9_select(stg6, d0, d1, dynamic_address);
	set_at<144, 1024>(result, stg7_rd9_res);
	hw_uint<16> stg7_rd10_res = stg7_rd10_select(stg6, d0, d1, dynamic_address);
	set_at<160, 1024>(result, stg7_rd10_res);
	hw_uint<16> stg7_rd11_res = stg7_rd11_select(stg6, d0, d1, dynamic_address);
	set_at<176, 1024>(result, stg7_rd11_res);
	hw_uint<16> stg7_rd12_res = stg7_rd12_select(stg6, d0, d1, dynamic_address);
	set_at<192, 1024>(result, stg7_rd12_res);
	hw_uint<16> stg7_rd13_res = stg7_rd13_select(stg6, d0, d1, dynamic_address);
	set_at<208, 1024>(result, stg7_rd13_res);
	hw_uint<16> stg7_rd14_res = stg7_rd14_select(stg6, d0, d1, dynamic_address);
	set_at<224, 1024>(result, stg7_rd14_res);
	hw_uint<16> stg7_rd15_res = stg7_rd15_select(stg6, d0, d1, dynamic_address);
	set_at<240, 1024>(result, stg7_rd15_res);
	hw_uint<16> stg7_rd16_res = stg7_rd16_select(stg6, d0, d1, dynamic_address);
	set_at<256, 1024>(result, stg7_rd16_res);
	hw_uint<16> stg7_rd17_res = stg7_rd17_select(stg6, d0, d1, dynamic_address);
	set_at<272, 1024>(result, stg7_rd17_res);
	hw_uint<16> stg7_rd18_res = stg7_rd18_select(stg6, d0, d1, dynamic_address);
	set_at<288, 1024>(result, stg7_rd18_res);
	hw_uint<16> stg7_rd19_res = stg7_rd19_select(stg6, d0, d1, dynamic_address);
	set_at<304, 1024>(result, stg7_rd19_res);
	hw_uint<16> stg7_rd20_res = stg7_rd20_select(stg6, d0, d1, dynamic_address);
	set_at<320, 1024>(result, stg7_rd20_res);
	hw_uint<16> stg7_rd21_res = stg7_rd21_select(stg6, d0, d1, dynamic_address);
	set_at<336, 1024>(result, stg7_rd21_res);
	hw_uint<16> stg7_rd22_res = stg7_rd22_select(stg6, d0, d1, dynamic_address);
	set_at<352, 1024>(result, stg7_rd22_res);
	hw_uint<16> stg7_rd23_res = stg7_rd23_select(stg6, d0, d1, dynamic_address);
	set_at<368, 1024>(result, stg7_rd23_res);
	hw_uint<16> stg7_rd24_res = stg7_rd24_select(stg6, d0, d1, dynamic_address);
	set_at<384, 1024>(result, stg7_rd24_res);
	hw_uint<16> stg7_rd25_res = stg7_rd25_select(stg6, d0, d1, dynamic_address);
	set_at<400, 1024>(result, stg7_rd25_res);
	hw_uint<16> stg7_rd26_res = stg7_rd26_select(stg6, d0, d1, dynamic_address);
	set_at<416, 1024>(result, stg7_rd26_res);
	hw_uint<16> stg7_rd27_res = stg7_rd27_select(stg6, d0, d1, dynamic_address);
	set_at<432, 1024>(result, stg7_rd27_res);
	hw_uint<16> stg7_rd28_res = stg7_rd28_select(stg6, d0, d1, dynamic_address);
	set_at<448, 1024>(result, stg7_rd28_res);
	hw_uint<16> stg7_rd29_res = stg7_rd29_select(stg6, d0, d1, dynamic_address);
	set_at<464, 1024>(result, stg7_rd29_res);
	hw_uint<16> stg7_rd30_res = stg7_rd30_select(stg6, d0, d1, dynamic_address);
	set_at<480, 1024>(result, stg7_rd30_res);
	hw_uint<16> stg7_rd31_res = stg7_rd31_select(stg6, d0, d1, dynamic_address);
	set_at<496, 1024>(result, stg7_rd31_res);
	hw_uint<16> stg7_rd32_res = stg7_rd32_select(stg6, d0, d1, dynamic_address);
	set_at<512, 1024>(result, stg7_rd32_res);
	hw_uint<16> stg7_rd33_res = stg7_rd33_select(stg6, d0, d1, dynamic_address);
	set_at<528, 1024>(result, stg7_rd33_res);
	hw_uint<16> stg7_rd34_res = stg7_rd34_select(stg6, d0, d1, dynamic_address);
	set_at<544, 1024>(result, stg7_rd34_res);
	hw_uint<16> stg7_rd35_res = stg7_rd35_select(stg6, d0, d1, dynamic_address);
	set_at<560, 1024>(result, stg7_rd35_res);
	hw_uint<16> stg7_rd36_res = stg7_rd36_select(stg6, d0, d1, dynamic_address);
	set_at<576, 1024>(result, stg7_rd36_res);
	hw_uint<16> stg7_rd37_res = stg7_rd37_select(stg6, d0, d1, dynamic_address);
	set_at<592, 1024>(result, stg7_rd37_res);
	hw_uint<16> stg7_rd38_res = stg7_rd38_select(stg6, d0, d1, dynamic_address);
	set_at<608, 1024>(result, stg7_rd38_res);
	hw_uint<16> stg7_rd39_res = stg7_rd39_select(stg6, d0, d1, dynamic_address);
	set_at<624, 1024>(result, stg7_rd39_res);
	hw_uint<16> stg7_rd40_res = stg7_rd40_select(stg6, d0, d1, dynamic_address);
	set_at<640, 1024>(result, stg7_rd40_res);
	hw_uint<16> stg7_rd41_res = stg7_rd41_select(stg6, d0, d1, dynamic_address);
	set_at<656, 1024>(result, stg7_rd41_res);
	hw_uint<16> stg7_rd42_res = stg7_rd42_select(stg6, d0, d1, dynamic_address);
	set_at<672, 1024>(result, stg7_rd42_res);
	hw_uint<16> stg7_rd43_res = stg7_rd43_select(stg6, d0, d1, dynamic_address);
	set_at<688, 1024>(result, stg7_rd43_res);
	hw_uint<16> stg7_rd44_res = stg7_rd44_select(stg6, d0, d1, dynamic_address);
	set_at<704, 1024>(result, stg7_rd44_res);
	hw_uint<16> stg7_rd45_res = stg7_rd45_select(stg6, d0, d1, dynamic_address);
	set_at<720, 1024>(result, stg7_rd45_res);
	hw_uint<16> stg7_rd46_res = stg7_rd46_select(stg6, d0, d1, dynamic_address);
	set_at<736, 1024>(result, stg7_rd46_res);
	hw_uint<16> stg7_rd47_res = stg7_rd47_select(stg6, d0, d1, dynamic_address);
	set_at<752, 1024>(result, stg7_rd47_res);
	hw_uint<16> stg7_rd48_res = stg7_rd48_select(stg6, d0, d1, dynamic_address);
	set_at<768, 1024>(result, stg7_rd48_res);
	hw_uint<16> stg7_rd49_res = stg7_rd49_select(stg6, d0, d1, dynamic_address);
	set_at<784, 1024>(result, stg7_rd49_res);
	hw_uint<16> stg7_rd50_res = stg7_rd50_select(stg6, d0, d1, dynamic_address);
	set_at<800, 1024>(result, stg7_rd50_res);
	hw_uint<16> stg7_rd51_res = stg7_rd51_select(stg6, d0, d1, dynamic_address);
	set_at<816, 1024>(result, stg7_rd51_res);
	hw_uint<16> stg7_rd52_res = stg7_rd52_select(stg6, d0, d1, dynamic_address);
	set_at<832, 1024>(result, stg7_rd52_res);
	hw_uint<16> stg7_rd53_res = stg7_rd53_select(stg6, d0, d1, dynamic_address);
	set_at<848, 1024>(result, stg7_rd53_res);
	hw_uint<16> stg7_rd54_res = stg7_rd54_select(stg6, d0, d1, dynamic_address);
	set_at<864, 1024>(result, stg7_rd54_res);
	hw_uint<16> stg7_rd55_res = stg7_rd55_select(stg6, d0, d1, dynamic_address);
	set_at<880, 1024>(result, stg7_rd55_res);
	hw_uint<16> stg7_rd56_res = stg7_rd56_select(stg6, d0, d1, dynamic_address);
	set_at<896, 1024>(result, stg7_rd56_res);
	hw_uint<16> stg7_rd57_res = stg7_rd57_select(stg6, d0, d1, dynamic_address);
	set_at<912, 1024>(result, stg7_rd57_res);
	hw_uint<16> stg7_rd58_res = stg7_rd58_select(stg6, d0, d1, dynamic_address);
	set_at<928, 1024>(result, stg7_rd58_res);
	hw_uint<16> stg7_rd59_res = stg7_rd59_select(stg6, d0, d1, dynamic_address);
	set_at<944, 1024>(result, stg7_rd59_res);
	hw_uint<16> stg7_rd60_res = stg7_rd60_select(stg6, d0, d1, dynamic_address);
	set_at<960, 1024>(result, stg7_rd60_res);
	hw_uint<16> stg7_rd61_res = stg7_rd61_select(stg6, d0, d1, dynamic_address);
	set_at<976, 1024>(result, stg7_rd61_res);
	hw_uint<16> stg7_rd62_res = stg7_rd62_select(stg6, d0, d1, dynamic_address);
	set_at<992, 1024>(result, stg7_rd62_res);
	hw_uint<16> stg7_rd63_res = stg7_rd63_select(stg6, d0, d1, dynamic_address);
	set_at<1008, 1024>(result, stg7_rd63_res);
	return result;
}

struct stg7_stg7_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-16, 1936], [0, 1080]}
	// Capacity: 126
	// # of read delays: 4
  // 0, 1, 124, 125
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 122> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_123() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_124() {
		return f4;
	}

	inline hw_uint<16> peek_125() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 122
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 122 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg7_stg7_update_0_write1_merged_banks_4_cache {
	// RAM Box: {[-15, 1921], [0, 1081]}
	// Capacity: 126
	// # of read delays: 3
  // 0, 1, 125
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 123> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_124() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_125() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg7_stg7_update_0_write10_merged_banks_4_cache {
	// RAM Box: {[-6, 1930], [0, 1081]}
	// Capacity: 126
	// # of read delays: 3
  // 0, 1, 125
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 123> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_124() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_125() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg7_stg7_update_0_write11_merged_banks_4_cache {
	// RAM Box: {[-5, 1931], [0, 1081]}
	// Capacity: 126
	// # of read delays: 3
  // 0, 1, 125
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 123> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_124() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_125() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg7_stg7_update_0_write12_merged_banks_4_cache {
	// RAM Box: {[-4, 1932], [0, 1081]}
	// Capacity: 126
	// # of read delays: 3
  // 0, 1, 125
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 123> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_124() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_125() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg7_stg7_update_0_write13_merged_banks_4_cache {
	// RAM Box: {[-3, 1933], [0, 1081]}
	// Capacity: 126
	// # of read delays: 3
  // 0, 1, 125
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 123> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_124() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_125() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg7_stg7_update_0_write14_merged_banks_4_cache {
	// RAM Box: {[-2, 1934], [0, 1081]}
	// Capacity: 126
	// # of read delays: 3
  // 0, 1, 125
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 123> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_124() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_125() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg7_stg7_update_0_write15_merged_banks_4_cache {
	// RAM Box: {[-17, 1935], [0, 1081]}
	// Capacity: 127
	// # of read delays: 4
  // 0, 1, 125, 126
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 123> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_124() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_125() {
		return f4;
	}

	inline hw_uint<16> peek_126() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg7_stg7_update_0_write2_merged_banks_4_cache {
	// RAM Box: {[-14, 1922], [0, 1081]}
	// Capacity: 126
	// # of read delays: 3
  // 0, 1, 125
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 123> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_124() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_125() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg7_stg7_update_0_write3_merged_banks_4_cache {
	// RAM Box: {[-13, 1923], [0, 1081]}
	// Capacity: 126
	// # of read delays: 3
  // 0, 1, 125
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 123> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_124() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_125() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg7_stg7_update_0_write4_merged_banks_4_cache {
	// RAM Box: {[-12, 1924], [0, 1081]}
	// Capacity: 126
	// # of read delays: 3
  // 0, 1, 125
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 123> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_124() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_125() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg7_stg7_update_0_write5_merged_banks_4_cache {
	// RAM Box: {[-11, 1925], [0, 1081]}
	// Capacity: 126
	// # of read delays: 3
  // 0, 1, 125
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 123> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_124() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_125() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg7_stg7_update_0_write6_merged_banks_4_cache {
	// RAM Box: {[-10, 1926], [0, 1081]}
	// Capacity: 126
	// # of read delays: 3
  // 0, 1, 125
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 123> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_124() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_125() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg7_stg7_update_0_write7_merged_banks_4_cache {
	// RAM Box: {[-9, 1927], [0, 1081]}
	// Capacity: 126
	// # of read delays: 3
  // 0, 1, 125
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 123> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_124() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_125() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg7_stg7_update_0_write8_merged_banks_4_cache {
	// RAM Box: {[-8, 1928], [0, 1081]}
	// Capacity: 126
	// # of read delays: 3
  // 0, 1, 125
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 123> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_124() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_125() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg7_stg7_update_0_write9_merged_banks_4_cache {
	// RAM Box: {[-7, 1929], [0, 1081]}
	// Capacity: 126
	// # of read delays: 3
  // 0, 1, 125
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 123> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_124() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_125() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg7_cache {
  // # of banks: 16
  stg7_stg7_update_0_write0_merged_banks_4_cache stg7_stg7_update_0_write0_merged_banks_4;
  stg7_stg7_update_0_write1_merged_banks_4_cache stg7_stg7_update_0_write1_merged_banks_4;
  stg7_stg7_update_0_write10_merged_banks_4_cache stg7_stg7_update_0_write10_merged_banks_4;
  stg7_stg7_update_0_write11_merged_banks_4_cache stg7_stg7_update_0_write11_merged_banks_4;
  stg7_stg7_update_0_write12_merged_banks_4_cache stg7_stg7_update_0_write12_merged_banks_4;
  stg7_stg7_update_0_write13_merged_banks_4_cache stg7_stg7_update_0_write13_merged_banks_4;
  stg7_stg7_update_0_write14_merged_banks_4_cache stg7_stg7_update_0_write14_merged_banks_4;
  stg7_stg7_update_0_write15_merged_banks_4_cache stg7_stg7_update_0_write15_merged_banks_4;
  stg7_stg7_update_0_write2_merged_banks_4_cache stg7_stg7_update_0_write2_merged_banks_4;
  stg7_stg7_update_0_write3_merged_banks_4_cache stg7_stg7_update_0_write3_merged_banks_4;
  stg7_stg7_update_0_write4_merged_banks_4_cache stg7_stg7_update_0_write4_merged_banks_4;
  stg7_stg7_update_0_write5_merged_banks_4_cache stg7_stg7_update_0_write5_merged_banks_4;
  stg7_stg7_update_0_write6_merged_banks_4_cache stg7_stg7_update_0_write6_merged_banks_4;
  stg7_stg7_update_0_write7_merged_banks_4_cache stg7_stg7_update_0_write7_merged_banks_4;
  stg7_stg7_update_0_write8_merged_banks_4_cache stg7_stg7_update_0_write8_merged_banks_4;
  stg7_stg7_update_0_write9_merged_banks_4_cache stg7_stg7_update_0_write9_merged_banks_4;
};



inline void stg7_stg7_update_0_write0_write(hw_uint<16>& stg7_stg7_update_0_write0, stg7_cache& stg7, int d0, int d1, int dynamic_address) {
  stg7.stg7_stg7_update_0_write0_merged_banks_4.push(stg7_stg7_update_0_write0);
}

inline void stg7_stg7_update_0_write1_write(hw_uint<16>& stg7_stg7_update_0_write1, stg7_cache& stg7, int d0, int d1, int dynamic_address) {
  stg7.stg7_stg7_update_0_write1_merged_banks_4.push(stg7_stg7_update_0_write1);
}

inline void stg7_stg7_update_0_write10_write(hw_uint<16>& stg7_stg7_update_0_write10, stg7_cache& stg7, int d0, int d1, int dynamic_address) {
  stg7.stg7_stg7_update_0_write10_merged_banks_4.push(stg7_stg7_update_0_write10);
}

inline void stg7_stg7_update_0_write11_write(hw_uint<16>& stg7_stg7_update_0_write11, stg7_cache& stg7, int d0, int d1, int dynamic_address) {
  stg7.stg7_stg7_update_0_write11_merged_banks_4.push(stg7_stg7_update_0_write11);
}

inline void stg7_stg7_update_0_write12_write(hw_uint<16>& stg7_stg7_update_0_write12, stg7_cache& stg7, int d0, int d1, int dynamic_address) {
  stg7.stg7_stg7_update_0_write12_merged_banks_4.push(stg7_stg7_update_0_write12);
}

inline void stg7_stg7_update_0_write13_write(hw_uint<16>& stg7_stg7_update_0_write13, stg7_cache& stg7, int d0, int d1, int dynamic_address) {
  stg7.stg7_stg7_update_0_write13_merged_banks_4.push(stg7_stg7_update_0_write13);
}

inline void stg7_stg7_update_0_write14_write(hw_uint<16>& stg7_stg7_update_0_write14, stg7_cache& stg7, int d0, int d1, int dynamic_address) {
  stg7.stg7_stg7_update_0_write14_merged_banks_4.push(stg7_stg7_update_0_write14);
}

inline void stg7_stg7_update_0_write15_write(hw_uint<16>& stg7_stg7_update_0_write15, stg7_cache& stg7, int d0, int d1, int dynamic_address) {
  stg7.stg7_stg7_update_0_write15_merged_banks_4.push(stg7_stg7_update_0_write15);
}

inline void stg7_stg7_update_0_write2_write(hw_uint<16>& stg7_stg7_update_0_write2, stg7_cache& stg7, int d0, int d1, int dynamic_address) {
  stg7.stg7_stg7_update_0_write2_merged_banks_4.push(stg7_stg7_update_0_write2);
}

inline void stg7_stg7_update_0_write3_write(hw_uint<16>& stg7_stg7_update_0_write3, stg7_cache& stg7, int d0, int d1, int dynamic_address) {
  stg7.stg7_stg7_update_0_write3_merged_banks_4.push(stg7_stg7_update_0_write3);
}

inline void stg7_stg7_update_0_write4_write(hw_uint<16>& stg7_stg7_update_0_write4, stg7_cache& stg7, int d0, int d1, int dynamic_address) {
  stg7.stg7_stg7_update_0_write4_merged_banks_4.push(stg7_stg7_update_0_write4);
}

inline void stg7_stg7_update_0_write5_write(hw_uint<16>& stg7_stg7_update_0_write5, stg7_cache& stg7, int d0, int d1, int dynamic_address) {
  stg7.stg7_stg7_update_0_write5_merged_banks_4.push(stg7_stg7_update_0_write5);
}

inline void stg7_stg7_update_0_write6_write(hw_uint<16>& stg7_stg7_update_0_write6, stg7_cache& stg7, int d0, int d1, int dynamic_address) {
  stg7.stg7_stg7_update_0_write6_merged_banks_4.push(stg7_stg7_update_0_write6);
}

inline void stg7_stg7_update_0_write7_write(hw_uint<16>& stg7_stg7_update_0_write7, stg7_cache& stg7, int d0, int d1, int dynamic_address) {
  stg7.stg7_stg7_update_0_write7_merged_banks_4.push(stg7_stg7_update_0_write7);
}

inline void stg7_stg7_update_0_write8_write(hw_uint<16>& stg7_stg7_update_0_write8, stg7_cache& stg7, int d0, int d1, int dynamic_address) {
  stg7.stg7_stg7_update_0_write8_merged_banks_4.push(stg7_stg7_update_0_write8);
}

inline void stg7_stg7_update_0_write9_write(hw_uint<16>& stg7_stg7_update_0_write9, stg7_cache& stg7, int d0, int d1, int dynamic_address) {
  stg7.stg7_stg7_update_0_write9_merged_banks_4.push(stg7_stg7_update_0_write9);
}

inline hw_uint<16> stg8_rd0_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd0 read pattern: { stg8_update_0[d0, d1] -> stg7[-1 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write15 = stg7.stg7_stg7_update_0_write15_merged_banks_4.peek_126();
  return value_stg7_stg7_update_0_write15;
  return 0;
}

inline hw_uint<16> stg8_rd1_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd1 read pattern: { stg8_update_0[d0, d1] -> stg7[16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write0 = stg7.stg7_stg7_update_0_write0_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write0;
  return 0;
}

inline hw_uint<16> stg8_rd10_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd10 read pattern: { stg8_update_0[d0, d1] -> stg7[2 + 16d0, 1 + d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write2 = stg7.stg7_stg7_update_0_write2_merged_banks_4.peek_1();
  return value_stg7_stg7_update_0_write2;
  return 0;
}

inline hw_uint<16> stg8_rd11_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd11 read pattern: { stg8_update_0[d0, d1] -> stg7[3 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write3 = stg7.stg7_stg7_update_0_write3_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write3;
  return 0;
}

inline hw_uint<16> stg8_rd12_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd12 read pattern: { stg8_update_0[d0, d1] -> stg7[2 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write2 = stg7.stg7_stg7_update_0_write2_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write2;
  return 0;
}

inline hw_uint<16> stg8_rd13_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd13 read pattern: { stg8_update_0[d0, d1] -> stg7[3 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write3 = stg7.stg7_stg7_update_0_write3_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write3;
  return 0;
}

inline hw_uint<16> stg8_rd14_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd14 read pattern: { stg8_update_0[d0, d1] -> stg7[3 + 16d0, 1 + d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write3 = stg7.stg7_stg7_update_0_write3_merged_banks_4.peek_1();
  return value_stg7_stg7_update_0_write3;
  return 0;
}

inline hw_uint<16> stg8_rd15_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd15 read pattern: { stg8_update_0[d0, d1] -> stg7[4 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write4 = stg7.stg7_stg7_update_0_write4_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write4;
  return 0;
}

inline hw_uint<16> stg8_rd16_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd16 read pattern: { stg8_update_0[d0, d1] -> stg7[3 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write3 = stg7.stg7_stg7_update_0_write3_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write3;
  return 0;
}

inline hw_uint<16> stg8_rd17_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd17 read pattern: { stg8_update_0[d0, d1] -> stg7[4 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write4 = stg7.stg7_stg7_update_0_write4_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write4;
  return 0;
}

inline hw_uint<16> stg8_rd18_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd18 read pattern: { stg8_update_0[d0, d1] -> stg7[4 + 16d0, 1 + d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write4 = stg7.stg7_stg7_update_0_write4_merged_banks_4.peek_1();
  return value_stg7_stg7_update_0_write4;
  return 0;
}

inline hw_uint<16> stg8_rd19_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd19 read pattern: { stg8_update_0[d0, d1] -> stg7[5 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write5 = stg7.stg7_stg7_update_0_write5_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write5;
  return 0;
}

inline hw_uint<16> stg8_rd2_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd2 read pattern: { stg8_update_0[d0, d1] -> stg7[16d0, 1 + d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write0 = stg7.stg7_stg7_update_0_write0_merged_banks_4.peek_1();
  return value_stg7_stg7_update_0_write0;
  return 0;
}

inline hw_uint<16> stg8_rd20_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd20 read pattern: { stg8_update_0[d0, d1] -> stg7[4 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write4 = stg7.stg7_stg7_update_0_write4_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write4;
  return 0;
}

inline hw_uint<16> stg8_rd21_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd21 read pattern: { stg8_update_0[d0, d1] -> stg7[5 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write5 = stg7.stg7_stg7_update_0_write5_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write5;
  return 0;
}

inline hw_uint<16> stg8_rd22_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd22 read pattern: { stg8_update_0[d0, d1] -> stg7[5 + 16d0, 1 + d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write5 = stg7.stg7_stg7_update_0_write5_merged_banks_4.peek_1();
  return value_stg7_stg7_update_0_write5;
  return 0;
}

inline hw_uint<16> stg8_rd23_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd23 read pattern: { stg8_update_0[d0, d1] -> stg7[6 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write6 = stg7.stg7_stg7_update_0_write6_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write6;
  return 0;
}

inline hw_uint<16> stg8_rd24_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd24 read pattern: { stg8_update_0[d0, d1] -> stg7[5 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write5 = stg7.stg7_stg7_update_0_write5_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write5;
  return 0;
}

inline hw_uint<16> stg8_rd25_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd25 read pattern: { stg8_update_0[d0, d1] -> stg7[6 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write6 = stg7.stg7_stg7_update_0_write6_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write6;
  return 0;
}

inline hw_uint<16> stg8_rd26_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd26 read pattern: { stg8_update_0[d0, d1] -> stg7[6 + 16d0, 1 + d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write6 = stg7.stg7_stg7_update_0_write6_merged_banks_4.peek_1();
  return value_stg7_stg7_update_0_write6;
  return 0;
}

inline hw_uint<16> stg8_rd27_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd27 read pattern: { stg8_update_0[d0, d1] -> stg7[7 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write7 = stg7.stg7_stg7_update_0_write7_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write7;
  return 0;
}

inline hw_uint<16> stg8_rd28_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd28 read pattern: { stg8_update_0[d0, d1] -> stg7[6 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write6 = stg7.stg7_stg7_update_0_write6_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write6;
  return 0;
}

inline hw_uint<16> stg8_rd29_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd29 read pattern: { stg8_update_0[d0, d1] -> stg7[7 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write7 = stg7.stg7_stg7_update_0_write7_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write7;
  return 0;
}

inline hw_uint<16> stg8_rd3_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd3 read pattern: { stg8_update_0[d0, d1] -> stg7[1 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write1 = stg7.stg7_stg7_update_0_write1_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write1;
  return 0;
}

inline hw_uint<16> stg8_rd30_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd30 read pattern: { stg8_update_0[d0, d1] -> stg7[7 + 16d0, 1 + d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write7 = stg7.stg7_stg7_update_0_write7_merged_banks_4.peek_1();
  return value_stg7_stg7_update_0_write7;
  return 0;
}

inline hw_uint<16> stg8_rd31_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd31 read pattern: { stg8_update_0[d0, d1] -> stg7[8 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write8 = stg7.stg7_stg7_update_0_write8_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write8;
  return 0;
}

inline hw_uint<16> stg8_rd32_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd32 read pattern: { stg8_update_0[d0, d1] -> stg7[7 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write7 = stg7.stg7_stg7_update_0_write7_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write7;
  return 0;
}

inline hw_uint<16> stg8_rd33_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd33 read pattern: { stg8_update_0[d0, d1] -> stg7[8 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write8 = stg7.stg7_stg7_update_0_write8_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write8;
  return 0;
}

inline hw_uint<16> stg8_rd34_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd34 read pattern: { stg8_update_0[d0, d1] -> stg7[8 + 16d0, 1 + d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write8 = stg7.stg7_stg7_update_0_write8_merged_banks_4.peek_1();
  return value_stg7_stg7_update_0_write8;
  return 0;
}

inline hw_uint<16> stg8_rd35_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd35 read pattern: { stg8_update_0[d0, d1] -> stg7[9 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write9 = stg7.stg7_stg7_update_0_write9_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write9;
  return 0;
}

inline hw_uint<16> stg8_rd36_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd36 read pattern: { stg8_update_0[d0, d1] -> stg7[8 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write8 = stg7.stg7_stg7_update_0_write8_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write8;
  return 0;
}

inline hw_uint<16> stg8_rd37_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd37 read pattern: { stg8_update_0[d0, d1] -> stg7[9 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write9 = stg7.stg7_stg7_update_0_write9_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write9;
  return 0;
}

inline hw_uint<16> stg8_rd38_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd38 read pattern: { stg8_update_0[d0, d1] -> stg7[9 + 16d0, 1 + d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write9 = stg7.stg7_stg7_update_0_write9_merged_banks_4.peek_1();
  return value_stg7_stg7_update_0_write9;
  return 0;
}

inline hw_uint<16> stg8_rd39_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd39 read pattern: { stg8_update_0[d0, d1] -> stg7[10 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write10 = stg7.stg7_stg7_update_0_write10_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write10;
  return 0;
}

inline hw_uint<16> stg8_rd4_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd4 read pattern: { stg8_update_0[d0, d1] -> stg7[16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write0 = stg7.stg7_stg7_update_0_write0_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write0;
  return 0;
}

inline hw_uint<16> stg8_rd40_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd40 read pattern: { stg8_update_0[d0, d1] -> stg7[9 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write9 = stg7.stg7_stg7_update_0_write9_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write9;
  return 0;
}

inline hw_uint<16> stg8_rd41_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd41 read pattern: { stg8_update_0[d0, d1] -> stg7[10 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write10 = stg7.stg7_stg7_update_0_write10_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write10;
  return 0;
}

inline hw_uint<16> stg8_rd42_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd42 read pattern: { stg8_update_0[d0, d1] -> stg7[10 + 16d0, 1 + d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write10 = stg7.stg7_stg7_update_0_write10_merged_banks_4.peek_1();
  return value_stg7_stg7_update_0_write10;
  return 0;
}

inline hw_uint<16> stg8_rd43_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd43 read pattern: { stg8_update_0[d0, d1] -> stg7[11 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write11 = stg7.stg7_stg7_update_0_write11_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write11;
  return 0;
}

inline hw_uint<16> stg8_rd44_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd44 read pattern: { stg8_update_0[d0, d1] -> stg7[10 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write10 = stg7.stg7_stg7_update_0_write10_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write10;
  return 0;
}

inline hw_uint<16> stg8_rd45_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd45 read pattern: { stg8_update_0[d0, d1] -> stg7[11 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write11 = stg7.stg7_stg7_update_0_write11_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write11;
  return 0;
}

inline hw_uint<16> stg8_rd46_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd46 read pattern: { stg8_update_0[d0, d1] -> stg7[11 + 16d0, 1 + d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write11 = stg7.stg7_stg7_update_0_write11_merged_banks_4.peek_1();
  return value_stg7_stg7_update_0_write11;
  return 0;
}

inline hw_uint<16> stg8_rd47_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd47 read pattern: { stg8_update_0[d0, d1] -> stg7[12 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write12 = stg7.stg7_stg7_update_0_write12_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write12;
  return 0;
}

inline hw_uint<16> stg8_rd48_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd48 read pattern: { stg8_update_0[d0, d1] -> stg7[11 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write11 = stg7.stg7_stg7_update_0_write11_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write11;
  return 0;
}

inline hw_uint<16> stg8_rd49_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd49 read pattern: { stg8_update_0[d0, d1] -> stg7[12 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write12 = stg7.stg7_stg7_update_0_write12_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write12;
  return 0;
}

inline hw_uint<16> stg8_rd5_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd5 read pattern: { stg8_update_0[d0, d1] -> stg7[1 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write1 = stg7.stg7_stg7_update_0_write1_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write1;
  return 0;
}

inline hw_uint<16> stg8_rd50_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd50 read pattern: { stg8_update_0[d0, d1] -> stg7[12 + 16d0, 1 + d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write12 = stg7.stg7_stg7_update_0_write12_merged_banks_4.peek_1();
  return value_stg7_stg7_update_0_write12;
  return 0;
}

inline hw_uint<16> stg8_rd51_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd51 read pattern: { stg8_update_0[d0, d1] -> stg7[13 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write13 = stg7.stg7_stg7_update_0_write13_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write13;
  return 0;
}

inline hw_uint<16> stg8_rd52_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd52 read pattern: { stg8_update_0[d0, d1] -> stg7[12 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write12 = stg7.stg7_stg7_update_0_write12_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write12;
  return 0;
}

inline hw_uint<16> stg8_rd53_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd53 read pattern: { stg8_update_0[d0, d1] -> stg7[13 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write13 = stg7.stg7_stg7_update_0_write13_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write13;
  return 0;
}

inline hw_uint<16> stg8_rd54_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd54 read pattern: { stg8_update_0[d0, d1] -> stg7[13 + 16d0, 1 + d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write13 = stg7.stg7_stg7_update_0_write13_merged_banks_4.peek_1();
  return value_stg7_stg7_update_0_write13;
  return 0;
}

inline hw_uint<16> stg8_rd55_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd55 read pattern: { stg8_update_0[d0, d1] -> stg7[14 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write14 = stg7.stg7_stg7_update_0_write14_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write14;
  return 0;
}

inline hw_uint<16> stg8_rd56_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd56 read pattern: { stg8_update_0[d0, d1] -> stg7[13 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write13 = stg7.stg7_stg7_update_0_write13_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write13;
  return 0;
}

inline hw_uint<16> stg8_rd57_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd57 read pattern: { stg8_update_0[d0, d1] -> stg7[14 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write14 = stg7.stg7_stg7_update_0_write14_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write14;
  return 0;
}

inline hw_uint<16> stg8_rd58_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd58 read pattern: { stg8_update_0[d0, d1] -> stg7[14 + 16d0, 1 + d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write14 = stg7.stg7_stg7_update_0_write14_merged_banks_4.peek_1();
  return value_stg7_stg7_update_0_write14;
  return 0;
}

inline hw_uint<16> stg8_rd59_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd59 read pattern: { stg8_update_0[d0, d1] -> stg7[15 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write15 = stg7.stg7_stg7_update_0_write15_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write15;
  return 0;
}

inline hw_uint<16> stg8_rd6_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd6 read pattern: { stg8_update_0[d0, d1] -> stg7[1 + 16d0, 1 + d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write1 = stg7.stg7_stg7_update_0_write1_merged_banks_4.peek_1();
  return value_stg7_stg7_update_0_write1;
  return 0;
}

inline hw_uint<16> stg8_rd60_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd60 read pattern: { stg8_update_0[d0, d1] -> stg7[14 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write14 = stg7.stg7_stg7_update_0_write14_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write14;
  return 0;
}

inline hw_uint<16> stg8_rd61_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd61 read pattern: { stg8_update_0[d0, d1] -> stg7[15 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write15 = stg7.stg7_stg7_update_0_write15_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write15;
  return 0;
}

inline hw_uint<16> stg8_rd62_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd62 read pattern: { stg8_update_0[d0, d1] -> stg7[15 + 16d0, 1 + d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write15 = stg7.stg7_stg7_update_0_write15_merged_banks_4.peek_1();
  return value_stg7_stg7_update_0_write15;
  return 0;
}

inline hw_uint<16> stg8_rd63_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd63 read pattern: { stg8_update_0[d0, d1] -> stg7[16 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write0 = stg7.stg7_stg7_update_0_write0_merged_banks_4.peek_124();
  return value_stg7_stg7_update_0_write0;
  return 0;
}

inline hw_uint<16> stg8_rd7_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd7 read pattern: { stg8_update_0[d0, d1] -> stg7[2 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write2 = stg7.stg7_stg7_update_0_write2_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write2;
  return 0;
}

inline hw_uint<16> stg8_rd8_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd8 read pattern: { stg8_update_0[d0, d1] -> stg7[1 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write1 = stg7.stg7_stg7_update_0_write1_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write1;
  return 0;
}

inline hw_uint<16> stg8_rd9_select(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg8_rd9 read pattern: { stg8_update_0[d0, d1] -> stg7[2 + 16d0, d1] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Read schedule : { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  // Write schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
  auto value_stg7_stg7_update_0_write2 = stg7.stg7_stg7_update_0_write2_merged_banks_4.peek_125();
  return value_stg7_stg7_update_0_write2;
  return 0;
}

// # of bundles = 2
// stg7_update_0_write
//	stg7_stg7_update_0_write0
//	stg7_stg7_update_0_write1
//	stg7_stg7_update_0_write2
//	stg7_stg7_update_0_write3
//	stg7_stg7_update_0_write4
//	stg7_stg7_update_0_write5
//	stg7_stg7_update_0_write6
//	stg7_stg7_update_0_write7
//	stg7_stg7_update_0_write8
//	stg7_stg7_update_0_write9
//	stg7_stg7_update_0_write10
//	stg7_stg7_update_0_write11
//	stg7_stg7_update_0_write12
//	stg7_stg7_update_0_write13
//	stg7_stg7_update_0_write14
//	stg7_stg7_update_0_write15
inline void stg7_stg7_update_0_write_bundle_write(hw_uint<256>& stg7_update_0_write, stg7_cache& stg7, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg7_stg7_update_0_write0_res = stg7_update_0_write.extract<0, 15>();
	stg7_stg7_update_0_write0_write(stg7_stg7_update_0_write0_res, stg7, d0, d1, dynamic_address);
	hw_uint<16> stg7_stg7_update_0_write1_res = stg7_update_0_write.extract<16, 31>();
	stg7_stg7_update_0_write1_write(stg7_stg7_update_0_write1_res, stg7, d0, d1, dynamic_address);
	hw_uint<16> stg7_stg7_update_0_write2_res = stg7_update_0_write.extract<32, 47>();
	stg7_stg7_update_0_write2_write(stg7_stg7_update_0_write2_res, stg7, d0, d1, dynamic_address);
	hw_uint<16> stg7_stg7_update_0_write3_res = stg7_update_0_write.extract<48, 63>();
	stg7_stg7_update_0_write3_write(stg7_stg7_update_0_write3_res, stg7, d0, d1, dynamic_address);
	hw_uint<16> stg7_stg7_update_0_write4_res = stg7_update_0_write.extract<64, 79>();
	stg7_stg7_update_0_write4_write(stg7_stg7_update_0_write4_res, stg7, d0, d1, dynamic_address);
	hw_uint<16> stg7_stg7_update_0_write5_res = stg7_update_0_write.extract<80, 95>();
	stg7_stg7_update_0_write5_write(stg7_stg7_update_0_write5_res, stg7, d0, d1, dynamic_address);
	hw_uint<16> stg7_stg7_update_0_write6_res = stg7_update_0_write.extract<96, 111>();
	stg7_stg7_update_0_write6_write(stg7_stg7_update_0_write6_res, stg7, d0, d1, dynamic_address);
	hw_uint<16> stg7_stg7_update_0_write7_res = stg7_update_0_write.extract<112, 127>();
	stg7_stg7_update_0_write7_write(stg7_stg7_update_0_write7_res, stg7, d0, d1, dynamic_address);
	hw_uint<16> stg7_stg7_update_0_write8_res = stg7_update_0_write.extract<128, 143>();
	stg7_stg7_update_0_write8_write(stg7_stg7_update_0_write8_res, stg7, d0, d1, dynamic_address);
	hw_uint<16> stg7_stg7_update_0_write9_res = stg7_update_0_write.extract<144, 159>();
	stg7_stg7_update_0_write9_write(stg7_stg7_update_0_write9_res, stg7, d0, d1, dynamic_address);
	hw_uint<16> stg7_stg7_update_0_write10_res = stg7_update_0_write.extract<160, 175>();
	stg7_stg7_update_0_write10_write(stg7_stg7_update_0_write10_res, stg7, d0, d1, dynamic_address);
	hw_uint<16> stg7_stg7_update_0_write11_res = stg7_update_0_write.extract<176, 191>();
	stg7_stg7_update_0_write11_write(stg7_stg7_update_0_write11_res, stg7, d0, d1, dynamic_address);
	hw_uint<16> stg7_stg7_update_0_write12_res = stg7_update_0_write.extract<192, 207>();
	stg7_stg7_update_0_write12_write(stg7_stg7_update_0_write12_res, stg7, d0, d1, dynamic_address);
	hw_uint<16> stg7_stg7_update_0_write13_res = stg7_update_0_write.extract<208, 223>();
	stg7_stg7_update_0_write13_write(stg7_stg7_update_0_write13_res, stg7, d0, d1, dynamic_address);
	hw_uint<16> stg7_stg7_update_0_write14_res = stg7_update_0_write.extract<224, 239>();
	stg7_stg7_update_0_write14_write(stg7_stg7_update_0_write14_res, stg7, d0, d1, dynamic_address);
	hw_uint<16> stg7_stg7_update_0_write15_res = stg7_update_0_write.extract<240, 255>();
	stg7_stg7_update_0_write15_write(stg7_stg7_update_0_write15_res, stg7, d0, d1, dynamic_address);
}

// stg8_update_0_read
//	stg8_rd0
//	stg8_rd1
//	stg8_rd2
//	stg8_rd3
//	stg8_rd4
//	stg8_rd5
//	stg8_rd6
//	stg8_rd7
//	stg8_rd8
//	stg8_rd9
//	stg8_rd10
//	stg8_rd11
//	stg8_rd12
//	stg8_rd13
//	stg8_rd14
//	stg8_rd15
//	stg8_rd16
//	stg8_rd17
//	stg8_rd18
//	stg8_rd19
//	stg8_rd20
//	stg8_rd21
//	stg8_rd22
//	stg8_rd23
//	stg8_rd24
//	stg8_rd25
//	stg8_rd26
//	stg8_rd27
//	stg8_rd28
//	stg8_rd29
//	stg8_rd30
//	stg8_rd31
//	stg8_rd32
//	stg8_rd33
//	stg8_rd34
//	stg8_rd35
//	stg8_rd36
//	stg8_rd37
//	stg8_rd38
//	stg8_rd39
//	stg8_rd40
//	stg8_rd41
//	stg8_rd42
//	stg8_rd43
//	stg8_rd44
//	stg8_rd45
//	stg8_rd46
//	stg8_rd47
//	stg8_rd48
//	stg8_rd49
//	stg8_rd50
//	stg8_rd51
//	stg8_rd52
//	stg8_rd53
//	stg8_rd54
//	stg8_rd55
//	stg8_rd56
//	stg8_rd57
//	stg8_rd58
//	stg8_rd59
//	stg8_rd60
//	stg8_rd61
//	stg8_rd62
//	stg8_rd63
inline hw_uint<1024> stg7_stg8_update_0_read_bundle_read(stg7_cache& stg7, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 64
    // stg8_rd0
    // stg8_rd1
    // stg8_rd2
    // stg8_rd3
    // stg8_rd4
    // stg8_rd5
    // stg8_rd6
    // stg8_rd7
    // stg8_rd8
    // stg8_rd9
    // stg8_rd10
    // stg8_rd11
    // stg8_rd12
    // stg8_rd13
    // stg8_rd14
    // stg8_rd15
    // stg8_rd16
    // stg8_rd17
    // stg8_rd18
    // stg8_rd19
    // stg8_rd20
    // stg8_rd21
    // stg8_rd22
    // stg8_rd23
    // stg8_rd24
    // stg8_rd25
    // stg8_rd26
    // stg8_rd27
    // stg8_rd28
    // stg8_rd29
    // stg8_rd30
    // stg8_rd31
    // stg8_rd32
    // stg8_rd33
    // stg8_rd34
    // stg8_rd35
    // stg8_rd36
    // stg8_rd37
    // stg8_rd38
    // stg8_rd39
    // stg8_rd40
    // stg8_rd41
    // stg8_rd42
    // stg8_rd43
    // stg8_rd44
    // stg8_rd45
    // stg8_rd46
    // stg8_rd47
    // stg8_rd48
    // stg8_rd49
    // stg8_rd50
    // stg8_rd51
    // stg8_rd52
    // stg8_rd53
    // stg8_rd54
    // stg8_rd55
    // stg8_rd56
    // stg8_rd57
    // stg8_rd58
    // stg8_rd59
    // stg8_rd60
    // stg8_rd61
    // stg8_rd62
    // stg8_rd63

	hw_uint<1024> result;
	hw_uint<16> stg8_rd0_res = stg8_rd0_select(stg7, d0, d1, dynamic_address);
	set_at<0, 1024>(result, stg8_rd0_res);
	hw_uint<16> stg8_rd1_res = stg8_rd1_select(stg7, d0, d1, dynamic_address);
	set_at<16, 1024>(result, stg8_rd1_res);
	hw_uint<16> stg8_rd2_res = stg8_rd2_select(stg7, d0, d1, dynamic_address);
	set_at<32, 1024>(result, stg8_rd2_res);
	hw_uint<16> stg8_rd3_res = stg8_rd3_select(stg7, d0, d1, dynamic_address);
	set_at<48, 1024>(result, stg8_rd3_res);
	hw_uint<16> stg8_rd4_res = stg8_rd4_select(stg7, d0, d1, dynamic_address);
	set_at<64, 1024>(result, stg8_rd4_res);
	hw_uint<16> stg8_rd5_res = stg8_rd5_select(stg7, d0, d1, dynamic_address);
	set_at<80, 1024>(result, stg8_rd5_res);
	hw_uint<16> stg8_rd6_res = stg8_rd6_select(stg7, d0, d1, dynamic_address);
	set_at<96, 1024>(result, stg8_rd6_res);
	hw_uint<16> stg8_rd7_res = stg8_rd7_select(stg7, d0, d1, dynamic_address);
	set_at<112, 1024>(result, stg8_rd7_res);
	hw_uint<16> stg8_rd8_res = stg8_rd8_select(stg7, d0, d1, dynamic_address);
	set_at<128, 1024>(result, stg8_rd8_res);
	hw_uint<16> stg8_rd9_res = stg8_rd9_select(stg7, d0, d1, dynamic_address);
	set_at<144, 1024>(result, stg8_rd9_res);
	hw_uint<16> stg8_rd10_res = stg8_rd10_select(stg7, d0, d1, dynamic_address);
	set_at<160, 1024>(result, stg8_rd10_res);
	hw_uint<16> stg8_rd11_res = stg8_rd11_select(stg7, d0, d1, dynamic_address);
	set_at<176, 1024>(result, stg8_rd11_res);
	hw_uint<16> stg8_rd12_res = stg8_rd12_select(stg7, d0, d1, dynamic_address);
	set_at<192, 1024>(result, stg8_rd12_res);
	hw_uint<16> stg8_rd13_res = stg8_rd13_select(stg7, d0, d1, dynamic_address);
	set_at<208, 1024>(result, stg8_rd13_res);
	hw_uint<16> stg8_rd14_res = stg8_rd14_select(stg7, d0, d1, dynamic_address);
	set_at<224, 1024>(result, stg8_rd14_res);
	hw_uint<16> stg8_rd15_res = stg8_rd15_select(stg7, d0, d1, dynamic_address);
	set_at<240, 1024>(result, stg8_rd15_res);
	hw_uint<16> stg8_rd16_res = stg8_rd16_select(stg7, d0, d1, dynamic_address);
	set_at<256, 1024>(result, stg8_rd16_res);
	hw_uint<16> stg8_rd17_res = stg8_rd17_select(stg7, d0, d1, dynamic_address);
	set_at<272, 1024>(result, stg8_rd17_res);
	hw_uint<16> stg8_rd18_res = stg8_rd18_select(stg7, d0, d1, dynamic_address);
	set_at<288, 1024>(result, stg8_rd18_res);
	hw_uint<16> stg8_rd19_res = stg8_rd19_select(stg7, d0, d1, dynamic_address);
	set_at<304, 1024>(result, stg8_rd19_res);
	hw_uint<16> stg8_rd20_res = stg8_rd20_select(stg7, d0, d1, dynamic_address);
	set_at<320, 1024>(result, stg8_rd20_res);
	hw_uint<16> stg8_rd21_res = stg8_rd21_select(stg7, d0, d1, dynamic_address);
	set_at<336, 1024>(result, stg8_rd21_res);
	hw_uint<16> stg8_rd22_res = stg8_rd22_select(stg7, d0, d1, dynamic_address);
	set_at<352, 1024>(result, stg8_rd22_res);
	hw_uint<16> stg8_rd23_res = stg8_rd23_select(stg7, d0, d1, dynamic_address);
	set_at<368, 1024>(result, stg8_rd23_res);
	hw_uint<16> stg8_rd24_res = stg8_rd24_select(stg7, d0, d1, dynamic_address);
	set_at<384, 1024>(result, stg8_rd24_res);
	hw_uint<16> stg8_rd25_res = stg8_rd25_select(stg7, d0, d1, dynamic_address);
	set_at<400, 1024>(result, stg8_rd25_res);
	hw_uint<16> stg8_rd26_res = stg8_rd26_select(stg7, d0, d1, dynamic_address);
	set_at<416, 1024>(result, stg8_rd26_res);
	hw_uint<16> stg8_rd27_res = stg8_rd27_select(stg7, d0, d1, dynamic_address);
	set_at<432, 1024>(result, stg8_rd27_res);
	hw_uint<16> stg8_rd28_res = stg8_rd28_select(stg7, d0, d1, dynamic_address);
	set_at<448, 1024>(result, stg8_rd28_res);
	hw_uint<16> stg8_rd29_res = stg8_rd29_select(stg7, d0, d1, dynamic_address);
	set_at<464, 1024>(result, stg8_rd29_res);
	hw_uint<16> stg8_rd30_res = stg8_rd30_select(stg7, d0, d1, dynamic_address);
	set_at<480, 1024>(result, stg8_rd30_res);
	hw_uint<16> stg8_rd31_res = stg8_rd31_select(stg7, d0, d1, dynamic_address);
	set_at<496, 1024>(result, stg8_rd31_res);
	hw_uint<16> stg8_rd32_res = stg8_rd32_select(stg7, d0, d1, dynamic_address);
	set_at<512, 1024>(result, stg8_rd32_res);
	hw_uint<16> stg8_rd33_res = stg8_rd33_select(stg7, d0, d1, dynamic_address);
	set_at<528, 1024>(result, stg8_rd33_res);
	hw_uint<16> stg8_rd34_res = stg8_rd34_select(stg7, d0, d1, dynamic_address);
	set_at<544, 1024>(result, stg8_rd34_res);
	hw_uint<16> stg8_rd35_res = stg8_rd35_select(stg7, d0, d1, dynamic_address);
	set_at<560, 1024>(result, stg8_rd35_res);
	hw_uint<16> stg8_rd36_res = stg8_rd36_select(stg7, d0, d1, dynamic_address);
	set_at<576, 1024>(result, stg8_rd36_res);
	hw_uint<16> stg8_rd37_res = stg8_rd37_select(stg7, d0, d1, dynamic_address);
	set_at<592, 1024>(result, stg8_rd37_res);
	hw_uint<16> stg8_rd38_res = stg8_rd38_select(stg7, d0, d1, dynamic_address);
	set_at<608, 1024>(result, stg8_rd38_res);
	hw_uint<16> stg8_rd39_res = stg8_rd39_select(stg7, d0, d1, dynamic_address);
	set_at<624, 1024>(result, stg8_rd39_res);
	hw_uint<16> stg8_rd40_res = stg8_rd40_select(stg7, d0, d1, dynamic_address);
	set_at<640, 1024>(result, stg8_rd40_res);
	hw_uint<16> stg8_rd41_res = stg8_rd41_select(stg7, d0, d1, dynamic_address);
	set_at<656, 1024>(result, stg8_rd41_res);
	hw_uint<16> stg8_rd42_res = stg8_rd42_select(stg7, d0, d1, dynamic_address);
	set_at<672, 1024>(result, stg8_rd42_res);
	hw_uint<16> stg8_rd43_res = stg8_rd43_select(stg7, d0, d1, dynamic_address);
	set_at<688, 1024>(result, stg8_rd43_res);
	hw_uint<16> stg8_rd44_res = stg8_rd44_select(stg7, d0, d1, dynamic_address);
	set_at<704, 1024>(result, stg8_rd44_res);
	hw_uint<16> stg8_rd45_res = stg8_rd45_select(stg7, d0, d1, dynamic_address);
	set_at<720, 1024>(result, stg8_rd45_res);
	hw_uint<16> stg8_rd46_res = stg8_rd46_select(stg7, d0, d1, dynamic_address);
	set_at<736, 1024>(result, stg8_rd46_res);
	hw_uint<16> stg8_rd47_res = stg8_rd47_select(stg7, d0, d1, dynamic_address);
	set_at<752, 1024>(result, stg8_rd47_res);
	hw_uint<16> stg8_rd48_res = stg8_rd48_select(stg7, d0, d1, dynamic_address);
	set_at<768, 1024>(result, stg8_rd48_res);
	hw_uint<16> stg8_rd49_res = stg8_rd49_select(stg7, d0, d1, dynamic_address);
	set_at<784, 1024>(result, stg8_rd49_res);
	hw_uint<16> stg8_rd50_res = stg8_rd50_select(stg7, d0, d1, dynamic_address);
	set_at<800, 1024>(result, stg8_rd50_res);
	hw_uint<16> stg8_rd51_res = stg8_rd51_select(stg7, d0, d1, dynamic_address);
	set_at<816, 1024>(result, stg8_rd51_res);
	hw_uint<16> stg8_rd52_res = stg8_rd52_select(stg7, d0, d1, dynamic_address);
	set_at<832, 1024>(result, stg8_rd52_res);
	hw_uint<16> stg8_rd53_res = stg8_rd53_select(stg7, d0, d1, dynamic_address);
	set_at<848, 1024>(result, stg8_rd53_res);
	hw_uint<16> stg8_rd54_res = stg8_rd54_select(stg7, d0, d1, dynamic_address);
	set_at<864, 1024>(result, stg8_rd54_res);
	hw_uint<16> stg8_rd55_res = stg8_rd55_select(stg7, d0, d1, dynamic_address);
	set_at<880, 1024>(result, stg8_rd55_res);
	hw_uint<16> stg8_rd56_res = stg8_rd56_select(stg7, d0, d1, dynamic_address);
	set_at<896, 1024>(result, stg8_rd56_res);
	hw_uint<16> stg8_rd57_res = stg8_rd57_select(stg7, d0, d1, dynamic_address);
	set_at<912, 1024>(result, stg8_rd57_res);
	hw_uint<16> stg8_rd58_res = stg8_rd58_select(stg7, d0, d1, dynamic_address);
	set_at<928, 1024>(result, stg8_rd58_res);
	hw_uint<16> stg8_rd59_res = stg8_rd59_select(stg7, d0, d1, dynamic_address);
	set_at<944, 1024>(result, stg8_rd59_res);
	hw_uint<16> stg8_rd60_res = stg8_rd60_select(stg7, d0, d1, dynamic_address);
	set_at<960, 1024>(result, stg8_rd60_res);
	hw_uint<16> stg8_rd61_res = stg8_rd61_select(stg7, d0, d1, dynamic_address);
	set_at<976, 1024>(result, stg8_rd61_res);
	hw_uint<16> stg8_rd62_res = stg8_rd62_select(stg7, d0, d1, dynamic_address);
	set_at<992, 1024>(result, stg8_rd62_res);
	hw_uint<16> stg8_rd63_res = stg8_rd63_select(stg7, d0, d1, dynamic_address);
	set_at<1008, 1024>(result, stg8_rd63_res);
	return result;
}

struct stg8_stg8_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[0, 1920], [0, 1079]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 122, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_122() {
		return f4;
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg8_stg8_update_0_write1_merged_banks_4_cache {
	// RAM Box: {[1, 1905], [0, 1080]}
	// Capacity: 124
	// # of read delays: 3
  // 0, 1, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 121> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_123() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 121
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 121 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg8_stg8_update_0_write10_merged_banks_4_cache {
	// RAM Box: {[10, 1914], [0, 1080]}
	// Capacity: 124
	// # of read delays: 3
  // 0, 1, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 121> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_123() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 121
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 121 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg8_stg8_update_0_write11_merged_banks_4_cache {
	// RAM Box: {[11, 1915], [0, 1080]}
	// Capacity: 124
	// # of read delays: 3
  // 0, 1, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 121> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_123() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 121
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 121 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg8_stg8_update_0_write12_merged_banks_4_cache {
	// RAM Box: {[12, 1916], [0, 1080]}
	// Capacity: 124
	// # of read delays: 3
  // 0, 1, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 121> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_123() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 121
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 121 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg8_stg8_update_0_write13_merged_banks_4_cache {
	// RAM Box: {[13, 1917], [0, 1080]}
	// Capacity: 124
	// # of read delays: 3
  // 0, 1, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 121> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_123() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 121
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 121 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg8_stg8_update_0_write14_merged_banks_4_cache {
	// RAM Box: {[14, 1918], [0, 1080]}
	// Capacity: 124
	// # of read delays: 3
  // 0, 1, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 121> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_123() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 121
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 121 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg8_stg8_update_0_write15_merged_banks_4_cache {
	// RAM Box: {[-1, 1919], [0, 1080]}
	// Capacity: 125
	// # of read delays: 4
  // 0, 1, 123, 124
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 121> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_123() {
		return f4;
	}

	inline hw_uint<16> peek_124() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 121
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 121 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg8_stg8_update_0_write2_merged_banks_4_cache {
	// RAM Box: {[2, 1906], [0, 1080]}
	// Capacity: 124
	// # of read delays: 3
  // 0, 1, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 121> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_123() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 121
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 121 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg8_stg8_update_0_write3_merged_banks_4_cache {
	// RAM Box: {[3, 1907], [0, 1080]}
	// Capacity: 124
	// # of read delays: 3
  // 0, 1, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 121> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_123() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 121
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 121 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg8_stg8_update_0_write4_merged_banks_4_cache {
	// RAM Box: {[4, 1908], [0, 1080]}
	// Capacity: 124
	// # of read delays: 3
  // 0, 1, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 121> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_123() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 121
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 121 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg8_stg8_update_0_write5_merged_banks_4_cache {
	// RAM Box: {[5, 1909], [0, 1080]}
	// Capacity: 124
	// # of read delays: 3
  // 0, 1, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 121> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_123() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 121
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 121 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg8_stg8_update_0_write6_merged_banks_4_cache {
	// RAM Box: {[6, 1910], [0, 1080]}
	// Capacity: 124
	// # of read delays: 3
  // 0, 1, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 121> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_123() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 121
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 121 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg8_stg8_update_0_write7_merged_banks_4_cache {
	// RAM Box: {[7, 1911], [0, 1080]}
	// Capacity: 124
	// # of read delays: 3
  // 0, 1, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 121> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_123() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 121
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 121 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg8_stg8_update_0_write8_merged_banks_4_cache {
	// RAM Box: {[8, 1912], [0, 1080]}
	// Capacity: 124
	// # of read delays: 3
  // 0, 1, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 121> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_123() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 121
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 121 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg8_stg8_update_0_write9_merged_banks_4_cache {
	// RAM Box: {[9, 1913], [0, 1080]}
	// Capacity: 124
	// # of read delays: 3
  // 0, 1, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 121> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_123() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 121
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 121 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg8_cache {
  // # of banks: 16
  stg8_stg8_update_0_write0_merged_banks_4_cache stg8_stg8_update_0_write0_merged_banks_4;
  stg8_stg8_update_0_write1_merged_banks_4_cache stg8_stg8_update_0_write1_merged_banks_4;
  stg8_stg8_update_0_write10_merged_banks_4_cache stg8_stg8_update_0_write10_merged_banks_4;
  stg8_stg8_update_0_write11_merged_banks_4_cache stg8_stg8_update_0_write11_merged_banks_4;
  stg8_stg8_update_0_write12_merged_banks_4_cache stg8_stg8_update_0_write12_merged_banks_4;
  stg8_stg8_update_0_write13_merged_banks_4_cache stg8_stg8_update_0_write13_merged_banks_4;
  stg8_stg8_update_0_write14_merged_banks_4_cache stg8_stg8_update_0_write14_merged_banks_4;
  stg8_stg8_update_0_write15_merged_banks_4_cache stg8_stg8_update_0_write15_merged_banks_4;
  stg8_stg8_update_0_write2_merged_banks_4_cache stg8_stg8_update_0_write2_merged_banks_4;
  stg8_stg8_update_0_write3_merged_banks_4_cache stg8_stg8_update_0_write3_merged_banks_4;
  stg8_stg8_update_0_write4_merged_banks_4_cache stg8_stg8_update_0_write4_merged_banks_4;
  stg8_stg8_update_0_write5_merged_banks_4_cache stg8_stg8_update_0_write5_merged_banks_4;
  stg8_stg8_update_0_write6_merged_banks_4_cache stg8_stg8_update_0_write6_merged_banks_4;
  stg8_stg8_update_0_write7_merged_banks_4_cache stg8_stg8_update_0_write7_merged_banks_4;
  stg8_stg8_update_0_write8_merged_banks_4_cache stg8_stg8_update_0_write8_merged_banks_4;
  stg8_stg8_update_0_write9_merged_banks_4_cache stg8_stg8_update_0_write9_merged_banks_4;
};



inline void stg8_stg8_update_0_write0_write(hw_uint<16>& stg8_stg8_update_0_write0, stg8_cache& stg8, int d0, int d1, int dynamic_address) {
  stg8.stg8_stg8_update_0_write0_merged_banks_4.push(stg8_stg8_update_0_write0);
}

inline void stg8_stg8_update_0_write1_write(hw_uint<16>& stg8_stg8_update_0_write1, stg8_cache& stg8, int d0, int d1, int dynamic_address) {
  stg8.stg8_stg8_update_0_write1_merged_banks_4.push(stg8_stg8_update_0_write1);
}

inline void stg8_stg8_update_0_write10_write(hw_uint<16>& stg8_stg8_update_0_write10, stg8_cache& stg8, int d0, int d1, int dynamic_address) {
  stg8.stg8_stg8_update_0_write10_merged_banks_4.push(stg8_stg8_update_0_write10);
}

inline void stg8_stg8_update_0_write11_write(hw_uint<16>& stg8_stg8_update_0_write11, stg8_cache& stg8, int d0, int d1, int dynamic_address) {
  stg8.stg8_stg8_update_0_write11_merged_banks_4.push(stg8_stg8_update_0_write11);
}

inline void stg8_stg8_update_0_write12_write(hw_uint<16>& stg8_stg8_update_0_write12, stg8_cache& stg8, int d0, int d1, int dynamic_address) {
  stg8.stg8_stg8_update_0_write12_merged_banks_4.push(stg8_stg8_update_0_write12);
}

inline void stg8_stg8_update_0_write13_write(hw_uint<16>& stg8_stg8_update_0_write13, stg8_cache& stg8, int d0, int d1, int dynamic_address) {
  stg8.stg8_stg8_update_0_write13_merged_banks_4.push(stg8_stg8_update_0_write13);
}

inline void stg8_stg8_update_0_write14_write(hw_uint<16>& stg8_stg8_update_0_write14, stg8_cache& stg8, int d0, int d1, int dynamic_address) {
  stg8.stg8_stg8_update_0_write14_merged_banks_4.push(stg8_stg8_update_0_write14);
}

inline void stg8_stg8_update_0_write15_write(hw_uint<16>& stg8_stg8_update_0_write15, stg8_cache& stg8, int d0, int d1, int dynamic_address) {
  stg8.stg8_stg8_update_0_write15_merged_banks_4.push(stg8_stg8_update_0_write15);
}

inline void stg8_stg8_update_0_write2_write(hw_uint<16>& stg8_stg8_update_0_write2, stg8_cache& stg8, int d0, int d1, int dynamic_address) {
  stg8.stg8_stg8_update_0_write2_merged_banks_4.push(stg8_stg8_update_0_write2);
}

inline void stg8_stg8_update_0_write3_write(hw_uint<16>& stg8_stg8_update_0_write3, stg8_cache& stg8, int d0, int d1, int dynamic_address) {
  stg8.stg8_stg8_update_0_write3_merged_banks_4.push(stg8_stg8_update_0_write3);
}

inline void stg8_stg8_update_0_write4_write(hw_uint<16>& stg8_stg8_update_0_write4, stg8_cache& stg8, int d0, int d1, int dynamic_address) {
  stg8.stg8_stg8_update_0_write4_merged_banks_4.push(stg8_stg8_update_0_write4);
}

inline void stg8_stg8_update_0_write5_write(hw_uint<16>& stg8_stg8_update_0_write5, stg8_cache& stg8, int d0, int d1, int dynamic_address) {
  stg8.stg8_stg8_update_0_write5_merged_banks_4.push(stg8_stg8_update_0_write5);
}

inline void stg8_stg8_update_0_write6_write(hw_uint<16>& stg8_stg8_update_0_write6, stg8_cache& stg8, int d0, int d1, int dynamic_address) {
  stg8.stg8_stg8_update_0_write6_merged_banks_4.push(stg8_stg8_update_0_write6);
}

inline void stg8_stg8_update_0_write7_write(hw_uint<16>& stg8_stg8_update_0_write7, stg8_cache& stg8, int d0, int d1, int dynamic_address) {
  stg8.stg8_stg8_update_0_write7_merged_banks_4.push(stg8_stg8_update_0_write7);
}

inline void stg8_stg8_update_0_write8_write(hw_uint<16>& stg8_stg8_update_0_write8, stg8_cache& stg8, int d0, int d1, int dynamic_address) {
  stg8.stg8_stg8_update_0_write8_merged_banks_4.push(stg8_stg8_update_0_write8);
}

inline void stg8_stg8_update_0_write9_write(hw_uint<16>& stg8_stg8_update_0_write9, stg8_cache& stg8, int d0, int d1, int dynamic_address) {
  stg8.stg8_stg8_update_0_write9_merged_banks_4.push(stg8_stg8_update_0_write9);
}

inline hw_uint<16> stg9_rd0_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd0 read pattern: { stg9_update_0[d0, d1] -> stg8[-1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write15 = stg8.stg8_stg8_update_0_write15_merged_banks_4.peek_124();
  return value_stg8_stg8_update_0_write15;
  return 0;
}

inline hw_uint<16> stg9_rd1_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd1 read pattern: { stg9_update_0[d0, d1] -> stg8[16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write0 = stg8.stg8_stg8_update_0_write0_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write0;
  return 0;
}

inline hw_uint<16> stg9_rd10_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd10 read pattern: { stg9_update_0[d0, d1] -> stg8[2 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write2 = stg8.stg8_stg8_update_0_write2_merged_banks_4.peek_1();
  return value_stg8_stg8_update_0_write2;
  return 0;
}

inline hw_uint<16> stg9_rd11_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd11 read pattern: { stg9_update_0[d0, d1] -> stg8[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write3 = stg8.stg8_stg8_update_0_write3_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write3;
  return 0;
}

inline hw_uint<16> stg9_rd12_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd12 read pattern: { stg9_update_0[d0, d1] -> stg8[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write2 = stg8.stg8_stg8_update_0_write2_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write2;
  return 0;
}

inline hw_uint<16> stg9_rd13_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd13 read pattern: { stg9_update_0[d0, d1] -> stg8[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write3 = stg8.stg8_stg8_update_0_write3_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write3;
  return 0;
}

inline hw_uint<16> stg9_rd14_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd14 read pattern: { stg9_update_0[d0, d1] -> stg8[3 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write3 = stg8.stg8_stg8_update_0_write3_merged_banks_4.peek_1();
  return value_stg8_stg8_update_0_write3;
  return 0;
}

inline hw_uint<16> stg9_rd15_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd15 read pattern: { stg9_update_0[d0, d1] -> stg8[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write4 = stg8.stg8_stg8_update_0_write4_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write4;
  return 0;
}

inline hw_uint<16> stg9_rd16_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd16 read pattern: { stg9_update_0[d0, d1] -> stg8[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write3 = stg8.stg8_stg8_update_0_write3_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write3;
  return 0;
}

inline hw_uint<16> stg9_rd17_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd17 read pattern: { stg9_update_0[d0, d1] -> stg8[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write4 = stg8.stg8_stg8_update_0_write4_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write4;
  return 0;
}

inline hw_uint<16> stg9_rd18_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd18 read pattern: { stg9_update_0[d0, d1] -> stg8[4 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write4 = stg8.stg8_stg8_update_0_write4_merged_banks_4.peek_1();
  return value_stg8_stg8_update_0_write4;
  return 0;
}

inline hw_uint<16> stg9_rd19_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd19 read pattern: { stg9_update_0[d0, d1] -> stg8[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write5 = stg8.stg8_stg8_update_0_write5_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write5;
  return 0;
}

inline hw_uint<16> stg9_rd2_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd2 read pattern: { stg9_update_0[d0, d1] -> stg8[16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write0 = stg8.stg8_stg8_update_0_write0_merged_banks_4.peek_1();
  return value_stg8_stg8_update_0_write0;
  return 0;
}

inline hw_uint<16> stg9_rd20_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd20 read pattern: { stg9_update_0[d0, d1] -> stg8[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write4 = stg8.stg8_stg8_update_0_write4_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write4;
  return 0;
}

inline hw_uint<16> stg9_rd21_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd21 read pattern: { stg9_update_0[d0, d1] -> stg8[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write5 = stg8.stg8_stg8_update_0_write5_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write5;
  return 0;
}

inline hw_uint<16> stg9_rd22_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd22 read pattern: { stg9_update_0[d0, d1] -> stg8[5 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write5 = stg8.stg8_stg8_update_0_write5_merged_banks_4.peek_1();
  return value_stg8_stg8_update_0_write5;
  return 0;
}

inline hw_uint<16> stg9_rd23_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd23 read pattern: { stg9_update_0[d0, d1] -> stg8[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write6 = stg8.stg8_stg8_update_0_write6_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write6;
  return 0;
}

inline hw_uint<16> stg9_rd24_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd24 read pattern: { stg9_update_0[d0, d1] -> stg8[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write5 = stg8.stg8_stg8_update_0_write5_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write5;
  return 0;
}

inline hw_uint<16> stg9_rd25_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd25 read pattern: { stg9_update_0[d0, d1] -> stg8[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write6 = stg8.stg8_stg8_update_0_write6_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write6;
  return 0;
}

inline hw_uint<16> stg9_rd26_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd26 read pattern: { stg9_update_0[d0, d1] -> stg8[6 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write6 = stg8.stg8_stg8_update_0_write6_merged_banks_4.peek_1();
  return value_stg8_stg8_update_0_write6;
  return 0;
}

inline hw_uint<16> stg9_rd27_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd27 read pattern: { stg9_update_0[d0, d1] -> stg8[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write7 = stg8.stg8_stg8_update_0_write7_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write7;
  return 0;
}

inline hw_uint<16> stg9_rd28_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd28 read pattern: { stg9_update_0[d0, d1] -> stg8[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write6 = stg8.stg8_stg8_update_0_write6_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write6;
  return 0;
}

inline hw_uint<16> stg9_rd29_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd29 read pattern: { stg9_update_0[d0, d1] -> stg8[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write7 = stg8.stg8_stg8_update_0_write7_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write7;
  return 0;
}

inline hw_uint<16> stg9_rd3_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd3 read pattern: { stg9_update_0[d0, d1] -> stg8[1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write1 = stg8.stg8_stg8_update_0_write1_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write1;
  return 0;
}

inline hw_uint<16> stg9_rd30_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd30 read pattern: { stg9_update_0[d0, d1] -> stg8[7 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write7 = stg8.stg8_stg8_update_0_write7_merged_banks_4.peek_1();
  return value_stg8_stg8_update_0_write7;
  return 0;
}

inline hw_uint<16> stg9_rd31_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd31 read pattern: { stg9_update_0[d0, d1] -> stg8[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write8 = stg8.stg8_stg8_update_0_write8_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write8;
  return 0;
}

inline hw_uint<16> stg9_rd32_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd32 read pattern: { stg9_update_0[d0, d1] -> stg8[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write7 = stg8.stg8_stg8_update_0_write7_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write7;
  return 0;
}

inline hw_uint<16> stg9_rd33_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd33 read pattern: { stg9_update_0[d0, d1] -> stg8[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write8 = stg8.stg8_stg8_update_0_write8_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write8;
  return 0;
}

inline hw_uint<16> stg9_rd34_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd34 read pattern: { stg9_update_0[d0, d1] -> stg8[8 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write8 = stg8.stg8_stg8_update_0_write8_merged_banks_4.peek_1();
  return value_stg8_stg8_update_0_write8;
  return 0;
}

inline hw_uint<16> stg9_rd35_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd35 read pattern: { stg9_update_0[d0, d1] -> stg8[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write9 = stg8.stg8_stg8_update_0_write9_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write9;
  return 0;
}

inline hw_uint<16> stg9_rd36_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd36 read pattern: { stg9_update_0[d0, d1] -> stg8[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write8 = stg8.stg8_stg8_update_0_write8_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write8;
  return 0;
}

inline hw_uint<16> stg9_rd37_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd37 read pattern: { stg9_update_0[d0, d1] -> stg8[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write9 = stg8.stg8_stg8_update_0_write9_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write9;
  return 0;
}

inline hw_uint<16> stg9_rd38_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd38 read pattern: { stg9_update_0[d0, d1] -> stg8[9 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write9 = stg8.stg8_stg8_update_0_write9_merged_banks_4.peek_1();
  return value_stg8_stg8_update_0_write9;
  return 0;
}

inline hw_uint<16> stg9_rd39_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd39 read pattern: { stg9_update_0[d0, d1] -> stg8[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write10 = stg8.stg8_stg8_update_0_write10_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write10;
  return 0;
}

inline hw_uint<16> stg9_rd4_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd4 read pattern: { stg9_update_0[d0, d1] -> stg8[16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write0 = stg8.stg8_stg8_update_0_write0_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write0;
  return 0;
}

inline hw_uint<16> stg9_rd40_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd40 read pattern: { stg9_update_0[d0, d1] -> stg8[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write9 = stg8.stg8_stg8_update_0_write9_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write9;
  return 0;
}

inline hw_uint<16> stg9_rd41_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd41 read pattern: { stg9_update_0[d0, d1] -> stg8[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write10 = stg8.stg8_stg8_update_0_write10_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write10;
  return 0;
}

inline hw_uint<16> stg9_rd42_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd42 read pattern: { stg9_update_0[d0, d1] -> stg8[10 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write10 = stg8.stg8_stg8_update_0_write10_merged_banks_4.peek_1();
  return value_stg8_stg8_update_0_write10;
  return 0;
}

inline hw_uint<16> stg9_rd43_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd43 read pattern: { stg9_update_0[d0, d1] -> stg8[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write11 = stg8.stg8_stg8_update_0_write11_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write11;
  return 0;
}

inline hw_uint<16> stg9_rd44_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd44 read pattern: { stg9_update_0[d0, d1] -> stg8[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write10 = stg8.stg8_stg8_update_0_write10_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write10;
  return 0;
}

inline hw_uint<16> stg9_rd45_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd45 read pattern: { stg9_update_0[d0, d1] -> stg8[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write11 = stg8.stg8_stg8_update_0_write11_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write11;
  return 0;
}

inline hw_uint<16> stg9_rd46_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd46 read pattern: { stg9_update_0[d0, d1] -> stg8[11 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write11 = stg8.stg8_stg8_update_0_write11_merged_banks_4.peek_1();
  return value_stg8_stg8_update_0_write11;
  return 0;
}

inline hw_uint<16> stg9_rd47_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd47 read pattern: { stg9_update_0[d0, d1] -> stg8[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write12 = stg8.stg8_stg8_update_0_write12_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write12;
  return 0;
}

inline hw_uint<16> stg9_rd48_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd48 read pattern: { stg9_update_0[d0, d1] -> stg8[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write11 = stg8.stg8_stg8_update_0_write11_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write11;
  return 0;
}

inline hw_uint<16> stg9_rd49_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd49 read pattern: { stg9_update_0[d0, d1] -> stg8[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write12 = stg8.stg8_stg8_update_0_write12_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write12;
  return 0;
}

inline hw_uint<16> stg9_rd5_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd5 read pattern: { stg9_update_0[d0, d1] -> stg8[1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write1 = stg8.stg8_stg8_update_0_write1_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write1;
  return 0;
}

inline hw_uint<16> stg9_rd50_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd50 read pattern: { stg9_update_0[d0, d1] -> stg8[12 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write12 = stg8.stg8_stg8_update_0_write12_merged_banks_4.peek_1();
  return value_stg8_stg8_update_0_write12;
  return 0;
}

inline hw_uint<16> stg9_rd51_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd51 read pattern: { stg9_update_0[d0, d1] -> stg8[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write13 = stg8.stg8_stg8_update_0_write13_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write13;
  return 0;
}

inline hw_uint<16> stg9_rd52_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd52 read pattern: { stg9_update_0[d0, d1] -> stg8[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write12 = stg8.stg8_stg8_update_0_write12_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write12;
  return 0;
}

inline hw_uint<16> stg9_rd53_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd53 read pattern: { stg9_update_0[d0, d1] -> stg8[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write13 = stg8.stg8_stg8_update_0_write13_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write13;
  return 0;
}

inline hw_uint<16> stg9_rd54_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd54 read pattern: { stg9_update_0[d0, d1] -> stg8[13 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write13 = stg8.stg8_stg8_update_0_write13_merged_banks_4.peek_1();
  return value_stg8_stg8_update_0_write13;
  return 0;
}

inline hw_uint<16> stg9_rd55_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd55 read pattern: { stg9_update_0[d0, d1] -> stg8[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write14 = stg8.stg8_stg8_update_0_write14_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write14;
  return 0;
}

inline hw_uint<16> stg9_rd56_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd56 read pattern: { stg9_update_0[d0, d1] -> stg8[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write13 = stg8.stg8_stg8_update_0_write13_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write13;
  return 0;
}

inline hw_uint<16> stg9_rd57_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd57 read pattern: { stg9_update_0[d0, d1] -> stg8[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write14 = stg8.stg8_stg8_update_0_write14_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write14;
  return 0;
}

inline hw_uint<16> stg9_rd58_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd58 read pattern: { stg9_update_0[d0, d1] -> stg8[14 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write14 = stg8.stg8_stg8_update_0_write14_merged_banks_4.peek_1();
  return value_stg8_stg8_update_0_write14;
  return 0;
}

inline hw_uint<16> stg9_rd59_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd59 read pattern: { stg9_update_0[d0, d1] -> stg8[15 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write15 = stg8.stg8_stg8_update_0_write15_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write15;
  return 0;
}

inline hw_uint<16> stg9_rd6_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd6 read pattern: { stg9_update_0[d0, d1] -> stg8[1 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write1 = stg8.stg8_stg8_update_0_write1_merged_banks_4.peek_1();
  return value_stg8_stg8_update_0_write1;
  return 0;
}

inline hw_uint<16> stg9_rd60_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd60 read pattern: { stg9_update_0[d0, d1] -> stg8[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write14 = stg8.stg8_stg8_update_0_write14_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write14;
  return 0;
}

inline hw_uint<16> stg9_rd61_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd61 read pattern: { stg9_update_0[d0, d1] -> stg8[15 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write15 = stg8.stg8_stg8_update_0_write15_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write15;
  return 0;
}

inline hw_uint<16> stg9_rd62_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd62 read pattern: { stg9_update_0[d0, d1] -> stg8[15 + 16d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write15 = stg8.stg8_stg8_update_0_write15_merged_banks_4.peek_1();
  return value_stg8_stg8_update_0_write15;
  return 0;
}

inline hw_uint<16> stg9_rd63_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd63 read pattern: { stg9_update_0[d0, d1] -> stg8[16 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write0 = stg8.stg8_stg8_update_0_write0_merged_banks_4.peek_122();
  return value_stg8_stg8_update_0_write0;
  return 0;
}

inline hw_uint<16> stg9_rd7_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd7 read pattern: { stg9_update_0[d0, d1] -> stg8[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write2 = stg8.stg8_stg8_update_0_write2_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write2;
  return 0;
}

inline hw_uint<16> stg9_rd8_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd8 read pattern: { stg9_update_0[d0, d1] -> stg8[1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write1 = stg8.stg8_stg8_update_0_write1_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write1;
  return 0;
}

inline hw_uint<16> stg9_rd9_select(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg9_rd9 read pattern: { stg9_update_0[d0, d1] -> stg8[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
  auto value_stg8_stg8_update_0_write2 = stg8.stg8_stg8_update_0_write2_merged_banks_4.peek_123();
  return value_stg8_stg8_update_0_write2;
  return 0;
}

// # of bundles = 2
// stg8_update_0_write
//	stg8_stg8_update_0_write0
//	stg8_stg8_update_0_write1
//	stg8_stg8_update_0_write2
//	stg8_stg8_update_0_write3
//	stg8_stg8_update_0_write4
//	stg8_stg8_update_0_write5
//	stg8_stg8_update_0_write6
//	stg8_stg8_update_0_write7
//	stg8_stg8_update_0_write8
//	stg8_stg8_update_0_write9
//	stg8_stg8_update_0_write10
//	stg8_stg8_update_0_write11
//	stg8_stg8_update_0_write12
//	stg8_stg8_update_0_write13
//	stg8_stg8_update_0_write14
//	stg8_stg8_update_0_write15
inline void stg8_stg8_update_0_write_bundle_write(hw_uint<256>& stg8_update_0_write, stg8_cache& stg8, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg8_stg8_update_0_write0_res = stg8_update_0_write.extract<0, 15>();
	stg8_stg8_update_0_write0_write(stg8_stg8_update_0_write0_res, stg8, d0, d1, dynamic_address);
	hw_uint<16> stg8_stg8_update_0_write1_res = stg8_update_0_write.extract<16, 31>();
	stg8_stg8_update_0_write1_write(stg8_stg8_update_0_write1_res, stg8, d0, d1, dynamic_address);
	hw_uint<16> stg8_stg8_update_0_write2_res = stg8_update_0_write.extract<32, 47>();
	stg8_stg8_update_0_write2_write(stg8_stg8_update_0_write2_res, stg8, d0, d1, dynamic_address);
	hw_uint<16> stg8_stg8_update_0_write3_res = stg8_update_0_write.extract<48, 63>();
	stg8_stg8_update_0_write3_write(stg8_stg8_update_0_write3_res, stg8, d0, d1, dynamic_address);
	hw_uint<16> stg8_stg8_update_0_write4_res = stg8_update_0_write.extract<64, 79>();
	stg8_stg8_update_0_write4_write(stg8_stg8_update_0_write4_res, stg8, d0, d1, dynamic_address);
	hw_uint<16> stg8_stg8_update_0_write5_res = stg8_update_0_write.extract<80, 95>();
	stg8_stg8_update_0_write5_write(stg8_stg8_update_0_write5_res, stg8, d0, d1, dynamic_address);
	hw_uint<16> stg8_stg8_update_0_write6_res = stg8_update_0_write.extract<96, 111>();
	stg8_stg8_update_0_write6_write(stg8_stg8_update_0_write6_res, stg8, d0, d1, dynamic_address);
	hw_uint<16> stg8_stg8_update_0_write7_res = stg8_update_0_write.extract<112, 127>();
	stg8_stg8_update_0_write7_write(stg8_stg8_update_0_write7_res, stg8, d0, d1, dynamic_address);
	hw_uint<16> stg8_stg8_update_0_write8_res = stg8_update_0_write.extract<128, 143>();
	stg8_stg8_update_0_write8_write(stg8_stg8_update_0_write8_res, stg8, d0, d1, dynamic_address);
	hw_uint<16> stg8_stg8_update_0_write9_res = stg8_update_0_write.extract<144, 159>();
	stg8_stg8_update_0_write9_write(stg8_stg8_update_0_write9_res, stg8, d0, d1, dynamic_address);
	hw_uint<16> stg8_stg8_update_0_write10_res = stg8_update_0_write.extract<160, 175>();
	stg8_stg8_update_0_write10_write(stg8_stg8_update_0_write10_res, stg8, d0, d1, dynamic_address);
	hw_uint<16> stg8_stg8_update_0_write11_res = stg8_update_0_write.extract<176, 191>();
	stg8_stg8_update_0_write11_write(stg8_stg8_update_0_write11_res, stg8, d0, d1, dynamic_address);
	hw_uint<16> stg8_stg8_update_0_write12_res = stg8_update_0_write.extract<192, 207>();
	stg8_stg8_update_0_write12_write(stg8_stg8_update_0_write12_res, stg8, d0, d1, dynamic_address);
	hw_uint<16> stg8_stg8_update_0_write13_res = stg8_update_0_write.extract<208, 223>();
	stg8_stg8_update_0_write13_write(stg8_stg8_update_0_write13_res, stg8, d0, d1, dynamic_address);
	hw_uint<16> stg8_stg8_update_0_write14_res = stg8_update_0_write.extract<224, 239>();
	stg8_stg8_update_0_write14_write(stg8_stg8_update_0_write14_res, stg8, d0, d1, dynamic_address);
	hw_uint<16> stg8_stg8_update_0_write15_res = stg8_update_0_write.extract<240, 255>();
	stg8_stg8_update_0_write15_write(stg8_stg8_update_0_write15_res, stg8, d0, d1, dynamic_address);
}

// stg9_update_0_read
//	stg9_rd0
//	stg9_rd1
//	stg9_rd2
//	stg9_rd3
//	stg9_rd4
//	stg9_rd5
//	stg9_rd6
//	stg9_rd7
//	stg9_rd8
//	stg9_rd9
//	stg9_rd10
//	stg9_rd11
//	stg9_rd12
//	stg9_rd13
//	stg9_rd14
//	stg9_rd15
//	stg9_rd16
//	stg9_rd17
//	stg9_rd18
//	stg9_rd19
//	stg9_rd20
//	stg9_rd21
//	stg9_rd22
//	stg9_rd23
//	stg9_rd24
//	stg9_rd25
//	stg9_rd26
//	stg9_rd27
//	stg9_rd28
//	stg9_rd29
//	stg9_rd30
//	stg9_rd31
//	stg9_rd32
//	stg9_rd33
//	stg9_rd34
//	stg9_rd35
//	stg9_rd36
//	stg9_rd37
//	stg9_rd38
//	stg9_rd39
//	stg9_rd40
//	stg9_rd41
//	stg9_rd42
//	stg9_rd43
//	stg9_rd44
//	stg9_rd45
//	stg9_rd46
//	stg9_rd47
//	stg9_rd48
//	stg9_rd49
//	stg9_rd50
//	stg9_rd51
//	stg9_rd52
//	stg9_rd53
//	stg9_rd54
//	stg9_rd55
//	stg9_rd56
//	stg9_rd57
//	stg9_rd58
//	stg9_rd59
//	stg9_rd60
//	stg9_rd61
//	stg9_rd62
//	stg9_rd63
inline hw_uint<1024> stg8_stg9_update_0_read_bundle_read(stg8_cache& stg8, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 64
    // stg9_rd0
    // stg9_rd1
    // stg9_rd2
    // stg9_rd3
    // stg9_rd4
    // stg9_rd5
    // stg9_rd6
    // stg9_rd7
    // stg9_rd8
    // stg9_rd9
    // stg9_rd10
    // stg9_rd11
    // stg9_rd12
    // stg9_rd13
    // stg9_rd14
    // stg9_rd15
    // stg9_rd16
    // stg9_rd17
    // stg9_rd18
    // stg9_rd19
    // stg9_rd20
    // stg9_rd21
    // stg9_rd22
    // stg9_rd23
    // stg9_rd24
    // stg9_rd25
    // stg9_rd26
    // stg9_rd27
    // stg9_rd28
    // stg9_rd29
    // stg9_rd30
    // stg9_rd31
    // stg9_rd32
    // stg9_rd33
    // stg9_rd34
    // stg9_rd35
    // stg9_rd36
    // stg9_rd37
    // stg9_rd38
    // stg9_rd39
    // stg9_rd40
    // stg9_rd41
    // stg9_rd42
    // stg9_rd43
    // stg9_rd44
    // stg9_rd45
    // stg9_rd46
    // stg9_rd47
    // stg9_rd48
    // stg9_rd49
    // stg9_rd50
    // stg9_rd51
    // stg9_rd52
    // stg9_rd53
    // stg9_rd54
    // stg9_rd55
    // stg9_rd56
    // stg9_rd57
    // stg9_rd58
    // stg9_rd59
    // stg9_rd60
    // stg9_rd61
    // stg9_rd62
    // stg9_rd63

	hw_uint<1024> result;
	hw_uint<16> stg9_rd0_res = stg9_rd0_select(stg8, d0, d1, dynamic_address);
	set_at<0, 1024>(result, stg9_rd0_res);
	hw_uint<16> stg9_rd1_res = stg9_rd1_select(stg8, d0, d1, dynamic_address);
	set_at<16, 1024>(result, stg9_rd1_res);
	hw_uint<16> stg9_rd2_res = stg9_rd2_select(stg8, d0, d1, dynamic_address);
	set_at<32, 1024>(result, stg9_rd2_res);
	hw_uint<16> stg9_rd3_res = stg9_rd3_select(stg8, d0, d1, dynamic_address);
	set_at<48, 1024>(result, stg9_rd3_res);
	hw_uint<16> stg9_rd4_res = stg9_rd4_select(stg8, d0, d1, dynamic_address);
	set_at<64, 1024>(result, stg9_rd4_res);
	hw_uint<16> stg9_rd5_res = stg9_rd5_select(stg8, d0, d1, dynamic_address);
	set_at<80, 1024>(result, stg9_rd5_res);
	hw_uint<16> stg9_rd6_res = stg9_rd6_select(stg8, d0, d1, dynamic_address);
	set_at<96, 1024>(result, stg9_rd6_res);
	hw_uint<16> stg9_rd7_res = stg9_rd7_select(stg8, d0, d1, dynamic_address);
	set_at<112, 1024>(result, stg9_rd7_res);
	hw_uint<16> stg9_rd8_res = stg9_rd8_select(stg8, d0, d1, dynamic_address);
	set_at<128, 1024>(result, stg9_rd8_res);
	hw_uint<16> stg9_rd9_res = stg9_rd9_select(stg8, d0, d1, dynamic_address);
	set_at<144, 1024>(result, stg9_rd9_res);
	hw_uint<16> stg9_rd10_res = stg9_rd10_select(stg8, d0, d1, dynamic_address);
	set_at<160, 1024>(result, stg9_rd10_res);
	hw_uint<16> stg9_rd11_res = stg9_rd11_select(stg8, d0, d1, dynamic_address);
	set_at<176, 1024>(result, stg9_rd11_res);
	hw_uint<16> stg9_rd12_res = stg9_rd12_select(stg8, d0, d1, dynamic_address);
	set_at<192, 1024>(result, stg9_rd12_res);
	hw_uint<16> stg9_rd13_res = stg9_rd13_select(stg8, d0, d1, dynamic_address);
	set_at<208, 1024>(result, stg9_rd13_res);
	hw_uint<16> stg9_rd14_res = stg9_rd14_select(stg8, d0, d1, dynamic_address);
	set_at<224, 1024>(result, stg9_rd14_res);
	hw_uint<16> stg9_rd15_res = stg9_rd15_select(stg8, d0, d1, dynamic_address);
	set_at<240, 1024>(result, stg9_rd15_res);
	hw_uint<16> stg9_rd16_res = stg9_rd16_select(stg8, d0, d1, dynamic_address);
	set_at<256, 1024>(result, stg9_rd16_res);
	hw_uint<16> stg9_rd17_res = stg9_rd17_select(stg8, d0, d1, dynamic_address);
	set_at<272, 1024>(result, stg9_rd17_res);
	hw_uint<16> stg9_rd18_res = stg9_rd18_select(stg8, d0, d1, dynamic_address);
	set_at<288, 1024>(result, stg9_rd18_res);
	hw_uint<16> stg9_rd19_res = stg9_rd19_select(stg8, d0, d1, dynamic_address);
	set_at<304, 1024>(result, stg9_rd19_res);
	hw_uint<16> stg9_rd20_res = stg9_rd20_select(stg8, d0, d1, dynamic_address);
	set_at<320, 1024>(result, stg9_rd20_res);
	hw_uint<16> stg9_rd21_res = stg9_rd21_select(stg8, d0, d1, dynamic_address);
	set_at<336, 1024>(result, stg9_rd21_res);
	hw_uint<16> stg9_rd22_res = stg9_rd22_select(stg8, d0, d1, dynamic_address);
	set_at<352, 1024>(result, stg9_rd22_res);
	hw_uint<16> stg9_rd23_res = stg9_rd23_select(stg8, d0, d1, dynamic_address);
	set_at<368, 1024>(result, stg9_rd23_res);
	hw_uint<16> stg9_rd24_res = stg9_rd24_select(stg8, d0, d1, dynamic_address);
	set_at<384, 1024>(result, stg9_rd24_res);
	hw_uint<16> stg9_rd25_res = stg9_rd25_select(stg8, d0, d1, dynamic_address);
	set_at<400, 1024>(result, stg9_rd25_res);
	hw_uint<16> stg9_rd26_res = stg9_rd26_select(stg8, d0, d1, dynamic_address);
	set_at<416, 1024>(result, stg9_rd26_res);
	hw_uint<16> stg9_rd27_res = stg9_rd27_select(stg8, d0, d1, dynamic_address);
	set_at<432, 1024>(result, stg9_rd27_res);
	hw_uint<16> stg9_rd28_res = stg9_rd28_select(stg8, d0, d1, dynamic_address);
	set_at<448, 1024>(result, stg9_rd28_res);
	hw_uint<16> stg9_rd29_res = stg9_rd29_select(stg8, d0, d1, dynamic_address);
	set_at<464, 1024>(result, stg9_rd29_res);
	hw_uint<16> stg9_rd30_res = stg9_rd30_select(stg8, d0, d1, dynamic_address);
	set_at<480, 1024>(result, stg9_rd30_res);
	hw_uint<16> stg9_rd31_res = stg9_rd31_select(stg8, d0, d1, dynamic_address);
	set_at<496, 1024>(result, stg9_rd31_res);
	hw_uint<16> stg9_rd32_res = stg9_rd32_select(stg8, d0, d1, dynamic_address);
	set_at<512, 1024>(result, stg9_rd32_res);
	hw_uint<16> stg9_rd33_res = stg9_rd33_select(stg8, d0, d1, dynamic_address);
	set_at<528, 1024>(result, stg9_rd33_res);
	hw_uint<16> stg9_rd34_res = stg9_rd34_select(stg8, d0, d1, dynamic_address);
	set_at<544, 1024>(result, stg9_rd34_res);
	hw_uint<16> stg9_rd35_res = stg9_rd35_select(stg8, d0, d1, dynamic_address);
	set_at<560, 1024>(result, stg9_rd35_res);
	hw_uint<16> stg9_rd36_res = stg9_rd36_select(stg8, d0, d1, dynamic_address);
	set_at<576, 1024>(result, stg9_rd36_res);
	hw_uint<16> stg9_rd37_res = stg9_rd37_select(stg8, d0, d1, dynamic_address);
	set_at<592, 1024>(result, stg9_rd37_res);
	hw_uint<16> stg9_rd38_res = stg9_rd38_select(stg8, d0, d1, dynamic_address);
	set_at<608, 1024>(result, stg9_rd38_res);
	hw_uint<16> stg9_rd39_res = stg9_rd39_select(stg8, d0, d1, dynamic_address);
	set_at<624, 1024>(result, stg9_rd39_res);
	hw_uint<16> stg9_rd40_res = stg9_rd40_select(stg8, d0, d1, dynamic_address);
	set_at<640, 1024>(result, stg9_rd40_res);
	hw_uint<16> stg9_rd41_res = stg9_rd41_select(stg8, d0, d1, dynamic_address);
	set_at<656, 1024>(result, stg9_rd41_res);
	hw_uint<16> stg9_rd42_res = stg9_rd42_select(stg8, d0, d1, dynamic_address);
	set_at<672, 1024>(result, stg9_rd42_res);
	hw_uint<16> stg9_rd43_res = stg9_rd43_select(stg8, d0, d1, dynamic_address);
	set_at<688, 1024>(result, stg9_rd43_res);
	hw_uint<16> stg9_rd44_res = stg9_rd44_select(stg8, d0, d1, dynamic_address);
	set_at<704, 1024>(result, stg9_rd44_res);
	hw_uint<16> stg9_rd45_res = stg9_rd45_select(stg8, d0, d1, dynamic_address);
	set_at<720, 1024>(result, stg9_rd45_res);
	hw_uint<16> stg9_rd46_res = stg9_rd46_select(stg8, d0, d1, dynamic_address);
	set_at<736, 1024>(result, stg9_rd46_res);
	hw_uint<16> stg9_rd47_res = stg9_rd47_select(stg8, d0, d1, dynamic_address);
	set_at<752, 1024>(result, stg9_rd47_res);
	hw_uint<16> stg9_rd48_res = stg9_rd48_select(stg8, d0, d1, dynamic_address);
	set_at<768, 1024>(result, stg9_rd48_res);
	hw_uint<16> stg9_rd49_res = stg9_rd49_select(stg8, d0, d1, dynamic_address);
	set_at<784, 1024>(result, stg9_rd49_res);
	hw_uint<16> stg9_rd50_res = stg9_rd50_select(stg8, d0, d1, dynamic_address);
	set_at<800, 1024>(result, stg9_rd50_res);
	hw_uint<16> stg9_rd51_res = stg9_rd51_select(stg8, d0, d1, dynamic_address);
	set_at<816, 1024>(result, stg9_rd51_res);
	hw_uint<16> stg9_rd52_res = stg9_rd52_select(stg8, d0, d1, dynamic_address);
	set_at<832, 1024>(result, stg9_rd52_res);
	hw_uint<16> stg9_rd53_res = stg9_rd53_select(stg8, d0, d1, dynamic_address);
	set_at<848, 1024>(result, stg9_rd53_res);
	hw_uint<16> stg9_rd54_res = stg9_rd54_select(stg8, d0, d1, dynamic_address);
	set_at<864, 1024>(result, stg9_rd54_res);
	hw_uint<16> stg9_rd55_res = stg9_rd55_select(stg8, d0, d1, dynamic_address);
	set_at<880, 1024>(result, stg9_rd55_res);
	hw_uint<16> stg9_rd56_res = stg9_rd56_select(stg8, d0, d1, dynamic_address);
	set_at<896, 1024>(result, stg9_rd56_res);
	hw_uint<16> stg9_rd57_res = stg9_rd57_select(stg8, d0, d1, dynamic_address);
	set_at<912, 1024>(result, stg9_rd57_res);
	hw_uint<16> stg9_rd58_res = stg9_rd58_select(stg8, d0, d1, dynamic_address);
	set_at<928, 1024>(result, stg9_rd58_res);
	hw_uint<16> stg9_rd59_res = stg9_rd59_select(stg8, d0, d1, dynamic_address);
	set_at<944, 1024>(result, stg9_rd59_res);
	hw_uint<16> stg9_rd60_res = stg9_rd60_select(stg8, d0, d1, dynamic_address);
	set_at<960, 1024>(result, stg9_rd60_res);
	hw_uint<16> stg9_rd61_res = stg9_rd61_select(stg8, d0, d1, dynamic_address);
	set_at<976, 1024>(result, stg9_rd61_res);
	hw_uint<16> stg9_rd62_res = stg9_rd62_select(stg8, d0, d1, dynamic_address);
	set_at<992, 1024>(result, stg9_rd62_res);
	hw_uint<16> stg9_rd63_res = stg9_rd63_select(stg8, d0, d1, dynamic_address);
	set_at<1008, 1024>(result, stg9_rd63_res);
	return result;
}

struct stg9_stg9_update_0_write0_to_icsc_300MHz_16_rd0_cache {
	// RAM Box: {[0, 1904], [0, 1079]}
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

struct stg9_stg9_update_0_write1_to_icsc_300MHz_16_rd1_cache {
	// RAM Box: {[1, 1905], [0, 1079]}
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

struct stg9_stg9_update_0_write10_to_icsc_300MHz_16_rd10_cache {
	// RAM Box: {[10, 1914], [0, 1079]}
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

struct stg9_stg9_update_0_write11_to_icsc_300MHz_16_rd11_cache {
	// RAM Box: {[11, 1915], [0, 1079]}
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

struct stg9_stg9_update_0_write12_to_icsc_300MHz_16_rd12_cache {
	// RAM Box: {[12, 1916], [0, 1079]}
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

struct stg9_stg9_update_0_write13_to_icsc_300MHz_16_rd13_cache {
	// RAM Box: {[13, 1917], [0, 1079]}
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

struct stg9_stg9_update_0_write14_to_icsc_300MHz_16_rd14_cache {
	// RAM Box: {[14, 1918], [0, 1079]}
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

struct stg9_stg9_update_0_write15_to_icsc_300MHz_16_rd15_cache {
	// RAM Box: {[15, 1919], [0, 1079]}
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

struct stg9_stg9_update_0_write2_to_icsc_300MHz_16_rd2_cache {
	// RAM Box: {[2, 1906], [0, 1079]}
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

struct stg9_stg9_update_0_write3_to_icsc_300MHz_16_rd3_cache {
	// RAM Box: {[3, 1907], [0, 1079]}
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

struct stg9_stg9_update_0_write4_to_icsc_300MHz_16_rd4_cache {
	// RAM Box: {[4, 1908], [0, 1079]}
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

struct stg9_stg9_update_0_write5_to_icsc_300MHz_16_rd5_cache {
	// RAM Box: {[5, 1909], [0, 1079]}
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

struct stg9_stg9_update_0_write6_to_icsc_300MHz_16_rd6_cache {
	// RAM Box: {[6, 1910], [0, 1079]}
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

struct stg9_stg9_update_0_write7_to_icsc_300MHz_16_rd7_cache {
	// RAM Box: {[7, 1911], [0, 1079]}
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

struct stg9_stg9_update_0_write8_to_icsc_300MHz_16_rd8_cache {
	// RAM Box: {[8, 1912], [0, 1079]}
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

struct stg9_stg9_update_0_write9_to_icsc_300MHz_16_rd9_cache {
	// RAM Box: {[9, 1913], [0, 1079]}
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

struct stg9_cache {
  // # of banks: 16
  stg9_stg9_update_0_write0_to_icsc_300MHz_16_rd0_cache stg9_stg9_update_0_write0_to_icsc_300MHz_16_rd0;
  stg9_stg9_update_0_write1_to_icsc_300MHz_16_rd1_cache stg9_stg9_update_0_write1_to_icsc_300MHz_16_rd1;
  stg9_stg9_update_0_write10_to_icsc_300MHz_16_rd10_cache stg9_stg9_update_0_write10_to_icsc_300MHz_16_rd10;
  stg9_stg9_update_0_write11_to_icsc_300MHz_16_rd11_cache stg9_stg9_update_0_write11_to_icsc_300MHz_16_rd11;
  stg9_stg9_update_0_write12_to_icsc_300MHz_16_rd12_cache stg9_stg9_update_0_write12_to_icsc_300MHz_16_rd12;
  stg9_stg9_update_0_write13_to_icsc_300MHz_16_rd13_cache stg9_stg9_update_0_write13_to_icsc_300MHz_16_rd13;
  stg9_stg9_update_0_write14_to_icsc_300MHz_16_rd14_cache stg9_stg9_update_0_write14_to_icsc_300MHz_16_rd14;
  stg9_stg9_update_0_write15_to_icsc_300MHz_16_rd15_cache stg9_stg9_update_0_write15_to_icsc_300MHz_16_rd15;
  stg9_stg9_update_0_write2_to_icsc_300MHz_16_rd2_cache stg9_stg9_update_0_write2_to_icsc_300MHz_16_rd2;
  stg9_stg9_update_0_write3_to_icsc_300MHz_16_rd3_cache stg9_stg9_update_0_write3_to_icsc_300MHz_16_rd3;
  stg9_stg9_update_0_write4_to_icsc_300MHz_16_rd4_cache stg9_stg9_update_0_write4_to_icsc_300MHz_16_rd4;
  stg9_stg9_update_0_write5_to_icsc_300MHz_16_rd5_cache stg9_stg9_update_0_write5_to_icsc_300MHz_16_rd5;
  stg9_stg9_update_0_write6_to_icsc_300MHz_16_rd6_cache stg9_stg9_update_0_write6_to_icsc_300MHz_16_rd6;
  stg9_stg9_update_0_write7_to_icsc_300MHz_16_rd7_cache stg9_stg9_update_0_write7_to_icsc_300MHz_16_rd7;
  stg9_stg9_update_0_write8_to_icsc_300MHz_16_rd8_cache stg9_stg9_update_0_write8_to_icsc_300MHz_16_rd8;
  stg9_stg9_update_0_write9_to_icsc_300MHz_16_rd9_cache stg9_stg9_update_0_write9_to_icsc_300MHz_16_rd9;
};



inline void stg9_stg9_update_0_write0_write(hw_uint<16>& stg9_stg9_update_0_write0, stg9_cache& stg9, int d0, int d1, int dynamic_address) {
  stg9.stg9_stg9_update_0_write0_to_icsc_300MHz_16_rd0.push(stg9_stg9_update_0_write0);
}

inline void stg9_stg9_update_0_write1_write(hw_uint<16>& stg9_stg9_update_0_write1, stg9_cache& stg9, int d0, int d1, int dynamic_address) {
  stg9.stg9_stg9_update_0_write1_to_icsc_300MHz_16_rd1.push(stg9_stg9_update_0_write1);
}

inline void stg9_stg9_update_0_write10_write(hw_uint<16>& stg9_stg9_update_0_write10, stg9_cache& stg9, int d0, int d1, int dynamic_address) {
  stg9.stg9_stg9_update_0_write10_to_icsc_300MHz_16_rd10.push(stg9_stg9_update_0_write10);
}

inline void stg9_stg9_update_0_write11_write(hw_uint<16>& stg9_stg9_update_0_write11, stg9_cache& stg9, int d0, int d1, int dynamic_address) {
  stg9.stg9_stg9_update_0_write11_to_icsc_300MHz_16_rd11.push(stg9_stg9_update_0_write11);
}

inline void stg9_stg9_update_0_write12_write(hw_uint<16>& stg9_stg9_update_0_write12, stg9_cache& stg9, int d0, int d1, int dynamic_address) {
  stg9.stg9_stg9_update_0_write12_to_icsc_300MHz_16_rd12.push(stg9_stg9_update_0_write12);
}

inline void stg9_stg9_update_0_write13_write(hw_uint<16>& stg9_stg9_update_0_write13, stg9_cache& stg9, int d0, int d1, int dynamic_address) {
  stg9.stg9_stg9_update_0_write13_to_icsc_300MHz_16_rd13.push(stg9_stg9_update_0_write13);
}

inline void stg9_stg9_update_0_write14_write(hw_uint<16>& stg9_stg9_update_0_write14, stg9_cache& stg9, int d0, int d1, int dynamic_address) {
  stg9.stg9_stg9_update_0_write14_to_icsc_300MHz_16_rd14.push(stg9_stg9_update_0_write14);
}

inline void stg9_stg9_update_0_write15_write(hw_uint<16>& stg9_stg9_update_0_write15, stg9_cache& stg9, int d0, int d1, int dynamic_address) {
  stg9.stg9_stg9_update_0_write15_to_icsc_300MHz_16_rd15.push(stg9_stg9_update_0_write15);
}

inline void stg9_stg9_update_0_write2_write(hw_uint<16>& stg9_stg9_update_0_write2, stg9_cache& stg9, int d0, int d1, int dynamic_address) {
  stg9.stg9_stg9_update_0_write2_to_icsc_300MHz_16_rd2.push(stg9_stg9_update_0_write2);
}

inline void stg9_stg9_update_0_write3_write(hw_uint<16>& stg9_stg9_update_0_write3, stg9_cache& stg9, int d0, int d1, int dynamic_address) {
  stg9.stg9_stg9_update_0_write3_to_icsc_300MHz_16_rd3.push(stg9_stg9_update_0_write3);
}

inline void stg9_stg9_update_0_write4_write(hw_uint<16>& stg9_stg9_update_0_write4, stg9_cache& stg9, int d0, int d1, int dynamic_address) {
  stg9.stg9_stg9_update_0_write4_to_icsc_300MHz_16_rd4.push(stg9_stg9_update_0_write4);
}

inline void stg9_stg9_update_0_write5_write(hw_uint<16>& stg9_stg9_update_0_write5, stg9_cache& stg9, int d0, int d1, int dynamic_address) {
  stg9.stg9_stg9_update_0_write5_to_icsc_300MHz_16_rd5.push(stg9_stg9_update_0_write5);
}

inline void stg9_stg9_update_0_write6_write(hw_uint<16>& stg9_stg9_update_0_write6, stg9_cache& stg9, int d0, int d1, int dynamic_address) {
  stg9.stg9_stg9_update_0_write6_to_icsc_300MHz_16_rd6.push(stg9_stg9_update_0_write6);
}

inline void stg9_stg9_update_0_write7_write(hw_uint<16>& stg9_stg9_update_0_write7, stg9_cache& stg9, int d0, int d1, int dynamic_address) {
  stg9.stg9_stg9_update_0_write7_to_icsc_300MHz_16_rd7.push(stg9_stg9_update_0_write7);
}

inline void stg9_stg9_update_0_write8_write(hw_uint<16>& stg9_stg9_update_0_write8, stg9_cache& stg9, int d0, int d1, int dynamic_address) {
  stg9.stg9_stg9_update_0_write8_to_icsc_300MHz_16_rd8.push(stg9_stg9_update_0_write8);
}

inline void stg9_stg9_update_0_write9_write(hw_uint<16>& stg9_stg9_update_0_write9, stg9_cache& stg9, int d0, int d1, int dynamic_address) {
  stg9.stg9_stg9_update_0_write9_to_icsc_300MHz_16_rd9.push(stg9_stg9_update_0_write9);
}

inline hw_uint<16> icsc_300MHz_16_rd0_select(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_300MHz_16_rd0 read pattern: { icsc_300MHz_16_update_0[d0, d1] -> stg9[16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_stg9_stg9_update_0_write0 = stg9.stg9_stg9_update_0_write0_to_icsc_300MHz_16_rd0.peek(/* one reader or all rams */ 0);
  return value_stg9_stg9_update_0_write0;
  return 0;
}

inline hw_uint<16> icsc_300MHz_16_rd1_select(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_300MHz_16_rd1 read pattern: { icsc_300MHz_16_update_0[d0, d1] -> stg9[1 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_stg9_stg9_update_0_write1 = stg9.stg9_stg9_update_0_write1_to_icsc_300MHz_16_rd1.peek(/* one reader or all rams */ 0);
  return value_stg9_stg9_update_0_write1;
  return 0;
}

inline hw_uint<16> icsc_300MHz_16_rd10_select(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_300MHz_16_rd10 read pattern: { icsc_300MHz_16_update_0[d0, d1] -> stg9[10 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_stg9_stg9_update_0_write10 = stg9.stg9_stg9_update_0_write10_to_icsc_300MHz_16_rd10.peek(/* one reader or all rams */ 0);
  return value_stg9_stg9_update_0_write10;
  return 0;
}

inline hw_uint<16> icsc_300MHz_16_rd11_select(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_300MHz_16_rd11 read pattern: { icsc_300MHz_16_update_0[d0, d1] -> stg9[11 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_stg9_stg9_update_0_write11 = stg9.stg9_stg9_update_0_write11_to_icsc_300MHz_16_rd11.peek(/* one reader or all rams */ 0);
  return value_stg9_stg9_update_0_write11;
  return 0;
}

inline hw_uint<16> icsc_300MHz_16_rd12_select(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_300MHz_16_rd12 read pattern: { icsc_300MHz_16_update_0[d0, d1] -> stg9[12 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_stg9_stg9_update_0_write12 = stg9.stg9_stg9_update_0_write12_to_icsc_300MHz_16_rd12.peek(/* one reader or all rams */ 0);
  return value_stg9_stg9_update_0_write12;
  return 0;
}

inline hw_uint<16> icsc_300MHz_16_rd13_select(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_300MHz_16_rd13 read pattern: { icsc_300MHz_16_update_0[d0, d1] -> stg9[13 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_stg9_stg9_update_0_write13 = stg9.stg9_stg9_update_0_write13_to_icsc_300MHz_16_rd13.peek(/* one reader or all rams */ 0);
  return value_stg9_stg9_update_0_write13;
  return 0;
}

inline hw_uint<16> icsc_300MHz_16_rd14_select(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_300MHz_16_rd14 read pattern: { icsc_300MHz_16_update_0[d0, d1] -> stg9[14 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_stg9_stg9_update_0_write14 = stg9.stg9_stg9_update_0_write14_to_icsc_300MHz_16_rd14.peek(/* one reader or all rams */ 0);
  return value_stg9_stg9_update_0_write14;
  return 0;
}

inline hw_uint<16> icsc_300MHz_16_rd15_select(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_300MHz_16_rd15 read pattern: { icsc_300MHz_16_update_0[d0, d1] -> stg9[15 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_stg9_stg9_update_0_write15 = stg9.stg9_stg9_update_0_write15_to_icsc_300MHz_16_rd15.peek(/* one reader or all rams */ 0);
  return value_stg9_stg9_update_0_write15;
  return 0;
}

inline hw_uint<16> icsc_300MHz_16_rd2_select(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_300MHz_16_rd2 read pattern: { icsc_300MHz_16_update_0[d0, d1] -> stg9[2 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_stg9_stg9_update_0_write2 = stg9.stg9_stg9_update_0_write2_to_icsc_300MHz_16_rd2.peek(/* one reader or all rams */ 0);
  return value_stg9_stg9_update_0_write2;
  return 0;
}

inline hw_uint<16> icsc_300MHz_16_rd3_select(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_300MHz_16_rd3 read pattern: { icsc_300MHz_16_update_0[d0, d1] -> stg9[3 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_stg9_stg9_update_0_write3 = stg9.stg9_stg9_update_0_write3_to_icsc_300MHz_16_rd3.peek(/* one reader or all rams */ 0);
  return value_stg9_stg9_update_0_write3;
  return 0;
}

inline hw_uint<16> icsc_300MHz_16_rd4_select(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_300MHz_16_rd4 read pattern: { icsc_300MHz_16_update_0[d0, d1] -> stg9[4 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_stg9_stg9_update_0_write4 = stg9.stg9_stg9_update_0_write4_to_icsc_300MHz_16_rd4.peek(/* one reader or all rams */ 0);
  return value_stg9_stg9_update_0_write4;
  return 0;
}

inline hw_uint<16> icsc_300MHz_16_rd5_select(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_300MHz_16_rd5 read pattern: { icsc_300MHz_16_update_0[d0, d1] -> stg9[5 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_stg9_stg9_update_0_write5 = stg9.stg9_stg9_update_0_write5_to_icsc_300MHz_16_rd5.peek(/* one reader or all rams */ 0);
  return value_stg9_stg9_update_0_write5;
  return 0;
}

inline hw_uint<16> icsc_300MHz_16_rd6_select(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_300MHz_16_rd6 read pattern: { icsc_300MHz_16_update_0[d0, d1] -> stg9[6 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_stg9_stg9_update_0_write6 = stg9.stg9_stg9_update_0_write6_to_icsc_300MHz_16_rd6.peek(/* one reader or all rams */ 0);
  return value_stg9_stg9_update_0_write6;
  return 0;
}

inline hw_uint<16> icsc_300MHz_16_rd7_select(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_300MHz_16_rd7 read pattern: { icsc_300MHz_16_update_0[d0, d1] -> stg9[7 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_stg9_stg9_update_0_write7 = stg9.stg9_stg9_update_0_write7_to_icsc_300MHz_16_rd7.peek(/* one reader or all rams */ 0);
  return value_stg9_stg9_update_0_write7;
  return 0;
}

inline hw_uint<16> icsc_300MHz_16_rd8_select(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_300MHz_16_rd8 read pattern: { icsc_300MHz_16_update_0[d0, d1] -> stg9[8 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_stg9_stg9_update_0_write8 = stg9.stg9_stg9_update_0_write8_to_icsc_300MHz_16_rd8.peek(/* one reader or all rams */ 0);
  return value_stg9_stg9_update_0_write8;
  return 0;
}

inline hw_uint<16> icsc_300MHz_16_rd9_select(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_300MHz_16_rd9 read pattern: { icsc_300MHz_16_update_0[d0, d1] -> stg9[9 + 16d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  // Write schedule: { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
  auto value_stg9_stg9_update_0_write9 = stg9.stg9_stg9_update_0_write9_to_icsc_300MHz_16_rd9.peek(/* one reader or all rams */ 0);
  return value_stg9_stg9_update_0_write9;
  return 0;
}

// # of bundles = 2
// icsc_300MHz_16_update_0_read
//	icsc_300MHz_16_rd0
//	icsc_300MHz_16_rd1
//	icsc_300MHz_16_rd2
//	icsc_300MHz_16_rd3
//	icsc_300MHz_16_rd4
//	icsc_300MHz_16_rd5
//	icsc_300MHz_16_rd6
//	icsc_300MHz_16_rd7
//	icsc_300MHz_16_rd8
//	icsc_300MHz_16_rd9
//	icsc_300MHz_16_rd10
//	icsc_300MHz_16_rd11
//	icsc_300MHz_16_rd12
//	icsc_300MHz_16_rd13
//	icsc_300MHz_16_rd14
//	icsc_300MHz_16_rd15
inline hw_uint<256> stg9_icsc_300MHz_16_update_0_read_bundle_read(stg9_cache& stg9, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 16
    // icsc_300MHz_16_rd0
    // icsc_300MHz_16_rd1
    // icsc_300MHz_16_rd2
    // icsc_300MHz_16_rd3
    // icsc_300MHz_16_rd4
    // icsc_300MHz_16_rd5
    // icsc_300MHz_16_rd6
    // icsc_300MHz_16_rd7
    // icsc_300MHz_16_rd8
    // icsc_300MHz_16_rd9
    // icsc_300MHz_16_rd10
    // icsc_300MHz_16_rd11
    // icsc_300MHz_16_rd12
    // icsc_300MHz_16_rd13
    // icsc_300MHz_16_rd14
    // icsc_300MHz_16_rd15

	hw_uint<256> result;
	hw_uint<16> icsc_300MHz_16_rd0_res = icsc_300MHz_16_rd0_select(stg9, d0, d1, dynamic_address);
	set_at<0, 256>(result, icsc_300MHz_16_rd0_res);
	hw_uint<16> icsc_300MHz_16_rd1_res = icsc_300MHz_16_rd1_select(stg9, d0, d1, dynamic_address);
	set_at<16, 256>(result, icsc_300MHz_16_rd1_res);
	hw_uint<16> icsc_300MHz_16_rd2_res = icsc_300MHz_16_rd2_select(stg9, d0, d1, dynamic_address);
	set_at<32, 256>(result, icsc_300MHz_16_rd2_res);
	hw_uint<16> icsc_300MHz_16_rd3_res = icsc_300MHz_16_rd3_select(stg9, d0, d1, dynamic_address);
	set_at<48, 256>(result, icsc_300MHz_16_rd3_res);
	hw_uint<16> icsc_300MHz_16_rd4_res = icsc_300MHz_16_rd4_select(stg9, d0, d1, dynamic_address);
	set_at<64, 256>(result, icsc_300MHz_16_rd4_res);
	hw_uint<16> icsc_300MHz_16_rd5_res = icsc_300MHz_16_rd5_select(stg9, d0, d1, dynamic_address);
	set_at<80, 256>(result, icsc_300MHz_16_rd5_res);
	hw_uint<16> icsc_300MHz_16_rd6_res = icsc_300MHz_16_rd6_select(stg9, d0, d1, dynamic_address);
	set_at<96, 256>(result, icsc_300MHz_16_rd6_res);
	hw_uint<16> icsc_300MHz_16_rd7_res = icsc_300MHz_16_rd7_select(stg9, d0, d1, dynamic_address);
	set_at<112, 256>(result, icsc_300MHz_16_rd7_res);
	hw_uint<16> icsc_300MHz_16_rd8_res = icsc_300MHz_16_rd8_select(stg9, d0, d1, dynamic_address);
	set_at<128, 256>(result, icsc_300MHz_16_rd8_res);
	hw_uint<16> icsc_300MHz_16_rd9_res = icsc_300MHz_16_rd9_select(stg9, d0, d1, dynamic_address);
	set_at<144, 256>(result, icsc_300MHz_16_rd9_res);
	hw_uint<16> icsc_300MHz_16_rd10_res = icsc_300MHz_16_rd10_select(stg9, d0, d1, dynamic_address);
	set_at<160, 256>(result, icsc_300MHz_16_rd10_res);
	hw_uint<16> icsc_300MHz_16_rd11_res = icsc_300MHz_16_rd11_select(stg9, d0, d1, dynamic_address);
	set_at<176, 256>(result, icsc_300MHz_16_rd11_res);
	hw_uint<16> icsc_300MHz_16_rd12_res = icsc_300MHz_16_rd12_select(stg9, d0, d1, dynamic_address);
	set_at<192, 256>(result, icsc_300MHz_16_rd12_res);
	hw_uint<16> icsc_300MHz_16_rd13_res = icsc_300MHz_16_rd13_select(stg9, d0, d1, dynamic_address);
	set_at<208, 256>(result, icsc_300MHz_16_rd13_res);
	hw_uint<16> icsc_300MHz_16_rd14_res = icsc_300MHz_16_rd14_select(stg9, d0, d1, dynamic_address);
	set_at<224, 256>(result, icsc_300MHz_16_rd14_res);
	hw_uint<16> icsc_300MHz_16_rd15_res = icsc_300MHz_16_rd15_select(stg9, d0, d1, dynamic_address);
	set_at<240, 256>(result, icsc_300MHz_16_rd15_res);
	return result;
}

// stg9_update_0_write
//	stg9_stg9_update_0_write0
//	stg9_stg9_update_0_write1
//	stg9_stg9_update_0_write2
//	stg9_stg9_update_0_write3
//	stg9_stg9_update_0_write4
//	stg9_stg9_update_0_write5
//	stg9_stg9_update_0_write6
//	stg9_stg9_update_0_write7
//	stg9_stg9_update_0_write8
//	stg9_stg9_update_0_write9
//	stg9_stg9_update_0_write10
//	stg9_stg9_update_0_write11
//	stg9_stg9_update_0_write12
//	stg9_stg9_update_0_write13
//	stg9_stg9_update_0_write14
//	stg9_stg9_update_0_write15
inline void stg9_stg9_update_0_write_bundle_write(hw_uint<256>& stg9_update_0_write, stg9_cache& stg9, int d0, int d1, int dynamic_address) {
	hw_uint<16> stg9_stg9_update_0_write0_res = stg9_update_0_write.extract<0, 15>();
	stg9_stg9_update_0_write0_write(stg9_stg9_update_0_write0_res, stg9, d0, d1, dynamic_address);
	hw_uint<16> stg9_stg9_update_0_write1_res = stg9_update_0_write.extract<16, 31>();
	stg9_stg9_update_0_write1_write(stg9_stg9_update_0_write1_res, stg9, d0, d1, dynamic_address);
	hw_uint<16> stg9_stg9_update_0_write2_res = stg9_update_0_write.extract<32, 47>();
	stg9_stg9_update_0_write2_write(stg9_stg9_update_0_write2_res, stg9, d0, d1, dynamic_address);
	hw_uint<16> stg9_stg9_update_0_write3_res = stg9_update_0_write.extract<48, 63>();
	stg9_stg9_update_0_write3_write(stg9_stg9_update_0_write3_res, stg9, d0, d1, dynamic_address);
	hw_uint<16> stg9_stg9_update_0_write4_res = stg9_update_0_write.extract<64, 79>();
	stg9_stg9_update_0_write4_write(stg9_stg9_update_0_write4_res, stg9, d0, d1, dynamic_address);
	hw_uint<16> stg9_stg9_update_0_write5_res = stg9_update_0_write.extract<80, 95>();
	stg9_stg9_update_0_write5_write(stg9_stg9_update_0_write5_res, stg9, d0, d1, dynamic_address);
	hw_uint<16> stg9_stg9_update_0_write6_res = stg9_update_0_write.extract<96, 111>();
	stg9_stg9_update_0_write6_write(stg9_stg9_update_0_write6_res, stg9, d0, d1, dynamic_address);
	hw_uint<16> stg9_stg9_update_0_write7_res = stg9_update_0_write.extract<112, 127>();
	stg9_stg9_update_0_write7_write(stg9_stg9_update_0_write7_res, stg9, d0, d1, dynamic_address);
	hw_uint<16> stg9_stg9_update_0_write8_res = stg9_update_0_write.extract<128, 143>();
	stg9_stg9_update_0_write8_write(stg9_stg9_update_0_write8_res, stg9, d0, d1, dynamic_address);
	hw_uint<16> stg9_stg9_update_0_write9_res = stg9_update_0_write.extract<144, 159>();
	stg9_stg9_update_0_write9_write(stg9_stg9_update_0_write9_res, stg9, d0, d1, dynamic_address);
	hw_uint<16> stg9_stg9_update_0_write10_res = stg9_update_0_write.extract<160, 175>();
	stg9_stg9_update_0_write10_write(stg9_stg9_update_0_write10_res, stg9, d0, d1, dynamic_address);
	hw_uint<16> stg9_stg9_update_0_write11_res = stg9_update_0_write.extract<176, 191>();
	stg9_stg9_update_0_write11_write(stg9_stg9_update_0_write11_res, stg9, d0, d1, dynamic_address);
	hw_uint<16> stg9_stg9_update_0_write12_res = stg9_update_0_write.extract<192, 207>();
	stg9_stg9_update_0_write12_write(stg9_stg9_update_0_write12_res, stg9, d0, d1, dynamic_address);
	hw_uint<16> stg9_stg9_update_0_write13_res = stg9_update_0_write.extract<208, 223>();
	stg9_stg9_update_0_write13_write(stg9_stg9_update_0_write13_res, stg9, d0, d1, dynamic_address);
	hw_uint<16> stg9_stg9_update_0_write14_res = stg9_update_0_write.extract<224, 239>();
	stg9_stg9_update_0_write14_write(stg9_stg9_update_0_write14_res, stg9, d0, d1, dynamic_address);
	hw_uint<16> stg9_stg9_update_0_write15_res = stg9_update_0_write.extract<240, 255>();
	stg9_stg9_update_0_write15_write(stg9_stg9_update_0_write15_res, stg9, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 338080 bits


// Operation logic
inline void stg0_update_0(in_cache& in, stg0_cache& stg0, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_stg0_update_0_read_bundle_read(in/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg0_generated_compute_unrolled_16(in_0_c__0_value);
	// Produce: stg0
	stg0_stg0_update_0_write_bundle_write(/* arg names */compute_result, stg0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg2_update_0(stg1_cache& stg1, stg2_cache& stg2, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg1
	auto stg1_0_c__0_value = stg1_stg2_update_0_read_bundle_read(stg1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg2_generated_compute_unrolled_16(stg1_0_c__0_value);
	// Produce: stg2
	stg2_stg2_update_0_write_bundle_write(/* arg names */compute_result, stg2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg4_update_0(stg3_cache& stg3, stg4_cache& stg4, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg3
	auto stg3_0_c__0_value = stg3_stg4_update_0_read_bundle_read(stg3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg4_generated_compute_unrolled_16(stg3_0_c__0_value);
	// Produce: stg4
	stg4_stg4_update_0_write_bundle_write(/* arg names */compute_result, stg4, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg6_update_0(stg5_cache& stg5, stg6_cache& stg6, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg5
	auto stg5_0_c__0_value = stg5_stg6_update_0_read_bundle_read(stg5/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg6_generated_compute_unrolled_16(stg5_0_c__0_value);
	// Produce: stg6
	stg6_stg6_update_0_write_bundle_write(/* arg names */compute_result, stg6, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg8_update_0(stg7_cache& stg7, stg8_cache& stg8, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg7
	auto stg7_0_c__0_value = stg7_stg8_update_0_read_bundle_read(stg7/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg8_generated_compute_unrolled_16(stg7_0_c__0_value);
	// Produce: stg8
	stg8_stg8_update_0_write_bundle_write(/* arg names */compute_result, stg8, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void icsc_300MHz_16_update_0(stg9_cache& stg9, HWStream<hw_uint<256> >& /* buffer_args num ports = 16 */icsc_300MHz_16, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg9
	auto stg9_0_c__0_value = stg9_icsc_300MHz_16_update_0_read_bundle_read(stg9/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = icsc_300MHz_16_generated_compute_unrolled_16(stg9_0_c__0_value);
	// Produce: icsc_300MHz_16
	icsc_300MHz_16.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_update_0(HWStream<hw_uint<256> >& /* buffer_args num ports = 16 */in_off_chip, in_cache& in, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_off_chip
	auto in_off_chip_0_c__0_value = in_off_chip.read();
	auto compute_result = in_generated_compute_unrolled_16(in_off_chip_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(/* arg names */compute_result, in, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg1_update_0(stg0_cache& stg0, stg1_cache& stg1, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg0
	auto stg0_0_c__0_value = stg0_stg1_update_0_read_bundle_read(stg0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg1_generated_compute_unrolled_16(stg0_0_c__0_value);
	// Produce: stg1
	stg1_stg1_update_0_write_bundle_write(/* arg names */compute_result, stg1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg3_update_0(stg2_cache& stg2, stg3_cache& stg3, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg2
	auto stg2_0_c__0_value = stg2_stg3_update_0_read_bundle_read(stg2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg3_generated_compute_unrolled_16(stg2_0_c__0_value);
	// Produce: stg3
	stg3_stg3_update_0_write_bundle_write(/* arg names */compute_result, stg3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg5_update_0(stg4_cache& stg4, stg5_cache& stg5, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg4
	auto stg4_0_c__0_value = stg4_stg5_update_0_read_bundle_read(stg4/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg5_generated_compute_unrolled_16(stg4_0_c__0_value);
	// Produce: stg5
	stg5_stg5_update_0_write_bundle_write(/* arg names */compute_result, stg5, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg7_update_0(stg6_cache& stg6, stg7_cache& stg7, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg6
	auto stg6_0_c__0_value = stg6_stg7_update_0_read_bundle_read(stg6/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg7_generated_compute_unrolled_16(stg6_0_c__0_value);
	// Produce: stg7
	stg7_stg7_update_0_write_bundle_write(/* arg names */compute_result, stg7, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg9_update_0(stg8_cache& stg8, stg9_cache& stg9, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg8
	auto stg8_0_c__0_value = stg8_stg9_update_0_read_bundle_read(stg8/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg9_generated_compute_unrolled_16(stg8_0_c__0_value);
	// Produce: stg9
	stg9_stg9_update_0_write_bundle_write(/* arg names */compute_result, stg9, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void icsc_300MHz_16_opt(HWStream<hw_uint<256> >& /* get_args num ports = 16 */in_off_chip, HWStream<hw_uint<256> >& /* get_args num ports = 16 */icsc_300MHz_16) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("icsc_300MHz_16_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg0_cache stg0;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg1_cache stg1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg2_cache stg2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg3_cache stg3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg4_cache stg4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg5_cache stg5;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg6_cache stg6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg7_cache stg7;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg8_cache stg8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  stg9_cache stg9;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081; stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080; stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083; stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079; icsc_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 119 and 0 <= d1 <= 1079; stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085; stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086; stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082; stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084; stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088; stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087; in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
//   { stg7_update_0[d0, d1] -> [8 + d1, 8 + d0, 9] : -2 <= d0 <= 121 and 0 <= d1 <= 1081 }
// Condition for stg7_update_0(((-9 + i2 == 0) && (-6 + i1 >= 0) && (129 - i1 >= 0) && (-8 + i0 >= 0) && (1089 - i0 >= 0)))
//   { stg8_update_0[d0, d1] -> [9 + d1, 9 + d0, 10] : -1 <= d0 <= 120 and 0 <= d1 <= 1080 }
// Condition for stg8_update_0(((-10 + i2 == 0) && (-8 + i1 >= 0) && (129 - i1 >= 0) && (-9 + i0 >= 0) && (1089 - i0 >= 0)))
//   { stg5_update_0[d0, d1] -> [6 + d1, 6 + d0, 7] : -4 <= d0 <= 123 and 0 <= d1 <= 1083 }
// Condition for stg5_update_0(((-7 + i2 == 0) && (-2 + i1 >= 0) && (129 - i1 >= 0) && (-6 + i0 >= 0) && (1089 - i0 >= 0)))
//   { stg9_update_0[d0, d1] -> [10 + d1, 10 + d0, 11] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
// Condition for stg9_update_0(((-11 + i2 == 0) && (-10 + i1 >= 0) && (129 - i1 >= 0) && (-10 + i0 >= 0) && (1089 - i0 >= 0)))
//   { icsc_300MHz_16_update_0[d0, d1] -> [10 + d1, 10 + d0, 12] : 0 <= d0 <= 119 and 0 <= d1 <= 1079 }
// Condition for icsc_300MHz_16_update_0(((-12 + i2 == 0) && (-10 + i1 >= 0) && (129 - i1 >= 0) && (-10 + i0 >= 0) && (1089 - i0 >= 0)))
//   { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -6 <= d0 <= 125 and 0 <= d1 <= 1085 }
// Condition for stg3_update_0(((-5 + i2 == 0) && (2 + i1 >= 0) && (129 - i1 >= 0) && (-4 + i0 >= 0) && (1089 - i0 >= 0)))
//   { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -7 <= d0 <= 126 and 0 <= d1 <= 1086 }
// Condition for stg2_update_0(((-4 + i2 == 0) && (4 + i1 >= 0) && (129 - i1 >= 0) && (-3 + i0 >= 0) && (1089 - i0 >= 0)))
//   { stg6_update_0[d0, d1] -> [7 + d1, 7 + d0, 8] : -3 <= d0 <= 122 and 0 <= d1 <= 1082 }
// Condition for stg6_update_0(((-8 + i2 == 0) && (-4 + i1 >= 0) && (129 - i1 >= 0) && (-7 + i0 >= 0) && (1089 - i0 >= 0)))
//   { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : -5 <= d0 <= 124 and 0 <= d1 <= 1084 }
// Condition for stg4_update_0(((-6 + i2 == 0) && (i1 >= 0) && (129 - i1 >= 0) && (-5 + i0 >= 0) && (1089 - i0 >= 0)))
//   { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -9 <= d0 <= 128 and 0 <= d1 <= 1088 }
// Condition for stg0_update_0(((-2 + i2 == 0) && (8 + i1 >= 0) && (129 - i1 >= 0) && (-1 + i0 >= 0) && (1089 - i0 >= 0)))
//   { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -8 <= d0 <= 127 and 0 <= d1 <= 1087 }
// Condition for stg1_update_0(((-3 + i2 == 0) && (6 + i1 >= 0) && (129 - i1 >= 0) && (-2 + i0 >= 0) && (1089 - i0 >= 0)))
//   { in_update_0[d0, d1] -> [d1, d0, 1] : -10 <= d0 <= 129 and 0 <= d1 <= 1089 }
// Condition for in_update_0(((-1 + i2 == 0) && (10 + i1 >= 0) && (129 - i1 >= 0) && (i0 >= 0) && (1089 - i0 >= 0)))

  /*
  // Schedules...
    // icsc_300MHz_16_update_0 -> [1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*12]
    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // stg0_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
    // stg1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
    // stg2_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*4]
    // stg3_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*5]
    // stg4_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*6]
    // stg5_update_0 -> [1*d1*1*1 + 1*6,1*d0*1*1 + 1*6,1*7]
    // stg6_update_0 -> [1*d1*1*1 + 1*7,1*d0*1*1 + 1*7,1*8]
    // stg7_update_0 -> [1*d1*1*1 + 1*8,1*d0*1*1 + 1*8,1*9]
    // stg8_update_0 -> [1*d1*1*1 + 1*9,1*d0*1*1 + 1*9,1*10]
    // stg9_update_0 -> [1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*11]
for (int c0 = 0; c0 <= 1089; c0++) {
  for (int c1 = -10; c1 <= 129; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((-10 <= c1 && c1 <= 129) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1089) && ((c0 - 0) % 1 == 0)) {
      in_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((-8 <= c1 && c1 <= 129) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1089) && ((c0 - 1) % 1 == 0)) {
      stg0_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((-6 <= c1 && c1 <= 129) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1089) && ((c0 - 2) % 1 == 0)) {
      stg1_update_0((c1 - 2) / 1, (c0 - 2) / 1);
    }

    if ((-4 <= c1 && c1 <= 129) && ((c1 - 3) % 1 == 0) && (3 <= c0 && c0 <= 1089) && ((c0 - 3) % 1 == 0)) {
      stg2_update_0((c1 - 3) / 1, (c0 - 3) / 1);
    }

    if ((-2 <= c1 && c1 <= 129) && ((c1 - 4) % 1 == 0) && (4 <= c0 && c0 <= 1089) && ((c0 - 4) % 1 == 0)) {
      stg3_update_0((c1 - 4) / 1, (c0 - 4) / 1);
    }

    if ((0 <= c1 && c1 <= 129) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1089) && ((c0 - 5) % 1 == 0)) {
      stg4_update_0((c1 - 5) / 1, (c0 - 5) / 1);
    }

    if ((2 <= c1 && c1 <= 129) && ((c1 - 6) % 1 == 0) && (6 <= c0 && c0 <= 1089) && ((c0 - 6) % 1 == 0)) {
      stg5_update_0((c1 - 6) / 1, (c0 - 6) / 1);
    }

    if ((4 <= c1 && c1 <= 129) && ((c1 - 7) % 1 == 0) && (7 <= c0 && c0 <= 1089) && ((c0 - 7) % 1 == 0)) {
      stg6_update_0((c1 - 7) / 1, (c0 - 7) / 1);
    }

    if ((6 <= c1 && c1 <= 129) && ((c1 - 8) % 1 == 0) && (8 <= c0 && c0 <= 1089) && ((c0 - 8) % 1 == 0)) {
      stg7_update_0((c1 - 8) / 1, (c0 - 8) / 1);
    }

    if ((8 <= c1 && c1 <= 129) && ((c1 - 9) % 1 == 0) && (9 <= c0 && c0 <= 1089) && ((c0 - 9) % 1 == 0)) {
      stg8_update_0((c1 - 9) / 1, (c0 - 9) / 1);
    }

    if ((10 <= c1 && c1 <= 129) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1089) && ((c0 - 10) % 1 == 0)) {
      stg9_update_0((c1 - 10) / 1, (c0 - 10) / 1);
    }

    if ((10 <= c1 && c1 <= 129) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1089) && ((c0 - 10) % 1 == 0)) {
      icsc_300MHz_16_update_0((c1 - 10) / 1, (c0 - 10) / 1);
    }

  }
}

  */
	  // Schedules...
	    // icsc_300MHz_16_update_0 -> [1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*12]
	    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // stg0_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // stg1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
	    // stg2_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*4]
	    // stg3_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*5]
	    // stg4_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*6]
	    // stg5_update_0 -> [1*d1*1*1 + 1*6,1*d0*1*1 + 1*6,1*7]
	    // stg6_update_0 -> [1*d1*1*1 + 1*7,1*d0*1*1 + 1*7,1*8]
	    // stg7_update_0 -> [1*d1*1*1 + 1*8,1*d0*1*1 + 1*8,1*9]
	    // stg8_update_0 -> [1*d1*1*1 + 1*9,1*d0*1*1 + 1*9,1*10]
	    // stg9_update_0 -> [1*d1*1*1 + 1*10,1*d0*1*1 + 1*10,1*11]
	for (int c0 = 0; c0 <= 1089; c0++) {
	  for (int c1 = -10; c1 <= 129; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-10 <= c1 && c1 <= 129) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1089) && ((c0 - 0) % 1 == 0)) {
	      in_update_0(in_off_chip /* buf name */, in, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((-8 <= c1 && c1 <= 129) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1089) && ((c0 - 1) % 1 == 0)) {
	      stg0_update_0(in /* buf name */, stg0, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((-6 <= c1 && c1 <= 129) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1089) && ((c0 - 2) % 1 == 0)) {
	      stg1_update_0(stg0 /* buf name */, stg1, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((-4 <= c1 && c1 <= 129) && ((c1 - 3) % 1 == 0) && (3 <= c0 && c0 <= 1089) && ((c0 - 3) % 1 == 0)) {
	      stg2_update_0(stg1 /* buf name */, stg2, (c1 - 3) / 1, (c0 - 3) / 1);
	    }
	
	    if ((-2 <= c1 && c1 <= 129) && ((c1 - 4) % 1 == 0) && (4 <= c0 && c0 <= 1089) && ((c0 - 4) % 1 == 0)) {
	      stg3_update_0(stg2 /* buf name */, stg3, (c1 - 4) / 1, (c0 - 4) / 1);
	    }
	
	    if ((0 <= c1 && c1 <= 129) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1089) && ((c0 - 5) % 1 == 0)) {
	      stg4_update_0(stg3 /* buf name */, stg4, (c1 - 5) / 1, (c0 - 5) / 1);
	    }
	
	    if ((2 <= c1 && c1 <= 129) && ((c1 - 6) % 1 == 0) && (6 <= c0 && c0 <= 1089) && ((c0 - 6) % 1 == 0)) {
	      stg5_update_0(stg4 /* buf name */, stg5, (c1 - 6) / 1, (c0 - 6) / 1);
	    }
	
	    if ((4 <= c1 && c1 <= 129) && ((c1 - 7) % 1 == 0) && (7 <= c0 && c0 <= 1089) && ((c0 - 7) % 1 == 0)) {
	      stg6_update_0(stg5 /* buf name */, stg6, (c1 - 7) / 1, (c0 - 7) / 1);
	    }
	
	    if ((6 <= c1 && c1 <= 129) && ((c1 - 8) % 1 == 0) && (8 <= c0 && c0 <= 1089) && ((c0 - 8) % 1 == 0)) {
	      stg7_update_0(stg6 /* buf name */, stg7, (c1 - 8) / 1, (c0 - 8) / 1);
	    }
	
	    if ((8 <= c1 && c1 <= 129) && ((c1 - 9) % 1 == 0) && (9 <= c0 && c0 <= 1089) && ((c0 - 9) % 1 == 0)) {
	      stg8_update_0(stg7 /* buf name */, stg8, (c1 - 9) / 1, (c0 - 9) / 1);
	    }
	
	    if ((10 <= c1 && c1 <= 129) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1089) && ((c0 - 10) % 1 == 0)) {
	      stg9_update_0(stg8 /* buf name */, stg9, (c1 - 10) / 1, (c0 - 10) / 1);
	    }
	
	    if ((10 <= c1 && c1 <= 129) && ((c1 - 10) % 1 == 0) && (10 <= c0 && c0 <= 1089) && ((c0 - 10) % 1 == 0)) {
	      icsc_300MHz_16_update_0(stg9 /* buf name */, icsc_300MHz_16, (c1 - 10) / 1, (c0 - 10) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void icsc_300MHz_16_opt_wrapper(HWStream<hw_uint<256> >& /* get_args num ports = 16 */in_off_chip, HWStream<hw_uint<256> >& /* get_args num ports = 16 */icsc_300MHz_16, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    icsc_300MHz_16_opt(in_off_chip, icsc_300MHz_16);
  }
}
#ifdef __VIVADO_SYNTH__
  // { icsc_300MHz_16_update_0[root = 0, icsc_300MHz_16_0, icsc_300MHz_16_1] -> icsc_300MHz_16[0, 0] : 0 <= icsc_300MHz_16_0 <= 119 and 0 <= icsc_300MHz_16_1 <= 1079 }
const int icsc_300MHz_16_update_0_write_pipe0_num_transfers = 129600;
  // { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : -10 <= in_0 <= 129 and 0 <= in_1 <= 1089 }
const int in_update_0_read_pipe0_num_transfers = 152600;


extern "C" {

void icsc_300MHz_16_opt_accel(hw_uint<256>* in_update_0_read_pipe0, hw_uint<256>* icsc_300MHz_16_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = icsc_300MHz_16_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = icsc_300MHz_16_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<256> > in_update_0_read_pipe0_channel;
  static HWStream<hw_uint<256> > icsc_300MHz_16_update_0_write_pipe0_channel;

  burst_read<256>(in_update_0_read_pipe0, in_update_0_read_pipe0_channel, in_update_0_read_pipe0_num_transfers*size);

  icsc_300MHz_16_opt_wrapper(in_update_0_read_pipe0_channel, icsc_300MHz_16_update_0_write_pipe0_channel, size);

  burst_write<256>(icsc_300MHz_16_update_0_write_pipe0, icsc_300MHz_16_update_0_write_pipe0_channel, icsc_300MHz_16_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void icsc_300MHz_16_opt_rdai(HWStream<hw_uint<256> >& in_update_0_read_pipe0, HWStream<hw_uint<256> >&  icsc_300MHz_16_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = icsc_300MHz_16_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  icsc_300MHz_16_opt(in_update_0_read_pipe0, icsc_300MHz_16_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

