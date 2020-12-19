#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: gp64x64_32_opt_compute_units.h
#include "gp64x64_32_opt_compute_units.h"

#include "hw_classes.h"

struct in_in_update_0_write0_merged_banks_6_cache {
	// RAM Box: {[0, 1120], [0, 1038]}
	// Capacity: 74
	// # of read delays: 6
  // 0, 1, 36, 37, 72, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 34> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 34> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_35() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_36() {
		return f4;
	}

	inline hw_uint<16> peek_37() {
		return f6;
	}

	inline hw_uint<16> peek_71() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_72() {
		return f8;
	}

	inline hw_uint<16> peek_73() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
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
	// RAM Box: {[1, 1089], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write10_merged_banks_6_cache {
	// RAM Box: {[10, 1098], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write11_merged_banks_3_cache {
	// RAM Box: {[11, 1099], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write12_merged_banks_6_cache {
	// RAM Box: {[12, 1100], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write13_merged_banks_3_cache {
	// RAM Box: {[13, 1101], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write14_merged_banks_6_cache {
	// RAM Box: {[14, 1102], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write15_merged_banks_3_cache {
	// RAM Box: {[15, 1103], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write16_merged_banks_6_cache {
	// RAM Box: {[16, 1104], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write17_merged_banks_3_cache {
	// RAM Box: {[17, 1105], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write18_merged_banks_6_cache {
	// RAM Box: {[18, 1106], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write19_merged_banks_3_cache {
	// RAM Box: {[19, 1107], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
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
	// RAM Box: {[2, 1090], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write20_merged_banks_6_cache {
	// RAM Box: {[20, 1108], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write21_merged_banks_3_cache {
	// RAM Box: {[21, 1109], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write22_merged_banks_6_cache {
	// RAM Box: {[22, 1110], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write23_merged_banks_3_cache {
	// RAM Box: {[23, 1111], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write24_merged_banks_6_cache {
	// RAM Box: {[24, 1112], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write25_merged_banks_3_cache {
	// RAM Box: {[25, 1113], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write26_merged_banks_6_cache {
	// RAM Box: {[26, 1114], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write27_merged_banks_3_cache {
	// RAM Box: {[27, 1115], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write28_merged_banks_6_cache {
	// RAM Box: {[28, 1116], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write29_merged_banks_3_cache {
	// RAM Box: {[29, 1117], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
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
	// RAM Box: {[3, 1091], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write30_merged_banks_6_cache {
	// RAM Box: {[30, 1118], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write31_merged_banks_3_cache {
	// RAM Box: {[31, 1119], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
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
	// RAM Box: {[4, 1092], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
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
	// RAM Box: {[5, 1093], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
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
	// RAM Box: {[6, 1094], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
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
	// RAM Box: {[7, 1095], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write8_merged_banks_6_cache {
	// RAM Box: {[8, 1096], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write9_merged_banks_3_cache {
	// RAM Box: {[9, 1097], [0, 1038]}
	// Capacity: 74
	// # of read delays: 4
  // 0, 1, 37, 73
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 35> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 35> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_36() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_37() {
		return f4;
	}

	inline hw_uint<16> peek_72() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_73() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 35
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 35 reading from capacity: 1
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
  in_in_update_0_write0_merged_banks_6_cache in_in_update_0_write0_merged_banks_6;
  in_in_update_0_write1_merged_banks_3_cache in_in_update_0_write1_merged_banks_3;
  in_in_update_0_write10_merged_banks_6_cache in_in_update_0_write10_merged_banks_6;
  in_in_update_0_write11_merged_banks_3_cache in_in_update_0_write11_merged_banks_3;
  in_in_update_0_write12_merged_banks_6_cache in_in_update_0_write12_merged_banks_6;
  in_in_update_0_write13_merged_banks_3_cache in_in_update_0_write13_merged_banks_3;
  in_in_update_0_write14_merged_banks_6_cache in_in_update_0_write14_merged_banks_6;
  in_in_update_0_write15_merged_banks_3_cache in_in_update_0_write15_merged_banks_3;
  in_in_update_0_write16_merged_banks_6_cache in_in_update_0_write16_merged_banks_6;
  in_in_update_0_write17_merged_banks_3_cache in_in_update_0_write17_merged_banks_3;
  in_in_update_0_write18_merged_banks_6_cache in_in_update_0_write18_merged_banks_6;
  in_in_update_0_write19_merged_banks_3_cache in_in_update_0_write19_merged_banks_3;
  in_in_update_0_write2_merged_banks_6_cache in_in_update_0_write2_merged_banks_6;
  in_in_update_0_write20_merged_banks_6_cache in_in_update_0_write20_merged_banks_6;
  in_in_update_0_write21_merged_banks_3_cache in_in_update_0_write21_merged_banks_3;
  in_in_update_0_write22_merged_banks_6_cache in_in_update_0_write22_merged_banks_6;
  in_in_update_0_write23_merged_banks_3_cache in_in_update_0_write23_merged_banks_3;
  in_in_update_0_write24_merged_banks_6_cache in_in_update_0_write24_merged_banks_6;
  in_in_update_0_write25_merged_banks_3_cache in_in_update_0_write25_merged_banks_3;
  in_in_update_0_write26_merged_banks_6_cache in_in_update_0_write26_merged_banks_6;
  in_in_update_0_write27_merged_banks_3_cache in_in_update_0_write27_merged_banks_3;
  in_in_update_0_write28_merged_banks_6_cache in_in_update_0_write28_merged_banks_6;
  in_in_update_0_write29_merged_banks_3_cache in_in_update_0_write29_merged_banks_3;
  in_in_update_0_write3_merged_banks_3_cache in_in_update_0_write3_merged_banks_3;
  in_in_update_0_write30_merged_banks_6_cache in_in_update_0_write30_merged_banks_6;
  in_in_update_0_write31_merged_banks_3_cache in_in_update_0_write31_merged_banks_3;
  in_in_update_0_write4_merged_banks_6_cache in_in_update_0_write4_merged_banks_6;
  in_in_update_0_write5_merged_banks_3_cache in_in_update_0_write5_merged_banks_3;
  in_in_update_0_write6_merged_banks_6_cache in_in_update_0_write6_merged_banks_6;
  in_in_update_0_write7_merged_banks_3_cache in_in_update_0_write7_merged_banks_3;
  in_in_update_0_write8_merged_banks_6_cache in_in_update_0_write8_merged_banks_6;
  in_in_update_0_write9_merged_banks_3_cache in_in_update_0_write9_merged_banks_3;
};



inline void in_in_update_0_write0_write(hw_uint<16>& in_in_update_0_write0, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write0_merged_banks_6.push(in_in_update_0_write0);
}

inline void in_in_update_0_write1_write(hw_uint<16>& in_in_update_0_write1, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write1_merged_banks_3.push(in_in_update_0_write1);
}

inline void in_in_update_0_write10_write(hw_uint<16>& in_in_update_0_write10, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write10_merged_banks_6.push(in_in_update_0_write10);
}

inline void in_in_update_0_write11_write(hw_uint<16>& in_in_update_0_write11, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write11_merged_banks_3.push(in_in_update_0_write11);
}

inline void in_in_update_0_write12_write(hw_uint<16>& in_in_update_0_write12, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write12_merged_banks_6.push(in_in_update_0_write12);
}

inline void in_in_update_0_write13_write(hw_uint<16>& in_in_update_0_write13, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write13_merged_banks_3.push(in_in_update_0_write13);
}

inline void in_in_update_0_write14_write(hw_uint<16>& in_in_update_0_write14, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write14_merged_banks_6.push(in_in_update_0_write14);
}

inline void in_in_update_0_write15_write(hw_uint<16>& in_in_update_0_write15, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write15_merged_banks_3.push(in_in_update_0_write15);
}

inline void in_in_update_0_write16_write(hw_uint<16>& in_in_update_0_write16, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write16_merged_banks_6.push(in_in_update_0_write16);
}

inline void in_in_update_0_write17_write(hw_uint<16>& in_in_update_0_write17, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write17_merged_banks_3.push(in_in_update_0_write17);
}

inline void in_in_update_0_write18_write(hw_uint<16>& in_in_update_0_write18, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write18_merged_banks_6.push(in_in_update_0_write18);
}

inline void in_in_update_0_write19_write(hw_uint<16>& in_in_update_0_write19, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write19_merged_banks_3.push(in_in_update_0_write19);
}

inline void in_in_update_0_write2_write(hw_uint<16>& in_in_update_0_write2, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write2_merged_banks_6.push(in_in_update_0_write2);
}

inline void in_in_update_0_write20_write(hw_uint<16>& in_in_update_0_write20, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write20_merged_banks_6.push(in_in_update_0_write20);
}

inline void in_in_update_0_write21_write(hw_uint<16>& in_in_update_0_write21, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write21_merged_banks_3.push(in_in_update_0_write21);
}

inline void in_in_update_0_write22_write(hw_uint<16>& in_in_update_0_write22, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write22_merged_banks_6.push(in_in_update_0_write22);
}

inline void in_in_update_0_write23_write(hw_uint<16>& in_in_update_0_write23, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write23_merged_banks_3.push(in_in_update_0_write23);
}

inline void in_in_update_0_write24_write(hw_uint<16>& in_in_update_0_write24, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write24_merged_banks_6.push(in_in_update_0_write24);
}

inline void in_in_update_0_write25_write(hw_uint<16>& in_in_update_0_write25, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write25_merged_banks_3.push(in_in_update_0_write25);
}

inline void in_in_update_0_write26_write(hw_uint<16>& in_in_update_0_write26, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write26_merged_banks_6.push(in_in_update_0_write26);
}

inline void in_in_update_0_write27_write(hw_uint<16>& in_in_update_0_write27, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write27_merged_banks_3.push(in_in_update_0_write27);
}

inline void in_in_update_0_write28_write(hw_uint<16>& in_in_update_0_write28, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write28_merged_banks_6.push(in_in_update_0_write28);
}

inline void in_in_update_0_write29_write(hw_uint<16>& in_in_update_0_write29, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write29_merged_banks_3.push(in_in_update_0_write29);
}

inline void in_in_update_0_write3_write(hw_uint<16>& in_in_update_0_write3, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write3_merged_banks_3.push(in_in_update_0_write3);
}

inline void in_in_update_0_write30_write(hw_uint<16>& in_in_update_0_write30, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write30_merged_banks_6.push(in_in_update_0_write30);
}

