#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: icsc_5s_32_opt_compute_units.h
#include "icsc_5s_32_opt_compute_units.h"

struct in_in_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-128, 2048], [0, 1083]}
	// Capacity: 72
	// # of read delays: 4
  // 0, 1, 70, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 68> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_69() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_70() {
		return f4;
	}

	inline hw_uint<16> peek_71() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write1_merged_banks_4_cache {
	// RAM Box: {[-127, 2017], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write10_merged_banks_4_cache {
	// RAM Box: {[-118, 2026], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write11_merged_banks_4_cache {
	// RAM Box: {[-117, 2027], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write12_merged_banks_4_cache {
	// RAM Box: {[-116, 2028], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write13_merged_banks_4_cache {
	// RAM Box: {[-115, 2029], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write14_merged_banks_4_cache {
	// RAM Box: {[-114, 2030], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write15_merged_banks_4_cache {
	// RAM Box: {[-113, 2031], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write16_merged_banks_4_cache {
	// RAM Box: {[-112, 2032], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write17_merged_banks_4_cache {
	// RAM Box: {[-111, 2033], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write18_merged_banks_4_cache {
	// RAM Box: {[-110, 2034], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write19_merged_banks_4_cache {
	// RAM Box: {[-109, 2035], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write2_merged_banks_4_cache {
	// RAM Box: {[-126, 2018], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write20_merged_banks_4_cache {
	// RAM Box: {[-108, 2036], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write21_merged_banks_4_cache {
	// RAM Box: {[-107, 2037], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write22_merged_banks_4_cache {
	// RAM Box: {[-106, 2038], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write23_merged_banks_4_cache {
	// RAM Box: {[-105, 2039], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write24_merged_banks_4_cache {
	// RAM Box: {[-104, 2040], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write25_merged_banks_4_cache {
	// RAM Box: {[-103, 2041], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write26_merged_banks_4_cache {
	// RAM Box: {[-102, 2042], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write27_merged_banks_4_cache {
	// RAM Box: {[-101, 2043], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write28_merged_banks_4_cache {
	// RAM Box: {[-100, 2044], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write29_merged_banks_4_cache {
	// RAM Box: {[-99, 2045], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write3_merged_banks_4_cache {
	// RAM Box: {[-125, 2019], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write30_merged_banks_4_cache {
	// RAM Box: {[-98, 2046], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write31_merged_banks_4_cache {
	// RAM Box: {[-129, 2047], [0, 1084]}
	// Capacity: 73
	// # of read delays: 4
  // 0, 1, 71, 72
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write4_merged_banks_4_cache {
	// RAM Box: {[-124, 2020], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write5_merged_banks_4_cache {
	// RAM Box: {[-123, 2021], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write6_merged_banks_4_cache {
	// RAM Box: {[-122, 2022], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write7_merged_banks_4_cache {
	// RAM Box: {[-121, 2023], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write8_merged_banks_4_cache {
	// RAM Box: {[-120, 2024], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write9_merged_banks_4_cache {
	// RAM Box: {[-119, 2025], [0, 1084]}
	// Capacity: 72
	// # of read delays: 3
  // 0, 1, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 69> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_71() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_cache {
  // # of banks: 32
  in_in_update_0_write0_merged_banks_4_cache in_in_update_0_write0_merged_banks_4;
  in_in_update_0_write1_merged_banks_4_cache in_in_update_0_write1_merged_banks_4;
  in_in_update_0_write10_merged_banks_4_cache in_in_update_0_write10_merged_banks_4;
  in_in_update_0_write11_merged_banks_4_cache in_in_update_0_write11_merged_banks_4;
  in_in_update_0_write12_merged_banks_4_cache in_in_update_0_write12_merged_banks_4;
  in_in_update_0_write13_merged_banks_4_cache in_in_update_0_write13_merged_banks_4;
  in_in_update_0_write14_merged_banks_4_cache in_in_update_0_write14_merged_banks_4;
  in_in_update_0_write15_merged_banks_4_cache in_in_update_0_write15_merged_banks_4;
  in_in_update_0_write16_merged_banks_4_cache in_in_update_0_write16_merged_banks_4;
  in_in_update_0_write17_merged_banks_4_cache in_in_update_0_write17_merged_banks_4;
  in_in_update_0_write18_merged_banks_4_cache in_in_update_0_write18_merged_banks_4;
  in_in_update_0_write19_merged_banks_4_cache in_in_update_0_write19_merged_banks_4;
  in_in_update_0_write2_merged_banks_4_cache in_in_update_0_write2_merged_banks_4;
  in_in_update_0_write20_merged_banks_4_cache in_in_update_0_write20_merged_banks_4;
  in_in_update_0_write21_merged_banks_4_cache in_in_update_0_write21_merged_banks_4;
  in_in_update_0_write22_merged_banks_4_cache in_in_update_0_write22_merged_banks_4;
  in_in_update_0_write23_merged_banks_4_cache in_in_update_0_write23_merged_banks_4;
  in_in_update_0_write24_merged_banks_4_cache in_in_update_0_write24_merged_banks_4;
  in_in_update_0_write25_merged_banks_4_cache in_in_update_0_write25_merged_banks_4;
  in_in_update_0_write26_merged_banks_4_cache in_in_update_0_write26_merged_banks_4;
  in_in_update_0_write27_merged_banks_4_cache in_in_update_0_write27_merged_banks_4;
  in_in_update_0_write28_merged_banks_4_cache in_in_update_0_write28_merged_banks_4;
  in_in_update_0_write29_merged_banks_4_cache in_in_update_0_write29_merged_banks_4;
  in_in_update_0_write3_merged_banks_4_cache in_in_update_0_write3_merged_banks_4;
  in_in_update_0_write30_merged_banks_4_cache in_in_update_0_write30_merged_banks_4;
  in_in_update_0_write31_merged_banks_4_cache in_in_update_0_write31_merged_banks_4;
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

inline void in_in_update_0_write16_write(hw_uint<16>& in_in_update_0_write16, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write16_merged_banks_4.push(in_in_update_0_write16);
}

inline void in_in_update_0_write17_write(hw_uint<16>& in_in_update_0_write17, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write17_merged_banks_4.push(in_in_update_0_write17);
}

inline void in_in_update_0_write18_write(hw_uint<16>& in_in_update_0_write18, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write18_merged_banks_4.push(in_in_update_0_write18);
}

inline void in_in_update_0_write19_write(hw_uint<16>& in_in_update_0_write19, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write19_merged_banks_4.push(in_in_update_0_write19);
}

inline void in_in_update_0_write2_write(hw_uint<16>& in_in_update_0_write2, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write2_merged_banks_4.push(in_in_update_0_write2);
}

inline void in_in_update_0_write20_write(hw_uint<16>& in_in_update_0_write20, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write20_merged_banks_4.push(in_in_update_0_write20);
}

inline void in_in_update_0_write21_write(hw_uint<16>& in_in_update_0_write21, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write21_merged_banks_4.push(in_in_update_0_write21);
}

inline void in_in_update_0_write22_write(hw_uint<16>& in_in_update_0_write22, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write22_merged_banks_4.push(in_in_update_0_write22);
}

inline void in_in_update_0_write23_write(hw_uint<16>& in_in_update_0_write23, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write23_merged_banks_4.push(in_in_update_0_write23);
}

inline void in_in_update_0_write24_write(hw_uint<16>& in_in_update_0_write24, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write24_merged_banks_4.push(in_in_update_0_write24);
}

inline void in_in_update_0_write25_write(hw_uint<16>& in_in_update_0_write25, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write25_merged_banks_4.push(in_in_update_0_write25);
}

inline void in_in_update_0_write26_write(hw_uint<16>& in_in_update_0_write26, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write26_merged_banks_4.push(in_in_update_0_write26);
}

inline void in_in_update_0_write27_write(hw_uint<16>& in_in_update_0_write27, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write27_merged_banks_4.push(in_in_update_0_write27);
}

inline void in_in_update_0_write28_write(hw_uint<16>& in_in_update_0_write28, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write28_merged_banks_4.push(in_in_update_0_write28);
}

inline void in_in_update_0_write29_write(hw_uint<16>& in_in_update_0_write29, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write29_merged_banks_4.push(in_in_update_0_write29);
}

inline void in_in_update_0_write3_write(hw_uint<16>& in_in_update_0_write3, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write3_merged_banks_4.push(in_in_update_0_write3);
}

inline void in_in_update_0_write30_write(hw_uint<16>& in_in_update_0_write30, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write30_merged_banks_4.push(in_in_update_0_write30);
}

inline void in_in_update_0_write31_write(hw_uint<16>& in_in_update_0_write31, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write31_merged_banks_4.push(in_in_update_0_write31);
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
  // stg0_rd0 read pattern: { stg0_update_0[d0, d1] -> in[-1 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write31 = in.in_in_update_0_write31_merged_banks_4.peek_72();
  return value_in_in_update_0_write31;
  return 0;
}

inline hw_uint<16> stg0_rd1_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd1 read pattern: { stg0_update_0[d0, d1] -> in[32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_71();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> stg0_rd10_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd10 read pattern: { stg0_update_0[d0, d1] -> in[2 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_4.peek_1();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> stg0_rd100_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd100 read pattern: { stg0_update_0[d0, d1] -> in[24 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write24 = in.in_in_update_0_write24_merged_banks_4.peek_71();
  return value_in_in_update_0_write24;
  return 0;
}

inline hw_uint<16> stg0_rd101_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd101 read pattern: { stg0_update_0[d0, d1] -> in[25 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write25 = in.in_in_update_0_write25_merged_banks_4.peek_71();
  return value_in_in_update_0_write25;
  return 0;
}

inline hw_uint<16> stg0_rd102_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd102 read pattern: { stg0_update_0[d0, d1] -> in[25 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write25 = in.in_in_update_0_write25_merged_banks_4.peek_1();
  return value_in_in_update_0_write25;
  return 0;
}

inline hw_uint<16> stg0_rd103_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd103 read pattern: { stg0_update_0[d0, d1] -> in[26 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write26 = in.in_in_update_0_write26_merged_banks_4.peek_71();
  return value_in_in_update_0_write26;
  return 0;
}

inline hw_uint<16> stg0_rd104_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd104 read pattern: { stg0_update_0[d0, d1] -> in[25 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write25 = in.in_in_update_0_write25_merged_banks_4.peek_71();
  return value_in_in_update_0_write25;
  return 0;
}

inline hw_uint<16> stg0_rd105_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd105 read pattern: { stg0_update_0[d0, d1] -> in[26 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write26 = in.in_in_update_0_write26_merged_banks_4.peek_71();
  return value_in_in_update_0_write26;
  return 0;
}

inline hw_uint<16> stg0_rd106_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd106 read pattern: { stg0_update_0[d0, d1] -> in[26 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write26 = in.in_in_update_0_write26_merged_banks_4.peek_1();
  return value_in_in_update_0_write26;
  return 0;
}

inline hw_uint<16> stg0_rd107_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd107 read pattern: { stg0_update_0[d0, d1] -> in[27 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write27 = in.in_in_update_0_write27_merged_banks_4.peek_71();
  return value_in_in_update_0_write27;
  return 0;
}

inline hw_uint<16> stg0_rd108_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd108 read pattern: { stg0_update_0[d0, d1] -> in[26 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write26 = in.in_in_update_0_write26_merged_banks_4.peek_71();
  return value_in_in_update_0_write26;
  return 0;
}

inline hw_uint<16> stg0_rd109_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd109 read pattern: { stg0_update_0[d0, d1] -> in[27 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write27 = in.in_in_update_0_write27_merged_banks_4.peek_71();
  return value_in_in_update_0_write27;
  return 0;
}

inline hw_uint<16> stg0_rd11_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd11 read pattern: { stg0_update_0[d0, d1] -> in[3 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_4.peek_71();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> stg0_rd110_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd110 read pattern: { stg0_update_0[d0, d1] -> in[27 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write27 = in.in_in_update_0_write27_merged_banks_4.peek_1();
  return value_in_in_update_0_write27;
  return 0;
}

inline hw_uint<16> stg0_rd111_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd111 read pattern: { stg0_update_0[d0, d1] -> in[28 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write28 = in.in_in_update_0_write28_merged_banks_4.peek_71();
  return value_in_in_update_0_write28;
  return 0;
}

inline hw_uint<16> stg0_rd112_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd112 read pattern: { stg0_update_0[d0, d1] -> in[27 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write27 = in.in_in_update_0_write27_merged_banks_4.peek_71();
  return value_in_in_update_0_write27;
  return 0;
}

inline hw_uint<16> stg0_rd113_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd113 read pattern: { stg0_update_0[d0, d1] -> in[28 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write28 = in.in_in_update_0_write28_merged_banks_4.peek_71();
  return value_in_in_update_0_write28;
  return 0;
}

inline hw_uint<16> stg0_rd114_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd114 read pattern: { stg0_update_0[d0, d1] -> in[28 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write28 = in.in_in_update_0_write28_merged_banks_4.peek_1();
  return value_in_in_update_0_write28;
  return 0;
}

inline hw_uint<16> stg0_rd115_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd115 read pattern: { stg0_update_0[d0, d1] -> in[29 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write29 = in.in_in_update_0_write29_merged_banks_4.peek_71();
  return value_in_in_update_0_write29;
  return 0;
}

inline hw_uint<16> stg0_rd116_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd116 read pattern: { stg0_update_0[d0, d1] -> in[28 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write28 = in.in_in_update_0_write28_merged_banks_4.peek_71();
  return value_in_in_update_0_write28;
  return 0;
}

inline hw_uint<16> stg0_rd117_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd117 read pattern: { stg0_update_0[d0, d1] -> in[29 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write29 = in.in_in_update_0_write29_merged_banks_4.peek_71();
  return value_in_in_update_0_write29;
  return 0;
}

inline hw_uint<16> stg0_rd118_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd118 read pattern: { stg0_update_0[d0, d1] -> in[29 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write29 = in.in_in_update_0_write29_merged_banks_4.peek_1();
  return value_in_in_update_0_write29;
  return 0;
}

inline hw_uint<16> stg0_rd119_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd119 read pattern: { stg0_update_0[d0, d1] -> in[30 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write30 = in.in_in_update_0_write30_merged_banks_4.peek_71();
  return value_in_in_update_0_write30;
  return 0;
}

inline hw_uint<16> stg0_rd12_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd12 read pattern: { stg0_update_0[d0, d1] -> in[2 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_4.peek_71();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> stg0_rd120_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd120 read pattern: { stg0_update_0[d0, d1] -> in[29 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write29 = in.in_in_update_0_write29_merged_banks_4.peek_71();
  return value_in_in_update_0_write29;
  return 0;
}

inline hw_uint<16> stg0_rd121_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd121 read pattern: { stg0_update_0[d0, d1] -> in[30 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write30 = in.in_in_update_0_write30_merged_banks_4.peek_71();
  return value_in_in_update_0_write30;
  return 0;
}

inline hw_uint<16> stg0_rd122_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd122 read pattern: { stg0_update_0[d0, d1] -> in[30 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write30 = in.in_in_update_0_write30_merged_banks_4.peek_1();
  return value_in_in_update_0_write30;
  return 0;
}

inline hw_uint<16> stg0_rd123_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd123 read pattern: { stg0_update_0[d0, d1] -> in[31 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write31 = in.in_in_update_0_write31_merged_banks_4.peek_71();
  return value_in_in_update_0_write31;
  return 0;
}

inline hw_uint<16> stg0_rd124_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd124 read pattern: { stg0_update_0[d0, d1] -> in[30 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write30 = in.in_in_update_0_write30_merged_banks_4.peek_71();
  return value_in_in_update_0_write30;
  return 0;
}

inline hw_uint<16> stg0_rd125_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd125 read pattern: { stg0_update_0[d0, d1] -> in[31 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write31 = in.in_in_update_0_write31_merged_banks_4.peek_71();
  return value_in_in_update_0_write31;
  return 0;
}

inline hw_uint<16> stg0_rd126_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd126 read pattern: { stg0_update_0[d0, d1] -> in[31 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write31 = in.in_in_update_0_write31_merged_banks_4.peek_1();
  return value_in_in_update_0_write31;
  return 0;
}

inline hw_uint<16> stg0_rd127_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd127 read pattern: { stg0_update_0[d0, d1] -> in[32 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_70();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> stg0_rd13_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd13 read pattern: { stg0_update_0[d0, d1] -> in[3 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_4.peek_71();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> stg0_rd14_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd14 read pattern: { stg0_update_0[d0, d1] -> in[3 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_4.peek_1();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> stg0_rd15_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd15 read pattern: { stg0_update_0[d0, d1] -> in[4 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_4.peek_71();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> stg0_rd16_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd16 read pattern: { stg0_update_0[d0, d1] -> in[3 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_4.peek_71();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> stg0_rd17_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd17 read pattern: { stg0_update_0[d0, d1] -> in[4 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_4.peek_71();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> stg0_rd18_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd18 read pattern: { stg0_update_0[d0, d1] -> in[4 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_4.peek_1();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> stg0_rd19_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd19 read pattern: { stg0_update_0[d0, d1] -> in[5 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_4.peek_71();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> stg0_rd2_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd2 read pattern: { stg0_update_0[d0, d1] -> in[32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_1();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> stg0_rd20_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd20 read pattern: { stg0_update_0[d0, d1] -> in[4 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_4.peek_71();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> stg0_rd21_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd21 read pattern: { stg0_update_0[d0, d1] -> in[5 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_4.peek_71();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> stg0_rd22_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd22 read pattern: { stg0_update_0[d0, d1] -> in[5 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_4.peek_1();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> stg0_rd23_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd23 read pattern: { stg0_update_0[d0, d1] -> in[6 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_4.peek_71();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> stg0_rd24_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd24 read pattern: { stg0_update_0[d0, d1] -> in[5 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_4.peek_71();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> stg0_rd25_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd25 read pattern: { stg0_update_0[d0, d1] -> in[6 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_4.peek_71();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> stg0_rd26_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd26 read pattern: { stg0_update_0[d0, d1] -> in[6 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_4.peek_1();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> stg0_rd27_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd27 read pattern: { stg0_update_0[d0, d1] -> in[7 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_4.peek_71();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> stg0_rd28_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd28 read pattern: { stg0_update_0[d0, d1] -> in[6 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_4.peek_71();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> stg0_rd29_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd29 read pattern: { stg0_update_0[d0, d1] -> in[7 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_4.peek_71();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> stg0_rd3_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd3 read pattern: { stg0_update_0[d0, d1] -> in[1 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_4.peek_71();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> stg0_rd30_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd30 read pattern: { stg0_update_0[d0, d1] -> in[7 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_4.peek_1();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> stg0_rd31_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd31 read pattern: { stg0_update_0[d0, d1] -> in[8 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_4.peek_71();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> stg0_rd32_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd32 read pattern: { stg0_update_0[d0, d1] -> in[7 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_4.peek_71();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> stg0_rd33_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd33 read pattern: { stg0_update_0[d0, d1] -> in[8 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_4.peek_71();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> stg0_rd34_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd34 read pattern: { stg0_update_0[d0, d1] -> in[8 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_4.peek_1();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> stg0_rd35_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd35 read pattern: { stg0_update_0[d0, d1] -> in[9 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_4.peek_71();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> stg0_rd36_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd36 read pattern: { stg0_update_0[d0, d1] -> in[8 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_4.peek_71();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> stg0_rd37_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd37 read pattern: { stg0_update_0[d0, d1] -> in[9 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_4.peek_71();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> stg0_rd38_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd38 read pattern: { stg0_update_0[d0, d1] -> in[9 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_4.peek_1();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> stg0_rd39_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd39 read pattern: { stg0_update_0[d0, d1] -> in[10 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_4.peek_71();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> stg0_rd4_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd4 read pattern: { stg0_update_0[d0, d1] -> in[32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_4.peek_71();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> stg0_rd40_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd40 read pattern: { stg0_update_0[d0, d1] -> in[9 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_4.peek_71();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> stg0_rd41_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd41 read pattern: { stg0_update_0[d0, d1] -> in[10 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_4.peek_71();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> stg0_rd42_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd42 read pattern: { stg0_update_0[d0, d1] -> in[10 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_4.peek_1();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> stg0_rd43_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd43 read pattern: { stg0_update_0[d0, d1] -> in[11 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_4.peek_71();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> stg0_rd44_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd44 read pattern: { stg0_update_0[d0, d1] -> in[10 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_4.peek_71();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> stg0_rd45_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd45 read pattern: { stg0_update_0[d0, d1] -> in[11 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_4.peek_71();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> stg0_rd46_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd46 read pattern: { stg0_update_0[d0, d1] -> in[11 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_4.peek_1();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> stg0_rd47_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd47 read pattern: { stg0_update_0[d0, d1] -> in[12 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_4.peek_71();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> stg0_rd48_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd48 read pattern: { stg0_update_0[d0, d1] -> in[11 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_4.peek_71();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> stg0_rd49_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd49 read pattern: { stg0_update_0[d0, d1] -> in[12 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_4.peek_71();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> stg0_rd5_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd5 read pattern: { stg0_update_0[d0, d1] -> in[1 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_4.peek_71();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> stg0_rd50_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd50 read pattern: { stg0_update_0[d0, d1] -> in[12 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_4.peek_1();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> stg0_rd51_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd51 read pattern: { stg0_update_0[d0, d1] -> in[13 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_4.peek_71();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> stg0_rd52_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd52 read pattern: { stg0_update_0[d0, d1] -> in[12 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_4.peek_71();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> stg0_rd53_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd53 read pattern: { stg0_update_0[d0, d1] -> in[13 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_4.peek_71();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> stg0_rd54_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd54 read pattern: { stg0_update_0[d0, d1] -> in[13 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_4.peek_1();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> stg0_rd55_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd55 read pattern: { stg0_update_0[d0, d1] -> in[14 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_4.peek_71();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> stg0_rd56_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd56 read pattern: { stg0_update_0[d0, d1] -> in[13 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_4.peek_71();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> stg0_rd57_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd57 read pattern: { stg0_update_0[d0, d1] -> in[14 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_4.peek_71();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> stg0_rd58_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd58 read pattern: { stg0_update_0[d0, d1] -> in[14 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_4.peek_1();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> stg0_rd59_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd59 read pattern: { stg0_update_0[d0, d1] -> in[15 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_4.peek_71();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> stg0_rd6_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd6 read pattern: { stg0_update_0[d0, d1] -> in[1 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_4.peek_1();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> stg0_rd60_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd60 read pattern: { stg0_update_0[d0, d1] -> in[14 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_4.peek_71();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> stg0_rd61_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd61 read pattern: { stg0_update_0[d0, d1] -> in[15 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_4.peek_71();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> stg0_rd62_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd62 read pattern: { stg0_update_0[d0, d1] -> in[15 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_4.peek_1();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> stg0_rd63_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd63 read pattern: { stg0_update_0[d0, d1] -> in[16 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write16 = in.in_in_update_0_write16_merged_banks_4.peek_71();
  return value_in_in_update_0_write16;
  return 0;
}

inline hw_uint<16> stg0_rd64_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd64 read pattern: { stg0_update_0[d0, d1] -> in[15 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_4.peek_71();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> stg0_rd65_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd65 read pattern: { stg0_update_0[d0, d1] -> in[16 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write16 = in.in_in_update_0_write16_merged_banks_4.peek_71();
  return value_in_in_update_0_write16;
  return 0;
}

inline hw_uint<16> stg0_rd66_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd66 read pattern: { stg0_update_0[d0, d1] -> in[16 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write16 = in.in_in_update_0_write16_merged_banks_4.peek_1();
  return value_in_in_update_0_write16;
  return 0;
}

inline hw_uint<16> stg0_rd67_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd67 read pattern: { stg0_update_0[d0, d1] -> in[17 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write17 = in.in_in_update_0_write17_merged_banks_4.peek_71();
  return value_in_in_update_0_write17;
  return 0;
}

inline hw_uint<16> stg0_rd68_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd68 read pattern: { stg0_update_0[d0, d1] -> in[16 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write16 = in.in_in_update_0_write16_merged_banks_4.peek_71();
  return value_in_in_update_0_write16;
  return 0;
}

inline hw_uint<16> stg0_rd69_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd69 read pattern: { stg0_update_0[d0, d1] -> in[17 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write17 = in.in_in_update_0_write17_merged_banks_4.peek_71();
  return value_in_in_update_0_write17;
  return 0;
}

inline hw_uint<16> stg0_rd7_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd7 read pattern: { stg0_update_0[d0, d1] -> in[2 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_4.peek_71();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> stg0_rd70_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd70 read pattern: { stg0_update_0[d0, d1] -> in[17 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write17 = in.in_in_update_0_write17_merged_banks_4.peek_1();
  return value_in_in_update_0_write17;
  return 0;
}

inline hw_uint<16> stg0_rd71_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd71 read pattern: { stg0_update_0[d0, d1] -> in[18 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write18 = in.in_in_update_0_write18_merged_banks_4.peek_71();
  return value_in_in_update_0_write18;
  return 0;
}

inline hw_uint<16> stg0_rd72_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd72 read pattern: { stg0_update_0[d0, d1] -> in[17 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write17 = in.in_in_update_0_write17_merged_banks_4.peek_71();
  return value_in_in_update_0_write17;
  return 0;
}

inline hw_uint<16> stg0_rd73_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd73 read pattern: { stg0_update_0[d0, d1] -> in[18 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write18 = in.in_in_update_0_write18_merged_banks_4.peek_71();
  return value_in_in_update_0_write18;
  return 0;
}

inline hw_uint<16> stg0_rd74_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd74 read pattern: { stg0_update_0[d0, d1] -> in[18 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write18 = in.in_in_update_0_write18_merged_banks_4.peek_1();
  return value_in_in_update_0_write18;
  return 0;
}

inline hw_uint<16> stg0_rd75_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd75 read pattern: { stg0_update_0[d0, d1] -> in[19 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write19 = in.in_in_update_0_write19_merged_banks_4.peek_71();
  return value_in_in_update_0_write19;
  return 0;
}

inline hw_uint<16> stg0_rd76_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd76 read pattern: { stg0_update_0[d0, d1] -> in[18 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write18 = in.in_in_update_0_write18_merged_banks_4.peek_71();
  return value_in_in_update_0_write18;
  return 0;
}

inline hw_uint<16> stg0_rd77_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd77 read pattern: { stg0_update_0[d0, d1] -> in[19 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write19 = in.in_in_update_0_write19_merged_banks_4.peek_71();
  return value_in_in_update_0_write19;
  return 0;
}

inline hw_uint<16> stg0_rd78_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd78 read pattern: { stg0_update_0[d0, d1] -> in[19 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write19 = in.in_in_update_0_write19_merged_banks_4.peek_1();
  return value_in_in_update_0_write19;
  return 0;
}

inline hw_uint<16> stg0_rd79_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd79 read pattern: { stg0_update_0[d0, d1] -> in[20 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write20 = in.in_in_update_0_write20_merged_banks_4.peek_71();
  return value_in_in_update_0_write20;
  return 0;
}

inline hw_uint<16> stg0_rd8_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd8 read pattern: { stg0_update_0[d0, d1] -> in[1 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_4.peek_71();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> stg0_rd80_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd80 read pattern: { stg0_update_0[d0, d1] -> in[19 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write19 = in.in_in_update_0_write19_merged_banks_4.peek_71();
  return value_in_in_update_0_write19;
  return 0;
}

inline hw_uint<16> stg0_rd81_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd81 read pattern: { stg0_update_0[d0, d1] -> in[20 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write20 = in.in_in_update_0_write20_merged_banks_4.peek_71();
  return value_in_in_update_0_write20;
  return 0;
}

inline hw_uint<16> stg0_rd82_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd82 read pattern: { stg0_update_0[d0, d1] -> in[20 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write20 = in.in_in_update_0_write20_merged_banks_4.peek_1();
  return value_in_in_update_0_write20;
  return 0;
}

inline hw_uint<16> stg0_rd83_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd83 read pattern: { stg0_update_0[d0, d1] -> in[21 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write21 = in.in_in_update_0_write21_merged_banks_4.peek_71();
  return value_in_in_update_0_write21;
  return 0;
}

inline hw_uint<16> stg0_rd84_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd84 read pattern: { stg0_update_0[d0, d1] -> in[20 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write20 = in.in_in_update_0_write20_merged_banks_4.peek_71();
  return value_in_in_update_0_write20;
  return 0;
}

inline hw_uint<16> stg0_rd85_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd85 read pattern: { stg0_update_0[d0, d1] -> in[21 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write21 = in.in_in_update_0_write21_merged_banks_4.peek_71();
  return value_in_in_update_0_write21;
  return 0;
}

inline hw_uint<16> stg0_rd86_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd86 read pattern: { stg0_update_0[d0, d1] -> in[21 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write21 = in.in_in_update_0_write21_merged_banks_4.peek_1();
  return value_in_in_update_0_write21;
  return 0;
}

inline hw_uint<16> stg0_rd87_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd87 read pattern: { stg0_update_0[d0, d1] -> in[22 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write22 = in.in_in_update_0_write22_merged_banks_4.peek_71();
  return value_in_in_update_0_write22;
  return 0;
}

inline hw_uint<16> stg0_rd88_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd88 read pattern: { stg0_update_0[d0, d1] -> in[21 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write21 = in.in_in_update_0_write21_merged_banks_4.peek_71();
  return value_in_in_update_0_write21;
  return 0;
}

inline hw_uint<16> stg0_rd89_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd89 read pattern: { stg0_update_0[d0, d1] -> in[22 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write22 = in.in_in_update_0_write22_merged_banks_4.peek_71();
  return value_in_in_update_0_write22;
  return 0;
}

inline hw_uint<16> stg0_rd9_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd9 read pattern: { stg0_update_0[d0, d1] -> in[2 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_4.peek_71();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> stg0_rd90_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd90 read pattern: { stg0_update_0[d0, d1] -> in[22 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write22 = in.in_in_update_0_write22_merged_banks_4.peek_1();
  return value_in_in_update_0_write22;
  return 0;
}

inline hw_uint<16> stg0_rd91_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd91 read pattern: { stg0_update_0[d0, d1] -> in[23 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write23 = in.in_in_update_0_write23_merged_banks_4.peek_71();
  return value_in_in_update_0_write23;
  return 0;
}

inline hw_uint<16> stg0_rd92_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd92 read pattern: { stg0_update_0[d0, d1] -> in[22 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write22 = in.in_in_update_0_write22_merged_banks_4.peek_71();
  return value_in_in_update_0_write22;
  return 0;
}

inline hw_uint<16> stg0_rd93_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd93 read pattern: { stg0_update_0[d0, d1] -> in[23 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write23 = in.in_in_update_0_write23_merged_banks_4.peek_71();
  return value_in_in_update_0_write23;
  return 0;
}

inline hw_uint<16> stg0_rd94_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd94 read pattern: { stg0_update_0[d0, d1] -> in[23 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write23 = in.in_in_update_0_write23_merged_banks_4.peek_1();
  return value_in_in_update_0_write23;
  return 0;
}

inline hw_uint<16> stg0_rd95_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd95 read pattern: { stg0_update_0[d0, d1] -> in[24 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write24 = in.in_in_update_0_write24_merged_banks_4.peek_71();
  return value_in_in_update_0_write24;
  return 0;
}

inline hw_uint<16> stg0_rd96_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd96 read pattern: { stg0_update_0[d0, d1] -> in[23 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write23 = in.in_in_update_0_write23_merged_banks_4.peek_71();
  return value_in_in_update_0_write23;
  return 0;
}

inline hw_uint<16> stg0_rd97_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd97 read pattern: { stg0_update_0[d0, d1] -> in[24 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write24 = in.in_in_update_0_write24_merged_banks_4.peek_71();
  return value_in_in_update_0_write24;
  return 0;
}

inline hw_uint<16> stg0_rd98_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd98 read pattern: { stg0_update_0[d0, d1] -> in[24 + 32d0, 1 + d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write24 = in.in_in_update_0_write24_merged_banks_4.peek_1();
  return value_in_in_update_0_write24;
  return 0;
}

inline hw_uint<16> stg0_rd99_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg0_rd99 read pattern: { stg0_update_0[d0, d1] -> in[25 + 32d0, d1] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Read schedule : { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
  auto value_in_in_update_0_write25 = in.in_in_update_0_write25_merged_banks_4.peek_71();
  return value_in_in_update_0_write25;
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
//	in_in_update_0_write16
//	in_in_update_0_write17
//	in_in_update_0_write18
//	in_in_update_0_write19
//	in_in_update_0_write20
//	in_in_update_0_write21
//	in_in_update_0_write22
//	in_in_update_0_write23
//	in_in_update_0_write24
//	in_in_update_0_write25
//	in_in_update_0_write26
//	in_in_update_0_write27
//	in_in_update_0_write28
//	in_in_update_0_write29
//	in_in_update_0_write30
//	in_in_update_0_write31
inline void in_in_update_0_write_bundle_write(hw_uint<512>& in_update_0_write, in_cache& in, int d0, int d1, int dynamic_address) {
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
	hw_uint<16> in_in_update_0_write16_res = in_update_0_write.extract<256, 271>();
	in_in_update_0_write16_write(in_in_update_0_write16_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write17_res = in_update_0_write.extract<272, 287>();
	in_in_update_0_write17_write(in_in_update_0_write17_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write18_res = in_update_0_write.extract<288, 303>();
	in_in_update_0_write18_write(in_in_update_0_write18_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write19_res = in_update_0_write.extract<304, 319>();
	in_in_update_0_write19_write(in_in_update_0_write19_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write20_res = in_update_0_write.extract<320, 335>();
	in_in_update_0_write20_write(in_in_update_0_write20_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write21_res = in_update_0_write.extract<336, 351>();
	in_in_update_0_write21_write(in_in_update_0_write21_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write22_res = in_update_0_write.extract<352, 367>();
	in_in_update_0_write22_write(in_in_update_0_write22_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write23_res = in_update_0_write.extract<368, 383>();
	in_in_update_0_write23_write(in_in_update_0_write23_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write24_res = in_update_0_write.extract<384, 399>();
	in_in_update_0_write24_write(in_in_update_0_write24_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write25_res = in_update_0_write.extract<400, 415>();
	in_in_update_0_write25_write(in_in_update_0_write25_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write26_res = in_update_0_write.extract<416, 431>();
	in_in_update_0_write26_write(in_in_update_0_write26_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write27_res = in_update_0_write.extract<432, 447>();
	in_in_update_0_write27_write(in_in_update_0_write27_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write28_res = in_update_0_write.extract<448, 463>();
	in_in_update_0_write28_write(in_in_update_0_write28_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write29_res = in_update_0_write.extract<464, 479>();
	in_in_update_0_write29_write(in_in_update_0_write29_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write30_res = in_update_0_write.extract<480, 495>();
	in_in_update_0_write30_write(in_in_update_0_write30_res, in, d0, d1, dynamic_address);
	hw_uint<16> in_in_update_0_write31_res = in_update_0_write.extract<496, 511>();
	in_in_update_0_write31_write(in_in_update_0_write31_res, in, d0, d1, dynamic_address);
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
//	stg0_rd64
//	stg0_rd65
//	stg0_rd66
//	stg0_rd67
//	stg0_rd68
//	stg0_rd69
//	stg0_rd70
//	stg0_rd71
//	stg0_rd72
//	stg0_rd73
//	stg0_rd74
//	stg0_rd75
//	stg0_rd76
//	stg0_rd77
//	stg0_rd78
//	stg0_rd79
//	stg0_rd80
//	stg0_rd81
//	stg0_rd82
//	stg0_rd83
//	stg0_rd84
//	stg0_rd85
//	stg0_rd86
//	stg0_rd87
//	stg0_rd88
//	stg0_rd89
//	stg0_rd90
//	stg0_rd91
//	stg0_rd92
//	stg0_rd93
//	stg0_rd94
//	stg0_rd95
//	stg0_rd96
//	stg0_rd97
//	stg0_rd98
//	stg0_rd99
//	stg0_rd100
//	stg0_rd101
//	stg0_rd102
//	stg0_rd103
//	stg0_rd104
//	stg0_rd105
//	stg0_rd106
//	stg0_rd107
//	stg0_rd108
//	stg0_rd109
//	stg0_rd110
//	stg0_rd111
//	stg0_rd112
//	stg0_rd113
//	stg0_rd114
//	stg0_rd115
//	stg0_rd116
//	stg0_rd117
//	stg0_rd118
//	stg0_rd119
//	stg0_rd120
//	stg0_rd121
//	stg0_rd122
//	stg0_rd123
//	stg0_rd124
//	stg0_rd125
//	stg0_rd126
//	stg0_rd127
inline hw_uint<2048> in_stg0_update_0_read_bundle_read(in_cache& in, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 128
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
    // stg0_rd64
    // stg0_rd65
    // stg0_rd66
    // stg0_rd67
    // stg0_rd68
    // stg0_rd69
    // stg0_rd70
    // stg0_rd71
    // stg0_rd72
    // stg0_rd73
    // stg0_rd74
    // stg0_rd75
    // stg0_rd76
    // stg0_rd77
    // stg0_rd78
    // stg0_rd79
    // stg0_rd80
    // stg0_rd81
    // stg0_rd82
    // stg0_rd83
    // stg0_rd84
    // stg0_rd85
    // stg0_rd86
    // stg0_rd87
    // stg0_rd88
    // stg0_rd89
    // stg0_rd90
    // stg0_rd91
    // stg0_rd92
    // stg0_rd93
    // stg0_rd94
    // stg0_rd95
    // stg0_rd96
    // stg0_rd97
    // stg0_rd98
    // stg0_rd99
    // stg0_rd100
    // stg0_rd101
    // stg0_rd102
    // stg0_rd103
    // stg0_rd104
    // stg0_rd105
    // stg0_rd106
    // stg0_rd107
    // stg0_rd108
    // stg0_rd109
    // stg0_rd110
    // stg0_rd111
    // stg0_rd112
    // stg0_rd113
    // stg0_rd114
    // stg0_rd115
    // stg0_rd116
    // stg0_rd117
    // stg0_rd118
    // stg0_rd119
    // stg0_rd120
    // stg0_rd121
    // stg0_rd122
    // stg0_rd123
    // stg0_rd124
    // stg0_rd125
    // stg0_rd126
    // stg0_rd127

	hw_uint<2048> result;
	hw_uint<16> stg0_rd0_res = stg0_rd0_select(in, d0, d1, dynamic_address);
	set_at<0, 2048>(result, stg0_rd0_res);
	hw_uint<16> stg0_rd1_res = stg0_rd1_select(in, d0, d1, dynamic_address);
	set_at<16, 2048>(result, stg0_rd1_res);
	hw_uint<16> stg0_rd2_res = stg0_rd2_select(in, d0, d1, dynamic_address);
	set_at<32, 2048>(result, stg0_rd2_res);
	hw_uint<16> stg0_rd3_res = stg0_rd3_select(in, d0, d1, dynamic_address);
	set_at<48, 2048>(result, stg0_rd3_res);
	hw_uint<16> stg0_rd4_res = stg0_rd4_select(in, d0, d1, dynamic_address);
	set_at<64, 2048>(result, stg0_rd4_res);
	hw_uint<16> stg0_rd5_res = stg0_rd5_select(in, d0, d1, dynamic_address);
	set_at<80, 2048>(result, stg0_rd5_res);
	hw_uint<16> stg0_rd6_res = stg0_rd6_select(in, d0, d1, dynamic_address);
	set_at<96, 2048>(result, stg0_rd6_res);
	hw_uint<16> stg0_rd7_res = stg0_rd7_select(in, d0, d1, dynamic_address);
	set_at<112, 2048>(result, stg0_rd7_res);
	hw_uint<16> stg0_rd8_res = stg0_rd8_select(in, d0, d1, dynamic_address);
	set_at<128, 2048>(result, stg0_rd8_res);
	hw_uint<16> stg0_rd9_res = stg0_rd9_select(in, d0, d1, dynamic_address);
	set_at<144, 2048>(result, stg0_rd9_res);
	hw_uint<16> stg0_rd10_res = stg0_rd10_select(in, d0, d1, dynamic_address);
	set_at<160, 2048>(result, stg0_rd10_res);
	hw_uint<16> stg0_rd11_res = stg0_rd11_select(in, d0, d1, dynamic_address);
	set_at<176, 2048>(result, stg0_rd11_res);
	hw_uint<16> stg0_rd12_res = stg0_rd12_select(in, d0, d1, dynamic_address);
	set_at<192, 2048>(result, stg0_rd12_res);
	hw_uint<16> stg0_rd13_res = stg0_rd13_select(in, d0, d1, dynamic_address);
	set_at<208, 2048>(result, stg0_rd13_res);
	hw_uint<16> stg0_rd14_res = stg0_rd14_select(in, d0, d1, dynamic_address);
	set_at<224, 2048>(result, stg0_rd14_res);
	hw_uint<16> stg0_rd15_res = stg0_rd15_select(in, d0, d1, dynamic_address);
	set_at<240, 2048>(result, stg0_rd15_res);
	hw_uint<16> stg0_rd16_res = stg0_rd16_select(in, d0, d1, dynamic_address);
	set_at<256, 2048>(result, stg0_rd16_res);
	hw_uint<16> stg0_rd17_res = stg0_rd17_select(in, d0, d1, dynamic_address);
	set_at<272, 2048>(result, stg0_rd17_res);
	hw_uint<16> stg0_rd18_res = stg0_rd18_select(in, d0, d1, dynamic_address);
	set_at<288, 2048>(result, stg0_rd18_res);
	hw_uint<16> stg0_rd19_res = stg0_rd19_select(in, d0, d1, dynamic_address);
	set_at<304, 2048>(result, stg0_rd19_res);
	hw_uint<16> stg0_rd20_res = stg0_rd20_select(in, d0, d1, dynamic_address);
	set_at<320, 2048>(result, stg0_rd20_res);
	hw_uint<16> stg0_rd21_res = stg0_rd21_select(in, d0, d1, dynamic_address);
	set_at<336, 2048>(result, stg0_rd21_res);
	hw_uint<16> stg0_rd22_res = stg0_rd22_select(in, d0, d1, dynamic_address);
	set_at<352, 2048>(result, stg0_rd22_res);
	hw_uint<16> stg0_rd23_res = stg0_rd23_select(in, d0, d1, dynamic_address);
	set_at<368, 2048>(result, stg0_rd23_res);
	hw_uint<16> stg0_rd24_res = stg0_rd24_select(in, d0, d1, dynamic_address);
	set_at<384, 2048>(result, stg0_rd24_res);
	hw_uint<16> stg0_rd25_res = stg0_rd25_select(in, d0, d1, dynamic_address);
	set_at<400, 2048>(result, stg0_rd25_res);
	hw_uint<16> stg0_rd26_res = stg0_rd26_select(in, d0, d1, dynamic_address);
	set_at<416, 2048>(result, stg0_rd26_res);
	hw_uint<16> stg0_rd27_res = stg0_rd27_select(in, d0, d1, dynamic_address);
	set_at<432, 2048>(result, stg0_rd27_res);
	hw_uint<16> stg0_rd28_res = stg0_rd28_select(in, d0, d1, dynamic_address);
	set_at<448, 2048>(result, stg0_rd28_res);
	hw_uint<16> stg0_rd29_res = stg0_rd29_select(in, d0, d1, dynamic_address);
	set_at<464, 2048>(result, stg0_rd29_res);
	hw_uint<16> stg0_rd30_res = stg0_rd30_select(in, d0, d1, dynamic_address);
	set_at<480, 2048>(result, stg0_rd30_res);
	hw_uint<16> stg0_rd31_res = stg0_rd31_select(in, d0, d1, dynamic_address);
	set_at<496, 2048>(result, stg0_rd31_res);
	hw_uint<16> stg0_rd32_res = stg0_rd32_select(in, d0, d1, dynamic_address);
	set_at<512, 2048>(result, stg0_rd32_res);
	hw_uint<16> stg0_rd33_res = stg0_rd33_select(in, d0, d1, dynamic_address);
	set_at<528, 2048>(result, stg0_rd33_res);
	hw_uint<16> stg0_rd34_res = stg0_rd34_select(in, d0, d1, dynamic_address);
	set_at<544, 2048>(result, stg0_rd34_res);
	hw_uint<16> stg0_rd35_res = stg0_rd35_select(in, d0, d1, dynamic_address);
	set_at<560, 2048>(result, stg0_rd35_res);
	hw_uint<16> stg0_rd36_res = stg0_rd36_select(in, d0, d1, dynamic_address);
	set_at<576, 2048>(result, stg0_rd36_res);
	hw_uint<16> stg0_rd37_res = stg0_rd37_select(in, d0, d1, dynamic_address);
	set_at<592, 2048>(result, stg0_rd37_res);
	hw_uint<16> stg0_rd38_res = stg0_rd38_select(in, d0, d1, dynamic_address);
	set_at<608, 2048>(result, stg0_rd38_res);
	hw_uint<16> stg0_rd39_res = stg0_rd39_select(in, d0, d1, dynamic_address);
	set_at<624, 2048>(result, stg0_rd39_res);
	hw_uint<16> stg0_rd40_res = stg0_rd40_select(in, d0, d1, dynamic_address);
	set_at<640, 2048>(result, stg0_rd40_res);
	hw_uint<16> stg0_rd41_res = stg0_rd41_select(in, d0, d1, dynamic_address);
	set_at<656, 2048>(result, stg0_rd41_res);
	hw_uint<16> stg0_rd42_res = stg0_rd42_select(in, d0, d1, dynamic_address);
	set_at<672, 2048>(result, stg0_rd42_res);
	hw_uint<16> stg0_rd43_res = stg0_rd43_select(in, d0, d1, dynamic_address);
	set_at<688, 2048>(result, stg0_rd43_res);
	hw_uint<16> stg0_rd44_res = stg0_rd44_select(in, d0, d1, dynamic_address);
	set_at<704, 2048>(result, stg0_rd44_res);
	hw_uint<16> stg0_rd45_res = stg0_rd45_select(in, d0, d1, dynamic_address);
	set_at<720, 2048>(result, stg0_rd45_res);
	hw_uint<16> stg0_rd46_res = stg0_rd46_select(in, d0, d1, dynamic_address);
	set_at<736, 2048>(result, stg0_rd46_res);
	hw_uint<16> stg0_rd47_res = stg0_rd47_select(in, d0, d1, dynamic_address);
	set_at<752, 2048>(result, stg0_rd47_res);
	hw_uint<16> stg0_rd48_res = stg0_rd48_select(in, d0, d1, dynamic_address);
	set_at<768, 2048>(result, stg0_rd48_res);
	hw_uint<16> stg0_rd49_res = stg0_rd49_select(in, d0, d1, dynamic_address);
	set_at<784, 2048>(result, stg0_rd49_res);
	hw_uint<16> stg0_rd50_res = stg0_rd50_select(in, d0, d1, dynamic_address);
	set_at<800, 2048>(result, stg0_rd50_res);
	hw_uint<16> stg0_rd51_res = stg0_rd51_select(in, d0, d1, dynamic_address);
	set_at<816, 2048>(result, stg0_rd51_res);
	hw_uint<16> stg0_rd52_res = stg0_rd52_select(in, d0, d1, dynamic_address);
	set_at<832, 2048>(result, stg0_rd52_res);
	hw_uint<16> stg0_rd53_res = stg0_rd53_select(in, d0, d1, dynamic_address);
	set_at<848, 2048>(result, stg0_rd53_res);
	hw_uint<16> stg0_rd54_res = stg0_rd54_select(in, d0, d1, dynamic_address);
	set_at<864, 2048>(result, stg0_rd54_res);
	hw_uint<16> stg0_rd55_res = stg0_rd55_select(in, d0, d1, dynamic_address);
	set_at<880, 2048>(result, stg0_rd55_res);
	hw_uint<16> stg0_rd56_res = stg0_rd56_select(in, d0, d1, dynamic_address);
	set_at<896, 2048>(result, stg0_rd56_res);
	hw_uint<16> stg0_rd57_res = stg0_rd57_select(in, d0, d1, dynamic_address);
	set_at<912, 2048>(result, stg0_rd57_res);
	hw_uint<16> stg0_rd58_res = stg0_rd58_select(in, d0, d1, dynamic_address);
	set_at<928, 2048>(result, stg0_rd58_res);
	hw_uint<16> stg0_rd59_res = stg0_rd59_select(in, d0, d1, dynamic_address);
	set_at<944, 2048>(result, stg0_rd59_res);
	hw_uint<16> stg0_rd60_res = stg0_rd60_select(in, d0, d1, dynamic_address);
	set_at<960, 2048>(result, stg0_rd60_res);
	hw_uint<16> stg0_rd61_res = stg0_rd61_select(in, d0, d1, dynamic_address);
	set_at<976, 2048>(result, stg0_rd61_res);
	hw_uint<16> stg0_rd62_res = stg0_rd62_select(in, d0, d1, dynamic_address);
	set_at<992, 2048>(result, stg0_rd62_res);
	hw_uint<16> stg0_rd63_res = stg0_rd63_select(in, d0, d1, dynamic_address);
	set_at<1008, 2048>(result, stg0_rd63_res);
	hw_uint<16> stg0_rd64_res = stg0_rd64_select(in, d0, d1, dynamic_address);
	set_at<1024, 2048>(result, stg0_rd64_res);
	hw_uint<16> stg0_rd65_res = stg0_rd65_select(in, d0, d1, dynamic_address);
	set_at<1040, 2048>(result, stg0_rd65_res);
	hw_uint<16> stg0_rd66_res = stg0_rd66_select(in, d0, d1, dynamic_address);
	set_at<1056, 2048>(result, stg0_rd66_res);
	hw_uint<16> stg0_rd67_res = stg0_rd67_select(in, d0, d1, dynamic_address);
	set_at<1072, 2048>(result, stg0_rd67_res);
	hw_uint<16> stg0_rd68_res = stg0_rd68_select(in, d0, d1, dynamic_address);
	set_at<1088, 2048>(result, stg0_rd68_res);
	hw_uint<16> stg0_rd69_res = stg0_rd69_select(in, d0, d1, dynamic_address);
	set_at<1104, 2048>(result, stg0_rd69_res);
	hw_uint<16> stg0_rd70_res = stg0_rd70_select(in, d0, d1, dynamic_address);
	set_at<1120, 2048>(result, stg0_rd70_res);
	hw_uint<16> stg0_rd71_res = stg0_rd71_select(in, d0, d1, dynamic_address);
	set_at<1136, 2048>(result, stg0_rd71_res);
	hw_uint<16> stg0_rd72_res = stg0_rd72_select(in, d0, d1, dynamic_address);
	set_at<1152, 2048>(result, stg0_rd72_res);
	hw_uint<16> stg0_rd73_res = stg0_rd73_select(in, d0, d1, dynamic_address);
	set_at<1168, 2048>(result, stg0_rd73_res);
	hw_uint<16> stg0_rd74_res = stg0_rd74_select(in, d0, d1, dynamic_address);
	set_at<1184, 2048>(result, stg0_rd74_res);
	hw_uint<16> stg0_rd75_res = stg0_rd75_select(in, d0, d1, dynamic_address);
	set_at<1200, 2048>(result, stg0_rd75_res);
	hw_uint<16> stg0_rd76_res = stg0_rd76_select(in, d0, d1, dynamic_address);
	set_at<1216, 2048>(result, stg0_rd76_res);
	hw_uint<16> stg0_rd77_res = stg0_rd77_select(in, d0, d1, dynamic_address);
	set_at<1232, 2048>(result, stg0_rd77_res);
	hw_uint<16> stg0_rd78_res = stg0_rd78_select(in, d0, d1, dynamic_address);
	set_at<1248, 2048>(result, stg0_rd78_res);
	hw_uint<16> stg0_rd79_res = stg0_rd79_select(in, d0, d1, dynamic_address);
	set_at<1264, 2048>(result, stg0_rd79_res);
	hw_uint<16> stg0_rd80_res = stg0_rd80_select(in, d0, d1, dynamic_address);
	set_at<1280, 2048>(result, stg0_rd80_res);
	hw_uint<16> stg0_rd81_res = stg0_rd81_select(in, d0, d1, dynamic_address);
	set_at<1296, 2048>(result, stg0_rd81_res);
	hw_uint<16> stg0_rd82_res = stg0_rd82_select(in, d0, d1, dynamic_address);
	set_at<1312, 2048>(result, stg0_rd82_res);
	hw_uint<16> stg0_rd83_res = stg0_rd83_select(in, d0, d1, dynamic_address);
	set_at<1328, 2048>(result, stg0_rd83_res);
	hw_uint<16> stg0_rd84_res = stg0_rd84_select(in, d0, d1, dynamic_address);
	set_at<1344, 2048>(result, stg0_rd84_res);
	hw_uint<16> stg0_rd85_res = stg0_rd85_select(in, d0, d1, dynamic_address);
	set_at<1360, 2048>(result, stg0_rd85_res);
	hw_uint<16> stg0_rd86_res = stg0_rd86_select(in, d0, d1, dynamic_address);
	set_at<1376, 2048>(result, stg0_rd86_res);
	hw_uint<16> stg0_rd87_res = stg0_rd87_select(in, d0, d1, dynamic_address);
	set_at<1392, 2048>(result, stg0_rd87_res);
	hw_uint<16> stg0_rd88_res = stg0_rd88_select(in, d0, d1, dynamic_address);
	set_at<1408, 2048>(result, stg0_rd88_res);
	hw_uint<16> stg0_rd89_res = stg0_rd89_select(in, d0, d1, dynamic_address);
	set_at<1424, 2048>(result, stg0_rd89_res);
	hw_uint<16> stg0_rd90_res = stg0_rd90_select(in, d0, d1, dynamic_address);
	set_at<1440, 2048>(result, stg0_rd90_res);
	hw_uint<16> stg0_rd91_res = stg0_rd91_select(in, d0, d1, dynamic_address);
	set_at<1456, 2048>(result, stg0_rd91_res);
	hw_uint<16> stg0_rd92_res = stg0_rd92_select(in, d0, d1, dynamic_address);
	set_at<1472, 2048>(result, stg0_rd92_res);
	hw_uint<16> stg0_rd93_res = stg0_rd93_select(in, d0, d1, dynamic_address);
	set_at<1488, 2048>(result, stg0_rd93_res);
	hw_uint<16> stg0_rd94_res = stg0_rd94_select(in, d0, d1, dynamic_address);
	set_at<1504, 2048>(result, stg0_rd94_res);
	hw_uint<16> stg0_rd95_res = stg0_rd95_select(in, d0, d1, dynamic_address);
	set_at<1520, 2048>(result, stg0_rd95_res);
	hw_uint<16> stg0_rd96_res = stg0_rd96_select(in, d0, d1, dynamic_address);
	set_at<1536, 2048>(result, stg0_rd96_res);
	hw_uint<16> stg0_rd97_res = stg0_rd97_select(in, d0, d1, dynamic_address);
	set_at<1552, 2048>(result, stg0_rd97_res);
	hw_uint<16> stg0_rd98_res = stg0_rd98_select(in, d0, d1, dynamic_address);
	set_at<1568, 2048>(result, stg0_rd98_res);
	hw_uint<16> stg0_rd99_res = stg0_rd99_select(in, d0, d1, dynamic_address);
	set_at<1584, 2048>(result, stg0_rd99_res);
	hw_uint<16> stg0_rd100_res = stg0_rd100_select(in, d0, d1, dynamic_address);
	set_at<1600, 2048>(result, stg0_rd100_res);
	hw_uint<16> stg0_rd101_res = stg0_rd101_select(in, d0, d1, dynamic_address);
	set_at<1616, 2048>(result, stg0_rd101_res);
	hw_uint<16> stg0_rd102_res = stg0_rd102_select(in, d0, d1, dynamic_address);
	set_at<1632, 2048>(result, stg0_rd102_res);
	hw_uint<16> stg0_rd103_res = stg0_rd103_select(in, d0, d1, dynamic_address);
	set_at<1648, 2048>(result, stg0_rd103_res);
	hw_uint<16> stg0_rd104_res = stg0_rd104_select(in, d0, d1, dynamic_address);
	set_at<1664, 2048>(result, stg0_rd104_res);
	hw_uint<16> stg0_rd105_res = stg0_rd105_select(in, d0, d1, dynamic_address);
	set_at<1680, 2048>(result, stg0_rd105_res);
	hw_uint<16> stg0_rd106_res = stg0_rd106_select(in, d0, d1, dynamic_address);
	set_at<1696, 2048>(result, stg0_rd106_res);
	hw_uint<16> stg0_rd107_res = stg0_rd107_select(in, d0, d1, dynamic_address);
	set_at<1712, 2048>(result, stg0_rd107_res);
	hw_uint<16> stg0_rd108_res = stg0_rd108_select(in, d0, d1, dynamic_address);
	set_at<1728, 2048>(result, stg0_rd108_res);
	hw_uint<16> stg0_rd109_res = stg0_rd109_select(in, d0, d1, dynamic_address);
	set_at<1744, 2048>(result, stg0_rd109_res);
	hw_uint<16> stg0_rd110_res = stg0_rd110_select(in, d0, d1, dynamic_address);
	set_at<1760, 2048>(result, stg0_rd110_res);
	hw_uint<16> stg0_rd111_res = stg0_rd111_select(in, d0, d1, dynamic_address);
	set_at<1776, 2048>(result, stg0_rd111_res);
	hw_uint<16> stg0_rd112_res = stg0_rd112_select(in, d0, d1, dynamic_address);
	set_at<1792, 2048>(result, stg0_rd112_res);
	hw_uint<16> stg0_rd113_res = stg0_rd113_select(in, d0, d1, dynamic_address);
	set_at<1808, 2048>(result, stg0_rd113_res);
	hw_uint<16> stg0_rd114_res = stg0_rd114_select(in, d0, d1, dynamic_address);
	set_at<1824, 2048>(result, stg0_rd114_res);
	hw_uint<16> stg0_rd115_res = stg0_rd115_select(in, d0, d1, dynamic_address);
	set_at<1840, 2048>(result, stg0_rd115_res);
	hw_uint<16> stg0_rd116_res = stg0_rd116_select(in, d0, d1, dynamic_address);
	set_at<1856, 2048>(result, stg0_rd116_res);
	hw_uint<16> stg0_rd117_res = stg0_rd117_select(in, d0, d1, dynamic_address);
	set_at<1872, 2048>(result, stg0_rd117_res);
	hw_uint<16> stg0_rd118_res = stg0_rd118_select(in, d0, d1, dynamic_address);
	set_at<1888, 2048>(result, stg0_rd118_res);
	hw_uint<16> stg0_rd119_res = stg0_rd119_select(in, d0, d1, dynamic_address);
	set_at<1904, 2048>(result, stg0_rd119_res);
	hw_uint<16> stg0_rd120_res = stg0_rd120_select(in, d0, d1, dynamic_address);
	set_at<1920, 2048>(result, stg0_rd120_res);
	hw_uint<16> stg0_rd121_res = stg0_rd121_select(in, d0, d1, dynamic_address);
	set_at<1936, 2048>(result, stg0_rd121_res);
	hw_uint<16> stg0_rd122_res = stg0_rd122_select(in, d0, d1, dynamic_address);
	set_at<1952, 2048>(result, stg0_rd122_res);
	hw_uint<16> stg0_rd123_res = stg0_rd123_select(in, d0, d1, dynamic_address);
	set_at<1968, 2048>(result, stg0_rd123_res);
	hw_uint<16> stg0_rd124_res = stg0_rd124_select(in, d0, d1, dynamic_address);
	set_at<1984, 2048>(result, stg0_rd124_res);
	hw_uint<16> stg0_rd125_res = stg0_rd125_select(in, d0, d1, dynamic_address);
	set_at<2000, 2048>(result, stg0_rd125_res);
	hw_uint<16> stg0_rd126_res = stg0_rd126_select(in, d0, d1, dynamic_address);
	set_at<2016, 2048>(result, stg0_rd126_res);
	hw_uint<16> stg0_rd127_res = stg0_rd127_select(in, d0, d1, dynamic_address);
	set_at<2032, 2048>(result, stg0_rd127_res);
	return result;
}

struct stg0_stg0_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-96, 2016], [0, 1082]}
	// Capacity: 70
	// # of read delays: 4
  // 0, 1, 68, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 66> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_67() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_68() {
		return f4;
	}

	inline hw_uint<16> peek_69() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write1_merged_banks_4_cache {
	// RAM Box: {[-95, 1985], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write10_merged_banks_4_cache {
	// RAM Box: {[-86, 1994], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write11_merged_banks_4_cache {
	// RAM Box: {[-85, 1995], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write12_merged_banks_4_cache {
	// RAM Box: {[-84, 1996], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write13_merged_banks_4_cache {
	// RAM Box: {[-83, 1997], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write14_merged_banks_4_cache {
	// RAM Box: {[-82, 1998], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write15_merged_banks_4_cache {
	// RAM Box: {[-81, 1999], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write16_merged_banks_4_cache {
	// RAM Box: {[-80, 2000], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write17_merged_banks_4_cache {
	// RAM Box: {[-79, 2001], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write18_merged_banks_4_cache {
	// RAM Box: {[-78, 2002], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write19_merged_banks_4_cache {
	// RAM Box: {[-77, 2003], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write2_merged_banks_4_cache {
	// RAM Box: {[-94, 1986], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write20_merged_banks_4_cache {
	// RAM Box: {[-76, 2004], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write21_merged_banks_4_cache {
	// RAM Box: {[-75, 2005], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write22_merged_banks_4_cache {
	// RAM Box: {[-74, 2006], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write23_merged_banks_4_cache {
	// RAM Box: {[-73, 2007], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write24_merged_banks_4_cache {
	// RAM Box: {[-72, 2008], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write25_merged_banks_4_cache {
	// RAM Box: {[-71, 2009], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write26_merged_banks_4_cache {
	// RAM Box: {[-70, 2010], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write27_merged_banks_4_cache {
	// RAM Box: {[-69, 2011], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write28_merged_banks_4_cache {
	// RAM Box: {[-68, 2012], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write29_merged_banks_4_cache {
	// RAM Box: {[-67, 2013], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write3_merged_banks_4_cache {
	// RAM Box: {[-93, 1987], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write30_merged_banks_4_cache {
	// RAM Box: {[-66, 2014], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write31_merged_banks_4_cache {
	// RAM Box: {[-97, 2015], [0, 1083]}
	// Capacity: 71
	// # of read delays: 4
  // 0, 1, 69, 70
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}

	inline hw_uint<16> peek_70() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write4_merged_banks_4_cache {
	// RAM Box: {[-92, 1988], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write5_merged_banks_4_cache {
	// RAM Box: {[-91, 1989], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write6_merged_banks_4_cache {
	// RAM Box: {[-90, 1990], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write7_merged_banks_4_cache {
	// RAM Box: {[-89, 1991], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write8_merged_banks_4_cache {
	// RAM Box: {[-88, 1992], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_stg0_update_0_write9_merged_banks_4_cache {
	// RAM Box: {[-87, 1993], [0, 1083]}
	// Capacity: 70
	// # of read delays: 3
  // 0, 1, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 67> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_69() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg0_cache {
  // # of banks: 32
  stg0_stg0_update_0_write0_merged_banks_4_cache stg0_stg0_update_0_write0_merged_banks_4;
  stg0_stg0_update_0_write1_merged_banks_4_cache stg0_stg0_update_0_write1_merged_banks_4;
  stg0_stg0_update_0_write10_merged_banks_4_cache stg0_stg0_update_0_write10_merged_banks_4;
  stg0_stg0_update_0_write11_merged_banks_4_cache stg0_stg0_update_0_write11_merged_banks_4;
  stg0_stg0_update_0_write12_merged_banks_4_cache stg0_stg0_update_0_write12_merged_banks_4;
  stg0_stg0_update_0_write13_merged_banks_4_cache stg0_stg0_update_0_write13_merged_banks_4;
  stg0_stg0_update_0_write14_merged_banks_4_cache stg0_stg0_update_0_write14_merged_banks_4;
  stg0_stg0_update_0_write15_merged_banks_4_cache stg0_stg0_update_0_write15_merged_banks_4;
  stg0_stg0_update_0_write16_merged_banks_4_cache stg0_stg0_update_0_write16_merged_banks_4;
  stg0_stg0_update_0_write17_merged_banks_4_cache stg0_stg0_update_0_write17_merged_banks_4;
  stg0_stg0_update_0_write18_merged_banks_4_cache stg0_stg0_update_0_write18_merged_banks_4;
  stg0_stg0_update_0_write19_merged_banks_4_cache stg0_stg0_update_0_write19_merged_banks_4;
  stg0_stg0_update_0_write2_merged_banks_4_cache stg0_stg0_update_0_write2_merged_banks_4;
  stg0_stg0_update_0_write20_merged_banks_4_cache stg0_stg0_update_0_write20_merged_banks_4;
  stg0_stg0_update_0_write21_merged_banks_4_cache stg0_stg0_update_0_write21_merged_banks_4;
  stg0_stg0_update_0_write22_merged_banks_4_cache stg0_stg0_update_0_write22_merged_banks_4;
  stg0_stg0_update_0_write23_merged_banks_4_cache stg0_stg0_update_0_write23_merged_banks_4;
  stg0_stg0_update_0_write24_merged_banks_4_cache stg0_stg0_update_0_write24_merged_banks_4;
  stg0_stg0_update_0_write25_merged_banks_4_cache stg0_stg0_update_0_write25_merged_banks_4;
  stg0_stg0_update_0_write26_merged_banks_4_cache stg0_stg0_update_0_write26_merged_banks_4;
  stg0_stg0_update_0_write27_merged_banks_4_cache stg0_stg0_update_0_write27_merged_banks_4;
  stg0_stg0_update_0_write28_merged_banks_4_cache stg0_stg0_update_0_write28_merged_banks_4;
  stg0_stg0_update_0_write29_merged_banks_4_cache stg0_stg0_update_0_write29_merged_banks_4;
  stg0_stg0_update_0_write3_merged_banks_4_cache stg0_stg0_update_0_write3_merged_banks_4;
  stg0_stg0_update_0_write30_merged_banks_4_cache stg0_stg0_update_0_write30_merged_banks_4;
  stg0_stg0_update_0_write31_merged_banks_4_cache stg0_stg0_update_0_write31_merged_banks_4;
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

inline void stg0_stg0_update_0_write16_write(hw_uint<16>& stg0_stg0_update_0_write16, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write16_merged_banks_4.push(stg0_stg0_update_0_write16);
}

inline void stg0_stg0_update_0_write17_write(hw_uint<16>& stg0_stg0_update_0_write17, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write17_merged_banks_4.push(stg0_stg0_update_0_write17);
}

inline void stg0_stg0_update_0_write18_write(hw_uint<16>& stg0_stg0_update_0_write18, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write18_merged_banks_4.push(stg0_stg0_update_0_write18);
}

inline void stg0_stg0_update_0_write19_write(hw_uint<16>& stg0_stg0_update_0_write19, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write19_merged_banks_4.push(stg0_stg0_update_0_write19);
}

inline void stg0_stg0_update_0_write2_write(hw_uint<16>& stg0_stg0_update_0_write2, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write2_merged_banks_4.push(stg0_stg0_update_0_write2);
}

inline void stg0_stg0_update_0_write20_write(hw_uint<16>& stg0_stg0_update_0_write20, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write20_merged_banks_4.push(stg0_stg0_update_0_write20);
}

inline void stg0_stg0_update_0_write21_write(hw_uint<16>& stg0_stg0_update_0_write21, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write21_merged_banks_4.push(stg0_stg0_update_0_write21);
}

inline void stg0_stg0_update_0_write22_write(hw_uint<16>& stg0_stg0_update_0_write22, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write22_merged_banks_4.push(stg0_stg0_update_0_write22);
}

inline void stg0_stg0_update_0_write23_write(hw_uint<16>& stg0_stg0_update_0_write23, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write23_merged_banks_4.push(stg0_stg0_update_0_write23);
}

inline void stg0_stg0_update_0_write24_write(hw_uint<16>& stg0_stg0_update_0_write24, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write24_merged_banks_4.push(stg0_stg0_update_0_write24);
}

inline void stg0_stg0_update_0_write25_write(hw_uint<16>& stg0_stg0_update_0_write25, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write25_merged_banks_4.push(stg0_stg0_update_0_write25);
}

inline void stg0_stg0_update_0_write26_write(hw_uint<16>& stg0_stg0_update_0_write26, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write26_merged_banks_4.push(stg0_stg0_update_0_write26);
}

inline void stg0_stg0_update_0_write27_write(hw_uint<16>& stg0_stg0_update_0_write27, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write27_merged_banks_4.push(stg0_stg0_update_0_write27);
}

inline void stg0_stg0_update_0_write28_write(hw_uint<16>& stg0_stg0_update_0_write28, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write28_merged_banks_4.push(stg0_stg0_update_0_write28);
}

inline void stg0_stg0_update_0_write29_write(hw_uint<16>& stg0_stg0_update_0_write29, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write29_merged_banks_4.push(stg0_stg0_update_0_write29);
}

inline void stg0_stg0_update_0_write3_write(hw_uint<16>& stg0_stg0_update_0_write3, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write3_merged_banks_4.push(stg0_stg0_update_0_write3);
}

inline void stg0_stg0_update_0_write30_write(hw_uint<16>& stg0_stg0_update_0_write30, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write30_merged_banks_4.push(stg0_stg0_update_0_write30);
}

inline void stg0_stg0_update_0_write31_write(hw_uint<16>& stg0_stg0_update_0_write31, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  stg0.stg0_stg0_update_0_write31_merged_banks_4.push(stg0_stg0_update_0_write31);
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
  // stg1_rd0 read pattern: { stg1_update_0[d0, d1] -> stg0[-1 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write31 = stg0.stg0_stg0_update_0_write31_merged_banks_4.peek_70();
  return value_stg0_stg0_update_0_write31;
  return 0;
}

inline hw_uint<16> stg1_rd1_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd1 read pattern: { stg1_update_0[d0, d1] -> stg0[32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write0 = stg0.stg0_stg0_update_0_write0_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write0;
  return 0;
}

inline hw_uint<16> stg1_rd10_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd10 read pattern: { stg1_update_0[d0, d1] -> stg0[2 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write2 = stg0.stg0_stg0_update_0_write2_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write2;
  return 0;
}

inline hw_uint<16> stg1_rd100_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd100 read pattern: { stg1_update_0[d0, d1] -> stg0[24 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write24 = stg0.stg0_stg0_update_0_write24_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write24;
  return 0;
}

inline hw_uint<16> stg1_rd101_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd101 read pattern: { stg1_update_0[d0, d1] -> stg0[25 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write25 = stg0.stg0_stg0_update_0_write25_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write25;
  return 0;
}

inline hw_uint<16> stg1_rd102_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd102 read pattern: { stg1_update_0[d0, d1] -> stg0[25 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write25 = stg0.stg0_stg0_update_0_write25_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write25;
  return 0;
}

inline hw_uint<16> stg1_rd103_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd103 read pattern: { stg1_update_0[d0, d1] -> stg0[26 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write26 = stg0.stg0_stg0_update_0_write26_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write26;
  return 0;
}

inline hw_uint<16> stg1_rd104_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd104 read pattern: { stg1_update_0[d0, d1] -> stg0[25 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write25 = stg0.stg0_stg0_update_0_write25_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write25;
  return 0;
}

inline hw_uint<16> stg1_rd105_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd105 read pattern: { stg1_update_0[d0, d1] -> stg0[26 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write26 = stg0.stg0_stg0_update_0_write26_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write26;
  return 0;
}

inline hw_uint<16> stg1_rd106_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd106 read pattern: { stg1_update_0[d0, d1] -> stg0[26 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write26 = stg0.stg0_stg0_update_0_write26_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write26;
  return 0;
}

inline hw_uint<16> stg1_rd107_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd107 read pattern: { stg1_update_0[d0, d1] -> stg0[27 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write27 = stg0.stg0_stg0_update_0_write27_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write27;
  return 0;
}

inline hw_uint<16> stg1_rd108_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd108 read pattern: { stg1_update_0[d0, d1] -> stg0[26 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write26 = stg0.stg0_stg0_update_0_write26_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write26;
  return 0;
}

inline hw_uint<16> stg1_rd109_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd109 read pattern: { stg1_update_0[d0, d1] -> stg0[27 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write27 = stg0.stg0_stg0_update_0_write27_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write27;
  return 0;
}

inline hw_uint<16> stg1_rd11_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd11 read pattern: { stg1_update_0[d0, d1] -> stg0[3 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write3 = stg0.stg0_stg0_update_0_write3_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write3;
  return 0;
}

inline hw_uint<16> stg1_rd110_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd110 read pattern: { stg1_update_0[d0, d1] -> stg0[27 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write27 = stg0.stg0_stg0_update_0_write27_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write27;
  return 0;
}

inline hw_uint<16> stg1_rd111_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd111 read pattern: { stg1_update_0[d0, d1] -> stg0[28 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write28 = stg0.stg0_stg0_update_0_write28_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write28;
  return 0;
}

inline hw_uint<16> stg1_rd112_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd112 read pattern: { stg1_update_0[d0, d1] -> stg0[27 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write27 = stg0.stg0_stg0_update_0_write27_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write27;
  return 0;
}

inline hw_uint<16> stg1_rd113_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd113 read pattern: { stg1_update_0[d0, d1] -> stg0[28 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write28 = stg0.stg0_stg0_update_0_write28_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write28;
  return 0;
}

inline hw_uint<16> stg1_rd114_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd114 read pattern: { stg1_update_0[d0, d1] -> stg0[28 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write28 = stg0.stg0_stg0_update_0_write28_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write28;
  return 0;
}

inline hw_uint<16> stg1_rd115_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd115 read pattern: { stg1_update_0[d0, d1] -> stg0[29 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write29 = stg0.stg0_stg0_update_0_write29_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write29;
  return 0;
}

inline hw_uint<16> stg1_rd116_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd116 read pattern: { stg1_update_0[d0, d1] -> stg0[28 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write28 = stg0.stg0_stg0_update_0_write28_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write28;
  return 0;
}

inline hw_uint<16> stg1_rd117_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd117 read pattern: { stg1_update_0[d0, d1] -> stg0[29 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write29 = stg0.stg0_stg0_update_0_write29_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write29;
  return 0;
}

inline hw_uint<16> stg1_rd118_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd118 read pattern: { stg1_update_0[d0, d1] -> stg0[29 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write29 = stg0.stg0_stg0_update_0_write29_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write29;
  return 0;
}

inline hw_uint<16> stg1_rd119_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd119 read pattern: { stg1_update_0[d0, d1] -> stg0[30 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write30 = stg0.stg0_stg0_update_0_write30_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write30;
  return 0;
}

inline hw_uint<16> stg1_rd12_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd12 read pattern: { stg1_update_0[d0, d1] -> stg0[2 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write2 = stg0.stg0_stg0_update_0_write2_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write2;
  return 0;
}

inline hw_uint<16> stg1_rd120_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd120 read pattern: { stg1_update_0[d0, d1] -> stg0[29 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write29 = stg0.stg0_stg0_update_0_write29_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write29;
  return 0;
}

inline hw_uint<16> stg1_rd121_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd121 read pattern: { stg1_update_0[d0, d1] -> stg0[30 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write30 = stg0.stg0_stg0_update_0_write30_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write30;
  return 0;
}

inline hw_uint<16> stg1_rd122_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd122 read pattern: { stg1_update_0[d0, d1] -> stg0[30 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write30 = stg0.stg0_stg0_update_0_write30_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write30;
  return 0;
}

inline hw_uint<16> stg1_rd123_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd123 read pattern: { stg1_update_0[d0, d1] -> stg0[31 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write31 = stg0.stg0_stg0_update_0_write31_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write31;
  return 0;
}

inline hw_uint<16> stg1_rd124_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd124 read pattern: { stg1_update_0[d0, d1] -> stg0[30 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write30 = stg0.stg0_stg0_update_0_write30_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write30;
  return 0;
}

inline hw_uint<16> stg1_rd125_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd125 read pattern: { stg1_update_0[d0, d1] -> stg0[31 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write31 = stg0.stg0_stg0_update_0_write31_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write31;
  return 0;
}

inline hw_uint<16> stg1_rd126_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd126 read pattern: { stg1_update_0[d0, d1] -> stg0[31 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write31 = stg0.stg0_stg0_update_0_write31_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write31;
  return 0;
}

inline hw_uint<16> stg1_rd127_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd127 read pattern: { stg1_update_0[d0, d1] -> stg0[32 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write0 = stg0.stg0_stg0_update_0_write0_merged_banks_4.peek_68();
  return value_stg0_stg0_update_0_write0;
  return 0;
}

inline hw_uint<16> stg1_rd13_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd13 read pattern: { stg1_update_0[d0, d1] -> stg0[3 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write3 = stg0.stg0_stg0_update_0_write3_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write3;
  return 0;
}

inline hw_uint<16> stg1_rd14_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd14 read pattern: { stg1_update_0[d0, d1] -> stg0[3 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write3 = stg0.stg0_stg0_update_0_write3_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write3;
  return 0;
}

inline hw_uint<16> stg1_rd15_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd15 read pattern: { stg1_update_0[d0, d1] -> stg0[4 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write4 = stg0.stg0_stg0_update_0_write4_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write4;
  return 0;
}

inline hw_uint<16> stg1_rd16_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd16 read pattern: { stg1_update_0[d0, d1] -> stg0[3 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write3 = stg0.stg0_stg0_update_0_write3_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write3;
  return 0;
}

inline hw_uint<16> stg1_rd17_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd17 read pattern: { stg1_update_0[d0, d1] -> stg0[4 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write4 = stg0.stg0_stg0_update_0_write4_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write4;
  return 0;
}

inline hw_uint<16> stg1_rd18_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd18 read pattern: { stg1_update_0[d0, d1] -> stg0[4 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write4 = stg0.stg0_stg0_update_0_write4_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write4;
  return 0;
}

inline hw_uint<16> stg1_rd19_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd19 read pattern: { stg1_update_0[d0, d1] -> stg0[5 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write5 = stg0.stg0_stg0_update_0_write5_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write5;
  return 0;
}

inline hw_uint<16> stg1_rd2_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd2 read pattern: { stg1_update_0[d0, d1] -> stg0[32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write0 = stg0.stg0_stg0_update_0_write0_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write0;
  return 0;
}

inline hw_uint<16> stg1_rd20_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd20 read pattern: { stg1_update_0[d0, d1] -> stg0[4 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write4 = stg0.stg0_stg0_update_0_write4_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write4;
  return 0;
}

inline hw_uint<16> stg1_rd21_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd21 read pattern: { stg1_update_0[d0, d1] -> stg0[5 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write5 = stg0.stg0_stg0_update_0_write5_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write5;
  return 0;
}

inline hw_uint<16> stg1_rd22_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd22 read pattern: { stg1_update_0[d0, d1] -> stg0[5 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write5 = stg0.stg0_stg0_update_0_write5_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write5;
  return 0;
}

inline hw_uint<16> stg1_rd23_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd23 read pattern: { stg1_update_0[d0, d1] -> stg0[6 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write6 = stg0.stg0_stg0_update_0_write6_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write6;
  return 0;
}

inline hw_uint<16> stg1_rd24_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd24 read pattern: { stg1_update_0[d0, d1] -> stg0[5 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write5 = stg0.stg0_stg0_update_0_write5_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write5;
  return 0;
}

inline hw_uint<16> stg1_rd25_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd25 read pattern: { stg1_update_0[d0, d1] -> stg0[6 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write6 = stg0.stg0_stg0_update_0_write6_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write6;
  return 0;
}

inline hw_uint<16> stg1_rd26_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd26 read pattern: { stg1_update_0[d0, d1] -> stg0[6 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write6 = stg0.stg0_stg0_update_0_write6_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write6;
  return 0;
}

inline hw_uint<16> stg1_rd27_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd27 read pattern: { stg1_update_0[d0, d1] -> stg0[7 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write7 = stg0.stg0_stg0_update_0_write7_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write7;
  return 0;
}

inline hw_uint<16> stg1_rd28_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd28 read pattern: { stg1_update_0[d0, d1] -> stg0[6 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write6 = stg0.stg0_stg0_update_0_write6_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write6;
  return 0;
}

inline hw_uint<16> stg1_rd29_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd29 read pattern: { stg1_update_0[d0, d1] -> stg0[7 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write7 = stg0.stg0_stg0_update_0_write7_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write7;
  return 0;
}

inline hw_uint<16> stg1_rd3_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd3 read pattern: { stg1_update_0[d0, d1] -> stg0[1 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write1 = stg0.stg0_stg0_update_0_write1_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write1;
  return 0;
}

inline hw_uint<16> stg1_rd30_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd30 read pattern: { stg1_update_0[d0, d1] -> stg0[7 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write7 = stg0.stg0_stg0_update_0_write7_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write7;
  return 0;
}

inline hw_uint<16> stg1_rd31_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd31 read pattern: { stg1_update_0[d0, d1] -> stg0[8 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write8 = stg0.stg0_stg0_update_0_write8_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write8;
  return 0;
}

inline hw_uint<16> stg1_rd32_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd32 read pattern: { stg1_update_0[d0, d1] -> stg0[7 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write7 = stg0.stg0_stg0_update_0_write7_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write7;
  return 0;
}

inline hw_uint<16> stg1_rd33_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd33 read pattern: { stg1_update_0[d0, d1] -> stg0[8 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write8 = stg0.stg0_stg0_update_0_write8_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write8;
  return 0;
}

inline hw_uint<16> stg1_rd34_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd34 read pattern: { stg1_update_0[d0, d1] -> stg0[8 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write8 = stg0.stg0_stg0_update_0_write8_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write8;
  return 0;
}

inline hw_uint<16> stg1_rd35_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd35 read pattern: { stg1_update_0[d0, d1] -> stg0[9 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write9 = stg0.stg0_stg0_update_0_write9_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write9;
  return 0;
}

inline hw_uint<16> stg1_rd36_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd36 read pattern: { stg1_update_0[d0, d1] -> stg0[8 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write8 = stg0.stg0_stg0_update_0_write8_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write8;
  return 0;
}

inline hw_uint<16> stg1_rd37_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd37 read pattern: { stg1_update_0[d0, d1] -> stg0[9 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write9 = stg0.stg0_stg0_update_0_write9_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write9;
  return 0;
}

inline hw_uint<16> stg1_rd38_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd38 read pattern: { stg1_update_0[d0, d1] -> stg0[9 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write9 = stg0.stg0_stg0_update_0_write9_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write9;
  return 0;
}

inline hw_uint<16> stg1_rd39_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd39 read pattern: { stg1_update_0[d0, d1] -> stg0[10 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write10 = stg0.stg0_stg0_update_0_write10_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write10;
  return 0;
}

inline hw_uint<16> stg1_rd4_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd4 read pattern: { stg1_update_0[d0, d1] -> stg0[32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write0 = stg0.stg0_stg0_update_0_write0_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write0;
  return 0;
}

inline hw_uint<16> stg1_rd40_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd40 read pattern: { stg1_update_0[d0, d1] -> stg0[9 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write9 = stg0.stg0_stg0_update_0_write9_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write9;
  return 0;
}

inline hw_uint<16> stg1_rd41_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd41 read pattern: { stg1_update_0[d0, d1] -> stg0[10 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write10 = stg0.stg0_stg0_update_0_write10_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write10;
  return 0;
}

inline hw_uint<16> stg1_rd42_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd42 read pattern: { stg1_update_0[d0, d1] -> stg0[10 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write10 = stg0.stg0_stg0_update_0_write10_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write10;
  return 0;
}

inline hw_uint<16> stg1_rd43_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd43 read pattern: { stg1_update_0[d0, d1] -> stg0[11 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write11 = stg0.stg0_stg0_update_0_write11_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write11;
  return 0;
}

inline hw_uint<16> stg1_rd44_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd44 read pattern: { stg1_update_0[d0, d1] -> stg0[10 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write10 = stg0.stg0_stg0_update_0_write10_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write10;
  return 0;
}

inline hw_uint<16> stg1_rd45_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd45 read pattern: { stg1_update_0[d0, d1] -> stg0[11 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write11 = stg0.stg0_stg0_update_0_write11_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write11;
  return 0;
}

inline hw_uint<16> stg1_rd46_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd46 read pattern: { stg1_update_0[d0, d1] -> stg0[11 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write11 = stg0.stg0_stg0_update_0_write11_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write11;
  return 0;
}

inline hw_uint<16> stg1_rd47_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd47 read pattern: { stg1_update_0[d0, d1] -> stg0[12 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write12 = stg0.stg0_stg0_update_0_write12_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write12;
  return 0;
}

inline hw_uint<16> stg1_rd48_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd48 read pattern: { stg1_update_0[d0, d1] -> stg0[11 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write11 = stg0.stg0_stg0_update_0_write11_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write11;
  return 0;
}

inline hw_uint<16> stg1_rd49_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd49 read pattern: { stg1_update_0[d0, d1] -> stg0[12 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write12 = stg0.stg0_stg0_update_0_write12_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write12;
  return 0;
}

inline hw_uint<16> stg1_rd5_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd5 read pattern: { stg1_update_0[d0, d1] -> stg0[1 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write1 = stg0.stg0_stg0_update_0_write1_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write1;
  return 0;
}

inline hw_uint<16> stg1_rd50_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd50 read pattern: { stg1_update_0[d0, d1] -> stg0[12 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write12 = stg0.stg0_stg0_update_0_write12_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write12;
  return 0;
}

inline hw_uint<16> stg1_rd51_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd51 read pattern: { stg1_update_0[d0, d1] -> stg0[13 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write13 = stg0.stg0_stg0_update_0_write13_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write13;
  return 0;
}

inline hw_uint<16> stg1_rd52_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd52 read pattern: { stg1_update_0[d0, d1] -> stg0[12 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write12 = stg0.stg0_stg0_update_0_write12_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write12;
  return 0;
}

inline hw_uint<16> stg1_rd53_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd53 read pattern: { stg1_update_0[d0, d1] -> stg0[13 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write13 = stg0.stg0_stg0_update_0_write13_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write13;
  return 0;
}

inline hw_uint<16> stg1_rd54_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd54 read pattern: { stg1_update_0[d0, d1] -> stg0[13 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write13 = stg0.stg0_stg0_update_0_write13_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write13;
  return 0;
}

inline hw_uint<16> stg1_rd55_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd55 read pattern: { stg1_update_0[d0, d1] -> stg0[14 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write14 = stg0.stg0_stg0_update_0_write14_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write14;
  return 0;
}

inline hw_uint<16> stg1_rd56_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd56 read pattern: { stg1_update_0[d0, d1] -> stg0[13 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write13 = stg0.stg0_stg0_update_0_write13_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write13;
  return 0;
}

inline hw_uint<16> stg1_rd57_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd57 read pattern: { stg1_update_0[d0, d1] -> stg0[14 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write14 = stg0.stg0_stg0_update_0_write14_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write14;
  return 0;
}

inline hw_uint<16> stg1_rd58_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd58 read pattern: { stg1_update_0[d0, d1] -> stg0[14 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write14 = stg0.stg0_stg0_update_0_write14_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write14;
  return 0;
}

inline hw_uint<16> stg1_rd59_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd59 read pattern: { stg1_update_0[d0, d1] -> stg0[15 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write15 = stg0.stg0_stg0_update_0_write15_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write15;
  return 0;
}

inline hw_uint<16> stg1_rd6_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd6 read pattern: { stg1_update_0[d0, d1] -> stg0[1 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write1 = stg0.stg0_stg0_update_0_write1_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write1;
  return 0;
}

inline hw_uint<16> stg1_rd60_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd60 read pattern: { stg1_update_0[d0, d1] -> stg0[14 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write14 = stg0.stg0_stg0_update_0_write14_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write14;
  return 0;
}

inline hw_uint<16> stg1_rd61_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd61 read pattern: { stg1_update_0[d0, d1] -> stg0[15 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write15 = stg0.stg0_stg0_update_0_write15_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write15;
  return 0;
}

inline hw_uint<16> stg1_rd62_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd62 read pattern: { stg1_update_0[d0, d1] -> stg0[15 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write15 = stg0.stg0_stg0_update_0_write15_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write15;
  return 0;
}

inline hw_uint<16> stg1_rd63_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd63 read pattern: { stg1_update_0[d0, d1] -> stg0[16 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write16 = stg0.stg0_stg0_update_0_write16_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write16;
  return 0;
}

inline hw_uint<16> stg1_rd64_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd64 read pattern: { stg1_update_0[d0, d1] -> stg0[15 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write15 = stg0.stg0_stg0_update_0_write15_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write15;
  return 0;
}

inline hw_uint<16> stg1_rd65_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd65 read pattern: { stg1_update_0[d0, d1] -> stg0[16 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write16 = stg0.stg0_stg0_update_0_write16_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write16;
  return 0;
}

inline hw_uint<16> stg1_rd66_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd66 read pattern: { stg1_update_0[d0, d1] -> stg0[16 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write16 = stg0.stg0_stg0_update_0_write16_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write16;
  return 0;
}

inline hw_uint<16> stg1_rd67_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd67 read pattern: { stg1_update_0[d0, d1] -> stg0[17 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write17 = stg0.stg0_stg0_update_0_write17_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write17;
  return 0;
}

inline hw_uint<16> stg1_rd68_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd68 read pattern: { stg1_update_0[d0, d1] -> stg0[16 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write16 = stg0.stg0_stg0_update_0_write16_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write16;
  return 0;
}

inline hw_uint<16> stg1_rd69_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd69 read pattern: { stg1_update_0[d0, d1] -> stg0[17 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write17 = stg0.stg0_stg0_update_0_write17_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write17;
  return 0;
}

inline hw_uint<16> stg1_rd7_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd7 read pattern: { stg1_update_0[d0, d1] -> stg0[2 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write2 = stg0.stg0_stg0_update_0_write2_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write2;
  return 0;
}

inline hw_uint<16> stg1_rd70_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd70 read pattern: { stg1_update_0[d0, d1] -> stg0[17 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write17 = stg0.stg0_stg0_update_0_write17_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write17;
  return 0;
}

inline hw_uint<16> stg1_rd71_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd71 read pattern: { stg1_update_0[d0, d1] -> stg0[18 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write18 = stg0.stg0_stg0_update_0_write18_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write18;
  return 0;
}

inline hw_uint<16> stg1_rd72_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd72 read pattern: { stg1_update_0[d0, d1] -> stg0[17 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write17 = stg0.stg0_stg0_update_0_write17_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write17;
  return 0;
}

inline hw_uint<16> stg1_rd73_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd73 read pattern: { stg1_update_0[d0, d1] -> stg0[18 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write18 = stg0.stg0_stg0_update_0_write18_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write18;
  return 0;
}

inline hw_uint<16> stg1_rd74_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd74 read pattern: { stg1_update_0[d0, d1] -> stg0[18 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write18 = stg0.stg0_stg0_update_0_write18_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write18;
  return 0;
}

inline hw_uint<16> stg1_rd75_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd75 read pattern: { stg1_update_0[d0, d1] -> stg0[19 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write19 = stg0.stg0_stg0_update_0_write19_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write19;
  return 0;
}

inline hw_uint<16> stg1_rd76_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd76 read pattern: { stg1_update_0[d0, d1] -> stg0[18 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write18 = stg0.stg0_stg0_update_0_write18_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write18;
  return 0;
}

inline hw_uint<16> stg1_rd77_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd77 read pattern: { stg1_update_0[d0, d1] -> stg0[19 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write19 = stg0.stg0_stg0_update_0_write19_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write19;
  return 0;
}

inline hw_uint<16> stg1_rd78_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd78 read pattern: { stg1_update_0[d0, d1] -> stg0[19 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write19 = stg0.stg0_stg0_update_0_write19_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write19;
  return 0;
}

inline hw_uint<16> stg1_rd79_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd79 read pattern: { stg1_update_0[d0, d1] -> stg0[20 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write20 = stg0.stg0_stg0_update_0_write20_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write20;
  return 0;
}

inline hw_uint<16> stg1_rd8_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd8 read pattern: { stg1_update_0[d0, d1] -> stg0[1 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write1 = stg0.stg0_stg0_update_0_write1_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write1;
  return 0;
}

inline hw_uint<16> stg1_rd80_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd80 read pattern: { stg1_update_0[d0, d1] -> stg0[19 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write19 = stg0.stg0_stg0_update_0_write19_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write19;
  return 0;
}

inline hw_uint<16> stg1_rd81_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd81 read pattern: { stg1_update_0[d0, d1] -> stg0[20 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write20 = stg0.stg0_stg0_update_0_write20_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write20;
  return 0;
}

inline hw_uint<16> stg1_rd82_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd82 read pattern: { stg1_update_0[d0, d1] -> stg0[20 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write20 = stg0.stg0_stg0_update_0_write20_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write20;
  return 0;
}

inline hw_uint<16> stg1_rd83_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd83 read pattern: { stg1_update_0[d0, d1] -> stg0[21 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write21 = stg0.stg0_stg0_update_0_write21_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write21;
  return 0;
}

inline hw_uint<16> stg1_rd84_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd84 read pattern: { stg1_update_0[d0, d1] -> stg0[20 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write20 = stg0.stg0_stg0_update_0_write20_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write20;
  return 0;
}

inline hw_uint<16> stg1_rd85_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd85 read pattern: { stg1_update_0[d0, d1] -> stg0[21 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write21 = stg0.stg0_stg0_update_0_write21_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write21;
  return 0;
}

inline hw_uint<16> stg1_rd86_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd86 read pattern: { stg1_update_0[d0, d1] -> stg0[21 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write21 = stg0.stg0_stg0_update_0_write21_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write21;
  return 0;
}

inline hw_uint<16> stg1_rd87_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd87 read pattern: { stg1_update_0[d0, d1] -> stg0[22 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write22 = stg0.stg0_stg0_update_0_write22_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write22;
  return 0;
}

inline hw_uint<16> stg1_rd88_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd88 read pattern: { stg1_update_0[d0, d1] -> stg0[21 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write21 = stg0.stg0_stg0_update_0_write21_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write21;
  return 0;
}

inline hw_uint<16> stg1_rd89_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd89 read pattern: { stg1_update_0[d0, d1] -> stg0[22 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write22 = stg0.stg0_stg0_update_0_write22_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write22;
  return 0;
}

inline hw_uint<16> stg1_rd9_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd9 read pattern: { stg1_update_0[d0, d1] -> stg0[2 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write2 = stg0.stg0_stg0_update_0_write2_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write2;
  return 0;
}

inline hw_uint<16> stg1_rd90_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd90 read pattern: { stg1_update_0[d0, d1] -> stg0[22 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write22 = stg0.stg0_stg0_update_0_write22_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write22;
  return 0;
}

inline hw_uint<16> stg1_rd91_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd91 read pattern: { stg1_update_0[d0, d1] -> stg0[23 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write23 = stg0.stg0_stg0_update_0_write23_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write23;
  return 0;
}

inline hw_uint<16> stg1_rd92_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd92 read pattern: { stg1_update_0[d0, d1] -> stg0[22 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write22 = stg0.stg0_stg0_update_0_write22_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write22;
  return 0;
}

inline hw_uint<16> stg1_rd93_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd93 read pattern: { stg1_update_0[d0, d1] -> stg0[23 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write23 = stg0.stg0_stg0_update_0_write23_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write23;
  return 0;
}

inline hw_uint<16> stg1_rd94_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd94 read pattern: { stg1_update_0[d0, d1] -> stg0[23 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write23 = stg0.stg0_stg0_update_0_write23_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write23;
  return 0;
}

inline hw_uint<16> stg1_rd95_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd95 read pattern: { stg1_update_0[d0, d1] -> stg0[24 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write24 = stg0.stg0_stg0_update_0_write24_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write24;
  return 0;
}

inline hw_uint<16> stg1_rd96_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd96 read pattern: { stg1_update_0[d0, d1] -> stg0[23 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write23 = stg0.stg0_stg0_update_0_write23_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write23;
  return 0;
}

inline hw_uint<16> stg1_rd97_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd97 read pattern: { stg1_update_0[d0, d1] -> stg0[24 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write24 = stg0.stg0_stg0_update_0_write24_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write24;
  return 0;
}

inline hw_uint<16> stg1_rd98_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd98 read pattern: { stg1_update_0[d0, d1] -> stg0[24 + 32d0, 1 + d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write24 = stg0.stg0_stg0_update_0_write24_merged_banks_4.peek_1();
  return value_stg0_stg0_update_0_write24;
  return 0;
}

inline hw_uint<16> stg1_rd99_select(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg1_rd99 read pattern: { stg1_update_0[d0, d1] -> stg0[25 + 32d0, d1] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Read schedule : { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  // Write schedule: { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
  auto value_stg0_stg0_update_0_write25 = stg0.stg0_stg0_update_0_write25_merged_banks_4.peek_69();
  return value_stg0_stg0_update_0_write25;
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
//	stg0_stg0_update_0_write16
//	stg0_stg0_update_0_write17
//	stg0_stg0_update_0_write18
//	stg0_stg0_update_0_write19
//	stg0_stg0_update_0_write20
//	stg0_stg0_update_0_write21
//	stg0_stg0_update_0_write22
//	stg0_stg0_update_0_write23
//	stg0_stg0_update_0_write24
//	stg0_stg0_update_0_write25
//	stg0_stg0_update_0_write26
//	stg0_stg0_update_0_write27
//	stg0_stg0_update_0_write28
//	stg0_stg0_update_0_write29
//	stg0_stg0_update_0_write30
//	stg0_stg0_update_0_write31
inline void stg0_stg0_update_0_write_bundle_write(hw_uint<512>& stg0_update_0_write, stg0_cache& stg0, int d0, int d1, int dynamic_address) {
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
	hw_uint<16> stg0_stg0_update_0_write16_res = stg0_update_0_write.extract<256, 271>();
	stg0_stg0_update_0_write16_write(stg0_stg0_update_0_write16_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write17_res = stg0_update_0_write.extract<272, 287>();
	stg0_stg0_update_0_write17_write(stg0_stg0_update_0_write17_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write18_res = stg0_update_0_write.extract<288, 303>();
	stg0_stg0_update_0_write18_write(stg0_stg0_update_0_write18_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write19_res = stg0_update_0_write.extract<304, 319>();
	stg0_stg0_update_0_write19_write(stg0_stg0_update_0_write19_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write20_res = stg0_update_0_write.extract<320, 335>();
	stg0_stg0_update_0_write20_write(stg0_stg0_update_0_write20_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write21_res = stg0_update_0_write.extract<336, 351>();
	stg0_stg0_update_0_write21_write(stg0_stg0_update_0_write21_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write22_res = stg0_update_0_write.extract<352, 367>();
	stg0_stg0_update_0_write22_write(stg0_stg0_update_0_write22_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write23_res = stg0_update_0_write.extract<368, 383>();
	stg0_stg0_update_0_write23_write(stg0_stg0_update_0_write23_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write24_res = stg0_update_0_write.extract<384, 399>();
	stg0_stg0_update_0_write24_write(stg0_stg0_update_0_write24_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write25_res = stg0_update_0_write.extract<400, 415>();
	stg0_stg0_update_0_write25_write(stg0_stg0_update_0_write25_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write26_res = stg0_update_0_write.extract<416, 431>();
	stg0_stg0_update_0_write26_write(stg0_stg0_update_0_write26_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write27_res = stg0_update_0_write.extract<432, 447>();
	stg0_stg0_update_0_write27_write(stg0_stg0_update_0_write27_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write28_res = stg0_update_0_write.extract<448, 463>();
	stg0_stg0_update_0_write28_write(stg0_stg0_update_0_write28_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write29_res = stg0_update_0_write.extract<464, 479>();
	stg0_stg0_update_0_write29_write(stg0_stg0_update_0_write29_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write30_res = stg0_update_0_write.extract<480, 495>();
	stg0_stg0_update_0_write30_write(stg0_stg0_update_0_write30_res, stg0, d0, d1, dynamic_address);
	hw_uint<16> stg0_stg0_update_0_write31_res = stg0_update_0_write.extract<496, 511>();
	stg0_stg0_update_0_write31_write(stg0_stg0_update_0_write31_res, stg0, d0, d1, dynamic_address);
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
//	stg1_rd64
//	stg1_rd65
//	stg1_rd66
//	stg1_rd67
//	stg1_rd68
//	stg1_rd69
//	stg1_rd70
//	stg1_rd71
//	stg1_rd72
//	stg1_rd73
//	stg1_rd74
//	stg1_rd75
//	stg1_rd76
//	stg1_rd77
//	stg1_rd78
//	stg1_rd79
//	stg1_rd80
//	stg1_rd81
//	stg1_rd82
//	stg1_rd83
//	stg1_rd84
//	stg1_rd85
//	stg1_rd86
//	stg1_rd87
//	stg1_rd88
//	stg1_rd89
//	stg1_rd90
//	stg1_rd91
//	stg1_rd92
//	stg1_rd93
//	stg1_rd94
//	stg1_rd95
//	stg1_rd96
//	stg1_rd97
//	stg1_rd98
//	stg1_rd99
//	stg1_rd100
//	stg1_rd101
//	stg1_rd102
//	stg1_rd103
//	stg1_rd104
//	stg1_rd105
//	stg1_rd106
//	stg1_rd107
//	stg1_rd108
//	stg1_rd109
//	stg1_rd110
//	stg1_rd111
//	stg1_rd112
//	stg1_rd113
//	stg1_rd114
//	stg1_rd115
//	stg1_rd116
//	stg1_rd117
//	stg1_rd118
//	stg1_rd119
//	stg1_rd120
//	stg1_rd121
//	stg1_rd122
//	stg1_rd123
//	stg1_rd124
//	stg1_rd125
//	stg1_rd126
//	stg1_rd127
inline hw_uint<2048> stg0_stg1_update_0_read_bundle_read(stg0_cache& stg0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 128
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
    // stg1_rd64
    // stg1_rd65
    // stg1_rd66
    // stg1_rd67
    // stg1_rd68
    // stg1_rd69
    // stg1_rd70
    // stg1_rd71
    // stg1_rd72
    // stg1_rd73
    // stg1_rd74
    // stg1_rd75
    // stg1_rd76
    // stg1_rd77
    // stg1_rd78
    // stg1_rd79
    // stg1_rd80
    // stg1_rd81
    // stg1_rd82
    // stg1_rd83
    // stg1_rd84
    // stg1_rd85
    // stg1_rd86
    // stg1_rd87
    // stg1_rd88
    // stg1_rd89
    // stg1_rd90
    // stg1_rd91
    // stg1_rd92
    // stg1_rd93
    // stg1_rd94
    // stg1_rd95
    // stg1_rd96
    // stg1_rd97
    // stg1_rd98
    // stg1_rd99
    // stg1_rd100
    // stg1_rd101
    // stg1_rd102
    // stg1_rd103
    // stg1_rd104
    // stg1_rd105
    // stg1_rd106
    // stg1_rd107
    // stg1_rd108
    // stg1_rd109
    // stg1_rd110
    // stg1_rd111
    // stg1_rd112
    // stg1_rd113
    // stg1_rd114
    // stg1_rd115
    // stg1_rd116
    // stg1_rd117
    // stg1_rd118
    // stg1_rd119
    // stg1_rd120
    // stg1_rd121
    // stg1_rd122
    // stg1_rd123
    // stg1_rd124
    // stg1_rd125
    // stg1_rd126
    // stg1_rd127

	hw_uint<2048> result;
	hw_uint<16> stg1_rd0_res = stg1_rd0_select(stg0, d0, d1, dynamic_address);
	set_at<0, 2048>(result, stg1_rd0_res);
	hw_uint<16> stg1_rd1_res = stg1_rd1_select(stg0, d0, d1, dynamic_address);
	set_at<16, 2048>(result, stg1_rd1_res);
	hw_uint<16> stg1_rd2_res = stg1_rd2_select(stg0, d0, d1, dynamic_address);
	set_at<32, 2048>(result, stg1_rd2_res);
	hw_uint<16> stg1_rd3_res = stg1_rd3_select(stg0, d0, d1, dynamic_address);
	set_at<48, 2048>(result, stg1_rd3_res);
	hw_uint<16> stg1_rd4_res = stg1_rd4_select(stg0, d0, d1, dynamic_address);
	set_at<64, 2048>(result, stg1_rd4_res);
	hw_uint<16> stg1_rd5_res = stg1_rd5_select(stg0, d0, d1, dynamic_address);
	set_at<80, 2048>(result, stg1_rd5_res);
	hw_uint<16> stg1_rd6_res = stg1_rd6_select(stg0, d0, d1, dynamic_address);
	set_at<96, 2048>(result, stg1_rd6_res);
	hw_uint<16> stg1_rd7_res = stg1_rd7_select(stg0, d0, d1, dynamic_address);
	set_at<112, 2048>(result, stg1_rd7_res);
	hw_uint<16> stg1_rd8_res = stg1_rd8_select(stg0, d0, d1, dynamic_address);
	set_at<128, 2048>(result, stg1_rd8_res);
	hw_uint<16> stg1_rd9_res = stg1_rd9_select(stg0, d0, d1, dynamic_address);
	set_at<144, 2048>(result, stg1_rd9_res);
	hw_uint<16> stg1_rd10_res = stg1_rd10_select(stg0, d0, d1, dynamic_address);
	set_at<160, 2048>(result, stg1_rd10_res);
	hw_uint<16> stg1_rd11_res = stg1_rd11_select(stg0, d0, d1, dynamic_address);
	set_at<176, 2048>(result, stg1_rd11_res);
	hw_uint<16> stg1_rd12_res = stg1_rd12_select(stg0, d0, d1, dynamic_address);
	set_at<192, 2048>(result, stg1_rd12_res);
	hw_uint<16> stg1_rd13_res = stg1_rd13_select(stg0, d0, d1, dynamic_address);
	set_at<208, 2048>(result, stg1_rd13_res);
	hw_uint<16> stg1_rd14_res = stg1_rd14_select(stg0, d0, d1, dynamic_address);
	set_at<224, 2048>(result, stg1_rd14_res);
	hw_uint<16> stg1_rd15_res = stg1_rd15_select(stg0, d0, d1, dynamic_address);
	set_at<240, 2048>(result, stg1_rd15_res);
	hw_uint<16> stg1_rd16_res = stg1_rd16_select(stg0, d0, d1, dynamic_address);
	set_at<256, 2048>(result, stg1_rd16_res);
	hw_uint<16> stg1_rd17_res = stg1_rd17_select(stg0, d0, d1, dynamic_address);
	set_at<272, 2048>(result, stg1_rd17_res);
	hw_uint<16> stg1_rd18_res = stg1_rd18_select(stg0, d0, d1, dynamic_address);
	set_at<288, 2048>(result, stg1_rd18_res);
	hw_uint<16> stg1_rd19_res = stg1_rd19_select(stg0, d0, d1, dynamic_address);
	set_at<304, 2048>(result, stg1_rd19_res);
	hw_uint<16> stg1_rd20_res = stg1_rd20_select(stg0, d0, d1, dynamic_address);
	set_at<320, 2048>(result, stg1_rd20_res);
	hw_uint<16> stg1_rd21_res = stg1_rd21_select(stg0, d0, d1, dynamic_address);
	set_at<336, 2048>(result, stg1_rd21_res);
	hw_uint<16> stg1_rd22_res = stg1_rd22_select(stg0, d0, d1, dynamic_address);
	set_at<352, 2048>(result, stg1_rd22_res);
	hw_uint<16> stg1_rd23_res = stg1_rd23_select(stg0, d0, d1, dynamic_address);
	set_at<368, 2048>(result, stg1_rd23_res);
	hw_uint<16> stg1_rd24_res = stg1_rd24_select(stg0, d0, d1, dynamic_address);
	set_at<384, 2048>(result, stg1_rd24_res);
	hw_uint<16> stg1_rd25_res = stg1_rd25_select(stg0, d0, d1, dynamic_address);
	set_at<400, 2048>(result, stg1_rd25_res);
	hw_uint<16> stg1_rd26_res = stg1_rd26_select(stg0, d0, d1, dynamic_address);
	set_at<416, 2048>(result, stg1_rd26_res);
	hw_uint<16> stg1_rd27_res = stg1_rd27_select(stg0, d0, d1, dynamic_address);
	set_at<432, 2048>(result, stg1_rd27_res);
	hw_uint<16> stg1_rd28_res = stg1_rd28_select(stg0, d0, d1, dynamic_address);
	set_at<448, 2048>(result, stg1_rd28_res);
	hw_uint<16> stg1_rd29_res = stg1_rd29_select(stg0, d0, d1, dynamic_address);
	set_at<464, 2048>(result, stg1_rd29_res);
	hw_uint<16> stg1_rd30_res = stg1_rd30_select(stg0, d0, d1, dynamic_address);
	set_at<480, 2048>(result, stg1_rd30_res);
	hw_uint<16> stg1_rd31_res = stg1_rd31_select(stg0, d0, d1, dynamic_address);
	set_at<496, 2048>(result, stg1_rd31_res);
	hw_uint<16> stg1_rd32_res = stg1_rd32_select(stg0, d0, d1, dynamic_address);
	set_at<512, 2048>(result, stg1_rd32_res);
	hw_uint<16> stg1_rd33_res = stg1_rd33_select(stg0, d0, d1, dynamic_address);
	set_at<528, 2048>(result, stg1_rd33_res);
	hw_uint<16> stg1_rd34_res = stg1_rd34_select(stg0, d0, d1, dynamic_address);
	set_at<544, 2048>(result, stg1_rd34_res);
	hw_uint<16> stg1_rd35_res = stg1_rd35_select(stg0, d0, d1, dynamic_address);
	set_at<560, 2048>(result, stg1_rd35_res);
	hw_uint<16> stg1_rd36_res = stg1_rd36_select(stg0, d0, d1, dynamic_address);
	set_at<576, 2048>(result, stg1_rd36_res);
	hw_uint<16> stg1_rd37_res = stg1_rd37_select(stg0, d0, d1, dynamic_address);
	set_at<592, 2048>(result, stg1_rd37_res);
	hw_uint<16> stg1_rd38_res = stg1_rd38_select(stg0, d0, d1, dynamic_address);
	set_at<608, 2048>(result, stg1_rd38_res);
	hw_uint<16> stg1_rd39_res = stg1_rd39_select(stg0, d0, d1, dynamic_address);
	set_at<624, 2048>(result, stg1_rd39_res);
	hw_uint<16> stg1_rd40_res = stg1_rd40_select(stg0, d0, d1, dynamic_address);
	set_at<640, 2048>(result, stg1_rd40_res);
	hw_uint<16> stg1_rd41_res = stg1_rd41_select(stg0, d0, d1, dynamic_address);
	set_at<656, 2048>(result, stg1_rd41_res);
	hw_uint<16> stg1_rd42_res = stg1_rd42_select(stg0, d0, d1, dynamic_address);
	set_at<672, 2048>(result, stg1_rd42_res);
	hw_uint<16> stg1_rd43_res = stg1_rd43_select(stg0, d0, d1, dynamic_address);
	set_at<688, 2048>(result, stg1_rd43_res);
	hw_uint<16> stg1_rd44_res = stg1_rd44_select(stg0, d0, d1, dynamic_address);
	set_at<704, 2048>(result, stg1_rd44_res);
	hw_uint<16> stg1_rd45_res = stg1_rd45_select(stg0, d0, d1, dynamic_address);
	set_at<720, 2048>(result, stg1_rd45_res);
	hw_uint<16> stg1_rd46_res = stg1_rd46_select(stg0, d0, d1, dynamic_address);
	set_at<736, 2048>(result, stg1_rd46_res);
	hw_uint<16> stg1_rd47_res = stg1_rd47_select(stg0, d0, d1, dynamic_address);
	set_at<752, 2048>(result, stg1_rd47_res);
	hw_uint<16> stg1_rd48_res = stg1_rd48_select(stg0, d0, d1, dynamic_address);
	set_at<768, 2048>(result, stg1_rd48_res);
	hw_uint<16> stg1_rd49_res = stg1_rd49_select(stg0, d0, d1, dynamic_address);
	set_at<784, 2048>(result, stg1_rd49_res);
	hw_uint<16> stg1_rd50_res = stg1_rd50_select(stg0, d0, d1, dynamic_address);
	set_at<800, 2048>(result, stg1_rd50_res);
	hw_uint<16> stg1_rd51_res = stg1_rd51_select(stg0, d0, d1, dynamic_address);
	set_at<816, 2048>(result, stg1_rd51_res);
	hw_uint<16> stg1_rd52_res = stg1_rd52_select(stg0, d0, d1, dynamic_address);
	set_at<832, 2048>(result, stg1_rd52_res);
	hw_uint<16> stg1_rd53_res = stg1_rd53_select(stg0, d0, d1, dynamic_address);
	set_at<848, 2048>(result, stg1_rd53_res);
	hw_uint<16> stg1_rd54_res = stg1_rd54_select(stg0, d0, d1, dynamic_address);
	set_at<864, 2048>(result, stg1_rd54_res);
	hw_uint<16> stg1_rd55_res = stg1_rd55_select(stg0, d0, d1, dynamic_address);
	set_at<880, 2048>(result, stg1_rd55_res);
	hw_uint<16> stg1_rd56_res = stg1_rd56_select(stg0, d0, d1, dynamic_address);
	set_at<896, 2048>(result, stg1_rd56_res);
	hw_uint<16> stg1_rd57_res = stg1_rd57_select(stg0, d0, d1, dynamic_address);
	set_at<912, 2048>(result, stg1_rd57_res);
	hw_uint<16> stg1_rd58_res = stg1_rd58_select(stg0, d0, d1, dynamic_address);
	set_at<928, 2048>(result, stg1_rd58_res);
	hw_uint<16> stg1_rd59_res = stg1_rd59_select(stg0, d0, d1, dynamic_address);
	set_at<944, 2048>(result, stg1_rd59_res);
	hw_uint<16> stg1_rd60_res = stg1_rd60_select(stg0, d0, d1, dynamic_address);
	set_at<960, 2048>(result, stg1_rd60_res);
	hw_uint<16> stg1_rd61_res = stg1_rd61_select(stg0, d0, d1, dynamic_address);
	set_at<976, 2048>(result, stg1_rd61_res);
	hw_uint<16> stg1_rd62_res = stg1_rd62_select(stg0, d0, d1, dynamic_address);
	set_at<992, 2048>(result, stg1_rd62_res);
	hw_uint<16> stg1_rd63_res = stg1_rd63_select(stg0, d0, d1, dynamic_address);
	set_at<1008, 2048>(result, stg1_rd63_res);
	hw_uint<16> stg1_rd64_res = stg1_rd64_select(stg0, d0, d1, dynamic_address);
	set_at<1024, 2048>(result, stg1_rd64_res);
	hw_uint<16> stg1_rd65_res = stg1_rd65_select(stg0, d0, d1, dynamic_address);
	set_at<1040, 2048>(result, stg1_rd65_res);
	hw_uint<16> stg1_rd66_res = stg1_rd66_select(stg0, d0, d1, dynamic_address);
	set_at<1056, 2048>(result, stg1_rd66_res);
	hw_uint<16> stg1_rd67_res = stg1_rd67_select(stg0, d0, d1, dynamic_address);
	set_at<1072, 2048>(result, stg1_rd67_res);
	hw_uint<16> stg1_rd68_res = stg1_rd68_select(stg0, d0, d1, dynamic_address);
	set_at<1088, 2048>(result, stg1_rd68_res);
	hw_uint<16> stg1_rd69_res = stg1_rd69_select(stg0, d0, d1, dynamic_address);
	set_at<1104, 2048>(result, stg1_rd69_res);
	hw_uint<16> stg1_rd70_res = stg1_rd70_select(stg0, d0, d1, dynamic_address);
	set_at<1120, 2048>(result, stg1_rd70_res);
	hw_uint<16> stg1_rd71_res = stg1_rd71_select(stg0, d0, d1, dynamic_address);
	set_at<1136, 2048>(result, stg1_rd71_res);
	hw_uint<16> stg1_rd72_res = stg1_rd72_select(stg0, d0, d1, dynamic_address);
	set_at<1152, 2048>(result, stg1_rd72_res);
	hw_uint<16> stg1_rd73_res = stg1_rd73_select(stg0, d0, d1, dynamic_address);
	set_at<1168, 2048>(result, stg1_rd73_res);
	hw_uint<16> stg1_rd74_res = stg1_rd74_select(stg0, d0, d1, dynamic_address);
	set_at<1184, 2048>(result, stg1_rd74_res);
	hw_uint<16> stg1_rd75_res = stg1_rd75_select(stg0, d0, d1, dynamic_address);
	set_at<1200, 2048>(result, stg1_rd75_res);
	hw_uint<16> stg1_rd76_res = stg1_rd76_select(stg0, d0, d1, dynamic_address);
	set_at<1216, 2048>(result, stg1_rd76_res);
	hw_uint<16> stg1_rd77_res = stg1_rd77_select(stg0, d0, d1, dynamic_address);
	set_at<1232, 2048>(result, stg1_rd77_res);
	hw_uint<16> stg1_rd78_res = stg1_rd78_select(stg0, d0, d1, dynamic_address);
	set_at<1248, 2048>(result, stg1_rd78_res);
	hw_uint<16> stg1_rd79_res = stg1_rd79_select(stg0, d0, d1, dynamic_address);
	set_at<1264, 2048>(result, stg1_rd79_res);
	hw_uint<16> stg1_rd80_res = stg1_rd80_select(stg0, d0, d1, dynamic_address);
	set_at<1280, 2048>(result, stg1_rd80_res);
	hw_uint<16> stg1_rd81_res = stg1_rd81_select(stg0, d0, d1, dynamic_address);
	set_at<1296, 2048>(result, stg1_rd81_res);
	hw_uint<16> stg1_rd82_res = stg1_rd82_select(stg0, d0, d1, dynamic_address);
	set_at<1312, 2048>(result, stg1_rd82_res);
	hw_uint<16> stg1_rd83_res = stg1_rd83_select(stg0, d0, d1, dynamic_address);
	set_at<1328, 2048>(result, stg1_rd83_res);
	hw_uint<16> stg1_rd84_res = stg1_rd84_select(stg0, d0, d1, dynamic_address);
	set_at<1344, 2048>(result, stg1_rd84_res);
	hw_uint<16> stg1_rd85_res = stg1_rd85_select(stg0, d0, d1, dynamic_address);
	set_at<1360, 2048>(result, stg1_rd85_res);
	hw_uint<16> stg1_rd86_res = stg1_rd86_select(stg0, d0, d1, dynamic_address);
	set_at<1376, 2048>(result, stg1_rd86_res);
	hw_uint<16> stg1_rd87_res = stg1_rd87_select(stg0, d0, d1, dynamic_address);
	set_at<1392, 2048>(result, stg1_rd87_res);
	hw_uint<16> stg1_rd88_res = stg1_rd88_select(stg0, d0, d1, dynamic_address);
	set_at<1408, 2048>(result, stg1_rd88_res);
	hw_uint<16> stg1_rd89_res = stg1_rd89_select(stg0, d0, d1, dynamic_address);
	set_at<1424, 2048>(result, stg1_rd89_res);
	hw_uint<16> stg1_rd90_res = stg1_rd90_select(stg0, d0, d1, dynamic_address);
	set_at<1440, 2048>(result, stg1_rd90_res);
	hw_uint<16> stg1_rd91_res = stg1_rd91_select(stg0, d0, d1, dynamic_address);
	set_at<1456, 2048>(result, stg1_rd91_res);
	hw_uint<16> stg1_rd92_res = stg1_rd92_select(stg0, d0, d1, dynamic_address);
	set_at<1472, 2048>(result, stg1_rd92_res);
	hw_uint<16> stg1_rd93_res = stg1_rd93_select(stg0, d0, d1, dynamic_address);
	set_at<1488, 2048>(result, stg1_rd93_res);
	hw_uint<16> stg1_rd94_res = stg1_rd94_select(stg0, d0, d1, dynamic_address);
	set_at<1504, 2048>(result, stg1_rd94_res);
	hw_uint<16> stg1_rd95_res = stg1_rd95_select(stg0, d0, d1, dynamic_address);
	set_at<1520, 2048>(result, stg1_rd95_res);
	hw_uint<16> stg1_rd96_res = stg1_rd96_select(stg0, d0, d1, dynamic_address);
	set_at<1536, 2048>(result, stg1_rd96_res);
	hw_uint<16> stg1_rd97_res = stg1_rd97_select(stg0, d0, d1, dynamic_address);
	set_at<1552, 2048>(result, stg1_rd97_res);
	hw_uint<16> stg1_rd98_res = stg1_rd98_select(stg0, d0, d1, dynamic_address);
	set_at<1568, 2048>(result, stg1_rd98_res);
	hw_uint<16> stg1_rd99_res = stg1_rd99_select(stg0, d0, d1, dynamic_address);
	set_at<1584, 2048>(result, stg1_rd99_res);
	hw_uint<16> stg1_rd100_res = stg1_rd100_select(stg0, d0, d1, dynamic_address);
	set_at<1600, 2048>(result, stg1_rd100_res);
	hw_uint<16> stg1_rd101_res = stg1_rd101_select(stg0, d0, d1, dynamic_address);
	set_at<1616, 2048>(result, stg1_rd101_res);
	hw_uint<16> stg1_rd102_res = stg1_rd102_select(stg0, d0, d1, dynamic_address);
	set_at<1632, 2048>(result, stg1_rd102_res);
	hw_uint<16> stg1_rd103_res = stg1_rd103_select(stg0, d0, d1, dynamic_address);
	set_at<1648, 2048>(result, stg1_rd103_res);
	hw_uint<16> stg1_rd104_res = stg1_rd104_select(stg0, d0, d1, dynamic_address);
	set_at<1664, 2048>(result, stg1_rd104_res);
	hw_uint<16> stg1_rd105_res = stg1_rd105_select(stg0, d0, d1, dynamic_address);
	set_at<1680, 2048>(result, stg1_rd105_res);
	hw_uint<16> stg1_rd106_res = stg1_rd106_select(stg0, d0, d1, dynamic_address);
	set_at<1696, 2048>(result, stg1_rd106_res);
	hw_uint<16> stg1_rd107_res = stg1_rd107_select(stg0, d0, d1, dynamic_address);
	set_at<1712, 2048>(result, stg1_rd107_res);
	hw_uint<16> stg1_rd108_res = stg1_rd108_select(stg0, d0, d1, dynamic_address);
	set_at<1728, 2048>(result, stg1_rd108_res);
	hw_uint<16> stg1_rd109_res = stg1_rd109_select(stg0, d0, d1, dynamic_address);
	set_at<1744, 2048>(result, stg1_rd109_res);
	hw_uint<16> stg1_rd110_res = stg1_rd110_select(stg0, d0, d1, dynamic_address);
	set_at<1760, 2048>(result, stg1_rd110_res);
	hw_uint<16> stg1_rd111_res = stg1_rd111_select(stg0, d0, d1, dynamic_address);
	set_at<1776, 2048>(result, stg1_rd111_res);
	hw_uint<16> stg1_rd112_res = stg1_rd112_select(stg0, d0, d1, dynamic_address);
	set_at<1792, 2048>(result, stg1_rd112_res);
	hw_uint<16> stg1_rd113_res = stg1_rd113_select(stg0, d0, d1, dynamic_address);
	set_at<1808, 2048>(result, stg1_rd113_res);
	hw_uint<16> stg1_rd114_res = stg1_rd114_select(stg0, d0, d1, dynamic_address);
	set_at<1824, 2048>(result, stg1_rd114_res);
	hw_uint<16> stg1_rd115_res = stg1_rd115_select(stg0, d0, d1, dynamic_address);
	set_at<1840, 2048>(result, stg1_rd115_res);
	hw_uint<16> stg1_rd116_res = stg1_rd116_select(stg0, d0, d1, dynamic_address);
	set_at<1856, 2048>(result, stg1_rd116_res);
	hw_uint<16> stg1_rd117_res = stg1_rd117_select(stg0, d0, d1, dynamic_address);
	set_at<1872, 2048>(result, stg1_rd117_res);
	hw_uint<16> stg1_rd118_res = stg1_rd118_select(stg0, d0, d1, dynamic_address);
	set_at<1888, 2048>(result, stg1_rd118_res);
	hw_uint<16> stg1_rd119_res = stg1_rd119_select(stg0, d0, d1, dynamic_address);
	set_at<1904, 2048>(result, stg1_rd119_res);
	hw_uint<16> stg1_rd120_res = stg1_rd120_select(stg0, d0, d1, dynamic_address);
	set_at<1920, 2048>(result, stg1_rd120_res);
	hw_uint<16> stg1_rd121_res = stg1_rd121_select(stg0, d0, d1, dynamic_address);
	set_at<1936, 2048>(result, stg1_rd121_res);
	hw_uint<16> stg1_rd122_res = stg1_rd122_select(stg0, d0, d1, dynamic_address);
	set_at<1952, 2048>(result, stg1_rd122_res);
	hw_uint<16> stg1_rd123_res = stg1_rd123_select(stg0, d0, d1, dynamic_address);
	set_at<1968, 2048>(result, stg1_rd123_res);
	hw_uint<16> stg1_rd124_res = stg1_rd124_select(stg0, d0, d1, dynamic_address);
	set_at<1984, 2048>(result, stg1_rd124_res);
	hw_uint<16> stg1_rd125_res = stg1_rd125_select(stg0, d0, d1, dynamic_address);
	set_at<2000, 2048>(result, stg1_rd125_res);
	hw_uint<16> stg1_rd126_res = stg1_rd126_select(stg0, d0, d1, dynamic_address);
	set_at<2016, 2048>(result, stg1_rd126_res);
	hw_uint<16> stg1_rd127_res = stg1_rd127_select(stg0, d0, d1, dynamic_address);
	set_at<2032, 2048>(result, stg1_rd127_res);
	return result;
}

struct stg1_stg1_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-64, 1984], [0, 1081]}
	// Capacity: 68
	// # of read delays: 4
  // 0, 1, 66, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 64> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_65() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_66() {
		return f4;
	}

	inline hw_uint<16> peek_67() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write1_merged_banks_4_cache {
	// RAM Box: {[-63, 1953], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write10_merged_banks_4_cache {
	// RAM Box: {[-54, 1962], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write11_merged_banks_4_cache {
	// RAM Box: {[-53, 1963], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write12_merged_banks_4_cache {
	// RAM Box: {[-52, 1964], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write13_merged_banks_4_cache {
	// RAM Box: {[-51, 1965], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write14_merged_banks_4_cache {
	// RAM Box: {[-50, 1966], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write15_merged_banks_4_cache {
	// RAM Box: {[-49, 1967], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write16_merged_banks_4_cache {
	// RAM Box: {[-48, 1968], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write17_merged_banks_4_cache {
	// RAM Box: {[-47, 1969], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write18_merged_banks_4_cache {
	// RAM Box: {[-46, 1970], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write19_merged_banks_4_cache {
	// RAM Box: {[-45, 1971], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write2_merged_banks_4_cache {
	// RAM Box: {[-62, 1954], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write20_merged_banks_4_cache {
	// RAM Box: {[-44, 1972], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write21_merged_banks_4_cache {
	// RAM Box: {[-43, 1973], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write22_merged_banks_4_cache {
	// RAM Box: {[-42, 1974], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write23_merged_banks_4_cache {
	// RAM Box: {[-41, 1975], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write24_merged_banks_4_cache {
	// RAM Box: {[-40, 1976], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write25_merged_banks_4_cache {
	// RAM Box: {[-39, 1977], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write26_merged_banks_4_cache {
	// RAM Box: {[-38, 1978], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write27_merged_banks_4_cache {
	// RAM Box: {[-37, 1979], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write28_merged_banks_4_cache {
	// RAM Box: {[-36, 1980], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write29_merged_banks_4_cache {
	// RAM Box: {[-35, 1981], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write3_merged_banks_4_cache {
	// RAM Box: {[-61, 1955], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write30_merged_banks_4_cache {
	// RAM Box: {[-34, 1982], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write31_merged_banks_4_cache {
	// RAM Box: {[-65, 1983], [0, 1082]}
	// Capacity: 69
	// # of read delays: 4
  // 0, 1, 67, 68
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}

	inline hw_uint<16> peek_68() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write4_merged_banks_4_cache {
	// RAM Box: {[-60, 1956], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write5_merged_banks_4_cache {
	// RAM Box: {[-59, 1957], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write6_merged_banks_4_cache {
	// RAM Box: {[-58, 1958], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write7_merged_banks_4_cache {
	// RAM Box: {[-57, 1959], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write8_merged_banks_4_cache {
	// RAM Box: {[-56, 1960], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_stg1_update_0_write9_merged_banks_4_cache {
	// RAM Box: {[-55, 1961], [0, 1082]}
	// Capacity: 68
	// # of read delays: 3
  // 0, 1, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_67() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
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

struct stg1_cache {
  // # of banks: 32
  stg1_stg1_update_0_write0_merged_banks_4_cache stg1_stg1_update_0_write0_merged_banks_4;
  stg1_stg1_update_0_write1_merged_banks_4_cache stg1_stg1_update_0_write1_merged_banks_4;
  stg1_stg1_update_0_write10_merged_banks_4_cache stg1_stg1_update_0_write10_merged_banks_4;
  stg1_stg1_update_0_write11_merged_banks_4_cache stg1_stg1_update_0_write11_merged_banks_4;
  stg1_stg1_update_0_write12_merged_banks_4_cache stg1_stg1_update_0_write12_merged_banks_4;
  stg1_stg1_update_0_write13_merged_banks_4_cache stg1_stg1_update_0_write13_merged_banks_4;
  stg1_stg1_update_0_write14_merged_banks_4_cache stg1_stg1_update_0_write14_merged_banks_4;
  stg1_stg1_update_0_write15_merged_banks_4_cache stg1_stg1_update_0_write15_merged_banks_4;
  stg1_stg1_update_0_write16_merged_banks_4_cache stg1_stg1_update_0_write16_merged_banks_4;
  stg1_stg1_update_0_write17_merged_banks_4_cache stg1_stg1_update_0_write17_merged_banks_4;
  stg1_stg1_update_0_write18_merged_banks_4_cache stg1_stg1_update_0_write18_merged_banks_4;
  stg1_stg1_update_0_write19_merged_banks_4_cache stg1_stg1_update_0_write19_merged_banks_4;
  stg1_stg1_update_0_write2_merged_banks_4_cache stg1_stg1_update_0_write2_merged_banks_4;
  stg1_stg1_update_0_write20_merged_banks_4_cache stg1_stg1_update_0_write20_merged_banks_4;
  stg1_stg1_update_0_write21_merged_banks_4_cache stg1_stg1_update_0_write21_merged_banks_4;
  stg1_stg1_update_0_write22_merged_banks_4_cache stg1_stg1_update_0_write22_merged_banks_4;
  stg1_stg1_update_0_write23_merged_banks_4_cache stg1_stg1_update_0_write23_merged_banks_4;
  stg1_stg1_update_0_write24_merged_banks_4_cache stg1_stg1_update_0_write24_merged_banks_4;
  stg1_stg1_update_0_write25_merged_banks_4_cache stg1_stg1_update_0_write25_merged_banks_4;
  stg1_stg1_update_0_write26_merged_banks_4_cache stg1_stg1_update_0_write26_merged_banks_4;
  stg1_stg1_update_0_write27_merged_banks_4_cache stg1_stg1_update_0_write27_merged_banks_4;
  stg1_stg1_update_0_write28_merged_banks_4_cache stg1_stg1_update_0_write28_merged_banks_4;
  stg1_stg1_update_0_write29_merged_banks_4_cache stg1_stg1_update_0_write29_merged_banks_4;
  stg1_stg1_update_0_write3_merged_banks_4_cache stg1_stg1_update_0_write3_merged_banks_4;
  stg1_stg1_update_0_write30_merged_banks_4_cache stg1_stg1_update_0_write30_merged_banks_4;
  stg1_stg1_update_0_write31_merged_banks_4_cache stg1_stg1_update_0_write31_merged_banks_4;
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

inline void stg1_stg1_update_0_write16_write(hw_uint<16>& stg1_stg1_update_0_write16, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write16_merged_banks_4.push(stg1_stg1_update_0_write16);
}

inline void stg1_stg1_update_0_write17_write(hw_uint<16>& stg1_stg1_update_0_write17, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write17_merged_banks_4.push(stg1_stg1_update_0_write17);
}

inline void stg1_stg1_update_0_write18_write(hw_uint<16>& stg1_stg1_update_0_write18, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write18_merged_banks_4.push(stg1_stg1_update_0_write18);
}

inline void stg1_stg1_update_0_write19_write(hw_uint<16>& stg1_stg1_update_0_write19, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write19_merged_banks_4.push(stg1_stg1_update_0_write19);
}

inline void stg1_stg1_update_0_write2_write(hw_uint<16>& stg1_stg1_update_0_write2, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write2_merged_banks_4.push(stg1_stg1_update_0_write2);
}

inline void stg1_stg1_update_0_write20_write(hw_uint<16>& stg1_stg1_update_0_write20, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write20_merged_banks_4.push(stg1_stg1_update_0_write20);
}

inline void stg1_stg1_update_0_write21_write(hw_uint<16>& stg1_stg1_update_0_write21, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write21_merged_banks_4.push(stg1_stg1_update_0_write21);
}

inline void stg1_stg1_update_0_write22_write(hw_uint<16>& stg1_stg1_update_0_write22, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write22_merged_banks_4.push(stg1_stg1_update_0_write22);
}

inline void stg1_stg1_update_0_write23_write(hw_uint<16>& stg1_stg1_update_0_write23, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write23_merged_banks_4.push(stg1_stg1_update_0_write23);
}

inline void stg1_stg1_update_0_write24_write(hw_uint<16>& stg1_stg1_update_0_write24, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write24_merged_banks_4.push(stg1_stg1_update_0_write24);
}

inline void stg1_stg1_update_0_write25_write(hw_uint<16>& stg1_stg1_update_0_write25, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write25_merged_banks_4.push(stg1_stg1_update_0_write25);
}

inline void stg1_stg1_update_0_write26_write(hw_uint<16>& stg1_stg1_update_0_write26, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write26_merged_banks_4.push(stg1_stg1_update_0_write26);
}

inline void stg1_stg1_update_0_write27_write(hw_uint<16>& stg1_stg1_update_0_write27, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write27_merged_banks_4.push(stg1_stg1_update_0_write27);
}

inline void stg1_stg1_update_0_write28_write(hw_uint<16>& stg1_stg1_update_0_write28, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write28_merged_banks_4.push(stg1_stg1_update_0_write28);
}

inline void stg1_stg1_update_0_write29_write(hw_uint<16>& stg1_stg1_update_0_write29, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write29_merged_banks_4.push(stg1_stg1_update_0_write29);
}

inline void stg1_stg1_update_0_write3_write(hw_uint<16>& stg1_stg1_update_0_write3, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write3_merged_banks_4.push(stg1_stg1_update_0_write3);
}

inline void stg1_stg1_update_0_write30_write(hw_uint<16>& stg1_stg1_update_0_write30, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write30_merged_banks_4.push(stg1_stg1_update_0_write30);
}

inline void stg1_stg1_update_0_write31_write(hw_uint<16>& stg1_stg1_update_0_write31, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  stg1.stg1_stg1_update_0_write31_merged_banks_4.push(stg1_stg1_update_0_write31);
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
  // stg2_rd0 read pattern: { stg2_update_0[d0, d1] -> stg1[-1 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write31 = stg1.stg1_stg1_update_0_write31_merged_banks_4.peek_68();
  return value_stg1_stg1_update_0_write31;
  return 0;
}

inline hw_uint<16> stg2_rd1_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd1 read pattern: { stg2_update_0[d0, d1] -> stg1[32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write0 = stg1.stg1_stg1_update_0_write0_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write0;
  return 0;
}

inline hw_uint<16> stg2_rd10_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd10 read pattern: { stg2_update_0[d0, d1] -> stg1[2 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write2 = stg1.stg1_stg1_update_0_write2_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write2;
  return 0;
}

inline hw_uint<16> stg2_rd100_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd100 read pattern: { stg2_update_0[d0, d1] -> stg1[24 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write24 = stg1.stg1_stg1_update_0_write24_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write24;
  return 0;
}

inline hw_uint<16> stg2_rd101_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd101 read pattern: { stg2_update_0[d0, d1] -> stg1[25 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write25 = stg1.stg1_stg1_update_0_write25_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write25;
  return 0;
}

inline hw_uint<16> stg2_rd102_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd102 read pattern: { stg2_update_0[d0, d1] -> stg1[25 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write25 = stg1.stg1_stg1_update_0_write25_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write25;
  return 0;
}

inline hw_uint<16> stg2_rd103_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd103 read pattern: { stg2_update_0[d0, d1] -> stg1[26 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write26 = stg1.stg1_stg1_update_0_write26_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write26;
  return 0;
}

inline hw_uint<16> stg2_rd104_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd104 read pattern: { stg2_update_0[d0, d1] -> stg1[25 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write25 = stg1.stg1_stg1_update_0_write25_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write25;
  return 0;
}

inline hw_uint<16> stg2_rd105_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd105 read pattern: { stg2_update_0[d0, d1] -> stg1[26 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write26 = stg1.stg1_stg1_update_0_write26_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write26;
  return 0;
}

inline hw_uint<16> stg2_rd106_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd106 read pattern: { stg2_update_0[d0, d1] -> stg1[26 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write26 = stg1.stg1_stg1_update_0_write26_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write26;
  return 0;
}

inline hw_uint<16> stg2_rd107_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd107 read pattern: { stg2_update_0[d0, d1] -> stg1[27 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write27 = stg1.stg1_stg1_update_0_write27_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write27;
  return 0;
}

inline hw_uint<16> stg2_rd108_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd108 read pattern: { stg2_update_0[d0, d1] -> stg1[26 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write26 = stg1.stg1_stg1_update_0_write26_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write26;
  return 0;
}

inline hw_uint<16> stg2_rd109_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd109 read pattern: { stg2_update_0[d0, d1] -> stg1[27 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write27 = stg1.stg1_stg1_update_0_write27_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write27;
  return 0;
}

inline hw_uint<16> stg2_rd11_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd11 read pattern: { stg2_update_0[d0, d1] -> stg1[3 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write3 = stg1.stg1_stg1_update_0_write3_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write3;
  return 0;
}

inline hw_uint<16> stg2_rd110_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd110 read pattern: { stg2_update_0[d0, d1] -> stg1[27 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write27 = stg1.stg1_stg1_update_0_write27_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write27;
  return 0;
}

inline hw_uint<16> stg2_rd111_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd111 read pattern: { stg2_update_0[d0, d1] -> stg1[28 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write28 = stg1.stg1_stg1_update_0_write28_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write28;
  return 0;
}

inline hw_uint<16> stg2_rd112_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd112 read pattern: { stg2_update_0[d0, d1] -> stg1[27 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write27 = stg1.stg1_stg1_update_0_write27_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write27;
  return 0;
}

inline hw_uint<16> stg2_rd113_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd113 read pattern: { stg2_update_0[d0, d1] -> stg1[28 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write28 = stg1.stg1_stg1_update_0_write28_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write28;
  return 0;
}

inline hw_uint<16> stg2_rd114_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd114 read pattern: { stg2_update_0[d0, d1] -> stg1[28 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write28 = stg1.stg1_stg1_update_0_write28_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write28;
  return 0;
}

inline hw_uint<16> stg2_rd115_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd115 read pattern: { stg2_update_0[d0, d1] -> stg1[29 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write29 = stg1.stg1_stg1_update_0_write29_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write29;
  return 0;
}

inline hw_uint<16> stg2_rd116_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd116 read pattern: { stg2_update_0[d0, d1] -> stg1[28 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write28 = stg1.stg1_stg1_update_0_write28_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write28;
  return 0;
}

inline hw_uint<16> stg2_rd117_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd117 read pattern: { stg2_update_0[d0, d1] -> stg1[29 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write29 = stg1.stg1_stg1_update_0_write29_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write29;
  return 0;
}

inline hw_uint<16> stg2_rd118_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd118 read pattern: { stg2_update_0[d0, d1] -> stg1[29 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write29 = stg1.stg1_stg1_update_0_write29_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write29;
  return 0;
}

inline hw_uint<16> stg2_rd119_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd119 read pattern: { stg2_update_0[d0, d1] -> stg1[30 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write30 = stg1.stg1_stg1_update_0_write30_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write30;
  return 0;
}

inline hw_uint<16> stg2_rd12_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd12 read pattern: { stg2_update_0[d0, d1] -> stg1[2 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write2 = stg1.stg1_stg1_update_0_write2_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write2;
  return 0;
}

inline hw_uint<16> stg2_rd120_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd120 read pattern: { stg2_update_0[d0, d1] -> stg1[29 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write29 = stg1.stg1_stg1_update_0_write29_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write29;
  return 0;
}

inline hw_uint<16> stg2_rd121_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd121 read pattern: { stg2_update_0[d0, d1] -> stg1[30 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write30 = stg1.stg1_stg1_update_0_write30_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write30;
  return 0;
}

inline hw_uint<16> stg2_rd122_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd122 read pattern: { stg2_update_0[d0, d1] -> stg1[30 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write30 = stg1.stg1_stg1_update_0_write30_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write30;
  return 0;
}

inline hw_uint<16> stg2_rd123_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd123 read pattern: { stg2_update_0[d0, d1] -> stg1[31 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write31 = stg1.stg1_stg1_update_0_write31_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write31;
  return 0;
}

inline hw_uint<16> stg2_rd124_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd124 read pattern: { stg2_update_0[d0, d1] -> stg1[30 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write30 = stg1.stg1_stg1_update_0_write30_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write30;
  return 0;
}

inline hw_uint<16> stg2_rd125_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd125 read pattern: { stg2_update_0[d0, d1] -> stg1[31 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write31 = stg1.stg1_stg1_update_0_write31_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write31;
  return 0;
}

inline hw_uint<16> stg2_rd126_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd126 read pattern: { stg2_update_0[d0, d1] -> stg1[31 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write31 = stg1.stg1_stg1_update_0_write31_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write31;
  return 0;
}

inline hw_uint<16> stg2_rd127_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd127 read pattern: { stg2_update_0[d0, d1] -> stg1[32 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write0 = stg1.stg1_stg1_update_0_write0_merged_banks_4.peek_66();
  return value_stg1_stg1_update_0_write0;
  return 0;
}

inline hw_uint<16> stg2_rd13_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd13 read pattern: { stg2_update_0[d0, d1] -> stg1[3 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write3 = stg1.stg1_stg1_update_0_write3_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write3;
  return 0;
}

inline hw_uint<16> stg2_rd14_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd14 read pattern: { stg2_update_0[d0, d1] -> stg1[3 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write3 = stg1.stg1_stg1_update_0_write3_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write3;
  return 0;
}

inline hw_uint<16> stg2_rd15_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd15 read pattern: { stg2_update_0[d0, d1] -> stg1[4 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write4 = stg1.stg1_stg1_update_0_write4_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write4;
  return 0;
}

inline hw_uint<16> stg2_rd16_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd16 read pattern: { stg2_update_0[d0, d1] -> stg1[3 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write3 = stg1.stg1_stg1_update_0_write3_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write3;
  return 0;
}

inline hw_uint<16> stg2_rd17_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd17 read pattern: { stg2_update_0[d0, d1] -> stg1[4 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write4 = stg1.stg1_stg1_update_0_write4_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write4;
  return 0;
}

inline hw_uint<16> stg2_rd18_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd18 read pattern: { stg2_update_0[d0, d1] -> stg1[4 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write4 = stg1.stg1_stg1_update_0_write4_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write4;
  return 0;
}

inline hw_uint<16> stg2_rd19_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd19 read pattern: { stg2_update_0[d0, d1] -> stg1[5 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write5 = stg1.stg1_stg1_update_0_write5_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write5;
  return 0;
}

inline hw_uint<16> stg2_rd2_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd2 read pattern: { stg2_update_0[d0, d1] -> stg1[32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write0 = stg1.stg1_stg1_update_0_write0_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write0;
  return 0;
}

inline hw_uint<16> stg2_rd20_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd20 read pattern: { stg2_update_0[d0, d1] -> stg1[4 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write4 = stg1.stg1_stg1_update_0_write4_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write4;
  return 0;
}

inline hw_uint<16> stg2_rd21_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd21 read pattern: { stg2_update_0[d0, d1] -> stg1[5 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write5 = stg1.stg1_stg1_update_0_write5_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write5;
  return 0;
}

inline hw_uint<16> stg2_rd22_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd22 read pattern: { stg2_update_0[d0, d1] -> stg1[5 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write5 = stg1.stg1_stg1_update_0_write5_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write5;
  return 0;
}

inline hw_uint<16> stg2_rd23_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd23 read pattern: { stg2_update_0[d0, d1] -> stg1[6 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write6 = stg1.stg1_stg1_update_0_write6_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write6;
  return 0;
}

inline hw_uint<16> stg2_rd24_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd24 read pattern: { stg2_update_0[d0, d1] -> stg1[5 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write5 = stg1.stg1_stg1_update_0_write5_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write5;
  return 0;
}

inline hw_uint<16> stg2_rd25_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd25 read pattern: { stg2_update_0[d0, d1] -> stg1[6 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write6 = stg1.stg1_stg1_update_0_write6_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write6;
  return 0;
}

inline hw_uint<16> stg2_rd26_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd26 read pattern: { stg2_update_0[d0, d1] -> stg1[6 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write6 = stg1.stg1_stg1_update_0_write6_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write6;
  return 0;
}

inline hw_uint<16> stg2_rd27_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd27 read pattern: { stg2_update_0[d0, d1] -> stg1[7 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write7 = stg1.stg1_stg1_update_0_write7_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write7;
  return 0;
}

inline hw_uint<16> stg2_rd28_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd28 read pattern: { stg2_update_0[d0, d1] -> stg1[6 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write6 = stg1.stg1_stg1_update_0_write6_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write6;
  return 0;
}

inline hw_uint<16> stg2_rd29_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd29 read pattern: { stg2_update_0[d0, d1] -> stg1[7 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write7 = stg1.stg1_stg1_update_0_write7_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write7;
  return 0;
}

inline hw_uint<16> stg2_rd3_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd3 read pattern: { stg2_update_0[d0, d1] -> stg1[1 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write1 = stg1.stg1_stg1_update_0_write1_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write1;
  return 0;
}

inline hw_uint<16> stg2_rd30_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd30 read pattern: { stg2_update_0[d0, d1] -> stg1[7 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write7 = stg1.stg1_stg1_update_0_write7_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write7;
  return 0;
}

inline hw_uint<16> stg2_rd31_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd31 read pattern: { stg2_update_0[d0, d1] -> stg1[8 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write8 = stg1.stg1_stg1_update_0_write8_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write8;
  return 0;
}

inline hw_uint<16> stg2_rd32_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd32 read pattern: { stg2_update_0[d0, d1] -> stg1[7 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write7 = stg1.stg1_stg1_update_0_write7_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write7;
  return 0;
}

inline hw_uint<16> stg2_rd33_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd33 read pattern: { stg2_update_0[d0, d1] -> stg1[8 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write8 = stg1.stg1_stg1_update_0_write8_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write8;
  return 0;
}

inline hw_uint<16> stg2_rd34_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd34 read pattern: { stg2_update_0[d0, d1] -> stg1[8 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write8 = stg1.stg1_stg1_update_0_write8_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write8;
  return 0;
}

inline hw_uint<16> stg2_rd35_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd35 read pattern: { stg2_update_0[d0, d1] -> stg1[9 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write9 = stg1.stg1_stg1_update_0_write9_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write9;
  return 0;
}

inline hw_uint<16> stg2_rd36_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd36 read pattern: { stg2_update_0[d0, d1] -> stg1[8 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write8 = stg1.stg1_stg1_update_0_write8_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write8;
  return 0;
}

inline hw_uint<16> stg2_rd37_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd37 read pattern: { stg2_update_0[d0, d1] -> stg1[9 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write9 = stg1.stg1_stg1_update_0_write9_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write9;
  return 0;
}

inline hw_uint<16> stg2_rd38_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd38 read pattern: { stg2_update_0[d0, d1] -> stg1[9 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write9 = stg1.stg1_stg1_update_0_write9_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write9;
  return 0;
}

inline hw_uint<16> stg2_rd39_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd39 read pattern: { stg2_update_0[d0, d1] -> stg1[10 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write10 = stg1.stg1_stg1_update_0_write10_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write10;
  return 0;
}

inline hw_uint<16> stg2_rd4_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd4 read pattern: { stg2_update_0[d0, d1] -> stg1[32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write0 = stg1.stg1_stg1_update_0_write0_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write0;
  return 0;
}

inline hw_uint<16> stg2_rd40_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd40 read pattern: { stg2_update_0[d0, d1] -> stg1[9 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write9 = stg1.stg1_stg1_update_0_write9_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write9;
  return 0;
}

inline hw_uint<16> stg2_rd41_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd41 read pattern: { stg2_update_0[d0, d1] -> stg1[10 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write10 = stg1.stg1_stg1_update_0_write10_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write10;
  return 0;
}

inline hw_uint<16> stg2_rd42_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd42 read pattern: { stg2_update_0[d0, d1] -> stg1[10 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write10 = stg1.stg1_stg1_update_0_write10_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write10;
  return 0;
}

inline hw_uint<16> stg2_rd43_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd43 read pattern: { stg2_update_0[d0, d1] -> stg1[11 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write11 = stg1.stg1_stg1_update_0_write11_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write11;
  return 0;
}

inline hw_uint<16> stg2_rd44_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd44 read pattern: { stg2_update_0[d0, d1] -> stg1[10 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write10 = stg1.stg1_stg1_update_0_write10_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write10;
  return 0;
}

inline hw_uint<16> stg2_rd45_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd45 read pattern: { stg2_update_0[d0, d1] -> stg1[11 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write11 = stg1.stg1_stg1_update_0_write11_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write11;
  return 0;
}

inline hw_uint<16> stg2_rd46_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd46 read pattern: { stg2_update_0[d0, d1] -> stg1[11 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write11 = stg1.stg1_stg1_update_0_write11_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write11;
  return 0;
}

inline hw_uint<16> stg2_rd47_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd47 read pattern: { stg2_update_0[d0, d1] -> stg1[12 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write12 = stg1.stg1_stg1_update_0_write12_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write12;
  return 0;
}

inline hw_uint<16> stg2_rd48_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd48 read pattern: { stg2_update_0[d0, d1] -> stg1[11 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write11 = stg1.stg1_stg1_update_0_write11_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write11;
  return 0;
}

inline hw_uint<16> stg2_rd49_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd49 read pattern: { stg2_update_0[d0, d1] -> stg1[12 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write12 = stg1.stg1_stg1_update_0_write12_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write12;
  return 0;
}

inline hw_uint<16> stg2_rd5_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd5 read pattern: { stg2_update_0[d0, d1] -> stg1[1 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write1 = stg1.stg1_stg1_update_0_write1_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write1;
  return 0;
}

inline hw_uint<16> stg2_rd50_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd50 read pattern: { stg2_update_0[d0, d1] -> stg1[12 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write12 = stg1.stg1_stg1_update_0_write12_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write12;
  return 0;
}

inline hw_uint<16> stg2_rd51_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd51 read pattern: { stg2_update_0[d0, d1] -> stg1[13 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write13 = stg1.stg1_stg1_update_0_write13_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write13;
  return 0;
}

inline hw_uint<16> stg2_rd52_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd52 read pattern: { stg2_update_0[d0, d1] -> stg1[12 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write12 = stg1.stg1_stg1_update_0_write12_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write12;
  return 0;
}

inline hw_uint<16> stg2_rd53_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd53 read pattern: { stg2_update_0[d0, d1] -> stg1[13 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write13 = stg1.stg1_stg1_update_0_write13_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write13;
  return 0;
}

inline hw_uint<16> stg2_rd54_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd54 read pattern: { stg2_update_0[d0, d1] -> stg1[13 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write13 = stg1.stg1_stg1_update_0_write13_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write13;
  return 0;
}

inline hw_uint<16> stg2_rd55_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd55 read pattern: { stg2_update_0[d0, d1] -> stg1[14 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write14 = stg1.stg1_stg1_update_0_write14_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write14;
  return 0;
}

inline hw_uint<16> stg2_rd56_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd56 read pattern: { stg2_update_0[d0, d1] -> stg1[13 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write13 = stg1.stg1_stg1_update_0_write13_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write13;
  return 0;
}

inline hw_uint<16> stg2_rd57_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd57 read pattern: { stg2_update_0[d0, d1] -> stg1[14 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write14 = stg1.stg1_stg1_update_0_write14_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write14;
  return 0;
}

inline hw_uint<16> stg2_rd58_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd58 read pattern: { stg2_update_0[d0, d1] -> stg1[14 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write14 = stg1.stg1_stg1_update_0_write14_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write14;
  return 0;
}

inline hw_uint<16> stg2_rd59_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd59 read pattern: { stg2_update_0[d0, d1] -> stg1[15 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write15 = stg1.stg1_stg1_update_0_write15_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write15;
  return 0;
}

inline hw_uint<16> stg2_rd6_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd6 read pattern: { stg2_update_0[d0, d1] -> stg1[1 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write1 = stg1.stg1_stg1_update_0_write1_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write1;
  return 0;
}

inline hw_uint<16> stg2_rd60_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd60 read pattern: { stg2_update_0[d0, d1] -> stg1[14 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write14 = stg1.stg1_stg1_update_0_write14_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write14;
  return 0;
}

inline hw_uint<16> stg2_rd61_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd61 read pattern: { stg2_update_0[d0, d1] -> stg1[15 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write15 = stg1.stg1_stg1_update_0_write15_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write15;
  return 0;
}

inline hw_uint<16> stg2_rd62_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd62 read pattern: { stg2_update_0[d0, d1] -> stg1[15 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write15 = stg1.stg1_stg1_update_0_write15_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write15;
  return 0;
}

inline hw_uint<16> stg2_rd63_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd63 read pattern: { stg2_update_0[d0, d1] -> stg1[16 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write16 = stg1.stg1_stg1_update_0_write16_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write16;
  return 0;
}

inline hw_uint<16> stg2_rd64_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd64 read pattern: { stg2_update_0[d0, d1] -> stg1[15 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write15 = stg1.stg1_stg1_update_0_write15_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write15;
  return 0;
}

inline hw_uint<16> stg2_rd65_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd65 read pattern: { stg2_update_0[d0, d1] -> stg1[16 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write16 = stg1.stg1_stg1_update_0_write16_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write16;
  return 0;
}

inline hw_uint<16> stg2_rd66_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd66 read pattern: { stg2_update_0[d0, d1] -> stg1[16 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write16 = stg1.stg1_stg1_update_0_write16_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write16;
  return 0;
}

inline hw_uint<16> stg2_rd67_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd67 read pattern: { stg2_update_0[d0, d1] -> stg1[17 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write17 = stg1.stg1_stg1_update_0_write17_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write17;
  return 0;
}

inline hw_uint<16> stg2_rd68_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd68 read pattern: { stg2_update_0[d0, d1] -> stg1[16 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write16 = stg1.stg1_stg1_update_0_write16_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write16;
  return 0;
}

inline hw_uint<16> stg2_rd69_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd69 read pattern: { stg2_update_0[d0, d1] -> stg1[17 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write17 = stg1.stg1_stg1_update_0_write17_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write17;
  return 0;
}

inline hw_uint<16> stg2_rd7_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd7 read pattern: { stg2_update_0[d0, d1] -> stg1[2 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write2 = stg1.stg1_stg1_update_0_write2_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write2;
  return 0;
}

inline hw_uint<16> stg2_rd70_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd70 read pattern: { stg2_update_0[d0, d1] -> stg1[17 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write17 = stg1.stg1_stg1_update_0_write17_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write17;
  return 0;
}

inline hw_uint<16> stg2_rd71_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd71 read pattern: { stg2_update_0[d0, d1] -> stg1[18 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write18 = stg1.stg1_stg1_update_0_write18_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write18;
  return 0;
}

inline hw_uint<16> stg2_rd72_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd72 read pattern: { stg2_update_0[d0, d1] -> stg1[17 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write17 = stg1.stg1_stg1_update_0_write17_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write17;
  return 0;
}

inline hw_uint<16> stg2_rd73_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd73 read pattern: { stg2_update_0[d0, d1] -> stg1[18 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write18 = stg1.stg1_stg1_update_0_write18_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write18;
  return 0;
}

inline hw_uint<16> stg2_rd74_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd74 read pattern: { stg2_update_0[d0, d1] -> stg1[18 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write18 = stg1.stg1_stg1_update_0_write18_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write18;
  return 0;
}

inline hw_uint<16> stg2_rd75_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd75 read pattern: { stg2_update_0[d0, d1] -> stg1[19 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write19 = stg1.stg1_stg1_update_0_write19_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write19;
  return 0;
}

inline hw_uint<16> stg2_rd76_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd76 read pattern: { stg2_update_0[d0, d1] -> stg1[18 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write18 = stg1.stg1_stg1_update_0_write18_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write18;
  return 0;
}

inline hw_uint<16> stg2_rd77_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd77 read pattern: { stg2_update_0[d0, d1] -> stg1[19 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write19 = stg1.stg1_stg1_update_0_write19_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write19;
  return 0;
}

inline hw_uint<16> stg2_rd78_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd78 read pattern: { stg2_update_0[d0, d1] -> stg1[19 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write19 = stg1.stg1_stg1_update_0_write19_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write19;
  return 0;
}

inline hw_uint<16> stg2_rd79_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd79 read pattern: { stg2_update_0[d0, d1] -> stg1[20 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write20 = stg1.stg1_stg1_update_0_write20_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write20;
  return 0;
}

inline hw_uint<16> stg2_rd8_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd8 read pattern: { stg2_update_0[d0, d1] -> stg1[1 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write1 = stg1.stg1_stg1_update_0_write1_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write1;
  return 0;
}

inline hw_uint<16> stg2_rd80_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd80 read pattern: { stg2_update_0[d0, d1] -> stg1[19 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write19 = stg1.stg1_stg1_update_0_write19_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write19;
  return 0;
}

inline hw_uint<16> stg2_rd81_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd81 read pattern: { stg2_update_0[d0, d1] -> stg1[20 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write20 = stg1.stg1_stg1_update_0_write20_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write20;
  return 0;
}

inline hw_uint<16> stg2_rd82_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd82 read pattern: { stg2_update_0[d0, d1] -> stg1[20 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write20 = stg1.stg1_stg1_update_0_write20_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write20;
  return 0;
}

inline hw_uint<16> stg2_rd83_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd83 read pattern: { stg2_update_0[d0, d1] -> stg1[21 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write21 = stg1.stg1_stg1_update_0_write21_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write21;
  return 0;
}

inline hw_uint<16> stg2_rd84_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd84 read pattern: { stg2_update_0[d0, d1] -> stg1[20 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write20 = stg1.stg1_stg1_update_0_write20_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write20;
  return 0;
}

inline hw_uint<16> stg2_rd85_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd85 read pattern: { stg2_update_0[d0, d1] -> stg1[21 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write21 = stg1.stg1_stg1_update_0_write21_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write21;
  return 0;
}

inline hw_uint<16> stg2_rd86_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd86 read pattern: { stg2_update_0[d0, d1] -> stg1[21 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write21 = stg1.stg1_stg1_update_0_write21_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write21;
  return 0;
}

inline hw_uint<16> stg2_rd87_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd87 read pattern: { stg2_update_0[d0, d1] -> stg1[22 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write22 = stg1.stg1_stg1_update_0_write22_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write22;
  return 0;
}

inline hw_uint<16> stg2_rd88_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd88 read pattern: { stg2_update_0[d0, d1] -> stg1[21 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write21 = stg1.stg1_stg1_update_0_write21_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write21;
  return 0;
}

inline hw_uint<16> stg2_rd89_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd89 read pattern: { stg2_update_0[d0, d1] -> stg1[22 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write22 = stg1.stg1_stg1_update_0_write22_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write22;
  return 0;
}

inline hw_uint<16> stg2_rd9_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd9 read pattern: { stg2_update_0[d0, d1] -> stg1[2 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write2 = stg1.stg1_stg1_update_0_write2_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write2;
  return 0;
}

inline hw_uint<16> stg2_rd90_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd90 read pattern: { stg2_update_0[d0, d1] -> stg1[22 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write22 = stg1.stg1_stg1_update_0_write22_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write22;
  return 0;
}

inline hw_uint<16> stg2_rd91_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd91 read pattern: { stg2_update_0[d0, d1] -> stg1[23 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write23 = stg1.stg1_stg1_update_0_write23_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write23;
  return 0;
}

inline hw_uint<16> stg2_rd92_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd92 read pattern: { stg2_update_0[d0, d1] -> stg1[22 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write22 = stg1.stg1_stg1_update_0_write22_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write22;
  return 0;
}

inline hw_uint<16> stg2_rd93_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd93 read pattern: { stg2_update_0[d0, d1] -> stg1[23 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write23 = stg1.stg1_stg1_update_0_write23_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write23;
  return 0;
}

inline hw_uint<16> stg2_rd94_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd94 read pattern: { stg2_update_0[d0, d1] -> stg1[23 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write23 = stg1.stg1_stg1_update_0_write23_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write23;
  return 0;
}

inline hw_uint<16> stg2_rd95_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd95 read pattern: { stg2_update_0[d0, d1] -> stg1[24 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write24 = stg1.stg1_stg1_update_0_write24_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write24;
  return 0;
}

inline hw_uint<16> stg2_rd96_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd96 read pattern: { stg2_update_0[d0, d1] -> stg1[23 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write23 = stg1.stg1_stg1_update_0_write23_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write23;
  return 0;
}

inline hw_uint<16> stg2_rd97_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd97 read pattern: { stg2_update_0[d0, d1] -> stg1[24 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write24 = stg1.stg1_stg1_update_0_write24_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write24;
  return 0;
}

inline hw_uint<16> stg2_rd98_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd98 read pattern: { stg2_update_0[d0, d1] -> stg1[24 + 32d0, 1 + d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write24 = stg1.stg1_stg1_update_0_write24_merged_banks_4.peek_1();
  return value_stg1_stg1_update_0_write24;
  return 0;
}

inline hw_uint<16> stg2_rd99_select(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg2_rd99 read pattern: { stg2_update_0[d0, d1] -> stg1[25 + 32d0, d1] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Read schedule : { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  // Write schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
  auto value_stg1_stg1_update_0_write25 = stg1.stg1_stg1_update_0_write25_merged_banks_4.peek_67();
  return value_stg1_stg1_update_0_write25;
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
//	stg1_stg1_update_0_write16
//	stg1_stg1_update_0_write17
//	stg1_stg1_update_0_write18
//	stg1_stg1_update_0_write19
//	stg1_stg1_update_0_write20
//	stg1_stg1_update_0_write21
//	stg1_stg1_update_0_write22
//	stg1_stg1_update_0_write23
//	stg1_stg1_update_0_write24
//	stg1_stg1_update_0_write25
//	stg1_stg1_update_0_write26
//	stg1_stg1_update_0_write27
//	stg1_stg1_update_0_write28
//	stg1_stg1_update_0_write29
//	stg1_stg1_update_0_write30
//	stg1_stg1_update_0_write31
inline void stg1_stg1_update_0_write_bundle_write(hw_uint<512>& stg1_update_0_write, stg1_cache& stg1, int d0, int d1, int dynamic_address) {
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
	hw_uint<16> stg1_stg1_update_0_write16_res = stg1_update_0_write.extract<256, 271>();
	stg1_stg1_update_0_write16_write(stg1_stg1_update_0_write16_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write17_res = stg1_update_0_write.extract<272, 287>();
	stg1_stg1_update_0_write17_write(stg1_stg1_update_0_write17_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write18_res = stg1_update_0_write.extract<288, 303>();
	stg1_stg1_update_0_write18_write(stg1_stg1_update_0_write18_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write19_res = stg1_update_0_write.extract<304, 319>();
	stg1_stg1_update_0_write19_write(stg1_stg1_update_0_write19_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write20_res = stg1_update_0_write.extract<320, 335>();
	stg1_stg1_update_0_write20_write(stg1_stg1_update_0_write20_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write21_res = stg1_update_0_write.extract<336, 351>();
	stg1_stg1_update_0_write21_write(stg1_stg1_update_0_write21_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write22_res = stg1_update_0_write.extract<352, 367>();
	stg1_stg1_update_0_write22_write(stg1_stg1_update_0_write22_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write23_res = stg1_update_0_write.extract<368, 383>();
	stg1_stg1_update_0_write23_write(stg1_stg1_update_0_write23_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write24_res = stg1_update_0_write.extract<384, 399>();
	stg1_stg1_update_0_write24_write(stg1_stg1_update_0_write24_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write25_res = stg1_update_0_write.extract<400, 415>();
	stg1_stg1_update_0_write25_write(stg1_stg1_update_0_write25_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write26_res = stg1_update_0_write.extract<416, 431>();
	stg1_stg1_update_0_write26_write(stg1_stg1_update_0_write26_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write27_res = stg1_update_0_write.extract<432, 447>();
	stg1_stg1_update_0_write27_write(stg1_stg1_update_0_write27_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write28_res = stg1_update_0_write.extract<448, 463>();
	stg1_stg1_update_0_write28_write(stg1_stg1_update_0_write28_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write29_res = stg1_update_0_write.extract<464, 479>();
	stg1_stg1_update_0_write29_write(stg1_stg1_update_0_write29_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write30_res = stg1_update_0_write.extract<480, 495>();
	stg1_stg1_update_0_write30_write(stg1_stg1_update_0_write30_res, stg1, d0, d1, dynamic_address);
	hw_uint<16> stg1_stg1_update_0_write31_res = stg1_update_0_write.extract<496, 511>();
	stg1_stg1_update_0_write31_write(stg1_stg1_update_0_write31_res, stg1, d0, d1, dynamic_address);
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
//	stg2_rd64
//	stg2_rd65
//	stg2_rd66
//	stg2_rd67
//	stg2_rd68
//	stg2_rd69
//	stg2_rd70
//	stg2_rd71
//	stg2_rd72
//	stg2_rd73
//	stg2_rd74
//	stg2_rd75
//	stg2_rd76
//	stg2_rd77
//	stg2_rd78
//	stg2_rd79
//	stg2_rd80
//	stg2_rd81
//	stg2_rd82
//	stg2_rd83
//	stg2_rd84
//	stg2_rd85
//	stg2_rd86
//	stg2_rd87
//	stg2_rd88
//	stg2_rd89
//	stg2_rd90
//	stg2_rd91
//	stg2_rd92
//	stg2_rd93
//	stg2_rd94
//	stg2_rd95
//	stg2_rd96
//	stg2_rd97
//	stg2_rd98
//	stg2_rd99
//	stg2_rd100
//	stg2_rd101
//	stg2_rd102
//	stg2_rd103
//	stg2_rd104
//	stg2_rd105
//	stg2_rd106
//	stg2_rd107
//	stg2_rd108
//	stg2_rd109
//	stg2_rd110
//	stg2_rd111
//	stg2_rd112
//	stg2_rd113
//	stg2_rd114
//	stg2_rd115
//	stg2_rd116
//	stg2_rd117
//	stg2_rd118
//	stg2_rd119
//	stg2_rd120
//	stg2_rd121
//	stg2_rd122
//	stg2_rd123
//	stg2_rd124
//	stg2_rd125
//	stg2_rd126
//	stg2_rd127
inline hw_uint<2048> stg1_stg2_update_0_read_bundle_read(stg1_cache& stg1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 128
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
    // stg2_rd64
    // stg2_rd65
    // stg2_rd66
    // stg2_rd67
    // stg2_rd68
    // stg2_rd69
    // stg2_rd70
    // stg2_rd71
    // stg2_rd72
    // stg2_rd73
    // stg2_rd74
    // stg2_rd75
    // stg2_rd76
    // stg2_rd77
    // stg2_rd78
    // stg2_rd79
    // stg2_rd80
    // stg2_rd81
    // stg2_rd82
    // stg2_rd83
    // stg2_rd84
    // stg2_rd85
    // stg2_rd86
    // stg2_rd87
    // stg2_rd88
    // stg2_rd89
    // stg2_rd90
    // stg2_rd91
    // stg2_rd92
    // stg2_rd93
    // stg2_rd94
    // stg2_rd95
    // stg2_rd96
    // stg2_rd97
    // stg2_rd98
    // stg2_rd99
    // stg2_rd100
    // stg2_rd101
    // stg2_rd102
    // stg2_rd103
    // stg2_rd104
    // stg2_rd105
    // stg2_rd106
    // stg2_rd107
    // stg2_rd108
    // stg2_rd109
    // stg2_rd110
    // stg2_rd111
    // stg2_rd112
    // stg2_rd113
    // stg2_rd114
    // stg2_rd115
    // stg2_rd116
    // stg2_rd117
    // stg2_rd118
    // stg2_rd119
    // stg2_rd120
    // stg2_rd121
    // stg2_rd122
    // stg2_rd123
    // stg2_rd124
    // stg2_rd125
    // stg2_rd126
    // stg2_rd127

	hw_uint<2048> result;
	hw_uint<16> stg2_rd0_res = stg2_rd0_select(stg1, d0, d1, dynamic_address);
	set_at<0, 2048>(result, stg2_rd0_res);
	hw_uint<16> stg2_rd1_res = stg2_rd1_select(stg1, d0, d1, dynamic_address);
	set_at<16, 2048>(result, stg2_rd1_res);
	hw_uint<16> stg2_rd2_res = stg2_rd2_select(stg1, d0, d1, dynamic_address);
	set_at<32, 2048>(result, stg2_rd2_res);
	hw_uint<16> stg2_rd3_res = stg2_rd3_select(stg1, d0, d1, dynamic_address);
	set_at<48, 2048>(result, stg2_rd3_res);
	hw_uint<16> stg2_rd4_res = stg2_rd4_select(stg1, d0, d1, dynamic_address);
	set_at<64, 2048>(result, stg2_rd4_res);
	hw_uint<16> stg2_rd5_res = stg2_rd5_select(stg1, d0, d1, dynamic_address);
	set_at<80, 2048>(result, stg2_rd5_res);
	hw_uint<16> stg2_rd6_res = stg2_rd6_select(stg1, d0, d1, dynamic_address);
	set_at<96, 2048>(result, stg2_rd6_res);
	hw_uint<16> stg2_rd7_res = stg2_rd7_select(stg1, d0, d1, dynamic_address);
	set_at<112, 2048>(result, stg2_rd7_res);
	hw_uint<16> stg2_rd8_res = stg2_rd8_select(stg1, d0, d1, dynamic_address);
	set_at<128, 2048>(result, stg2_rd8_res);
	hw_uint<16> stg2_rd9_res = stg2_rd9_select(stg1, d0, d1, dynamic_address);
	set_at<144, 2048>(result, stg2_rd9_res);
	hw_uint<16> stg2_rd10_res = stg2_rd10_select(stg1, d0, d1, dynamic_address);
	set_at<160, 2048>(result, stg2_rd10_res);
	hw_uint<16> stg2_rd11_res = stg2_rd11_select(stg1, d0, d1, dynamic_address);
	set_at<176, 2048>(result, stg2_rd11_res);
	hw_uint<16> stg2_rd12_res = stg2_rd12_select(stg1, d0, d1, dynamic_address);
	set_at<192, 2048>(result, stg2_rd12_res);
	hw_uint<16> stg2_rd13_res = stg2_rd13_select(stg1, d0, d1, dynamic_address);
	set_at<208, 2048>(result, stg2_rd13_res);
	hw_uint<16> stg2_rd14_res = stg2_rd14_select(stg1, d0, d1, dynamic_address);
	set_at<224, 2048>(result, stg2_rd14_res);
	hw_uint<16> stg2_rd15_res = stg2_rd15_select(stg1, d0, d1, dynamic_address);
	set_at<240, 2048>(result, stg2_rd15_res);
	hw_uint<16> stg2_rd16_res = stg2_rd16_select(stg1, d0, d1, dynamic_address);
	set_at<256, 2048>(result, stg2_rd16_res);
	hw_uint<16> stg2_rd17_res = stg2_rd17_select(stg1, d0, d1, dynamic_address);
	set_at<272, 2048>(result, stg2_rd17_res);
	hw_uint<16> stg2_rd18_res = stg2_rd18_select(stg1, d0, d1, dynamic_address);
	set_at<288, 2048>(result, stg2_rd18_res);
	hw_uint<16> stg2_rd19_res = stg2_rd19_select(stg1, d0, d1, dynamic_address);
	set_at<304, 2048>(result, stg2_rd19_res);
	hw_uint<16> stg2_rd20_res = stg2_rd20_select(stg1, d0, d1, dynamic_address);
	set_at<320, 2048>(result, stg2_rd20_res);
	hw_uint<16> stg2_rd21_res = stg2_rd21_select(stg1, d0, d1, dynamic_address);
	set_at<336, 2048>(result, stg2_rd21_res);
	hw_uint<16> stg2_rd22_res = stg2_rd22_select(stg1, d0, d1, dynamic_address);
	set_at<352, 2048>(result, stg2_rd22_res);
	hw_uint<16> stg2_rd23_res = stg2_rd23_select(stg1, d0, d1, dynamic_address);
	set_at<368, 2048>(result, stg2_rd23_res);
	hw_uint<16> stg2_rd24_res = stg2_rd24_select(stg1, d0, d1, dynamic_address);
	set_at<384, 2048>(result, stg2_rd24_res);
	hw_uint<16> stg2_rd25_res = stg2_rd25_select(stg1, d0, d1, dynamic_address);
	set_at<400, 2048>(result, stg2_rd25_res);
	hw_uint<16> stg2_rd26_res = stg2_rd26_select(stg1, d0, d1, dynamic_address);
	set_at<416, 2048>(result, stg2_rd26_res);
	hw_uint<16> stg2_rd27_res = stg2_rd27_select(stg1, d0, d1, dynamic_address);
	set_at<432, 2048>(result, stg2_rd27_res);
	hw_uint<16> stg2_rd28_res = stg2_rd28_select(stg1, d0, d1, dynamic_address);
	set_at<448, 2048>(result, stg2_rd28_res);
	hw_uint<16> stg2_rd29_res = stg2_rd29_select(stg1, d0, d1, dynamic_address);
	set_at<464, 2048>(result, stg2_rd29_res);
	hw_uint<16> stg2_rd30_res = stg2_rd30_select(stg1, d0, d1, dynamic_address);
	set_at<480, 2048>(result, stg2_rd30_res);
	hw_uint<16> stg2_rd31_res = stg2_rd31_select(stg1, d0, d1, dynamic_address);
	set_at<496, 2048>(result, stg2_rd31_res);
	hw_uint<16> stg2_rd32_res = stg2_rd32_select(stg1, d0, d1, dynamic_address);
	set_at<512, 2048>(result, stg2_rd32_res);
	hw_uint<16> stg2_rd33_res = stg2_rd33_select(stg1, d0, d1, dynamic_address);
	set_at<528, 2048>(result, stg2_rd33_res);
	hw_uint<16> stg2_rd34_res = stg2_rd34_select(stg1, d0, d1, dynamic_address);
	set_at<544, 2048>(result, stg2_rd34_res);
	hw_uint<16> stg2_rd35_res = stg2_rd35_select(stg1, d0, d1, dynamic_address);
	set_at<560, 2048>(result, stg2_rd35_res);
	hw_uint<16> stg2_rd36_res = stg2_rd36_select(stg1, d0, d1, dynamic_address);
	set_at<576, 2048>(result, stg2_rd36_res);
	hw_uint<16> stg2_rd37_res = stg2_rd37_select(stg1, d0, d1, dynamic_address);
	set_at<592, 2048>(result, stg2_rd37_res);
	hw_uint<16> stg2_rd38_res = stg2_rd38_select(stg1, d0, d1, dynamic_address);
	set_at<608, 2048>(result, stg2_rd38_res);
	hw_uint<16> stg2_rd39_res = stg2_rd39_select(stg1, d0, d1, dynamic_address);
	set_at<624, 2048>(result, stg2_rd39_res);
	hw_uint<16> stg2_rd40_res = stg2_rd40_select(stg1, d0, d1, dynamic_address);
	set_at<640, 2048>(result, stg2_rd40_res);
	hw_uint<16> stg2_rd41_res = stg2_rd41_select(stg1, d0, d1, dynamic_address);
	set_at<656, 2048>(result, stg2_rd41_res);
	hw_uint<16> stg2_rd42_res = stg2_rd42_select(stg1, d0, d1, dynamic_address);
	set_at<672, 2048>(result, stg2_rd42_res);
	hw_uint<16> stg2_rd43_res = stg2_rd43_select(stg1, d0, d1, dynamic_address);
	set_at<688, 2048>(result, stg2_rd43_res);
	hw_uint<16> stg2_rd44_res = stg2_rd44_select(stg1, d0, d1, dynamic_address);
	set_at<704, 2048>(result, stg2_rd44_res);
	hw_uint<16> stg2_rd45_res = stg2_rd45_select(stg1, d0, d1, dynamic_address);
	set_at<720, 2048>(result, stg2_rd45_res);
	hw_uint<16> stg2_rd46_res = stg2_rd46_select(stg1, d0, d1, dynamic_address);
	set_at<736, 2048>(result, stg2_rd46_res);
	hw_uint<16> stg2_rd47_res = stg2_rd47_select(stg1, d0, d1, dynamic_address);
	set_at<752, 2048>(result, stg2_rd47_res);
	hw_uint<16> stg2_rd48_res = stg2_rd48_select(stg1, d0, d1, dynamic_address);
	set_at<768, 2048>(result, stg2_rd48_res);
	hw_uint<16> stg2_rd49_res = stg2_rd49_select(stg1, d0, d1, dynamic_address);
	set_at<784, 2048>(result, stg2_rd49_res);
	hw_uint<16> stg2_rd50_res = stg2_rd50_select(stg1, d0, d1, dynamic_address);
	set_at<800, 2048>(result, stg2_rd50_res);
	hw_uint<16> stg2_rd51_res = stg2_rd51_select(stg1, d0, d1, dynamic_address);
	set_at<816, 2048>(result, stg2_rd51_res);
	hw_uint<16> stg2_rd52_res = stg2_rd52_select(stg1, d0, d1, dynamic_address);
	set_at<832, 2048>(result, stg2_rd52_res);
	hw_uint<16> stg2_rd53_res = stg2_rd53_select(stg1, d0, d1, dynamic_address);
	set_at<848, 2048>(result, stg2_rd53_res);
	hw_uint<16> stg2_rd54_res = stg2_rd54_select(stg1, d0, d1, dynamic_address);
	set_at<864, 2048>(result, stg2_rd54_res);
	hw_uint<16> stg2_rd55_res = stg2_rd55_select(stg1, d0, d1, dynamic_address);
	set_at<880, 2048>(result, stg2_rd55_res);
	hw_uint<16> stg2_rd56_res = stg2_rd56_select(stg1, d0, d1, dynamic_address);
	set_at<896, 2048>(result, stg2_rd56_res);
	hw_uint<16> stg2_rd57_res = stg2_rd57_select(stg1, d0, d1, dynamic_address);
	set_at<912, 2048>(result, stg2_rd57_res);
	hw_uint<16> stg2_rd58_res = stg2_rd58_select(stg1, d0, d1, dynamic_address);
	set_at<928, 2048>(result, stg2_rd58_res);
	hw_uint<16> stg2_rd59_res = stg2_rd59_select(stg1, d0, d1, dynamic_address);
	set_at<944, 2048>(result, stg2_rd59_res);
	hw_uint<16> stg2_rd60_res = stg2_rd60_select(stg1, d0, d1, dynamic_address);
	set_at<960, 2048>(result, stg2_rd60_res);
	hw_uint<16> stg2_rd61_res = stg2_rd61_select(stg1, d0, d1, dynamic_address);
	set_at<976, 2048>(result, stg2_rd61_res);
	hw_uint<16> stg2_rd62_res = stg2_rd62_select(stg1, d0, d1, dynamic_address);
	set_at<992, 2048>(result, stg2_rd62_res);
	hw_uint<16> stg2_rd63_res = stg2_rd63_select(stg1, d0, d1, dynamic_address);
	set_at<1008, 2048>(result, stg2_rd63_res);
	hw_uint<16> stg2_rd64_res = stg2_rd64_select(stg1, d0, d1, dynamic_address);
	set_at<1024, 2048>(result, stg2_rd64_res);
	hw_uint<16> stg2_rd65_res = stg2_rd65_select(stg1, d0, d1, dynamic_address);
	set_at<1040, 2048>(result, stg2_rd65_res);
	hw_uint<16> stg2_rd66_res = stg2_rd66_select(stg1, d0, d1, dynamic_address);
	set_at<1056, 2048>(result, stg2_rd66_res);
	hw_uint<16> stg2_rd67_res = stg2_rd67_select(stg1, d0, d1, dynamic_address);
	set_at<1072, 2048>(result, stg2_rd67_res);
	hw_uint<16> stg2_rd68_res = stg2_rd68_select(stg1, d0, d1, dynamic_address);
	set_at<1088, 2048>(result, stg2_rd68_res);
	hw_uint<16> stg2_rd69_res = stg2_rd69_select(stg1, d0, d1, dynamic_address);
	set_at<1104, 2048>(result, stg2_rd69_res);
	hw_uint<16> stg2_rd70_res = stg2_rd70_select(stg1, d0, d1, dynamic_address);
	set_at<1120, 2048>(result, stg2_rd70_res);
	hw_uint<16> stg2_rd71_res = stg2_rd71_select(stg1, d0, d1, dynamic_address);
	set_at<1136, 2048>(result, stg2_rd71_res);
	hw_uint<16> stg2_rd72_res = stg2_rd72_select(stg1, d0, d1, dynamic_address);
	set_at<1152, 2048>(result, stg2_rd72_res);
	hw_uint<16> stg2_rd73_res = stg2_rd73_select(stg1, d0, d1, dynamic_address);
	set_at<1168, 2048>(result, stg2_rd73_res);
	hw_uint<16> stg2_rd74_res = stg2_rd74_select(stg1, d0, d1, dynamic_address);
	set_at<1184, 2048>(result, stg2_rd74_res);
	hw_uint<16> stg2_rd75_res = stg2_rd75_select(stg1, d0, d1, dynamic_address);
	set_at<1200, 2048>(result, stg2_rd75_res);
	hw_uint<16> stg2_rd76_res = stg2_rd76_select(stg1, d0, d1, dynamic_address);
	set_at<1216, 2048>(result, stg2_rd76_res);
	hw_uint<16> stg2_rd77_res = stg2_rd77_select(stg1, d0, d1, dynamic_address);
	set_at<1232, 2048>(result, stg2_rd77_res);
	hw_uint<16> stg2_rd78_res = stg2_rd78_select(stg1, d0, d1, dynamic_address);
	set_at<1248, 2048>(result, stg2_rd78_res);
	hw_uint<16> stg2_rd79_res = stg2_rd79_select(stg1, d0, d1, dynamic_address);
	set_at<1264, 2048>(result, stg2_rd79_res);
	hw_uint<16> stg2_rd80_res = stg2_rd80_select(stg1, d0, d1, dynamic_address);
	set_at<1280, 2048>(result, stg2_rd80_res);
	hw_uint<16> stg2_rd81_res = stg2_rd81_select(stg1, d0, d1, dynamic_address);
	set_at<1296, 2048>(result, stg2_rd81_res);
	hw_uint<16> stg2_rd82_res = stg2_rd82_select(stg1, d0, d1, dynamic_address);
	set_at<1312, 2048>(result, stg2_rd82_res);
	hw_uint<16> stg2_rd83_res = stg2_rd83_select(stg1, d0, d1, dynamic_address);
	set_at<1328, 2048>(result, stg2_rd83_res);
	hw_uint<16> stg2_rd84_res = stg2_rd84_select(stg1, d0, d1, dynamic_address);
	set_at<1344, 2048>(result, stg2_rd84_res);
	hw_uint<16> stg2_rd85_res = stg2_rd85_select(stg1, d0, d1, dynamic_address);
	set_at<1360, 2048>(result, stg2_rd85_res);
	hw_uint<16> stg2_rd86_res = stg2_rd86_select(stg1, d0, d1, dynamic_address);
	set_at<1376, 2048>(result, stg2_rd86_res);
	hw_uint<16> stg2_rd87_res = stg2_rd87_select(stg1, d0, d1, dynamic_address);
	set_at<1392, 2048>(result, stg2_rd87_res);
	hw_uint<16> stg2_rd88_res = stg2_rd88_select(stg1, d0, d1, dynamic_address);
	set_at<1408, 2048>(result, stg2_rd88_res);
	hw_uint<16> stg2_rd89_res = stg2_rd89_select(stg1, d0, d1, dynamic_address);
	set_at<1424, 2048>(result, stg2_rd89_res);
	hw_uint<16> stg2_rd90_res = stg2_rd90_select(stg1, d0, d1, dynamic_address);
	set_at<1440, 2048>(result, stg2_rd90_res);
	hw_uint<16> stg2_rd91_res = stg2_rd91_select(stg1, d0, d1, dynamic_address);
	set_at<1456, 2048>(result, stg2_rd91_res);
	hw_uint<16> stg2_rd92_res = stg2_rd92_select(stg1, d0, d1, dynamic_address);
	set_at<1472, 2048>(result, stg2_rd92_res);
	hw_uint<16> stg2_rd93_res = stg2_rd93_select(stg1, d0, d1, dynamic_address);
	set_at<1488, 2048>(result, stg2_rd93_res);
	hw_uint<16> stg2_rd94_res = stg2_rd94_select(stg1, d0, d1, dynamic_address);
	set_at<1504, 2048>(result, stg2_rd94_res);
	hw_uint<16> stg2_rd95_res = stg2_rd95_select(stg1, d0, d1, dynamic_address);
	set_at<1520, 2048>(result, stg2_rd95_res);
	hw_uint<16> stg2_rd96_res = stg2_rd96_select(stg1, d0, d1, dynamic_address);
	set_at<1536, 2048>(result, stg2_rd96_res);
	hw_uint<16> stg2_rd97_res = stg2_rd97_select(stg1, d0, d1, dynamic_address);
	set_at<1552, 2048>(result, stg2_rd97_res);
	hw_uint<16> stg2_rd98_res = stg2_rd98_select(stg1, d0, d1, dynamic_address);
	set_at<1568, 2048>(result, stg2_rd98_res);
	hw_uint<16> stg2_rd99_res = stg2_rd99_select(stg1, d0, d1, dynamic_address);
	set_at<1584, 2048>(result, stg2_rd99_res);
	hw_uint<16> stg2_rd100_res = stg2_rd100_select(stg1, d0, d1, dynamic_address);
	set_at<1600, 2048>(result, stg2_rd100_res);
	hw_uint<16> stg2_rd101_res = stg2_rd101_select(stg1, d0, d1, dynamic_address);
	set_at<1616, 2048>(result, stg2_rd101_res);
	hw_uint<16> stg2_rd102_res = stg2_rd102_select(stg1, d0, d1, dynamic_address);
	set_at<1632, 2048>(result, stg2_rd102_res);
	hw_uint<16> stg2_rd103_res = stg2_rd103_select(stg1, d0, d1, dynamic_address);
	set_at<1648, 2048>(result, stg2_rd103_res);
	hw_uint<16> stg2_rd104_res = stg2_rd104_select(stg1, d0, d1, dynamic_address);
	set_at<1664, 2048>(result, stg2_rd104_res);
	hw_uint<16> stg2_rd105_res = stg2_rd105_select(stg1, d0, d1, dynamic_address);
	set_at<1680, 2048>(result, stg2_rd105_res);
	hw_uint<16> stg2_rd106_res = stg2_rd106_select(stg1, d0, d1, dynamic_address);
	set_at<1696, 2048>(result, stg2_rd106_res);
	hw_uint<16> stg2_rd107_res = stg2_rd107_select(stg1, d0, d1, dynamic_address);
	set_at<1712, 2048>(result, stg2_rd107_res);
	hw_uint<16> stg2_rd108_res = stg2_rd108_select(stg1, d0, d1, dynamic_address);
	set_at<1728, 2048>(result, stg2_rd108_res);
	hw_uint<16> stg2_rd109_res = stg2_rd109_select(stg1, d0, d1, dynamic_address);
	set_at<1744, 2048>(result, stg2_rd109_res);
	hw_uint<16> stg2_rd110_res = stg2_rd110_select(stg1, d0, d1, dynamic_address);
	set_at<1760, 2048>(result, stg2_rd110_res);
	hw_uint<16> stg2_rd111_res = stg2_rd111_select(stg1, d0, d1, dynamic_address);
	set_at<1776, 2048>(result, stg2_rd111_res);
	hw_uint<16> stg2_rd112_res = stg2_rd112_select(stg1, d0, d1, dynamic_address);
	set_at<1792, 2048>(result, stg2_rd112_res);
	hw_uint<16> stg2_rd113_res = stg2_rd113_select(stg1, d0, d1, dynamic_address);
	set_at<1808, 2048>(result, stg2_rd113_res);
	hw_uint<16> stg2_rd114_res = stg2_rd114_select(stg1, d0, d1, dynamic_address);
	set_at<1824, 2048>(result, stg2_rd114_res);
	hw_uint<16> stg2_rd115_res = stg2_rd115_select(stg1, d0, d1, dynamic_address);
	set_at<1840, 2048>(result, stg2_rd115_res);
	hw_uint<16> stg2_rd116_res = stg2_rd116_select(stg1, d0, d1, dynamic_address);
	set_at<1856, 2048>(result, stg2_rd116_res);
	hw_uint<16> stg2_rd117_res = stg2_rd117_select(stg1, d0, d1, dynamic_address);
	set_at<1872, 2048>(result, stg2_rd117_res);
	hw_uint<16> stg2_rd118_res = stg2_rd118_select(stg1, d0, d1, dynamic_address);
	set_at<1888, 2048>(result, stg2_rd118_res);
	hw_uint<16> stg2_rd119_res = stg2_rd119_select(stg1, d0, d1, dynamic_address);
	set_at<1904, 2048>(result, stg2_rd119_res);
	hw_uint<16> stg2_rd120_res = stg2_rd120_select(stg1, d0, d1, dynamic_address);
	set_at<1920, 2048>(result, stg2_rd120_res);
	hw_uint<16> stg2_rd121_res = stg2_rd121_select(stg1, d0, d1, dynamic_address);
	set_at<1936, 2048>(result, stg2_rd121_res);
	hw_uint<16> stg2_rd122_res = stg2_rd122_select(stg1, d0, d1, dynamic_address);
	set_at<1952, 2048>(result, stg2_rd122_res);
	hw_uint<16> stg2_rd123_res = stg2_rd123_select(stg1, d0, d1, dynamic_address);
	set_at<1968, 2048>(result, stg2_rd123_res);
	hw_uint<16> stg2_rd124_res = stg2_rd124_select(stg1, d0, d1, dynamic_address);
	set_at<1984, 2048>(result, stg2_rd124_res);
	hw_uint<16> stg2_rd125_res = stg2_rd125_select(stg1, d0, d1, dynamic_address);
	set_at<2000, 2048>(result, stg2_rd125_res);
	hw_uint<16> stg2_rd126_res = stg2_rd126_select(stg1, d0, d1, dynamic_address);
	set_at<2016, 2048>(result, stg2_rd126_res);
	hw_uint<16> stg2_rd127_res = stg2_rd127_select(stg1, d0, d1, dynamic_address);
	set_at<2032, 2048>(result, stg2_rd127_res);
	return result;
}

struct stg2_stg2_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[-32, 1952], [0, 1080]}
	// Capacity: 66
	// # of read delays: 4
  // 0, 1, 64, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 62> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_63() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_64() {
		return f4;
	}

	inline hw_uint<16> peek_65() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 62
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 62 reading from capacity: 1
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
	// RAM Box: {[-31, 1921], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
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
	// RAM Box: {[-22, 1930], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
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
	// RAM Box: {[-21, 1931], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
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
	// RAM Box: {[-20, 1932], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
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
	// RAM Box: {[-19, 1933], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
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
	// RAM Box: {[-18, 1934], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
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
	// RAM Box: {[-17, 1935], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg2_stg2_update_0_write16_merged_banks_4_cache {
	// RAM Box: {[-16, 1936], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg2_stg2_update_0_write17_merged_banks_4_cache {
	// RAM Box: {[-15, 1937], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg2_stg2_update_0_write18_merged_banks_4_cache {
	// RAM Box: {[-14, 1938], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg2_stg2_update_0_write19_merged_banks_4_cache {
	// RAM Box: {[-13, 1939], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
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
	// RAM Box: {[-30, 1922], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg2_stg2_update_0_write20_merged_banks_4_cache {
	// RAM Box: {[-12, 1940], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg2_stg2_update_0_write21_merged_banks_4_cache {
	// RAM Box: {[-11, 1941], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg2_stg2_update_0_write22_merged_banks_4_cache {
	// RAM Box: {[-10, 1942], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg2_stg2_update_0_write23_merged_banks_4_cache {
	// RAM Box: {[-9, 1943], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg2_stg2_update_0_write24_merged_banks_4_cache {
	// RAM Box: {[-8, 1944], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg2_stg2_update_0_write25_merged_banks_4_cache {
	// RAM Box: {[-7, 1945], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg2_stg2_update_0_write26_merged_banks_4_cache {
	// RAM Box: {[-6, 1946], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg2_stg2_update_0_write27_merged_banks_4_cache {
	// RAM Box: {[-5, 1947], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg2_stg2_update_0_write28_merged_banks_4_cache {
	// RAM Box: {[-4, 1948], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg2_stg2_update_0_write29_merged_banks_4_cache {
	// RAM Box: {[-3, 1949], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
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
	// RAM Box: {[-29, 1923], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg2_stg2_update_0_write30_merged_banks_4_cache {
	// RAM Box: {[-2, 1950], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg2_stg2_update_0_write31_merged_banks_4_cache {
	// RAM Box: {[-33, 1951], [0, 1081]}
	// Capacity: 67
	// # of read delays: 4
  // 0, 1, 65, 66
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}

	inline hw_uint<16> peek_66() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
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
	// RAM Box: {[-28, 1924], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
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
	// RAM Box: {[-27, 1925], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
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
	// RAM Box: {[-26, 1926], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
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
	// RAM Box: {[-25, 1927], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
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
	// RAM Box: {[-24, 1928], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
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
	// RAM Box: {[-23, 1929], [0, 1081]}
	// Capacity: 66
	// # of read delays: 3
  // 0, 1, 65
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_65() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
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
  // # of banks: 32
  stg2_stg2_update_0_write0_merged_banks_4_cache stg2_stg2_update_0_write0_merged_banks_4;
  stg2_stg2_update_0_write1_merged_banks_4_cache stg2_stg2_update_0_write1_merged_banks_4;
  stg2_stg2_update_0_write10_merged_banks_4_cache stg2_stg2_update_0_write10_merged_banks_4;
  stg2_stg2_update_0_write11_merged_banks_4_cache stg2_stg2_update_0_write11_merged_banks_4;
  stg2_stg2_update_0_write12_merged_banks_4_cache stg2_stg2_update_0_write12_merged_banks_4;
  stg2_stg2_update_0_write13_merged_banks_4_cache stg2_stg2_update_0_write13_merged_banks_4;
  stg2_stg2_update_0_write14_merged_banks_4_cache stg2_stg2_update_0_write14_merged_banks_4;
  stg2_stg2_update_0_write15_merged_banks_4_cache stg2_stg2_update_0_write15_merged_banks_4;
  stg2_stg2_update_0_write16_merged_banks_4_cache stg2_stg2_update_0_write16_merged_banks_4;
  stg2_stg2_update_0_write17_merged_banks_4_cache stg2_stg2_update_0_write17_merged_banks_4;
  stg2_stg2_update_0_write18_merged_banks_4_cache stg2_stg2_update_0_write18_merged_banks_4;
  stg2_stg2_update_0_write19_merged_banks_4_cache stg2_stg2_update_0_write19_merged_banks_4;
  stg2_stg2_update_0_write2_merged_banks_4_cache stg2_stg2_update_0_write2_merged_banks_4;
  stg2_stg2_update_0_write20_merged_banks_4_cache stg2_stg2_update_0_write20_merged_banks_4;
  stg2_stg2_update_0_write21_merged_banks_4_cache stg2_stg2_update_0_write21_merged_banks_4;
  stg2_stg2_update_0_write22_merged_banks_4_cache stg2_stg2_update_0_write22_merged_banks_4;
  stg2_stg2_update_0_write23_merged_banks_4_cache stg2_stg2_update_0_write23_merged_banks_4;
  stg2_stg2_update_0_write24_merged_banks_4_cache stg2_stg2_update_0_write24_merged_banks_4;
  stg2_stg2_update_0_write25_merged_banks_4_cache stg2_stg2_update_0_write25_merged_banks_4;
  stg2_stg2_update_0_write26_merged_banks_4_cache stg2_stg2_update_0_write26_merged_banks_4;
  stg2_stg2_update_0_write27_merged_banks_4_cache stg2_stg2_update_0_write27_merged_banks_4;
  stg2_stg2_update_0_write28_merged_banks_4_cache stg2_stg2_update_0_write28_merged_banks_4;
  stg2_stg2_update_0_write29_merged_banks_4_cache stg2_stg2_update_0_write29_merged_banks_4;
  stg2_stg2_update_0_write3_merged_banks_4_cache stg2_stg2_update_0_write3_merged_banks_4;
  stg2_stg2_update_0_write30_merged_banks_4_cache stg2_stg2_update_0_write30_merged_banks_4;
  stg2_stg2_update_0_write31_merged_banks_4_cache stg2_stg2_update_0_write31_merged_banks_4;
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

inline void stg2_stg2_update_0_write16_write(hw_uint<16>& stg2_stg2_update_0_write16, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write16_merged_banks_4.push(stg2_stg2_update_0_write16);
}

inline void stg2_stg2_update_0_write17_write(hw_uint<16>& stg2_stg2_update_0_write17, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write17_merged_banks_4.push(stg2_stg2_update_0_write17);
}

inline void stg2_stg2_update_0_write18_write(hw_uint<16>& stg2_stg2_update_0_write18, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write18_merged_banks_4.push(stg2_stg2_update_0_write18);
}

inline void stg2_stg2_update_0_write19_write(hw_uint<16>& stg2_stg2_update_0_write19, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write19_merged_banks_4.push(stg2_stg2_update_0_write19);
}

inline void stg2_stg2_update_0_write2_write(hw_uint<16>& stg2_stg2_update_0_write2, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write2_merged_banks_4.push(stg2_stg2_update_0_write2);
}

inline void stg2_stg2_update_0_write20_write(hw_uint<16>& stg2_stg2_update_0_write20, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write20_merged_banks_4.push(stg2_stg2_update_0_write20);
}

inline void stg2_stg2_update_0_write21_write(hw_uint<16>& stg2_stg2_update_0_write21, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write21_merged_banks_4.push(stg2_stg2_update_0_write21);
}

inline void stg2_stg2_update_0_write22_write(hw_uint<16>& stg2_stg2_update_0_write22, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write22_merged_banks_4.push(stg2_stg2_update_0_write22);
}

inline void stg2_stg2_update_0_write23_write(hw_uint<16>& stg2_stg2_update_0_write23, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write23_merged_banks_4.push(stg2_stg2_update_0_write23);
}

inline void stg2_stg2_update_0_write24_write(hw_uint<16>& stg2_stg2_update_0_write24, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write24_merged_banks_4.push(stg2_stg2_update_0_write24);
}

inline void stg2_stg2_update_0_write25_write(hw_uint<16>& stg2_stg2_update_0_write25, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write25_merged_banks_4.push(stg2_stg2_update_0_write25);
}

inline void stg2_stg2_update_0_write26_write(hw_uint<16>& stg2_stg2_update_0_write26, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write26_merged_banks_4.push(stg2_stg2_update_0_write26);
}

inline void stg2_stg2_update_0_write27_write(hw_uint<16>& stg2_stg2_update_0_write27, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write27_merged_banks_4.push(stg2_stg2_update_0_write27);
}

inline void stg2_stg2_update_0_write28_write(hw_uint<16>& stg2_stg2_update_0_write28, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write28_merged_banks_4.push(stg2_stg2_update_0_write28);
}

inline void stg2_stg2_update_0_write29_write(hw_uint<16>& stg2_stg2_update_0_write29, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write29_merged_banks_4.push(stg2_stg2_update_0_write29);
}

inline void stg2_stg2_update_0_write3_write(hw_uint<16>& stg2_stg2_update_0_write3, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write3_merged_banks_4.push(stg2_stg2_update_0_write3);
}

inline void stg2_stg2_update_0_write30_write(hw_uint<16>& stg2_stg2_update_0_write30, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write30_merged_banks_4.push(stg2_stg2_update_0_write30);
}

inline void stg2_stg2_update_0_write31_write(hw_uint<16>& stg2_stg2_update_0_write31, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  stg2.stg2_stg2_update_0_write31_merged_banks_4.push(stg2_stg2_update_0_write31);
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
  // stg3_rd0 read pattern: { stg3_update_0[d0, d1] -> stg2[-1 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write31 = stg2.stg2_stg2_update_0_write31_merged_banks_4.peek_66();
  return value_stg2_stg2_update_0_write31;
  return 0;
}

inline hw_uint<16> stg3_rd1_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd1 read pattern: { stg3_update_0[d0, d1] -> stg2[32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write0 = stg2.stg2_stg2_update_0_write0_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write0;
  return 0;
}

inline hw_uint<16> stg3_rd10_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd10 read pattern: { stg3_update_0[d0, d1] -> stg2[2 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write2 = stg2.stg2_stg2_update_0_write2_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write2;
  return 0;
}

inline hw_uint<16> stg3_rd100_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd100 read pattern: { stg3_update_0[d0, d1] -> stg2[24 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write24 = stg2.stg2_stg2_update_0_write24_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write24;
  return 0;
}

inline hw_uint<16> stg3_rd101_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd101 read pattern: { stg3_update_0[d0, d1] -> stg2[25 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write25 = stg2.stg2_stg2_update_0_write25_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write25;
  return 0;
}

inline hw_uint<16> stg3_rd102_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd102 read pattern: { stg3_update_0[d0, d1] -> stg2[25 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write25 = stg2.stg2_stg2_update_0_write25_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write25;
  return 0;
}

inline hw_uint<16> stg3_rd103_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd103 read pattern: { stg3_update_0[d0, d1] -> stg2[26 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write26 = stg2.stg2_stg2_update_0_write26_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write26;
  return 0;
}

inline hw_uint<16> stg3_rd104_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd104 read pattern: { stg3_update_0[d0, d1] -> stg2[25 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write25 = stg2.stg2_stg2_update_0_write25_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write25;
  return 0;
}

inline hw_uint<16> stg3_rd105_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd105 read pattern: { stg3_update_0[d0, d1] -> stg2[26 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write26 = stg2.stg2_stg2_update_0_write26_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write26;
  return 0;
}

inline hw_uint<16> stg3_rd106_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd106 read pattern: { stg3_update_0[d0, d1] -> stg2[26 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write26 = stg2.stg2_stg2_update_0_write26_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write26;
  return 0;
}

inline hw_uint<16> stg3_rd107_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd107 read pattern: { stg3_update_0[d0, d1] -> stg2[27 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write27 = stg2.stg2_stg2_update_0_write27_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write27;
  return 0;
}

inline hw_uint<16> stg3_rd108_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd108 read pattern: { stg3_update_0[d0, d1] -> stg2[26 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write26 = stg2.stg2_stg2_update_0_write26_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write26;
  return 0;
}

inline hw_uint<16> stg3_rd109_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd109 read pattern: { stg3_update_0[d0, d1] -> stg2[27 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write27 = stg2.stg2_stg2_update_0_write27_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write27;
  return 0;
}

inline hw_uint<16> stg3_rd11_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd11 read pattern: { stg3_update_0[d0, d1] -> stg2[3 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write3 = stg2.stg2_stg2_update_0_write3_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write3;
  return 0;
}

inline hw_uint<16> stg3_rd110_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd110 read pattern: { stg3_update_0[d0, d1] -> stg2[27 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write27 = stg2.stg2_stg2_update_0_write27_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write27;
  return 0;
}

inline hw_uint<16> stg3_rd111_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd111 read pattern: { stg3_update_0[d0, d1] -> stg2[28 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write28 = stg2.stg2_stg2_update_0_write28_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write28;
  return 0;
}

inline hw_uint<16> stg3_rd112_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd112 read pattern: { stg3_update_0[d0, d1] -> stg2[27 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write27 = stg2.stg2_stg2_update_0_write27_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write27;
  return 0;
}

inline hw_uint<16> stg3_rd113_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd113 read pattern: { stg3_update_0[d0, d1] -> stg2[28 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write28 = stg2.stg2_stg2_update_0_write28_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write28;
  return 0;
}

inline hw_uint<16> stg3_rd114_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd114 read pattern: { stg3_update_0[d0, d1] -> stg2[28 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write28 = stg2.stg2_stg2_update_0_write28_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write28;
  return 0;
}

inline hw_uint<16> stg3_rd115_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd115 read pattern: { stg3_update_0[d0, d1] -> stg2[29 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write29 = stg2.stg2_stg2_update_0_write29_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write29;
  return 0;
}

inline hw_uint<16> stg3_rd116_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd116 read pattern: { stg3_update_0[d0, d1] -> stg2[28 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write28 = stg2.stg2_stg2_update_0_write28_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write28;
  return 0;
}

inline hw_uint<16> stg3_rd117_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd117 read pattern: { stg3_update_0[d0, d1] -> stg2[29 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write29 = stg2.stg2_stg2_update_0_write29_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write29;
  return 0;
}

inline hw_uint<16> stg3_rd118_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd118 read pattern: { stg3_update_0[d0, d1] -> stg2[29 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write29 = stg2.stg2_stg2_update_0_write29_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write29;
  return 0;
}

inline hw_uint<16> stg3_rd119_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd119 read pattern: { stg3_update_0[d0, d1] -> stg2[30 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write30 = stg2.stg2_stg2_update_0_write30_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write30;
  return 0;
}

inline hw_uint<16> stg3_rd12_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd12 read pattern: { stg3_update_0[d0, d1] -> stg2[2 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write2 = stg2.stg2_stg2_update_0_write2_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write2;
  return 0;
}

inline hw_uint<16> stg3_rd120_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd120 read pattern: { stg3_update_0[d0, d1] -> stg2[29 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write29 = stg2.stg2_stg2_update_0_write29_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write29;
  return 0;
}

inline hw_uint<16> stg3_rd121_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd121 read pattern: { stg3_update_0[d0, d1] -> stg2[30 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write30 = stg2.stg2_stg2_update_0_write30_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write30;
  return 0;
}

inline hw_uint<16> stg3_rd122_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd122 read pattern: { stg3_update_0[d0, d1] -> stg2[30 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write30 = stg2.stg2_stg2_update_0_write30_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write30;
  return 0;
}

inline hw_uint<16> stg3_rd123_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd123 read pattern: { stg3_update_0[d0, d1] -> stg2[31 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write31 = stg2.stg2_stg2_update_0_write31_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write31;
  return 0;
}

inline hw_uint<16> stg3_rd124_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd124 read pattern: { stg3_update_0[d0, d1] -> stg2[30 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write30 = stg2.stg2_stg2_update_0_write30_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write30;
  return 0;
}

inline hw_uint<16> stg3_rd125_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd125 read pattern: { stg3_update_0[d0, d1] -> stg2[31 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write31 = stg2.stg2_stg2_update_0_write31_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write31;
  return 0;
}

inline hw_uint<16> stg3_rd126_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd126 read pattern: { stg3_update_0[d0, d1] -> stg2[31 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write31 = stg2.stg2_stg2_update_0_write31_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write31;
  return 0;
}

inline hw_uint<16> stg3_rd127_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd127 read pattern: { stg3_update_0[d0, d1] -> stg2[32 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write0 = stg2.stg2_stg2_update_0_write0_merged_banks_4.peek_64();
  return value_stg2_stg2_update_0_write0;
  return 0;
}

inline hw_uint<16> stg3_rd13_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd13 read pattern: { stg3_update_0[d0, d1] -> stg2[3 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write3 = stg2.stg2_stg2_update_0_write3_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write3;
  return 0;
}

inline hw_uint<16> stg3_rd14_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd14 read pattern: { stg3_update_0[d0, d1] -> stg2[3 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write3 = stg2.stg2_stg2_update_0_write3_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write3;
  return 0;
}

inline hw_uint<16> stg3_rd15_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd15 read pattern: { stg3_update_0[d0, d1] -> stg2[4 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write4 = stg2.stg2_stg2_update_0_write4_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write4;
  return 0;
}

inline hw_uint<16> stg3_rd16_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd16 read pattern: { stg3_update_0[d0, d1] -> stg2[3 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write3 = stg2.stg2_stg2_update_0_write3_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write3;
  return 0;
}

inline hw_uint<16> stg3_rd17_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd17 read pattern: { stg3_update_0[d0, d1] -> stg2[4 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write4 = stg2.stg2_stg2_update_0_write4_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write4;
  return 0;
}

inline hw_uint<16> stg3_rd18_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd18 read pattern: { stg3_update_0[d0, d1] -> stg2[4 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write4 = stg2.stg2_stg2_update_0_write4_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write4;
  return 0;
}

inline hw_uint<16> stg3_rd19_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd19 read pattern: { stg3_update_0[d0, d1] -> stg2[5 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write5 = stg2.stg2_stg2_update_0_write5_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write5;
  return 0;
}

inline hw_uint<16> stg3_rd2_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd2 read pattern: { stg3_update_0[d0, d1] -> stg2[32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write0 = stg2.stg2_stg2_update_0_write0_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write0;
  return 0;
}

inline hw_uint<16> stg3_rd20_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd20 read pattern: { stg3_update_0[d0, d1] -> stg2[4 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write4 = stg2.stg2_stg2_update_0_write4_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write4;
  return 0;
}

inline hw_uint<16> stg3_rd21_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd21 read pattern: { stg3_update_0[d0, d1] -> stg2[5 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write5 = stg2.stg2_stg2_update_0_write5_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write5;
  return 0;
}

inline hw_uint<16> stg3_rd22_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd22 read pattern: { stg3_update_0[d0, d1] -> stg2[5 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write5 = stg2.stg2_stg2_update_0_write5_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write5;
  return 0;
}

inline hw_uint<16> stg3_rd23_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd23 read pattern: { stg3_update_0[d0, d1] -> stg2[6 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write6 = stg2.stg2_stg2_update_0_write6_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write6;
  return 0;
}

inline hw_uint<16> stg3_rd24_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd24 read pattern: { stg3_update_0[d0, d1] -> stg2[5 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write5 = stg2.stg2_stg2_update_0_write5_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write5;
  return 0;
}

inline hw_uint<16> stg3_rd25_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd25 read pattern: { stg3_update_0[d0, d1] -> stg2[6 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write6 = stg2.stg2_stg2_update_0_write6_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write6;
  return 0;
}

inline hw_uint<16> stg3_rd26_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd26 read pattern: { stg3_update_0[d0, d1] -> stg2[6 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write6 = stg2.stg2_stg2_update_0_write6_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write6;
  return 0;
}

inline hw_uint<16> stg3_rd27_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd27 read pattern: { stg3_update_0[d0, d1] -> stg2[7 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write7 = stg2.stg2_stg2_update_0_write7_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write7;
  return 0;
}

inline hw_uint<16> stg3_rd28_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd28 read pattern: { stg3_update_0[d0, d1] -> stg2[6 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write6 = stg2.stg2_stg2_update_0_write6_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write6;
  return 0;
}

inline hw_uint<16> stg3_rd29_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd29 read pattern: { stg3_update_0[d0, d1] -> stg2[7 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write7 = stg2.stg2_stg2_update_0_write7_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write7;
  return 0;
}

inline hw_uint<16> stg3_rd3_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd3 read pattern: { stg3_update_0[d0, d1] -> stg2[1 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write1 = stg2.stg2_stg2_update_0_write1_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write1;
  return 0;
}

inline hw_uint<16> stg3_rd30_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd30 read pattern: { stg3_update_0[d0, d1] -> stg2[7 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write7 = stg2.stg2_stg2_update_0_write7_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write7;
  return 0;
}

inline hw_uint<16> stg3_rd31_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd31 read pattern: { stg3_update_0[d0, d1] -> stg2[8 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write8 = stg2.stg2_stg2_update_0_write8_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write8;
  return 0;
}

inline hw_uint<16> stg3_rd32_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd32 read pattern: { stg3_update_0[d0, d1] -> stg2[7 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write7 = stg2.stg2_stg2_update_0_write7_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write7;
  return 0;
}

inline hw_uint<16> stg3_rd33_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd33 read pattern: { stg3_update_0[d0, d1] -> stg2[8 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write8 = stg2.stg2_stg2_update_0_write8_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write8;
  return 0;
}

inline hw_uint<16> stg3_rd34_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd34 read pattern: { stg3_update_0[d0, d1] -> stg2[8 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write8 = stg2.stg2_stg2_update_0_write8_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write8;
  return 0;
}

inline hw_uint<16> stg3_rd35_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd35 read pattern: { stg3_update_0[d0, d1] -> stg2[9 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write9 = stg2.stg2_stg2_update_0_write9_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write9;
  return 0;
}

inline hw_uint<16> stg3_rd36_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd36 read pattern: { stg3_update_0[d0, d1] -> stg2[8 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write8 = stg2.stg2_stg2_update_0_write8_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write8;
  return 0;
}

inline hw_uint<16> stg3_rd37_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd37 read pattern: { stg3_update_0[d0, d1] -> stg2[9 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write9 = stg2.stg2_stg2_update_0_write9_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write9;
  return 0;
}

inline hw_uint<16> stg3_rd38_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd38 read pattern: { stg3_update_0[d0, d1] -> stg2[9 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write9 = stg2.stg2_stg2_update_0_write9_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write9;
  return 0;
}

inline hw_uint<16> stg3_rd39_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd39 read pattern: { stg3_update_0[d0, d1] -> stg2[10 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write10 = stg2.stg2_stg2_update_0_write10_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write10;
  return 0;
}

inline hw_uint<16> stg3_rd4_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd4 read pattern: { stg3_update_0[d0, d1] -> stg2[32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write0 = stg2.stg2_stg2_update_0_write0_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write0;
  return 0;
}

inline hw_uint<16> stg3_rd40_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd40 read pattern: { stg3_update_0[d0, d1] -> stg2[9 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write9 = stg2.stg2_stg2_update_0_write9_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write9;
  return 0;
}

inline hw_uint<16> stg3_rd41_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd41 read pattern: { stg3_update_0[d0, d1] -> stg2[10 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write10 = stg2.stg2_stg2_update_0_write10_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write10;
  return 0;
}

inline hw_uint<16> stg3_rd42_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd42 read pattern: { stg3_update_0[d0, d1] -> stg2[10 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write10 = stg2.stg2_stg2_update_0_write10_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write10;
  return 0;
}

inline hw_uint<16> stg3_rd43_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd43 read pattern: { stg3_update_0[d0, d1] -> stg2[11 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write11 = stg2.stg2_stg2_update_0_write11_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write11;
  return 0;
}

inline hw_uint<16> stg3_rd44_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd44 read pattern: { stg3_update_0[d0, d1] -> stg2[10 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write10 = stg2.stg2_stg2_update_0_write10_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write10;
  return 0;
}

inline hw_uint<16> stg3_rd45_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd45 read pattern: { stg3_update_0[d0, d1] -> stg2[11 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write11 = stg2.stg2_stg2_update_0_write11_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write11;
  return 0;
}

inline hw_uint<16> stg3_rd46_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd46 read pattern: { stg3_update_0[d0, d1] -> stg2[11 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write11 = stg2.stg2_stg2_update_0_write11_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write11;
  return 0;
}

inline hw_uint<16> stg3_rd47_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd47 read pattern: { stg3_update_0[d0, d1] -> stg2[12 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write12 = stg2.stg2_stg2_update_0_write12_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write12;
  return 0;
}

inline hw_uint<16> stg3_rd48_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd48 read pattern: { stg3_update_0[d0, d1] -> stg2[11 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write11 = stg2.stg2_stg2_update_0_write11_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write11;
  return 0;
}

inline hw_uint<16> stg3_rd49_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd49 read pattern: { stg3_update_0[d0, d1] -> stg2[12 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write12 = stg2.stg2_stg2_update_0_write12_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write12;
  return 0;
}

inline hw_uint<16> stg3_rd5_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd5 read pattern: { stg3_update_0[d0, d1] -> stg2[1 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write1 = stg2.stg2_stg2_update_0_write1_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write1;
  return 0;
}

inline hw_uint<16> stg3_rd50_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd50 read pattern: { stg3_update_0[d0, d1] -> stg2[12 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write12 = stg2.stg2_stg2_update_0_write12_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write12;
  return 0;
}

inline hw_uint<16> stg3_rd51_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd51 read pattern: { stg3_update_0[d0, d1] -> stg2[13 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write13 = stg2.stg2_stg2_update_0_write13_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write13;
  return 0;
}

inline hw_uint<16> stg3_rd52_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd52 read pattern: { stg3_update_0[d0, d1] -> stg2[12 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write12 = stg2.stg2_stg2_update_0_write12_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write12;
  return 0;
}

inline hw_uint<16> stg3_rd53_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd53 read pattern: { stg3_update_0[d0, d1] -> stg2[13 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write13 = stg2.stg2_stg2_update_0_write13_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write13;
  return 0;
}

inline hw_uint<16> stg3_rd54_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd54 read pattern: { stg3_update_0[d0, d1] -> stg2[13 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write13 = stg2.stg2_stg2_update_0_write13_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write13;
  return 0;
}

inline hw_uint<16> stg3_rd55_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd55 read pattern: { stg3_update_0[d0, d1] -> stg2[14 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write14 = stg2.stg2_stg2_update_0_write14_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write14;
  return 0;
}

inline hw_uint<16> stg3_rd56_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd56 read pattern: { stg3_update_0[d0, d1] -> stg2[13 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write13 = stg2.stg2_stg2_update_0_write13_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write13;
  return 0;
}

inline hw_uint<16> stg3_rd57_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd57 read pattern: { stg3_update_0[d0, d1] -> stg2[14 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write14 = stg2.stg2_stg2_update_0_write14_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write14;
  return 0;
}

inline hw_uint<16> stg3_rd58_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd58 read pattern: { stg3_update_0[d0, d1] -> stg2[14 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write14 = stg2.stg2_stg2_update_0_write14_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write14;
  return 0;
}

inline hw_uint<16> stg3_rd59_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd59 read pattern: { stg3_update_0[d0, d1] -> stg2[15 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write15 = stg2.stg2_stg2_update_0_write15_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write15;
  return 0;
}

inline hw_uint<16> stg3_rd6_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd6 read pattern: { stg3_update_0[d0, d1] -> stg2[1 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write1 = stg2.stg2_stg2_update_0_write1_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write1;
  return 0;
}

inline hw_uint<16> stg3_rd60_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd60 read pattern: { stg3_update_0[d0, d1] -> stg2[14 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write14 = stg2.stg2_stg2_update_0_write14_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write14;
  return 0;
}

inline hw_uint<16> stg3_rd61_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd61 read pattern: { stg3_update_0[d0, d1] -> stg2[15 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write15 = stg2.stg2_stg2_update_0_write15_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write15;
  return 0;
}

inline hw_uint<16> stg3_rd62_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd62 read pattern: { stg3_update_0[d0, d1] -> stg2[15 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write15 = stg2.stg2_stg2_update_0_write15_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write15;
  return 0;
}

inline hw_uint<16> stg3_rd63_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd63 read pattern: { stg3_update_0[d0, d1] -> stg2[16 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write16 = stg2.stg2_stg2_update_0_write16_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write16;
  return 0;
}

inline hw_uint<16> stg3_rd64_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd64 read pattern: { stg3_update_0[d0, d1] -> stg2[15 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write15 = stg2.stg2_stg2_update_0_write15_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write15;
  return 0;
}

inline hw_uint<16> stg3_rd65_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd65 read pattern: { stg3_update_0[d0, d1] -> stg2[16 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write16 = stg2.stg2_stg2_update_0_write16_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write16;
  return 0;
}

inline hw_uint<16> stg3_rd66_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd66 read pattern: { stg3_update_0[d0, d1] -> stg2[16 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write16 = stg2.stg2_stg2_update_0_write16_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write16;
  return 0;
}

inline hw_uint<16> stg3_rd67_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd67 read pattern: { stg3_update_0[d0, d1] -> stg2[17 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write17 = stg2.stg2_stg2_update_0_write17_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write17;
  return 0;
}

inline hw_uint<16> stg3_rd68_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd68 read pattern: { stg3_update_0[d0, d1] -> stg2[16 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write16 = stg2.stg2_stg2_update_0_write16_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write16;
  return 0;
}

inline hw_uint<16> stg3_rd69_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd69 read pattern: { stg3_update_0[d0, d1] -> stg2[17 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write17 = stg2.stg2_stg2_update_0_write17_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write17;
  return 0;
}

inline hw_uint<16> stg3_rd7_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd7 read pattern: { stg3_update_0[d0, d1] -> stg2[2 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write2 = stg2.stg2_stg2_update_0_write2_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write2;
  return 0;
}

inline hw_uint<16> stg3_rd70_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd70 read pattern: { stg3_update_0[d0, d1] -> stg2[17 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write17 = stg2.stg2_stg2_update_0_write17_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write17;
  return 0;
}

inline hw_uint<16> stg3_rd71_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd71 read pattern: { stg3_update_0[d0, d1] -> stg2[18 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write18 = stg2.stg2_stg2_update_0_write18_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write18;
  return 0;
}

inline hw_uint<16> stg3_rd72_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd72 read pattern: { stg3_update_0[d0, d1] -> stg2[17 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write17 = stg2.stg2_stg2_update_0_write17_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write17;
  return 0;
}

inline hw_uint<16> stg3_rd73_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd73 read pattern: { stg3_update_0[d0, d1] -> stg2[18 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write18 = stg2.stg2_stg2_update_0_write18_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write18;
  return 0;
}

inline hw_uint<16> stg3_rd74_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd74 read pattern: { stg3_update_0[d0, d1] -> stg2[18 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write18 = stg2.stg2_stg2_update_0_write18_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write18;
  return 0;
}

inline hw_uint<16> stg3_rd75_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd75 read pattern: { stg3_update_0[d0, d1] -> stg2[19 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write19 = stg2.stg2_stg2_update_0_write19_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write19;
  return 0;
}

inline hw_uint<16> stg3_rd76_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd76 read pattern: { stg3_update_0[d0, d1] -> stg2[18 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write18 = stg2.stg2_stg2_update_0_write18_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write18;
  return 0;
}

inline hw_uint<16> stg3_rd77_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd77 read pattern: { stg3_update_0[d0, d1] -> stg2[19 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write19 = stg2.stg2_stg2_update_0_write19_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write19;
  return 0;
}

inline hw_uint<16> stg3_rd78_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd78 read pattern: { stg3_update_0[d0, d1] -> stg2[19 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write19 = stg2.stg2_stg2_update_0_write19_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write19;
  return 0;
}

inline hw_uint<16> stg3_rd79_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd79 read pattern: { stg3_update_0[d0, d1] -> stg2[20 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write20 = stg2.stg2_stg2_update_0_write20_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write20;
  return 0;
}

inline hw_uint<16> stg3_rd8_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd8 read pattern: { stg3_update_0[d0, d1] -> stg2[1 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write1 = stg2.stg2_stg2_update_0_write1_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write1;
  return 0;
}

inline hw_uint<16> stg3_rd80_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd80 read pattern: { stg3_update_0[d0, d1] -> stg2[19 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write19 = stg2.stg2_stg2_update_0_write19_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write19;
  return 0;
}

inline hw_uint<16> stg3_rd81_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd81 read pattern: { stg3_update_0[d0, d1] -> stg2[20 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write20 = stg2.stg2_stg2_update_0_write20_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write20;
  return 0;
}

inline hw_uint<16> stg3_rd82_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd82 read pattern: { stg3_update_0[d0, d1] -> stg2[20 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write20 = stg2.stg2_stg2_update_0_write20_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write20;
  return 0;
}

inline hw_uint<16> stg3_rd83_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd83 read pattern: { stg3_update_0[d0, d1] -> stg2[21 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write21 = stg2.stg2_stg2_update_0_write21_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write21;
  return 0;
}

inline hw_uint<16> stg3_rd84_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd84 read pattern: { stg3_update_0[d0, d1] -> stg2[20 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write20 = stg2.stg2_stg2_update_0_write20_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write20;
  return 0;
}

inline hw_uint<16> stg3_rd85_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd85 read pattern: { stg3_update_0[d0, d1] -> stg2[21 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write21 = stg2.stg2_stg2_update_0_write21_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write21;
  return 0;
}

inline hw_uint<16> stg3_rd86_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd86 read pattern: { stg3_update_0[d0, d1] -> stg2[21 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write21 = stg2.stg2_stg2_update_0_write21_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write21;
  return 0;
}

inline hw_uint<16> stg3_rd87_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd87 read pattern: { stg3_update_0[d0, d1] -> stg2[22 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write22 = stg2.stg2_stg2_update_0_write22_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write22;
  return 0;
}

inline hw_uint<16> stg3_rd88_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd88 read pattern: { stg3_update_0[d0, d1] -> stg2[21 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write21 = stg2.stg2_stg2_update_0_write21_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write21;
  return 0;
}

inline hw_uint<16> stg3_rd89_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd89 read pattern: { stg3_update_0[d0, d1] -> stg2[22 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write22 = stg2.stg2_stg2_update_0_write22_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write22;
  return 0;
}

inline hw_uint<16> stg3_rd9_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd9 read pattern: { stg3_update_0[d0, d1] -> stg2[2 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write2 = stg2.stg2_stg2_update_0_write2_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write2;
  return 0;
}

inline hw_uint<16> stg3_rd90_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd90 read pattern: { stg3_update_0[d0, d1] -> stg2[22 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write22 = stg2.stg2_stg2_update_0_write22_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write22;
  return 0;
}

inline hw_uint<16> stg3_rd91_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd91 read pattern: { stg3_update_0[d0, d1] -> stg2[23 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write23 = stg2.stg2_stg2_update_0_write23_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write23;
  return 0;
}

inline hw_uint<16> stg3_rd92_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd92 read pattern: { stg3_update_0[d0, d1] -> stg2[22 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write22 = stg2.stg2_stg2_update_0_write22_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write22;
  return 0;
}

inline hw_uint<16> stg3_rd93_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd93 read pattern: { stg3_update_0[d0, d1] -> stg2[23 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write23 = stg2.stg2_stg2_update_0_write23_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write23;
  return 0;
}

inline hw_uint<16> stg3_rd94_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd94 read pattern: { stg3_update_0[d0, d1] -> stg2[23 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write23 = stg2.stg2_stg2_update_0_write23_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write23;
  return 0;
}

inline hw_uint<16> stg3_rd95_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd95 read pattern: { stg3_update_0[d0, d1] -> stg2[24 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write24 = stg2.stg2_stg2_update_0_write24_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write24;
  return 0;
}

inline hw_uint<16> stg3_rd96_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd96 read pattern: { stg3_update_0[d0, d1] -> stg2[23 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write23 = stg2.stg2_stg2_update_0_write23_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write23;
  return 0;
}

inline hw_uint<16> stg3_rd97_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd97 read pattern: { stg3_update_0[d0, d1] -> stg2[24 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write24 = stg2.stg2_stg2_update_0_write24_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write24;
  return 0;
}

inline hw_uint<16> stg3_rd98_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd98 read pattern: { stg3_update_0[d0, d1] -> stg2[24 + 32d0, 1 + d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write24 = stg2.stg2_stg2_update_0_write24_merged_banks_4.peek_1();
  return value_stg2_stg2_update_0_write24;
  return 0;
}

inline hw_uint<16> stg3_rd99_select(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg3_rd99 read pattern: { stg3_update_0[d0, d1] -> stg2[25 + 32d0, d1] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Read schedule : { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  // Write schedule: { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
  auto value_stg2_stg2_update_0_write25 = stg2.stg2_stg2_update_0_write25_merged_banks_4.peek_65();
  return value_stg2_stg2_update_0_write25;
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
//	stg2_stg2_update_0_write16
//	stg2_stg2_update_0_write17
//	stg2_stg2_update_0_write18
//	stg2_stg2_update_0_write19
//	stg2_stg2_update_0_write20
//	stg2_stg2_update_0_write21
//	stg2_stg2_update_0_write22
//	stg2_stg2_update_0_write23
//	stg2_stg2_update_0_write24
//	stg2_stg2_update_0_write25
//	stg2_stg2_update_0_write26
//	stg2_stg2_update_0_write27
//	stg2_stg2_update_0_write28
//	stg2_stg2_update_0_write29
//	stg2_stg2_update_0_write30
//	stg2_stg2_update_0_write31
inline void stg2_stg2_update_0_write_bundle_write(hw_uint<512>& stg2_update_0_write, stg2_cache& stg2, int d0, int d1, int dynamic_address) {
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
	hw_uint<16> stg2_stg2_update_0_write16_res = stg2_update_0_write.extract<256, 271>();
	stg2_stg2_update_0_write16_write(stg2_stg2_update_0_write16_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write17_res = stg2_update_0_write.extract<272, 287>();
	stg2_stg2_update_0_write17_write(stg2_stg2_update_0_write17_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write18_res = stg2_update_0_write.extract<288, 303>();
	stg2_stg2_update_0_write18_write(stg2_stg2_update_0_write18_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write19_res = stg2_update_0_write.extract<304, 319>();
	stg2_stg2_update_0_write19_write(stg2_stg2_update_0_write19_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write20_res = stg2_update_0_write.extract<320, 335>();
	stg2_stg2_update_0_write20_write(stg2_stg2_update_0_write20_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write21_res = stg2_update_0_write.extract<336, 351>();
	stg2_stg2_update_0_write21_write(stg2_stg2_update_0_write21_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write22_res = stg2_update_0_write.extract<352, 367>();
	stg2_stg2_update_0_write22_write(stg2_stg2_update_0_write22_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write23_res = stg2_update_0_write.extract<368, 383>();
	stg2_stg2_update_0_write23_write(stg2_stg2_update_0_write23_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write24_res = stg2_update_0_write.extract<384, 399>();
	stg2_stg2_update_0_write24_write(stg2_stg2_update_0_write24_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write25_res = stg2_update_0_write.extract<400, 415>();
	stg2_stg2_update_0_write25_write(stg2_stg2_update_0_write25_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write26_res = stg2_update_0_write.extract<416, 431>();
	stg2_stg2_update_0_write26_write(stg2_stg2_update_0_write26_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write27_res = stg2_update_0_write.extract<432, 447>();
	stg2_stg2_update_0_write27_write(stg2_stg2_update_0_write27_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write28_res = stg2_update_0_write.extract<448, 463>();
	stg2_stg2_update_0_write28_write(stg2_stg2_update_0_write28_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write29_res = stg2_update_0_write.extract<464, 479>();
	stg2_stg2_update_0_write29_write(stg2_stg2_update_0_write29_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write30_res = stg2_update_0_write.extract<480, 495>();
	stg2_stg2_update_0_write30_write(stg2_stg2_update_0_write30_res, stg2, d0, d1, dynamic_address);
	hw_uint<16> stg2_stg2_update_0_write31_res = stg2_update_0_write.extract<496, 511>();
	stg2_stg2_update_0_write31_write(stg2_stg2_update_0_write31_res, stg2, d0, d1, dynamic_address);
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
//	stg3_rd64
//	stg3_rd65
//	stg3_rd66
//	stg3_rd67
//	stg3_rd68
//	stg3_rd69
//	stg3_rd70
//	stg3_rd71
//	stg3_rd72
//	stg3_rd73
//	stg3_rd74
//	stg3_rd75
//	stg3_rd76
//	stg3_rd77
//	stg3_rd78
//	stg3_rd79
//	stg3_rd80
//	stg3_rd81
//	stg3_rd82
//	stg3_rd83
//	stg3_rd84
//	stg3_rd85
//	stg3_rd86
//	stg3_rd87
//	stg3_rd88
//	stg3_rd89
//	stg3_rd90
//	stg3_rd91
//	stg3_rd92
//	stg3_rd93
//	stg3_rd94
//	stg3_rd95
//	stg3_rd96
//	stg3_rd97
//	stg3_rd98
//	stg3_rd99
//	stg3_rd100
//	stg3_rd101
//	stg3_rd102
//	stg3_rd103
//	stg3_rd104
//	stg3_rd105
//	stg3_rd106
//	stg3_rd107
//	stg3_rd108
//	stg3_rd109
//	stg3_rd110
//	stg3_rd111
//	stg3_rd112
//	stg3_rd113
//	stg3_rd114
//	stg3_rd115
//	stg3_rd116
//	stg3_rd117
//	stg3_rd118
//	stg3_rd119
//	stg3_rd120
//	stg3_rd121
//	stg3_rd122
//	stg3_rd123
//	stg3_rd124
//	stg3_rd125
//	stg3_rd126
//	stg3_rd127
inline hw_uint<2048> stg2_stg3_update_0_read_bundle_read(stg2_cache& stg2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 128
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
    // stg3_rd64
    // stg3_rd65
    // stg3_rd66
    // stg3_rd67
    // stg3_rd68
    // stg3_rd69
    // stg3_rd70
    // stg3_rd71
    // stg3_rd72
    // stg3_rd73
    // stg3_rd74
    // stg3_rd75
    // stg3_rd76
    // stg3_rd77
    // stg3_rd78
    // stg3_rd79
    // stg3_rd80
    // stg3_rd81
    // stg3_rd82
    // stg3_rd83
    // stg3_rd84
    // stg3_rd85
    // stg3_rd86
    // stg3_rd87
    // stg3_rd88
    // stg3_rd89
    // stg3_rd90
    // stg3_rd91
    // stg3_rd92
    // stg3_rd93
    // stg3_rd94
    // stg3_rd95
    // stg3_rd96
    // stg3_rd97
    // stg3_rd98
    // stg3_rd99
    // stg3_rd100
    // stg3_rd101
    // stg3_rd102
    // stg3_rd103
    // stg3_rd104
    // stg3_rd105
    // stg3_rd106
    // stg3_rd107
    // stg3_rd108
    // stg3_rd109
    // stg3_rd110
    // stg3_rd111
    // stg3_rd112
    // stg3_rd113
    // stg3_rd114
    // stg3_rd115
    // stg3_rd116
    // stg3_rd117
    // stg3_rd118
    // stg3_rd119
    // stg3_rd120
    // stg3_rd121
    // stg3_rd122
    // stg3_rd123
    // stg3_rd124
    // stg3_rd125
    // stg3_rd126
    // stg3_rd127

	hw_uint<2048> result;
	hw_uint<16> stg3_rd0_res = stg3_rd0_select(stg2, d0, d1, dynamic_address);
	set_at<0, 2048>(result, stg3_rd0_res);
	hw_uint<16> stg3_rd1_res = stg3_rd1_select(stg2, d0, d1, dynamic_address);
	set_at<16, 2048>(result, stg3_rd1_res);
	hw_uint<16> stg3_rd2_res = stg3_rd2_select(stg2, d0, d1, dynamic_address);
	set_at<32, 2048>(result, stg3_rd2_res);
	hw_uint<16> stg3_rd3_res = stg3_rd3_select(stg2, d0, d1, dynamic_address);
	set_at<48, 2048>(result, stg3_rd3_res);
	hw_uint<16> stg3_rd4_res = stg3_rd4_select(stg2, d0, d1, dynamic_address);
	set_at<64, 2048>(result, stg3_rd4_res);
	hw_uint<16> stg3_rd5_res = stg3_rd5_select(stg2, d0, d1, dynamic_address);
	set_at<80, 2048>(result, stg3_rd5_res);
	hw_uint<16> stg3_rd6_res = stg3_rd6_select(stg2, d0, d1, dynamic_address);
	set_at<96, 2048>(result, stg3_rd6_res);
	hw_uint<16> stg3_rd7_res = stg3_rd7_select(stg2, d0, d1, dynamic_address);
	set_at<112, 2048>(result, stg3_rd7_res);
	hw_uint<16> stg3_rd8_res = stg3_rd8_select(stg2, d0, d1, dynamic_address);
	set_at<128, 2048>(result, stg3_rd8_res);
	hw_uint<16> stg3_rd9_res = stg3_rd9_select(stg2, d0, d1, dynamic_address);
	set_at<144, 2048>(result, stg3_rd9_res);
	hw_uint<16> stg3_rd10_res = stg3_rd10_select(stg2, d0, d1, dynamic_address);
	set_at<160, 2048>(result, stg3_rd10_res);
	hw_uint<16> stg3_rd11_res = stg3_rd11_select(stg2, d0, d1, dynamic_address);
	set_at<176, 2048>(result, stg3_rd11_res);
	hw_uint<16> stg3_rd12_res = stg3_rd12_select(stg2, d0, d1, dynamic_address);
	set_at<192, 2048>(result, stg3_rd12_res);
	hw_uint<16> stg3_rd13_res = stg3_rd13_select(stg2, d0, d1, dynamic_address);
	set_at<208, 2048>(result, stg3_rd13_res);
	hw_uint<16> stg3_rd14_res = stg3_rd14_select(stg2, d0, d1, dynamic_address);
	set_at<224, 2048>(result, stg3_rd14_res);
	hw_uint<16> stg3_rd15_res = stg3_rd15_select(stg2, d0, d1, dynamic_address);
	set_at<240, 2048>(result, stg3_rd15_res);
	hw_uint<16> stg3_rd16_res = stg3_rd16_select(stg2, d0, d1, dynamic_address);
	set_at<256, 2048>(result, stg3_rd16_res);
	hw_uint<16> stg3_rd17_res = stg3_rd17_select(stg2, d0, d1, dynamic_address);
	set_at<272, 2048>(result, stg3_rd17_res);
	hw_uint<16> stg3_rd18_res = stg3_rd18_select(stg2, d0, d1, dynamic_address);
	set_at<288, 2048>(result, stg3_rd18_res);
	hw_uint<16> stg3_rd19_res = stg3_rd19_select(stg2, d0, d1, dynamic_address);
	set_at<304, 2048>(result, stg3_rd19_res);
	hw_uint<16> stg3_rd20_res = stg3_rd20_select(stg2, d0, d1, dynamic_address);
	set_at<320, 2048>(result, stg3_rd20_res);
	hw_uint<16> stg3_rd21_res = stg3_rd21_select(stg2, d0, d1, dynamic_address);
	set_at<336, 2048>(result, stg3_rd21_res);
	hw_uint<16> stg3_rd22_res = stg3_rd22_select(stg2, d0, d1, dynamic_address);
	set_at<352, 2048>(result, stg3_rd22_res);
	hw_uint<16> stg3_rd23_res = stg3_rd23_select(stg2, d0, d1, dynamic_address);
	set_at<368, 2048>(result, stg3_rd23_res);
	hw_uint<16> stg3_rd24_res = stg3_rd24_select(stg2, d0, d1, dynamic_address);
	set_at<384, 2048>(result, stg3_rd24_res);
	hw_uint<16> stg3_rd25_res = stg3_rd25_select(stg2, d0, d1, dynamic_address);
	set_at<400, 2048>(result, stg3_rd25_res);
	hw_uint<16> stg3_rd26_res = stg3_rd26_select(stg2, d0, d1, dynamic_address);
	set_at<416, 2048>(result, stg3_rd26_res);
	hw_uint<16> stg3_rd27_res = stg3_rd27_select(stg2, d0, d1, dynamic_address);
	set_at<432, 2048>(result, stg3_rd27_res);
	hw_uint<16> stg3_rd28_res = stg3_rd28_select(stg2, d0, d1, dynamic_address);
	set_at<448, 2048>(result, stg3_rd28_res);
	hw_uint<16> stg3_rd29_res = stg3_rd29_select(stg2, d0, d1, dynamic_address);
	set_at<464, 2048>(result, stg3_rd29_res);
	hw_uint<16> stg3_rd30_res = stg3_rd30_select(stg2, d0, d1, dynamic_address);
	set_at<480, 2048>(result, stg3_rd30_res);
	hw_uint<16> stg3_rd31_res = stg3_rd31_select(stg2, d0, d1, dynamic_address);
	set_at<496, 2048>(result, stg3_rd31_res);
	hw_uint<16> stg3_rd32_res = stg3_rd32_select(stg2, d0, d1, dynamic_address);
	set_at<512, 2048>(result, stg3_rd32_res);
	hw_uint<16> stg3_rd33_res = stg3_rd33_select(stg2, d0, d1, dynamic_address);
	set_at<528, 2048>(result, stg3_rd33_res);
	hw_uint<16> stg3_rd34_res = stg3_rd34_select(stg2, d0, d1, dynamic_address);
	set_at<544, 2048>(result, stg3_rd34_res);
	hw_uint<16> stg3_rd35_res = stg3_rd35_select(stg2, d0, d1, dynamic_address);
	set_at<560, 2048>(result, stg3_rd35_res);
	hw_uint<16> stg3_rd36_res = stg3_rd36_select(stg2, d0, d1, dynamic_address);
	set_at<576, 2048>(result, stg3_rd36_res);
	hw_uint<16> stg3_rd37_res = stg3_rd37_select(stg2, d0, d1, dynamic_address);
	set_at<592, 2048>(result, stg3_rd37_res);
	hw_uint<16> stg3_rd38_res = stg3_rd38_select(stg2, d0, d1, dynamic_address);
	set_at<608, 2048>(result, stg3_rd38_res);
	hw_uint<16> stg3_rd39_res = stg3_rd39_select(stg2, d0, d1, dynamic_address);
	set_at<624, 2048>(result, stg3_rd39_res);
	hw_uint<16> stg3_rd40_res = stg3_rd40_select(stg2, d0, d1, dynamic_address);
	set_at<640, 2048>(result, stg3_rd40_res);
	hw_uint<16> stg3_rd41_res = stg3_rd41_select(stg2, d0, d1, dynamic_address);
	set_at<656, 2048>(result, stg3_rd41_res);
	hw_uint<16> stg3_rd42_res = stg3_rd42_select(stg2, d0, d1, dynamic_address);
	set_at<672, 2048>(result, stg3_rd42_res);
	hw_uint<16> stg3_rd43_res = stg3_rd43_select(stg2, d0, d1, dynamic_address);
	set_at<688, 2048>(result, stg3_rd43_res);
	hw_uint<16> stg3_rd44_res = stg3_rd44_select(stg2, d0, d1, dynamic_address);
	set_at<704, 2048>(result, stg3_rd44_res);
	hw_uint<16> stg3_rd45_res = stg3_rd45_select(stg2, d0, d1, dynamic_address);
	set_at<720, 2048>(result, stg3_rd45_res);
	hw_uint<16> stg3_rd46_res = stg3_rd46_select(stg2, d0, d1, dynamic_address);
	set_at<736, 2048>(result, stg3_rd46_res);
	hw_uint<16> stg3_rd47_res = stg3_rd47_select(stg2, d0, d1, dynamic_address);
	set_at<752, 2048>(result, stg3_rd47_res);
	hw_uint<16> stg3_rd48_res = stg3_rd48_select(stg2, d0, d1, dynamic_address);
	set_at<768, 2048>(result, stg3_rd48_res);
	hw_uint<16> stg3_rd49_res = stg3_rd49_select(stg2, d0, d1, dynamic_address);
	set_at<784, 2048>(result, stg3_rd49_res);
	hw_uint<16> stg3_rd50_res = stg3_rd50_select(stg2, d0, d1, dynamic_address);
	set_at<800, 2048>(result, stg3_rd50_res);
	hw_uint<16> stg3_rd51_res = stg3_rd51_select(stg2, d0, d1, dynamic_address);
	set_at<816, 2048>(result, stg3_rd51_res);
	hw_uint<16> stg3_rd52_res = stg3_rd52_select(stg2, d0, d1, dynamic_address);
	set_at<832, 2048>(result, stg3_rd52_res);
	hw_uint<16> stg3_rd53_res = stg3_rd53_select(stg2, d0, d1, dynamic_address);
	set_at<848, 2048>(result, stg3_rd53_res);
	hw_uint<16> stg3_rd54_res = stg3_rd54_select(stg2, d0, d1, dynamic_address);
	set_at<864, 2048>(result, stg3_rd54_res);
	hw_uint<16> stg3_rd55_res = stg3_rd55_select(stg2, d0, d1, dynamic_address);
	set_at<880, 2048>(result, stg3_rd55_res);
	hw_uint<16> stg3_rd56_res = stg3_rd56_select(stg2, d0, d1, dynamic_address);
	set_at<896, 2048>(result, stg3_rd56_res);
	hw_uint<16> stg3_rd57_res = stg3_rd57_select(stg2, d0, d1, dynamic_address);
	set_at<912, 2048>(result, stg3_rd57_res);
	hw_uint<16> stg3_rd58_res = stg3_rd58_select(stg2, d0, d1, dynamic_address);
	set_at<928, 2048>(result, stg3_rd58_res);
	hw_uint<16> stg3_rd59_res = stg3_rd59_select(stg2, d0, d1, dynamic_address);
	set_at<944, 2048>(result, stg3_rd59_res);
	hw_uint<16> stg3_rd60_res = stg3_rd60_select(stg2, d0, d1, dynamic_address);
	set_at<960, 2048>(result, stg3_rd60_res);
	hw_uint<16> stg3_rd61_res = stg3_rd61_select(stg2, d0, d1, dynamic_address);
	set_at<976, 2048>(result, stg3_rd61_res);
	hw_uint<16> stg3_rd62_res = stg3_rd62_select(stg2, d0, d1, dynamic_address);
	set_at<992, 2048>(result, stg3_rd62_res);
	hw_uint<16> stg3_rd63_res = stg3_rd63_select(stg2, d0, d1, dynamic_address);
	set_at<1008, 2048>(result, stg3_rd63_res);
	hw_uint<16> stg3_rd64_res = stg3_rd64_select(stg2, d0, d1, dynamic_address);
	set_at<1024, 2048>(result, stg3_rd64_res);
	hw_uint<16> stg3_rd65_res = stg3_rd65_select(stg2, d0, d1, dynamic_address);
	set_at<1040, 2048>(result, stg3_rd65_res);
	hw_uint<16> stg3_rd66_res = stg3_rd66_select(stg2, d0, d1, dynamic_address);
	set_at<1056, 2048>(result, stg3_rd66_res);
	hw_uint<16> stg3_rd67_res = stg3_rd67_select(stg2, d0, d1, dynamic_address);
	set_at<1072, 2048>(result, stg3_rd67_res);
	hw_uint<16> stg3_rd68_res = stg3_rd68_select(stg2, d0, d1, dynamic_address);
	set_at<1088, 2048>(result, stg3_rd68_res);
	hw_uint<16> stg3_rd69_res = stg3_rd69_select(stg2, d0, d1, dynamic_address);
	set_at<1104, 2048>(result, stg3_rd69_res);
	hw_uint<16> stg3_rd70_res = stg3_rd70_select(stg2, d0, d1, dynamic_address);
	set_at<1120, 2048>(result, stg3_rd70_res);
	hw_uint<16> stg3_rd71_res = stg3_rd71_select(stg2, d0, d1, dynamic_address);
	set_at<1136, 2048>(result, stg3_rd71_res);
	hw_uint<16> stg3_rd72_res = stg3_rd72_select(stg2, d0, d1, dynamic_address);
	set_at<1152, 2048>(result, stg3_rd72_res);
	hw_uint<16> stg3_rd73_res = stg3_rd73_select(stg2, d0, d1, dynamic_address);
	set_at<1168, 2048>(result, stg3_rd73_res);
	hw_uint<16> stg3_rd74_res = stg3_rd74_select(stg2, d0, d1, dynamic_address);
	set_at<1184, 2048>(result, stg3_rd74_res);
	hw_uint<16> stg3_rd75_res = stg3_rd75_select(stg2, d0, d1, dynamic_address);
	set_at<1200, 2048>(result, stg3_rd75_res);
	hw_uint<16> stg3_rd76_res = stg3_rd76_select(stg2, d0, d1, dynamic_address);
	set_at<1216, 2048>(result, stg3_rd76_res);
	hw_uint<16> stg3_rd77_res = stg3_rd77_select(stg2, d0, d1, dynamic_address);
	set_at<1232, 2048>(result, stg3_rd77_res);
	hw_uint<16> stg3_rd78_res = stg3_rd78_select(stg2, d0, d1, dynamic_address);
	set_at<1248, 2048>(result, stg3_rd78_res);
	hw_uint<16> stg3_rd79_res = stg3_rd79_select(stg2, d0, d1, dynamic_address);
	set_at<1264, 2048>(result, stg3_rd79_res);
	hw_uint<16> stg3_rd80_res = stg3_rd80_select(stg2, d0, d1, dynamic_address);
	set_at<1280, 2048>(result, stg3_rd80_res);
	hw_uint<16> stg3_rd81_res = stg3_rd81_select(stg2, d0, d1, dynamic_address);
	set_at<1296, 2048>(result, stg3_rd81_res);
	hw_uint<16> stg3_rd82_res = stg3_rd82_select(stg2, d0, d1, dynamic_address);
	set_at<1312, 2048>(result, stg3_rd82_res);
	hw_uint<16> stg3_rd83_res = stg3_rd83_select(stg2, d0, d1, dynamic_address);
	set_at<1328, 2048>(result, stg3_rd83_res);
	hw_uint<16> stg3_rd84_res = stg3_rd84_select(stg2, d0, d1, dynamic_address);
	set_at<1344, 2048>(result, stg3_rd84_res);
	hw_uint<16> stg3_rd85_res = stg3_rd85_select(stg2, d0, d1, dynamic_address);
	set_at<1360, 2048>(result, stg3_rd85_res);
	hw_uint<16> stg3_rd86_res = stg3_rd86_select(stg2, d0, d1, dynamic_address);
	set_at<1376, 2048>(result, stg3_rd86_res);
	hw_uint<16> stg3_rd87_res = stg3_rd87_select(stg2, d0, d1, dynamic_address);
	set_at<1392, 2048>(result, stg3_rd87_res);
	hw_uint<16> stg3_rd88_res = stg3_rd88_select(stg2, d0, d1, dynamic_address);
	set_at<1408, 2048>(result, stg3_rd88_res);
	hw_uint<16> stg3_rd89_res = stg3_rd89_select(stg2, d0, d1, dynamic_address);
	set_at<1424, 2048>(result, stg3_rd89_res);
	hw_uint<16> stg3_rd90_res = stg3_rd90_select(stg2, d0, d1, dynamic_address);
	set_at<1440, 2048>(result, stg3_rd90_res);
	hw_uint<16> stg3_rd91_res = stg3_rd91_select(stg2, d0, d1, dynamic_address);
	set_at<1456, 2048>(result, stg3_rd91_res);
	hw_uint<16> stg3_rd92_res = stg3_rd92_select(stg2, d0, d1, dynamic_address);
	set_at<1472, 2048>(result, stg3_rd92_res);
	hw_uint<16> stg3_rd93_res = stg3_rd93_select(stg2, d0, d1, dynamic_address);
	set_at<1488, 2048>(result, stg3_rd93_res);
	hw_uint<16> stg3_rd94_res = stg3_rd94_select(stg2, d0, d1, dynamic_address);
	set_at<1504, 2048>(result, stg3_rd94_res);
	hw_uint<16> stg3_rd95_res = stg3_rd95_select(stg2, d0, d1, dynamic_address);
	set_at<1520, 2048>(result, stg3_rd95_res);
	hw_uint<16> stg3_rd96_res = stg3_rd96_select(stg2, d0, d1, dynamic_address);
	set_at<1536, 2048>(result, stg3_rd96_res);
	hw_uint<16> stg3_rd97_res = stg3_rd97_select(stg2, d0, d1, dynamic_address);
	set_at<1552, 2048>(result, stg3_rd97_res);
	hw_uint<16> stg3_rd98_res = stg3_rd98_select(stg2, d0, d1, dynamic_address);
	set_at<1568, 2048>(result, stg3_rd98_res);
	hw_uint<16> stg3_rd99_res = stg3_rd99_select(stg2, d0, d1, dynamic_address);
	set_at<1584, 2048>(result, stg3_rd99_res);
	hw_uint<16> stg3_rd100_res = stg3_rd100_select(stg2, d0, d1, dynamic_address);
	set_at<1600, 2048>(result, stg3_rd100_res);
	hw_uint<16> stg3_rd101_res = stg3_rd101_select(stg2, d0, d1, dynamic_address);
	set_at<1616, 2048>(result, stg3_rd101_res);
	hw_uint<16> stg3_rd102_res = stg3_rd102_select(stg2, d0, d1, dynamic_address);
	set_at<1632, 2048>(result, stg3_rd102_res);
	hw_uint<16> stg3_rd103_res = stg3_rd103_select(stg2, d0, d1, dynamic_address);
	set_at<1648, 2048>(result, stg3_rd103_res);
	hw_uint<16> stg3_rd104_res = stg3_rd104_select(stg2, d0, d1, dynamic_address);
	set_at<1664, 2048>(result, stg3_rd104_res);
	hw_uint<16> stg3_rd105_res = stg3_rd105_select(stg2, d0, d1, dynamic_address);
	set_at<1680, 2048>(result, stg3_rd105_res);
	hw_uint<16> stg3_rd106_res = stg3_rd106_select(stg2, d0, d1, dynamic_address);
	set_at<1696, 2048>(result, stg3_rd106_res);
	hw_uint<16> stg3_rd107_res = stg3_rd107_select(stg2, d0, d1, dynamic_address);
	set_at<1712, 2048>(result, stg3_rd107_res);
	hw_uint<16> stg3_rd108_res = stg3_rd108_select(stg2, d0, d1, dynamic_address);
	set_at<1728, 2048>(result, stg3_rd108_res);
	hw_uint<16> stg3_rd109_res = stg3_rd109_select(stg2, d0, d1, dynamic_address);
	set_at<1744, 2048>(result, stg3_rd109_res);
	hw_uint<16> stg3_rd110_res = stg3_rd110_select(stg2, d0, d1, dynamic_address);
	set_at<1760, 2048>(result, stg3_rd110_res);
	hw_uint<16> stg3_rd111_res = stg3_rd111_select(stg2, d0, d1, dynamic_address);
	set_at<1776, 2048>(result, stg3_rd111_res);
	hw_uint<16> stg3_rd112_res = stg3_rd112_select(stg2, d0, d1, dynamic_address);
	set_at<1792, 2048>(result, stg3_rd112_res);
	hw_uint<16> stg3_rd113_res = stg3_rd113_select(stg2, d0, d1, dynamic_address);
	set_at<1808, 2048>(result, stg3_rd113_res);
	hw_uint<16> stg3_rd114_res = stg3_rd114_select(stg2, d0, d1, dynamic_address);
	set_at<1824, 2048>(result, stg3_rd114_res);
	hw_uint<16> stg3_rd115_res = stg3_rd115_select(stg2, d0, d1, dynamic_address);
	set_at<1840, 2048>(result, stg3_rd115_res);
	hw_uint<16> stg3_rd116_res = stg3_rd116_select(stg2, d0, d1, dynamic_address);
	set_at<1856, 2048>(result, stg3_rd116_res);
	hw_uint<16> stg3_rd117_res = stg3_rd117_select(stg2, d0, d1, dynamic_address);
	set_at<1872, 2048>(result, stg3_rd117_res);
	hw_uint<16> stg3_rd118_res = stg3_rd118_select(stg2, d0, d1, dynamic_address);
	set_at<1888, 2048>(result, stg3_rd118_res);
	hw_uint<16> stg3_rd119_res = stg3_rd119_select(stg2, d0, d1, dynamic_address);
	set_at<1904, 2048>(result, stg3_rd119_res);
	hw_uint<16> stg3_rd120_res = stg3_rd120_select(stg2, d0, d1, dynamic_address);
	set_at<1920, 2048>(result, stg3_rd120_res);
	hw_uint<16> stg3_rd121_res = stg3_rd121_select(stg2, d0, d1, dynamic_address);
	set_at<1936, 2048>(result, stg3_rd121_res);
	hw_uint<16> stg3_rd122_res = stg3_rd122_select(stg2, d0, d1, dynamic_address);
	set_at<1952, 2048>(result, stg3_rd122_res);
	hw_uint<16> stg3_rd123_res = stg3_rd123_select(stg2, d0, d1, dynamic_address);
	set_at<1968, 2048>(result, stg3_rd123_res);
	hw_uint<16> stg3_rd124_res = stg3_rd124_select(stg2, d0, d1, dynamic_address);
	set_at<1984, 2048>(result, stg3_rd124_res);
	hw_uint<16> stg3_rd125_res = stg3_rd125_select(stg2, d0, d1, dynamic_address);
	set_at<2000, 2048>(result, stg3_rd125_res);
	hw_uint<16> stg3_rd126_res = stg3_rd126_select(stg2, d0, d1, dynamic_address);
	set_at<2016, 2048>(result, stg3_rd126_res);
	hw_uint<16> stg3_rd127_res = stg3_rd127_select(stg2, d0, d1, dynamic_address);
	set_at<2032, 2048>(result, stg3_rd127_res);
	return result;
}

struct stg3_stg3_update_0_write0_merged_banks_4_cache {
	// RAM Box: {[0, 1920], [0, 1079]}
	// Capacity: 64
	// # of read delays: 4
  // 0, 1, 62, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_61() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_62() {
		return f4;
	}

	inline hw_uint<16> peek_63() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
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
	// RAM Box: {[1, 1889], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
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
	// RAM Box: {[10, 1898], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
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
	// RAM Box: {[11, 1899], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
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
	// RAM Box: {[12, 1900], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
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
	// RAM Box: {[13, 1901], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
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
	// RAM Box: {[14, 1902], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
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
	// RAM Box: {[15, 1903], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg3_stg3_update_0_write16_merged_banks_4_cache {
	// RAM Box: {[16, 1904], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg3_stg3_update_0_write17_merged_banks_4_cache {
	// RAM Box: {[17, 1905], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg3_stg3_update_0_write18_merged_banks_4_cache {
	// RAM Box: {[18, 1906], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg3_stg3_update_0_write19_merged_banks_4_cache {
	// RAM Box: {[19, 1907], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
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
	// RAM Box: {[2, 1890], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg3_stg3_update_0_write20_merged_banks_4_cache {
	// RAM Box: {[20, 1908], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg3_stg3_update_0_write21_merged_banks_4_cache {
	// RAM Box: {[21, 1909], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg3_stg3_update_0_write22_merged_banks_4_cache {
	// RAM Box: {[22, 1910], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg3_stg3_update_0_write23_merged_banks_4_cache {
	// RAM Box: {[23, 1911], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg3_stg3_update_0_write24_merged_banks_4_cache {
	// RAM Box: {[24, 1912], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg3_stg3_update_0_write25_merged_banks_4_cache {
	// RAM Box: {[25, 1913], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg3_stg3_update_0_write26_merged_banks_4_cache {
	// RAM Box: {[26, 1914], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg3_stg3_update_0_write27_merged_banks_4_cache {
	// RAM Box: {[27, 1915], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg3_stg3_update_0_write28_merged_banks_4_cache {
	// RAM Box: {[28, 1916], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg3_stg3_update_0_write29_merged_banks_4_cache {
	// RAM Box: {[29, 1917], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
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
	// RAM Box: {[3, 1891], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg3_stg3_update_0_write30_merged_banks_4_cache {
	// RAM Box: {[30, 1918], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct stg3_stg3_update_0_write31_merged_banks_4_cache {
	// RAM Box: {[-1, 1919], [0, 1080]}
	// Capacity: 65
	// # of read delays: 4
  // 0, 1, 63, 64
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}

	inline hw_uint<16> peek_64() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
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
	// RAM Box: {[4, 1892], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
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
	// RAM Box: {[5, 1893], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
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
	// RAM Box: {[6, 1894], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
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
	// RAM Box: {[7, 1895], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
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
	// RAM Box: {[8, 1896], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
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
	// RAM Box: {[9, 1897], [0, 1080]}
	// Capacity: 64
	// # of read delays: 3
  // 0, 1, 63
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_63() {
		return f4;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
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
  // # of banks: 32
  stg3_stg3_update_0_write0_merged_banks_4_cache stg3_stg3_update_0_write0_merged_banks_4;
  stg3_stg3_update_0_write1_merged_banks_4_cache stg3_stg3_update_0_write1_merged_banks_4;
  stg3_stg3_update_0_write10_merged_banks_4_cache stg3_stg3_update_0_write10_merged_banks_4;
  stg3_stg3_update_0_write11_merged_banks_4_cache stg3_stg3_update_0_write11_merged_banks_4;
  stg3_stg3_update_0_write12_merged_banks_4_cache stg3_stg3_update_0_write12_merged_banks_4;
  stg3_stg3_update_0_write13_merged_banks_4_cache stg3_stg3_update_0_write13_merged_banks_4;
  stg3_stg3_update_0_write14_merged_banks_4_cache stg3_stg3_update_0_write14_merged_banks_4;
  stg3_stg3_update_0_write15_merged_banks_4_cache stg3_stg3_update_0_write15_merged_banks_4;
  stg3_stg3_update_0_write16_merged_banks_4_cache stg3_stg3_update_0_write16_merged_banks_4;
  stg3_stg3_update_0_write17_merged_banks_4_cache stg3_stg3_update_0_write17_merged_banks_4;
  stg3_stg3_update_0_write18_merged_banks_4_cache stg3_stg3_update_0_write18_merged_banks_4;
  stg3_stg3_update_0_write19_merged_banks_4_cache stg3_stg3_update_0_write19_merged_banks_4;
  stg3_stg3_update_0_write2_merged_banks_4_cache stg3_stg3_update_0_write2_merged_banks_4;
  stg3_stg3_update_0_write20_merged_banks_4_cache stg3_stg3_update_0_write20_merged_banks_4;
  stg3_stg3_update_0_write21_merged_banks_4_cache stg3_stg3_update_0_write21_merged_banks_4;
  stg3_stg3_update_0_write22_merged_banks_4_cache stg3_stg3_update_0_write22_merged_banks_4;
  stg3_stg3_update_0_write23_merged_banks_4_cache stg3_stg3_update_0_write23_merged_banks_4;
  stg3_stg3_update_0_write24_merged_banks_4_cache stg3_stg3_update_0_write24_merged_banks_4;
  stg3_stg3_update_0_write25_merged_banks_4_cache stg3_stg3_update_0_write25_merged_banks_4;
  stg3_stg3_update_0_write26_merged_banks_4_cache stg3_stg3_update_0_write26_merged_banks_4;
  stg3_stg3_update_0_write27_merged_banks_4_cache stg3_stg3_update_0_write27_merged_banks_4;
  stg3_stg3_update_0_write28_merged_banks_4_cache stg3_stg3_update_0_write28_merged_banks_4;
  stg3_stg3_update_0_write29_merged_banks_4_cache stg3_stg3_update_0_write29_merged_banks_4;
  stg3_stg3_update_0_write3_merged_banks_4_cache stg3_stg3_update_0_write3_merged_banks_4;
  stg3_stg3_update_0_write30_merged_banks_4_cache stg3_stg3_update_0_write30_merged_banks_4;
  stg3_stg3_update_0_write31_merged_banks_4_cache stg3_stg3_update_0_write31_merged_banks_4;
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

inline void stg3_stg3_update_0_write16_write(hw_uint<16>& stg3_stg3_update_0_write16, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write16_merged_banks_4.push(stg3_stg3_update_0_write16);
}

inline void stg3_stg3_update_0_write17_write(hw_uint<16>& stg3_stg3_update_0_write17, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write17_merged_banks_4.push(stg3_stg3_update_0_write17);
}

inline void stg3_stg3_update_0_write18_write(hw_uint<16>& stg3_stg3_update_0_write18, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write18_merged_banks_4.push(stg3_stg3_update_0_write18);
}

inline void stg3_stg3_update_0_write19_write(hw_uint<16>& stg3_stg3_update_0_write19, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write19_merged_banks_4.push(stg3_stg3_update_0_write19);
}

inline void stg3_stg3_update_0_write2_write(hw_uint<16>& stg3_stg3_update_0_write2, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write2_merged_banks_4.push(stg3_stg3_update_0_write2);
}

inline void stg3_stg3_update_0_write20_write(hw_uint<16>& stg3_stg3_update_0_write20, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write20_merged_banks_4.push(stg3_stg3_update_0_write20);
}

inline void stg3_stg3_update_0_write21_write(hw_uint<16>& stg3_stg3_update_0_write21, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write21_merged_banks_4.push(stg3_stg3_update_0_write21);
}

inline void stg3_stg3_update_0_write22_write(hw_uint<16>& stg3_stg3_update_0_write22, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write22_merged_banks_4.push(stg3_stg3_update_0_write22);
}

inline void stg3_stg3_update_0_write23_write(hw_uint<16>& stg3_stg3_update_0_write23, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write23_merged_banks_4.push(stg3_stg3_update_0_write23);
}

inline void stg3_stg3_update_0_write24_write(hw_uint<16>& stg3_stg3_update_0_write24, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write24_merged_banks_4.push(stg3_stg3_update_0_write24);
}

inline void stg3_stg3_update_0_write25_write(hw_uint<16>& stg3_stg3_update_0_write25, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write25_merged_banks_4.push(stg3_stg3_update_0_write25);
}

inline void stg3_stg3_update_0_write26_write(hw_uint<16>& stg3_stg3_update_0_write26, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write26_merged_banks_4.push(stg3_stg3_update_0_write26);
}

inline void stg3_stg3_update_0_write27_write(hw_uint<16>& stg3_stg3_update_0_write27, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write27_merged_banks_4.push(stg3_stg3_update_0_write27);
}

inline void stg3_stg3_update_0_write28_write(hw_uint<16>& stg3_stg3_update_0_write28, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write28_merged_banks_4.push(stg3_stg3_update_0_write28);
}

inline void stg3_stg3_update_0_write29_write(hw_uint<16>& stg3_stg3_update_0_write29, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write29_merged_banks_4.push(stg3_stg3_update_0_write29);
}

inline void stg3_stg3_update_0_write3_write(hw_uint<16>& stg3_stg3_update_0_write3, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write3_merged_banks_4.push(stg3_stg3_update_0_write3);
}

inline void stg3_stg3_update_0_write30_write(hw_uint<16>& stg3_stg3_update_0_write30, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write30_merged_banks_4.push(stg3_stg3_update_0_write30);
}

inline void stg3_stg3_update_0_write31_write(hw_uint<16>& stg3_stg3_update_0_write31, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  stg3.stg3_stg3_update_0_write31_merged_banks_4.push(stg3_stg3_update_0_write31);
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
  // stg4_rd0 read pattern: { stg4_update_0[d0, d1] -> stg3[-1 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write31 = stg3.stg3_stg3_update_0_write31_merged_banks_4.peek_64();
  return value_stg3_stg3_update_0_write31;
  return 0;
}

inline hw_uint<16> stg4_rd1_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd1 read pattern: { stg4_update_0[d0, d1] -> stg3[32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write0 = stg3.stg3_stg3_update_0_write0_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write0;
  return 0;
}

inline hw_uint<16> stg4_rd10_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd10 read pattern: { stg4_update_0[d0, d1] -> stg3[2 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write2 = stg3.stg3_stg3_update_0_write2_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write2;
  return 0;
}

inline hw_uint<16> stg4_rd100_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd100 read pattern: { stg4_update_0[d0, d1] -> stg3[24 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write24 = stg3.stg3_stg3_update_0_write24_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write24;
  return 0;
}

inline hw_uint<16> stg4_rd101_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd101 read pattern: { stg4_update_0[d0, d1] -> stg3[25 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write25 = stg3.stg3_stg3_update_0_write25_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write25;
  return 0;
}

inline hw_uint<16> stg4_rd102_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd102 read pattern: { stg4_update_0[d0, d1] -> stg3[25 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write25 = stg3.stg3_stg3_update_0_write25_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write25;
  return 0;
}

inline hw_uint<16> stg4_rd103_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd103 read pattern: { stg4_update_0[d0, d1] -> stg3[26 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write26 = stg3.stg3_stg3_update_0_write26_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write26;
  return 0;
}

inline hw_uint<16> stg4_rd104_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd104 read pattern: { stg4_update_0[d0, d1] -> stg3[25 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write25 = stg3.stg3_stg3_update_0_write25_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write25;
  return 0;
}

inline hw_uint<16> stg4_rd105_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd105 read pattern: { stg4_update_0[d0, d1] -> stg3[26 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write26 = stg3.stg3_stg3_update_0_write26_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write26;
  return 0;
}

inline hw_uint<16> stg4_rd106_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd106 read pattern: { stg4_update_0[d0, d1] -> stg3[26 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write26 = stg3.stg3_stg3_update_0_write26_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write26;
  return 0;
}

inline hw_uint<16> stg4_rd107_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd107 read pattern: { stg4_update_0[d0, d1] -> stg3[27 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write27 = stg3.stg3_stg3_update_0_write27_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write27;
  return 0;
}

inline hw_uint<16> stg4_rd108_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd108 read pattern: { stg4_update_0[d0, d1] -> stg3[26 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write26 = stg3.stg3_stg3_update_0_write26_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write26;
  return 0;
}

inline hw_uint<16> stg4_rd109_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd109 read pattern: { stg4_update_0[d0, d1] -> stg3[27 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write27 = stg3.stg3_stg3_update_0_write27_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write27;
  return 0;
}

inline hw_uint<16> stg4_rd11_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd11 read pattern: { stg4_update_0[d0, d1] -> stg3[3 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write3 = stg3.stg3_stg3_update_0_write3_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write3;
  return 0;
}

inline hw_uint<16> stg4_rd110_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd110 read pattern: { stg4_update_0[d0, d1] -> stg3[27 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write27 = stg3.stg3_stg3_update_0_write27_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write27;
  return 0;
}

inline hw_uint<16> stg4_rd111_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd111 read pattern: { stg4_update_0[d0, d1] -> stg3[28 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write28 = stg3.stg3_stg3_update_0_write28_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write28;
  return 0;
}

inline hw_uint<16> stg4_rd112_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd112 read pattern: { stg4_update_0[d0, d1] -> stg3[27 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write27 = stg3.stg3_stg3_update_0_write27_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write27;
  return 0;
}

inline hw_uint<16> stg4_rd113_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd113 read pattern: { stg4_update_0[d0, d1] -> stg3[28 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write28 = stg3.stg3_stg3_update_0_write28_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write28;
  return 0;
}

inline hw_uint<16> stg4_rd114_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd114 read pattern: { stg4_update_0[d0, d1] -> stg3[28 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write28 = stg3.stg3_stg3_update_0_write28_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write28;
  return 0;
}

inline hw_uint<16> stg4_rd115_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd115 read pattern: { stg4_update_0[d0, d1] -> stg3[29 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write29 = stg3.stg3_stg3_update_0_write29_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write29;
  return 0;
}

inline hw_uint<16> stg4_rd116_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd116 read pattern: { stg4_update_0[d0, d1] -> stg3[28 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write28 = stg3.stg3_stg3_update_0_write28_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write28;
  return 0;
}

inline hw_uint<16> stg4_rd117_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd117 read pattern: { stg4_update_0[d0, d1] -> stg3[29 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write29 = stg3.stg3_stg3_update_0_write29_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write29;
  return 0;
}

inline hw_uint<16> stg4_rd118_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd118 read pattern: { stg4_update_0[d0, d1] -> stg3[29 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write29 = stg3.stg3_stg3_update_0_write29_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write29;
  return 0;
}

inline hw_uint<16> stg4_rd119_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd119 read pattern: { stg4_update_0[d0, d1] -> stg3[30 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write30 = stg3.stg3_stg3_update_0_write30_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write30;
  return 0;
}

inline hw_uint<16> stg4_rd12_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd12 read pattern: { stg4_update_0[d0, d1] -> stg3[2 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write2 = stg3.stg3_stg3_update_0_write2_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write2;
  return 0;
}

inline hw_uint<16> stg4_rd120_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd120 read pattern: { stg4_update_0[d0, d1] -> stg3[29 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write29 = stg3.stg3_stg3_update_0_write29_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write29;
  return 0;
}

inline hw_uint<16> stg4_rd121_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd121 read pattern: { stg4_update_0[d0, d1] -> stg3[30 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write30 = stg3.stg3_stg3_update_0_write30_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write30;
  return 0;
}

inline hw_uint<16> stg4_rd122_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd122 read pattern: { stg4_update_0[d0, d1] -> stg3[30 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write30 = stg3.stg3_stg3_update_0_write30_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write30;
  return 0;
}

inline hw_uint<16> stg4_rd123_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd123 read pattern: { stg4_update_0[d0, d1] -> stg3[31 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write31 = stg3.stg3_stg3_update_0_write31_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write31;
  return 0;
}

inline hw_uint<16> stg4_rd124_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd124 read pattern: { stg4_update_0[d0, d1] -> stg3[30 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write30 = stg3.stg3_stg3_update_0_write30_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write30;
  return 0;
}

inline hw_uint<16> stg4_rd125_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd125 read pattern: { stg4_update_0[d0, d1] -> stg3[31 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write31 = stg3.stg3_stg3_update_0_write31_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write31;
  return 0;
}

inline hw_uint<16> stg4_rd126_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd126 read pattern: { stg4_update_0[d0, d1] -> stg3[31 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write31 = stg3.stg3_stg3_update_0_write31_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write31;
  return 0;
}

inline hw_uint<16> stg4_rd127_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd127 read pattern: { stg4_update_0[d0, d1] -> stg3[32 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write0 = stg3.stg3_stg3_update_0_write0_merged_banks_4.peek_62();
  return value_stg3_stg3_update_0_write0;
  return 0;
}

inline hw_uint<16> stg4_rd13_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd13 read pattern: { stg4_update_0[d0, d1] -> stg3[3 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write3 = stg3.stg3_stg3_update_0_write3_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write3;
  return 0;
}

inline hw_uint<16> stg4_rd14_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd14 read pattern: { stg4_update_0[d0, d1] -> stg3[3 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write3 = stg3.stg3_stg3_update_0_write3_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write3;
  return 0;
}

inline hw_uint<16> stg4_rd15_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd15 read pattern: { stg4_update_0[d0, d1] -> stg3[4 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write4 = stg3.stg3_stg3_update_0_write4_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write4;
  return 0;
}

inline hw_uint<16> stg4_rd16_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd16 read pattern: { stg4_update_0[d0, d1] -> stg3[3 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write3 = stg3.stg3_stg3_update_0_write3_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write3;
  return 0;
}

inline hw_uint<16> stg4_rd17_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd17 read pattern: { stg4_update_0[d0, d1] -> stg3[4 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write4 = stg3.stg3_stg3_update_0_write4_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write4;
  return 0;
}

inline hw_uint<16> stg4_rd18_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd18 read pattern: { stg4_update_0[d0, d1] -> stg3[4 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write4 = stg3.stg3_stg3_update_0_write4_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write4;
  return 0;
}

inline hw_uint<16> stg4_rd19_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd19 read pattern: { stg4_update_0[d0, d1] -> stg3[5 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write5 = stg3.stg3_stg3_update_0_write5_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write5;
  return 0;
}

inline hw_uint<16> stg4_rd2_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd2 read pattern: { stg4_update_0[d0, d1] -> stg3[32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write0 = stg3.stg3_stg3_update_0_write0_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write0;
  return 0;
}

inline hw_uint<16> stg4_rd20_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd20 read pattern: { stg4_update_0[d0, d1] -> stg3[4 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write4 = stg3.stg3_stg3_update_0_write4_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write4;
  return 0;
}

inline hw_uint<16> stg4_rd21_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd21 read pattern: { stg4_update_0[d0, d1] -> stg3[5 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write5 = stg3.stg3_stg3_update_0_write5_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write5;
  return 0;
}

inline hw_uint<16> stg4_rd22_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd22 read pattern: { stg4_update_0[d0, d1] -> stg3[5 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write5 = stg3.stg3_stg3_update_0_write5_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write5;
  return 0;
}

inline hw_uint<16> stg4_rd23_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd23 read pattern: { stg4_update_0[d0, d1] -> stg3[6 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write6 = stg3.stg3_stg3_update_0_write6_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write6;
  return 0;
}

inline hw_uint<16> stg4_rd24_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd24 read pattern: { stg4_update_0[d0, d1] -> stg3[5 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write5 = stg3.stg3_stg3_update_0_write5_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write5;
  return 0;
}

inline hw_uint<16> stg4_rd25_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd25 read pattern: { stg4_update_0[d0, d1] -> stg3[6 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write6 = stg3.stg3_stg3_update_0_write6_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write6;
  return 0;
}

inline hw_uint<16> stg4_rd26_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd26 read pattern: { stg4_update_0[d0, d1] -> stg3[6 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write6 = stg3.stg3_stg3_update_0_write6_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write6;
  return 0;
}

inline hw_uint<16> stg4_rd27_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd27 read pattern: { stg4_update_0[d0, d1] -> stg3[7 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write7 = stg3.stg3_stg3_update_0_write7_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write7;
  return 0;
}

inline hw_uint<16> stg4_rd28_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd28 read pattern: { stg4_update_0[d0, d1] -> stg3[6 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write6 = stg3.stg3_stg3_update_0_write6_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write6;
  return 0;
}

inline hw_uint<16> stg4_rd29_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd29 read pattern: { stg4_update_0[d0, d1] -> stg3[7 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write7 = stg3.stg3_stg3_update_0_write7_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write7;
  return 0;
}

inline hw_uint<16> stg4_rd3_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd3 read pattern: { stg4_update_0[d0, d1] -> stg3[1 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write1 = stg3.stg3_stg3_update_0_write1_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write1;
  return 0;
}

inline hw_uint<16> stg4_rd30_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd30 read pattern: { stg4_update_0[d0, d1] -> stg3[7 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write7 = stg3.stg3_stg3_update_0_write7_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write7;
  return 0;
}

inline hw_uint<16> stg4_rd31_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd31 read pattern: { stg4_update_0[d0, d1] -> stg3[8 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write8 = stg3.stg3_stg3_update_0_write8_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write8;
  return 0;
}

inline hw_uint<16> stg4_rd32_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd32 read pattern: { stg4_update_0[d0, d1] -> stg3[7 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write7 = stg3.stg3_stg3_update_0_write7_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write7;
  return 0;
}

inline hw_uint<16> stg4_rd33_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd33 read pattern: { stg4_update_0[d0, d1] -> stg3[8 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write8 = stg3.stg3_stg3_update_0_write8_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write8;
  return 0;
}

inline hw_uint<16> stg4_rd34_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd34 read pattern: { stg4_update_0[d0, d1] -> stg3[8 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write8 = stg3.stg3_stg3_update_0_write8_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write8;
  return 0;
}

inline hw_uint<16> stg4_rd35_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd35 read pattern: { stg4_update_0[d0, d1] -> stg3[9 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write9 = stg3.stg3_stg3_update_0_write9_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write9;
  return 0;
}

inline hw_uint<16> stg4_rd36_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd36 read pattern: { stg4_update_0[d0, d1] -> stg3[8 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write8 = stg3.stg3_stg3_update_0_write8_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write8;
  return 0;
}

inline hw_uint<16> stg4_rd37_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd37 read pattern: { stg4_update_0[d0, d1] -> stg3[9 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write9 = stg3.stg3_stg3_update_0_write9_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write9;
  return 0;
}

inline hw_uint<16> stg4_rd38_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd38 read pattern: { stg4_update_0[d0, d1] -> stg3[9 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write9 = stg3.stg3_stg3_update_0_write9_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write9;
  return 0;
}

inline hw_uint<16> stg4_rd39_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd39 read pattern: { stg4_update_0[d0, d1] -> stg3[10 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write10 = stg3.stg3_stg3_update_0_write10_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write10;
  return 0;
}

inline hw_uint<16> stg4_rd4_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd4 read pattern: { stg4_update_0[d0, d1] -> stg3[32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write0 = stg3.stg3_stg3_update_0_write0_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write0;
  return 0;
}

inline hw_uint<16> stg4_rd40_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd40 read pattern: { stg4_update_0[d0, d1] -> stg3[9 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write9 = stg3.stg3_stg3_update_0_write9_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write9;
  return 0;
}

inline hw_uint<16> stg4_rd41_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd41 read pattern: { stg4_update_0[d0, d1] -> stg3[10 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write10 = stg3.stg3_stg3_update_0_write10_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write10;
  return 0;
}

inline hw_uint<16> stg4_rd42_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd42 read pattern: { stg4_update_0[d0, d1] -> stg3[10 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write10 = stg3.stg3_stg3_update_0_write10_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write10;
  return 0;
}

inline hw_uint<16> stg4_rd43_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd43 read pattern: { stg4_update_0[d0, d1] -> stg3[11 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write11 = stg3.stg3_stg3_update_0_write11_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write11;
  return 0;
}

inline hw_uint<16> stg4_rd44_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd44 read pattern: { stg4_update_0[d0, d1] -> stg3[10 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write10 = stg3.stg3_stg3_update_0_write10_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write10;
  return 0;
}

inline hw_uint<16> stg4_rd45_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd45 read pattern: { stg4_update_0[d0, d1] -> stg3[11 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write11 = stg3.stg3_stg3_update_0_write11_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write11;
  return 0;
}

inline hw_uint<16> stg4_rd46_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd46 read pattern: { stg4_update_0[d0, d1] -> stg3[11 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write11 = stg3.stg3_stg3_update_0_write11_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write11;
  return 0;
}

inline hw_uint<16> stg4_rd47_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd47 read pattern: { stg4_update_0[d0, d1] -> stg3[12 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write12 = stg3.stg3_stg3_update_0_write12_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write12;
  return 0;
}

inline hw_uint<16> stg4_rd48_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd48 read pattern: { stg4_update_0[d0, d1] -> stg3[11 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write11 = stg3.stg3_stg3_update_0_write11_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write11;
  return 0;
}

inline hw_uint<16> stg4_rd49_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd49 read pattern: { stg4_update_0[d0, d1] -> stg3[12 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write12 = stg3.stg3_stg3_update_0_write12_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write12;
  return 0;
}

inline hw_uint<16> stg4_rd5_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd5 read pattern: { stg4_update_0[d0, d1] -> stg3[1 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write1 = stg3.stg3_stg3_update_0_write1_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write1;
  return 0;
}

inline hw_uint<16> stg4_rd50_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd50 read pattern: { stg4_update_0[d0, d1] -> stg3[12 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write12 = stg3.stg3_stg3_update_0_write12_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write12;
  return 0;
}

inline hw_uint<16> stg4_rd51_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd51 read pattern: { stg4_update_0[d0, d1] -> stg3[13 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write13 = stg3.stg3_stg3_update_0_write13_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write13;
  return 0;
}

inline hw_uint<16> stg4_rd52_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd52 read pattern: { stg4_update_0[d0, d1] -> stg3[12 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write12 = stg3.stg3_stg3_update_0_write12_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write12;
  return 0;
}

inline hw_uint<16> stg4_rd53_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd53 read pattern: { stg4_update_0[d0, d1] -> stg3[13 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write13 = stg3.stg3_stg3_update_0_write13_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write13;
  return 0;
}

inline hw_uint<16> stg4_rd54_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd54 read pattern: { stg4_update_0[d0, d1] -> stg3[13 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write13 = stg3.stg3_stg3_update_0_write13_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write13;
  return 0;
}

inline hw_uint<16> stg4_rd55_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd55 read pattern: { stg4_update_0[d0, d1] -> stg3[14 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write14 = stg3.stg3_stg3_update_0_write14_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write14;
  return 0;
}

inline hw_uint<16> stg4_rd56_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd56 read pattern: { stg4_update_0[d0, d1] -> stg3[13 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write13 = stg3.stg3_stg3_update_0_write13_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write13;
  return 0;
}

inline hw_uint<16> stg4_rd57_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd57 read pattern: { stg4_update_0[d0, d1] -> stg3[14 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write14 = stg3.stg3_stg3_update_0_write14_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write14;
  return 0;
}

inline hw_uint<16> stg4_rd58_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd58 read pattern: { stg4_update_0[d0, d1] -> stg3[14 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write14 = stg3.stg3_stg3_update_0_write14_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write14;
  return 0;
}

inline hw_uint<16> stg4_rd59_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd59 read pattern: { stg4_update_0[d0, d1] -> stg3[15 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write15 = stg3.stg3_stg3_update_0_write15_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write15;
  return 0;
}

inline hw_uint<16> stg4_rd6_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd6 read pattern: { stg4_update_0[d0, d1] -> stg3[1 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write1 = stg3.stg3_stg3_update_0_write1_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write1;
  return 0;
}

inline hw_uint<16> stg4_rd60_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd60 read pattern: { stg4_update_0[d0, d1] -> stg3[14 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write14 = stg3.stg3_stg3_update_0_write14_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write14;
  return 0;
}

inline hw_uint<16> stg4_rd61_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd61 read pattern: { stg4_update_0[d0, d1] -> stg3[15 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write15 = stg3.stg3_stg3_update_0_write15_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write15;
  return 0;
}

inline hw_uint<16> stg4_rd62_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd62 read pattern: { stg4_update_0[d0, d1] -> stg3[15 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write15 = stg3.stg3_stg3_update_0_write15_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write15;
  return 0;
}

inline hw_uint<16> stg4_rd63_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd63 read pattern: { stg4_update_0[d0, d1] -> stg3[16 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write16 = stg3.stg3_stg3_update_0_write16_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write16;
  return 0;
}

inline hw_uint<16> stg4_rd64_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd64 read pattern: { stg4_update_0[d0, d1] -> stg3[15 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write15 = stg3.stg3_stg3_update_0_write15_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write15;
  return 0;
}

inline hw_uint<16> stg4_rd65_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd65 read pattern: { stg4_update_0[d0, d1] -> stg3[16 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write16 = stg3.stg3_stg3_update_0_write16_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write16;
  return 0;
}

inline hw_uint<16> stg4_rd66_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd66 read pattern: { stg4_update_0[d0, d1] -> stg3[16 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write16 = stg3.stg3_stg3_update_0_write16_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write16;
  return 0;
}

inline hw_uint<16> stg4_rd67_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd67 read pattern: { stg4_update_0[d0, d1] -> stg3[17 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write17 = stg3.stg3_stg3_update_0_write17_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write17;
  return 0;
}

inline hw_uint<16> stg4_rd68_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd68 read pattern: { stg4_update_0[d0, d1] -> stg3[16 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write16 = stg3.stg3_stg3_update_0_write16_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write16;
  return 0;
}

inline hw_uint<16> stg4_rd69_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd69 read pattern: { stg4_update_0[d0, d1] -> stg3[17 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write17 = stg3.stg3_stg3_update_0_write17_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write17;
  return 0;
}

inline hw_uint<16> stg4_rd7_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd7 read pattern: { stg4_update_0[d0, d1] -> stg3[2 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write2 = stg3.stg3_stg3_update_0_write2_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write2;
  return 0;
}

inline hw_uint<16> stg4_rd70_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd70 read pattern: { stg4_update_0[d0, d1] -> stg3[17 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write17 = stg3.stg3_stg3_update_0_write17_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write17;
  return 0;
}

inline hw_uint<16> stg4_rd71_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd71 read pattern: { stg4_update_0[d0, d1] -> stg3[18 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write18 = stg3.stg3_stg3_update_0_write18_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write18;
  return 0;
}

inline hw_uint<16> stg4_rd72_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd72 read pattern: { stg4_update_0[d0, d1] -> stg3[17 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write17 = stg3.stg3_stg3_update_0_write17_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write17;
  return 0;
}

inline hw_uint<16> stg4_rd73_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd73 read pattern: { stg4_update_0[d0, d1] -> stg3[18 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write18 = stg3.stg3_stg3_update_0_write18_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write18;
  return 0;
}

inline hw_uint<16> stg4_rd74_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd74 read pattern: { stg4_update_0[d0, d1] -> stg3[18 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write18 = stg3.stg3_stg3_update_0_write18_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write18;
  return 0;
}

inline hw_uint<16> stg4_rd75_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd75 read pattern: { stg4_update_0[d0, d1] -> stg3[19 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write19 = stg3.stg3_stg3_update_0_write19_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write19;
  return 0;
}

inline hw_uint<16> stg4_rd76_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd76 read pattern: { stg4_update_0[d0, d1] -> stg3[18 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write18 = stg3.stg3_stg3_update_0_write18_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write18;
  return 0;
}

inline hw_uint<16> stg4_rd77_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd77 read pattern: { stg4_update_0[d0, d1] -> stg3[19 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write19 = stg3.stg3_stg3_update_0_write19_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write19;
  return 0;
}

inline hw_uint<16> stg4_rd78_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd78 read pattern: { stg4_update_0[d0, d1] -> stg3[19 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write19 = stg3.stg3_stg3_update_0_write19_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write19;
  return 0;
}

inline hw_uint<16> stg4_rd79_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd79 read pattern: { stg4_update_0[d0, d1] -> stg3[20 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write20 = stg3.stg3_stg3_update_0_write20_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write20;
  return 0;
}

inline hw_uint<16> stg4_rd8_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd8 read pattern: { stg4_update_0[d0, d1] -> stg3[1 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write1 = stg3.stg3_stg3_update_0_write1_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write1;
  return 0;
}

inline hw_uint<16> stg4_rd80_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd80 read pattern: { stg4_update_0[d0, d1] -> stg3[19 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write19 = stg3.stg3_stg3_update_0_write19_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write19;
  return 0;
}

inline hw_uint<16> stg4_rd81_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd81 read pattern: { stg4_update_0[d0, d1] -> stg3[20 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write20 = stg3.stg3_stg3_update_0_write20_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write20;
  return 0;
}

inline hw_uint<16> stg4_rd82_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd82 read pattern: { stg4_update_0[d0, d1] -> stg3[20 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write20 = stg3.stg3_stg3_update_0_write20_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write20;
  return 0;
}

inline hw_uint<16> stg4_rd83_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd83 read pattern: { stg4_update_0[d0, d1] -> stg3[21 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write21 = stg3.stg3_stg3_update_0_write21_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write21;
  return 0;
}

inline hw_uint<16> stg4_rd84_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd84 read pattern: { stg4_update_0[d0, d1] -> stg3[20 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write20 = stg3.stg3_stg3_update_0_write20_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write20;
  return 0;
}

inline hw_uint<16> stg4_rd85_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd85 read pattern: { stg4_update_0[d0, d1] -> stg3[21 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write21 = stg3.stg3_stg3_update_0_write21_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write21;
  return 0;
}

inline hw_uint<16> stg4_rd86_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd86 read pattern: { stg4_update_0[d0, d1] -> stg3[21 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write21 = stg3.stg3_stg3_update_0_write21_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write21;
  return 0;
}

inline hw_uint<16> stg4_rd87_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd87 read pattern: { stg4_update_0[d0, d1] -> stg3[22 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write22 = stg3.stg3_stg3_update_0_write22_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write22;
  return 0;
}

inline hw_uint<16> stg4_rd88_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd88 read pattern: { stg4_update_0[d0, d1] -> stg3[21 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write21 = stg3.stg3_stg3_update_0_write21_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write21;
  return 0;
}

inline hw_uint<16> stg4_rd89_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd89 read pattern: { stg4_update_0[d0, d1] -> stg3[22 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write22 = stg3.stg3_stg3_update_0_write22_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write22;
  return 0;
}

inline hw_uint<16> stg4_rd9_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd9 read pattern: { stg4_update_0[d0, d1] -> stg3[2 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write2 = stg3.stg3_stg3_update_0_write2_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write2;
  return 0;
}

inline hw_uint<16> stg4_rd90_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd90 read pattern: { stg4_update_0[d0, d1] -> stg3[22 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write22 = stg3.stg3_stg3_update_0_write22_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write22;
  return 0;
}

inline hw_uint<16> stg4_rd91_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd91 read pattern: { stg4_update_0[d0, d1] -> stg3[23 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write23 = stg3.stg3_stg3_update_0_write23_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write23;
  return 0;
}

inline hw_uint<16> stg4_rd92_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd92 read pattern: { stg4_update_0[d0, d1] -> stg3[22 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write22 = stg3.stg3_stg3_update_0_write22_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write22;
  return 0;
}

inline hw_uint<16> stg4_rd93_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd93 read pattern: { stg4_update_0[d0, d1] -> stg3[23 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write23 = stg3.stg3_stg3_update_0_write23_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write23;
  return 0;
}

inline hw_uint<16> stg4_rd94_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd94 read pattern: { stg4_update_0[d0, d1] -> stg3[23 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write23 = stg3.stg3_stg3_update_0_write23_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write23;
  return 0;
}

inline hw_uint<16> stg4_rd95_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd95 read pattern: { stg4_update_0[d0, d1] -> stg3[24 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write24 = stg3.stg3_stg3_update_0_write24_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write24;
  return 0;
}

inline hw_uint<16> stg4_rd96_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd96 read pattern: { stg4_update_0[d0, d1] -> stg3[23 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write23 = stg3.stg3_stg3_update_0_write23_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write23;
  return 0;
}

inline hw_uint<16> stg4_rd97_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd97 read pattern: { stg4_update_0[d0, d1] -> stg3[24 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write24 = stg3.stg3_stg3_update_0_write24_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write24;
  return 0;
}

inline hw_uint<16> stg4_rd98_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd98 read pattern: { stg4_update_0[d0, d1] -> stg3[24 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write24 = stg3.stg3_stg3_update_0_write24_merged_banks_4.peek_1();
  return value_stg3_stg3_update_0_write24;
  return 0;
}

inline hw_uint<16> stg4_rd99_select(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // stg4_rd99 read pattern: { stg4_update_0[d0, d1] -> stg3[25 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
  auto value_stg3_stg3_update_0_write25 = stg3.stg3_stg3_update_0_write25_merged_banks_4.peek_63();
  return value_stg3_stg3_update_0_write25;
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
//	stg3_stg3_update_0_write16
//	stg3_stg3_update_0_write17
//	stg3_stg3_update_0_write18
//	stg3_stg3_update_0_write19
//	stg3_stg3_update_0_write20
//	stg3_stg3_update_0_write21
//	stg3_stg3_update_0_write22
//	stg3_stg3_update_0_write23
//	stg3_stg3_update_0_write24
//	stg3_stg3_update_0_write25
//	stg3_stg3_update_0_write26
//	stg3_stg3_update_0_write27
//	stg3_stg3_update_0_write28
//	stg3_stg3_update_0_write29
//	stg3_stg3_update_0_write30
//	stg3_stg3_update_0_write31
inline void stg3_stg3_update_0_write_bundle_write(hw_uint<512>& stg3_update_0_write, stg3_cache& stg3, int d0, int d1, int dynamic_address) {
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
	hw_uint<16> stg3_stg3_update_0_write16_res = stg3_update_0_write.extract<256, 271>();
	stg3_stg3_update_0_write16_write(stg3_stg3_update_0_write16_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write17_res = stg3_update_0_write.extract<272, 287>();
	stg3_stg3_update_0_write17_write(stg3_stg3_update_0_write17_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write18_res = stg3_update_0_write.extract<288, 303>();
	stg3_stg3_update_0_write18_write(stg3_stg3_update_0_write18_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write19_res = stg3_update_0_write.extract<304, 319>();
	stg3_stg3_update_0_write19_write(stg3_stg3_update_0_write19_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write20_res = stg3_update_0_write.extract<320, 335>();
	stg3_stg3_update_0_write20_write(stg3_stg3_update_0_write20_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write21_res = stg3_update_0_write.extract<336, 351>();
	stg3_stg3_update_0_write21_write(stg3_stg3_update_0_write21_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write22_res = stg3_update_0_write.extract<352, 367>();
	stg3_stg3_update_0_write22_write(stg3_stg3_update_0_write22_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write23_res = stg3_update_0_write.extract<368, 383>();
	stg3_stg3_update_0_write23_write(stg3_stg3_update_0_write23_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write24_res = stg3_update_0_write.extract<384, 399>();
	stg3_stg3_update_0_write24_write(stg3_stg3_update_0_write24_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write25_res = stg3_update_0_write.extract<400, 415>();
	stg3_stg3_update_0_write25_write(stg3_stg3_update_0_write25_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write26_res = stg3_update_0_write.extract<416, 431>();
	stg3_stg3_update_0_write26_write(stg3_stg3_update_0_write26_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write27_res = stg3_update_0_write.extract<432, 447>();
	stg3_stg3_update_0_write27_write(stg3_stg3_update_0_write27_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write28_res = stg3_update_0_write.extract<448, 463>();
	stg3_stg3_update_0_write28_write(stg3_stg3_update_0_write28_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write29_res = stg3_update_0_write.extract<464, 479>();
	stg3_stg3_update_0_write29_write(stg3_stg3_update_0_write29_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write30_res = stg3_update_0_write.extract<480, 495>();
	stg3_stg3_update_0_write30_write(stg3_stg3_update_0_write30_res, stg3, d0, d1, dynamic_address);
	hw_uint<16> stg3_stg3_update_0_write31_res = stg3_update_0_write.extract<496, 511>();
	stg3_stg3_update_0_write31_write(stg3_stg3_update_0_write31_res, stg3, d0, d1, dynamic_address);
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
//	stg4_rd64
//	stg4_rd65
//	stg4_rd66
//	stg4_rd67
//	stg4_rd68
//	stg4_rd69
//	stg4_rd70
//	stg4_rd71
//	stg4_rd72
//	stg4_rd73
//	stg4_rd74
//	stg4_rd75
//	stg4_rd76
//	stg4_rd77
//	stg4_rd78
//	stg4_rd79
//	stg4_rd80
//	stg4_rd81
//	stg4_rd82
//	stg4_rd83
//	stg4_rd84
//	stg4_rd85
//	stg4_rd86
//	stg4_rd87
//	stg4_rd88
//	stg4_rd89
//	stg4_rd90
//	stg4_rd91
//	stg4_rd92
//	stg4_rd93
//	stg4_rd94
//	stg4_rd95
//	stg4_rd96
//	stg4_rd97
//	stg4_rd98
//	stg4_rd99
//	stg4_rd100
//	stg4_rd101
//	stg4_rd102
//	stg4_rd103
//	stg4_rd104
//	stg4_rd105
//	stg4_rd106
//	stg4_rd107
//	stg4_rd108
//	stg4_rd109
//	stg4_rd110
//	stg4_rd111
//	stg4_rd112
//	stg4_rd113
//	stg4_rd114
//	stg4_rd115
//	stg4_rd116
//	stg4_rd117
//	stg4_rd118
//	stg4_rd119
//	stg4_rd120
//	stg4_rd121
//	stg4_rd122
//	stg4_rd123
//	stg4_rd124
//	stg4_rd125
//	stg4_rd126
//	stg4_rd127
inline hw_uint<2048> stg3_stg4_update_0_read_bundle_read(stg3_cache& stg3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 128
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
    // stg4_rd64
    // stg4_rd65
    // stg4_rd66
    // stg4_rd67
    // stg4_rd68
    // stg4_rd69
    // stg4_rd70
    // stg4_rd71
    // stg4_rd72
    // stg4_rd73
    // stg4_rd74
    // stg4_rd75
    // stg4_rd76
    // stg4_rd77
    // stg4_rd78
    // stg4_rd79
    // stg4_rd80
    // stg4_rd81
    // stg4_rd82
    // stg4_rd83
    // stg4_rd84
    // stg4_rd85
    // stg4_rd86
    // stg4_rd87
    // stg4_rd88
    // stg4_rd89
    // stg4_rd90
    // stg4_rd91
    // stg4_rd92
    // stg4_rd93
    // stg4_rd94
    // stg4_rd95
    // stg4_rd96
    // stg4_rd97
    // stg4_rd98
    // stg4_rd99
    // stg4_rd100
    // stg4_rd101
    // stg4_rd102
    // stg4_rd103
    // stg4_rd104
    // stg4_rd105
    // stg4_rd106
    // stg4_rd107
    // stg4_rd108
    // stg4_rd109
    // stg4_rd110
    // stg4_rd111
    // stg4_rd112
    // stg4_rd113
    // stg4_rd114
    // stg4_rd115
    // stg4_rd116
    // stg4_rd117
    // stg4_rd118
    // stg4_rd119
    // stg4_rd120
    // stg4_rd121
    // stg4_rd122
    // stg4_rd123
    // stg4_rd124
    // stg4_rd125
    // stg4_rd126
    // stg4_rd127

	hw_uint<2048> result;
	hw_uint<16> stg4_rd0_res = stg4_rd0_select(stg3, d0, d1, dynamic_address);
	set_at<0, 2048>(result, stg4_rd0_res);
	hw_uint<16> stg4_rd1_res = stg4_rd1_select(stg3, d0, d1, dynamic_address);
	set_at<16, 2048>(result, stg4_rd1_res);
	hw_uint<16> stg4_rd2_res = stg4_rd2_select(stg3, d0, d1, dynamic_address);
	set_at<32, 2048>(result, stg4_rd2_res);
	hw_uint<16> stg4_rd3_res = stg4_rd3_select(stg3, d0, d1, dynamic_address);
	set_at<48, 2048>(result, stg4_rd3_res);
	hw_uint<16> stg4_rd4_res = stg4_rd4_select(stg3, d0, d1, dynamic_address);
	set_at<64, 2048>(result, stg4_rd4_res);
	hw_uint<16> stg4_rd5_res = stg4_rd5_select(stg3, d0, d1, dynamic_address);
	set_at<80, 2048>(result, stg4_rd5_res);
	hw_uint<16> stg4_rd6_res = stg4_rd6_select(stg3, d0, d1, dynamic_address);
	set_at<96, 2048>(result, stg4_rd6_res);
	hw_uint<16> stg4_rd7_res = stg4_rd7_select(stg3, d0, d1, dynamic_address);
	set_at<112, 2048>(result, stg4_rd7_res);
	hw_uint<16> stg4_rd8_res = stg4_rd8_select(stg3, d0, d1, dynamic_address);
	set_at<128, 2048>(result, stg4_rd8_res);
	hw_uint<16> stg4_rd9_res = stg4_rd9_select(stg3, d0, d1, dynamic_address);
	set_at<144, 2048>(result, stg4_rd9_res);
	hw_uint<16> stg4_rd10_res = stg4_rd10_select(stg3, d0, d1, dynamic_address);
	set_at<160, 2048>(result, stg4_rd10_res);
	hw_uint<16> stg4_rd11_res = stg4_rd11_select(stg3, d0, d1, dynamic_address);
	set_at<176, 2048>(result, stg4_rd11_res);
	hw_uint<16> stg4_rd12_res = stg4_rd12_select(stg3, d0, d1, dynamic_address);
	set_at<192, 2048>(result, stg4_rd12_res);
	hw_uint<16> stg4_rd13_res = stg4_rd13_select(stg3, d0, d1, dynamic_address);
	set_at<208, 2048>(result, stg4_rd13_res);
	hw_uint<16> stg4_rd14_res = stg4_rd14_select(stg3, d0, d1, dynamic_address);
	set_at<224, 2048>(result, stg4_rd14_res);
	hw_uint<16> stg4_rd15_res = stg4_rd15_select(stg3, d0, d1, dynamic_address);
	set_at<240, 2048>(result, stg4_rd15_res);
	hw_uint<16> stg4_rd16_res = stg4_rd16_select(stg3, d0, d1, dynamic_address);
	set_at<256, 2048>(result, stg4_rd16_res);
	hw_uint<16> stg4_rd17_res = stg4_rd17_select(stg3, d0, d1, dynamic_address);
	set_at<272, 2048>(result, stg4_rd17_res);
	hw_uint<16> stg4_rd18_res = stg4_rd18_select(stg3, d0, d1, dynamic_address);
	set_at<288, 2048>(result, stg4_rd18_res);
	hw_uint<16> stg4_rd19_res = stg4_rd19_select(stg3, d0, d1, dynamic_address);
	set_at<304, 2048>(result, stg4_rd19_res);
	hw_uint<16> stg4_rd20_res = stg4_rd20_select(stg3, d0, d1, dynamic_address);
	set_at<320, 2048>(result, stg4_rd20_res);
	hw_uint<16> stg4_rd21_res = stg4_rd21_select(stg3, d0, d1, dynamic_address);
	set_at<336, 2048>(result, stg4_rd21_res);
	hw_uint<16> stg4_rd22_res = stg4_rd22_select(stg3, d0, d1, dynamic_address);
	set_at<352, 2048>(result, stg4_rd22_res);
	hw_uint<16> stg4_rd23_res = stg4_rd23_select(stg3, d0, d1, dynamic_address);
	set_at<368, 2048>(result, stg4_rd23_res);
	hw_uint<16> stg4_rd24_res = stg4_rd24_select(stg3, d0, d1, dynamic_address);
	set_at<384, 2048>(result, stg4_rd24_res);
	hw_uint<16> stg4_rd25_res = stg4_rd25_select(stg3, d0, d1, dynamic_address);
	set_at<400, 2048>(result, stg4_rd25_res);
	hw_uint<16> stg4_rd26_res = stg4_rd26_select(stg3, d0, d1, dynamic_address);
	set_at<416, 2048>(result, stg4_rd26_res);
	hw_uint<16> stg4_rd27_res = stg4_rd27_select(stg3, d0, d1, dynamic_address);
	set_at<432, 2048>(result, stg4_rd27_res);
	hw_uint<16> stg4_rd28_res = stg4_rd28_select(stg3, d0, d1, dynamic_address);
	set_at<448, 2048>(result, stg4_rd28_res);
	hw_uint<16> stg4_rd29_res = stg4_rd29_select(stg3, d0, d1, dynamic_address);
	set_at<464, 2048>(result, stg4_rd29_res);
	hw_uint<16> stg4_rd30_res = stg4_rd30_select(stg3, d0, d1, dynamic_address);
	set_at<480, 2048>(result, stg4_rd30_res);
	hw_uint<16> stg4_rd31_res = stg4_rd31_select(stg3, d0, d1, dynamic_address);
	set_at<496, 2048>(result, stg4_rd31_res);
	hw_uint<16> stg4_rd32_res = stg4_rd32_select(stg3, d0, d1, dynamic_address);
	set_at<512, 2048>(result, stg4_rd32_res);
	hw_uint<16> stg4_rd33_res = stg4_rd33_select(stg3, d0, d1, dynamic_address);
	set_at<528, 2048>(result, stg4_rd33_res);
	hw_uint<16> stg4_rd34_res = stg4_rd34_select(stg3, d0, d1, dynamic_address);
	set_at<544, 2048>(result, stg4_rd34_res);
	hw_uint<16> stg4_rd35_res = stg4_rd35_select(stg3, d0, d1, dynamic_address);
	set_at<560, 2048>(result, stg4_rd35_res);
	hw_uint<16> stg4_rd36_res = stg4_rd36_select(stg3, d0, d1, dynamic_address);
	set_at<576, 2048>(result, stg4_rd36_res);
	hw_uint<16> stg4_rd37_res = stg4_rd37_select(stg3, d0, d1, dynamic_address);
	set_at<592, 2048>(result, stg4_rd37_res);
	hw_uint<16> stg4_rd38_res = stg4_rd38_select(stg3, d0, d1, dynamic_address);
	set_at<608, 2048>(result, stg4_rd38_res);
	hw_uint<16> stg4_rd39_res = stg4_rd39_select(stg3, d0, d1, dynamic_address);
	set_at<624, 2048>(result, stg4_rd39_res);
	hw_uint<16> stg4_rd40_res = stg4_rd40_select(stg3, d0, d1, dynamic_address);
	set_at<640, 2048>(result, stg4_rd40_res);
	hw_uint<16> stg4_rd41_res = stg4_rd41_select(stg3, d0, d1, dynamic_address);
	set_at<656, 2048>(result, stg4_rd41_res);
	hw_uint<16> stg4_rd42_res = stg4_rd42_select(stg3, d0, d1, dynamic_address);
	set_at<672, 2048>(result, stg4_rd42_res);
	hw_uint<16> stg4_rd43_res = stg4_rd43_select(stg3, d0, d1, dynamic_address);
	set_at<688, 2048>(result, stg4_rd43_res);
	hw_uint<16> stg4_rd44_res = stg4_rd44_select(stg3, d0, d1, dynamic_address);
	set_at<704, 2048>(result, stg4_rd44_res);
	hw_uint<16> stg4_rd45_res = stg4_rd45_select(stg3, d0, d1, dynamic_address);
	set_at<720, 2048>(result, stg4_rd45_res);
	hw_uint<16> stg4_rd46_res = stg4_rd46_select(stg3, d0, d1, dynamic_address);
	set_at<736, 2048>(result, stg4_rd46_res);
	hw_uint<16> stg4_rd47_res = stg4_rd47_select(stg3, d0, d1, dynamic_address);
	set_at<752, 2048>(result, stg4_rd47_res);
	hw_uint<16> stg4_rd48_res = stg4_rd48_select(stg3, d0, d1, dynamic_address);
	set_at<768, 2048>(result, stg4_rd48_res);
	hw_uint<16> stg4_rd49_res = stg4_rd49_select(stg3, d0, d1, dynamic_address);
	set_at<784, 2048>(result, stg4_rd49_res);
	hw_uint<16> stg4_rd50_res = stg4_rd50_select(stg3, d0, d1, dynamic_address);
	set_at<800, 2048>(result, stg4_rd50_res);
	hw_uint<16> stg4_rd51_res = stg4_rd51_select(stg3, d0, d1, dynamic_address);
	set_at<816, 2048>(result, stg4_rd51_res);
	hw_uint<16> stg4_rd52_res = stg4_rd52_select(stg3, d0, d1, dynamic_address);
	set_at<832, 2048>(result, stg4_rd52_res);
	hw_uint<16> stg4_rd53_res = stg4_rd53_select(stg3, d0, d1, dynamic_address);
	set_at<848, 2048>(result, stg4_rd53_res);
	hw_uint<16> stg4_rd54_res = stg4_rd54_select(stg3, d0, d1, dynamic_address);
	set_at<864, 2048>(result, stg4_rd54_res);
	hw_uint<16> stg4_rd55_res = stg4_rd55_select(stg3, d0, d1, dynamic_address);
	set_at<880, 2048>(result, stg4_rd55_res);
	hw_uint<16> stg4_rd56_res = stg4_rd56_select(stg3, d0, d1, dynamic_address);
	set_at<896, 2048>(result, stg4_rd56_res);
	hw_uint<16> stg4_rd57_res = stg4_rd57_select(stg3, d0, d1, dynamic_address);
	set_at<912, 2048>(result, stg4_rd57_res);
	hw_uint<16> stg4_rd58_res = stg4_rd58_select(stg3, d0, d1, dynamic_address);
	set_at<928, 2048>(result, stg4_rd58_res);
	hw_uint<16> stg4_rd59_res = stg4_rd59_select(stg3, d0, d1, dynamic_address);
	set_at<944, 2048>(result, stg4_rd59_res);
	hw_uint<16> stg4_rd60_res = stg4_rd60_select(stg3, d0, d1, dynamic_address);
	set_at<960, 2048>(result, stg4_rd60_res);
	hw_uint<16> stg4_rd61_res = stg4_rd61_select(stg3, d0, d1, dynamic_address);
	set_at<976, 2048>(result, stg4_rd61_res);
	hw_uint<16> stg4_rd62_res = stg4_rd62_select(stg3, d0, d1, dynamic_address);
	set_at<992, 2048>(result, stg4_rd62_res);
	hw_uint<16> stg4_rd63_res = stg4_rd63_select(stg3, d0, d1, dynamic_address);
	set_at<1008, 2048>(result, stg4_rd63_res);
	hw_uint<16> stg4_rd64_res = stg4_rd64_select(stg3, d0, d1, dynamic_address);
	set_at<1024, 2048>(result, stg4_rd64_res);
	hw_uint<16> stg4_rd65_res = stg4_rd65_select(stg3, d0, d1, dynamic_address);
	set_at<1040, 2048>(result, stg4_rd65_res);
	hw_uint<16> stg4_rd66_res = stg4_rd66_select(stg3, d0, d1, dynamic_address);
	set_at<1056, 2048>(result, stg4_rd66_res);
	hw_uint<16> stg4_rd67_res = stg4_rd67_select(stg3, d0, d1, dynamic_address);
	set_at<1072, 2048>(result, stg4_rd67_res);
	hw_uint<16> stg4_rd68_res = stg4_rd68_select(stg3, d0, d1, dynamic_address);
	set_at<1088, 2048>(result, stg4_rd68_res);
	hw_uint<16> stg4_rd69_res = stg4_rd69_select(stg3, d0, d1, dynamic_address);
	set_at<1104, 2048>(result, stg4_rd69_res);
	hw_uint<16> stg4_rd70_res = stg4_rd70_select(stg3, d0, d1, dynamic_address);
	set_at<1120, 2048>(result, stg4_rd70_res);
	hw_uint<16> stg4_rd71_res = stg4_rd71_select(stg3, d0, d1, dynamic_address);
	set_at<1136, 2048>(result, stg4_rd71_res);
	hw_uint<16> stg4_rd72_res = stg4_rd72_select(stg3, d0, d1, dynamic_address);
	set_at<1152, 2048>(result, stg4_rd72_res);
	hw_uint<16> stg4_rd73_res = stg4_rd73_select(stg3, d0, d1, dynamic_address);
	set_at<1168, 2048>(result, stg4_rd73_res);
	hw_uint<16> stg4_rd74_res = stg4_rd74_select(stg3, d0, d1, dynamic_address);
	set_at<1184, 2048>(result, stg4_rd74_res);
	hw_uint<16> stg4_rd75_res = stg4_rd75_select(stg3, d0, d1, dynamic_address);
	set_at<1200, 2048>(result, stg4_rd75_res);
	hw_uint<16> stg4_rd76_res = stg4_rd76_select(stg3, d0, d1, dynamic_address);
	set_at<1216, 2048>(result, stg4_rd76_res);
	hw_uint<16> stg4_rd77_res = stg4_rd77_select(stg3, d0, d1, dynamic_address);
	set_at<1232, 2048>(result, stg4_rd77_res);
	hw_uint<16> stg4_rd78_res = stg4_rd78_select(stg3, d0, d1, dynamic_address);
	set_at<1248, 2048>(result, stg4_rd78_res);
	hw_uint<16> stg4_rd79_res = stg4_rd79_select(stg3, d0, d1, dynamic_address);
	set_at<1264, 2048>(result, stg4_rd79_res);
	hw_uint<16> stg4_rd80_res = stg4_rd80_select(stg3, d0, d1, dynamic_address);
	set_at<1280, 2048>(result, stg4_rd80_res);
	hw_uint<16> stg4_rd81_res = stg4_rd81_select(stg3, d0, d1, dynamic_address);
	set_at<1296, 2048>(result, stg4_rd81_res);
	hw_uint<16> stg4_rd82_res = stg4_rd82_select(stg3, d0, d1, dynamic_address);
	set_at<1312, 2048>(result, stg4_rd82_res);
	hw_uint<16> stg4_rd83_res = stg4_rd83_select(stg3, d0, d1, dynamic_address);
	set_at<1328, 2048>(result, stg4_rd83_res);
	hw_uint<16> stg4_rd84_res = stg4_rd84_select(stg3, d0, d1, dynamic_address);
	set_at<1344, 2048>(result, stg4_rd84_res);
	hw_uint<16> stg4_rd85_res = stg4_rd85_select(stg3, d0, d1, dynamic_address);
	set_at<1360, 2048>(result, stg4_rd85_res);
	hw_uint<16> stg4_rd86_res = stg4_rd86_select(stg3, d0, d1, dynamic_address);
	set_at<1376, 2048>(result, stg4_rd86_res);
	hw_uint<16> stg4_rd87_res = stg4_rd87_select(stg3, d0, d1, dynamic_address);
	set_at<1392, 2048>(result, stg4_rd87_res);
	hw_uint<16> stg4_rd88_res = stg4_rd88_select(stg3, d0, d1, dynamic_address);
	set_at<1408, 2048>(result, stg4_rd88_res);
	hw_uint<16> stg4_rd89_res = stg4_rd89_select(stg3, d0, d1, dynamic_address);
	set_at<1424, 2048>(result, stg4_rd89_res);
	hw_uint<16> stg4_rd90_res = stg4_rd90_select(stg3, d0, d1, dynamic_address);
	set_at<1440, 2048>(result, stg4_rd90_res);
	hw_uint<16> stg4_rd91_res = stg4_rd91_select(stg3, d0, d1, dynamic_address);
	set_at<1456, 2048>(result, stg4_rd91_res);
	hw_uint<16> stg4_rd92_res = stg4_rd92_select(stg3, d0, d1, dynamic_address);
	set_at<1472, 2048>(result, stg4_rd92_res);
	hw_uint<16> stg4_rd93_res = stg4_rd93_select(stg3, d0, d1, dynamic_address);
	set_at<1488, 2048>(result, stg4_rd93_res);
	hw_uint<16> stg4_rd94_res = stg4_rd94_select(stg3, d0, d1, dynamic_address);
	set_at<1504, 2048>(result, stg4_rd94_res);
	hw_uint<16> stg4_rd95_res = stg4_rd95_select(stg3, d0, d1, dynamic_address);
	set_at<1520, 2048>(result, stg4_rd95_res);
	hw_uint<16> stg4_rd96_res = stg4_rd96_select(stg3, d0, d1, dynamic_address);
	set_at<1536, 2048>(result, stg4_rd96_res);
	hw_uint<16> stg4_rd97_res = stg4_rd97_select(stg3, d0, d1, dynamic_address);
	set_at<1552, 2048>(result, stg4_rd97_res);
	hw_uint<16> stg4_rd98_res = stg4_rd98_select(stg3, d0, d1, dynamic_address);
	set_at<1568, 2048>(result, stg4_rd98_res);
	hw_uint<16> stg4_rd99_res = stg4_rd99_select(stg3, d0, d1, dynamic_address);
	set_at<1584, 2048>(result, stg4_rd99_res);
	hw_uint<16> stg4_rd100_res = stg4_rd100_select(stg3, d0, d1, dynamic_address);
	set_at<1600, 2048>(result, stg4_rd100_res);
	hw_uint<16> stg4_rd101_res = stg4_rd101_select(stg3, d0, d1, dynamic_address);
	set_at<1616, 2048>(result, stg4_rd101_res);
	hw_uint<16> stg4_rd102_res = stg4_rd102_select(stg3, d0, d1, dynamic_address);
	set_at<1632, 2048>(result, stg4_rd102_res);
	hw_uint<16> stg4_rd103_res = stg4_rd103_select(stg3, d0, d1, dynamic_address);
	set_at<1648, 2048>(result, stg4_rd103_res);
	hw_uint<16> stg4_rd104_res = stg4_rd104_select(stg3, d0, d1, dynamic_address);
	set_at<1664, 2048>(result, stg4_rd104_res);
	hw_uint<16> stg4_rd105_res = stg4_rd105_select(stg3, d0, d1, dynamic_address);
	set_at<1680, 2048>(result, stg4_rd105_res);
	hw_uint<16> stg4_rd106_res = stg4_rd106_select(stg3, d0, d1, dynamic_address);
	set_at<1696, 2048>(result, stg4_rd106_res);
	hw_uint<16> stg4_rd107_res = stg4_rd107_select(stg3, d0, d1, dynamic_address);
	set_at<1712, 2048>(result, stg4_rd107_res);
	hw_uint<16> stg4_rd108_res = stg4_rd108_select(stg3, d0, d1, dynamic_address);
	set_at<1728, 2048>(result, stg4_rd108_res);
	hw_uint<16> stg4_rd109_res = stg4_rd109_select(stg3, d0, d1, dynamic_address);
	set_at<1744, 2048>(result, stg4_rd109_res);
	hw_uint<16> stg4_rd110_res = stg4_rd110_select(stg3, d0, d1, dynamic_address);
	set_at<1760, 2048>(result, stg4_rd110_res);
	hw_uint<16> stg4_rd111_res = stg4_rd111_select(stg3, d0, d1, dynamic_address);
	set_at<1776, 2048>(result, stg4_rd111_res);
	hw_uint<16> stg4_rd112_res = stg4_rd112_select(stg3, d0, d1, dynamic_address);
	set_at<1792, 2048>(result, stg4_rd112_res);
	hw_uint<16> stg4_rd113_res = stg4_rd113_select(stg3, d0, d1, dynamic_address);
	set_at<1808, 2048>(result, stg4_rd113_res);
	hw_uint<16> stg4_rd114_res = stg4_rd114_select(stg3, d0, d1, dynamic_address);
	set_at<1824, 2048>(result, stg4_rd114_res);
	hw_uint<16> stg4_rd115_res = stg4_rd115_select(stg3, d0, d1, dynamic_address);
	set_at<1840, 2048>(result, stg4_rd115_res);
	hw_uint<16> stg4_rd116_res = stg4_rd116_select(stg3, d0, d1, dynamic_address);
	set_at<1856, 2048>(result, stg4_rd116_res);
	hw_uint<16> stg4_rd117_res = stg4_rd117_select(stg3, d0, d1, dynamic_address);
	set_at<1872, 2048>(result, stg4_rd117_res);
	hw_uint<16> stg4_rd118_res = stg4_rd118_select(stg3, d0, d1, dynamic_address);
	set_at<1888, 2048>(result, stg4_rd118_res);
	hw_uint<16> stg4_rd119_res = stg4_rd119_select(stg3, d0, d1, dynamic_address);
	set_at<1904, 2048>(result, stg4_rd119_res);
	hw_uint<16> stg4_rd120_res = stg4_rd120_select(stg3, d0, d1, dynamic_address);
	set_at<1920, 2048>(result, stg4_rd120_res);
	hw_uint<16> stg4_rd121_res = stg4_rd121_select(stg3, d0, d1, dynamic_address);
	set_at<1936, 2048>(result, stg4_rd121_res);
	hw_uint<16> stg4_rd122_res = stg4_rd122_select(stg3, d0, d1, dynamic_address);
	set_at<1952, 2048>(result, stg4_rd122_res);
	hw_uint<16> stg4_rd123_res = stg4_rd123_select(stg3, d0, d1, dynamic_address);
	set_at<1968, 2048>(result, stg4_rd123_res);
	hw_uint<16> stg4_rd124_res = stg4_rd124_select(stg3, d0, d1, dynamic_address);
	set_at<1984, 2048>(result, stg4_rd124_res);
	hw_uint<16> stg4_rd125_res = stg4_rd125_select(stg3, d0, d1, dynamic_address);
	set_at<2000, 2048>(result, stg4_rd125_res);
	hw_uint<16> stg4_rd126_res = stg4_rd126_select(stg3, d0, d1, dynamic_address);
	set_at<2016, 2048>(result, stg4_rd126_res);
	hw_uint<16> stg4_rd127_res = stg4_rd127_select(stg3, d0, d1, dynamic_address);
	set_at<2032, 2048>(result, stg4_rd127_res);
	return result;
}

struct stg4_stg4_update_0_write0_to_icsc_5s_32_rd0_cache {
	// RAM Box: {[0, 1888], [0, 1079]}
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

struct stg4_stg4_update_0_write1_to_icsc_5s_32_rd1_cache {
	// RAM Box: {[1, 1889], [0, 1079]}
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

struct stg4_stg4_update_0_write10_to_icsc_5s_32_rd10_cache {
	// RAM Box: {[10, 1898], [0, 1079]}
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

struct stg4_stg4_update_0_write11_to_icsc_5s_32_rd11_cache {
	// RAM Box: {[11, 1899], [0, 1079]}
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

struct stg4_stg4_update_0_write12_to_icsc_5s_32_rd12_cache {
	// RAM Box: {[12, 1900], [0, 1079]}
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

struct stg4_stg4_update_0_write13_to_icsc_5s_32_rd13_cache {
	// RAM Box: {[13, 1901], [0, 1079]}
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

struct stg4_stg4_update_0_write14_to_icsc_5s_32_rd14_cache {
	// RAM Box: {[14, 1902], [0, 1079]}
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

struct stg4_stg4_update_0_write15_to_icsc_5s_32_rd15_cache {
	// RAM Box: {[15, 1903], [0, 1079]}
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

struct stg4_stg4_update_0_write16_to_icsc_5s_32_rd16_cache {
	// RAM Box: {[16, 1904], [0, 1079]}
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

struct stg4_stg4_update_0_write17_to_icsc_5s_32_rd17_cache {
	// RAM Box: {[17, 1905], [0, 1079]}
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

struct stg4_stg4_update_0_write18_to_icsc_5s_32_rd18_cache {
	// RAM Box: {[18, 1906], [0, 1079]}
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

struct stg4_stg4_update_0_write19_to_icsc_5s_32_rd19_cache {
	// RAM Box: {[19, 1907], [0, 1079]}
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

struct stg4_stg4_update_0_write2_to_icsc_5s_32_rd2_cache {
	// RAM Box: {[2, 1890], [0, 1079]}
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

struct stg4_stg4_update_0_write20_to_icsc_5s_32_rd20_cache {
	// RAM Box: {[20, 1908], [0, 1079]}
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

struct stg4_stg4_update_0_write21_to_icsc_5s_32_rd21_cache {
	// RAM Box: {[21, 1909], [0, 1079]}
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

struct stg4_stg4_update_0_write22_to_icsc_5s_32_rd22_cache {
	// RAM Box: {[22, 1910], [0, 1079]}
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

struct stg4_stg4_update_0_write23_to_icsc_5s_32_rd23_cache {
	// RAM Box: {[23, 1911], [0, 1079]}
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

struct stg4_stg4_update_0_write24_to_icsc_5s_32_rd24_cache {
	// RAM Box: {[24, 1912], [0, 1079]}
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

struct stg4_stg4_update_0_write25_to_icsc_5s_32_rd25_cache {
	// RAM Box: {[25, 1913], [0, 1079]}
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

struct stg4_stg4_update_0_write26_to_icsc_5s_32_rd26_cache {
	// RAM Box: {[26, 1914], [0, 1079]}
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

struct stg4_stg4_update_0_write27_to_icsc_5s_32_rd27_cache {
	// RAM Box: {[27, 1915], [0, 1079]}
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

struct stg4_stg4_update_0_write28_to_icsc_5s_32_rd28_cache {
	// RAM Box: {[28, 1916], [0, 1079]}
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

struct stg4_stg4_update_0_write29_to_icsc_5s_32_rd29_cache {
	// RAM Box: {[29, 1917], [0, 1079]}
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

struct stg4_stg4_update_0_write3_to_icsc_5s_32_rd3_cache {
	// RAM Box: {[3, 1891], [0, 1079]}
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

struct stg4_stg4_update_0_write30_to_icsc_5s_32_rd30_cache {
	// RAM Box: {[30, 1918], [0, 1079]}
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

struct stg4_stg4_update_0_write31_to_icsc_5s_32_rd31_cache {
	// RAM Box: {[31, 1919], [0, 1079]}
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

struct stg4_stg4_update_0_write4_to_icsc_5s_32_rd4_cache {
	// RAM Box: {[4, 1892], [0, 1079]}
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

struct stg4_stg4_update_0_write5_to_icsc_5s_32_rd5_cache {
	// RAM Box: {[5, 1893], [0, 1079]}
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

struct stg4_stg4_update_0_write6_to_icsc_5s_32_rd6_cache {
	// RAM Box: {[6, 1894], [0, 1079]}
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

struct stg4_stg4_update_0_write7_to_icsc_5s_32_rd7_cache {
	// RAM Box: {[7, 1895], [0, 1079]}
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

struct stg4_stg4_update_0_write8_to_icsc_5s_32_rd8_cache {
	// RAM Box: {[8, 1896], [0, 1079]}
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

struct stg4_stg4_update_0_write9_to_icsc_5s_32_rd9_cache {
	// RAM Box: {[9, 1897], [0, 1079]}
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

struct stg4_cache {
  // # of banks: 32
  stg4_stg4_update_0_write0_to_icsc_5s_32_rd0_cache stg4_stg4_update_0_write0_to_icsc_5s_32_rd0;
  stg4_stg4_update_0_write1_to_icsc_5s_32_rd1_cache stg4_stg4_update_0_write1_to_icsc_5s_32_rd1;
  stg4_stg4_update_0_write10_to_icsc_5s_32_rd10_cache stg4_stg4_update_0_write10_to_icsc_5s_32_rd10;
  stg4_stg4_update_0_write11_to_icsc_5s_32_rd11_cache stg4_stg4_update_0_write11_to_icsc_5s_32_rd11;
  stg4_stg4_update_0_write12_to_icsc_5s_32_rd12_cache stg4_stg4_update_0_write12_to_icsc_5s_32_rd12;
  stg4_stg4_update_0_write13_to_icsc_5s_32_rd13_cache stg4_stg4_update_0_write13_to_icsc_5s_32_rd13;
  stg4_stg4_update_0_write14_to_icsc_5s_32_rd14_cache stg4_stg4_update_0_write14_to_icsc_5s_32_rd14;
  stg4_stg4_update_0_write15_to_icsc_5s_32_rd15_cache stg4_stg4_update_0_write15_to_icsc_5s_32_rd15;
  stg4_stg4_update_0_write16_to_icsc_5s_32_rd16_cache stg4_stg4_update_0_write16_to_icsc_5s_32_rd16;
  stg4_stg4_update_0_write17_to_icsc_5s_32_rd17_cache stg4_stg4_update_0_write17_to_icsc_5s_32_rd17;
  stg4_stg4_update_0_write18_to_icsc_5s_32_rd18_cache stg4_stg4_update_0_write18_to_icsc_5s_32_rd18;
  stg4_stg4_update_0_write19_to_icsc_5s_32_rd19_cache stg4_stg4_update_0_write19_to_icsc_5s_32_rd19;
  stg4_stg4_update_0_write2_to_icsc_5s_32_rd2_cache stg4_stg4_update_0_write2_to_icsc_5s_32_rd2;
  stg4_stg4_update_0_write20_to_icsc_5s_32_rd20_cache stg4_stg4_update_0_write20_to_icsc_5s_32_rd20;
  stg4_stg4_update_0_write21_to_icsc_5s_32_rd21_cache stg4_stg4_update_0_write21_to_icsc_5s_32_rd21;
  stg4_stg4_update_0_write22_to_icsc_5s_32_rd22_cache stg4_stg4_update_0_write22_to_icsc_5s_32_rd22;
  stg4_stg4_update_0_write23_to_icsc_5s_32_rd23_cache stg4_stg4_update_0_write23_to_icsc_5s_32_rd23;
  stg4_stg4_update_0_write24_to_icsc_5s_32_rd24_cache stg4_stg4_update_0_write24_to_icsc_5s_32_rd24;
  stg4_stg4_update_0_write25_to_icsc_5s_32_rd25_cache stg4_stg4_update_0_write25_to_icsc_5s_32_rd25;
  stg4_stg4_update_0_write26_to_icsc_5s_32_rd26_cache stg4_stg4_update_0_write26_to_icsc_5s_32_rd26;
  stg4_stg4_update_0_write27_to_icsc_5s_32_rd27_cache stg4_stg4_update_0_write27_to_icsc_5s_32_rd27;
  stg4_stg4_update_0_write28_to_icsc_5s_32_rd28_cache stg4_stg4_update_0_write28_to_icsc_5s_32_rd28;
  stg4_stg4_update_0_write29_to_icsc_5s_32_rd29_cache stg4_stg4_update_0_write29_to_icsc_5s_32_rd29;
  stg4_stg4_update_0_write3_to_icsc_5s_32_rd3_cache stg4_stg4_update_0_write3_to_icsc_5s_32_rd3;
  stg4_stg4_update_0_write30_to_icsc_5s_32_rd30_cache stg4_stg4_update_0_write30_to_icsc_5s_32_rd30;
  stg4_stg4_update_0_write31_to_icsc_5s_32_rd31_cache stg4_stg4_update_0_write31_to_icsc_5s_32_rd31;
  stg4_stg4_update_0_write4_to_icsc_5s_32_rd4_cache stg4_stg4_update_0_write4_to_icsc_5s_32_rd4;
  stg4_stg4_update_0_write5_to_icsc_5s_32_rd5_cache stg4_stg4_update_0_write5_to_icsc_5s_32_rd5;
  stg4_stg4_update_0_write6_to_icsc_5s_32_rd6_cache stg4_stg4_update_0_write6_to_icsc_5s_32_rd6;
  stg4_stg4_update_0_write7_to_icsc_5s_32_rd7_cache stg4_stg4_update_0_write7_to_icsc_5s_32_rd7;
  stg4_stg4_update_0_write8_to_icsc_5s_32_rd8_cache stg4_stg4_update_0_write8_to_icsc_5s_32_rd8;
  stg4_stg4_update_0_write9_to_icsc_5s_32_rd9_cache stg4_stg4_update_0_write9_to_icsc_5s_32_rd9;
};



inline void stg4_stg4_update_0_write0_write(hw_uint<16>& stg4_stg4_update_0_write0, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write0_to_icsc_5s_32_rd0.push(stg4_stg4_update_0_write0);
}

inline void stg4_stg4_update_0_write1_write(hw_uint<16>& stg4_stg4_update_0_write1, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write1_to_icsc_5s_32_rd1.push(stg4_stg4_update_0_write1);
}

inline void stg4_stg4_update_0_write10_write(hw_uint<16>& stg4_stg4_update_0_write10, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write10_to_icsc_5s_32_rd10.push(stg4_stg4_update_0_write10);
}

inline void stg4_stg4_update_0_write11_write(hw_uint<16>& stg4_stg4_update_0_write11, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write11_to_icsc_5s_32_rd11.push(stg4_stg4_update_0_write11);
}

inline void stg4_stg4_update_0_write12_write(hw_uint<16>& stg4_stg4_update_0_write12, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write12_to_icsc_5s_32_rd12.push(stg4_stg4_update_0_write12);
}

inline void stg4_stg4_update_0_write13_write(hw_uint<16>& stg4_stg4_update_0_write13, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write13_to_icsc_5s_32_rd13.push(stg4_stg4_update_0_write13);
}

inline void stg4_stg4_update_0_write14_write(hw_uint<16>& stg4_stg4_update_0_write14, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write14_to_icsc_5s_32_rd14.push(stg4_stg4_update_0_write14);
}

inline void stg4_stg4_update_0_write15_write(hw_uint<16>& stg4_stg4_update_0_write15, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write15_to_icsc_5s_32_rd15.push(stg4_stg4_update_0_write15);
}

inline void stg4_stg4_update_0_write16_write(hw_uint<16>& stg4_stg4_update_0_write16, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write16_to_icsc_5s_32_rd16.push(stg4_stg4_update_0_write16);
}

inline void stg4_stg4_update_0_write17_write(hw_uint<16>& stg4_stg4_update_0_write17, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write17_to_icsc_5s_32_rd17.push(stg4_stg4_update_0_write17);
}

inline void stg4_stg4_update_0_write18_write(hw_uint<16>& stg4_stg4_update_0_write18, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write18_to_icsc_5s_32_rd18.push(stg4_stg4_update_0_write18);
}

inline void stg4_stg4_update_0_write19_write(hw_uint<16>& stg4_stg4_update_0_write19, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write19_to_icsc_5s_32_rd19.push(stg4_stg4_update_0_write19);
}

inline void stg4_stg4_update_0_write2_write(hw_uint<16>& stg4_stg4_update_0_write2, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write2_to_icsc_5s_32_rd2.push(stg4_stg4_update_0_write2);
}

inline void stg4_stg4_update_0_write20_write(hw_uint<16>& stg4_stg4_update_0_write20, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write20_to_icsc_5s_32_rd20.push(stg4_stg4_update_0_write20);
}

inline void stg4_stg4_update_0_write21_write(hw_uint<16>& stg4_stg4_update_0_write21, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write21_to_icsc_5s_32_rd21.push(stg4_stg4_update_0_write21);
}

inline void stg4_stg4_update_0_write22_write(hw_uint<16>& stg4_stg4_update_0_write22, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write22_to_icsc_5s_32_rd22.push(stg4_stg4_update_0_write22);
}

inline void stg4_stg4_update_0_write23_write(hw_uint<16>& stg4_stg4_update_0_write23, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write23_to_icsc_5s_32_rd23.push(stg4_stg4_update_0_write23);
}

inline void stg4_stg4_update_0_write24_write(hw_uint<16>& stg4_stg4_update_0_write24, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write24_to_icsc_5s_32_rd24.push(stg4_stg4_update_0_write24);
}

inline void stg4_stg4_update_0_write25_write(hw_uint<16>& stg4_stg4_update_0_write25, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write25_to_icsc_5s_32_rd25.push(stg4_stg4_update_0_write25);
}

inline void stg4_stg4_update_0_write26_write(hw_uint<16>& stg4_stg4_update_0_write26, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write26_to_icsc_5s_32_rd26.push(stg4_stg4_update_0_write26);
}

inline void stg4_stg4_update_0_write27_write(hw_uint<16>& stg4_stg4_update_0_write27, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write27_to_icsc_5s_32_rd27.push(stg4_stg4_update_0_write27);
}

inline void stg4_stg4_update_0_write28_write(hw_uint<16>& stg4_stg4_update_0_write28, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write28_to_icsc_5s_32_rd28.push(stg4_stg4_update_0_write28);
}

inline void stg4_stg4_update_0_write29_write(hw_uint<16>& stg4_stg4_update_0_write29, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write29_to_icsc_5s_32_rd29.push(stg4_stg4_update_0_write29);
}

inline void stg4_stg4_update_0_write3_write(hw_uint<16>& stg4_stg4_update_0_write3, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write3_to_icsc_5s_32_rd3.push(stg4_stg4_update_0_write3);
}

inline void stg4_stg4_update_0_write30_write(hw_uint<16>& stg4_stg4_update_0_write30, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write30_to_icsc_5s_32_rd30.push(stg4_stg4_update_0_write30);
}

inline void stg4_stg4_update_0_write31_write(hw_uint<16>& stg4_stg4_update_0_write31, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write31_to_icsc_5s_32_rd31.push(stg4_stg4_update_0_write31);
}

inline void stg4_stg4_update_0_write4_write(hw_uint<16>& stg4_stg4_update_0_write4, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write4_to_icsc_5s_32_rd4.push(stg4_stg4_update_0_write4);
}

inline void stg4_stg4_update_0_write5_write(hw_uint<16>& stg4_stg4_update_0_write5, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write5_to_icsc_5s_32_rd5.push(stg4_stg4_update_0_write5);
}

inline void stg4_stg4_update_0_write6_write(hw_uint<16>& stg4_stg4_update_0_write6, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write6_to_icsc_5s_32_rd6.push(stg4_stg4_update_0_write6);
}

inline void stg4_stg4_update_0_write7_write(hw_uint<16>& stg4_stg4_update_0_write7, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write7_to_icsc_5s_32_rd7.push(stg4_stg4_update_0_write7);
}

inline void stg4_stg4_update_0_write8_write(hw_uint<16>& stg4_stg4_update_0_write8, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write8_to_icsc_5s_32_rd8.push(stg4_stg4_update_0_write8);
}

inline void stg4_stg4_update_0_write9_write(hw_uint<16>& stg4_stg4_update_0_write9, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  stg4.stg4_stg4_update_0_write9_to_icsc_5s_32_rd9.push(stg4_stg4_update_0_write9);
}

inline hw_uint<16> icsc_5s_32_rd0_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd0 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write0 = stg4.stg4_stg4_update_0_write0_to_icsc_5s_32_rd0.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write0;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd1_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd1 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[1 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write1 = stg4.stg4_stg4_update_0_write1_to_icsc_5s_32_rd1.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write1;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd10_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd10 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[10 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write10 = stg4.stg4_stg4_update_0_write10_to_icsc_5s_32_rd10.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write10;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd11_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd11 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[11 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write11 = stg4.stg4_stg4_update_0_write11_to_icsc_5s_32_rd11.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write11;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd12_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd12 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[12 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write12 = stg4.stg4_stg4_update_0_write12_to_icsc_5s_32_rd12.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write12;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd13_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd13 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[13 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write13 = stg4.stg4_stg4_update_0_write13_to_icsc_5s_32_rd13.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write13;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd14_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd14 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[14 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write14 = stg4.stg4_stg4_update_0_write14_to_icsc_5s_32_rd14.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write14;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd15_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd15 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[15 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write15 = stg4.stg4_stg4_update_0_write15_to_icsc_5s_32_rd15.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write15;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd16_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd16 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[16 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write16 = stg4.stg4_stg4_update_0_write16_to_icsc_5s_32_rd16.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write16;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd17_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd17 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[17 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write17 = stg4.stg4_stg4_update_0_write17_to_icsc_5s_32_rd17.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write17;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd18_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd18 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[18 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write18 = stg4.stg4_stg4_update_0_write18_to_icsc_5s_32_rd18.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write18;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd19_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd19 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[19 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write19 = stg4.stg4_stg4_update_0_write19_to_icsc_5s_32_rd19.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write19;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd2_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd2 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[2 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write2 = stg4.stg4_stg4_update_0_write2_to_icsc_5s_32_rd2.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write2;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd20_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd20 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[20 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write20 = stg4.stg4_stg4_update_0_write20_to_icsc_5s_32_rd20.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write20;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd21_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd21 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[21 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write21 = stg4.stg4_stg4_update_0_write21_to_icsc_5s_32_rd21.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write21;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd22_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd22 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[22 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write22 = stg4.stg4_stg4_update_0_write22_to_icsc_5s_32_rd22.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write22;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd23_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd23 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[23 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write23 = stg4.stg4_stg4_update_0_write23_to_icsc_5s_32_rd23.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write23;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd24_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd24 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[24 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write24 = stg4.stg4_stg4_update_0_write24_to_icsc_5s_32_rd24.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write24;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd25_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd25 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[25 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write25 = stg4.stg4_stg4_update_0_write25_to_icsc_5s_32_rd25.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write25;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd26_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd26 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[26 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write26 = stg4.stg4_stg4_update_0_write26_to_icsc_5s_32_rd26.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write26;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd27_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd27 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[27 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write27 = stg4.stg4_stg4_update_0_write27_to_icsc_5s_32_rd27.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write27;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd28_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd28 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[28 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write28 = stg4.stg4_stg4_update_0_write28_to_icsc_5s_32_rd28.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write28;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd29_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd29 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[29 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write29 = stg4.stg4_stg4_update_0_write29_to_icsc_5s_32_rd29.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write29;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd3_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd3 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[3 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write3 = stg4.stg4_stg4_update_0_write3_to_icsc_5s_32_rd3.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write3;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd30_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd30 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[30 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write30 = stg4.stg4_stg4_update_0_write30_to_icsc_5s_32_rd30.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write30;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd31_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd31 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[31 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write31 = stg4.stg4_stg4_update_0_write31_to_icsc_5s_32_rd31.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write31;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd4_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd4 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[4 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write4 = stg4.stg4_stg4_update_0_write4_to_icsc_5s_32_rd4.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write4;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd5_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd5 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[5 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write5 = stg4.stg4_stg4_update_0_write5_to_icsc_5s_32_rd5.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write5;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd6_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd6 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[6 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write6 = stg4.stg4_stg4_update_0_write6_to_icsc_5s_32_rd6.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write6;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd7_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd7 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[7 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write7 = stg4.stg4_stg4_update_0_write7_to_icsc_5s_32_rd7.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write7;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd8_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd8 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[8 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write8 = stg4.stg4_stg4_update_0_write8_to_icsc_5s_32_rd8.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write8;
  return 0;
}

inline hw_uint<16> icsc_5s_32_rd9_select(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // icsc_5s_32_rd9 read pattern: { icsc_5s_32_update_0[d0, d1] -> stg4[9 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_stg4_stg4_update_0_write9 = stg4.stg4_stg4_update_0_write9_to_icsc_5s_32_rd9.peek(/* one reader or all rams */ 0);
  return value_stg4_stg4_update_0_write9;
  return 0;
}

// # of bundles = 2
// icsc_5s_32_update_0_read
//	icsc_5s_32_rd0
//	icsc_5s_32_rd1
//	icsc_5s_32_rd2
//	icsc_5s_32_rd3
//	icsc_5s_32_rd4
//	icsc_5s_32_rd5
//	icsc_5s_32_rd6
//	icsc_5s_32_rd7
//	icsc_5s_32_rd8
//	icsc_5s_32_rd9
//	icsc_5s_32_rd10
//	icsc_5s_32_rd11
//	icsc_5s_32_rd12
//	icsc_5s_32_rd13
//	icsc_5s_32_rd14
//	icsc_5s_32_rd15
//	icsc_5s_32_rd16
//	icsc_5s_32_rd17
//	icsc_5s_32_rd18
//	icsc_5s_32_rd19
//	icsc_5s_32_rd20
//	icsc_5s_32_rd21
//	icsc_5s_32_rd22
//	icsc_5s_32_rd23
//	icsc_5s_32_rd24
//	icsc_5s_32_rd25
//	icsc_5s_32_rd26
//	icsc_5s_32_rd27
//	icsc_5s_32_rd28
//	icsc_5s_32_rd29
//	icsc_5s_32_rd30
//	icsc_5s_32_rd31
inline hw_uint<512> stg4_icsc_5s_32_update_0_read_bundle_read(stg4_cache& stg4, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 32
    // icsc_5s_32_rd0
    // icsc_5s_32_rd1
    // icsc_5s_32_rd2
    // icsc_5s_32_rd3
    // icsc_5s_32_rd4
    // icsc_5s_32_rd5
    // icsc_5s_32_rd6
    // icsc_5s_32_rd7
    // icsc_5s_32_rd8
    // icsc_5s_32_rd9
    // icsc_5s_32_rd10
    // icsc_5s_32_rd11
    // icsc_5s_32_rd12
    // icsc_5s_32_rd13
    // icsc_5s_32_rd14
    // icsc_5s_32_rd15
    // icsc_5s_32_rd16
    // icsc_5s_32_rd17
    // icsc_5s_32_rd18
    // icsc_5s_32_rd19
    // icsc_5s_32_rd20
    // icsc_5s_32_rd21
    // icsc_5s_32_rd22
    // icsc_5s_32_rd23
    // icsc_5s_32_rd24
    // icsc_5s_32_rd25
    // icsc_5s_32_rd26
    // icsc_5s_32_rd27
    // icsc_5s_32_rd28
    // icsc_5s_32_rd29
    // icsc_5s_32_rd30
    // icsc_5s_32_rd31

	hw_uint<512> result;
	hw_uint<16> icsc_5s_32_rd0_res = icsc_5s_32_rd0_select(stg4, d0, d1, dynamic_address);
	set_at<0, 512>(result, icsc_5s_32_rd0_res);
	hw_uint<16> icsc_5s_32_rd1_res = icsc_5s_32_rd1_select(stg4, d0, d1, dynamic_address);
	set_at<16, 512>(result, icsc_5s_32_rd1_res);
	hw_uint<16> icsc_5s_32_rd2_res = icsc_5s_32_rd2_select(stg4, d0, d1, dynamic_address);
	set_at<32, 512>(result, icsc_5s_32_rd2_res);
	hw_uint<16> icsc_5s_32_rd3_res = icsc_5s_32_rd3_select(stg4, d0, d1, dynamic_address);
	set_at<48, 512>(result, icsc_5s_32_rd3_res);
	hw_uint<16> icsc_5s_32_rd4_res = icsc_5s_32_rd4_select(stg4, d0, d1, dynamic_address);
	set_at<64, 512>(result, icsc_5s_32_rd4_res);
	hw_uint<16> icsc_5s_32_rd5_res = icsc_5s_32_rd5_select(stg4, d0, d1, dynamic_address);
	set_at<80, 512>(result, icsc_5s_32_rd5_res);
	hw_uint<16> icsc_5s_32_rd6_res = icsc_5s_32_rd6_select(stg4, d0, d1, dynamic_address);
	set_at<96, 512>(result, icsc_5s_32_rd6_res);
	hw_uint<16> icsc_5s_32_rd7_res = icsc_5s_32_rd7_select(stg4, d0, d1, dynamic_address);
	set_at<112, 512>(result, icsc_5s_32_rd7_res);
	hw_uint<16> icsc_5s_32_rd8_res = icsc_5s_32_rd8_select(stg4, d0, d1, dynamic_address);
	set_at<128, 512>(result, icsc_5s_32_rd8_res);
	hw_uint<16> icsc_5s_32_rd9_res = icsc_5s_32_rd9_select(stg4, d0, d1, dynamic_address);
	set_at<144, 512>(result, icsc_5s_32_rd9_res);
	hw_uint<16> icsc_5s_32_rd10_res = icsc_5s_32_rd10_select(stg4, d0, d1, dynamic_address);
	set_at<160, 512>(result, icsc_5s_32_rd10_res);
	hw_uint<16> icsc_5s_32_rd11_res = icsc_5s_32_rd11_select(stg4, d0, d1, dynamic_address);
	set_at<176, 512>(result, icsc_5s_32_rd11_res);
	hw_uint<16> icsc_5s_32_rd12_res = icsc_5s_32_rd12_select(stg4, d0, d1, dynamic_address);
	set_at<192, 512>(result, icsc_5s_32_rd12_res);
	hw_uint<16> icsc_5s_32_rd13_res = icsc_5s_32_rd13_select(stg4, d0, d1, dynamic_address);
	set_at<208, 512>(result, icsc_5s_32_rd13_res);
	hw_uint<16> icsc_5s_32_rd14_res = icsc_5s_32_rd14_select(stg4, d0, d1, dynamic_address);
	set_at<224, 512>(result, icsc_5s_32_rd14_res);
	hw_uint<16> icsc_5s_32_rd15_res = icsc_5s_32_rd15_select(stg4, d0, d1, dynamic_address);
	set_at<240, 512>(result, icsc_5s_32_rd15_res);
	hw_uint<16> icsc_5s_32_rd16_res = icsc_5s_32_rd16_select(stg4, d0, d1, dynamic_address);
	set_at<256, 512>(result, icsc_5s_32_rd16_res);
	hw_uint<16> icsc_5s_32_rd17_res = icsc_5s_32_rd17_select(stg4, d0, d1, dynamic_address);
	set_at<272, 512>(result, icsc_5s_32_rd17_res);
	hw_uint<16> icsc_5s_32_rd18_res = icsc_5s_32_rd18_select(stg4, d0, d1, dynamic_address);
	set_at<288, 512>(result, icsc_5s_32_rd18_res);
	hw_uint<16> icsc_5s_32_rd19_res = icsc_5s_32_rd19_select(stg4, d0, d1, dynamic_address);
	set_at<304, 512>(result, icsc_5s_32_rd19_res);
	hw_uint<16> icsc_5s_32_rd20_res = icsc_5s_32_rd20_select(stg4, d0, d1, dynamic_address);
	set_at<320, 512>(result, icsc_5s_32_rd20_res);
	hw_uint<16> icsc_5s_32_rd21_res = icsc_5s_32_rd21_select(stg4, d0, d1, dynamic_address);
	set_at<336, 512>(result, icsc_5s_32_rd21_res);
	hw_uint<16> icsc_5s_32_rd22_res = icsc_5s_32_rd22_select(stg4, d0, d1, dynamic_address);
	set_at<352, 512>(result, icsc_5s_32_rd22_res);
	hw_uint<16> icsc_5s_32_rd23_res = icsc_5s_32_rd23_select(stg4, d0, d1, dynamic_address);
	set_at<368, 512>(result, icsc_5s_32_rd23_res);
	hw_uint<16> icsc_5s_32_rd24_res = icsc_5s_32_rd24_select(stg4, d0, d1, dynamic_address);
	set_at<384, 512>(result, icsc_5s_32_rd24_res);
	hw_uint<16> icsc_5s_32_rd25_res = icsc_5s_32_rd25_select(stg4, d0, d1, dynamic_address);
	set_at<400, 512>(result, icsc_5s_32_rd25_res);
	hw_uint<16> icsc_5s_32_rd26_res = icsc_5s_32_rd26_select(stg4, d0, d1, dynamic_address);
	set_at<416, 512>(result, icsc_5s_32_rd26_res);
	hw_uint<16> icsc_5s_32_rd27_res = icsc_5s_32_rd27_select(stg4, d0, d1, dynamic_address);
	set_at<432, 512>(result, icsc_5s_32_rd27_res);
	hw_uint<16> icsc_5s_32_rd28_res = icsc_5s_32_rd28_select(stg4, d0, d1, dynamic_address);
	set_at<448, 512>(result, icsc_5s_32_rd28_res);
	hw_uint<16> icsc_5s_32_rd29_res = icsc_5s_32_rd29_select(stg4, d0, d1, dynamic_address);
	set_at<464, 512>(result, icsc_5s_32_rd29_res);
	hw_uint<16> icsc_5s_32_rd30_res = icsc_5s_32_rd30_select(stg4, d0, d1, dynamic_address);
	set_at<480, 512>(result, icsc_5s_32_rd30_res);
	hw_uint<16> icsc_5s_32_rd31_res = icsc_5s_32_rd31_select(stg4, d0, d1, dynamic_address);
	set_at<496, 512>(result, icsc_5s_32_rd31_res);
	return result;
}

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
//	stg4_stg4_update_0_write16
//	stg4_stg4_update_0_write17
//	stg4_stg4_update_0_write18
//	stg4_stg4_update_0_write19
//	stg4_stg4_update_0_write20
//	stg4_stg4_update_0_write21
//	stg4_stg4_update_0_write22
//	stg4_stg4_update_0_write23
//	stg4_stg4_update_0_write24
//	stg4_stg4_update_0_write25
//	stg4_stg4_update_0_write26
//	stg4_stg4_update_0_write27
//	stg4_stg4_update_0_write28
//	stg4_stg4_update_0_write29
//	stg4_stg4_update_0_write30
//	stg4_stg4_update_0_write31
inline void stg4_stg4_update_0_write_bundle_write(hw_uint<512>& stg4_update_0_write, stg4_cache& stg4, int d0, int d1, int dynamic_address) {
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
	hw_uint<16> stg4_stg4_update_0_write16_res = stg4_update_0_write.extract<256, 271>();
	stg4_stg4_update_0_write16_write(stg4_stg4_update_0_write16_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write17_res = stg4_update_0_write.extract<272, 287>();
	stg4_stg4_update_0_write17_write(stg4_stg4_update_0_write17_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write18_res = stg4_update_0_write.extract<288, 303>();
	stg4_stg4_update_0_write18_write(stg4_stg4_update_0_write18_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write19_res = stg4_update_0_write.extract<304, 319>();
	stg4_stg4_update_0_write19_write(stg4_stg4_update_0_write19_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write20_res = stg4_update_0_write.extract<320, 335>();
	stg4_stg4_update_0_write20_write(stg4_stg4_update_0_write20_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write21_res = stg4_update_0_write.extract<336, 351>();
	stg4_stg4_update_0_write21_write(stg4_stg4_update_0_write21_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write22_res = stg4_update_0_write.extract<352, 367>();
	stg4_stg4_update_0_write22_write(stg4_stg4_update_0_write22_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write23_res = stg4_update_0_write.extract<368, 383>();
	stg4_stg4_update_0_write23_write(stg4_stg4_update_0_write23_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write24_res = stg4_update_0_write.extract<384, 399>();
	stg4_stg4_update_0_write24_write(stg4_stg4_update_0_write24_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write25_res = stg4_update_0_write.extract<400, 415>();
	stg4_stg4_update_0_write25_write(stg4_stg4_update_0_write25_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write26_res = stg4_update_0_write.extract<416, 431>();
	stg4_stg4_update_0_write26_write(stg4_stg4_update_0_write26_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write27_res = stg4_update_0_write.extract<432, 447>();
	stg4_stg4_update_0_write27_write(stg4_stg4_update_0_write27_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write28_res = stg4_update_0_write.extract<448, 463>();
	stg4_stg4_update_0_write28_write(stg4_stg4_update_0_write28_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write29_res = stg4_update_0_write.extract<464, 479>();
	stg4_stg4_update_0_write29_write(stg4_stg4_update_0_write29_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write30_res = stg4_update_0_write.extract<480, 495>();
	stg4_stg4_update_0_write30_write(stg4_stg4_update_0_write30_res, stg4, d0, d1, dynamic_address);
	hw_uint<16> stg4_stg4_update_0_write31_res = stg4_update_0_write.extract<496, 511>();
	stg4_stg4_update_0_write31_write(stg4_stg4_update_0_write31_res, stg4, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 171600 bits


// Operation logic
inline void in_update_0(HWStream<hw_uint<512> >& /* buffer_args num ports = 32 */in_off_chip, in_cache& in, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_off_chip
	auto in_off_chip_0_c__0_value = in_off_chip.read();
	auto compute_result = in_generated_compute_unrolled_32(in_off_chip_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(/* arg names */compute_result, in, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg0_update_0(in_cache& in, stg0_cache& stg0, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_stg0_update_0_read_bundle_read(in/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg0_generated_compute_unrolled_32(in_0_c__0_value);
	// Produce: stg0
	stg0_stg0_update_0_write_bundle_write(/* arg names */compute_result, stg0, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg1_update_0(stg0_cache& stg0, stg1_cache& stg1, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg0
	auto stg0_0_c__0_value = stg0_stg1_update_0_read_bundle_read(stg0/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg1_generated_compute_unrolled_32(stg0_0_c__0_value);
	// Produce: stg1
	stg1_stg1_update_0_write_bundle_write(/* arg names */compute_result, stg1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg2_update_0(stg1_cache& stg1, stg2_cache& stg2, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg1
	auto stg1_0_c__0_value = stg1_stg2_update_0_read_bundle_read(stg1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg2_generated_compute_unrolled_32(stg1_0_c__0_value);
	// Produce: stg2
	stg2_stg2_update_0_write_bundle_write(/* arg names */compute_result, stg2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg3_update_0(stg2_cache& stg2, stg3_cache& stg3, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg2
	auto stg2_0_c__0_value = stg2_stg3_update_0_read_bundle_read(stg2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg3_generated_compute_unrolled_32(stg2_0_c__0_value);
	// Produce: stg3
	stg3_stg3_update_0_write_bundle_write(/* arg names */compute_result, stg3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void stg4_update_0(stg3_cache& stg3, stg4_cache& stg4, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg3
	auto stg3_0_c__0_value = stg3_stg4_update_0_read_bundle_read(stg3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = stg4_generated_compute_unrolled_32(stg3_0_c__0_value);
	// Produce: stg4
	stg4_stg4_update_0_write_bundle_write(/* arg names */compute_result, stg4, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void icsc_5s_32_update_0(stg4_cache& stg4, HWStream<hw_uint<512> >& /* buffer_args num ports = 32 */icsc_5s_32, int d0, int d1) {
  // Dynamic address computation

	// Consume: stg4
	auto stg4_0_c__0_value = stg4_icsc_5s_32_update_0_read_bundle_read(stg4/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = icsc_5s_32_generated_compute_unrolled_32(stg4_0_c__0_value);
	// Produce: icsc_5s_32
	icsc_5s_32.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void icsc_5s_32_opt(HWStream<hw_uint<512> >& /* get_args num ports = 32 */in_off_chip, HWStream<hw_uint<512> >& /* get_args num ports = 32 */icsc_5s_32) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("icsc_5s_32_opt_debug.csv");
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
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082; stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081; stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083; stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079; stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080; icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079; in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
//   { stg1_update_0[d0, d1] -> [2 + d1, 2 + d0, 3] : -3 <= d0 <= 62 and 0 <= d1 <= 1082 }
// Condition for stg1_update_0(((-3 + i2 == 0) && (1 + i1 >= 0) && (64 - i1 >= 0) && (-2 + i0 >= 0) && (1084 - i0 >= 0)))
//   { stg2_update_0[d0, d1] -> [3 + d1, 3 + d0, 4] : -2 <= d0 <= 61 and 0 <= d1 <= 1081 }
// Condition for stg2_update_0(((-4 + i2 == 0) && (-1 + i1 >= 0) && (64 - i1 >= 0) && (-3 + i0 >= 0) && (1084 - i0 >= 0)))
//   { stg0_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -4 <= d0 <= 63 and 0 <= d1 <= 1083 }
// Condition for stg0_update_0(((-2 + i2 == 0) && (3 + i1 >= 0) && (64 - i1 >= 0) && (-1 + i0 >= 0) && (1084 - i0 >= 0)))
//   { stg4_update_0[d0, d1] -> [5 + d1, 5 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
// Condition for stg4_update_0(((-6 + i2 == 0) && (-5 + i1 >= 0) && (64 - i1 >= 0) && (-5 + i0 >= 0) && (1084 - i0 >= 0)))
//   { stg3_update_0[d0, d1] -> [4 + d1, 4 + d0, 5] : -1 <= d0 <= 60 and 0 <= d1 <= 1080 }
// Condition for stg3_update_0(((-5 + i2 == 0) && (-3 + i1 >= 0) && (64 - i1 >= 0) && (-4 + i0 >= 0) && (1084 - i0 >= 0)))
//   { icsc_5s_32_update_0[d0, d1] -> [5 + d1, 5 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
// Condition for icsc_5s_32_update_0(((-7 + i2 == 0) && (-5 + i1 >= 0) && (64 - i1 >= 0) && (-5 + i0 >= 0) && (1084 - i0 >= 0)))
//   { in_update_0[d0, d1] -> [d1, d0, 1] : -5 <= d0 <= 64 and 0 <= d1 <= 1084 }
// Condition for in_update_0(((-1 + i2 == 0) && (5 + i1 >= 0) && (64 - i1 >= 0) && (i0 >= 0) && (1084 - i0 >= 0)))

  /*
  // Schedules...
    // icsc_5s_32_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*7]
    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // stg0_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
    // stg1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
    // stg2_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*4]
    // stg3_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*5]
    // stg4_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*6]
for (int c0 = 0; c0 <= 1084; c0++) {
  for (int c1 = -5; c1 <= 64; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((-5 <= c1 && c1 <= 64) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1084) && ((c0 - 0) % 1 == 0)) {
      in_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((-3 <= c1 && c1 <= 64) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1084) && ((c0 - 1) % 1 == 0)) {
      stg0_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((-1 <= c1 && c1 <= 64) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1084) && ((c0 - 2) % 1 == 0)) {
      stg1_update_0((c1 - 2) / 1, (c0 - 2) / 1);
    }

    if ((1 <= c1 && c1 <= 64) && ((c1 - 3) % 1 == 0) && (3 <= c0 && c0 <= 1084) && ((c0 - 3) % 1 == 0)) {
      stg2_update_0((c1 - 3) / 1, (c0 - 3) / 1);
    }

    if ((3 <= c1 && c1 <= 64) && ((c1 - 4) % 1 == 0) && (4 <= c0 && c0 <= 1084) && ((c0 - 4) % 1 == 0)) {
      stg3_update_0((c1 - 4) / 1, (c0 - 4) / 1);
    }

    if ((5 <= c1 && c1 <= 64) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
      stg4_update_0((c1 - 5) / 1, (c0 - 5) / 1);
    }

    if ((5 <= c1 && c1 <= 64) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
      icsc_5s_32_update_0((c1 - 5) / 1, (c0 - 5) / 1);
    }

  }
}

  */
	  // Schedules...
	    // icsc_5s_32_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*7]
	    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // stg0_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // stg1_update_0 -> [1*d1*1*1 + 1*2,1*d0*1*1 + 1*2,1*3]
	    // stg2_update_0 -> [1*d1*1*1 + 1*3,1*d0*1*1 + 1*3,1*4]
	    // stg3_update_0 -> [1*d1*1*1 + 1*4,1*d0*1*1 + 1*4,1*5]
	    // stg4_update_0 -> [1*d1*1*1 + 1*5,1*d0*1*1 + 1*5,1*6]
	for (int c0 = 0; c0 <= 1084; c0++) {
	  for (int c1 = -5; c1 <= 64; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-5 <= c1 && c1 <= 64) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1084) && ((c0 - 0) % 1 == 0)) {
	      in_update_0(in_off_chip /* buf name */, in, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((-3 <= c1 && c1 <= 64) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1084) && ((c0 - 1) % 1 == 0)) {
	      stg0_update_0(in /* buf name */, stg0, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((-1 <= c1 && c1 <= 64) && ((c1 - 2) % 1 == 0) && (2 <= c0 && c0 <= 1084) && ((c0 - 2) % 1 == 0)) {
	      stg1_update_0(stg0 /* buf name */, stg1, (c1 - 2) / 1, (c0 - 2) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 64) && ((c1 - 3) % 1 == 0) && (3 <= c0 && c0 <= 1084) && ((c0 - 3) % 1 == 0)) {
	      stg2_update_0(stg1 /* buf name */, stg2, (c1 - 3) / 1, (c0 - 3) / 1);
	    }
	
	    if ((3 <= c1 && c1 <= 64) && ((c1 - 4) % 1 == 0) && (4 <= c0 && c0 <= 1084) && ((c0 - 4) % 1 == 0)) {
	      stg3_update_0(stg2 /* buf name */, stg3, (c1 - 4) / 1, (c0 - 4) / 1);
	    }
	
	    if ((5 <= c1 && c1 <= 64) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
	      stg4_update_0(stg3 /* buf name */, stg4, (c1 - 5) / 1, (c0 - 5) / 1);
	    }
	
	    if ((5 <= c1 && c1 <= 64) && ((c1 - 5) % 1 == 0) && (5 <= c0 && c0 <= 1084) && ((c0 - 5) % 1 == 0)) {
	      icsc_5s_32_update_0(stg4 /* buf name */, icsc_5s_32, (c1 - 5) / 1, (c0 - 5) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void icsc_5s_32_opt_wrapper(HWStream<hw_uint<512> >& /* get_args num ports = 32 */in_off_chip, HWStream<hw_uint<512> >& /* get_args num ports = 32 */icsc_5s_32, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    icsc_5s_32_opt(in_off_chip, icsc_5s_32);
  }
}
#ifdef __VIVADO_SYNTH__
  // { icsc_5s_32_update_0[root = 0, icsc_5s_32_0, icsc_5s_32_1] -> icsc_5s_32[0, 0] : 0 <= icsc_5s_32_0 <= 59 and 0 <= icsc_5s_32_1 <= 1079 }
const int icsc_5s_32_update_0_write_pipe0_num_transfers = 64800;
  // { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : -5 <= in_0 <= 64 and 0 <= in_1 <= 1084 }
const int in_update_0_read_pipe0_num_transfers = 75950;


extern "C" {

void icsc_5s_32_opt_accel(hw_uint<512>* in_update_0_read_pipe0, hw_uint<512>* icsc_5s_32_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = icsc_5s_32_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = icsc_5s_32_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<512> > in_update_0_read_pipe0_channel;
  static HWStream<hw_uint<512> > icsc_5s_32_update_0_write_pipe0_channel;

  burst_read<512>(in_update_0_read_pipe0, in_update_0_read_pipe0_channel, in_update_0_read_pipe0_num_transfers*size);

  icsc_5s_32_opt_wrapper(in_update_0_read_pipe0_channel, icsc_5s_32_update_0_write_pipe0_channel, size);

  burst_write<512>(icsc_5s_32_update_0_write_pipe0, icsc_5s_32_update_0_write_pipe0_channel, icsc_5s_32_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void icsc_5s_32_opt_rdai(HWStream<hw_uint<512> >& in_update_0_read_pipe0, HWStream<hw_uint<512> >&  icsc_5s_32_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = icsc_5s_32_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  icsc_5s_32_opt(in_update_0_read_pipe0, icsc_5s_32_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