inline void in_in_update_0_write31_write(hw_uint<16>& in_in_update_0_write31, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write31_merged_banks_3.push(in_in_update_0_write31);
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

inline void in_in_update_0_write8_write(hw_uint<16>& in_in_update_0_write8, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write8_merged_banks_6.push(in_in_update_0_write8);
}

inline void in_in_update_0_write9_write(hw_uint<16>& in_in_update_0_write9, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write9_merged_banks_3.push(in_in_update_0_write9);
}

inline hw_uint<16> level_0_rd0_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd0 read pattern: { level_0_update_0[d0, d1] -> in[32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_6.peek_73();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> level_0_rd1_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd1 read pattern: { level_0_update_0[d0, d1] -> in[32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_6.peek_37();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> level_0_rd10_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd10 read pattern: { level_0_update_0[d0, d1] -> in[2 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_6.peek_37();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> level_0_rd100_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd100 read pattern: { level_0_update_0[d0, d1] -> in[22 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write22 = in.in_in_update_0_write22_merged_banks_6.peek_37();
  return value_in_in_update_0_write22;
  return 0;
}

inline hw_uint<16> level_0_rd101_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd101 read pattern: { level_0_update_0[d0, d1] -> in[22 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write22 = in.in_in_update_0_write22_merged_banks_6.peek_1();
  return value_in_in_update_0_write22;
  return 0;
}

inline hw_uint<16> level_0_rd102_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd102 read pattern: { level_0_update_0[d0, d1] -> in[23 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write23 = in.in_in_update_0_write23_merged_banks_3.peek_73();
  return value_in_in_update_0_write23;
  return 0;
}

inline hw_uint<16> level_0_rd103_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd103 read pattern: { level_0_update_0[d0, d1] -> in[23 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write23 = in.in_in_update_0_write23_merged_banks_3.peek_37();
  return value_in_in_update_0_write23;
  return 0;
}

inline hw_uint<16> level_0_rd104_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd104 read pattern: { level_0_update_0[d0, d1] -> in[23 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write23 = in.in_in_update_0_write23_merged_banks_3.peek_1();
  return value_in_in_update_0_write23;
  return 0;
}

inline hw_uint<16> level_0_rd105_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd105 read pattern: { level_0_update_0[d0, d1] -> in[24 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write24 = in.in_in_update_0_write24_merged_banks_6.peek_73();
  return value_in_in_update_0_write24;
  return 0;
}

inline hw_uint<16> level_0_rd106_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd106 read pattern: { level_0_update_0[d0, d1] -> in[24 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write24 = in.in_in_update_0_write24_merged_banks_6.peek_37();
  return value_in_in_update_0_write24;
  return 0;
}

inline hw_uint<16> level_0_rd107_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd107 read pattern: { level_0_update_0[d0, d1] -> in[24 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write24 = in.in_in_update_0_write24_merged_banks_6.peek_1();
  return value_in_in_update_0_write24;
  return 0;
}

inline hw_uint<16> level_0_rd108_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd108 read pattern: { level_0_update_0[d0, d1] -> in[24 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write24 = in.in_in_update_0_write24_merged_banks_6.peek_73();
  return value_in_in_update_0_write24;
  return 0;
}

inline hw_uint<16> level_0_rd109_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd109 read pattern: { level_0_update_0[d0, d1] -> in[24 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write24 = in.in_in_update_0_write24_merged_banks_6.peek_37();
  return value_in_in_update_0_write24;
  return 0;
}

inline hw_uint<16> level_0_rd11_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd11 read pattern: { level_0_update_0[d0, d1] -> in[2 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_6.peek_1();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> level_0_rd110_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd110 read pattern: { level_0_update_0[d0, d1] -> in[24 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write24 = in.in_in_update_0_write24_merged_banks_6.peek_1();
  return value_in_in_update_0_write24;
  return 0;
}

inline hw_uint<16> level_0_rd111_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd111 read pattern: { level_0_update_0[d0, d1] -> in[25 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write25 = in.in_in_update_0_write25_merged_banks_3.peek_73();
  return value_in_in_update_0_write25;
  return 0;
}

inline hw_uint<16> level_0_rd112_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd112 read pattern: { level_0_update_0[d0, d1] -> in[25 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write25 = in.in_in_update_0_write25_merged_banks_3.peek_37();
  return value_in_in_update_0_write25;
  return 0;
}

inline hw_uint<16> level_0_rd113_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd113 read pattern: { level_0_update_0[d0, d1] -> in[25 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write25 = in.in_in_update_0_write25_merged_banks_3.peek_1();
  return value_in_in_update_0_write25;
  return 0;
}

inline hw_uint<16> level_0_rd114_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd114 read pattern: { level_0_update_0[d0, d1] -> in[26 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write26 = in.in_in_update_0_write26_merged_banks_6.peek_73();
  return value_in_in_update_0_write26;
  return 0;
}

inline hw_uint<16> level_0_rd115_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd115 read pattern: { level_0_update_0[d0, d1] -> in[26 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write26 = in.in_in_update_0_write26_merged_banks_6.peek_37();
  return value_in_in_update_0_write26;
  return 0;
}

inline hw_uint<16> level_0_rd116_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd116 read pattern: { level_0_update_0[d0, d1] -> in[26 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write26 = in.in_in_update_0_write26_merged_banks_6.peek_1();
  return value_in_in_update_0_write26;
  return 0;
}

inline hw_uint<16> level_0_rd117_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd117 read pattern: { level_0_update_0[d0, d1] -> in[26 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write26 = in.in_in_update_0_write26_merged_banks_6.peek_73();
  return value_in_in_update_0_write26;
  return 0;
}

inline hw_uint<16> level_0_rd118_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd118 read pattern: { level_0_update_0[d0, d1] -> in[26 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write26 = in.in_in_update_0_write26_merged_banks_6.peek_37();
  return value_in_in_update_0_write26;
  return 0;
}

inline hw_uint<16> level_0_rd119_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd119 read pattern: { level_0_update_0[d0, d1] -> in[26 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write26 = in.in_in_update_0_write26_merged_banks_6.peek_1();
  return value_in_in_update_0_write26;
  return 0;
}

inline hw_uint<16> level_0_rd12_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd12 read pattern: { level_0_update_0[d0, d1] -> in[3 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_3.peek_73();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> level_0_rd120_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd120 read pattern: { level_0_update_0[d0, d1] -> in[27 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write27 = in.in_in_update_0_write27_merged_banks_3.peek_73();
  return value_in_in_update_0_write27;
  return 0;
}

inline hw_uint<16> level_0_rd121_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd121 read pattern: { level_0_update_0[d0, d1] -> in[27 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write27 = in.in_in_update_0_write27_merged_banks_3.peek_37();
  return value_in_in_update_0_write27;
  return 0;
}

inline hw_uint<16> level_0_rd122_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd122 read pattern: { level_0_update_0[d0, d1] -> in[27 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write27 = in.in_in_update_0_write27_merged_banks_3.peek_1();
  return value_in_in_update_0_write27;
  return 0;
}

inline hw_uint<16> level_0_rd123_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd123 read pattern: { level_0_update_0[d0, d1] -> in[28 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write28 = in.in_in_update_0_write28_merged_banks_6.peek_73();
  return value_in_in_update_0_write28;
  return 0;
}

inline hw_uint<16> level_0_rd124_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd124 read pattern: { level_0_update_0[d0, d1] -> in[28 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write28 = in.in_in_update_0_write28_merged_banks_6.peek_37();
  return value_in_in_update_0_write28;
  return 0;
}

inline hw_uint<16> level_0_rd125_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd125 read pattern: { level_0_update_0[d0, d1] -> in[28 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write28 = in.in_in_update_0_write28_merged_banks_6.peek_1();
  return value_in_in_update_0_write28;
  return 0;
}

inline hw_uint<16> level_0_rd126_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd126 read pattern: { level_0_update_0[d0, d1] -> in[28 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write28 = in.in_in_update_0_write28_merged_banks_6.peek_73();
  return value_in_in_update_0_write28;
  return 0;
}

inline hw_uint<16> level_0_rd127_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd127 read pattern: { level_0_update_0[d0, d1] -> in[28 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write28 = in.in_in_update_0_write28_merged_banks_6.peek_37();
  return value_in_in_update_0_write28;
  return 0;
}

inline hw_uint<16> level_0_rd128_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd128 read pattern: { level_0_update_0[d0, d1] -> in[28 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write28 = in.in_in_update_0_write28_merged_banks_6.peek_1();
  return value_in_in_update_0_write28;
  return 0;
}

inline hw_uint<16> level_0_rd129_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd129 read pattern: { level_0_update_0[d0, d1] -> in[29 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write29 = in.in_in_update_0_write29_merged_banks_3.peek_73();
  return value_in_in_update_0_write29;
  return 0;
}

inline hw_uint<16> level_0_rd13_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd13 read pattern: { level_0_update_0[d0, d1] -> in[3 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_3.peek_37();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> level_0_rd130_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd130 read pattern: { level_0_update_0[d0, d1] -> in[29 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write29 = in.in_in_update_0_write29_merged_banks_3.peek_37();
  return value_in_in_update_0_write29;
  return 0;
}

inline hw_uint<16> level_0_rd131_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd131 read pattern: { level_0_update_0[d0, d1] -> in[29 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write29 = in.in_in_update_0_write29_merged_banks_3.peek_1();
  return value_in_in_update_0_write29;
  return 0;
}

inline hw_uint<16> level_0_rd132_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd132 read pattern: { level_0_update_0[d0, d1] -> in[30 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write30 = in.in_in_update_0_write30_merged_banks_6.peek_73();
  return value_in_in_update_0_write30;
  return 0;
}

inline hw_uint<16> level_0_rd133_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd133 read pattern: { level_0_update_0[d0, d1] -> in[30 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write30 = in.in_in_update_0_write30_merged_banks_6.peek_37();
  return value_in_in_update_0_write30;
  return 0;
}

inline hw_uint<16> level_0_rd134_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd134 read pattern: { level_0_update_0[d0, d1] -> in[30 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write30 = in.in_in_update_0_write30_merged_banks_6.peek_1();
  return value_in_in_update_0_write30;
  return 0;
}

inline hw_uint<16> level_0_rd135_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd135 read pattern: { level_0_update_0[d0, d1] -> in[30 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write30 = in.in_in_update_0_write30_merged_banks_6.peek_73();
  return value_in_in_update_0_write30;
  return 0;
}

inline hw_uint<16> level_0_rd136_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd136 read pattern: { level_0_update_0[d0, d1] -> in[30 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write30 = in.in_in_update_0_write30_merged_banks_6.peek_37();
  return value_in_in_update_0_write30;
  return 0;
}

inline hw_uint<16> level_0_rd137_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd137 read pattern: { level_0_update_0[d0, d1] -> in[30 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write30 = in.in_in_update_0_write30_merged_banks_6.peek_1();
  return value_in_in_update_0_write30;
  return 0;
}

inline hw_uint<16> level_0_rd138_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd138 read pattern: { level_0_update_0[d0, d1] -> in[31 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write31 = in.in_in_update_0_write31_merged_banks_3.peek_73();
  return value_in_in_update_0_write31;
  return 0;
}

inline hw_uint<16> level_0_rd139_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd139 read pattern: { level_0_update_0[d0, d1] -> in[31 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write31 = in.in_in_update_0_write31_merged_banks_3.peek_37();
  return value_in_in_update_0_write31;
  return 0;
}

inline hw_uint<16> level_0_rd14_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd14 read pattern: { level_0_update_0[d0, d1] -> in[3 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_3.peek_1();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> level_0_rd140_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd140 read pattern: { level_0_update_0[d0, d1] -> in[31 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write31 = in.in_in_update_0_write31_merged_banks_3.peek_1();
  return value_in_in_update_0_write31;
  return 0;
}

inline hw_uint<16> level_0_rd141_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd141 read pattern: { level_0_update_0[d0, d1] -> in[32 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_6.peek_72();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> level_0_rd142_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd142 read pattern: { level_0_update_0[d0, d1] -> in[32 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_6.peek_36();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> level_0_rd143_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd143 read pattern: { level_0_update_0[d0, d1] -> in[32 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_6.peek_0();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> level_0_rd15_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd15 read pattern: { level_0_update_0[d0, d1] -> in[4 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_6.peek_73();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> level_0_rd16_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd16 read pattern: { level_0_update_0[d0, d1] -> in[4 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_6.peek_37();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> level_0_rd17_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd17 read pattern: { level_0_update_0[d0, d1] -> in[4 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_6.peek_1();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> level_0_rd18_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd18 read pattern: { level_0_update_0[d0, d1] -> in[4 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_6.peek_73();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> level_0_rd19_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd19 read pattern: { level_0_update_0[d0, d1] -> in[4 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_6.peek_37();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> level_0_rd2_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd2 read pattern: { level_0_update_0[d0, d1] -> in[32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_6.peek_1();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> level_0_rd20_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd20 read pattern: { level_0_update_0[d0, d1] -> in[4 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_6.peek_1();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> level_0_rd21_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd21 read pattern: { level_0_update_0[d0, d1] -> in[5 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_3.peek_73();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> level_0_rd22_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd22 read pattern: { level_0_update_0[d0, d1] -> in[5 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_3.peek_37();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> level_0_rd23_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd23 read pattern: { level_0_update_0[d0, d1] -> in[5 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_3.peek_1();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> level_0_rd24_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd24 read pattern: { level_0_update_0[d0, d1] -> in[6 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_6.peek_73();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> level_0_rd25_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd25 read pattern: { level_0_update_0[d0, d1] -> in[6 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_6.peek_37();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> level_0_rd26_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd26 read pattern: { level_0_update_0[d0, d1] -> in[6 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_6.peek_1();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> level_0_rd27_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd27 read pattern: { level_0_update_0[d0, d1] -> in[6 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_6.peek_73();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> level_0_rd28_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd28 read pattern: { level_0_update_0[d0, d1] -> in[6 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_6.peek_37();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> level_0_rd29_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd29 read pattern: { level_0_update_0[d0, d1] -> in[6 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_6.peek_1();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> level_0_rd3_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd3 read pattern: { level_0_update_0[d0, d1] -> in[1 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_3.peek_73();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> level_0_rd30_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd30 read pattern: { level_0_update_0[d0, d1] -> in[7 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_3.peek_73();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> level_0_rd31_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd31 read pattern: { level_0_update_0[d0, d1] -> in[7 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_3.peek_37();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> level_0_rd32_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd32 read pattern: { level_0_update_0[d0, d1] -> in[7 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_3.peek_1();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> level_0_rd33_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd33 read pattern: { level_0_update_0[d0, d1] -> in[8 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_6.peek_73();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> level_0_rd34_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd34 read pattern: { level_0_update_0[d0, d1] -> in[8 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_6.peek_37();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> level_0_rd35_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd35 read pattern: { level_0_update_0[d0, d1] -> in[8 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_6.peek_1();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> level_0_rd36_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd36 read pattern: { level_0_update_0[d0, d1] -> in[8 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_6.peek_73();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> level_0_rd37_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd37 read pattern: { level_0_update_0[d0, d1] -> in[8 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_6.peek_37();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> level_0_rd38_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd38 read pattern: { level_0_update_0[d0, d1] -> in[8 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_6.peek_1();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> level_0_rd39_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd39 read pattern: { level_0_update_0[d0, d1] -> in[9 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_3.peek_73();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> level_0_rd4_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd4 read pattern: { level_0_update_0[d0, d1] -> in[1 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_3.peek_37();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> level_0_rd40_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd40 read pattern: { level_0_update_0[d0, d1] -> in[9 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_3.peek_37();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> level_0_rd41_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd41 read pattern: { level_0_update_0[d0, d1] -> in[9 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_3.peek_1();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> level_0_rd42_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd42 read pattern: { level_0_update_0[d0, d1] -> in[10 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_6.peek_73();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> level_0_rd43_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd43 read pattern: { level_0_update_0[d0, d1] -> in[10 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_6.peek_37();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> level_0_rd44_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd44 read pattern: { level_0_update_0[d0, d1] -> in[10 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_6.peek_1();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> level_0_rd45_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd45 read pattern: { level_0_update_0[d0, d1] -> in[10 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_6.peek_73();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> level_0_rd46_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd46 read pattern: { level_0_update_0[d0, d1] -> in[10 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_6.peek_37();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> level_0_rd47_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd47 read pattern: { level_0_update_0[d0, d1] -> in[10 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_6.peek_1();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> level_0_rd48_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd48 read pattern: { level_0_update_0[d0, d1] -> in[11 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_3.peek_73();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> level_0_rd49_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd49 read pattern: { level_0_update_0[d0, d1] -> in[11 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_3.peek_37();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> level_0_rd5_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd5 read pattern: { level_0_update_0[d0, d1] -> in[1 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_3.peek_1();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> level_0_rd50_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd50 read pattern: { level_0_update_0[d0, d1] -> in[11 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_3.peek_1();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> level_0_rd51_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd51 read pattern: { level_0_update_0[d0, d1] -> in[12 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_6.peek_73();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> level_0_rd52_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd52 read pattern: { level_0_update_0[d0, d1] -> in[12 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_6.peek_37();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> level_0_rd53_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd53 read pattern: { level_0_update_0[d0, d1] -> in[12 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_6.peek_1();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> level_0_rd54_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd54 read pattern: { level_0_update_0[d0, d1] -> in[12 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_6.peek_73();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> level_0_rd55_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd55 read pattern: { level_0_update_0[d0, d1] -> in[12 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_6.peek_37();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> level_0_rd56_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd56 read pattern: { level_0_update_0[d0, d1] -> in[12 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_6.peek_1();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> level_0_rd57_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd57 read pattern: { level_0_update_0[d0, d1] -> in[13 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_3.peek_73();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> level_0_rd58_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd58 read pattern: { level_0_update_0[d0, d1] -> in[13 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_3.peek_37();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> level_0_rd59_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd59 read pattern: { level_0_update_0[d0, d1] -> in[13 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_3.peek_1();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> level_0_rd6_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd6 read pattern: { level_0_update_0[d0, d1] -> in[2 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_6.peek_73();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> level_0_rd60_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd60 read pattern: { level_0_update_0[d0, d1] -> in[14 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_6.peek_73();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> level_0_rd61_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd61 read pattern: { level_0_update_0[d0, d1] -> in[14 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_6.peek_37();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> level_0_rd62_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd62 read pattern: { level_0_update_0[d0, d1] -> in[14 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_6.peek_1();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> level_0_rd63_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd63 read pattern: { level_0_update_0[d0, d1] -> in[14 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_6.peek_73();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> level_0_rd64_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd64 read pattern: { level_0_update_0[d0, d1] -> in[14 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_6.peek_37();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> level_0_rd65_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd65 read pattern: { level_0_update_0[d0, d1] -> in[14 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_6.peek_1();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> level_0_rd66_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd66 read pattern: { level_0_update_0[d0, d1] -> in[15 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_3.peek_73();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> level_0_rd67_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd67 read pattern: { level_0_update_0[d0, d1] -> in[15 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_3.peek_37();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> level_0_rd68_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd68 read pattern: { level_0_update_0[d0, d1] -> in[15 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_3.peek_1();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> level_0_rd69_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd69 read pattern: { level_0_update_0[d0, d1] -> in[16 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write16 = in.in_in_update_0_write16_merged_banks_6.peek_73();
  return value_in_in_update_0_write16;
  return 0;
}

inline hw_uint<16> level_0_rd7_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd7 read pattern: { level_0_update_0[d0, d1] -> in[2 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_6.peek_37();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> level_0_rd70_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd70 read pattern: { level_0_update_0[d0, d1] -> in[16 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write16 = in.in_in_update_0_write16_merged_banks_6.peek_37();
  return value_in_in_update_0_write16;
  return 0;
}

inline hw_uint<16> level_0_rd71_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd71 read pattern: { level_0_update_0[d0, d1] -> in[16 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write16 = in.in_in_update_0_write16_merged_banks_6.peek_1();
  return value_in_in_update_0_write16;
  return 0;
}

inline hw_uint<16> level_0_rd72_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd72 read pattern: { level_0_update_0[d0, d1] -> in[16 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write16 = in.in_in_update_0_write16_merged_banks_6.peek_73();
  return value_in_in_update_0_write16;
  return 0;
}

inline hw_uint<16> level_0_rd73_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd73 read pattern: { level_0_update_0[d0, d1] -> in[16 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write16 = in.in_in_update_0_write16_merged_banks_6.peek_37();
  return value_in_in_update_0_write16;
  return 0;
}

inline hw_uint<16> level_0_rd74_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd74 read pattern: { level_0_update_0[d0, d1] -> in[16 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write16 = in.in_in_update_0_write16_merged_banks_6.peek_1();
  return value_in_in_update_0_write16;
  return 0;
}

inline hw_uint<16> level_0_rd75_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd75 read pattern: { level_0_update_0[d0, d1] -> in[17 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write17 = in.in_in_update_0_write17_merged_banks_3.peek_73();
  return value_in_in_update_0_write17;
  return 0;
}

inline hw_uint<16> level_0_rd76_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd76 read pattern: { level_0_update_0[d0, d1] -> in[17 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write17 = in.in_in_update_0_write17_merged_banks_3.peek_37();
  return value_in_in_update_0_write17;
  return 0;
}

inline hw_uint<16> level_0_rd77_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd77 read pattern: { level_0_update_0[d0, d1] -> in[17 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write17 = in.in_in_update_0_write17_merged_banks_3.peek_1();
  return value_in_in_update_0_write17;
  return 0;
}

inline hw_uint<16> level_0_rd78_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd78 read pattern: { level_0_update_0[d0, d1] -> in[18 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write18 = in.in_in_update_0_write18_merged_banks_6.peek_73();
  return value_in_in_update_0_write18;
  return 0;
}

inline hw_uint<16> level_0_rd79_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd79 read pattern: { level_0_update_0[d0, d1] -> in[18 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write18 = in.in_in_update_0_write18_merged_banks_6.peek_37();
  return value_in_in_update_0_write18;
  return 0;
}

inline hw_uint<16> level_0_rd8_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd8 read pattern: { level_0_update_0[d0, d1] -> in[2 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_6.peek_1();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> level_0_rd80_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd80 read pattern: { level_0_update_0[d0, d1] -> in[18 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write18 = in.in_in_update_0_write18_merged_banks_6.peek_1();
  return value_in_in_update_0_write18;
  return 0;
}

inline hw_uint<16> level_0_rd81_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd81 read pattern: { level_0_update_0[d0, d1] -> in[18 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write18 = in.in_in_update_0_write18_merged_banks_6.peek_73();
  return value_in_in_update_0_write18;
  return 0;
}

inline hw_uint<16> level_0_rd82_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd82 read pattern: { level_0_update_0[d0, d1] -> in[18 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write18 = in.in_in_update_0_write18_merged_banks_6.peek_37();
  return value_in_in_update_0_write18;
  return 0;
}

inline hw_uint<16> level_0_rd83_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd83 read pattern: { level_0_update_0[d0, d1] -> in[18 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write18 = in.in_in_update_0_write18_merged_banks_6.peek_1();
  return value_in_in_update_0_write18;
  return 0;
}

inline hw_uint<16> level_0_rd84_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd84 read pattern: { level_0_update_0[d0, d1] -> in[19 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write19 = in.in_in_update_0_write19_merged_banks_3.peek_73();
  return value_in_in_update_0_write19;
  return 0;
}

inline hw_uint<16> level_0_rd85_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd85 read pattern: { level_0_update_0[d0, d1] -> in[19 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write19 = in.in_in_update_0_write19_merged_banks_3.peek_37();
  return value_in_in_update_0_write19;
  return 0;
}

inline hw_uint<16> level_0_rd86_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd86 read pattern: { level_0_update_0[d0, d1] -> in[19 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write19 = in.in_in_update_0_write19_merged_banks_3.peek_1();
  return value_in_in_update_0_write19;
  return 0;
}

inline hw_uint<16> level_0_rd87_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd87 read pattern: { level_0_update_0[d0, d1] -> in[20 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write20 = in.in_in_update_0_write20_merged_banks_6.peek_73();
  return value_in_in_update_0_write20;
  return 0;
}

inline hw_uint<16> level_0_rd88_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd88 read pattern: { level_0_update_0[d0, d1] -> in[20 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write20 = in.in_in_update_0_write20_merged_banks_6.peek_37();
  return value_in_in_update_0_write20;
  return 0;
}

inline hw_uint<16> level_0_rd89_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd89 read pattern: { level_0_update_0[d0, d1] -> in[20 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write20 = in.in_in_update_0_write20_merged_banks_6.peek_1();
  return value_in_in_update_0_write20;
  return 0;
}

inline hw_uint<16> level_0_rd9_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd9 read pattern: { level_0_update_0[d0, d1] -> in[2 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_6.peek_73();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> level_0_rd90_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd90 read pattern: { level_0_update_0[d0, d1] -> in[20 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write20 = in.in_in_update_0_write20_merged_banks_6.peek_73();
  return value_in_in_update_0_write20;
  return 0;
}

inline hw_uint<16> level_0_rd91_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd91 read pattern: { level_0_update_0[d0, d1] -> in[20 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write20 = in.in_in_update_0_write20_merged_banks_6.peek_37();
  return value_in_in_update_0_write20;
  return 0;
}

inline hw_uint<16> level_0_rd92_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd92 read pattern: { level_0_update_0[d0, d1] -> in[20 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write20 = in.in_in_update_0_write20_merged_banks_6.peek_1();
  return value_in_in_update_0_write20;
  return 0;
}

inline hw_uint<16> level_0_rd93_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd93 read pattern: { level_0_update_0[d0, d1] -> in[21 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write21 = in.in_in_update_0_write21_merged_banks_3.peek_73();
  return value_in_in_update_0_write21;
  return 0;
}

inline hw_uint<16> level_0_rd94_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd94 read pattern: { level_0_update_0[d0, d1] -> in[21 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write21 = in.in_in_update_0_write21_merged_banks_3.peek_37();
  return value_in_in_update_0_write21;
  return 0;
}

inline hw_uint<16> level_0_rd95_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd95 read pattern: { level_0_update_0[d0, d1] -> in[21 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write21 = in.in_in_update_0_write21_merged_banks_3.peek_1();
  return value_in_in_update_0_write21;
  return 0;
}

inline hw_uint<16> level_0_rd96_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd96 read pattern: { level_0_update_0[d0, d1] -> in[22 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write22 = in.in_in_update_0_write22_merged_banks_6.peek_73();
  return value_in_in_update_0_write22;
  return 0;
}

inline hw_uint<16> level_0_rd97_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd97 read pattern: { level_0_update_0[d0, d1] -> in[22 + 32d0, 1 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write22 = in.in_in_update_0_write22_merged_banks_6.peek_37();
  return value_in_in_update_0_write22;
  return 0;
}

inline hw_uint<16> level_0_rd98_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd98 read pattern: { level_0_update_0[d0, d1] -> in[22 + 32d0, 2 + 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write22 = in.in_in_update_0_write22_merged_banks_6.peek_1();
  return value_in_in_update_0_write22;
  return 0;
}

inline hw_uint<16> level_0_rd99_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_0_rd99 read pattern: { level_0_update_0[d0, d1] -> in[22 + 32d0, 2d1] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Read schedule : { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
  auto value_in_in_update_0_write22 = in.in_in_update_0_write22_merged_banks_6.peek_73();
  return value_in_in_update_0_write22;
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
//	level_0_rd36
//	level_0_rd37
//	level_0_rd38
//	level_0_rd39
//	level_0_rd40
//	level_0_rd41
//	level_0_rd42
//	level_0_rd43
//	level_0_rd44
//	level_0_rd45
//	level_0_rd46
//	level_0_rd47
//	level_0_rd48
//	level_0_rd49
//	level_0_rd50
//	level_0_rd51
//	level_0_rd52
//	level_0_rd53
//	level_0_rd54
//	level_0_rd55
//	level_0_rd56
//	level_0_rd57
//	level_0_rd58
//	level_0_rd59
//	level_0_rd60
//	level_0_rd61
//	level_0_rd62
//	level_0_rd63
//	level_0_rd64
//	level_0_rd65
//	level_0_rd66
//	level_0_rd67
//	level_0_rd68
//	level_0_rd69
//	level_0_rd70
//	level_0_rd71
//	level_0_rd72
//	level_0_rd73
//	level_0_rd74
//	level_0_rd75
//	level_0_rd76
//	level_0_rd77
//	level_0_rd78
//	level_0_rd79
//	level_0_rd80
//	level_0_rd81
//	level_0_rd82
//	level_0_rd83
//	level_0_rd84
//	level_0_rd85
//	level_0_rd86
//	level_0_rd87
//	level_0_rd88
//	level_0_rd89
//	level_0_rd90
//	level_0_rd91
//	level_0_rd92
//	level_0_rd93
//	level_0_rd94
//	level_0_rd95
//	level_0_rd96
//	level_0_rd97
//	level_0_rd98
//	level_0_rd99
//	level_0_rd100
//	level_0_rd101
//	level_0_rd102
//	level_0_rd103
//	level_0_rd104
//	level_0_rd105
//	level_0_rd106
//	level_0_rd107
//	level_0_rd108
//	level_0_rd109
//	level_0_rd110
//	level_0_rd111
//	level_0_rd112
//	level_0_rd113
//	level_0_rd114
//	level_0_rd115
//	level_0_rd116
//	level_0_rd117
//	level_0_rd118
//	level_0_rd119
//	level_0_rd120
//	level_0_rd121
//	level_0_rd122
//	level_0_rd123
//	level_0_rd124
//	level_0_rd125
//	level_0_rd126
//	level_0_rd127
//	level_0_rd128
//	level_0_rd129
//	level_0_rd130
//	level_0_rd131
//	level_0_rd132
//	level_0_rd133
//	level_0_rd134
//	level_0_rd135
//	level_0_rd136
//	level_0_rd137
//	level_0_rd138
//	level_0_rd139
//	level_0_rd140
//	level_0_rd141
//	level_0_rd142
//	level_0_rd143
inline hw_uint<2304> in_level_0_update_0_read_bundle_read(in_cache& in, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 144
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
    // level_0_rd36
    // level_0_rd37
    // level_0_rd38
    // level_0_rd39
    // level_0_rd40
    // level_0_rd41
    // level_0_rd42
    // level_0_rd43
    // level_0_rd44
    // level_0_rd45
    // level_0_rd46
    // level_0_rd47
    // level_0_rd48
    // level_0_rd49
    // level_0_rd50
    // level_0_rd51
    // level_0_rd52
    // level_0_rd53
    // level_0_rd54
    // level_0_rd55
    // level_0_rd56
    // level_0_rd57
    // level_0_rd58
    // level_0_rd59
    // level_0_rd60
    // level_0_rd61
    // level_0_rd62
    // level_0_rd63
    // level_0_rd64
    // level_0_rd65
    // level_0_rd66
    // level_0_rd67
    // level_0_rd68
    // level_0_rd69
    // level_0_rd70
    // level_0_rd71
    // level_0_rd72
    // level_0_rd73
    // level_0_rd74
    // level_0_rd75
    // level_0_rd76
    // level_0_rd77
    // level_0_rd78
    // level_0_rd79
    // level_0_rd80
    // level_0_rd81
    // level_0_rd82
    // level_0_rd83
    // level_0_rd84
    // level_0_rd85
    // level_0_rd86
    // level_0_rd87
    // level_0_rd88
    // level_0_rd89
    // level_0_rd90
    // level_0_rd91
    // level_0_rd92
    // level_0_rd93
    // level_0_rd94
    // level_0_rd95
    // level_0_rd96
    // level_0_rd97
    // level_0_rd98
    // level_0_rd99
    // level_0_rd100
    // level_0_rd101
    // level_0_rd102
    // level_0_rd103
    // level_0_rd104
    // level_0_rd105
    // level_0_rd106
    // level_0_rd107
    // level_0_rd108
    // level_0_rd109
    // level_0_rd110
    // level_0_rd111
    // level_0_rd112
    // level_0_rd113
    // level_0_rd114
    // level_0_rd115
    // level_0_rd116
    // level_0_rd117
    // level_0_rd118
    // level_0_rd119
    // level_0_rd120
    // level_0_rd121
    // level_0_rd122
    // level_0_rd123
    // level_0_rd124
    // level_0_rd125
    // level_0_rd126
    // level_0_rd127
    // level_0_rd128
    // level_0_rd129
    // level_0_rd130
    // level_0_rd131
    // level_0_rd132
    // level_0_rd133
    // level_0_rd134
    // level_0_rd135
    // level_0_rd136
    // level_0_rd137
    // level_0_rd138
    // level_0_rd139
    // level_0_rd140
    // level_0_rd141
    // level_0_rd142
    // level_0_rd143

	hw_uint<2304> result;
	hw_uint<16> level_0_rd0_res = level_0_rd0_select(in, d0, d1, dynamic_address);
	set_at<0, 2304>(result, level_0_rd0_res);
	hw_uint<16> level_0_rd1_res = level_0_rd1_select(in, d0, d1, dynamic_address);
	set_at<16, 2304>(result, level_0_rd1_res);
	hw_uint<16> level_0_rd2_res = level_0_rd2_select(in, d0, d1, dynamic_address);
	set_at<32, 2304>(result, level_0_rd2_res);
	hw_uint<16> level_0_rd3_res = level_0_rd3_select(in, d0, d1, dynamic_address);
	set_at<48, 2304>(result, level_0_rd3_res);
	hw_uint<16> level_0_rd4_res = level_0_rd4_select(in, d0, d1, dynamic_address);
	set_at<64, 2304>(result, level_0_rd4_res);
	hw_uint<16> level_0_rd5_res = level_0_rd5_select(in, d0, d1, dynamic_address);
	set_at<80, 2304>(result, level_0_rd5_res);
	hw_uint<16> level_0_rd6_res = level_0_rd6_select(in, d0, d1, dynamic_address);
	set_at<96, 2304>(result, level_0_rd6_res);
	hw_uint<16> level_0_rd7_res = level_0_rd7_select(in, d0, d1, dynamic_address);
	set_at<112, 2304>(result, level_0_rd7_res);
	hw_uint<16> level_0_rd8_res = level_0_rd8_select(in, d0, d1, dynamic_address);
	set_at<128, 2304>(result, level_0_rd8_res);
	hw_uint<16> level_0_rd9_res = level_0_rd9_select(in, d0, d1, dynamic_address);
	set_at<144, 2304>(result, level_0_rd9_res);
	hw_uint<16> level_0_rd10_res = level_0_rd10_select(in, d0, d1, dynamic_address);
	set_at<160, 2304>(result, level_0_rd10_res);
	hw_uint<16> level_0_rd11_res = level_0_rd11_select(in, d0, d1, dynamic_address);
	set_at<176, 2304>(result, level_0_rd11_res);
	hw_uint<16> level_0_rd12_res = level_0_rd12_select(in, d0, d1, dynamic_address);
	set_at<192, 2304>(result, level_0_rd12_res);
	hw_uint<16> level_0_rd13_res = level_0_rd13_select(in, d0, d1, dynamic_address);
	set_at<208, 2304>(result, level_0_rd13_res);
	hw_uint<16> level_0_rd14_res = level_0_rd14_select(in, d0, d1, dynamic_address);
	set_at<224, 2304>(result, level_0_rd14_res);
	hw_uint<16> level_0_rd15_res = level_0_rd15_select(in, d0, d1, dynamic_address);
	set_at<240, 2304>(result, level_0_rd15_res);
	hw_uint<16> level_0_rd16_res = level_0_rd16_select(in, d0, d1, dynamic_address);
	set_at<256, 2304>(result, level_0_rd16_res);
	hw_uint<16> level_0_rd17_res = level_0_rd17_select(in, d0, d1, dynamic_address);
	set_at<272, 2304>(result, level_0_rd17_res);
	hw_uint<16> level_0_rd18_res = level_0_rd18_select(in, d0, d1, dynamic_address);
	set_at<288, 2304>(result, level_0_rd18_res);
	hw_uint<16> level_0_rd19_res = level_0_rd19_select(in, d0, d1, dynamic_address);
	set_at<304, 2304>(result, level_0_rd19_res);
	hw_uint<16> level_0_rd20_res = level_0_rd20_select(in, d0, d1, dynamic_address);
	set_at<320, 2304>(result, level_0_rd20_res);
	hw_uint<16> level_0_rd21_res = level_0_rd21_select(in, d0, d1, dynamic_address);
	set_at<336, 2304>(result, level_0_rd21_res);
	hw_uint<16> level_0_rd22_res = level_0_rd22_select(in, d0, d1, dynamic_address);
	set_at<352, 2304>(result, level_0_rd22_res);
	hw_uint<16> level_0_rd23_res = level_0_rd23_select(in, d0, d1, dynamic_address);
	set_at<368, 2304>(result, level_0_rd23_res);
	hw_uint<16> level_0_rd24_res = level_0_rd24_select(in, d0, d1, dynamic_address);
	set_at<384, 2304>(result, level_0_rd24_res);
	hw_uint<16> level_0_rd25_res = level_0_rd25_select(in, d0, d1, dynamic_address);
	set_at<400, 2304>(result, level_0_rd25_res);
	hw_uint<16> level_0_rd26_res = level_0_rd26_select(in, d0, d1, dynamic_address);
	set_at<416, 2304>(result, level_0_rd26_res);
	hw_uint<16> level_0_rd27_res = level_0_rd27_select(in, d0, d1, dynamic_address);
	set_at<432, 2304>(result, level_0_rd27_res);
	hw_uint<16> level_0_rd28_res = level_0_rd28_select(in, d0, d1, dynamic_address);
	set_at<448, 2304>(result, level_0_rd28_res);
	hw_uint<16> level_0_rd29_res = level_0_rd29_select(in, d0, d1, dynamic_address);
	set_at<464, 2304>(result, level_0_rd29_res);
	hw_uint<16> level_0_rd30_res = level_0_rd30_select(in, d0, d1, dynamic_address);
	set_at<480, 2304>(result, level_0_rd30_res);
	hw_uint<16> level_0_rd31_res = level_0_rd31_select(in, d0, d1, dynamic_address);
	set_at<496, 2304>(result, level_0_rd31_res);
	hw_uint<16> level_0_rd32_res = level_0_rd32_select(in, d0, d1, dynamic_address);
	set_at<512, 2304>(result, level_0_rd32_res);
	hw_uint<16> level_0_rd33_res = level_0_rd33_select(in, d0, d1, dynamic_address);
	set_at<528, 2304>(result, level_0_rd33_res);
	hw_uint<16> level_0_rd34_res = level_0_rd34_select(in, d0, d1, dynamic_address);
	set_at<544, 2304>(result, level_0_rd34_res);
	hw_uint<16> level_0_rd35_res = level_0_rd35_select(in, d0, d1, dynamic_address);
	set_at<560, 2304>(result, level_0_rd35_res);
	hw_uint<16> level_0_rd36_res = level_0_rd36_select(in, d0, d1, dynamic_address);
	set_at<576, 2304>(result, level_0_rd36_res);
	hw_uint<16> level_0_rd37_res = level_0_rd37_select(in, d0, d1, dynamic_address);
	set_at<592, 2304>(result, level_0_rd37_res);
	hw_uint<16> level_0_rd38_res = level_0_rd38_select(in, d0, d1, dynamic_address);
	set_at<608, 2304>(result, level_0_rd38_res);
	hw_uint<16> level_0_rd39_res = level_0_rd39_select(in, d0, d1, dynamic_address);
	set_at<624, 2304>(result, level_0_rd39_res);
	hw_uint<16> level_0_rd40_res = level_0_rd40_select(in, d0, d1, dynamic_address);
	set_at<640, 2304>(result, level_0_rd40_res);
	hw_uint<16> level_0_rd41_res = level_0_rd41_select(in, d0, d1, dynamic_address);
	set_at<656, 2304>(result, level_0_rd41_res);
	hw_uint<16> level_0_rd42_res = level_0_rd42_select(in, d0, d1, dynamic_address);
	set_at<672, 2304>(result, level_0_rd42_res);
	hw_uint<16> level_0_rd43_res = level_0_rd43_select(in, d0, d1, dynamic_address);
	set_at<688, 2304>(result, level_0_rd43_res);
	hw_uint<16> level_0_rd44_res = level_0_rd44_select(in, d0, d1, dynamic_address);
	set_at<704, 2304>(result, level_0_rd44_res);
	hw_uint<16> level_0_rd45_res = level_0_rd45_select(in, d0, d1, dynamic_address);
	set_at<720, 2304>(result, level_0_rd45_res);
	hw_uint<16> level_0_rd46_res = level_0_rd46_select(in, d0, d1, dynamic_address);
	set_at<736, 2304>(result, level_0_rd46_res);
	hw_uint<16> level_0_rd47_res = level_0_rd47_select(in, d0, d1, dynamic_address);
	set_at<752, 2304>(result, level_0_rd47_res);
	hw_uint<16> level_0_rd48_res = level_0_rd48_select(in, d0, d1, dynamic_address);
	set_at<768, 2304>(result, level_0_rd48_res);
	hw_uint<16> level_0_rd49_res = level_0_rd49_select(in, d0, d1, dynamic_address);
	set_at<784, 2304>(result, level_0_rd49_res);
	hw_uint<16> level_0_rd50_res = level_0_rd50_select(in, d0, d1, dynamic_address);
	set_at<800, 2304>(result, level_0_rd50_res);
	hw_uint<16> level_0_rd51_res = level_0_rd51_select(in, d0, d1, dynamic_address);
	set_at<816, 2304>(result, level_0_rd51_res);
	hw_uint<16> level_0_rd52_res = level_0_rd52_select(in, d0, d1, dynamic_address);
	set_at<832, 2304>(result, level_0_rd52_res);
	hw_uint<16> level_0_rd53_res = level_0_rd53_select(in, d0, d1, dynamic_address);
	set_at<848, 2304>(result, level_0_rd53_res);
	hw_uint<16> level_0_rd54_res = level_0_rd54_select(in, d0, d1, dynamic_address);
	set_at<864, 2304>(result, level_0_rd54_res);
	hw_uint<16> level_0_rd55_res = level_0_rd55_select(in, d0, d1, dynamic_address);
	set_at<880, 2304>(result, level_0_rd55_res);
	hw_uint<16> level_0_rd56_res = level_0_rd56_select(in, d0, d1, dynamic_address);
	set_at<896, 2304>(result, level_0_rd56_res);
	hw_uint<16> level_0_rd57_res = level_0_rd57_select(in, d0, d1, dynamic_address);
	set_at<912, 2304>(result, level_0_rd57_res);
	hw_uint<16> level_0_rd58_res = level_0_rd58_select(in, d0, d1, dynamic_address);
	set_at<928, 2304>(result, level_0_rd58_res);
	hw_uint<16> level_0_rd59_res = level_0_rd59_select(in, d0, d1, dynamic_address);
	set_at<944, 2304>(result, level_0_rd59_res);
	hw_uint<16> level_0_rd60_res = level_0_rd60_select(in, d0, d1, dynamic_address);
	set_at<960, 2304>(result, level_0_rd60_res);
	hw_uint<16> level_0_rd61_res = level_0_rd61_select(in, d0, d1, dynamic_address);
	set_at<976, 2304>(result, level_0_rd61_res);
	hw_uint<16> level_0_rd62_res = level_0_rd62_select(in, d0, d1, dynamic_address);
	set_at<992, 2304>(result, level_0_rd62_res);
	hw_uint<16> level_0_rd63_res = level_0_rd63_select(in, d0, d1, dynamic_address);
	set_at<1008, 2304>(result, level_0_rd63_res);
	hw_uint<16> level_0_rd64_res = level_0_rd64_select(in, d0, d1, dynamic_address);
	set_at<1024, 2304>(result, level_0_rd64_res);
	hw_uint<16> level_0_rd65_res = level_0_rd65_select(in, d0, d1, dynamic_address);
	set_at<1040, 2304>(result, level_0_rd65_res);
	hw_uint<16> level_0_rd66_res = level_0_rd66_select(in, d0, d1, dynamic_address);
	set_at<1056, 2304>(result, level_0_rd66_res);
	hw_uint<16> level_0_rd67_res = level_0_rd67_select(in, d0, d1, dynamic_address);
	set_at<1072, 2304>(result, level_0_rd67_res);
	hw_uint<16> level_0_rd68_res = level_0_rd68_select(in, d0, d1, dynamic_address);
	set_at<1088, 2304>(result, level_0_rd68_res);
	hw_uint<16> level_0_rd69_res = level_0_rd69_select(in, d0, d1, dynamic_address);
	set_at<1104, 2304>(result, level_0_rd69_res);
	hw_uint<16> level_0_rd70_res = level_0_rd70_select(in, d0, d1, dynamic_address);
	set_at<1120, 2304>(result, level_0_rd70_res);
	hw_uint<16> level_0_rd71_res = level_0_rd71_select(in, d0, d1, dynamic_address);
	set_at<1136, 2304>(result, level_0_rd71_res);
	hw_uint<16> level_0_rd72_res = level_0_rd72_select(in, d0, d1, dynamic_address);
	set_at<1152, 2304>(result, level_0_rd72_res);
	hw_uint<16> level_0_rd73_res = level_0_rd73_select(in, d0, d1, dynamic_address);
	set_at<1168, 2304>(result, level_0_rd73_res);
	hw_uint<16> level_0_rd74_res = level_0_rd74_select(in, d0, d1, dynamic_address);
	set_at<1184, 2304>(result, level_0_rd74_res);
	hw_uint<16> level_0_rd75_res = level_0_rd75_select(in, d0, d1, dynamic_address);
	set_at<1200, 2304>(result, level_0_rd75_res);
	hw_uint<16> level_0_rd76_res = level_0_rd76_select(in, d0, d1, dynamic_address);
	set_at<1216, 2304>(result, level_0_rd76_res);
	hw_uint<16> level_0_rd77_res = level_0_rd77_select(in, d0, d1, dynamic_address);
	set_at<1232, 2304>(result, level_0_rd77_res);
	hw_uint<16> level_0_rd78_res = level_0_rd78_select(in, d0, d1, dynamic_address);
	set_at<1248, 2304>(result, level_0_rd78_res);
	hw_uint<16> level_0_rd79_res = level_0_rd79_select(in, d0, d1, dynamic_address);
	set_at<1264, 2304>(result, level_0_rd79_res);
	hw_uint<16> level_0_rd80_res = level_0_rd80_select(in, d0, d1, dynamic_address);
	set_at<1280, 2304>(result, level_0_rd80_res);
	hw_uint<16> level_0_rd81_res = level_0_rd81_select(in, d0, d1, dynamic_address);
	set_at<1296, 2304>(result, level_0_rd81_res);
	hw_uint<16> level_0_rd82_res = level_0_rd82_select(in, d0, d1, dynamic_address);
	set_at<1312, 2304>(result, level_0_rd82_res);
	hw_uint<16> level_0_rd83_res = level_0_rd83_select(in, d0, d1, dynamic_address);
	set_at<1328, 2304>(result, level_0_rd83_res);
	hw_uint<16> level_0_rd84_res = level_0_rd84_select(in, d0, d1, dynamic_address);
	set_at<1344, 2304>(result, level_0_rd84_res);
	hw_uint<16> level_0_rd85_res = level_0_rd85_select(in, d0, d1, dynamic_address);
	set_at<1360, 2304>(result, level_0_rd85_res);
	hw_uint<16> level_0_rd86_res = level_0_rd86_select(in, d0, d1, dynamic_address);
	set_at<1376, 2304>(result, level_0_rd86_res);
	hw_uint<16> level_0_rd87_res = level_0_rd87_select(in, d0, d1, dynamic_address);
	set_at<1392, 2304>(result, level_0_rd87_res);
	hw_uint<16> level_0_rd88_res = level_0_rd88_select(in, d0, d1, dynamic_address);
	set_at<1408, 2304>(result, level_0_rd88_res);
	hw_uint<16> level_0_rd89_res = level_0_rd89_select(in, d0, d1, dynamic_address);
	set_at<1424, 2304>(result, level_0_rd89_res);
	hw_uint<16> level_0_rd90_res = level_0_rd90_select(in, d0, d1, dynamic_address);
	set_at<1440, 2304>(result, level_0_rd90_res);
	hw_uint<16> level_0_rd91_res = level_0_rd91_select(in, d0, d1, dynamic_address);
	set_at<1456, 2304>(result, level_0_rd91_res);
	hw_uint<16> level_0_rd92_res = level_0_rd92_select(in, d0, d1, dynamic_address);
	set_at<1472, 2304>(result, level_0_rd92_res);
	hw_uint<16> level_0_rd93_res = level_0_rd93_select(in, d0, d1, dynamic_address);
	set_at<1488, 2304>(result, level_0_rd93_res);
	hw_uint<16> level_0_rd94_res = level_0_rd94_select(in, d0, d1, dynamic_address);
	set_at<1504, 2304>(result, level_0_rd94_res);
	hw_uint<16> level_0_rd95_res = level_0_rd95_select(in, d0, d1, dynamic_address);
	set_at<1520, 2304>(result, level_0_rd95_res);
	hw_uint<16> level_0_rd96_res = level_0_rd96_select(in, d0, d1, dynamic_address);
	set_at<1536, 2304>(result, level_0_rd96_res);
	hw_uint<16> level_0_rd97_res = level_0_rd97_select(in, d0, d1, dynamic_address);
	set_at<1552, 2304>(result, level_0_rd97_res);
	hw_uint<16> level_0_rd98_res = level_0_rd98_select(in, d0, d1, dynamic_address);
	set_at<1568, 2304>(result, level_0_rd98_res);
	hw_uint<16> level_0_rd99_res = level_0_rd99_select(in, d0, d1, dynamic_address);
	set_at<1584, 2304>(result, level_0_rd99_res);
	hw_uint<16> level_0_rd100_res = level_0_rd100_select(in, d0, d1, dynamic_address);
	set_at<1600, 2304>(result, level_0_rd100_res);
	hw_uint<16> level_0_rd101_res = level_0_rd101_select(in, d0, d1, dynamic_address);
	set_at<1616, 2304>(result, level_0_rd101_res);
	hw_uint<16> level_0_rd102_res = level_0_rd102_select(in, d0, d1, dynamic_address);
	set_at<1632, 2304>(result, level_0_rd102_res);
	hw_uint<16> level_0_rd103_res = level_0_rd103_select(in, d0, d1, dynamic_address);
	set_at<1648, 2304>(result, level_0_rd103_res);
	hw_uint<16> level_0_rd104_res = level_0_rd104_select(in, d0, d1, dynamic_address);
	set_at<1664, 2304>(result, level_0_rd104_res);
	hw_uint<16> level_0_rd105_res = level_0_rd105_select(in, d0, d1, dynamic_address);
	set_at<1680, 2304>(result, level_0_rd105_res);
	hw_uint<16> level_0_rd106_res = level_0_rd106_select(in, d0, d1, dynamic_address);
	set_at<1696, 2304>(result, level_0_rd106_res);
	hw_uint<16> level_0_rd107_res = level_0_rd107_select(in, d0, d1, dynamic_address);
	set_at<1712, 2304>(result, level_0_rd107_res);
	hw_uint<16> level_0_rd108_res = level_0_rd108_select(in, d0, d1, dynamic_address);
	set_at<1728, 2304>(result, level_0_rd108_res);
	hw_uint<16> level_0_rd109_res = level_0_rd109_select(in, d0, d1, dynamic_address);
	set_at<1744, 2304>(result, level_0_rd109_res);
	hw_uint<16> level_0_rd110_res = level_0_rd110_select(in, d0, d1, dynamic_address);
	set_at<1760, 2304>(result, level_0_rd110_res);
	hw_uint<16> level_0_rd111_res = level_0_rd111_select(in, d0, d1, dynamic_address);
	set_at<1776, 2304>(result, level_0_rd111_res);
	hw_uint<16> level_0_rd112_res = level_0_rd112_select(in, d0, d1, dynamic_address);
	set_at<1792, 2304>(result, level_0_rd112_res);
	hw_uint<16> level_0_rd113_res = level_0_rd113_select(in, d0, d1, dynamic_address);
	set_at<1808, 2304>(result, level_0_rd113_res);
	hw_uint<16> level_0_rd114_res = level_0_rd114_select(in, d0, d1, dynamic_address);
	set_at<1824, 2304>(result, level_0_rd114_res);
	hw_uint<16> level_0_rd115_res = level_0_rd115_select(in, d0, d1, dynamic_address);
	set_at<1840, 2304>(result, level_0_rd115_res);
	hw_uint<16> level_0_rd116_res = level_0_rd116_select(in, d0, d1, dynamic_address);
	set_at<1856, 2304>(result, level_0_rd116_res);
	hw_uint<16> level_0_rd117_res = level_0_rd117_select(in, d0, d1, dynamic_address);
	set_at<1872, 2304>(result, level_0_rd117_res);
	hw_uint<16> level_0_rd118_res = level_0_rd118_select(in, d0, d1, dynamic_address);
	set_at<1888, 2304>(result, level_0_rd118_res);
	hw_uint<16> level_0_rd119_res = level_0_rd119_select(in, d0, d1, dynamic_address);
	set_at<1904, 2304>(result, level_0_rd119_res);
	hw_uint<16> level_0_rd120_res = level_0_rd120_select(in, d0, d1, dynamic_address);
	set_at<1920, 2304>(result, level_0_rd120_res);
	hw_uint<16> level_0_rd121_res = level_0_rd121_select(in, d0, d1, dynamic_address);
	set_at<1936, 2304>(result, level_0_rd121_res);
	hw_uint<16> level_0_rd122_res = level_0_rd122_select(in, d0, d1, dynamic_address);
	set_at<1952, 2304>(result, level_0_rd122_res);
	hw_uint<16> level_0_rd123_res = level_0_rd123_select(in, d0, d1, dynamic_address);
	set_at<1968, 2304>(result, level_0_rd123_res);
	hw_uint<16> level_0_rd124_res = level_0_rd124_select(in, d0, d1, dynamic_address);
	set_at<1984, 2304>(result, level_0_rd124_res);
	hw_uint<16> level_0_rd125_res = level_0_rd125_select(in, d0, d1, dynamic_address);
	set_at<2000, 2304>(result, level_0_rd125_res);
	hw_uint<16> level_0_rd126_res = level_0_rd126_select(in, d0, d1, dynamic_address);
	set_at<2016, 2304>(result, level_0_rd126_res);
	hw_uint<16> level_0_rd127_res = level_0_rd127_select(in, d0, d1, dynamic_address);
	set_at<2032, 2304>(result, level_0_rd127_res);
	hw_uint<16> level_0_rd128_res = level_0_rd128_select(in, d0, d1, dynamic_address);
	set_at<2048, 2304>(result, level_0_rd128_res);
	hw_uint<16> level_0_rd129_res = level_0_rd129_select(in, d0, d1, dynamic_address);
	set_at<2064, 2304>(result, level_0_rd129_res);
	hw_uint<16> level_0_rd130_res = level_0_rd130_select(in, d0, d1, dynamic_address);
	set_at<2080, 2304>(result, level_0_rd130_res);
	hw_uint<16> level_0_rd131_res = level_0_rd131_select(in, d0, d1, dynamic_address);
	set_at<2096, 2304>(result, level_0_rd131_res);
	hw_uint<16> level_0_rd132_res = level_0_rd132_select(in, d0, d1, dynamic_address);
	set_at<2112, 2304>(result, level_0_rd132_res);
	hw_uint<16> level_0_rd133_res = level_0_rd133_select(in, d0, d1, dynamic_address);
	set_at<2128, 2304>(result, level_0_rd133_res);
	hw_uint<16> level_0_rd134_res = level_0_rd134_select(in, d0, d1, dynamic_address);
	set_at<2144, 2304>(result, level_0_rd134_res);
	hw_uint<16> level_0_rd135_res = level_0_rd135_select(in, d0, d1, dynamic_address);
	set_at<2160, 2304>(result, level_0_rd135_res);
	hw_uint<16> level_0_rd136_res = level_0_rd136_select(in, d0, d1, dynamic_address);
	set_at<2176, 2304>(result, level_0_rd136_res);
	hw_uint<16> level_0_rd137_res = level_0_rd137_select(in, d0, d1, dynamic_address);
	set_at<2192, 2304>(result, level_0_rd137_res);
	hw_uint<16> level_0_rd138_res = level_0_rd138_select(in, d0, d1, dynamic_address);
	set_at<2208, 2304>(result, level_0_rd138_res);
	hw_uint<16> level_0_rd139_res = level_0_rd139_select(in, d0, d1, dynamic_address);
	set_at<2224, 2304>(result, level_0_rd139_res);
	hw_uint<16> level_0_rd140_res = level_0_rd140_select(in, d0, d1, dynamic_address);
	set_at<2240, 2304>(result, level_0_rd140_res);
	hw_uint<16> level_0_rd141_res = level_0_rd141_select(in, d0, d1, dynamic_address);
	set_at<2256, 2304>(result, level_0_rd141_res);
	hw_uint<16> level_0_rd142_res = level_0_rd142_select(in, d0, d1, dynamic_address);
	set_at<2272, 2304>(result, level_0_rd142_res);
	hw_uint<16> level_0_rd143_res = level_0_rd143_select(in, d0, d1, dynamic_address);
	set_at<2288, 2304>(result, level_0_rd143_res);
	return result;
}

#include "hw_classes.h"

struct level_0_level_0_update_0_write0_merged_banks_6_cache {
	// RAM Box: {[0, 544], [0, 518]}
	// Capacity: 72
	// # of read delays: 6
  // 0, 1, 35, 36, 70, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 33> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 33> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_34() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_35() {
		return f4;
	}

	inline hw_uint<16> peek_36() {
		return f6;
	}

	inline hw_uint<16> peek_69() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_70() {
		return f8;
	}

	inline hw_uint<16> peek_71() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33 reading from capacity: 1
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
	// RAM Box: {[1, 529], [0, 518]}
	// Capacity: 72
	// # of read delays: 4
  // 0, 1, 36, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 34> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 34> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_35() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_36() {
		return f4;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_71() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_0_level_0_update_0_write10_merged_banks_6_cache {
	// RAM Box: {[10, 538], [0, 518]}
	// Capacity: 72
	// # of read delays: 4
  // 0, 1, 36, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 34> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 34> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_35() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_36() {
		return f4;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_71() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_0_level_0_update_0_write11_merged_banks_3_cache {
	// RAM Box: {[11, 539], [0, 518]}
	// Capacity: 72
	// # of read delays: 4
  // 0, 1, 36, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 34> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 34> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_35() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_36() {
		return f4;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_71() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_0_level_0_update_0_write12_merged_banks_6_cache {
	// RAM Box: {[12, 540], [0, 518]}
	// Capacity: 72
	// # of read delays: 4
  // 0, 1, 36, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 34> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 34> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_35() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_36() {
		return f4;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_71() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_0_level_0_update_0_write13_merged_banks_3_cache {
	// RAM Box: {[13, 541], [0, 518]}
	// Capacity: 72
	// # of read delays: 4
  // 0, 1, 36, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 34> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 34> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_35() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_36() {
		return f4;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_71() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_0_level_0_update_0_write14_merged_banks_6_cache {
	// RAM Box: {[14, 542], [0, 518]}
	// Capacity: 72
	// # of read delays: 4
  // 0, 1, 36, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 34> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 34> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_35() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_36() {
		return f4;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_71() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_0_level_0_update_0_write15_merged_banks_3_cache {
	// RAM Box: {[15, 543], [0, 518]}
	// Capacity: 72
	// # of read delays: 4
  // 0, 1, 36, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 34> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 34> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_35() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_36() {
		return f4;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_71() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
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
	// RAM Box: {[2, 530], [0, 518]}
	// Capacity: 72
	// # of read delays: 4
  // 0, 1, 36, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 34> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 34> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_35() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_36() {
		return f4;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_71() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
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
	// RAM Box: {[3, 531], [0, 518]}
	// Capacity: 72
	// # of read delays: 4
  // 0, 1, 36, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 34> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 34> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_35() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_36() {
		return f4;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_71() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_0_level_0_update_0_write4_merged_banks_6_cache {
	// RAM Box: {[4, 532], [0, 518]}
	// Capacity: 72
	// # of read delays: 4
  // 0, 1, 36, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 34> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 34> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_35() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_36() {
		return f4;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_71() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_0_level_0_update_0_write5_merged_banks_3_cache {
	// RAM Box: {[5, 533], [0, 518]}
	// Capacity: 72
	// # of read delays: 4
  // 0, 1, 36, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 34> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 34> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_35() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_36() {
		return f4;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_71() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_0_level_0_update_0_write6_merged_banks_6_cache {
	// RAM Box: {[6, 534], [0, 518]}
	// Capacity: 72
	// # of read delays: 4
  // 0, 1, 36, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 34> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 34> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_35() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_36() {
		return f4;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_71() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_0_level_0_update_0_write7_merged_banks_3_cache {
	// RAM Box: {[7, 535], [0, 518]}
	// Capacity: 72
	// # of read delays: 4
  // 0, 1, 36, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 34> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 34> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_35() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_36() {
		return f4;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_71() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_0_level_0_update_0_write8_merged_banks_6_cache {
	// RAM Box: {[8, 536], [0, 518]}
	// Capacity: 72
	// # of read delays: 4
  // 0, 1, 36, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 34> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 34> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_35() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_36() {
		return f4;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_71() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_0_level_0_update_0_write9_merged_banks_3_cache {
	// RAM Box: {[9, 537], [0, 518]}
	// Capacity: 72
	// # of read delays: 4
  // 0, 1, 36, 71
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 34> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 34> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_35() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_36() {
		return f4;
	}

	inline hw_uint<16> peek_70() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_71() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 34
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 34 reading from capacity: 1
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
  // # of banks: 16
  level_0_level_0_update_0_write0_merged_banks_6_cache level_0_level_0_update_0_write0_merged_banks_6;
  level_0_level_0_update_0_write1_merged_banks_3_cache level_0_level_0_update_0_write1_merged_banks_3;
  level_0_level_0_update_0_write10_merged_banks_6_cache level_0_level_0_update_0_write10_merged_banks_6;
  level_0_level_0_update_0_write11_merged_banks_3_cache level_0_level_0_update_0_write11_merged_banks_3;
  level_0_level_0_update_0_write12_merged_banks_6_cache level_0_level_0_update_0_write12_merged_banks_6;
  level_0_level_0_update_0_write13_merged_banks_3_cache level_0_level_0_update_0_write13_merged_banks_3;
  level_0_level_0_update_0_write14_merged_banks_6_cache level_0_level_0_update_0_write14_merged_banks_6;
  level_0_level_0_update_0_write15_merged_banks_3_cache level_0_level_0_update_0_write15_merged_banks_3;
  level_0_level_0_update_0_write2_merged_banks_6_cache level_0_level_0_update_0_write2_merged_banks_6;
  level_0_level_0_update_0_write3_merged_banks_3_cache level_0_level_0_update_0_write3_merged_banks_3;
  level_0_level_0_update_0_write4_merged_banks_6_cache level_0_level_0_update_0_write4_merged_banks_6;
  level_0_level_0_update_0_write5_merged_banks_3_cache level_0_level_0_update_0_write5_merged_banks_3;
  level_0_level_0_update_0_write6_merged_banks_6_cache level_0_level_0_update_0_write6_merged_banks_6;
  level_0_level_0_update_0_write7_merged_banks_3_cache level_0_level_0_update_0_write7_merged_banks_3;
  level_0_level_0_update_0_write8_merged_banks_6_cache level_0_level_0_update_0_write8_merged_banks_6;
  level_0_level_0_update_0_write9_merged_banks_3_cache level_0_level_0_update_0_write9_merged_banks_3;
};



inline void level_0_level_0_update_0_write0_write(hw_uint<16>& level_0_level_0_update_0_write0, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write0_merged_banks_6.push(level_0_level_0_update_0_write0);
}

inline void level_0_level_0_update_0_write1_write(hw_uint<16>& level_0_level_0_update_0_write1, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write1_merged_banks_3.push(level_0_level_0_update_0_write1);
}

inline void level_0_level_0_update_0_write10_write(hw_uint<16>& level_0_level_0_update_0_write10, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write10_merged_banks_6.push(level_0_level_0_update_0_write10);
}

inline void level_0_level_0_update_0_write11_write(hw_uint<16>& level_0_level_0_update_0_write11, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write11_merged_banks_3.push(level_0_level_0_update_0_write11);
}

inline void level_0_level_0_update_0_write12_write(hw_uint<16>& level_0_level_0_update_0_write12, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write12_merged_banks_6.push(level_0_level_0_update_0_write12);
}

inline void level_0_level_0_update_0_write13_write(hw_uint<16>& level_0_level_0_update_0_write13, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write13_merged_banks_3.push(level_0_level_0_update_0_write13);
}

inline void level_0_level_0_update_0_write14_write(hw_uint<16>& level_0_level_0_update_0_write14, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write14_merged_banks_6.push(level_0_level_0_update_0_write14);
}

inline void level_0_level_0_update_0_write15_write(hw_uint<16>& level_0_level_0_update_0_write15, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write15_merged_banks_3.push(level_0_level_0_update_0_write15);
}

inline void level_0_level_0_update_0_write2_write(hw_uint<16>& level_0_level_0_update_0_write2, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write2_merged_banks_6.push(level_0_level_0_update_0_write2);
}

inline void level_0_level_0_update_0_write3_write(hw_uint<16>& level_0_level_0_update_0_write3, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write3_merged_banks_3.push(level_0_level_0_update_0_write3);
}

inline void level_0_level_0_update_0_write4_write(hw_uint<16>& level_0_level_0_update_0_write4, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write4_merged_banks_6.push(level_0_level_0_update_0_write4);
}

inline void level_0_level_0_update_0_write5_write(hw_uint<16>& level_0_level_0_update_0_write5, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write5_merged_banks_3.push(level_0_level_0_update_0_write5);
}

inline void level_0_level_0_update_0_write6_write(hw_uint<16>& level_0_level_0_update_0_write6, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write6_merged_banks_6.push(level_0_level_0_update_0_write6);
}

inline void level_0_level_0_update_0_write7_write(hw_uint<16>& level_0_level_0_update_0_write7, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write7_merged_banks_3.push(level_0_level_0_update_0_write7);
}

inline void level_0_level_0_update_0_write8_write(hw_uint<16>& level_0_level_0_update_0_write8, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write8_merged_banks_6.push(level_0_level_0_update_0_write8);
}

inline void level_0_level_0_update_0_write9_write(hw_uint<16>& level_0_level_0_update_0_write9, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  level_0.level_0_level_0_update_0_write9_merged_banks_3.push(level_0_level_0_update_0_write9);
}

inline hw_uint<16> level_1_rd0_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd0 read pattern: { level_1_update_0[d0, d1] -> level_0[16d0, 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write0 = level_0.level_0_level_0_update_0_write0_merged_banks_6.peek_71();
  return value_level_0_level_0_update_0_write0;
  return 0;
}

inline hw_uint<16> level_1_rd1_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd1 read pattern: { level_1_update_0[d0, d1] -> level_0[16d0, 1 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write0 = level_0.level_0_level_0_update_0_write0_merged_banks_6.peek_36();
  return value_level_0_level_0_update_0_write0;
  return 0;
}

inline hw_uint<16> level_1_rd10_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd10 read pattern: { level_1_update_0[d0, d1] -> level_0[2 + 16d0, 1 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write2 = level_0.level_0_level_0_update_0_write2_merged_banks_6.peek_36();
  return value_level_0_level_0_update_0_write2;
  return 0;
}

inline hw_uint<16> level_1_rd11_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd11 read pattern: { level_1_update_0[d0, d1] -> level_0[2 + 16d0, 2 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write2 = level_0.level_0_level_0_update_0_write2_merged_banks_6.peek_1();
  return value_level_0_level_0_update_0_write2;
  return 0;
}

inline hw_uint<16> level_1_rd12_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd12 read pattern: { level_1_update_0[d0, d1] -> level_0[3 + 16d0, 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write3 = level_0.level_0_level_0_update_0_write3_merged_banks_3.peek_71();
  return value_level_0_level_0_update_0_write3;
  return 0;
}

inline hw_uint<16> level_1_rd13_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd13 read pattern: { level_1_update_0[d0, d1] -> level_0[3 + 16d0, 1 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write3 = level_0.level_0_level_0_update_0_write3_merged_banks_3.peek_36();
  return value_level_0_level_0_update_0_write3;
  return 0;
}

inline hw_uint<16> level_1_rd14_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd14 read pattern: { level_1_update_0[d0, d1] -> level_0[3 + 16d0, 2 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write3 = level_0.level_0_level_0_update_0_write3_merged_banks_3.peek_1();
  return value_level_0_level_0_update_0_write3;
  return 0;
}

inline hw_uint<16> level_1_rd15_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd15 read pattern: { level_1_update_0[d0, d1] -> level_0[4 + 16d0, 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write4 = level_0.level_0_level_0_update_0_write4_merged_banks_6.peek_71();
  return value_level_0_level_0_update_0_write4;
  return 0;
}

inline hw_uint<16> level_1_rd16_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd16 read pattern: { level_1_update_0[d0, d1] -> level_0[4 + 16d0, 1 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write4 = level_0.level_0_level_0_update_0_write4_merged_banks_6.peek_36();
  return value_level_0_level_0_update_0_write4;
  return 0;
}

inline hw_uint<16> level_1_rd17_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd17 read pattern: { level_1_update_0[d0, d1] -> level_0[4 + 16d0, 2 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write4 = level_0.level_0_level_0_update_0_write4_merged_banks_6.peek_1();
  return value_level_0_level_0_update_0_write4;
  return 0;
}

inline hw_uint<16> level_1_rd18_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd18 read pattern: { level_1_update_0[d0, d1] -> level_0[4 + 16d0, 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write4 = level_0.level_0_level_0_update_0_write4_merged_banks_6.peek_71();
  return value_level_0_level_0_update_0_write4;
  return 0;
}

inline hw_uint<16> level_1_rd19_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd19 read pattern: { level_1_update_0[d0, d1] -> level_0[4 + 16d0, 1 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write4 = level_0.level_0_level_0_update_0_write4_merged_banks_6.peek_36();
  return value_level_0_level_0_update_0_write4;
  return 0;
}

inline hw_uint<16> level_1_rd2_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd2 read pattern: { level_1_update_0[d0, d1] -> level_0[16d0, 2 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write0 = level_0.level_0_level_0_update_0_write0_merged_banks_6.peek_1();
  return value_level_0_level_0_update_0_write0;
  return 0;
}

inline hw_uint<16> level_1_rd20_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd20 read pattern: { level_1_update_0[d0, d1] -> level_0[4 + 16d0, 2 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write4 = level_0.level_0_level_0_update_0_write4_merged_banks_6.peek_1();
  return value_level_0_level_0_update_0_write4;
  return 0;
}

inline hw_uint<16> level_1_rd21_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd21 read pattern: { level_1_update_0[d0, d1] -> level_0[5 + 16d0, 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write5 = level_0.level_0_level_0_update_0_write5_merged_banks_3.peek_71();
  return value_level_0_level_0_update_0_write5;
  return 0;
}

inline hw_uint<16> level_1_rd22_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd22 read pattern: { level_1_update_0[d0, d1] -> level_0[5 + 16d0, 1 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write5 = level_0.level_0_level_0_update_0_write5_merged_banks_3.peek_36();
  return value_level_0_level_0_update_0_write5;
  return 0;
}

inline hw_uint<16> level_1_rd23_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd23 read pattern: { level_1_update_0[d0, d1] -> level_0[5 + 16d0, 2 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write5 = level_0.level_0_level_0_update_0_write5_merged_banks_3.peek_1();
  return value_level_0_level_0_update_0_write5;
  return 0;
}

inline hw_uint<16> level_1_rd24_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd24 read pattern: { level_1_update_0[d0, d1] -> level_0[6 + 16d0, 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write6 = level_0.level_0_level_0_update_0_write6_merged_banks_6.peek_71();
  return value_level_0_level_0_update_0_write6;
  return 0;
}

inline hw_uint<16> level_1_rd25_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd25 read pattern: { level_1_update_0[d0, d1] -> level_0[6 + 16d0, 1 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write6 = level_0.level_0_level_0_update_0_write6_merged_banks_6.peek_36();
  return value_level_0_level_0_update_0_write6;
  return 0;
}

inline hw_uint<16> level_1_rd26_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd26 read pattern: { level_1_update_0[d0, d1] -> level_0[6 + 16d0, 2 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write6 = level_0.level_0_level_0_update_0_write6_merged_banks_6.peek_1();
  return value_level_0_level_0_update_0_write6;
  return 0;
}

inline hw_uint<16> level_1_rd27_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd27 read pattern: { level_1_update_0[d0, d1] -> level_0[6 + 16d0, 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write6 = level_0.level_0_level_0_update_0_write6_merged_banks_6.peek_71();
  return value_level_0_level_0_update_0_write6;
  return 0;
}

inline hw_uint<16> level_1_rd28_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd28 read pattern: { level_1_update_0[d0, d1] -> level_0[6 + 16d0, 1 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write6 = level_0.level_0_level_0_update_0_write6_merged_banks_6.peek_36();
  return value_level_0_level_0_update_0_write6;
  return 0;
}

inline hw_uint<16> level_1_rd29_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd29 read pattern: { level_1_update_0[d0, d1] -> level_0[6 + 16d0, 2 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write6 = level_0.level_0_level_0_update_0_write6_merged_banks_6.peek_1();
  return value_level_0_level_0_update_0_write6;
  return 0;
}

inline hw_uint<16> level_1_rd3_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd3 read pattern: { level_1_update_0[d0, d1] -> level_0[1 + 16d0, 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write1 = level_0.level_0_level_0_update_0_write1_merged_banks_3.peek_71();
  return value_level_0_level_0_update_0_write1;
  return 0;
}

inline hw_uint<16> level_1_rd30_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd30 read pattern: { level_1_update_0[d0, d1] -> level_0[7 + 16d0, 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write7 = level_0.level_0_level_0_update_0_write7_merged_banks_3.peek_71();
  return value_level_0_level_0_update_0_write7;
  return 0;
}

inline hw_uint<16> level_1_rd31_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd31 read pattern: { level_1_update_0[d0, d1] -> level_0[7 + 16d0, 1 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write7 = level_0.level_0_level_0_update_0_write7_merged_banks_3.peek_36();
  return value_level_0_level_0_update_0_write7;
  return 0;
}

inline hw_uint<16> level_1_rd32_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd32 read pattern: { level_1_update_0[d0, d1] -> level_0[7 + 16d0, 2 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write7 = level_0.level_0_level_0_update_0_write7_merged_banks_3.peek_1();
  return value_level_0_level_0_update_0_write7;
  return 0;
}

inline hw_uint<16> level_1_rd33_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd33 read pattern: { level_1_update_0[d0, d1] -> level_0[8 + 16d0, 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write8 = level_0.level_0_level_0_update_0_write8_merged_banks_6.peek_71();
  return value_level_0_level_0_update_0_write8;
  return 0;
}

inline hw_uint<16> level_1_rd34_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd34 read pattern: { level_1_update_0[d0, d1] -> level_0[8 + 16d0, 1 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write8 = level_0.level_0_level_0_update_0_write8_merged_banks_6.peek_36();
  return value_level_0_level_0_update_0_write8;
  return 0;
}

inline hw_uint<16> level_1_rd35_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd35 read pattern: { level_1_update_0[d0, d1] -> level_0[8 + 16d0, 2 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write8 = level_0.level_0_level_0_update_0_write8_merged_banks_6.peek_1();
  return value_level_0_level_0_update_0_write8;
  return 0;
}

inline hw_uint<16> level_1_rd36_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd36 read pattern: { level_1_update_0[d0, d1] -> level_0[8 + 16d0, 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write8 = level_0.level_0_level_0_update_0_write8_merged_banks_6.peek_71();
  return value_level_0_level_0_update_0_write8;
  return 0;
}

inline hw_uint<16> level_1_rd37_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd37 read pattern: { level_1_update_0[d0, d1] -> level_0[8 + 16d0, 1 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write8 = level_0.level_0_level_0_update_0_write8_merged_banks_6.peek_36();
  return value_level_0_level_0_update_0_write8;
  return 0;
}

inline hw_uint<16> level_1_rd38_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd38 read pattern: { level_1_update_0[d0, d1] -> level_0[8 + 16d0, 2 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write8 = level_0.level_0_level_0_update_0_write8_merged_banks_6.peek_1();
  return value_level_0_level_0_update_0_write8;
  return 0;
}

inline hw_uint<16> level_1_rd39_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd39 read pattern: { level_1_update_0[d0, d1] -> level_0[9 + 16d0, 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write9 = level_0.level_0_level_0_update_0_write9_merged_banks_3.peek_71();
  return value_level_0_level_0_update_0_write9;
  return 0;
}

inline hw_uint<16> level_1_rd4_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd4 read pattern: { level_1_update_0[d0, d1] -> level_0[1 + 16d0, 1 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write1 = level_0.level_0_level_0_update_0_write1_merged_banks_3.peek_36();
  return value_level_0_level_0_update_0_write1;
  return 0;
}

inline hw_uint<16> level_1_rd40_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd40 read pattern: { level_1_update_0[d0, d1] -> level_0[9 + 16d0, 1 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write9 = level_0.level_0_level_0_update_0_write9_merged_banks_3.peek_36();
  return value_level_0_level_0_update_0_write9;
  return 0;
}

inline hw_uint<16> level_1_rd41_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd41 read pattern: { level_1_update_0[d0, d1] -> level_0[9 + 16d0, 2 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write9 = level_0.level_0_level_0_update_0_write9_merged_banks_3.peek_1();
  return value_level_0_level_0_update_0_write9;
  return 0;
}

inline hw_uint<16> level_1_rd42_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd42 read pattern: { level_1_update_0[d0, d1] -> level_0[10 + 16d0, 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write10 = level_0.level_0_level_0_update_0_write10_merged_banks_6.peek_71();
  return value_level_0_level_0_update_0_write10;
  return 0;
}

inline hw_uint<16> level_1_rd43_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd43 read pattern: { level_1_update_0[d0, d1] -> level_0[10 + 16d0, 1 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write10 = level_0.level_0_level_0_update_0_write10_merged_banks_6.peek_36();
  return value_level_0_level_0_update_0_write10;
  return 0;
}

inline hw_uint<16> level_1_rd44_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd44 read pattern: { level_1_update_0[d0, d1] -> level_0[10 + 16d0, 2 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write10 = level_0.level_0_level_0_update_0_write10_merged_banks_6.peek_1();
  return value_level_0_level_0_update_0_write10;
  return 0;
}

inline hw_uint<16> level_1_rd45_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd45 read pattern: { level_1_update_0[d0, d1] -> level_0[10 + 16d0, 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write10 = level_0.level_0_level_0_update_0_write10_merged_banks_6.peek_71();
  return value_level_0_level_0_update_0_write10;
  return 0;
}

inline hw_uint<16> level_1_rd46_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd46 read pattern: { level_1_update_0[d0, d1] -> level_0[10 + 16d0, 1 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write10 = level_0.level_0_level_0_update_0_write10_merged_banks_6.peek_36();
  return value_level_0_level_0_update_0_write10;
  return 0;
}

inline hw_uint<16> level_1_rd47_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd47 read pattern: { level_1_update_0[d0, d1] -> level_0[10 + 16d0, 2 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write10 = level_0.level_0_level_0_update_0_write10_merged_banks_6.peek_1();
  return value_level_0_level_0_update_0_write10;
  return 0;
}

inline hw_uint<16> level_1_rd48_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd48 read pattern: { level_1_update_0[d0, d1] -> level_0[11 + 16d0, 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write11 = level_0.level_0_level_0_update_0_write11_merged_banks_3.peek_71();
  return value_level_0_level_0_update_0_write11;
  return 0;
}

inline hw_uint<16> level_1_rd49_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd49 read pattern: { level_1_update_0[d0, d1] -> level_0[11 + 16d0, 1 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write11 = level_0.level_0_level_0_update_0_write11_merged_banks_3.peek_36();
  return value_level_0_level_0_update_0_write11;
  return 0;
}

inline hw_uint<16> level_1_rd5_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd5 read pattern: { level_1_update_0[d0, d1] -> level_0[1 + 16d0, 2 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write1 = level_0.level_0_level_0_update_0_write1_merged_banks_3.peek_1();
  return value_level_0_level_0_update_0_write1;
  return 0;
}

inline hw_uint<16> level_1_rd50_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd50 read pattern: { level_1_update_0[d0, d1] -> level_0[11 + 16d0, 2 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write11 = level_0.level_0_level_0_update_0_write11_merged_banks_3.peek_1();
  return value_level_0_level_0_update_0_write11;
  return 0;
}

inline hw_uint<16> level_1_rd51_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd51 read pattern: { level_1_update_0[d0, d1] -> level_0[12 + 16d0, 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write12 = level_0.level_0_level_0_update_0_write12_merged_banks_6.peek_71();
  return value_level_0_level_0_update_0_write12;
  return 0;
}

inline hw_uint<16> level_1_rd52_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd52 read pattern: { level_1_update_0[d0, d1] -> level_0[12 + 16d0, 1 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write12 = level_0.level_0_level_0_update_0_write12_merged_banks_6.peek_36();
  return value_level_0_level_0_update_0_write12;
  return 0;
}

inline hw_uint<16> level_1_rd53_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd53 read pattern: { level_1_update_0[d0, d1] -> level_0[12 + 16d0, 2 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write12 = level_0.level_0_level_0_update_0_write12_merged_banks_6.peek_1();
  return value_level_0_level_0_update_0_write12;
  return 0;
}

inline hw_uint<16> level_1_rd54_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd54 read pattern: { level_1_update_0[d0, d1] -> level_0[12 + 16d0, 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write12 = level_0.level_0_level_0_update_0_write12_merged_banks_6.peek_71();
  return value_level_0_level_0_update_0_write12;
  return 0;
}

inline hw_uint<16> level_1_rd55_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd55 read pattern: { level_1_update_0[d0, d1] -> level_0[12 + 16d0, 1 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write12 = level_0.level_0_level_0_update_0_write12_merged_banks_6.peek_36();
  return value_level_0_level_0_update_0_write12;
  return 0;
}

inline hw_uint<16> level_1_rd56_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd56 read pattern: { level_1_update_0[d0, d1] -> level_0[12 + 16d0, 2 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write12 = level_0.level_0_level_0_update_0_write12_merged_banks_6.peek_1();
  return value_level_0_level_0_update_0_write12;
  return 0;
}

inline hw_uint<16> level_1_rd57_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd57 read pattern: { level_1_update_0[d0, d1] -> level_0[13 + 16d0, 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write13 = level_0.level_0_level_0_update_0_write13_merged_banks_3.peek_71();
  return value_level_0_level_0_update_0_write13;
  return 0;
}

inline hw_uint<16> level_1_rd58_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd58 read pattern: { level_1_update_0[d0, d1] -> level_0[13 + 16d0, 1 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write13 = level_0.level_0_level_0_update_0_write13_merged_banks_3.peek_36();
  return value_level_0_level_0_update_0_write13;
  return 0;
}

inline hw_uint<16> level_1_rd59_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd59 read pattern: { level_1_update_0[d0, d1] -> level_0[13 + 16d0, 2 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write13 = level_0.level_0_level_0_update_0_write13_merged_banks_3.peek_1();
  return value_level_0_level_0_update_0_write13;
  return 0;
}

inline hw_uint<16> level_1_rd6_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd6 read pattern: { level_1_update_0[d0, d1] -> level_0[2 + 16d0, 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write2 = level_0.level_0_level_0_update_0_write2_merged_banks_6.peek_71();
  return value_level_0_level_0_update_0_write2;
  return 0;
}

inline hw_uint<16> level_1_rd60_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd60 read pattern: { level_1_update_0[d0, d1] -> level_0[14 + 16d0, 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write14 = level_0.level_0_level_0_update_0_write14_merged_banks_6.peek_71();
  return value_level_0_level_0_update_0_write14;
  return 0;
}

inline hw_uint<16> level_1_rd61_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd61 read pattern: { level_1_update_0[d0, d1] -> level_0[14 + 16d0, 1 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write14 = level_0.level_0_level_0_update_0_write14_merged_banks_6.peek_36();
  return value_level_0_level_0_update_0_write14;
  return 0;
}

inline hw_uint<16> level_1_rd62_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd62 read pattern: { level_1_update_0[d0, d1] -> level_0[14 + 16d0, 2 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write14 = level_0.level_0_level_0_update_0_write14_merged_banks_6.peek_1();
  return value_level_0_level_0_update_0_write14;
  return 0;
}

inline hw_uint<16> level_1_rd63_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd63 read pattern: { level_1_update_0[d0, d1] -> level_0[14 + 16d0, 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write14 = level_0.level_0_level_0_update_0_write14_merged_banks_6.peek_71();
  return value_level_0_level_0_update_0_write14;
  return 0;
}

inline hw_uint<16> level_1_rd64_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd64 read pattern: { level_1_update_0[d0, d1] -> level_0[14 + 16d0, 1 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write14 = level_0.level_0_level_0_update_0_write14_merged_banks_6.peek_36();
  return value_level_0_level_0_update_0_write14;
  return 0;
}

inline hw_uint<16> level_1_rd65_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd65 read pattern: { level_1_update_0[d0, d1] -> level_0[14 + 16d0, 2 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write14 = level_0.level_0_level_0_update_0_write14_merged_banks_6.peek_1();
  return value_level_0_level_0_update_0_write14;
  return 0;
}

inline hw_uint<16> level_1_rd66_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd66 read pattern: { level_1_update_0[d0, d1] -> level_0[15 + 16d0, 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write15 = level_0.level_0_level_0_update_0_write15_merged_banks_3.peek_71();
  return value_level_0_level_0_update_0_write15;
  return 0;
}

inline hw_uint<16> level_1_rd67_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd67 read pattern: { level_1_update_0[d0, d1] -> level_0[15 + 16d0, 1 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write15 = level_0.level_0_level_0_update_0_write15_merged_banks_3.peek_36();
  return value_level_0_level_0_update_0_write15;
  return 0;
}

inline hw_uint<16> level_1_rd68_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd68 read pattern: { level_1_update_0[d0, d1] -> level_0[15 + 16d0, 2 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write15 = level_0.level_0_level_0_update_0_write15_merged_banks_3.peek_1();
  return value_level_0_level_0_update_0_write15;
  return 0;
}

inline hw_uint<16> level_1_rd69_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd69 read pattern: { level_1_update_0[d0, d1] -> level_0[16 + 16d0, 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write0 = level_0.level_0_level_0_update_0_write0_merged_banks_6.peek_70();
  return value_level_0_level_0_update_0_write0;
  return 0;
}

inline hw_uint<16> level_1_rd7_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd7 read pattern: { level_1_update_0[d0, d1] -> level_0[2 + 16d0, 1 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write2 = level_0.level_0_level_0_update_0_write2_merged_banks_6.peek_36();
  return value_level_0_level_0_update_0_write2;
  return 0;
}

inline hw_uint<16> level_1_rd70_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd70 read pattern: { level_1_update_0[d0, d1] -> level_0[16 + 16d0, 1 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write0 = level_0.level_0_level_0_update_0_write0_merged_banks_6.peek_35();
  return value_level_0_level_0_update_0_write0;
  return 0;
}

inline hw_uint<16> level_1_rd71_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd71 read pattern: { level_1_update_0[d0, d1] -> level_0[16 + 16d0, 2 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write0 = level_0.level_0_level_0_update_0_write0_merged_banks_6.peek_0();
  return value_level_0_level_0_update_0_write0;
  return 0;
}

inline hw_uint<16> level_1_rd8_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd8 read pattern: { level_1_update_0[d0, d1] -> level_0[2 + 16d0, 2 + 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write2 = level_0.level_0_level_0_update_0_write2_merged_banks_6.peek_1();
  return value_level_0_level_0_update_0_write2;
  return 0;
}

inline hw_uint<16> level_1_rd9_select(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_1_rd9 read pattern: { level_1_update_0[d0, d1] -> level_0[2 + 16d0, 2d1] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Read schedule : { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  // Write schedule: { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
  auto value_level_0_level_0_update_0_write2 = level_0.level_0_level_0_update_0_write2_merged_banks_6.peek_71();
  return value_level_0_level_0_update_0_write2;
  return 0;
}

// # of bundles = 2
// level_0_update_0_write
//	level_0_level_0_update_0_write0
//	level_0_level_0_update_0_write1
//	level_0_level_0_update_0_write2
//	level_0_level_0_update_0_write3
//	level_0_level_0_update_0_write4
//	level_0_level_0_update_0_write5
//	level_0_level_0_update_0_write6
//	level_0_level_0_update_0_write7
//	level_0_level_0_update_0_write8
//	level_0_level_0_update_0_write9
//	level_0_level_0_update_0_write10
//	level_0_level_0_update_0_write11
//	level_0_level_0_update_0_write12
//	level_0_level_0_update_0_write13
//	level_0_level_0_update_0_write14
//	level_0_level_0_update_0_write15
inline void level_0_level_0_update_0_write_bundle_write(hw_uint<256>& level_0_update_0_write, level_0_cache& level_0, int d0, int d1, int dynamic_address) {
	hw_uint<16> level_0_level_0_update_0_write0_res = level_0_update_0_write.extract<0, 15>();
	level_0_level_0_update_0_write0_write(level_0_level_0_update_0_write0_res, level_0, d0, d1, dynamic_address);
	hw_uint<16> level_0_level_0_update_0_write1_res = level_0_update_0_write.extract<16, 31>();
	level_0_level_0_update_0_write1_write(level_0_level_0_update_0_write1_res, level_0, d0, d1, dynamic_address);
	hw_uint<16> level_0_level_0_update_0_write2_res = level_0_update_0_write.extract<32, 47>();
	level_0_level_0_update_0_write2_write(level_0_level_0_update_0_write2_res, level_0, d0, d1, dynamic_address);
	hw_uint<16> level_0_level_0_update_0_write3_res = level_0_update_0_write.extract<48, 63>();
	level_0_level_0_update_0_write3_write(level_0_level_0_update_0_write3_res, level_0, d0, d1, dynamic_address);
	hw_uint<16> level_0_level_0_update_0_write4_res = level_0_update_0_write.extract<64, 79>();
	level_0_level_0_update_0_write4_write(level_0_level_0_update_0_write4_res, level_0, d0, d1, dynamic_address);
	hw_uint<16> level_0_level_0_update_0_write5_res = level_0_update_0_write.extract<80, 95>();
	level_0_level_0_update_0_write5_write(level_0_level_0_update_0_write5_res, level_0, d0, d1, dynamic_address);
	hw_uint<16> level_0_level_0_update_0_write6_res = level_0_update_0_write.extract<96, 111>();
	level_0_level_0_update_0_write6_write(level_0_level_0_update_0_write6_res, level_0, d0, d1, dynamic_address);
	hw_uint<16> level_0_level_0_update_0_write7_res = level_0_update_0_write.extract<112, 127>();
	level_0_level_0_update_0_write7_write(level_0_level_0_update_0_write7_res, level_0, d0, d1, dynamic_address);
	hw_uint<16> level_0_level_0_update_0_write8_res = level_0_update_0_write.extract<128, 143>();
	level_0_level_0_update_0_write8_write(level_0_level_0_update_0_write8_res, level_0, d0, d1, dynamic_address);
	hw_uint<16> level_0_level_0_update_0_write9_res = level_0_update_0_write.extract<144, 159>();
	level_0_level_0_update_0_write9_write(level_0_level_0_update_0_write9_res, level_0, d0, d1, dynamic_address);
	hw_uint<16> level_0_level_0_update_0_write10_res = level_0_update_0_write.extract<160, 175>();
	level_0_level_0_update_0_write10_write(level_0_level_0_update_0_write10_res, level_0, d0, d1, dynamic_address);
	hw_uint<16> level_0_level_0_update_0_write11_res = level_0_update_0_write.extract<176, 191>();
	level_0_level_0_update_0_write11_write(level_0_level_0_update_0_write11_res, level_0, d0, d1, dynamic_address);
	hw_uint<16> level_0_level_0_update_0_write12_res = level_0_update_0_write.extract<192, 207>();
	level_0_level_0_update_0_write12_write(level_0_level_0_update_0_write12_res, level_0, d0, d1, dynamic_address);
	hw_uint<16> level_0_level_0_update_0_write13_res = level_0_update_0_write.extract<208, 223>();
	level_0_level_0_update_0_write13_write(level_0_level_0_update_0_write13_res, level_0, d0, d1, dynamic_address);
	hw_uint<16> level_0_level_0_update_0_write14_res = level_0_update_0_write.extract<224, 239>();
	level_0_level_0_update_0_write14_write(level_0_level_0_update_0_write14_res, level_0, d0, d1, dynamic_address);
	hw_uint<16> level_0_level_0_update_0_write15_res = level_0_update_0_write.extract<240, 255>();
	level_0_level_0_update_0_write15_write(level_0_level_0_update_0_write15_res, level_0, d0, d1, dynamic_address);
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
//	level_1_rd18
//	level_1_rd19
//	level_1_rd20
//	level_1_rd21
//	level_1_rd22
//	level_1_rd23
//	level_1_rd24
//	level_1_rd25
//	level_1_rd26
//	level_1_rd27
//	level_1_rd28
//	level_1_rd29
//	level_1_rd30
//	level_1_rd31
//	level_1_rd32
//	level_1_rd33
//	level_1_rd34
//	level_1_rd35
//	level_1_rd36
//	level_1_rd37
//	level_1_rd38
//	level_1_rd39
//	level_1_rd40
//	level_1_rd41
//	level_1_rd42
//	level_1_rd43
//	level_1_rd44
//	level_1_rd45
//	level_1_rd46
//	level_1_rd47
//	level_1_rd48
//	level_1_rd49
//	level_1_rd50
//	level_1_rd51
//	level_1_rd52
//	level_1_rd53
//	level_1_rd54
//	level_1_rd55
//	level_1_rd56
//	level_1_rd57
//	level_1_rd58
//	level_1_rd59
//	level_1_rd60
//	level_1_rd61
//	level_1_rd62
//	level_1_rd63
//	level_1_rd64
//	level_1_rd65
//	level_1_rd66
//	level_1_rd67
//	level_1_rd68
//	level_1_rd69
//	level_1_rd70
//	level_1_rd71
inline hw_uint<1152> level_0_level_1_update_0_read_bundle_read(level_0_cache& level_0, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 72
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
    // level_1_rd18
    // level_1_rd19
    // level_1_rd20
    // level_1_rd21
    // level_1_rd22
    // level_1_rd23
    // level_1_rd24
    // level_1_rd25
    // level_1_rd26
    // level_1_rd27
    // level_1_rd28
    // level_1_rd29
    // level_1_rd30
    // level_1_rd31
    // level_1_rd32
    // level_1_rd33
    // level_1_rd34
    // level_1_rd35
    // level_1_rd36
    // level_1_rd37
    // level_1_rd38
    // level_1_rd39
    // level_1_rd40
    // level_1_rd41
    // level_1_rd42
    // level_1_rd43
    // level_1_rd44
    // level_1_rd45
    // level_1_rd46
    // level_1_rd47
    // level_1_rd48
    // level_1_rd49
    // level_1_rd50
    // level_1_rd51
    // level_1_rd52
    // level_1_rd53
    // level_1_rd54
    // level_1_rd55
    // level_1_rd56
    // level_1_rd57
    // level_1_rd58
    // level_1_rd59
    // level_1_rd60
    // level_1_rd61
    // level_1_rd62
    // level_1_rd63
    // level_1_rd64
    // level_1_rd65
    // level_1_rd66
    // level_1_rd67
    // level_1_rd68
    // level_1_rd69
    // level_1_rd70
    // level_1_rd71

	hw_uint<1152> result;
	hw_uint<16> level_1_rd0_res = level_1_rd0_select(level_0, d0, d1, dynamic_address);
	set_at<0, 1152>(result, level_1_rd0_res);
	hw_uint<16> level_1_rd1_res = level_1_rd1_select(level_0, d0, d1, dynamic_address);
	set_at<16, 1152>(result, level_1_rd1_res);
	hw_uint<16> level_1_rd2_res = level_1_rd2_select(level_0, d0, d1, dynamic_address);
	set_at<32, 1152>(result, level_1_rd2_res);
	hw_uint<16> level_1_rd3_res = level_1_rd3_select(level_0, d0, d1, dynamic_address);
	set_at<48, 1152>(result, level_1_rd3_res);
	hw_uint<16> level_1_rd4_res = level_1_rd4_select(level_0, d0, d1, dynamic_address);
	set_at<64, 1152>(result, level_1_rd4_res);
	hw_uint<16> level_1_rd5_res = level_1_rd5_select(level_0, d0, d1, dynamic_address);
	set_at<80, 1152>(result, level_1_rd5_res);
	hw_uint<16> level_1_rd6_res = level_1_rd6_select(level_0, d0, d1, dynamic_address);
	set_at<96, 1152>(result, level_1_rd6_res);
	hw_uint<16> level_1_rd7_res = level_1_rd7_select(level_0, d0, d1, dynamic_address);
	set_at<112, 1152>(result, level_1_rd7_res);
	hw_uint<16> level_1_rd8_res = level_1_rd8_select(level_0, d0, d1, dynamic_address);
	set_at<128, 1152>(result, level_1_rd8_res);
	hw_uint<16> level_1_rd9_res = level_1_rd9_select(level_0, d0, d1, dynamic_address);
	set_at<144, 1152>(result, level_1_rd9_res);
	hw_uint<16> level_1_rd10_res = level_1_rd10_select(level_0, d0, d1, dynamic_address);
	set_at<160, 1152>(result, level_1_rd10_res);
	hw_uint<16> level_1_rd11_res = level_1_rd11_select(level_0, d0, d1, dynamic_address);
	set_at<176, 1152>(result, level_1_rd11_res);
	hw_uint<16> level_1_rd12_res = level_1_rd12_select(level_0, d0, d1, dynamic_address);
	set_at<192, 1152>(result, level_1_rd12_res);
	hw_uint<16> level_1_rd13_res = level_1_rd13_select(level_0, d0, d1, dynamic_address);
	set_at<208, 1152>(result, level_1_rd13_res);
	hw_uint<16> level_1_rd14_res = level_1_rd14_select(level_0, d0, d1, dynamic_address);
	set_at<224, 1152>(result, level_1_rd14_res);
	hw_uint<16> level_1_rd15_res = level_1_rd15_select(level_0, d0, d1, dynamic_address);
	set_at<240, 1152>(result, level_1_rd15_res);
	hw_uint<16> level_1_rd16_res = level_1_rd16_select(level_0, d0, d1, dynamic_address);
	set_at<256, 1152>(result, level_1_rd16_res);
	hw_uint<16> level_1_rd17_res = level_1_rd17_select(level_0, d0, d1, dynamic_address);
	set_at<272, 1152>(result, level_1_rd17_res);
	hw_uint<16> level_1_rd18_res = level_1_rd18_select(level_0, d0, d1, dynamic_address);
	set_at<288, 1152>(result, level_1_rd18_res);
	hw_uint<16> level_1_rd19_res = level_1_rd19_select(level_0, d0, d1, dynamic_address);
	set_at<304, 1152>(result, level_1_rd19_res);
	hw_uint<16> level_1_rd20_res = level_1_rd20_select(level_0, d0, d1, dynamic_address);
	set_at<320, 1152>(result, level_1_rd20_res);
	hw_uint<16> level_1_rd21_res = level_1_rd21_select(level_0, d0, d1, dynamic_address);
	set_at<336, 1152>(result, level_1_rd21_res);
	hw_uint<16> level_1_rd22_res = level_1_rd22_select(level_0, d0, d1, dynamic_address);
	set_at<352, 1152>(result, level_1_rd22_res);
	hw_uint<16> level_1_rd23_res = level_1_rd23_select(level_0, d0, d1, dynamic_address);
	set_at<368, 1152>(result, level_1_rd23_res);
	hw_uint<16> level_1_rd24_res = level_1_rd24_select(level_0, d0, d1, dynamic_address);
	set_at<384, 1152>(result, level_1_rd24_res);
	hw_uint<16> level_1_rd25_res = level_1_rd25_select(level_0, d0, d1, dynamic_address);
	set_at<400, 1152>(result, level_1_rd25_res);
	hw_uint<16> level_1_rd26_res = level_1_rd26_select(level_0, d0, d1, dynamic_address);
	set_at<416, 1152>(result, level_1_rd26_res);
	hw_uint<16> level_1_rd27_res = level_1_rd27_select(level_0, d0, d1, dynamic_address);
	set_at<432, 1152>(result, level_1_rd27_res);
	hw_uint<16> level_1_rd28_res = level_1_rd28_select(level_0, d0, d1, dynamic_address);
	set_at<448, 1152>(result, level_1_rd28_res);
	hw_uint<16> level_1_rd29_res = level_1_rd29_select(level_0, d0, d1, dynamic_address);
	set_at<464, 1152>(result, level_1_rd29_res);
	hw_uint<16> level_1_rd30_res = level_1_rd30_select(level_0, d0, d1, dynamic_address);
	set_at<480, 1152>(result, level_1_rd30_res);
	hw_uint<16> level_1_rd31_res = level_1_rd31_select(level_0, d0, d1, dynamic_address);
	set_at<496, 1152>(result, level_1_rd31_res);
	hw_uint<16> level_1_rd32_res = level_1_rd32_select(level_0, d0, d1, dynamic_address);
	set_at<512, 1152>(result, level_1_rd32_res);
	hw_uint<16> level_1_rd33_res = level_1_rd33_select(level_0, d0, d1, dynamic_address);
	set_at<528, 1152>(result, level_1_rd33_res);
	hw_uint<16> level_1_rd34_res = level_1_rd34_select(level_0, d0, d1, dynamic_address);
	set_at<544, 1152>(result, level_1_rd34_res);
	hw_uint<16> level_1_rd35_res = level_1_rd35_select(level_0, d0, d1, dynamic_address);
	set_at<560, 1152>(result, level_1_rd35_res);
	hw_uint<16> level_1_rd36_res = level_1_rd36_select(level_0, d0, d1, dynamic_address);
	set_at<576, 1152>(result, level_1_rd36_res);
	hw_uint<16> level_1_rd37_res = level_1_rd37_select(level_0, d0, d1, dynamic_address);
	set_at<592, 1152>(result, level_1_rd37_res);
	hw_uint<16> level_1_rd38_res = level_1_rd38_select(level_0, d0, d1, dynamic_address);
	set_at<608, 1152>(result, level_1_rd38_res);
	hw_uint<16> level_1_rd39_res = level_1_rd39_select(level_0, d0, d1, dynamic_address);
	set_at<624, 1152>(result, level_1_rd39_res);
	hw_uint<16> level_1_rd40_res = level_1_rd40_select(level_0, d0, d1, dynamic_address);
	set_at<640, 1152>(result, level_1_rd40_res);
	hw_uint<16> level_1_rd41_res = level_1_rd41_select(level_0, d0, d1, dynamic_address);
	set_at<656, 1152>(result, level_1_rd41_res);
	hw_uint<16> level_1_rd42_res = level_1_rd42_select(level_0, d0, d1, dynamic_address);
	set_at<672, 1152>(result, level_1_rd42_res);
	hw_uint<16> level_1_rd43_res = level_1_rd43_select(level_0, d0, d1, dynamic_address);
	set_at<688, 1152>(result, level_1_rd43_res);
	hw_uint<16> level_1_rd44_res = level_1_rd44_select(level_0, d0, d1, dynamic_address);
	set_at<704, 1152>(result, level_1_rd44_res);
	hw_uint<16> level_1_rd45_res = level_1_rd45_select(level_0, d0, d1, dynamic_address);
	set_at<720, 1152>(result, level_1_rd45_res);
	hw_uint<16> level_1_rd46_res = level_1_rd46_select(level_0, d0, d1, dynamic_address);
	set_at<736, 1152>(result, level_1_rd46_res);
	hw_uint<16> level_1_rd47_res = level_1_rd47_select(level_0, d0, d1, dynamic_address);
	set_at<752, 1152>(result, level_1_rd47_res);
	hw_uint<16> level_1_rd48_res = level_1_rd48_select(level_0, d0, d1, dynamic_address);
	set_at<768, 1152>(result, level_1_rd48_res);
	hw_uint<16> level_1_rd49_res = level_1_rd49_select(level_0, d0, d1, dynamic_address);
	set_at<784, 1152>(result, level_1_rd49_res);
	hw_uint<16> level_1_rd50_res = level_1_rd50_select(level_0, d0, d1, dynamic_address);
	set_at<800, 1152>(result, level_1_rd50_res);
	hw_uint<16> level_1_rd51_res = level_1_rd51_select(level_0, d0, d1, dynamic_address);
	set_at<816, 1152>(result, level_1_rd51_res);
	hw_uint<16> level_1_rd52_res = level_1_rd52_select(level_0, d0, d1, dynamic_address);
	set_at<832, 1152>(result, level_1_rd52_res);
	hw_uint<16> level_1_rd53_res = level_1_rd53_select(level_0, d0, d1, dynamic_address);
	set_at<848, 1152>(result, level_1_rd53_res);
	hw_uint<16> level_1_rd54_res = level_1_rd54_select(level_0, d0, d1, dynamic_address);
	set_at<864, 1152>(result, level_1_rd54_res);
	hw_uint<16> level_1_rd55_res = level_1_rd55_select(level_0, d0, d1, dynamic_address);
	set_at<880, 1152>(result, level_1_rd55_res);
	hw_uint<16> level_1_rd56_res = level_1_rd56_select(level_0, d0, d1, dynamic_address);
	set_at<896, 1152>(result, level_1_rd56_res);
	hw_uint<16> level_1_rd57_res = level_1_rd57_select(level_0, d0, d1, dynamic_address);
	set_at<912, 1152>(result, level_1_rd57_res);
	hw_uint<16> level_1_rd58_res = level_1_rd58_select(level_0, d0, d1, dynamic_address);
	set_at<928, 1152>(result, level_1_rd58_res);
	hw_uint<16> level_1_rd59_res = level_1_rd59_select(level_0, d0, d1, dynamic_address);
	set_at<944, 1152>(result, level_1_rd59_res);
	hw_uint<16> level_1_rd60_res = level_1_rd60_select(level_0, d0, d1, dynamic_address);
	set_at<960, 1152>(result, level_1_rd60_res);
	hw_uint<16> level_1_rd61_res = level_1_rd61_select(level_0, d0, d1, dynamic_address);
	set_at<976, 1152>(result, level_1_rd61_res);
	hw_uint<16> level_1_rd62_res = level_1_rd62_select(level_0, d0, d1, dynamic_address);
	set_at<992, 1152>(result, level_1_rd62_res);
	hw_uint<16> level_1_rd63_res = level_1_rd63_select(level_0, d0, d1, dynamic_address);
	set_at<1008, 1152>(result, level_1_rd63_res);
	hw_uint<16> level_1_rd64_res = level_1_rd64_select(level_0, d0, d1, dynamic_address);
	set_at<1024, 1152>(result, level_1_rd64_res);
	hw_uint<16> level_1_rd65_res = level_1_rd65_select(level_0, d0, d1, dynamic_address);
	set_at<1040, 1152>(result, level_1_rd65_res);
	hw_uint<16> level_1_rd66_res = level_1_rd66_select(level_0, d0, d1, dynamic_address);
	set_at<1056, 1152>(result, level_1_rd66_res);
	hw_uint<16> level_1_rd67_res = level_1_rd67_select(level_0, d0, d1, dynamic_address);
	set_at<1072, 1152>(result, level_1_rd67_res);
	hw_uint<16> level_1_rd68_res = level_1_rd68_select(level_0, d0, d1, dynamic_address);
	set_at<1088, 1152>(result, level_1_rd68_res);
	hw_uint<16> level_1_rd69_res = level_1_rd69_select(level_0, d0, d1, dynamic_address);
	set_at<1104, 1152>(result, level_1_rd69_res);
	hw_uint<16> level_1_rd70_res = level_1_rd70_select(level_0, d0, d1, dynamic_address);
	set_at<1120, 1152>(result, level_1_rd70_res);
	hw_uint<16> level_1_rd71_res = level_1_rd71_select(level_0, d0, d1, dynamic_address);
	set_at<1136, 1152>(result, level_1_rd71_res);
	return result;
}

#include "hw_classes.h"

struct level_1_level_1_update_0_write0_merged_banks_6_cache {
	// RAM Box: {[0, 264], [0, 258]}
	// Capacity: 70
	// # of read delays: 6
  // 0, 1, 34, 35, 68, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 32> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 32> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_33() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_34() {
		return f4;
	}

	inline hw_uint<16> peek_35() {
		return f6;
	}

	inline hw_uint<16> peek_67() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_68() {
		return f8;
	}

	inline hw_uint<16> peek_69() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
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
	// Capacity: 70
	// # of read delays: 4
  // 0, 1, 35, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 33> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 33> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_34() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_35() {
		return f4;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_69() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_1_level_1_update_0_write2_merged_banks_6_cache {
	// RAM Box: {[2, 258], [0, 258]}
	// Capacity: 70
	// # of read delays: 4
  // 0, 1, 35, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 33> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 33> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_34() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_35() {
		return f4;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_69() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_1_level_1_update_0_write3_merged_banks_3_cache {
	// RAM Box: {[3, 259], [0, 258]}
	// Capacity: 70
	// # of read delays: 4
  // 0, 1, 35, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 33> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 33> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_34() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_35() {
		return f4;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_69() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_1_level_1_update_0_write4_merged_banks_6_cache {
	// RAM Box: {[4, 260], [0, 258]}
	// Capacity: 70
	// # of read delays: 4
  // 0, 1, 35, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 33> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 33> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_34() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_35() {
		return f4;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_69() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_1_level_1_update_0_write5_merged_banks_3_cache {
	// RAM Box: {[5, 261], [0, 258]}
	// Capacity: 70
	// # of read delays: 4
  // 0, 1, 35, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 33> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 33> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_34() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_35() {
		return f4;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_69() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_1_level_1_update_0_write6_merged_banks_6_cache {
	// RAM Box: {[6, 262], [0, 258]}
	// Capacity: 70
	// # of read delays: 4
  // 0, 1, 35, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 33> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 33> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_34() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_35() {
		return f4;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_69() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_1_level_1_update_0_write7_merged_banks_3_cache {
	// RAM Box: {[7, 263], [0, 258]}
	// Capacity: 70
	// # of read delays: 4
  // 0, 1, 35, 69
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 33> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 33> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_34() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_35() {
		return f4;
	}

	inline hw_uint<16> peek_68() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_69() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 33
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 33 reading from capacity: 1
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
  // # of banks: 8
  level_1_level_1_update_0_write0_merged_banks_6_cache level_1_level_1_update_0_write0_merged_banks_6;
  level_1_level_1_update_0_write1_merged_banks_3_cache level_1_level_1_update_0_write1_merged_banks_3;
  level_1_level_1_update_0_write2_merged_banks_6_cache level_1_level_1_update_0_write2_merged_banks_6;
  level_1_level_1_update_0_write3_merged_banks_3_cache level_1_level_1_update_0_write3_merged_banks_3;
  level_1_level_1_update_0_write4_merged_banks_6_cache level_1_level_1_update_0_write4_merged_banks_6;
  level_1_level_1_update_0_write5_merged_banks_3_cache level_1_level_1_update_0_write5_merged_banks_3;
  level_1_level_1_update_0_write6_merged_banks_6_cache level_1_level_1_update_0_write6_merged_banks_6;
  level_1_level_1_update_0_write7_merged_banks_3_cache level_1_level_1_update_0_write7_merged_banks_3;
};



inline void level_1_level_1_update_0_write0_write(hw_uint<16>& level_1_level_1_update_0_write0, level_1_cache& level_1, int d0, int d1, int dynamic_address) {
  level_1.level_1_level_1_update_0_write0_merged_banks_6.push(level_1_level_1_update_0_write0);
}

inline void level_1_level_1_update_0_write1_write(hw_uint<16>& level_1_level_1_update_0_write1, level_1_cache& level_1, int d0, int d1, int dynamic_address) {
  level_1.level_1_level_1_update_0_write1_merged_banks_3.push(level_1_level_1_update_0_write1);
}

inline void level_1_level_1_update_0_write2_write(hw_uint<16>& level_1_level_1_update_0_write2, level_1_cache& level_1, int d0, int d1, int dynamic_address) {
  level_1.level_1_level_1_update_0_write2_merged_banks_6.push(level_1_level_1_update_0_write2);
}

inline void level_1_level_1_update_0_write3_write(hw_uint<16>& level_1_level_1_update_0_write3, level_1_cache& level_1, int d0, int d1, int dynamic_address) {
  level_1.level_1_level_1_update_0_write3_merged_banks_3.push(level_1_level_1_update_0_write3);
}

inline void level_1_level_1_update_0_write4_write(hw_uint<16>& level_1_level_1_update_0_write4, level_1_cache& level_1, int d0, int d1, int dynamic_address) {
  level_1.level_1_level_1_update_0_write4_merged_banks_6.push(level_1_level_1_update_0_write4);
}

inline void level_1_level_1_update_0_write5_write(hw_uint<16>& level_1_level_1_update_0_write5, level_1_cache& level_1, int d0, int d1, int dynamic_address) {
  level_1.level_1_level_1_update_0_write5_merged_banks_3.push(level_1_level_1_update_0_write5);
}

inline void level_1_level_1_update_0_write6_write(hw_uint<16>& level_1_level_1_update_0_write6, level_1_cache& level_1, int d0, int d1, int dynamic_address) {
  level_1.level_1_level_1_update_0_write6_merged_banks_6.push(level_1_level_1_update_0_write6);
}

inline void level_1_level_1_update_0_write7_write(hw_uint<16>& level_1_level_1_update_0_write7, level_1_cache& level_1, int d0, int d1, int dynamic_address) {
  level_1.level_1_level_1_update_0_write7_merged_banks_3.push(level_1_level_1_update_0_write7);
}

inline hw_uint<16> level_2_rd0_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd0 read pattern: { level_2_update_0[d0, d1] -> level_1[8d0, 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_6.peek_69();
  return value_level_1_level_1_update_0_write0;
  return 0;
}

inline hw_uint<16> level_2_rd1_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd1 read pattern: { level_2_update_0[d0, d1] -> level_1[8d0, 1 + 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_6.peek_35();
  return value_level_1_level_1_update_0_write0;
  return 0;
}

inline hw_uint<16> level_2_rd10_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd10 read pattern: { level_2_update_0[d0, d1] -> level_1[2 + 8d0, 1 + 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write2 = level_1.level_1_level_1_update_0_write2_merged_banks_6.peek_35();
  return value_level_1_level_1_update_0_write2;
  return 0;
}

inline hw_uint<16> level_2_rd11_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd11 read pattern: { level_2_update_0[d0, d1] -> level_1[2 + 8d0, 2 + 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write2 = level_1.level_1_level_1_update_0_write2_merged_banks_6.peek_1();
  return value_level_1_level_1_update_0_write2;
  return 0;
}

inline hw_uint<16> level_2_rd12_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd12 read pattern: { level_2_update_0[d0, d1] -> level_1[3 + 8d0, 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write3 = level_1.level_1_level_1_update_0_write3_merged_banks_3.peek_69();
  return value_level_1_level_1_update_0_write3;
  return 0;
}

inline hw_uint<16> level_2_rd13_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd13 read pattern: { level_2_update_0[d0, d1] -> level_1[3 + 8d0, 1 + 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write3 = level_1.level_1_level_1_update_0_write3_merged_banks_3.peek_35();
  return value_level_1_level_1_update_0_write3;
  return 0;
}

inline hw_uint<16> level_2_rd14_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd14 read pattern: { level_2_update_0[d0, d1] -> level_1[3 + 8d0, 2 + 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write3 = level_1.level_1_level_1_update_0_write3_merged_banks_3.peek_1();
  return value_level_1_level_1_update_0_write3;
  return 0;
}

inline hw_uint<16> level_2_rd15_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd15 read pattern: { level_2_update_0[d0, d1] -> level_1[4 + 8d0, 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write4 = level_1.level_1_level_1_update_0_write4_merged_banks_6.peek_69();
  return value_level_1_level_1_update_0_write4;
  return 0;
}

inline hw_uint<16> level_2_rd16_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd16 read pattern: { level_2_update_0[d0, d1] -> level_1[4 + 8d0, 1 + 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write4 = level_1.level_1_level_1_update_0_write4_merged_banks_6.peek_35();
  return value_level_1_level_1_update_0_write4;
  return 0;
}

inline hw_uint<16> level_2_rd17_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd17 read pattern: { level_2_update_0[d0, d1] -> level_1[4 + 8d0, 2 + 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write4 = level_1.level_1_level_1_update_0_write4_merged_banks_6.peek_1();
  return value_level_1_level_1_update_0_write4;
  return 0;
}

inline hw_uint<16> level_2_rd18_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd18 read pattern: { level_2_update_0[d0, d1] -> level_1[4 + 8d0, 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write4 = level_1.level_1_level_1_update_0_write4_merged_banks_6.peek_69();
  return value_level_1_level_1_update_0_write4;
  return 0;
}

inline hw_uint<16> level_2_rd19_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd19 read pattern: { level_2_update_0[d0, d1] -> level_1[4 + 8d0, 1 + 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write4 = level_1.level_1_level_1_update_0_write4_merged_banks_6.peek_35();
  return value_level_1_level_1_update_0_write4;
  return 0;
}

inline hw_uint<16> level_2_rd2_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd2 read pattern: { level_2_update_0[d0, d1] -> level_1[8d0, 2 + 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_6.peek_1();
  return value_level_1_level_1_update_0_write0;
  return 0;
}

inline hw_uint<16> level_2_rd20_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd20 read pattern: { level_2_update_0[d0, d1] -> level_1[4 + 8d0, 2 + 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write4 = level_1.level_1_level_1_update_0_write4_merged_banks_6.peek_1();
  return value_level_1_level_1_update_0_write4;
  return 0;
}

inline hw_uint<16> level_2_rd21_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd21 read pattern: { level_2_update_0[d0, d1] -> level_1[5 + 8d0, 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write5 = level_1.level_1_level_1_update_0_write5_merged_banks_3.peek_69();
  return value_level_1_level_1_update_0_write5;
  return 0;
}

inline hw_uint<16> level_2_rd22_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd22 read pattern: { level_2_update_0[d0, d1] -> level_1[5 + 8d0, 1 + 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write5 = level_1.level_1_level_1_update_0_write5_merged_banks_3.peek_35();
  return value_level_1_level_1_update_0_write5;
  return 0;
}

inline hw_uint<16> level_2_rd23_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd23 read pattern: { level_2_update_0[d0, d1] -> level_1[5 + 8d0, 2 + 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write5 = level_1.level_1_level_1_update_0_write5_merged_banks_3.peek_1();
  return value_level_1_level_1_update_0_write5;
  return 0;
}

inline hw_uint<16> level_2_rd24_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd24 read pattern: { level_2_update_0[d0, d1] -> level_1[6 + 8d0, 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write6 = level_1.level_1_level_1_update_0_write6_merged_banks_6.peek_69();
  return value_level_1_level_1_update_0_write6;
  return 0;
}

inline hw_uint<16> level_2_rd25_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd25 read pattern: { level_2_update_0[d0, d1] -> level_1[6 + 8d0, 1 + 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write6 = level_1.level_1_level_1_update_0_write6_merged_banks_6.peek_35();
  return value_level_1_level_1_update_0_write6;
  return 0;
}

inline hw_uint<16> level_2_rd26_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd26 read pattern: { level_2_update_0[d0, d1] -> level_1[6 + 8d0, 2 + 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write6 = level_1.level_1_level_1_update_0_write6_merged_banks_6.peek_1();
  return value_level_1_level_1_update_0_write6;
  return 0;
}

inline hw_uint<16> level_2_rd27_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd27 read pattern: { level_2_update_0[d0, d1] -> level_1[6 + 8d0, 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write6 = level_1.level_1_level_1_update_0_write6_merged_banks_6.peek_69();
  return value_level_1_level_1_update_0_write6;
  return 0;
}

inline hw_uint<16> level_2_rd28_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd28 read pattern: { level_2_update_0[d0, d1] -> level_1[6 + 8d0, 1 + 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write6 = level_1.level_1_level_1_update_0_write6_merged_banks_6.peek_35();
  return value_level_1_level_1_update_0_write6;
  return 0;
}

inline hw_uint<16> level_2_rd29_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd29 read pattern: { level_2_update_0[d0, d1] -> level_1[6 + 8d0, 2 + 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write6 = level_1.level_1_level_1_update_0_write6_merged_banks_6.peek_1();
  return value_level_1_level_1_update_0_write6;
  return 0;
}

inline hw_uint<16> level_2_rd3_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd3 read pattern: { level_2_update_0[d0, d1] -> level_1[1 + 8d0, 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write1 = level_1.level_1_level_1_update_0_write1_merged_banks_3.peek_69();
  return value_level_1_level_1_update_0_write1;
  return 0;
}

inline hw_uint<16> level_2_rd30_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd30 read pattern: { level_2_update_0[d0, d1] -> level_1[7 + 8d0, 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write7 = level_1.level_1_level_1_update_0_write7_merged_banks_3.peek_69();
  return value_level_1_level_1_update_0_write7;
  return 0;
}

inline hw_uint<16> level_2_rd31_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd31 read pattern: { level_2_update_0[d0, d1] -> level_1[7 + 8d0, 1 + 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write7 = level_1.level_1_level_1_update_0_write7_merged_banks_3.peek_35();
  return value_level_1_level_1_update_0_write7;
  return 0;
}

inline hw_uint<16> level_2_rd32_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd32 read pattern: { level_2_update_0[d0, d1] -> level_1[7 + 8d0, 2 + 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write7 = level_1.level_1_level_1_update_0_write7_merged_banks_3.peek_1();
  return value_level_1_level_1_update_0_write7;
  return 0;
}

inline hw_uint<16> level_2_rd33_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd33 read pattern: { level_2_update_0[d0, d1] -> level_1[8 + 8d0, 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_6.peek_68();
  return value_level_1_level_1_update_0_write0;
  return 0;
}

inline hw_uint<16> level_2_rd34_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd34 read pattern: { level_2_update_0[d0, d1] -> level_1[8 + 8d0, 1 + 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_6.peek_34();
  return value_level_1_level_1_update_0_write0;
  return 0;
}

inline hw_uint<16> level_2_rd35_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd35 read pattern: { level_2_update_0[d0, d1] -> level_1[8 + 8d0, 2 + 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write0 = level_1.level_1_level_1_update_0_write0_merged_banks_6.peek_0();
  return value_level_1_level_1_update_0_write0;
  return 0;
}

inline hw_uint<16> level_2_rd4_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd4 read pattern: { level_2_update_0[d0, d1] -> level_1[1 + 8d0, 1 + 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write1 = level_1.level_1_level_1_update_0_write1_merged_banks_3.peek_35();
  return value_level_1_level_1_update_0_write1;
  return 0;
}

inline hw_uint<16> level_2_rd5_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd5 read pattern: { level_2_update_0[d0, d1] -> level_1[1 + 8d0, 2 + 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write1 = level_1.level_1_level_1_update_0_write1_merged_banks_3.peek_1();
  return value_level_1_level_1_update_0_write1;
  return 0;
}

inline hw_uint<16> level_2_rd6_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd6 read pattern: { level_2_update_0[d0, d1] -> level_1[2 + 8d0, 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write2 = level_1.level_1_level_1_update_0_write2_merged_banks_6.peek_69();
  return value_level_1_level_1_update_0_write2;
  return 0;
}

inline hw_uint<16> level_2_rd7_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd7 read pattern: { level_2_update_0[d0, d1] -> level_1[2 + 8d0, 1 + 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write2 = level_1.level_1_level_1_update_0_write2_merged_banks_6.peek_35();
  return value_level_1_level_1_update_0_write2;
  return 0;
}

inline hw_uint<16> level_2_rd8_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd8 read pattern: { level_2_update_0[d0, d1] -> level_1[2 + 8d0, 2 + 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write2 = level_1.level_1_level_1_update_0_write2_merged_banks_6.peek_1();
  return value_level_1_level_1_update_0_write2;
  return 0;
}

inline hw_uint<16> level_2_rd9_select(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_2_rd9 read pattern: { level_2_update_0[d0, d1] -> level_1[2 + 8d0, 2d1] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Read schedule : { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  // Write schedule: { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
  auto value_level_1_level_1_update_0_write2 = level_1.level_1_level_1_update_0_write2_merged_banks_6.peek_69();
  return value_level_1_level_1_update_0_write2;
  return 0;
}

// # of bundles = 2
// level_1_update_0_write
//	level_1_level_1_update_0_write0
//	level_1_level_1_update_0_write1
//	level_1_level_1_update_0_write2
//	level_1_level_1_update_0_write3
//	level_1_level_1_update_0_write4
//	level_1_level_1_update_0_write5
//	level_1_level_1_update_0_write6
//	level_1_level_1_update_0_write7
inline void level_1_level_1_update_0_write_bundle_write(hw_uint<128>& level_1_update_0_write, level_1_cache& level_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> level_1_level_1_update_0_write0_res = level_1_update_0_write.extract<0, 15>();
	level_1_level_1_update_0_write0_write(level_1_level_1_update_0_write0_res, level_1, d0, d1, dynamic_address);
	hw_uint<16> level_1_level_1_update_0_write1_res = level_1_update_0_write.extract<16, 31>();
	level_1_level_1_update_0_write1_write(level_1_level_1_update_0_write1_res, level_1, d0, d1, dynamic_address);
	hw_uint<16> level_1_level_1_update_0_write2_res = level_1_update_0_write.extract<32, 47>();
	level_1_level_1_update_0_write2_write(level_1_level_1_update_0_write2_res, level_1, d0, d1, dynamic_address);
	hw_uint<16> level_1_level_1_update_0_write3_res = level_1_update_0_write.extract<48, 63>();
	level_1_level_1_update_0_write3_write(level_1_level_1_update_0_write3_res, level_1, d0, d1, dynamic_address);
	hw_uint<16> level_1_level_1_update_0_write4_res = level_1_update_0_write.extract<64, 79>();
	level_1_level_1_update_0_write4_write(level_1_level_1_update_0_write4_res, level_1, d0, d1, dynamic_address);
	hw_uint<16> level_1_level_1_update_0_write5_res = level_1_update_0_write.extract<80, 95>();
	level_1_level_1_update_0_write5_write(level_1_level_1_update_0_write5_res, level_1, d0, d1, dynamic_address);
	hw_uint<16> level_1_level_1_update_0_write6_res = level_1_update_0_write.extract<96, 111>();
	level_1_level_1_update_0_write6_write(level_1_level_1_update_0_write6_res, level_1, d0, d1, dynamic_address);
	hw_uint<16> level_1_level_1_update_0_write7_res = level_1_update_0_write.extract<112, 127>();
	level_1_level_1_update_0_write7_write(level_1_level_1_update_0_write7_res, level_1, d0, d1, dynamic_address);
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
//	level_2_rd9
//	level_2_rd10
//	level_2_rd11
//	level_2_rd12
//	level_2_rd13
//	level_2_rd14
//	level_2_rd15
//	level_2_rd16
//	level_2_rd17
//	level_2_rd18
//	level_2_rd19
//	level_2_rd20
//	level_2_rd21
//	level_2_rd22
//	level_2_rd23
//	level_2_rd24
//	level_2_rd25
//	level_2_rd26
//	level_2_rd27
//	level_2_rd28
//	level_2_rd29
//	level_2_rd30
//	level_2_rd31
//	level_2_rd32
//	level_2_rd33
//	level_2_rd34
//	level_2_rd35
inline hw_uint<576> level_1_level_2_update_0_read_bundle_read(level_1_cache& level_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 36
    // level_2_rd0
    // level_2_rd1
    // level_2_rd2
    // level_2_rd3
    // level_2_rd4
    // level_2_rd5
    // level_2_rd6
    // level_2_rd7
    // level_2_rd8
    // level_2_rd9
    // level_2_rd10
    // level_2_rd11
    // level_2_rd12
    // level_2_rd13
    // level_2_rd14
    // level_2_rd15
    // level_2_rd16
    // level_2_rd17
    // level_2_rd18
    // level_2_rd19
    // level_2_rd20
    // level_2_rd21
    // level_2_rd22
    // level_2_rd23
    // level_2_rd24
    // level_2_rd25
    // level_2_rd26
    // level_2_rd27
    // level_2_rd28
    // level_2_rd29
    // level_2_rd30
    // level_2_rd31
    // level_2_rd32
    // level_2_rd33
    // level_2_rd34
    // level_2_rd35

	hw_uint<576> result;
	hw_uint<16> level_2_rd0_res = level_2_rd0_select(level_1, d0, d1, dynamic_address);
	set_at<0, 576>(result, level_2_rd0_res);
	hw_uint<16> level_2_rd1_res = level_2_rd1_select(level_1, d0, d1, dynamic_address);
	set_at<16, 576>(result, level_2_rd1_res);
	hw_uint<16> level_2_rd2_res = level_2_rd2_select(level_1, d0, d1, dynamic_address);
	set_at<32, 576>(result, level_2_rd2_res);
	hw_uint<16> level_2_rd3_res = level_2_rd3_select(level_1, d0, d1, dynamic_address);
	set_at<48, 576>(result, level_2_rd3_res);
	hw_uint<16> level_2_rd4_res = level_2_rd4_select(level_1, d0, d1, dynamic_address);
	set_at<64, 576>(result, level_2_rd4_res);
	hw_uint<16> level_2_rd5_res = level_2_rd5_select(level_1, d0, d1, dynamic_address);
	set_at<80, 576>(result, level_2_rd5_res);
	hw_uint<16> level_2_rd6_res = level_2_rd6_select(level_1, d0, d1, dynamic_address);
	set_at<96, 576>(result, level_2_rd6_res);
	hw_uint<16> level_2_rd7_res = level_2_rd7_select(level_1, d0, d1, dynamic_address);
	set_at<112, 576>(result, level_2_rd7_res);
	hw_uint<16> level_2_rd8_res = level_2_rd8_select(level_1, d0, d1, dynamic_address);
	set_at<128, 576>(result, level_2_rd8_res);
	hw_uint<16> level_2_rd9_res = level_2_rd9_select(level_1, d0, d1, dynamic_address);
	set_at<144, 576>(result, level_2_rd9_res);
	hw_uint<16> level_2_rd10_res = level_2_rd10_select(level_1, d0, d1, dynamic_address);
	set_at<160, 576>(result, level_2_rd10_res);
	hw_uint<16> level_2_rd11_res = level_2_rd11_select(level_1, d0, d1, dynamic_address);
	set_at<176, 576>(result, level_2_rd11_res);
	hw_uint<16> level_2_rd12_res = level_2_rd12_select(level_1, d0, d1, dynamic_address);
	set_at<192, 576>(result, level_2_rd12_res);
	hw_uint<16> level_2_rd13_res = level_2_rd13_select(level_1, d0, d1, dynamic_address);
	set_at<208, 576>(result, level_2_rd13_res);
	hw_uint<16> level_2_rd14_res = level_2_rd14_select(level_1, d0, d1, dynamic_address);
	set_at<224, 576>(result, level_2_rd14_res);
	hw_uint<16> level_2_rd15_res = level_2_rd15_select(level_1, d0, d1, dynamic_address);
	set_at<240, 576>(result, level_2_rd15_res);
	hw_uint<16> level_2_rd16_res = level_2_rd16_select(level_1, d0, d1, dynamic_address);
	set_at<256, 576>(result, level_2_rd16_res);
	hw_uint<16> level_2_rd17_res = level_2_rd17_select(level_1, d0, d1, dynamic_address);
	set_at<272, 576>(result, level_2_rd17_res);
	hw_uint<16> level_2_rd18_res = level_2_rd18_select(level_1, d0, d1, dynamic_address);
	set_at<288, 576>(result, level_2_rd18_res);
	hw_uint<16> level_2_rd19_res = level_2_rd19_select(level_1, d0, d1, dynamic_address);
	set_at<304, 576>(result, level_2_rd19_res);
	hw_uint<16> level_2_rd20_res = level_2_rd20_select(level_1, d0, d1, dynamic_address);
	set_at<320, 576>(result, level_2_rd20_res);
	hw_uint<16> level_2_rd21_res = level_2_rd21_select(level_1, d0, d1, dynamic_address);
	set_at<336, 576>(result, level_2_rd21_res);
	hw_uint<16> level_2_rd22_res = level_2_rd22_select(level_1, d0, d1, dynamic_address);
	set_at<352, 576>(result, level_2_rd22_res);
	hw_uint<16> level_2_rd23_res = level_2_rd23_select(level_1, d0, d1, dynamic_address);
	set_at<368, 576>(result, level_2_rd23_res);
	hw_uint<16> level_2_rd24_res = level_2_rd24_select(level_1, d0, d1, dynamic_address);
	set_at<384, 576>(result, level_2_rd24_res);
	hw_uint<16> level_2_rd25_res = level_2_rd25_select(level_1, d0, d1, dynamic_address);
	set_at<400, 576>(result, level_2_rd25_res);
	hw_uint<16> level_2_rd26_res = level_2_rd26_select(level_1, d0, d1, dynamic_address);
	set_at<416, 576>(result, level_2_rd26_res);
	hw_uint<16> level_2_rd27_res = level_2_rd27_select(level_1, d0, d1, dynamic_address);
	set_at<432, 576>(result, level_2_rd27_res);
	hw_uint<16> level_2_rd28_res = level_2_rd28_select(level_1, d0, d1, dynamic_address);
	set_at<448, 576>(result, level_2_rd28_res);
	hw_uint<16> level_2_rd29_res = level_2_rd29_select(level_1, d0, d1, dynamic_address);
	set_at<464, 576>(result, level_2_rd29_res);
	hw_uint<16> level_2_rd30_res = level_2_rd30_select(level_1, d0, d1, dynamic_address);
	set_at<480, 576>(result, level_2_rd30_res);
	hw_uint<16> level_2_rd31_res = level_2_rd31_select(level_1, d0, d1, dynamic_address);
	set_at<496, 576>(result, level_2_rd31_res);
	hw_uint<16> level_2_rd32_res = level_2_rd32_select(level_1, d0, d1, dynamic_address);
	set_at<512, 576>(result, level_2_rd32_res);
	hw_uint<16> level_2_rd33_res = level_2_rd33_select(level_1, d0, d1, dynamic_address);
	set_at<528, 576>(result, level_2_rd33_res);
	hw_uint<16> level_2_rd34_res = level_2_rd34_select(level_1, d0, d1, dynamic_address);
	set_at<544, 576>(result, level_2_rd34_res);
	hw_uint<16> level_2_rd35_res = level_2_rd35_select(level_1, d0, d1, dynamic_address);
	set_at<560, 576>(result, level_2_rd35_res);
	return result;
}

#include "hw_classes.h"

struct level_2_level_2_update_0_write0_merged_banks_6_cache {
	// RAM Box: {[0, 128], [0, 128]}
	// Capacity: 68
	// # of read delays: 6
  // 0, 1, 33, 34, 66, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 31> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 31> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_32() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_33() {
		return f4;
	}

	inline hw_uint<16> peek_34() {
		return f6;
	}

	inline hw_uint<16> peek_65() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_66() {
		return f8;
	}

	inline hw_uint<16> peek_67() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 31
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 31
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 31 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_2_level_2_update_0_write1_merged_banks_3_cache {
	// RAM Box: {[1, 125], [0, 128]}
	// Capacity: 68
	// # of read delays: 4
  // 0, 1, 34, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 32> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 32> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_33() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_34() {
		return f4;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_67() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_2_level_2_update_0_write2_merged_banks_6_cache {
	// RAM Box: {[2, 126], [0, 128]}
	// Capacity: 68
	// # of read delays: 4
  // 0, 1, 34, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 32> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 32> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_33() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_34() {
		return f4;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_67() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_2_level_2_update_0_write3_merged_banks_3_cache {
	// RAM Box: {[3, 127], [0, 128]}
	// Capacity: 68
	// # of read delays: 4
  // 0, 1, 34, 67
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 32> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 32> f5;
	hw_uint<16> f6;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_33() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_34() {
		return f4;
	}

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_67() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f5.push(f4);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 32
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 32 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct level_2_cache {
  // # of banks: 4
  level_2_level_2_update_0_write0_merged_banks_6_cache level_2_level_2_update_0_write0_merged_banks_6;
  level_2_level_2_update_0_write1_merged_banks_3_cache level_2_level_2_update_0_write1_merged_banks_3;
  level_2_level_2_update_0_write2_merged_banks_6_cache level_2_level_2_update_0_write2_merged_banks_6;
  level_2_level_2_update_0_write3_merged_banks_3_cache level_2_level_2_update_0_write3_merged_banks_3;
};



inline void level_2_level_2_update_0_write0_write(hw_uint<16>& level_2_level_2_update_0_write0, level_2_cache& level_2, int d0, int d1, int dynamic_address) {
  level_2.level_2_level_2_update_0_write0_merged_banks_6.push(level_2_level_2_update_0_write0);
}

inline void level_2_level_2_update_0_write1_write(hw_uint<16>& level_2_level_2_update_0_write1, level_2_cache& level_2, int d0, int d1, int dynamic_address) {
  level_2.level_2_level_2_update_0_write1_merged_banks_3.push(level_2_level_2_update_0_write1);
}

inline void level_2_level_2_update_0_write2_write(hw_uint<16>& level_2_level_2_update_0_write2, level_2_cache& level_2, int d0, int d1, int dynamic_address) {
  level_2.level_2_level_2_update_0_write2_merged_banks_6.push(level_2_level_2_update_0_write2);
}

inline void level_2_level_2_update_0_write3_write(hw_uint<16>& level_2_level_2_update_0_write3, level_2_cache& level_2, int d0, int d1, int dynamic_address) {
  level_2.level_2_level_2_update_0_write3_merged_banks_3.push(level_2_level_2_update_0_write3);
}

inline hw_uint<16> level_3_rd0_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd0 read pattern: { level_3_update_0[d0, d1] -> level_2[4d0, 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_6.peek_67();
  return value_level_2_level_2_update_0_write0;
  return 0;
}

inline hw_uint<16> level_3_rd1_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd1 read pattern: { level_3_update_0[d0, d1] -> level_2[4d0, 1 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_6.peek_34();
  return value_level_2_level_2_update_0_write0;
  return 0;
}

inline hw_uint<16> level_3_rd10_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd10 read pattern: { level_3_update_0[d0, d1] -> level_2[2 + 4d0, 1 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write2 = level_2.level_2_level_2_update_0_write2_merged_banks_6.peek_34();
  return value_level_2_level_2_update_0_write2;
  return 0;
}

inline hw_uint<16> level_3_rd11_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd11 read pattern: { level_3_update_0[d0, d1] -> level_2[2 + 4d0, 2 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write2 = level_2.level_2_level_2_update_0_write2_merged_banks_6.peek_1();
  return value_level_2_level_2_update_0_write2;
  return 0;
}

inline hw_uint<16> level_3_rd12_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd12 read pattern: { level_3_update_0[d0, d1] -> level_2[3 + 4d0, 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write3 = level_2.level_2_level_2_update_0_write3_merged_banks_3.peek_67();
  return value_level_2_level_2_update_0_write3;
  return 0;
}

inline hw_uint<16> level_3_rd13_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd13 read pattern: { level_3_update_0[d0, d1] -> level_2[3 + 4d0, 1 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write3 = level_2.level_2_level_2_update_0_write3_merged_banks_3.peek_34();
  return value_level_2_level_2_update_0_write3;
  return 0;
}

inline hw_uint<16> level_3_rd14_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd14 read pattern: { level_3_update_0[d0, d1] -> level_2[3 + 4d0, 2 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write3 = level_2.level_2_level_2_update_0_write3_merged_banks_3.peek_1();
  return value_level_2_level_2_update_0_write3;
  return 0;
}

inline hw_uint<16> level_3_rd15_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd15 read pattern: { level_3_update_0[d0, d1] -> level_2[4 + 4d0, 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_6.peek_66();
  return value_level_2_level_2_update_0_write0;
  return 0;
}

inline hw_uint<16> level_3_rd16_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd16 read pattern: { level_3_update_0[d0, d1] -> level_2[4 + 4d0, 1 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_6.peek_33();
  return value_level_2_level_2_update_0_write0;
  return 0;
}

inline hw_uint<16> level_3_rd17_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd17 read pattern: { level_3_update_0[d0, d1] -> level_2[4 + 4d0, 2 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_6.peek_0();
  return value_level_2_level_2_update_0_write0;
  return 0;
}

inline hw_uint<16> level_3_rd2_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd2 read pattern: { level_3_update_0[d0, d1] -> level_2[4d0, 2 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write0 = level_2.level_2_level_2_update_0_write0_merged_banks_6.peek_1();
  return value_level_2_level_2_update_0_write0;
  return 0;
}

inline hw_uint<16> level_3_rd3_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd3 read pattern: { level_3_update_0[d0, d1] -> level_2[1 + 4d0, 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write1 = level_2.level_2_level_2_update_0_write1_merged_banks_3.peek_67();
  return value_level_2_level_2_update_0_write1;
  return 0;
}

inline hw_uint<16> level_3_rd4_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd4 read pattern: { level_3_update_0[d0, d1] -> level_2[1 + 4d0, 1 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write1 = level_2.level_2_level_2_update_0_write1_merged_banks_3.peek_34();
  return value_level_2_level_2_update_0_write1;
  return 0;
}

inline hw_uint<16> level_3_rd5_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd5 read pattern: { level_3_update_0[d0, d1] -> level_2[1 + 4d0, 2 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write1 = level_2.level_2_level_2_update_0_write1_merged_banks_3.peek_1();
  return value_level_2_level_2_update_0_write1;
  return 0;
}

inline hw_uint<16> level_3_rd6_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd6 read pattern: { level_3_update_0[d0, d1] -> level_2[2 + 4d0, 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write2 = level_2.level_2_level_2_update_0_write2_merged_banks_6.peek_67();
  return value_level_2_level_2_update_0_write2;
  return 0;
}

inline hw_uint<16> level_3_rd7_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd7 read pattern: { level_3_update_0[d0, d1] -> level_2[2 + 4d0, 1 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write2 = level_2.level_2_level_2_update_0_write2_merged_banks_6.peek_34();
  return value_level_2_level_2_update_0_write2;
  return 0;
}

inline hw_uint<16> level_3_rd8_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd8 read pattern: { level_3_update_0[d0, d1] -> level_2[2 + 4d0, 2 + 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write2 = level_2.level_2_level_2_update_0_write2_merged_banks_6.peek_1();
  return value_level_2_level_2_update_0_write2;
  return 0;
}

inline hw_uint<16> level_3_rd9_select(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // level_3_rd9 read pattern: { level_3_update_0[d0, d1] -> level_2[2 + 4d0, 2d1] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Read schedule : { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Write schedule: { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
  auto value_level_2_level_2_update_0_write2 = level_2.level_2_level_2_update_0_write2_merged_banks_6.peek_67();
  return value_level_2_level_2_update_0_write2;
  return 0;
}

// # of bundles = 2
// level_2_update_0_write
//	level_2_level_2_update_0_write0
//	level_2_level_2_update_0_write1
//	level_2_level_2_update_0_write2
//	level_2_level_2_update_0_write3
inline void level_2_level_2_update_0_write_bundle_write(hw_uint<64>& level_2_update_0_write, level_2_cache& level_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> level_2_level_2_update_0_write0_res = level_2_update_0_write.extract<0, 15>();
	level_2_level_2_update_0_write0_write(level_2_level_2_update_0_write0_res, level_2, d0, d1, dynamic_address);
	hw_uint<16> level_2_level_2_update_0_write1_res = level_2_update_0_write.extract<16, 31>();
	level_2_level_2_update_0_write1_write(level_2_level_2_update_0_write1_res, level_2, d0, d1, dynamic_address);
	hw_uint<16> level_2_level_2_update_0_write2_res = level_2_update_0_write.extract<32, 47>();
	level_2_level_2_update_0_write2_write(level_2_level_2_update_0_write2_res, level_2, d0, d1, dynamic_address);
	hw_uint<16> level_2_level_2_update_0_write3_res = level_2_update_0_write.extract<48, 63>();
	level_2_level_2_update_0_write3_write(level_2_level_2_update_0_write3_res, level_2, d0, d1, dynamic_address);
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
//	level_3_rd9
//	level_3_rd10
//	level_3_rd11
//	level_3_rd12
//	level_3_rd13
//	level_3_rd14
//	level_3_rd15
//	level_3_rd16
//	level_3_rd17
inline hw_uint<288> level_2_level_3_update_0_read_bundle_read(level_2_cache& level_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 18
    // level_3_rd0
    // level_3_rd1
    // level_3_rd2
    // level_3_rd3
    // level_3_rd4
    // level_3_rd5
    // level_3_rd6
    // level_3_rd7
    // level_3_rd8
    // level_3_rd9
    // level_3_rd10
    // level_3_rd11
    // level_3_rd12
    // level_3_rd13
    // level_3_rd14
    // level_3_rd15
    // level_3_rd16
    // level_3_rd17

	hw_uint<288> result;
	hw_uint<16> level_3_rd0_res = level_3_rd0_select(level_2, d0, d1, dynamic_address);
	set_at<0, 288>(result, level_3_rd0_res);
	hw_uint<16> level_3_rd1_res = level_3_rd1_select(level_2, d0, d1, dynamic_address);
	set_at<16, 288>(result, level_3_rd1_res);
	hw_uint<16> level_3_rd2_res = level_3_rd2_select(level_2, d0, d1, dynamic_address);
	set_at<32, 288>(result, level_3_rd2_res);
	hw_uint<16> level_3_rd3_res = level_3_rd3_select(level_2, d0, d1, dynamic_address);
	set_at<48, 288>(result, level_3_rd3_res);
	hw_uint<16> level_3_rd4_res = level_3_rd4_select(level_2, d0, d1, dynamic_address);
	set_at<64, 288>(result, level_3_rd4_res);
	hw_uint<16> level_3_rd5_res = level_3_rd5_select(level_2, d0, d1, dynamic_address);
	set_at<80, 288>(result, level_3_rd5_res);
	hw_uint<16> level_3_rd6_res = level_3_rd6_select(level_2, d0, d1, dynamic_address);
	set_at<96, 288>(result, level_3_rd6_res);
	hw_uint<16> level_3_rd7_res = level_3_rd7_select(level_2, d0, d1, dynamic_address);
	set_at<112, 288>(result, level_3_rd7_res);
	hw_uint<16> level_3_rd8_res = level_3_rd8_select(level_2, d0, d1, dynamic_address);
	set_at<128, 288>(result, level_3_rd8_res);
	hw_uint<16> level_3_rd9_res = level_3_rd9_select(level_2, d0, d1, dynamic_address);
	set_at<144, 288>(result, level_3_rd9_res);
	hw_uint<16> level_3_rd10_res = level_3_rd10_select(level_2, d0, d1, dynamic_address);
	set_at<160, 288>(result, level_3_rd10_res);
	hw_uint<16> level_3_rd11_res = level_3_rd11_select(level_2, d0, d1, dynamic_address);
	set_at<176, 288>(result, level_3_rd11_res);
	hw_uint<16> level_3_rd12_res = level_3_rd12_select(level_2, d0, d1, dynamic_address);
	set_at<192, 288>(result, level_3_rd12_res);
	hw_uint<16> level_3_rd13_res = level_3_rd13_select(level_2, d0, d1, dynamic_address);
	set_at<208, 288>(result, level_3_rd13_res);
	hw_uint<16> level_3_rd14_res = level_3_rd14_select(level_2, d0, d1, dynamic_address);
	set_at<224, 288>(result, level_3_rd14_res);
	hw_uint<16> level_3_rd15_res = level_3_rd15_select(level_2, d0, d1, dynamic_address);
	set_at<240, 288>(result, level_3_rd15_res);
	hw_uint<16> level_3_rd16_res = level_3_rd16_select(level_2, d0, d1, dynamic_address);
	set_at<256, 288>(result, level_3_rd16_res);
	hw_uint<16> level_3_rd17_res = level_3_rd17_select(level_2, d0, d1, dynamic_address);
	set_at<272, 288>(result, level_3_rd17_res);
	return result;
}

#include "hw_classes.h"

struct level_3_level_3_update_0_write0_to_gp64x64_32_rd0_cache {
	// RAM Box: {[0, 62], [0, 63]}
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

struct level_3_level_3_update_0_write1_to_gp64x64_32_rd1_cache {
	// RAM Box: {[1, 63], [0, 63]}
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
  // # of banks: 2
  level_3_level_3_update_0_write0_to_gp64x64_32_rd0_cache level_3_level_3_update_0_write0_to_gp64x64_32_rd0;
  level_3_level_3_update_0_write1_to_gp64x64_32_rd1_cache level_3_level_3_update_0_write1_to_gp64x64_32_rd1;
};



inline void level_3_level_3_update_0_write0_write(hw_uint<16>& level_3_level_3_update_0_write0, level_3_cache& level_3, int d0, int d1, int dynamic_address) {
  level_3.level_3_level_3_update_0_write0_to_gp64x64_32_rd0.push(level_3_level_3_update_0_write0);
}

inline void level_3_level_3_update_0_write1_write(hw_uint<16>& level_3_level_3_update_0_write1, level_3_cache& level_3, int d0, int d1, int dynamic_address) {
  level_3.level_3_level_3_update_0_write1_to_gp64x64_32_rd1.push(level_3_level_3_update_0_write1);
}

inline hw_uint<16> gp64x64_32_rd0_select(level_3_cache& level_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp64x64_32_rd0 read pattern: { gp64x64_32_update_0[d0, d1] -> level_3[2d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Read schedule : { gp64x64_32_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 6] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Write schedule: { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  auto value_level_3_level_3_update_0_write0 = level_3.level_3_level_3_update_0_write0_to_gp64x64_32_rd0.peek(/* one reader or all rams */ 0);
  return value_level_3_level_3_update_0_write0;
  return 0;
}

inline hw_uint<16> gp64x64_32_rd1_select(level_3_cache& level_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp64x64_32_rd1 read pattern: { gp64x64_32_update_0[d0, d1] -> level_3[1 + 2d0, d1] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Read schedule : { gp64x64_32_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 6] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  // Write schedule: { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
  auto value_level_3_level_3_update_0_write1 = level_3.level_3_level_3_update_0_write1_to_gp64x64_32_rd1.peek(/* one reader or all rams */ 0);
  return value_level_3_level_3_update_0_write1;
  return 0;
}

// # of bundles = 2
// gp64x64_32_update_0_read
//	gp64x64_32_rd0
//	gp64x64_32_rd1
inline hw_uint<32> level_3_gp64x64_32_update_0_read_bundle_read(level_3_cache& level_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // gp64x64_32_rd0
    // gp64x64_32_rd1

	hw_uint<32> result;
	hw_uint<16> gp64x64_32_rd0_res = gp64x64_32_rd0_select(level_3, d0, d1, dynamic_address);
	set_at<0, 32>(result, gp64x64_32_rd0_res);
	hw_uint<16> gp64x64_32_rd1_res = gp64x64_32_rd1_select(level_3, d0, d1, dynamic_address);
	set_at<16, 32>(result, gp64x64_32_rd1_res);
	return result;
}

// level_3_update_0_write
//	level_3_level_3_update_0_write0
//	level_3_level_3_update_0_write1
inline void level_3_level_3_update_0_write_bundle_write(hw_uint<32>& level_3_update_0_write, level_3_cache& level_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> level_3_level_3_update_0_write0_res = level_3_update_0_write.extract<0, 15>();
	level_3_level_3_update_0_write0_write(level_3_level_3_update_0_write0_res, level_3, d0, d1, dynamic_address);
	hw_uint<16> level_3_level_3_update_0_write1_res = level_3_update_0_write.extract<16, 31>();
	level_3_level_3_update_0_write1_write(level_3_level_3_update_0_write1_res, level_3, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 68672 bits


// Operation logic
inline void level_2_update_0(level_1_cache& level_1, level_2_cache& level_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: level_1
	auto level_1_0_c__0_value = level_1_level_2_update_0_read_bundle_read(level_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_4(level_1_0_c__0_value);
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

	auto compute_result = reduce_gauss_unrolled_2(level_2_0_c__0_value);
	// Produce: level_3
	level_3_level_3_update_0_write_bundle_write(/* arg names */compute_result, level_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp64x64_32_update_0(level_3_cache& level_3, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */gp64x64_32, int d0, int d1) {
  // Dynamic address computation

	// Consume: level_3
	auto level_3_0_c__0_value = level_3_gp64x64_32_update_0_read_bundle_read(level_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_2(level_3_0_c__0_value);
	// Produce: gp64x64_32
	gp64x64_32.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_update_0(HWStream<hw_uint<512> >& /* buffer_args num ports = 32 */in_off_chip, in_cache& in, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_off_chip
	auto in_off_chip_0_c__0_value = in_off_chip.read();
	auto compute_result = id_unrolled_32(in_off_chip_0_c__0_value);
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

	auto compute_result = reduce_gauss_unrolled_16(in_0_c__0_value);
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

	auto compute_result = reduce_gauss_unrolled_8(level_0_0_c__0_value);
	// Produce: level_1
	level_1_level_1_update_0_write_bundle_write(/* arg names */compute_result, level_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void gp64x64_32_opt(HWStream<hw_uint<512> >& /* get_args num ports = 32 */in_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 2 */gp64x64_32) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("gp64x64_32_opt_debug.csv");
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

// schedule: { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 63; level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518; level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128; gp64x64_32_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 6] : 0 <= d0 <= 31 and 0 <= d1 <= 63; in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038; level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
//   { level_3_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 5] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
// Condition for level_3_update_0(((-2 - i0 + 16*floord(2 + i0, 16) == 0) && (-5 + i2 == 0) && (-4 + i1 >= 0) && (35 - i1 >= 0) && (-30 + i0 >= 0) && (1038 - i0 >= 0)))
//   { level_0_update_0[d0, d1] -> [2 + 2d1, 1 + d0, 2] : 0 <= d0 <= 34 and 0 <= d1 <= 518 }
// Condition for level_0_update_0(((-i0 + 2*floord(i0, 2) == 0) && (-2 + i2 == 0) && (-1 + i1 >= 0) && (35 - i1 >= 0) && (-2 + i0 >= 0) && (1038 - i0 >= 0)))
//   { level_2_update_0[d0, d1] -> [14 + 8d1, 3 + d0, 4] : 0 <= d0 <= 32 and 0 <= d1 <= 128 }
// Condition for level_2_update_0(((-2 - i0 + 8*floord(2 + i0, 8) == 0) && (-4 + i2 == 0) && (-3 + i1 >= 0) && (35 - i1 >= 0) && (-14 + i0 >= 0) && (1038 - i0 >= 0)))
//   { gp64x64_32_update_0[d0, d1] -> [30 + 16d1, 4 + d0, 6] : 0 <= d0 <= 31 and 0 <= d1 <= 63 }
// Condition for gp64x64_32_update_0(((-2 - i0 + 16*floord(2 + i0, 16) == 0) && (-6 + i2 == 0) && (-4 + i1 >= 0) && (35 - i1 >= 0) && (-30 + i0 >= 0) && (1038 - i0 >= 0)))
//   { in_update_0[d0, d1] -> [d1, d0, 1] : 0 <= d0 <= 35 and 0 <= d1 <= 1038 }
// Condition for in_update_0(((-1 + i2 == 0) && (i1 >= 0) && (35 - i1 >= 0) && (i0 >= 0) && (1038 - i0 >= 0)))
//   { level_1_update_0[d0, d1] -> [6 + 4d1, 2 + d0, 3] : 0 <= d0 <= 33 and 0 <= d1 <= 258 }
// Condition for level_1_update_0(((-2 - i0 + 4*floord(2 + i0, 4) == 0) && (-3 + i2 == 0) && (-2 + i1 >= 0) && (35 - i1 >= 0) && (-6 + i0 >= 0) && (1038 - i0 >= 0)))

  /*
  // Schedules...
    // gp64x64_32_update_0 -> [1*d1*1*16 + 1*30,1*d0*1*1 + 1*4,1*6]
    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // level_0_update_0 -> [1*d1*1*2 + 1*2,1*d0*1*1 + 1*1,1*2]
    // level_1_update_0 -> [1*d1*1*4 + 1*6,1*d0*1*1 + 1*2,1*3]
    // level_2_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*1 + 1*3,1*4]
    // level_3_update_0 -> [1*d1*1*16 + 1*30,1*d0*1*1 + 1*4,1*5]
for (int c0 = 0; c0 <= 1038; c0++) {
  for (int c1 = 0; c1 <= 35; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((0 <= c1 && c1 <= 35) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1038) && ((c0 - 0) % 1 == 0)) {
      in_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((1 <= c1 && c1 <= 35) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1038) && ((c0 - 2) % 2 == 0)) {
      level_0_update_0((c1 - 1) / 1, (c0 - 2) / 2);
    }

    if ((2 <= c1 && c1 <= 35) && ((c1 - 2) % 1 == 0) && (6 <= c0 && c0 <= 1038) && ((c0 - 6) % 4 == 0)) {
      level_1_update_0((c1 - 2) / 1, (c0 - 6) / 4);
    }

    if ((3 <= c1 && c1 <= 35) && ((c1 - 3) % 1 == 0) && (14 <= c0 && c0 <= 1038) && ((c0 - 14) % 8 == 0)) {
      level_2_update_0((c1 - 3) / 1, (c0 - 14) / 8);
    }

    if ((4 <= c1 && c1 <= 35) && ((c1 - 4) % 1 == 0) && (30 <= c0 && c0 <= 1038) && ((c0 - 30) % 16 == 0)) {
      level_3_update_0((c1 - 4) / 1, (c0 - 30) / 16);
    }

    if ((4 <= c1 && c1 <= 35) && ((c1 - 4) % 1 == 0) && (30 <= c0 && c0 <= 1038) && ((c0 - 30) % 16 == 0)) {
      gp64x64_32_update_0((c1 - 4) / 1, (c0 - 30) / 16);
    }

  }
}

  */
	  // Schedules...
	    // gp64x64_32_update_0 -> [1*d1*1*16 + 1*30,1*d0*1*1 + 1*4,1*6]
	    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // level_0_update_0 -> [1*d1*1*2 + 1*2,1*d0*1*1 + 1*1,1*2]
	    // level_1_update_0 -> [1*d1*1*4 + 1*6,1*d0*1*1 + 1*2,1*3]
	    // level_2_update_0 -> [1*d1*1*8 + 1*14,1*d0*1*1 + 1*3,1*4]
	    // level_3_update_0 -> [1*d1*1*16 + 1*30,1*d0*1*1 + 1*4,1*5]
	for (int c0 = 0; c0 <= 1038; c0++) {
	  for (int c1 = 0; c1 <= 35; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((0 <= c1 && c1 <= 35) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 1038) && ((c0 - 0) % 1 == 0)) {
	      in_update_0(in_off_chip /* buf name */, in, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 35) && ((c1 - 1) % 1 == 0) && (2 <= c0 && c0 <= 1038) && ((c0 - 2) % 2 == 0)) {
	      level_0_update_0(in /* buf name */, level_0, (c1 - 1) / 1, (c0 - 2) / 2);
	    }
	
	    if ((2 <= c1 && c1 <= 35) && ((c1 - 2) % 1 == 0) && (6 <= c0 && c0 <= 1038) && ((c0 - 6) % 4 == 0)) {
	      level_1_update_0(level_0 /* buf name */, level_1, (c1 - 2) / 1, (c0 - 6) / 4);
	    }
	
	    if ((3 <= c1 && c1 <= 35) && ((c1 - 3) % 1 == 0) && (14 <= c0 && c0 <= 1038) && ((c0 - 14) % 8 == 0)) {
	      level_2_update_0(level_1 /* buf name */, level_2, (c1 - 3) / 1, (c0 - 14) / 8);
	    }
	
	    if ((4 <= c1 && c1 <= 35) && ((c1 - 4) % 1 == 0) && (30 <= c0 && c0 <= 1038) && ((c0 - 30) % 16 == 0)) {
	      level_3_update_0(level_2 /* buf name */, level_3, (c1 - 4) / 1, (c0 - 30) / 16);
	    }
	
	    if ((4 <= c1 && c1 <= 35) && ((c1 - 4) % 1 == 0) && (30 <= c0 && c0 <= 1038) && ((c0 - 30) % 16 == 0)) {
	      gp64x64_32_update_0(level_3 /* buf name */, gp64x64_32, (c1 - 4) / 1, (c0 - 30) / 16);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void gp64x64_32_opt_wrapper(HWStream<hw_uint<512> >& /* get_args num ports = 32 */in_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 2 */gp64x64_32, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    gp64x64_32_opt(in_off_chip, gp64x64_32);
  }
}
#ifdef __VIVADO_SYNTH__
  // { gp64x64_32_update_0[root = 0, gp64x64_32_0, gp64x64_32_1] -> gp64x64_32[0, 0] : 0 <= gp64x64_32_0 <= 31 and 0 <= gp64x64_32_1 <= 63 }
const int gp64x64_32_update_0_write_pipe0_num_transfers = 2048;
  // { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : 0 <= in_0 <= 35 and 0 <= in_1 <= 1038 }
const int in_update_0_read_pipe0_num_transfers = 37404;


extern "C" {

void gp64x64_32_opt_accel(hw_uint<512>* in_update_0_read_pipe0, hw_uint<32>* gp64x64_32_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = gp64x64_32_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = gp64x64_32_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<512> > in_update_0_read_pipe0_channel;
  static HWStream<hw_uint<32> > gp64x64_32_update_0_write_pipe0_channel;

  burst_read<512>(in_update_0_read_pipe0, in_update_0_read_pipe0_channel, in_update_0_read_pipe0_num_transfers*size);

  gp64x64_32_opt_wrapper(in_update_0_read_pipe0_channel, gp64x64_32_update_0_write_pipe0_channel, size);

  burst_write<32>(gp64x64_32_update_0_write_pipe0, gp64x64_32_update_0_write_pipe0_channel, gp64x64_32_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void gp64x64_32_opt_rdai(HWStream<hw_uint<512> >& in_update_0_read_pipe0, HWStream<hw_uint<32> >&  gp64x64_32_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = gp64x64_32_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  gp64x64_32_opt(in_update_0_read_pipe0, gp64x64_32_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

