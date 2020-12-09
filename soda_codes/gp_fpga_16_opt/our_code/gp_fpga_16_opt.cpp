#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: gp_fpga_16_opt_compute_units.h
#include "gp_fpga_16_opt_compute_units.h"

#include "hw_classes.h"

struct in_in_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-32, 1952], [-7, 1079]}
	// Capacity: 254
	// # of read delays: 6
  // 0, 1, 126, 127, 252, 253
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 124> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 124> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


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

	inline hw_uint<16> peek_251() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_252() {
		return f8;
	}

	inline hw_uint<16> peek_253() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 124
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 124 reading from capacity: 1
    f7.push(f6);
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

struct in_in_update_0_write1_merged_banks_9_cache {
	// RAM Box: {[-31, 1937], [-7, 1079]}
	// Capacity: 254
	// # of read delays: 4
  // 0, 1, 127, 253
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 125> f5;
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

	inline hw_uint<16> peek_252() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_253() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f5.push(f4);
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

struct in_in_update_0_write10_merged_banks_9_cache {
	// RAM Box: {[-22, 1946], [-7, 1079]}
	// Capacity: 254
	// # of read delays: 4
  // 0, 1, 127, 253
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 125> f5;
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

	inline hw_uint<16> peek_252() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_253() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f5.push(f4);
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

struct in_in_update_0_write11_merged_banks_9_cache {
	// RAM Box: {[-21, 1947], [-7, 1079]}
	// Capacity: 254
	// # of read delays: 4
  // 0, 1, 127, 253
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 125> f5;
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

	inline hw_uint<16> peek_252() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_253() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f5.push(f4);
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

struct in_in_update_0_write12_merged_banks_9_cache {
	// RAM Box: {[-20, 1948], [-7, 1079]}
	// Capacity: 254
	// # of read delays: 4
  // 0, 1, 127, 253
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 125> f5;
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

	inline hw_uint<16> peek_252() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_253() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f5.push(f4);
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

struct in_in_update_0_write13_merged_banks_9_cache {
	// RAM Box: {[-19, 1949], [-7, 1079]}
	// Capacity: 254
	// # of read delays: 4
  // 0, 1, 127, 253
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 125> f5;
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

	inline hw_uint<16> peek_252() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_253() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f5.push(f4);
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

struct in_in_update_0_write14_merged_banks_9_cache {
	// RAM Box: {[-18, 1950], [-7, 1079]}
	// Capacity: 254
	// # of read delays: 4
  // 0, 1, 127, 253
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 125> f5;
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

	inline hw_uint<16> peek_252() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_253() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f5.push(f4);
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

struct in_in_update_0_write15_merged_banks_9_cache {
	// RAM Box: {[-33, 1951], [-7, 1079]}
	// Capacity: 255
	// # of read delays: 7
  // 0, 1, 2, 127, 128, 253, 254
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 124> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 124> f9;
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

	inline hw_uint<16> peek_126() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_127() {
		return f6;
	}

	inline hw_uint<16> peek_128() {
		return f8;
	}

	inline hw_uint<16> peek_252() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_253() {
		return f10;
	}

	inline hw_uint<16> peek_254() {
		return f12;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 124
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 124 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 124
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 124 reading from capacity: 1
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

struct in_in_update_0_write2_merged_banks_9_cache {
	// RAM Box: {[-30, 1938], [-7, 1079]}
	// Capacity: 254
	// # of read delays: 4
  // 0, 1, 127, 253
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 125> f5;
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

	inline hw_uint<16> peek_252() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_253() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f5.push(f4);
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

struct in_in_update_0_write3_merged_banks_9_cache {
	// RAM Box: {[-29, 1939], [-7, 1079]}
	// Capacity: 254
	// # of read delays: 4
  // 0, 1, 127, 253
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 125> f5;
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

	inline hw_uint<16> peek_252() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_253() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f5.push(f4);
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

struct in_in_update_0_write4_merged_banks_9_cache {
	// RAM Box: {[-28, 1940], [-7, 1079]}
	// Capacity: 254
	// # of read delays: 4
  // 0, 1, 127, 253
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 125> f5;
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

	inline hw_uint<16> peek_252() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_253() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f5.push(f4);
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

struct in_in_update_0_write5_merged_banks_9_cache {
	// RAM Box: {[-27, 1941], [-7, 1079]}
	// Capacity: 254
	// # of read delays: 4
  // 0, 1, 127, 253
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 125> f5;
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

	inline hw_uint<16> peek_252() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_253() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f5.push(f4);
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

struct in_in_update_0_write6_merged_banks_9_cache {
	// RAM Box: {[-26, 1942], [-7, 1079]}
	// Capacity: 254
	// # of read delays: 4
  // 0, 1, 127, 253
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 125> f5;
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

	inline hw_uint<16> peek_252() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_253() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f5.push(f4);
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

struct in_in_update_0_write7_merged_banks_9_cache {
	// RAM Box: {[-25, 1943], [-7, 1079]}
	// Capacity: 254
	// # of read delays: 4
  // 0, 1, 127, 253
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 125> f5;
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

	inline hw_uint<16> peek_252() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_253() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f5.push(f4);
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

struct in_in_update_0_write8_merged_banks_9_cache {
	// RAM Box: {[-24, 1944], [-7, 1079]}
	// Capacity: 254
	// # of read delays: 4
  // 0, 1, 127, 253
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 125> f5;
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

	inline hw_uint<16> peek_252() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_253() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f5.push(f4);
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

struct in_in_update_0_write9_merged_banks_9_cache {
	// RAM Box: {[-23, 1945], [-7, 1079]}
	// Capacity: 254
	// # of read delays: 4
  // 0, 1, 127, 253
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 125> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 125> f5;
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

	inline hw_uint<16> peek_252() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_253() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 125
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 125 reading from capacity: 1
    f5.push(f4);
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

struct in_cache {
  // # of banks: 16
  in_in_update_0_write0_merged_banks_9_cache in_in_update_0_write0_merged_banks_9;
  in_in_update_0_write1_merged_banks_9_cache in_in_update_0_write1_merged_banks_9;
  in_in_update_0_write10_merged_banks_9_cache in_in_update_0_write10_merged_banks_9;
  in_in_update_0_write11_merged_banks_9_cache in_in_update_0_write11_merged_banks_9;
  in_in_update_0_write12_merged_banks_9_cache in_in_update_0_write12_merged_banks_9;
  in_in_update_0_write13_merged_banks_9_cache in_in_update_0_write13_merged_banks_9;
  in_in_update_0_write14_merged_banks_9_cache in_in_update_0_write14_merged_banks_9;
  in_in_update_0_write15_merged_banks_9_cache in_in_update_0_write15_merged_banks_9;
  in_in_update_0_write2_merged_banks_9_cache in_in_update_0_write2_merged_banks_9;
  in_in_update_0_write3_merged_banks_9_cache in_in_update_0_write3_merged_banks_9;
  in_in_update_0_write4_merged_banks_9_cache in_in_update_0_write4_merged_banks_9;
  in_in_update_0_write5_merged_banks_9_cache in_in_update_0_write5_merged_banks_9;
  in_in_update_0_write6_merged_banks_9_cache in_in_update_0_write6_merged_banks_9;
  in_in_update_0_write7_merged_banks_9_cache in_in_update_0_write7_merged_banks_9;
  in_in_update_0_write8_merged_banks_9_cache in_in_update_0_write8_merged_banks_9;
  in_in_update_0_write9_merged_banks_9_cache in_in_update_0_write9_merged_banks_9;
};



inline void in_in_update_0_write0_write(hw_uint<16>& in_in_update_0_write0, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write0_merged_banks_9.push(in_in_update_0_write0);
}

inline void in_in_update_0_write1_write(hw_uint<16>& in_in_update_0_write1, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write1_merged_banks_9.push(in_in_update_0_write1);
}

inline void in_in_update_0_write10_write(hw_uint<16>& in_in_update_0_write10, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write10_merged_banks_9.push(in_in_update_0_write10);
}

inline void in_in_update_0_write11_write(hw_uint<16>& in_in_update_0_write11, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write11_merged_banks_9.push(in_in_update_0_write11);
}

inline void in_in_update_0_write12_write(hw_uint<16>& in_in_update_0_write12, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write12_merged_banks_9.push(in_in_update_0_write12);
}

inline void in_in_update_0_write13_write(hw_uint<16>& in_in_update_0_write13, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write13_merged_banks_9.push(in_in_update_0_write13);
}

inline void in_in_update_0_write14_write(hw_uint<16>& in_in_update_0_write14, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write14_merged_banks_9.push(in_in_update_0_write14);
}

inline void in_in_update_0_write15_write(hw_uint<16>& in_in_update_0_write15, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write15_merged_banks_9.push(in_in_update_0_write15);
}

inline void in_in_update_0_write2_write(hw_uint<16>& in_in_update_0_write2, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write2_merged_banks_9.push(in_in_update_0_write2);
}

inline void in_in_update_0_write3_write(hw_uint<16>& in_in_update_0_write3, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write3_merged_banks_9.push(in_in_update_0_write3);
}

inline void in_in_update_0_write4_write(hw_uint<16>& in_in_update_0_write4, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write4_merged_banks_9.push(in_in_update_0_write4);
}

inline void in_in_update_0_write5_write(hw_uint<16>& in_in_update_0_write5, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write5_merged_banks_9.push(in_in_update_0_write5);
}

inline void in_in_update_0_write6_write(hw_uint<16>& in_in_update_0_write6, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write6_merged_banks_9.push(in_in_update_0_write6);
}

inline void in_in_update_0_write7_write(hw_uint<16>& in_in_update_0_write7, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write7_merged_banks_9.push(in_in_update_0_write7);
}

inline void in_in_update_0_write8_write(hw_uint<16>& in_in_update_0_write8, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write8_merged_banks_9.push(in_in_update_0_write8);
}

inline void in_in_update_0_write9_write(hw_uint<16>& in_in_update_0_write9, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write9_merged_banks_9.push(in_in_update_0_write9);
}

inline hw_uint<16> in_gauss_blur_1_rd0_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd0 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[-1 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_9.peek_254();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd1_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd1 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[-1 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_9.peek_128();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd10_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd10 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_127();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd100_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd100 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[10 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_9.peek_127();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd101_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd101 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[10 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_9.peek_1();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd102_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd102 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[11 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_9.peek_253();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd103_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd103 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[11 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_9.peek_127();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd104_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd104 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[11 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_9.peek_1();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd105_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd105 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[12 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_9.peek_253();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd106_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd106 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[12 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_9.peek_127();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd107_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd107 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[12 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_9.peek_1();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd108_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd108 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[11 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_9.peek_253();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd109_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd109 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[11 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_9.peek_127();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd11_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd11 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_1();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd110_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd110 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[11 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_9.peek_1();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd111_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd111 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[12 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_9.peek_253();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd112_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd112 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[12 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_9.peek_127();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd113_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd113 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[12 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_9.peek_1();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd114_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd114 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[13 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_9.peek_253();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd115_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd115 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[13 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_9.peek_127();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd116_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd116 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[13 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_9.peek_1();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd117_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd117 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[12 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_9.peek_253();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd118_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd118 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[12 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_9.peek_127();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd119_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd119 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[12 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_9.peek_1();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd12_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd12 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_253();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd120_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd120 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[13 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_9.peek_253();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd121_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd121 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[13 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_9.peek_127();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd122_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd122 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[13 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_9.peek_1();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd123_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd123 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[14 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_9.peek_253();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd124_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd124 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[14 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_9.peek_127();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd125_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd125 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[14 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_9.peek_1();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd126_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd126 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[13 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_9.peek_253();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd127_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd127 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[13 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_9.peek_127();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd128_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd128 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[13 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_9.peek_1();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd129_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd129 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[14 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_9.peek_253();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd13_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd13 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_127();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd130_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd130 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[14 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_9.peek_127();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd131_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd131 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[14 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_9.peek_1();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd132_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd132 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[15 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_9.peek_253();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd133_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd133 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[15 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_9.peek_127();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd134_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd134 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[15 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_9.peek_1();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd135_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd135 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[14 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_9.peek_253();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd136_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd136 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[14 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_9.peek_127();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd137_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd137 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[14 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_9.peek_1();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd138_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd138 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[15 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_9.peek_253();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd139_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd139 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[15 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_9.peek_127();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd14_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd14 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_1();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd140_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd140 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[15 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_9.peek_1();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd141_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd141 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[16 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_252();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd142_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd142 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[16 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_126();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd143_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd143 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[16 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_0();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd15_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd15 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_253();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd16_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd16 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_127();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd17_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd17 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_1();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd18_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd18 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_253();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd19_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd19 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_127();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd2_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd2 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[-1 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_9.peek_2();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd20_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd20 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_1();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd21_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd21 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_253();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd22_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd22 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_127();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd23_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd23 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_1();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd24_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd24 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_253();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd25_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd25 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_127();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd26_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd26 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_1();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd27_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd27 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_253();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd28_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd28 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_127();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd29_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd29 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_1();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd3_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd3 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_253();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd30_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd30 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_253();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd31_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd31 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_127();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd32_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd32 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_1();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd33_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd33 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_253();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd34_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd34 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_127();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd35_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd35 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_1();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd36_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd36 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_253();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd37_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd37 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_127();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd38_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd38 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_1();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd39_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd39 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_253();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd4_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd4 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_127();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd40_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd40 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_127();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd41_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd41 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_1();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd42_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd42 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_253();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd43_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd43 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_127();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd44_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd44 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_1();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd45_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd45 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_253();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd46_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd46 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_127();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd47_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd47 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_1();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd48_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd48 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_253();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd49_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd49 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_127();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd5_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd5 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_1();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd50_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd50 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_1();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd51_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd51 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_253();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd52_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd52 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_127();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd53_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd53 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_1();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd54_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd54 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_253();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd55_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd55 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_127();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd56_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd56 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_1();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd57_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd57 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_253();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd58_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd58 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_127();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd59_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd59 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_1();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd6_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd6 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_253();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd60_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd60 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_253();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd61_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd61 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_127();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd62_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd62 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_1();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd63_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd63 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_253();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd64_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd64 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_127();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd65_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd65 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_1();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd66_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd66 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_253();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd67_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd67 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_127();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd68_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd68 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_1();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd69_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd69 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_9.peek_253();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd7_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd7 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_127();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd70_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd70 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_9.peek_127();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd71_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd71 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_9.peek_1();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd72_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd72 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_253();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd73_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd73 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_127();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd74_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd74 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_1();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd75_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd75 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_9.peek_253();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd76_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd76 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_9.peek_127();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd77_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd77 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_9.peek_1();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd78_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd78 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[9 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_9.peek_253();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd79_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd79 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[9 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_9.peek_127();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd8_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd8 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_1();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd80_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd80 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[9 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_9.peek_1();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd81_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd81 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_9.peek_253();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd82_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd82 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_9.peek_127();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd83_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd83 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_9.peek_1();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd84_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd84 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[9 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_9.peek_253();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd85_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd85 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[9 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_9.peek_127();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd86_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd86 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[9 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_9.peek_1();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd87_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd87 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[10 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_9.peek_253();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd88_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd88 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[10 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_9.peek_127();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd89_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd89 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[10 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_9.peek_1();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd9_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd9 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_253();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd90_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd90 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[9 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_9.peek_253();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd91_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd91 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[9 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_9.peek_127();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd92_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd92 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[9 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_9.peek_1();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd93_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd93 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[10 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_9.peek_253();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd94_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd94 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[10 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_9.peek_127();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd95_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd95 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[10 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_9.peek_1();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd96_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd96 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[11 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_9.peek_253();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd97_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd97 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[11 + 16d0, d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_9.peek_127();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd98_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd98 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[11 + 16d0, 1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_9.peek_1();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd99_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd99 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[10 + 16d0, -1 + d1] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_9.peek_253();
  return value_in_in_update_0_write10;
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
//	in_gauss_blur_1_rd18
//	in_gauss_blur_1_rd19
//	in_gauss_blur_1_rd20
//	in_gauss_blur_1_rd21
//	in_gauss_blur_1_rd22
//	in_gauss_blur_1_rd23
//	in_gauss_blur_1_rd24
//	in_gauss_blur_1_rd25
//	in_gauss_blur_1_rd26
//	in_gauss_blur_1_rd27
//	in_gauss_blur_1_rd28
//	in_gauss_blur_1_rd29
//	in_gauss_blur_1_rd30
//	in_gauss_blur_1_rd31
//	in_gauss_blur_1_rd32
//	in_gauss_blur_1_rd33
//	in_gauss_blur_1_rd34
//	in_gauss_blur_1_rd35
//	in_gauss_blur_1_rd36
//	in_gauss_blur_1_rd37
//	in_gauss_blur_1_rd38
//	in_gauss_blur_1_rd39
//	in_gauss_blur_1_rd40
//	in_gauss_blur_1_rd41
//	in_gauss_blur_1_rd42
//	in_gauss_blur_1_rd43
//	in_gauss_blur_1_rd44
//	in_gauss_blur_1_rd45
//	in_gauss_blur_1_rd46
//	in_gauss_blur_1_rd47
//	in_gauss_blur_1_rd48
//	in_gauss_blur_1_rd49
//	in_gauss_blur_1_rd50
//	in_gauss_blur_1_rd51
//	in_gauss_blur_1_rd52
//	in_gauss_blur_1_rd53
//	in_gauss_blur_1_rd54
//	in_gauss_blur_1_rd55
//	in_gauss_blur_1_rd56
//	in_gauss_blur_1_rd57
//	in_gauss_blur_1_rd58
//	in_gauss_blur_1_rd59
//	in_gauss_blur_1_rd60
//	in_gauss_blur_1_rd61
//	in_gauss_blur_1_rd62
//	in_gauss_blur_1_rd63
//	in_gauss_blur_1_rd64
//	in_gauss_blur_1_rd65
//	in_gauss_blur_1_rd66
//	in_gauss_blur_1_rd67
//	in_gauss_blur_1_rd68
//	in_gauss_blur_1_rd69
//	in_gauss_blur_1_rd70
//	in_gauss_blur_1_rd71
//	in_gauss_blur_1_rd72
//	in_gauss_blur_1_rd73
//	in_gauss_blur_1_rd74
//	in_gauss_blur_1_rd75
//	in_gauss_blur_1_rd76
//	in_gauss_blur_1_rd77
//	in_gauss_blur_1_rd78
//	in_gauss_blur_1_rd79
//	in_gauss_blur_1_rd80
//	in_gauss_blur_1_rd81
//	in_gauss_blur_1_rd82
//	in_gauss_blur_1_rd83
//	in_gauss_blur_1_rd84
//	in_gauss_blur_1_rd85
//	in_gauss_blur_1_rd86
//	in_gauss_blur_1_rd87
//	in_gauss_blur_1_rd88
//	in_gauss_blur_1_rd89
//	in_gauss_blur_1_rd90
//	in_gauss_blur_1_rd91
//	in_gauss_blur_1_rd92
//	in_gauss_blur_1_rd93
//	in_gauss_blur_1_rd94
//	in_gauss_blur_1_rd95
//	in_gauss_blur_1_rd96
//	in_gauss_blur_1_rd97
//	in_gauss_blur_1_rd98
//	in_gauss_blur_1_rd99
//	in_gauss_blur_1_rd100
//	in_gauss_blur_1_rd101
//	in_gauss_blur_1_rd102
//	in_gauss_blur_1_rd103
//	in_gauss_blur_1_rd104
//	in_gauss_blur_1_rd105
//	in_gauss_blur_1_rd106
//	in_gauss_blur_1_rd107
//	in_gauss_blur_1_rd108
//	in_gauss_blur_1_rd109
//	in_gauss_blur_1_rd110
//	in_gauss_blur_1_rd111
//	in_gauss_blur_1_rd112
//	in_gauss_blur_1_rd113
//	in_gauss_blur_1_rd114
//	in_gauss_blur_1_rd115
//	in_gauss_blur_1_rd116
//	in_gauss_blur_1_rd117
//	in_gauss_blur_1_rd118
//	in_gauss_blur_1_rd119
//	in_gauss_blur_1_rd120
//	in_gauss_blur_1_rd121
//	in_gauss_blur_1_rd122
//	in_gauss_blur_1_rd123
//	in_gauss_blur_1_rd124
//	in_gauss_blur_1_rd125
//	in_gauss_blur_1_rd126
//	in_gauss_blur_1_rd127
//	in_gauss_blur_1_rd128
//	in_gauss_blur_1_rd129
//	in_gauss_blur_1_rd130
//	in_gauss_blur_1_rd131
//	in_gauss_blur_1_rd132
//	in_gauss_blur_1_rd133
//	in_gauss_blur_1_rd134
//	in_gauss_blur_1_rd135
//	in_gauss_blur_1_rd136
//	in_gauss_blur_1_rd137
//	in_gauss_blur_1_rd138
//	in_gauss_blur_1_rd139
//	in_gauss_blur_1_rd140
//	in_gauss_blur_1_rd141
//	in_gauss_blur_1_rd142
//	in_gauss_blur_1_rd143
inline hw_uint<2304> in_in_gauss_blur_1_update_0_read_bundle_read(in_cache& in, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 144
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
    // in_gauss_blur_1_rd18
    // in_gauss_blur_1_rd19
    // in_gauss_blur_1_rd20
    // in_gauss_blur_1_rd21
    // in_gauss_blur_1_rd22
    // in_gauss_blur_1_rd23
    // in_gauss_blur_1_rd24
    // in_gauss_blur_1_rd25
    // in_gauss_blur_1_rd26
    // in_gauss_blur_1_rd27
    // in_gauss_blur_1_rd28
    // in_gauss_blur_1_rd29
    // in_gauss_blur_1_rd30
    // in_gauss_blur_1_rd31
    // in_gauss_blur_1_rd32
    // in_gauss_blur_1_rd33
    // in_gauss_blur_1_rd34
    // in_gauss_blur_1_rd35
    // in_gauss_blur_1_rd36
    // in_gauss_blur_1_rd37
    // in_gauss_blur_1_rd38
    // in_gauss_blur_1_rd39
    // in_gauss_blur_1_rd40
    // in_gauss_blur_1_rd41
    // in_gauss_blur_1_rd42
    // in_gauss_blur_1_rd43
    // in_gauss_blur_1_rd44
    // in_gauss_blur_1_rd45
    // in_gauss_blur_1_rd46
    // in_gauss_blur_1_rd47
    // in_gauss_blur_1_rd48
    // in_gauss_blur_1_rd49
    // in_gauss_blur_1_rd50
    // in_gauss_blur_1_rd51
    // in_gauss_blur_1_rd52
    // in_gauss_blur_1_rd53
    // in_gauss_blur_1_rd54
    // in_gauss_blur_1_rd55
    // in_gauss_blur_1_rd56
    // in_gauss_blur_1_rd57
    // in_gauss_blur_1_rd58
    // in_gauss_blur_1_rd59
    // in_gauss_blur_1_rd60
    // in_gauss_blur_1_rd61
    // in_gauss_blur_1_rd62
    // in_gauss_blur_1_rd63
    // in_gauss_blur_1_rd64
    // in_gauss_blur_1_rd65
    // in_gauss_blur_1_rd66
    // in_gauss_blur_1_rd67
    // in_gauss_blur_1_rd68
    // in_gauss_blur_1_rd69
    // in_gauss_blur_1_rd70
    // in_gauss_blur_1_rd71
    // in_gauss_blur_1_rd72
    // in_gauss_blur_1_rd73
    // in_gauss_blur_1_rd74
    // in_gauss_blur_1_rd75
    // in_gauss_blur_1_rd76
    // in_gauss_blur_1_rd77
    // in_gauss_blur_1_rd78
    // in_gauss_blur_1_rd79
    // in_gauss_blur_1_rd80
    // in_gauss_blur_1_rd81
    // in_gauss_blur_1_rd82
    // in_gauss_blur_1_rd83
    // in_gauss_blur_1_rd84
    // in_gauss_blur_1_rd85
    // in_gauss_blur_1_rd86
    // in_gauss_blur_1_rd87
    // in_gauss_blur_1_rd88
    // in_gauss_blur_1_rd89
    // in_gauss_blur_1_rd90
    // in_gauss_blur_1_rd91
    // in_gauss_blur_1_rd92
    // in_gauss_blur_1_rd93
    // in_gauss_blur_1_rd94
    // in_gauss_blur_1_rd95
    // in_gauss_blur_1_rd96
    // in_gauss_blur_1_rd97
    // in_gauss_blur_1_rd98
    // in_gauss_blur_1_rd99
    // in_gauss_blur_1_rd100
    // in_gauss_blur_1_rd101
    // in_gauss_blur_1_rd102
    // in_gauss_blur_1_rd103
    // in_gauss_blur_1_rd104
    // in_gauss_blur_1_rd105
    // in_gauss_blur_1_rd106
    // in_gauss_blur_1_rd107
    // in_gauss_blur_1_rd108
    // in_gauss_blur_1_rd109
    // in_gauss_blur_1_rd110
    // in_gauss_blur_1_rd111
    // in_gauss_blur_1_rd112
    // in_gauss_blur_1_rd113
    // in_gauss_blur_1_rd114
    // in_gauss_blur_1_rd115
    // in_gauss_blur_1_rd116
    // in_gauss_blur_1_rd117
    // in_gauss_blur_1_rd118
    // in_gauss_blur_1_rd119
    // in_gauss_blur_1_rd120
    // in_gauss_blur_1_rd121
    // in_gauss_blur_1_rd122
    // in_gauss_blur_1_rd123
    // in_gauss_blur_1_rd124
    // in_gauss_blur_1_rd125
    // in_gauss_blur_1_rd126
    // in_gauss_blur_1_rd127
    // in_gauss_blur_1_rd128
    // in_gauss_blur_1_rd129
    // in_gauss_blur_1_rd130
    // in_gauss_blur_1_rd131
    // in_gauss_blur_1_rd132
    // in_gauss_blur_1_rd133
    // in_gauss_blur_1_rd134
    // in_gauss_blur_1_rd135
    // in_gauss_blur_1_rd136
    // in_gauss_blur_1_rd137
    // in_gauss_blur_1_rd138
    // in_gauss_blur_1_rd139
    // in_gauss_blur_1_rd140
    // in_gauss_blur_1_rd141
    // in_gauss_blur_1_rd142
    // in_gauss_blur_1_rd143

	hw_uint<2304> result;
	hw_uint<16> in_gauss_blur_1_rd0_res = in_gauss_blur_1_rd0_select(in, d0, d1, dynamic_address);
	set_at<0, 2304>(result, in_gauss_blur_1_rd0_res);
	hw_uint<16> in_gauss_blur_1_rd1_res = in_gauss_blur_1_rd1_select(in, d0, d1, dynamic_address);
	set_at<16, 2304>(result, in_gauss_blur_1_rd1_res);
	hw_uint<16> in_gauss_blur_1_rd2_res = in_gauss_blur_1_rd2_select(in, d0, d1, dynamic_address);
	set_at<32, 2304>(result, in_gauss_blur_1_rd2_res);
	hw_uint<16> in_gauss_blur_1_rd3_res = in_gauss_blur_1_rd3_select(in, d0, d1, dynamic_address);
	set_at<48, 2304>(result, in_gauss_blur_1_rd3_res);
	hw_uint<16> in_gauss_blur_1_rd4_res = in_gauss_blur_1_rd4_select(in, d0, d1, dynamic_address);
	set_at<64, 2304>(result, in_gauss_blur_1_rd4_res);
	hw_uint<16> in_gauss_blur_1_rd5_res = in_gauss_blur_1_rd5_select(in, d0, d1, dynamic_address);
	set_at<80, 2304>(result, in_gauss_blur_1_rd5_res);
	hw_uint<16> in_gauss_blur_1_rd6_res = in_gauss_blur_1_rd6_select(in, d0, d1, dynamic_address);
	set_at<96, 2304>(result, in_gauss_blur_1_rd6_res);
	hw_uint<16> in_gauss_blur_1_rd7_res = in_gauss_blur_1_rd7_select(in, d0, d1, dynamic_address);
	set_at<112, 2304>(result, in_gauss_blur_1_rd7_res);
	hw_uint<16> in_gauss_blur_1_rd8_res = in_gauss_blur_1_rd8_select(in, d0, d1, dynamic_address);
	set_at<128, 2304>(result, in_gauss_blur_1_rd8_res);
	hw_uint<16> in_gauss_blur_1_rd9_res = in_gauss_blur_1_rd9_select(in, d0, d1, dynamic_address);
	set_at<144, 2304>(result, in_gauss_blur_1_rd9_res);
	hw_uint<16> in_gauss_blur_1_rd10_res = in_gauss_blur_1_rd10_select(in, d0, d1, dynamic_address);
	set_at<160, 2304>(result, in_gauss_blur_1_rd10_res);
	hw_uint<16> in_gauss_blur_1_rd11_res = in_gauss_blur_1_rd11_select(in, d0, d1, dynamic_address);
	set_at<176, 2304>(result, in_gauss_blur_1_rd11_res);
	hw_uint<16> in_gauss_blur_1_rd12_res = in_gauss_blur_1_rd12_select(in, d0, d1, dynamic_address);
	set_at<192, 2304>(result, in_gauss_blur_1_rd12_res);
	hw_uint<16> in_gauss_blur_1_rd13_res = in_gauss_blur_1_rd13_select(in, d0, d1, dynamic_address);
	set_at<208, 2304>(result, in_gauss_blur_1_rd13_res);
	hw_uint<16> in_gauss_blur_1_rd14_res = in_gauss_blur_1_rd14_select(in, d0, d1, dynamic_address);
	set_at<224, 2304>(result, in_gauss_blur_1_rd14_res);
	hw_uint<16> in_gauss_blur_1_rd15_res = in_gauss_blur_1_rd15_select(in, d0, d1, dynamic_address);
	set_at<240, 2304>(result, in_gauss_blur_1_rd15_res);
	hw_uint<16> in_gauss_blur_1_rd16_res = in_gauss_blur_1_rd16_select(in, d0, d1, dynamic_address);
	set_at<256, 2304>(result, in_gauss_blur_1_rd16_res);
	hw_uint<16> in_gauss_blur_1_rd17_res = in_gauss_blur_1_rd17_select(in, d0, d1, dynamic_address);
	set_at<272, 2304>(result, in_gauss_blur_1_rd17_res);
	hw_uint<16> in_gauss_blur_1_rd18_res = in_gauss_blur_1_rd18_select(in, d0, d1, dynamic_address);
	set_at<288, 2304>(result, in_gauss_blur_1_rd18_res);
	hw_uint<16> in_gauss_blur_1_rd19_res = in_gauss_blur_1_rd19_select(in, d0, d1, dynamic_address);
	set_at<304, 2304>(result, in_gauss_blur_1_rd19_res);
	hw_uint<16> in_gauss_blur_1_rd20_res = in_gauss_blur_1_rd20_select(in, d0, d1, dynamic_address);
	set_at<320, 2304>(result, in_gauss_blur_1_rd20_res);
	hw_uint<16> in_gauss_blur_1_rd21_res = in_gauss_blur_1_rd21_select(in, d0, d1, dynamic_address);
	set_at<336, 2304>(result, in_gauss_blur_1_rd21_res);
	hw_uint<16> in_gauss_blur_1_rd22_res = in_gauss_blur_1_rd22_select(in, d0, d1, dynamic_address);
	set_at<352, 2304>(result, in_gauss_blur_1_rd22_res);
	hw_uint<16> in_gauss_blur_1_rd23_res = in_gauss_blur_1_rd23_select(in, d0, d1, dynamic_address);
	set_at<368, 2304>(result, in_gauss_blur_1_rd23_res);
	hw_uint<16> in_gauss_blur_1_rd24_res = in_gauss_blur_1_rd24_select(in, d0, d1, dynamic_address);
	set_at<384, 2304>(result, in_gauss_blur_1_rd24_res);
	hw_uint<16> in_gauss_blur_1_rd25_res = in_gauss_blur_1_rd25_select(in, d0, d1, dynamic_address);
	set_at<400, 2304>(result, in_gauss_blur_1_rd25_res);
	hw_uint<16> in_gauss_blur_1_rd26_res = in_gauss_blur_1_rd26_select(in, d0, d1, dynamic_address);
	set_at<416, 2304>(result, in_gauss_blur_1_rd26_res);
	hw_uint<16> in_gauss_blur_1_rd27_res = in_gauss_blur_1_rd27_select(in, d0, d1, dynamic_address);
	set_at<432, 2304>(result, in_gauss_blur_1_rd27_res);
	hw_uint<16> in_gauss_blur_1_rd28_res = in_gauss_blur_1_rd28_select(in, d0, d1, dynamic_address);
	set_at<448, 2304>(result, in_gauss_blur_1_rd28_res);
	hw_uint<16> in_gauss_blur_1_rd29_res = in_gauss_blur_1_rd29_select(in, d0, d1, dynamic_address);
	set_at<464, 2304>(result, in_gauss_blur_1_rd29_res);
	hw_uint<16> in_gauss_blur_1_rd30_res = in_gauss_blur_1_rd30_select(in, d0, d1, dynamic_address);
	set_at<480, 2304>(result, in_gauss_blur_1_rd30_res);
	hw_uint<16> in_gauss_blur_1_rd31_res = in_gauss_blur_1_rd31_select(in, d0, d1, dynamic_address);
	set_at<496, 2304>(result, in_gauss_blur_1_rd31_res);
	hw_uint<16> in_gauss_blur_1_rd32_res = in_gauss_blur_1_rd32_select(in, d0, d1, dynamic_address);
	set_at<512, 2304>(result, in_gauss_blur_1_rd32_res);
	hw_uint<16> in_gauss_blur_1_rd33_res = in_gauss_blur_1_rd33_select(in, d0, d1, dynamic_address);
	set_at<528, 2304>(result, in_gauss_blur_1_rd33_res);
	hw_uint<16> in_gauss_blur_1_rd34_res = in_gauss_blur_1_rd34_select(in, d0, d1, dynamic_address);
	set_at<544, 2304>(result, in_gauss_blur_1_rd34_res);
	hw_uint<16> in_gauss_blur_1_rd35_res = in_gauss_blur_1_rd35_select(in, d0, d1, dynamic_address);
	set_at<560, 2304>(result, in_gauss_blur_1_rd35_res);
	hw_uint<16> in_gauss_blur_1_rd36_res = in_gauss_blur_1_rd36_select(in, d0, d1, dynamic_address);
	set_at<576, 2304>(result, in_gauss_blur_1_rd36_res);
	hw_uint<16> in_gauss_blur_1_rd37_res = in_gauss_blur_1_rd37_select(in, d0, d1, dynamic_address);
	set_at<592, 2304>(result, in_gauss_blur_1_rd37_res);
	hw_uint<16> in_gauss_blur_1_rd38_res = in_gauss_blur_1_rd38_select(in, d0, d1, dynamic_address);
	set_at<608, 2304>(result, in_gauss_blur_1_rd38_res);
	hw_uint<16> in_gauss_blur_1_rd39_res = in_gauss_blur_1_rd39_select(in, d0, d1, dynamic_address);
	set_at<624, 2304>(result, in_gauss_blur_1_rd39_res);
	hw_uint<16> in_gauss_blur_1_rd40_res = in_gauss_blur_1_rd40_select(in, d0, d1, dynamic_address);
	set_at<640, 2304>(result, in_gauss_blur_1_rd40_res);
	hw_uint<16> in_gauss_blur_1_rd41_res = in_gauss_blur_1_rd41_select(in, d0, d1, dynamic_address);
	set_at<656, 2304>(result, in_gauss_blur_1_rd41_res);
	hw_uint<16> in_gauss_blur_1_rd42_res = in_gauss_blur_1_rd42_select(in, d0, d1, dynamic_address);
	set_at<672, 2304>(result, in_gauss_blur_1_rd42_res);
	hw_uint<16> in_gauss_blur_1_rd43_res = in_gauss_blur_1_rd43_select(in, d0, d1, dynamic_address);
	set_at<688, 2304>(result, in_gauss_blur_1_rd43_res);
	hw_uint<16> in_gauss_blur_1_rd44_res = in_gauss_blur_1_rd44_select(in, d0, d1, dynamic_address);
	set_at<704, 2304>(result, in_gauss_blur_1_rd44_res);
	hw_uint<16> in_gauss_blur_1_rd45_res = in_gauss_blur_1_rd45_select(in, d0, d1, dynamic_address);
	set_at<720, 2304>(result, in_gauss_blur_1_rd45_res);
	hw_uint<16> in_gauss_blur_1_rd46_res = in_gauss_blur_1_rd46_select(in, d0, d1, dynamic_address);
	set_at<736, 2304>(result, in_gauss_blur_1_rd46_res);
	hw_uint<16> in_gauss_blur_1_rd47_res = in_gauss_blur_1_rd47_select(in, d0, d1, dynamic_address);
	set_at<752, 2304>(result, in_gauss_blur_1_rd47_res);
	hw_uint<16> in_gauss_blur_1_rd48_res = in_gauss_blur_1_rd48_select(in, d0, d1, dynamic_address);
	set_at<768, 2304>(result, in_gauss_blur_1_rd48_res);
	hw_uint<16> in_gauss_blur_1_rd49_res = in_gauss_blur_1_rd49_select(in, d0, d1, dynamic_address);
	set_at<784, 2304>(result, in_gauss_blur_1_rd49_res);
	hw_uint<16> in_gauss_blur_1_rd50_res = in_gauss_blur_1_rd50_select(in, d0, d1, dynamic_address);
	set_at<800, 2304>(result, in_gauss_blur_1_rd50_res);
	hw_uint<16> in_gauss_blur_1_rd51_res = in_gauss_blur_1_rd51_select(in, d0, d1, dynamic_address);
	set_at<816, 2304>(result, in_gauss_blur_1_rd51_res);
	hw_uint<16> in_gauss_blur_1_rd52_res = in_gauss_blur_1_rd52_select(in, d0, d1, dynamic_address);
	set_at<832, 2304>(result, in_gauss_blur_1_rd52_res);
	hw_uint<16> in_gauss_blur_1_rd53_res = in_gauss_blur_1_rd53_select(in, d0, d1, dynamic_address);
	set_at<848, 2304>(result, in_gauss_blur_1_rd53_res);
	hw_uint<16> in_gauss_blur_1_rd54_res = in_gauss_blur_1_rd54_select(in, d0, d1, dynamic_address);
	set_at<864, 2304>(result, in_gauss_blur_1_rd54_res);
	hw_uint<16> in_gauss_blur_1_rd55_res = in_gauss_blur_1_rd55_select(in, d0, d1, dynamic_address);
	set_at<880, 2304>(result, in_gauss_blur_1_rd55_res);
	hw_uint<16> in_gauss_blur_1_rd56_res = in_gauss_blur_1_rd56_select(in, d0, d1, dynamic_address);
	set_at<896, 2304>(result, in_gauss_blur_1_rd56_res);
	hw_uint<16> in_gauss_blur_1_rd57_res = in_gauss_blur_1_rd57_select(in, d0, d1, dynamic_address);
	set_at<912, 2304>(result, in_gauss_blur_1_rd57_res);
	hw_uint<16> in_gauss_blur_1_rd58_res = in_gauss_blur_1_rd58_select(in, d0, d1, dynamic_address);
	set_at<928, 2304>(result, in_gauss_blur_1_rd58_res);
	hw_uint<16> in_gauss_blur_1_rd59_res = in_gauss_blur_1_rd59_select(in, d0, d1, dynamic_address);
	set_at<944, 2304>(result, in_gauss_blur_1_rd59_res);
	hw_uint<16> in_gauss_blur_1_rd60_res = in_gauss_blur_1_rd60_select(in, d0, d1, dynamic_address);
	set_at<960, 2304>(result, in_gauss_blur_1_rd60_res);
	hw_uint<16> in_gauss_blur_1_rd61_res = in_gauss_blur_1_rd61_select(in, d0, d1, dynamic_address);
	set_at<976, 2304>(result, in_gauss_blur_1_rd61_res);
	hw_uint<16> in_gauss_blur_1_rd62_res = in_gauss_blur_1_rd62_select(in, d0, d1, dynamic_address);
	set_at<992, 2304>(result, in_gauss_blur_1_rd62_res);
	hw_uint<16> in_gauss_blur_1_rd63_res = in_gauss_blur_1_rd63_select(in, d0, d1, dynamic_address);
	set_at<1008, 2304>(result, in_gauss_blur_1_rd63_res);
	hw_uint<16> in_gauss_blur_1_rd64_res = in_gauss_blur_1_rd64_select(in, d0, d1, dynamic_address);
	set_at<1024, 2304>(result, in_gauss_blur_1_rd64_res);
	hw_uint<16> in_gauss_blur_1_rd65_res = in_gauss_blur_1_rd65_select(in, d0, d1, dynamic_address);
	set_at<1040, 2304>(result, in_gauss_blur_1_rd65_res);
	hw_uint<16> in_gauss_blur_1_rd66_res = in_gauss_blur_1_rd66_select(in, d0, d1, dynamic_address);
	set_at<1056, 2304>(result, in_gauss_blur_1_rd66_res);
	hw_uint<16> in_gauss_blur_1_rd67_res = in_gauss_blur_1_rd67_select(in, d0, d1, dynamic_address);
	set_at<1072, 2304>(result, in_gauss_blur_1_rd67_res);
	hw_uint<16> in_gauss_blur_1_rd68_res = in_gauss_blur_1_rd68_select(in, d0, d1, dynamic_address);
	set_at<1088, 2304>(result, in_gauss_blur_1_rd68_res);
	hw_uint<16> in_gauss_blur_1_rd69_res = in_gauss_blur_1_rd69_select(in, d0, d1, dynamic_address);
	set_at<1104, 2304>(result, in_gauss_blur_1_rd69_res);
	hw_uint<16> in_gauss_blur_1_rd70_res = in_gauss_blur_1_rd70_select(in, d0, d1, dynamic_address);
	set_at<1120, 2304>(result, in_gauss_blur_1_rd70_res);
	hw_uint<16> in_gauss_blur_1_rd71_res = in_gauss_blur_1_rd71_select(in, d0, d1, dynamic_address);
	set_at<1136, 2304>(result, in_gauss_blur_1_rd71_res);
	hw_uint<16> in_gauss_blur_1_rd72_res = in_gauss_blur_1_rd72_select(in, d0, d1, dynamic_address);
	set_at<1152, 2304>(result, in_gauss_blur_1_rd72_res);
	hw_uint<16> in_gauss_blur_1_rd73_res = in_gauss_blur_1_rd73_select(in, d0, d1, dynamic_address);
	set_at<1168, 2304>(result, in_gauss_blur_1_rd73_res);
	hw_uint<16> in_gauss_blur_1_rd74_res = in_gauss_blur_1_rd74_select(in, d0, d1, dynamic_address);
	set_at<1184, 2304>(result, in_gauss_blur_1_rd74_res);
	hw_uint<16> in_gauss_blur_1_rd75_res = in_gauss_blur_1_rd75_select(in, d0, d1, dynamic_address);
	set_at<1200, 2304>(result, in_gauss_blur_1_rd75_res);
	hw_uint<16> in_gauss_blur_1_rd76_res = in_gauss_blur_1_rd76_select(in, d0, d1, dynamic_address);
	set_at<1216, 2304>(result, in_gauss_blur_1_rd76_res);
	hw_uint<16> in_gauss_blur_1_rd77_res = in_gauss_blur_1_rd77_select(in, d0, d1, dynamic_address);
	set_at<1232, 2304>(result, in_gauss_blur_1_rd77_res);
	hw_uint<16> in_gauss_blur_1_rd78_res = in_gauss_blur_1_rd78_select(in, d0, d1, dynamic_address);
	set_at<1248, 2304>(result, in_gauss_blur_1_rd78_res);
	hw_uint<16> in_gauss_blur_1_rd79_res = in_gauss_blur_1_rd79_select(in, d0, d1, dynamic_address);
	set_at<1264, 2304>(result, in_gauss_blur_1_rd79_res);
	hw_uint<16> in_gauss_blur_1_rd80_res = in_gauss_blur_1_rd80_select(in, d0, d1, dynamic_address);
	set_at<1280, 2304>(result, in_gauss_blur_1_rd80_res);
	hw_uint<16> in_gauss_blur_1_rd81_res = in_gauss_blur_1_rd81_select(in, d0, d1, dynamic_address);
	set_at<1296, 2304>(result, in_gauss_blur_1_rd81_res);
	hw_uint<16> in_gauss_blur_1_rd82_res = in_gauss_blur_1_rd82_select(in, d0, d1, dynamic_address);
	set_at<1312, 2304>(result, in_gauss_blur_1_rd82_res);
	hw_uint<16> in_gauss_blur_1_rd83_res = in_gauss_blur_1_rd83_select(in, d0, d1, dynamic_address);
	set_at<1328, 2304>(result, in_gauss_blur_1_rd83_res);
	hw_uint<16> in_gauss_blur_1_rd84_res = in_gauss_blur_1_rd84_select(in, d0, d1, dynamic_address);
	set_at<1344, 2304>(result, in_gauss_blur_1_rd84_res);
	hw_uint<16> in_gauss_blur_1_rd85_res = in_gauss_blur_1_rd85_select(in, d0, d1, dynamic_address);
	set_at<1360, 2304>(result, in_gauss_blur_1_rd85_res);
	hw_uint<16> in_gauss_blur_1_rd86_res = in_gauss_blur_1_rd86_select(in, d0, d1, dynamic_address);
	set_at<1376, 2304>(result, in_gauss_blur_1_rd86_res);
	hw_uint<16> in_gauss_blur_1_rd87_res = in_gauss_blur_1_rd87_select(in, d0, d1, dynamic_address);
	set_at<1392, 2304>(result, in_gauss_blur_1_rd87_res);
	hw_uint<16> in_gauss_blur_1_rd88_res = in_gauss_blur_1_rd88_select(in, d0, d1, dynamic_address);
	set_at<1408, 2304>(result, in_gauss_blur_1_rd88_res);
	hw_uint<16> in_gauss_blur_1_rd89_res = in_gauss_blur_1_rd89_select(in, d0, d1, dynamic_address);
	set_at<1424, 2304>(result, in_gauss_blur_1_rd89_res);
	hw_uint<16> in_gauss_blur_1_rd90_res = in_gauss_blur_1_rd90_select(in, d0, d1, dynamic_address);
	set_at<1440, 2304>(result, in_gauss_blur_1_rd90_res);
	hw_uint<16> in_gauss_blur_1_rd91_res = in_gauss_blur_1_rd91_select(in, d0, d1, dynamic_address);
	set_at<1456, 2304>(result, in_gauss_blur_1_rd91_res);
	hw_uint<16> in_gauss_blur_1_rd92_res = in_gauss_blur_1_rd92_select(in, d0, d1, dynamic_address);
	set_at<1472, 2304>(result, in_gauss_blur_1_rd92_res);
	hw_uint<16> in_gauss_blur_1_rd93_res = in_gauss_blur_1_rd93_select(in, d0, d1, dynamic_address);
	set_at<1488, 2304>(result, in_gauss_blur_1_rd93_res);
	hw_uint<16> in_gauss_blur_1_rd94_res = in_gauss_blur_1_rd94_select(in, d0, d1, dynamic_address);
	set_at<1504, 2304>(result, in_gauss_blur_1_rd94_res);
	hw_uint<16> in_gauss_blur_1_rd95_res = in_gauss_blur_1_rd95_select(in, d0, d1, dynamic_address);
	set_at<1520, 2304>(result, in_gauss_blur_1_rd95_res);
	hw_uint<16> in_gauss_blur_1_rd96_res = in_gauss_blur_1_rd96_select(in, d0, d1, dynamic_address);
	set_at<1536, 2304>(result, in_gauss_blur_1_rd96_res);
	hw_uint<16> in_gauss_blur_1_rd97_res = in_gauss_blur_1_rd97_select(in, d0, d1, dynamic_address);
	set_at<1552, 2304>(result, in_gauss_blur_1_rd97_res);
	hw_uint<16> in_gauss_blur_1_rd98_res = in_gauss_blur_1_rd98_select(in, d0, d1, dynamic_address);
	set_at<1568, 2304>(result, in_gauss_blur_1_rd98_res);
	hw_uint<16> in_gauss_blur_1_rd99_res = in_gauss_blur_1_rd99_select(in, d0, d1, dynamic_address);
	set_at<1584, 2304>(result, in_gauss_blur_1_rd99_res);
	hw_uint<16> in_gauss_blur_1_rd100_res = in_gauss_blur_1_rd100_select(in, d0, d1, dynamic_address);
	set_at<1600, 2304>(result, in_gauss_blur_1_rd100_res);
	hw_uint<16> in_gauss_blur_1_rd101_res = in_gauss_blur_1_rd101_select(in, d0, d1, dynamic_address);
	set_at<1616, 2304>(result, in_gauss_blur_1_rd101_res);
	hw_uint<16> in_gauss_blur_1_rd102_res = in_gauss_blur_1_rd102_select(in, d0, d1, dynamic_address);
	set_at<1632, 2304>(result, in_gauss_blur_1_rd102_res);
	hw_uint<16> in_gauss_blur_1_rd103_res = in_gauss_blur_1_rd103_select(in, d0, d1, dynamic_address);
	set_at<1648, 2304>(result, in_gauss_blur_1_rd103_res);
	hw_uint<16> in_gauss_blur_1_rd104_res = in_gauss_blur_1_rd104_select(in, d0, d1, dynamic_address);
	set_at<1664, 2304>(result, in_gauss_blur_1_rd104_res);
	hw_uint<16> in_gauss_blur_1_rd105_res = in_gauss_blur_1_rd105_select(in, d0, d1, dynamic_address);
	set_at<1680, 2304>(result, in_gauss_blur_1_rd105_res);
	hw_uint<16> in_gauss_blur_1_rd106_res = in_gauss_blur_1_rd106_select(in, d0, d1, dynamic_address);
	set_at<1696, 2304>(result, in_gauss_blur_1_rd106_res);
	hw_uint<16> in_gauss_blur_1_rd107_res = in_gauss_blur_1_rd107_select(in, d0, d1, dynamic_address);
	set_at<1712, 2304>(result, in_gauss_blur_1_rd107_res);
	hw_uint<16> in_gauss_blur_1_rd108_res = in_gauss_blur_1_rd108_select(in, d0, d1, dynamic_address);
	set_at<1728, 2304>(result, in_gauss_blur_1_rd108_res);
	hw_uint<16> in_gauss_blur_1_rd109_res = in_gauss_blur_1_rd109_select(in, d0, d1, dynamic_address);
	set_at<1744, 2304>(result, in_gauss_blur_1_rd109_res);
	hw_uint<16> in_gauss_blur_1_rd110_res = in_gauss_blur_1_rd110_select(in, d0, d1, dynamic_address);
	set_at<1760, 2304>(result, in_gauss_blur_1_rd110_res);
	hw_uint<16> in_gauss_blur_1_rd111_res = in_gauss_blur_1_rd111_select(in, d0, d1, dynamic_address);
	set_at<1776, 2304>(result, in_gauss_blur_1_rd111_res);
	hw_uint<16> in_gauss_blur_1_rd112_res = in_gauss_blur_1_rd112_select(in, d0, d1, dynamic_address);
	set_at<1792, 2304>(result, in_gauss_blur_1_rd112_res);
	hw_uint<16> in_gauss_blur_1_rd113_res = in_gauss_blur_1_rd113_select(in, d0, d1, dynamic_address);
	set_at<1808, 2304>(result, in_gauss_blur_1_rd113_res);
	hw_uint<16> in_gauss_blur_1_rd114_res = in_gauss_blur_1_rd114_select(in, d0, d1, dynamic_address);
	set_at<1824, 2304>(result, in_gauss_blur_1_rd114_res);
	hw_uint<16> in_gauss_blur_1_rd115_res = in_gauss_blur_1_rd115_select(in, d0, d1, dynamic_address);
	set_at<1840, 2304>(result, in_gauss_blur_1_rd115_res);
	hw_uint<16> in_gauss_blur_1_rd116_res = in_gauss_blur_1_rd116_select(in, d0, d1, dynamic_address);
	set_at<1856, 2304>(result, in_gauss_blur_1_rd116_res);
	hw_uint<16> in_gauss_blur_1_rd117_res = in_gauss_blur_1_rd117_select(in, d0, d1, dynamic_address);
	set_at<1872, 2304>(result, in_gauss_blur_1_rd117_res);
	hw_uint<16> in_gauss_blur_1_rd118_res = in_gauss_blur_1_rd118_select(in, d0, d1, dynamic_address);
	set_at<1888, 2304>(result, in_gauss_blur_1_rd118_res);
	hw_uint<16> in_gauss_blur_1_rd119_res = in_gauss_blur_1_rd119_select(in, d0, d1, dynamic_address);
	set_at<1904, 2304>(result, in_gauss_blur_1_rd119_res);
	hw_uint<16> in_gauss_blur_1_rd120_res = in_gauss_blur_1_rd120_select(in, d0, d1, dynamic_address);
	set_at<1920, 2304>(result, in_gauss_blur_1_rd120_res);
	hw_uint<16> in_gauss_blur_1_rd121_res = in_gauss_blur_1_rd121_select(in, d0, d1, dynamic_address);
	set_at<1936, 2304>(result, in_gauss_blur_1_rd121_res);
	hw_uint<16> in_gauss_blur_1_rd122_res = in_gauss_blur_1_rd122_select(in, d0, d1, dynamic_address);
	set_at<1952, 2304>(result, in_gauss_blur_1_rd122_res);
	hw_uint<16> in_gauss_blur_1_rd123_res = in_gauss_blur_1_rd123_select(in, d0, d1, dynamic_address);
	set_at<1968, 2304>(result, in_gauss_blur_1_rd123_res);
	hw_uint<16> in_gauss_blur_1_rd124_res = in_gauss_blur_1_rd124_select(in, d0, d1, dynamic_address);
	set_at<1984, 2304>(result, in_gauss_blur_1_rd124_res);
	hw_uint<16> in_gauss_blur_1_rd125_res = in_gauss_blur_1_rd125_select(in, d0, d1, dynamic_address);
	set_at<2000, 2304>(result, in_gauss_blur_1_rd125_res);
	hw_uint<16> in_gauss_blur_1_rd126_res = in_gauss_blur_1_rd126_select(in, d0, d1, dynamic_address);
	set_at<2016, 2304>(result, in_gauss_blur_1_rd126_res);
	hw_uint<16> in_gauss_blur_1_rd127_res = in_gauss_blur_1_rd127_select(in, d0, d1, dynamic_address);
	set_at<2032, 2304>(result, in_gauss_blur_1_rd127_res);
	hw_uint<16> in_gauss_blur_1_rd128_res = in_gauss_blur_1_rd128_select(in, d0, d1, dynamic_address);
	set_at<2048, 2304>(result, in_gauss_blur_1_rd128_res);
	hw_uint<16> in_gauss_blur_1_rd129_res = in_gauss_blur_1_rd129_select(in, d0, d1, dynamic_address);
	set_at<2064, 2304>(result, in_gauss_blur_1_rd129_res);
	hw_uint<16> in_gauss_blur_1_rd130_res = in_gauss_blur_1_rd130_select(in, d0, d1, dynamic_address);
	set_at<2080, 2304>(result, in_gauss_blur_1_rd130_res);
	hw_uint<16> in_gauss_blur_1_rd131_res = in_gauss_blur_1_rd131_select(in, d0, d1, dynamic_address);
	set_at<2096, 2304>(result, in_gauss_blur_1_rd131_res);
	hw_uint<16> in_gauss_blur_1_rd132_res = in_gauss_blur_1_rd132_select(in, d0, d1, dynamic_address);
	set_at<2112, 2304>(result, in_gauss_blur_1_rd132_res);
	hw_uint<16> in_gauss_blur_1_rd133_res = in_gauss_blur_1_rd133_select(in, d0, d1, dynamic_address);
	set_at<2128, 2304>(result, in_gauss_blur_1_rd133_res);
	hw_uint<16> in_gauss_blur_1_rd134_res = in_gauss_blur_1_rd134_select(in, d0, d1, dynamic_address);
	set_at<2144, 2304>(result, in_gauss_blur_1_rd134_res);
	hw_uint<16> in_gauss_blur_1_rd135_res = in_gauss_blur_1_rd135_select(in, d0, d1, dynamic_address);
	set_at<2160, 2304>(result, in_gauss_blur_1_rd135_res);
	hw_uint<16> in_gauss_blur_1_rd136_res = in_gauss_blur_1_rd136_select(in, d0, d1, dynamic_address);
	set_at<2176, 2304>(result, in_gauss_blur_1_rd136_res);
	hw_uint<16> in_gauss_blur_1_rd137_res = in_gauss_blur_1_rd137_select(in, d0, d1, dynamic_address);
	set_at<2192, 2304>(result, in_gauss_blur_1_rd137_res);
	hw_uint<16> in_gauss_blur_1_rd138_res = in_gauss_blur_1_rd138_select(in, d0, d1, dynamic_address);
	set_at<2208, 2304>(result, in_gauss_blur_1_rd138_res);
	hw_uint<16> in_gauss_blur_1_rd139_res = in_gauss_blur_1_rd139_select(in, d0, d1, dynamic_address);
	set_at<2224, 2304>(result, in_gauss_blur_1_rd139_res);
	hw_uint<16> in_gauss_blur_1_rd140_res = in_gauss_blur_1_rd140_select(in, d0, d1, dynamic_address);
	set_at<2240, 2304>(result, in_gauss_blur_1_rd140_res);
	hw_uint<16> in_gauss_blur_1_rd141_res = in_gauss_blur_1_rd141_select(in, d0, d1, dynamic_address);
	set_at<2256, 2304>(result, in_gauss_blur_1_rd141_res);
	hw_uint<16> in_gauss_blur_1_rd142_res = in_gauss_blur_1_rd142_select(in, d0, d1, dynamic_address);
	set_at<2272, 2304>(result, in_gauss_blur_1_rd142_res);
	hw_uint<16> in_gauss_blur_1_rd143_res = in_gauss_blur_1_rd143_select(in, d0, d1, dynamic_address);
	set_at<2288, 2304>(result, in_gauss_blur_1_rd143_res);
	return result;
}

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

#include "hw_classes.h"

struct in_gauss_blur_1_in_gauss_blur_1_update_0_write0_to_in_gauss_ds_1_rd0_cache {
	// RAM Box: {[-32, 1936], [-6, 1078]}
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

struct in_gauss_blur_1_in_gauss_blur_1_update_0_write2_to_in_gauss_ds_1_rd1_cache {
	// RAM Box: {[-30, 1938], [-6, 1078]}
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

struct in_gauss_blur_1_in_gauss_blur_1_update_0_write4_to_in_gauss_ds_1_rd2_cache {
	// RAM Box: {[-28, 1940], [-6, 1078]}
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

struct in_gauss_blur_1_in_gauss_blur_1_update_0_write6_to_in_gauss_ds_1_rd3_cache {
	// RAM Box: {[-26, 1942], [-6, 1078]}
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

struct in_gauss_blur_1_in_gauss_blur_1_update_0_write8_to_in_gauss_ds_1_rd4_cache {
	// RAM Box: {[-24, 1944], [-6, 1078]}
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

struct in_gauss_blur_1_in_gauss_blur_1_update_0_write10_to_in_gauss_ds_1_rd5_cache {
	// RAM Box: {[-22, 1946], [-6, 1078]}
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

struct in_gauss_blur_1_in_gauss_blur_1_update_0_write12_to_in_gauss_ds_1_rd6_cache {
	// RAM Box: {[-20, 1948], [-6, 1078]}
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

struct in_gauss_blur_1_in_gauss_blur_1_update_0_write14_to_in_gauss_ds_1_rd7_cache {
	// RAM Box: {[-18, 1950], [-6, 1078]}
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

struct in_gauss_blur_1_cache {
  // # of banks: 8
  in_gauss_blur_1_in_gauss_blur_1_update_0_write0_to_in_gauss_ds_1_rd0_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write0_to_in_gauss_ds_1_rd0;
  in_gauss_blur_1_in_gauss_blur_1_update_0_write2_to_in_gauss_ds_1_rd1_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write2_to_in_gauss_ds_1_rd1;
  in_gauss_blur_1_in_gauss_blur_1_update_0_write4_to_in_gauss_ds_1_rd2_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write4_to_in_gauss_ds_1_rd2;
  in_gauss_blur_1_in_gauss_blur_1_update_0_write6_to_in_gauss_ds_1_rd3_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write6_to_in_gauss_ds_1_rd3;
  in_gauss_blur_1_in_gauss_blur_1_update_0_write8_to_in_gauss_ds_1_rd4_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write8_to_in_gauss_ds_1_rd4;
  in_gauss_blur_1_in_gauss_blur_1_update_0_write10_to_in_gauss_ds_1_rd5_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write10_to_in_gauss_ds_1_rd5;
  in_gauss_blur_1_in_gauss_blur_1_update_0_write12_to_in_gauss_ds_1_rd6_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write12_to_in_gauss_ds_1_rd6;
  in_gauss_blur_1_in_gauss_blur_1_update_0_write14_to_in_gauss_ds_1_rd7_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write14_to_in_gauss_ds_1_rd7;
};



inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write0_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write0, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write0_to_in_gauss_ds_1_rd0.push(in_gauss_blur_1_in_gauss_blur_1_update_0_write0);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write1_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write1, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write10_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write10, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write10_to_in_gauss_ds_1_rd5.push(in_gauss_blur_1_in_gauss_blur_1_update_0_write10);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write11_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write11, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write12_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write12, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write12_to_in_gauss_ds_1_rd6.push(in_gauss_blur_1_in_gauss_blur_1_update_0_write12);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write13_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write13, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write14_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write14, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write14_to_in_gauss_ds_1_rd7.push(in_gauss_blur_1_in_gauss_blur_1_update_0_write14);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write15_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write15, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write2_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write2, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write2_to_in_gauss_ds_1_rd1.push(in_gauss_blur_1_in_gauss_blur_1_update_0_write2);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write3_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write3, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write4_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write4, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write4_to_in_gauss_ds_1_rd2.push(in_gauss_blur_1_in_gauss_blur_1_update_0_write4);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write5_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write5, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write6_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write6, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write6_to_in_gauss_ds_1_rd3.push(in_gauss_blur_1_in_gauss_blur_1_update_0_write6);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write7_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write7, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write8_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write8, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write8_to_in_gauss_ds_1_rd4.push(in_gauss_blur_1_in_gauss_blur_1_update_0_write8);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write9_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write9, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline hw_uint<16> in_gauss_ds_1_rd0_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd0 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[16d0, 2d1] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write0 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write0_to_in_gauss_ds_1_rd0.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd1_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd1 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[2 + 16d0, 2d1] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write2 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write2_to_in_gauss_ds_1_rd1.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd2_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd2 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[4 + 16d0, 2d1] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write4 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write4_to_in_gauss_ds_1_rd2.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd3_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd3 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[6 + 16d0, 2d1] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write6 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write6_to_in_gauss_ds_1_rd3.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd4_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd4 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[8 + 16d0, 2d1] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write8 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write8_to_in_gauss_ds_1_rd4.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd5_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd5 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[10 + 16d0, 2d1] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write10 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write10_to_in_gauss_ds_1_rd5.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd6_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd6 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[12 + 16d0, 2d1] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write12 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write12_to_in_gauss_ds_1_rd6.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd7_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd7 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[14 + 16d0, 2d1] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write14 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write14_to_in_gauss_ds_1_rd7.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write14;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_1_update_0_write
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write0
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write1
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write2
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write3
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write4
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write5
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write6
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write7
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write8
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write9
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write10
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write11
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write12
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write13
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write14
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write15
inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write_bundle_write(hw_uint<256>& in_gauss_blur_1_update_0_write, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write0_res = in_gauss_blur_1_update_0_write.extract<0, 15>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write0_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write0_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write1_res = in_gauss_blur_1_update_0_write.extract<16, 31>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write1_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write1_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write2_res = in_gauss_blur_1_update_0_write.extract<32, 47>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write2_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write2_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write3_res = in_gauss_blur_1_update_0_write.extract<48, 63>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write3_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write3_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write4_res = in_gauss_blur_1_update_0_write.extract<64, 79>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write4_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write4_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write5_res = in_gauss_blur_1_update_0_write.extract<80, 95>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write5_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write5_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write6_res = in_gauss_blur_1_update_0_write.extract<96, 111>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write6_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write6_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write7_res = in_gauss_blur_1_update_0_write.extract<112, 127>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write7_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write7_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write8_res = in_gauss_blur_1_update_0_write.extract<128, 143>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write8_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write8_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write9_res = in_gauss_blur_1_update_0_write.extract<144, 159>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write9_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write9_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write10_res = in_gauss_blur_1_update_0_write.extract<160, 175>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write10_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write10_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write11_res = in_gauss_blur_1_update_0_write.extract<176, 191>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write11_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write11_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write12_res = in_gauss_blur_1_update_0_write.extract<192, 207>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write12_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write12_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write13_res = in_gauss_blur_1_update_0_write.extract<208, 223>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write13_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write13_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write14_res = in_gauss_blur_1_update_0_write.extract<224, 239>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write14_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write14_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write15_res = in_gauss_blur_1_update_0_write.extract<240, 255>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write15_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write15_res, in_gauss_blur_1, d0, d1, dynamic_address);
}

// in_gauss_ds_1_update_0_read
//	in_gauss_ds_1_rd0
//	in_gauss_ds_1_rd1
//	in_gauss_ds_1_rd2
//	in_gauss_ds_1_rd3
//	in_gauss_ds_1_rd4
//	in_gauss_ds_1_rd5
//	in_gauss_ds_1_rd6
//	in_gauss_ds_1_rd7
inline hw_uint<128> in_gauss_blur_1_in_gauss_ds_1_update_0_read_bundle_read(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 8
    // in_gauss_ds_1_rd0
    // in_gauss_ds_1_rd1
    // in_gauss_ds_1_rd2
    // in_gauss_ds_1_rd3
    // in_gauss_ds_1_rd4
    // in_gauss_ds_1_rd5
    // in_gauss_ds_1_rd6
    // in_gauss_ds_1_rd7

	hw_uint<128> result;
	hw_uint<16> in_gauss_ds_1_rd0_res = in_gauss_ds_1_rd0_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<0, 128>(result, in_gauss_ds_1_rd0_res);
	hw_uint<16> in_gauss_ds_1_rd1_res = in_gauss_ds_1_rd1_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<16, 128>(result, in_gauss_ds_1_rd1_res);
	hw_uint<16> in_gauss_ds_1_rd2_res = in_gauss_ds_1_rd2_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<32, 128>(result, in_gauss_ds_1_rd2_res);
	hw_uint<16> in_gauss_ds_1_rd3_res = in_gauss_ds_1_rd3_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<48, 128>(result, in_gauss_ds_1_rd3_res);
	hw_uint<16> in_gauss_ds_1_rd4_res = in_gauss_ds_1_rd4_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<64, 128>(result, in_gauss_ds_1_rd4_res);
	hw_uint<16> in_gauss_ds_1_rd5_res = in_gauss_ds_1_rd5_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<80, 128>(result, in_gauss_ds_1_rd5_res);
	hw_uint<16> in_gauss_ds_1_rd6_res = in_gauss_ds_1_rd6_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<96, 128>(result, in_gauss_ds_1_rd6_res);
	hw_uint<16> in_gauss_ds_1_rd7_res = in_gauss_ds_1_rd7_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<112, 128>(result, in_gauss_ds_1_rd7_res);
	return result;
}

#include "hw_classes.h"

struct in_gauss_blur_2_in_gauss_blur_2_update_0_write0_to_in_gauss_ds_2_rd0_cache {
	// RAM Box: {[-8, 960], [-2, 538]}
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

struct in_gauss_blur_2_in_gauss_blur_2_update_0_write2_to_in_gauss_ds_2_rd1_cache {
	// RAM Box: {[-6, 962], [-2, 538]}
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

struct in_gauss_blur_2_in_gauss_blur_2_update_0_write4_to_in_gauss_ds_2_rd2_cache {
	// RAM Box: {[-4, 964], [-2, 538]}
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

struct in_gauss_blur_2_in_gauss_blur_2_update_0_write6_to_in_gauss_ds_2_rd3_cache {
	// RAM Box: {[-2, 966], [-2, 538]}
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

struct in_gauss_blur_2_cache {
  // # of banks: 4
  in_gauss_blur_2_in_gauss_blur_2_update_0_write0_to_in_gauss_ds_2_rd0_cache in_gauss_blur_2_in_gauss_blur_2_update_0_write0_to_in_gauss_ds_2_rd0;
  in_gauss_blur_2_in_gauss_blur_2_update_0_write2_to_in_gauss_ds_2_rd1_cache in_gauss_blur_2_in_gauss_blur_2_update_0_write2_to_in_gauss_ds_2_rd1;
  in_gauss_blur_2_in_gauss_blur_2_update_0_write4_to_in_gauss_ds_2_rd2_cache in_gauss_blur_2_in_gauss_blur_2_update_0_write4_to_in_gauss_ds_2_rd2;
  in_gauss_blur_2_in_gauss_blur_2_update_0_write6_to_in_gauss_ds_2_rd3_cache in_gauss_blur_2_in_gauss_blur_2_update_0_write6_to_in_gauss_ds_2_rd3;
};



inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write0_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write0, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
  in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write0_to_in_gauss_ds_2_rd0.push(in_gauss_blur_2_in_gauss_blur_2_update_0_write0);
}

inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write1_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write1, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write2_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write2, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
  in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write2_to_in_gauss_ds_2_rd1.push(in_gauss_blur_2_in_gauss_blur_2_update_0_write2);
}

inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write3_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write3, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write4_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write4, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
  in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write4_to_in_gauss_ds_2_rd2.push(in_gauss_blur_2_in_gauss_blur_2_update_0_write4);
}

inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write5_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write5, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write6_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write6, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
  in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write6_to_in_gauss_ds_2_rd3.push(in_gauss_blur_2_in_gauss_blur_2_update_0_write6);
}

inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write7_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write7, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
}

inline hw_uint<16> in_gauss_ds_2_rd0_select(in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_2_rd0 read pattern: { in_gauss_ds_2_update_0[d0, d1] -> in_gauss_blur_2[8d0, 2d1] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  // Read schedule : { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  // Write schedule: { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  auto value_in_gauss_blur_2_in_gauss_blur_2_update_0_write0 = in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write0_to_in_gauss_ds_2_rd0.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_2_in_gauss_blur_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_ds_2_rd1_select(in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_2_rd1 read pattern: { in_gauss_ds_2_update_0[d0, d1] -> in_gauss_blur_2[2 + 8d0, 2d1] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  // Read schedule : { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  // Write schedule: { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  auto value_in_gauss_blur_2_in_gauss_blur_2_update_0_write2 = in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write2_to_in_gauss_ds_2_rd1.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_2_in_gauss_blur_2_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_ds_2_rd2_select(in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_2_rd2 read pattern: { in_gauss_ds_2_update_0[d0, d1] -> in_gauss_blur_2[4 + 8d0, 2d1] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  // Read schedule : { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  // Write schedule: { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  auto value_in_gauss_blur_2_in_gauss_blur_2_update_0_write4 = in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write4_to_in_gauss_ds_2_rd2.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_2_in_gauss_blur_2_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_ds_2_rd3_select(in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_2_rd3 read pattern: { in_gauss_ds_2_update_0[d0, d1] -> in_gauss_blur_2[6 + 8d0, 2d1] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  // Read schedule : { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  // Write schedule: { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  auto value_in_gauss_blur_2_in_gauss_blur_2_update_0_write6 = in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write6_to_in_gauss_ds_2_rd3.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_2_in_gauss_blur_2_update_0_write6;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_2_update_0_write
//	in_gauss_blur_2_in_gauss_blur_2_update_0_write0
//	in_gauss_blur_2_in_gauss_blur_2_update_0_write1
//	in_gauss_blur_2_in_gauss_blur_2_update_0_write2
//	in_gauss_blur_2_in_gauss_blur_2_update_0_write3
//	in_gauss_blur_2_in_gauss_blur_2_update_0_write4
//	in_gauss_blur_2_in_gauss_blur_2_update_0_write5
//	in_gauss_blur_2_in_gauss_blur_2_update_0_write6
//	in_gauss_blur_2_in_gauss_blur_2_update_0_write7
inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write_bundle_write(hw_uint<128>& in_gauss_blur_2_update_0_write, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_blur_2_in_gauss_blur_2_update_0_write0_res = in_gauss_blur_2_update_0_write.extract<0, 15>();
	in_gauss_blur_2_in_gauss_blur_2_update_0_write0_write(in_gauss_blur_2_in_gauss_blur_2_update_0_write0_res, in_gauss_blur_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_2_in_gauss_blur_2_update_0_write1_res = in_gauss_blur_2_update_0_write.extract<16, 31>();
	in_gauss_blur_2_in_gauss_blur_2_update_0_write1_write(in_gauss_blur_2_in_gauss_blur_2_update_0_write1_res, in_gauss_blur_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_2_in_gauss_blur_2_update_0_write2_res = in_gauss_blur_2_update_0_write.extract<32, 47>();
	in_gauss_blur_2_in_gauss_blur_2_update_0_write2_write(in_gauss_blur_2_in_gauss_blur_2_update_0_write2_res, in_gauss_blur_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_2_in_gauss_blur_2_update_0_write3_res = in_gauss_blur_2_update_0_write.extract<48, 63>();
	in_gauss_blur_2_in_gauss_blur_2_update_0_write3_write(in_gauss_blur_2_in_gauss_blur_2_update_0_write3_res, in_gauss_blur_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_2_in_gauss_blur_2_update_0_write4_res = in_gauss_blur_2_update_0_write.extract<64, 79>();
	in_gauss_blur_2_in_gauss_blur_2_update_0_write4_write(in_gauss_blur_2_in_gauss_blur_2_update_0_write4_res, in_gauss_blur_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_2_in_gauss_blur_2_update_0_write5_res = in_gauss_blur_2_update_0_write.extract<80, 95>();
	in_gauss_blur_2_in_gauss_blur_2_update_0_write5_write(in_gauss_blur_2_in_gauss_blur_2_update_0_write5_res, in_gauss_blur_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_2_in_gauss_blur_2_update_0_write6_res = in_gauss_blur_2_update_0_write.extract<96, 111>();
	in_gauss_blur_2_in_gauss_blur_2_update_0_write6_write(in_gauss_blur_2_in_gauss_blur_2_update_0_write6_res, in_gauss_blur_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_2_in_gauss_blur_2_update_0_write7_res = in_gauss_blur_2_update_0_write.extract<112, 127>();
	in_gauss_blur_2_in_gauss_blur_2_update_0_write7_write(in_gauss_blur_2_in_gauss_blur_2_update_0_write7_res, in_gauss_blur_2, d0, d1, dynamic_address);
}

// in_gauss_ds_2_update_0_read
//	in_gauss_ds_2_rd0
//	in_gauss_ds_2_rd1
//	in_gauss_ds_2_rd2
//	in_gauss_ds_2_rd3
inline hw_uint<64> in_gauss_blur_2_in_gauss_ds_2_update_0_read_bundle_read(in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // in_gauss_ds_2_rd0
    // in_gauss_ds_2_rd1
    // in_gauss_ds_2_rd2
    // in_gauss_ds_2_rd3

	hw_uint<64> result;
	hw_uint<16> in_gauss_ds_2_rd0_res = in_gauss_ds_2_rd0_select(in_gauss_blur_2, d0, d1, dynamic_address);
	set_at<0, 64>(result, in_gauss_ds_2_rd0_res);
	hw_uint<16> in_gauss_ds_2_rd1_res = in_gauss_ds_2_rd1_select(in_gauss_blur_2, d0, d1, dynamic_address);
	set_at<16, 64>(result, in_gauss_ds_2_rd1_res);
	hw_uint<16> in_gauss_ds_2_rd2_res = in_gauss_ds_2_rd2_select(in_gauss_blur_2, d0, d1, dynamic_address);
	set_at<32, 64>(result, in_gauss_ds_2_rd2_res);
	hw_uint<16> in_gauss_ds_2_rd3_res = in_gauss_ds_2_rd3_select(in_gauss_blur_2, d0, d1, dynamic_address);
	set_at<48, 64>(result, in_gauss_ds_2_rd3_res);
	return result;
}

#include "hw_classes.h"

struct in_gauss_blur_3_in_gauss_blur_3_update_0_write0_to_in_gauss_ds_3_rd0_cache {
	// RAM Box: {[0, 476], [0, 268]}
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

struct in_gauss_blur_3_in_gauss_blur_3_update_0_write2_to_in_gauss_ds_3_rd1_cache {
	// RAM Box: {[2, 478], [0, 268]}
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

struct in_gauss_blur_3_cache {
  // # of banks: 2
  in_gauss_blur_3_in_gauss_blur_3_update_0_write0_to_in_gauss_ds_3_rd0_cache in_gauss_blur_3_in_gauss_blur_3_update_0_write0_to_in_gauss_ds_3_rd0;
  in_gauss_blur_3_in_gauss_blur_3_update_0_write2_to_in_gauss_ds_3_rd1_cache in_gauss_blur_3_in_gauss_blur_3_update_0_write2_to_in_gauss_ds_3_rd1;
};



inline void in_gauss_blur_3_in_gauss_blur_3_update_0_write0_write(hw_uint<16>& in_gauss_blur_3_in_gauss_blur_3_update_0_write0, in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
  in_gauss_blur_3.in_gauss_blur_3_in_gauss_blur_3_update_0_write0_to_in_gauss_ds_3_rd0.push(in_gauss_blur_3_in_gauss_blur_3_update_0_write0);
}

inline void in_gauss_blur_3_in_gauss_blur_3_update_0_write1_write(hw_uint<16>& in_gauss_blur_3_in_gauss_blur_3_update_0_write1, in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_3_in_gauss_blur_3_update_0_write2_write(hw_uint<16>& in_gauss_blur_3_in_gauss_blur_3_update_0_write2, in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
  in_gauss_blur_3.in_gauss_blur_3_in_gauss_blur_3_update_0_write2_to_in_gauss_ds_3_rd1.push(in_gauss_blur_3_in_gauss_blur_3_update_0_write2);
}

inline void in_gauss_blur_3_in_gauss_blur_3_update_0_write3_write(hw_uint<16>& in_gauss_blur_3_in_gauss_blur_3_update_0_write3, in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
}

inline hw_uint<16> in_gauss_ds_3_rd0_select(in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_3_rd0 read pattern: { in_gauss_ds_3_update_0[d0, d1] -> in_gauss_blur_3[4d0, 2d1] : 0 <= d0 <= 119 and 0 <= d1 <= 134 }
  // Read schedule : { in_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 134 }
  // Write schedule: { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  auto value_in_gauss_blur_3_in_gauss_blur_3_update_0_write0 = in_gauss_blur_3.in_gauss_blur_3_in_gauss_blur_3_update_0_write0_to_in_gauss_ds_3_rd0.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_3_in_gauss_blur_3_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_ds_3_rd1_select(in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_3_rd1 read pattern: { in_gauss_ds_3_update_0[d0, d1] -> in_gauss_blur_3[2 + 4d0, 2d1] : 0 <= d0 <= 119 and 0 <= d1 <= 134 }
  // Read schedule : { in_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 134 }
  // Write schedule: { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  auto value_in_gauss_blur_3_in_gauss_blur_3_update_0_write2 = in_gauss_blur_3.in_gauss_blur_3_in_gauss_blur_3_update_0_write2_to_in_gauss_ds_3_rd1.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_3_in_gauss_blur_3_update_0_write2;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_3_update_0_write
//	in_gauss_blur_3_in_gauss_blur_3_update_0_write0
//	in_gauss_blur_3_in_gauss_blur_3_update_0_write1
//	in_gauss_blur_3_in_gauss_blur_3_update_0_write2
//	in_gauss_blur_3_in_gauss_blur_3_update_0_write3
inline void in_gauss_blur_3_in_gauss_blur_3_update_0_write_bundle_write(hw_uint<64>& in_gauss_blur_3_update_0_write, in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_blur_3_in_gauss_blur_3_update_0_write0_res = in_gauss_blur_3_update_0_write.extract<0, 15>();
	in_gauss_blur_3_in_gauss_blur_3_update_0_write0_write(in_gauss_blur_3_in_gauss_blur_3_update_0_write0_res, in_gauss_blur_3, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_3_in_gauss_blur_3_update_0_write1_res = in_gauss_blur_3_update_0_write.extract<16, 31>();
	in_gauss_blur_3_in_gauss_blur_3_update_0_write1_write(in_gauss_blur_3_in_gauss_blur_3_update_0_write1_res, in_gauss_blur_3, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_3_in_gauss_blur_3_update_0_write2_res = in_gauss_blur_3_update_0_write.extract<32, 47>();
	in_gauss_blur_3_in_gauss_blur_3_update_0_write2_write(in_gauss_blur_3_in_gauss_blur_3_update_0_write2_res, in_gauss_blur_3, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_3_in_gauss_blur_3_update_0_write3_res = in_gauss_blur_3_update_0_write.extract<48, 63>();
	in_gauss_blur_3_in_gauss_blur_3_update_0_write3_write(in_gauss_blur_3_in_gauss_blur_3_update_0_write3_res, in_gauss_blur_3, d0, d1, dynamic_address);
}

// in_gauss_ds_3_update_0_read
//	in_gauss_ds_3_rd0
//	in_gauss_ds_3_rd1
inline hw_uint<32> in_gauss_blur_3_in_gauss_ds_3_update_0_read_bundle_read(in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // in_gauss_ds_3_rd0
    // in_gauss_ds_3_rd1

	hw_uint<32> result;
	hw_uint<16> in_gauss_ds_3_rd0_res = in_gauss_ds_3_rd0_select(in_gauss_blur_3, d0, d1, dynamic_address);
	set_at<0, 32>(result, in_gauss_ds_3_rd0_res);
	hw_uint<16> in_gauss_ds_3_rd1_res = in_gauss_ds_3_rd1_select(in_gauss_blur_3, d0, d1, dynamic_address);
	set_at<16, 32>(result, in_gauss_ds_3_rd1_res);
	return result;
}

#include "hw_classes.h"

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-8, 968], [-3, 539]}
	// Capacity: 250
	// # of read delays: 6
  // 0, 1, 124, 125, 248, 249
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 122> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 122> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


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

	inline hw_uint<16> peek_247() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_248() {
		return f8;
	}

	inline hw_uint<16> peek_249() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 122
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 122 reading from capacity: 1
    f7.push(f6);
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

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9_cache {
	// RAM Box: {[-7, 961], [-3, 539]}
	// Capacity: 250
	// # of read delays: 4
  // 0, 1, 125, 249
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 123> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 123> f5;
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

	inline hw_uint<16> peek_248() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_249() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9_cache {
	// RAM Box: {[-6, 962], [-3, 539]}
	// Capacity: 250
	// # of read delays: 4
  // 0, 1, 125, 249
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 123> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 123> f5;
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

	inline hw_uint<16> peek_248() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_249() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9_cache {
	// RAM Box: {[-5, 963], [-3, 539]}
	// Capacity: 250
	// # of read delays: 4
  // 0, 1, 125, 249
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 123> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 123> f5;
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

	inline hw_uint<16> peek_248() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_249() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write4_merged_banks_9_cache {
	// RAM Box: {[-4, 964], [-3, 539]}
	// Capacity: 250
	// # of read delays: 4
  // 0, 1, 125, 249
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 123> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 123> f5;
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

	inline hw_uint<16> peek_248() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_249() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write5_merged_banks_9_cache {
	// RAM Box: {[-3, 965], [-3, 539]}
	// Capacity: 250
	// # of read delays: 4
  // 0, 1, 125, 249
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 123> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 123> f5;
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

	inline hw_uint<16> peek_248() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_249() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write6_merged_banks_9_cache {
	// RAM Box: {[-2, 966], [-3, 539]}
	// Capacity: 250
	// # of read delays: 4
  // 0, 1, 125, 249
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 123> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 123> f5;
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

	inline hw_uint<16> peek_248() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_249() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 123
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 123 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write7_merged_banks_9_cache {
	// RAM Box: {[-9, 967], [-3, 539]}
	// Capacity: 251
	// # of read delays: 7
  // 0, 1, 2, 125, 126, 249, 250
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 122> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 122> f9;
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

	inline hw_uint<16> peek_124() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_125() {
		return f6;
	}

	inline hw_uint<16> peek_126() {
		return f8;
	}

	inline hw_uint<16> peek_248() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_249() {
		return f10;
	}

	inline hw_uint<16> peek_250() {
		return f12;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 122
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 122 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 122
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 122 reading from capacity: 1
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

struct in_gauss_ds_1_cache {
  // # of banks: 8
  in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9;
  in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9;
  in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9;
  in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9;
  in_gauss_ds_1_in_gauss_ds_1_update_0_write4_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write4_merged_banks_9;
  in_gauss_ds_1_in_gauss_ds_1_update_0_write5_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write5_merged_banks_9;
  in_gauss_ds_1_in_gauss_ds_1_update_0_write6_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write6_merged_banks_9;
  in_gauss_ds_1_in_gauss_ds_1_update_0_write7_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write7_merged_banks_9;
};



inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write0_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write0, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.push(in_gauss_ds_1_in_gauss_ds_1_update_0_write0);
}

inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write1_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write1, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.push(in_gauss_ds_1_in_gauss_ds_1_update_0_write1);
}

inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write2_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write2, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.push(in_gauss_ds_1_in_gauss_ds_1_update_0_write2);
}

inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write3_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write3, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.push(in_gauss_ds_1_in_gauss_ds_1_update_0_write3);
}

inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write4_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write4, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write4_merged_banks_9.push(in_gauss_ds_1_in_gauss_ds_1_update_0_write4);
}

inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write5_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write5, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write5_merged_banks_9.push(in_gauss_ds_1_in_gauss_ds_1_update_0_write5);
}

inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write6_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write6, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write6_merged_banks_9.push(in_gauss_ds_1_in_gauss_ds_1_update_0_write6);
}

inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write7_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write7, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write7_merged_banks_9.push(in_gauss_ds_1_in_gauss_ds_1_update_0_write7);
}

inline hw_uint<16> in_gauss_blur_2_rd0_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd0 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[-1 + 8d0, -1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write7_merged_banks_9.peek_250();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd1_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd1 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[-1 + 8d0, d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write7_merged_banks_9.peek_126();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd10_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd10 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[8d0, d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_125();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd11_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd11 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[8d0, 1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd12_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd12 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 8d0, -1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_249();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd13_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd13 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 8d0, d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_125();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd14_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd14 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 8d0, 1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd15_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd15 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 8d0, -1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_249();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd16_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd16 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 8d0, d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_125();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd17_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd17 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 8d0, 1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd18_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd18 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 8d0, -1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_249();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd19_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd19 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 8d0, d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_125();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd2_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd2 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[-1 + 8d0, 1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write7_merged_banks_9.peek_2();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd20_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd20 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 8d0, 1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd21_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd21 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 8d0, -1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_249();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd22_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd22 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 8d0, d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_125();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd23_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd23 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 8d0, 1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd24_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd24 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 8d0, -1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_249();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd25_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd25 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 8d0, d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_125();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd26_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd26 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 8d0, 1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd27_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd27 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 8d0, -1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_249();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd28_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd28 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 8d0, d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_125();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd29_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd29 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 8d0, 1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd3_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd3 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[8d0, -1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_249();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd30_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd30 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 8d0, -1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_249();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd31_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd31 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 8d0, d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_125();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd32_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd32 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 8d0, 1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd33_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd33 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 8d0, -1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write4_merged_banks_9.peek_249();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd34_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd34 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 8d0, d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write4_merged_banks_9.peek_125();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd35_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd35 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 8d0, 1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write4_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd36_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd36 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 8d0, -1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_249();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd37_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd37 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 8d0, d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_125();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd38_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd38 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 8d0, 1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd39_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd39 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 8d0, -1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write4_merged_banks_9.peek_249();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd4_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd4 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[8d0, d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_125();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd40_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd40 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 8d0, d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write4_merged_banks_9.peek_125();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd41_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd41 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 8d0, 1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write4_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd42_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd42 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[5 + 8d0, -1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write5_merged_banks_9.peek_249();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd43_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd43 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[5 + 8d0, d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write5_merged_banks_9.peek_125();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd44_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd44 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[5 + 8d0, 1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write5_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd45_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd45 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 8d0, -1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write4_merged_banks_9.peek_249();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd46_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd46 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 8d0, d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write4_merged_banks_9.peek_125();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd47_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd47 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 8d0, 1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write4_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd48_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd48 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[5 + 8d0, -1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write5_merged_banks_9.peek_249();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd49_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd49 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[5 + 8d0, d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write5_merged_banks_9.peek_125();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd5_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd5 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[8d0, 1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd50_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd50 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[5 + 8d0, 1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write5_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd51_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd51 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[6 + 8d0, -1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write6_merged_banks_9.peek_249();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd52_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd52 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[6 + 8d0, d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write6_merged_banks_9.peek_125();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd53_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd53 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[6 + 8d0, 1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write6_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd54_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd54 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[5 + 8d0, -1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write5_merged_banks_9.peek_249();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd55_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd55 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[5 + 8d0, d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write5_merged_banks_9.peek_125();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd56_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd56 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[5 + 8d0, 1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write5_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd57_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd57 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[6 + 8d0, -1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write6_merged_banks_9.peek_249();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd58_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd58 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[6 + 8d0, d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write6_merged_banks_9.peek_125();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd59_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd59 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[6 + 8d0, 1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write6_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd6_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd6 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 8d0, -1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_249();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd60_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd60 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[7 + 8d0, -1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write7_merged_banks_9.peek_249();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd61_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd61 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[7 + 8d0, d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write7_merged_banks_9.peek_125();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd62_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd62 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[7 + 8d0, 1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write7_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd63_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd63 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[6 + 8d0, -1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write6_merged_banks_9.peek_249();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd64_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd64 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[6 + 8d0, d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write6_merged_banks_9.peek_125();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd65_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd65 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[6 + 8d0, 1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write6_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd66_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd66 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[7 + 8d0, -1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write7_merged_banks_9.peek_249();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd67_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd67 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[7 + 8d0, d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write7_merged_banks_9.peek_125();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd68_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd68 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[7 + 8d0, 1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write7_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd69_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd69 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[8 + 8d0, -1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_248();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd7_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd7 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 8d0, d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_125();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd70_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd70 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[8 + 8d0, d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_124();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd71_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd71 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[8 + 8d0, 1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_0();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd8_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd8 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 8d0, 1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd9_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd9 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[8d0, -1 + d1] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_249();
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
//	in_gauss_blur_2_rd9
//	in_gauss_blur_2_rd10
//	in_gauss_blur_2_rd11
//	in_gauss_blur_2_rd12
//	in_gauss_blur_2_rd13
//	in_gauss_blur_2_rd14
//	in_gauss_blur_2_rd15
//	in_gauss_blur_2_rd16
//	in_gauss_blur_2_rd17
//	in_gauss_blur_2_rd18
//	in_gauss_blur_2_rd19
//	in_gauss_blur_2_rd20
//	in_gauss_blur_2_rd21
//	in_gauss_blur_2_rd22
//	in_gauss_blur_2_rd23
//	in_gauss_blur_2_rd24
//	in_gauss_blur_2_rd25
//	in_gauss_blur_2_rd26
//	in_gauss_blur_2_rd27
//	in_gauss_blur_2_rd28
//	in_gauss_blur_2_rd29
//	in_gauss_blur_2_rd30
//	in_gauss_blur_2_rd31
//	in_gauss_blur_2_rd32
//	in_gauss_blur_2_rd33
//	in_gauss_blur_2_rd34
//	in_gauss_blur_2_rd35
//	in_gauss_blur_2_rd36
//	in_gauss_blur_2_rd37
//	in_gauss_blur_2_rd38
//	in_gauss_blur_2_rd39
//	in_gauss_blur_2_rd40
//	in_gauss_blur_2_rd41
//	in_gauss_blur_2_rd42
//	in_gauss_blur_2_rd43
//	in_gauss_blur_2_rd44
//	in_gauss_blur_2_rd45
//	in_gauss_blur_2_rd46
//	in_gauss_blur_2_rd47
//	in_gauss_blur_2_rd48
//	in_gauss_blur_2_rd49
//	in_gauss_blur_2_rd50
//	in_gauss_blur_2_rd51
//	in_gauss_blur_2_rd52
//	in_gauss_blur_2_rd53
//	in_gauss_blur_2_rd54
//	in_gauss_blur_2_rd55
//	in_gauss_blur_2_rd56
//	in_gauss_blur_2_rd57
//	in_gauss_blur_2_rd58
//	in_gauss_blur_2_rd59
//	in_gauss_blur_2_rd60
//	in_gauss_blur_2_rd61
//	in_gauss_blur_2_rd62
//	in_gauss_blur_2_rd63
//	in_gauss_blur_2_rd64
//	in_gauss_blur_2_rd65
//	in_gauss_blur_2_rd66
//	in_gauss_blur_2_rd67
//	in_gauss_blur_2_rd68
//	in_gauss_blur_2_rd69
//	in_gauss_blur_2_rd70
//	in_gauss_blur_2_rd71
inline hw_uint<1152> in_gauss_ds_1_in_gauss_blur_2_update_0_read_bundle_read(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 72
    // in_gauss_blur_2_rd0
    // in_gauss_blur_2_rd1
    // in_gauss_blur_2_rd2
    // in_gauss_blur_2_rd3
    // in_gauss_blur_2_rd4
    // in_gauss_blur_2_rd5
    // in_gauss_blur_2_rd6
    // in_gauss_blur_2_rd7
    // in_gauss_blur_2_rd8
    // in_gauss_blur_2_rd9
    // in_gauss_blur_2_rd10
    // in_gauss_blur_2_rd11
    // in_gauss_blur_2_rd12
    // in_gauss_blur_2_rd13
    // in_gauss_blur_2_rd14
    // in_gauss_blur_2_rd15
    // in_gauss_blur_2_rd16
    // in_gauss_blur_2_rd17
    // in_gauss_blur_2_rd18
    // in_gauss_blur_2_rd19
    // in_gauss_blur_2_rd20
    // in_gauss_blur_2_rd21
    // in_gauss_blur_2_rd22
    // in_gauss_blur_2_rd23
    // in_gauss_blur_2_rd24
    // in_gauss_blur_2_rd25
    // in_gauss_blur_2_rd26
    // in_gauss_blur_2_rd27
    // in_gauss_blur_2_rd28
    // in_gauss_blur_2_rd29
    // in_gauss_blur_2_rd30
    // in_gauss_blur_2_rd31
    // in_gauss_blur_2_rd32
    // in_gauss_blur_2_rd33
    // in_gauss_blur_2_rd34
    // in_gauss_blur_2_rd35
    // in_gauss_blur_2_rd36
    // in_gauss_blur_2_rd37
    // in_gauss_blur_2_rd38
    // in_gauss_blur_2_rd39
    // in_gauss_blur_2_rd40
    // in_gauss_blur_2_rd41
    // in_gauss_blur_2_rd42
    // in_gauss_blur_2_rd43
    // in_gauss_blur_2_rd44
    // in_gauss_blur_2_rd45
    // in_gauss_blur_2_rd46
    // in_gauss_blur_2_rd47
    // in_gauss_blur_2_rd48
    // in_gauss_blur_2_rd49
    // in_gauss_blur_2_rd50
    // in_gauss_blur_2_rd51
    // in_gauss_blur_2_rd52
    // in_gauss_blur_2_rd53
    // in_gauss_blur_2_rd54
    // in_gauss_blur_2_rd55
    // in_gauss_blur_2_rd56
    // in_gauss_blur_2_rd57
    // in_gauss_blur_2_rd58
    // in_gauss_blur_2_rd59
    // in_gauss_blur_2_rd60
    // in_gauss_blur_2_rd61
    // in_gauss_blur_2_rd62
    // in_gauss_blur_2_rd63
    // in_gauss_blur_2_rd64
    // in_gauss_blur_2_rd65
    // in_gauss_blur_2_rd66
    // in_gauss_blur_2_rd67
    // in_gauss_blur_2_rd68
    // in_gauss_blur_2_rd69
    // in_gauss_blur_2_rd70
    // in_gauss_blur_2_rd71

	hw_uint<1152> result;
	hw_uint<16> in_gauss_blur_2_rd0_res = in_gauss_blur_2_rd0_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 1152>(result, in_gauss_blur_2_rd0_res);
	hw_uint<16> in_gauss_blur_2_rd1_res = in_gauss_blur_2_rd1_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<16, 1152>(result, in_gauss_blur_2_rd1_res);
	hw_uint<16> in_gauss_blur_2_rd2_res = in_gauss_blur_2_rd2_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<32, 1152>(result, in_gauss_blur_2_rd2_res);
	hw_uint<16> in_gauss_blur_2_rd3_res = in_gauss_blur_2_rd3_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<48, 1152>(result, in_gauss_blur_2_rd3_res);
	hw_uint<16> in_gauss_blur_2_rd4_res = in_gauss_blur_2_rd4_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<64, 1152>(result, in_gauss_blur_2_rd4_res);
	hw_uint<16> in_gauss_blur_2_rd5_res = in_gauss_blur_2_rd5_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<80, 1152>(result, in_gauss_blur_2_rd5_res);
	hw_uint<16> in_gauss_blur_2_rd6_res = in_gauss_blur_2_rd6_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<96, 1152>(result, in_gauss_blur_2_rd6_res);
	hw_uint<16> in_gauss_blur_2_rd7_res = in_gauss_blur_2_rd7_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<112, 1152>(result, in_gauss_blur_2_rd7_res);
	hw_uint<16> in_gauss_blur_2_rd8_res = in_gauss_blur_2_rd8_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<128, 1152>(result, in_gauss_blur_2_rd8_res);
	hw_uint<16> in_gauss_blur_2_rd9_res = in_gauss_blur_2_rd9_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<144, 1152>(result, in_gauss_blur_2_rd9_res);
	hw_uint<16> in_gauss_blur_2_rd10_res = in_gauss_blur_2_rd10_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<160, 1152>(result, in_gauss_blur_2_rd10_res);
	hw_uint<16> in_gauss_blur_2_rd11_res = in_gauss_blur_2_rd11_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<176, 1152>(result, in_gauss_blur_2_rd11_res);
	hw_uint<16> in_gauss_blur_2_rd12_res = in_gauss_blur_2_rd12_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<192, 1152>(result, in_gauss_blur_2_rd12_res);
	hw_uint<16> in_gauss_blur_2_rd13_res = in_gauss_blur_2_rd13_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<208, 1152>(result, in_gauss_blur_2_rd13_res);
	hw_uint<16> in_gauss_blur_2_rd14_res = in_gauss_blur_2_rd14_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<224, 1152>(result, in_gauss_blur_2_rd14_res);
	hw_uint<16> in_gauss_blur_2_rd15_res = in_gauss_blur_2_rd15_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<240, 1152>(result, in_gauss_blur_2_rd15_res);
	hw_uint<16> in_gauss_blur_2_rd16_res = in_gauss_blur_2_rd16_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<256, 1152>(result, in_gauss_blur_2_rd16_res);
	hw_uint<16> in_gauss_blur_2_rd17_res = in_gauss_blur_2_rd17_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<272, 1152>(result, in_gauss_blur_2_rd17_res);
	hw_uint<16> in_gauss_blur_2_rd18_res = in_gauss_blur_2_rd18_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<288, 1152>(result, in_gauss_blur_2_rd18_res);
	hw_uint<16> in_gauss_blur_2_rd19_res = in_gauss_blur_2_rd19_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<304, 1152>(result, in_gauss_blur_2_rd19_res);
	hw_uint<16> in_gauss_blur_2_rd20_res = in_gauss_blur_2_rd20_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<320, 1152>(result, in_gauss_blur_2_rd20_res);
	hw_uint<16> in_gauss_blur_2_rd21_res = in_gauss_blur_2_rd21_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<336, 1152>(result, in_gauss_blur_2_rd21_res);
	hw_uint<16> in_gauss_blur_2_rd22_res = in_gauss_blur_2_rd22_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<352, 1152>(result, in_gauss_blur_2_rd22_res);
	hw_uint<16> in_gauss_blur_2_rd23_res = in_gauss_blur_2_rd23_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<368, 1152>(result, in_gauss_blur_2_rd23_res);
	hw_uint<16> in_gauss_blur_2_rd24_res = in_gauss_blur_2_rd24_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<384, 1152>(result, in_gauss_blur_2_rd24_res);
	hw_uint<16> in_gauss_blur_2_rd25_res = in_gauss_blur_2_rd25_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<400, 1152>(result, in_gauss_blur_2_rd25_res);
	hw_uint<16> in_gauss_blur_2_rd26_res = in_gauss_blur_2_rd26_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<416, 1152>(result, in_gauss_blur_2_rd26_res);
	hw_uint<16> in_gauss_blur_2_rd27_res = in_gauss_blur_2_rd27_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<432, 1152>(result, in_gauss_blur_2_rd27_res);
	hw_uint<16> in_gauss_blur_2_rd28_res = in_gauss_blur_2_rd28_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<448, 1152>(result, in_gauss_blur_2_rd28_res);
	hw_uint<16> in_gauss_blur_2_rd29_res = in_gauss_blur_2_rd29_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<464, 1152>(result, in_gauss_blur_2_rd29_res);
	hw_uint<16> in_gauss_blur_2_rd30_res = in_gauss_blur_2_rd30_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<480, 1152>(result, in_gauss_blur_2_rd30_res);
	hw_uint<16> in_gauss_blur_2_rd31_res = in_gauss_blur_2_rd31_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<496, 1152>(result, in_gauss_blur_2_rd31_res);
	hw_uint<16> in_gauss_blur_2_rd32_res = in_gauss_blur_2_rd32_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<512, 1152>(result, in_gauss_blur_2_rd32_res);
	hw_uint<16> in_gauss_blur_2_rd33_res = in_gauss_blur_2_rd33_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<528, 1152>(result, in_gauss_blur_2_rd33_res);
	hw_uint<16> in_gauss_blur_2_rd34_res = in_gauss_blur_2_rd34_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<544, 1152>(result, in_gauss_blur_2_rd34_res);
	hw_uint<16> in_gauss_blur_2_rd35_res = in_gauss_blur_2_rd35_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<560, 1152>(result, in_gauss_blur_2_rd35_res);
	hw_uint<16> in_gauss_blur_2_rd36_res = in_gauss_blur_2_rd36_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<576, 1152>(result, in_gauss_blur_2_rd36_res);
	hw_uint<16> in_gauss_blur_2_rd37_res = in_gauss_blur_2_rd37_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<592, 1152>(result, in_gauss_blur_2_rd37_res);
	hw_uint<16> in_gauss_blur_2_rd38_res = in_gauss_blur_2_rd38_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<608, 1152>(result, in_gauss_blur_2_rd38_res);
	hw_uint<16> in_gauss_blur_2_rd39_res = in_gauss_blur_2_rd39_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<624, 1152>(result, in_gauss_blur_2_rd39_res);
	hw_uint<16> in_gauss_blur_2_rd40_res = in_gauss_blur_2_rd40_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<640, 1152>(result, in_gauss_blur_2_rd40_res);
	hw_uint<16> in_gauss_blur_2_rd41_res = in_gauss_blur_2_rd41_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<656, 1152>(result, in_gauss_blur_2_rd41_res);
	hw_uint<16> in_gauss_blur_2_rd42_res = in_gauss_blur_2_rd42_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<672, 1152>(result, in_gauss_blur_2_rd42_res);
	hw_uint<16> in_gauss_blur_2_rd43_res = in_gauss_blur_2_rd43_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<688, 1152>(result, in_gauss_blur_2_rd43_res);
	hw_uint<16> in_gauss_blur_2_rd44_res = in_gauss_blur_2_rd44_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<704, 1152>(result, in_gauss_blur_2_rd44_res);
	hw_uint<16> in_gauss_blur_2_rd45_res = in_gauss_blur_2_rd45_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<720, 1152>(result, in_gauss_blur_2_rd45_res);
	hw_uint<16> in_gauss_blur_2_rd46_res = in_gauss_blur_2_rd46_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<736, 1152>(result, in_gauss_blur_2_rd46_res);
	hw_uint<16> in_gauss_blur_2_rd47_res = in_gauss_blur_2_rd47_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<752, 1152>(result, in_gauss_blur_2_rd47_res);
	hw_uint<16> in_gauss_blur_2_rd48_res = in_gauss_blur_2_rd48_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<768, 1152>(result, in_gauss_blur_2_rd48_res);
	hw_uint<16> in_gauss_blur_2_rd49_res = in_gauss_blur_2_rd49_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<784, 1152>(result, in_gauss_blur_2_rd49_res);
	hw_uint<16> in_gauss_blur_2_rd50_res = in_gauss_blur_2_rd50_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<800, 1152>(result, in_gauss_blur_2_rd50_res);
	hw_uint<16> in_gauss_blur_2_rd51_res = in_gauss_blur_2_rd51_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<816, 1152>(result, in_gauss_blur_2_rd51_res);
	hw_uint<16> in_gauss_blur_2_rd52_res = in_gauss_blur_2_rd52_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<832, 1152>(result, in_gauss_blur_2_rd52_res);
	hw_uint<16> in_gauss_blur_2_rd53_res = in_gauss_blur_2_rd53_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<848, 1152>(result, in_gauss_blur_2_rd53_res);
	hw_uint<16> in_gauss_blur_2_rd54_res = in_gauss_blur_2_rd54_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<864, 1152>(result, in_gauss_blur_2_rd54_res);
	hw_uint<16> in_gauss_blur_2_rd55_res = in_gauss_blur_2_rd55_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<880, 1152>(result, in_gauss_blur_2_rd55_res);
	hw_uint<16> in_gauss_blur_2_rd56_res = in_gauss_blur_2_rd56_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<896, 1152>(result, in_gauss_blur_2_rd56_res);
	hw_uint<16> in_gauss_blur_2_rd57_res = in_gauss_blur_2_rd57_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<912, 1152>(result, in_gauss_blur_2_rd57_res);
	hw_uint<16> in_gauss_blur_2_rd58_res = in_gauss_blur_2_rd58_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<928, 1152>(result, in_gauss_blur_2_rd58_res);
	hw_uint<16> in_gauss_blur_2_rd59_res = in_gauss_blur_2_rd59_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<944, 1152>(result, in_gauss_blur_2_rd59_res);
	hw_uint<16> in_gauss_blur_2_rd60_res = in_gauss_blur_2_rd60_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<960, 1152>(result, in_gauss_blur_2_rd60_res);
	hw_uint<16> in_gauss_blur_2_rd61_res = in_gauss_blur_2_rd61_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<976, 1152>(result, in_gauss_blur_2_rd61_res);
	hw_uint<16> in_gauss_blur_2_rd62_res = in_gauss_blur_2_rd62_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<992, 1152>(result, in_gauss_blur_2_rd62_res);
	hw_uint<16> in_gauss_blur_2_rd63_res = in_gauss_blur_2_rd63_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1008, 1152>(result, in_gauss_blur_2_rd63_res);
	hw_uint<16> in_gauss_blur_2_rd64_res = in_gauss_blur_2_rd64_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1024, 1152>(result, in_gauss_blur_2_rd64_res);
	hw_uint<16> in_gauss_blur_2_rd65_res = in_gauss_blur_2_rd65_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1040, 1152>(result, in_gauss_blur_2_rd65_res);
	hw_uint<16> in_gauss_blur_2_rd66_res = in_gauss_blur_2_rd66_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1056, 1152>(result, in_gauss_blur_2_rd66_res);
	hw_uint<16> in_gauss_blur_2_rd67_res = in_gauss_blur_2_rd67_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1072, 1152>(result, in_gauss_blur_2_rd67_res);
	hw_uint<16> in_gauss_blur_2_rd68_res = in_gauss_blur_2_rd68_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1088, 1152>(result, in_gauss_blur_2_rd68_res);
	hw_uint<16> in_gauss_blur_2_rd69_res = in_gauss_blur_2_rd69_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1104, 1152>(result, in_gauss_blur_2_rd69_res);
	hw_uint<16> in_gauss_blur_2_rd70_res = in_gauss_blur_2_rd70_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1120, 1152>(result, in_gauss_blur_2_rd70_res);
	hw_uint<16> in_gauss_blur_2_rd71_res = in_gauss_blur_2_rd71_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1136, 1152>(result, in_gauss_blur_2_rd71_res);
	return result;
}

// in_gauss_ds_1_update_0_write
//	in_gauss_ds_1_in_gauss_ds_1_update_0_write0
//	in_gauss_ds_1_in_gauss_ds_1_update_0_write1
//	in_gauss_ds_1_in_gauss_ds_1_update_0_write2
//	in_gauss_ds_1_in_gauss_ds_1_update_0_write3
//	in_gauss_ds_1_in_gauss_ds_1_update_0_write4
//	in_gauss_ds_1_in_gauss_ds_1_update_0_write5
//	in_gauss_ds_1_in_gauss_ds_1_update_0_write6
//	in_gauss_ds_1_in_gauss_ds_1_update_0_write7
inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write_bundle_write(hw_uint<128>& in_gauss_ds_1_update_0_write, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_ds_1_in_gauss_ds_1_update_0_write0_res = in_gauss_ds_1_update_0_write.extract<0, 15>();
	in_gauss_ds_1_in_gauss_ds_1_update_0_write0_write(in_gauss_ds_1_in_gauss_ds_1_update_0_write0_res, in_gauss_ds_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_1_in_gauss_ds_1_update_0_write1_res = in_gauss_ds_1_update_0_write.extract<16, 31>();
	in_gauss_ds_1_in_gauss_ds_1_update_0_write1_write(in_gauss_ds_1_in_gauss_ds_1_update_0_write1_res, in_gauss_ds_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_1_in_gauss_ds_1_update_0_write2_res = in_gauss_ds_1_update_0_write.extract<32, 47>();
	in_gauss_ds_1_in_gauss_ds_1_update_0_write2_write(in_gauss_ds_1_in_gauss_ds_1_update_0_write2_res, in_gauss_ds_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_1_in_gauss_ds_1_update_0_write3_res = in_gauss_ds_1_update_0_write.extract<48, 63>();
	in_gauss_ds_1_in_gauss_ds_1_update_0_write3_write(in_gauss_ds_1_in_gauss_ds_1_update_0_write3_res, in_gauss_ds_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_1_in_gauss_ds_1_update_0_write4_res = in_gauss_ds_1_update_0_write.extract<64, 79>();
	in_gauss_ds_1_in_gauss_ds_1_update_0_write4_write(in_gauss_ds_1_in_gauss_ds_1_update_0_write4_res, in_gauss_ds_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_1_in_gauss_ds_1_update_0_write5_res = in_gauss_ds_1_update_0_write.extract<80, 95>();
	in_gauss_ds_1_in_gauss_ds_1_update_0_write5_write(in_gauss_ds_1_in_gauss_ds_1_update_0_write5_res, in_gauss_ds_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_1_in_gauss_ds_1_update_0_write6_res = in_gauss_ds_1_update_0_write.extract<96, 111>();
	in_gauss_ds_1_in_gauss_ds_1_update_0_write6_write(in_gauss_ds_1_in_gauss_ds_1_update_0_write6_res, in_gauss_ds_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_1_in_gauss_ds_1_update_0_write7_res = in_gauss_ds_1_update_0_write.extract<112, 127>();
	in_gauss_ds_1_in_gauss_ds_1_update_0_write7_write(in_gauss_ds_1_in_gauss_ds_1_update_0_write7_res, in_gauss_ds_1, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 480], [-1, 269]}
	// Capacity: 246
	// # of read delays: 6
  // 0, 1, 122, 123, 244, 245
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 120> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


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

	inline hw_uint<16> peek_243() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_244() {
		return f8;
	}

	inline hw_uint<16> peek_245() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f7.push(f6);
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

struct in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9_cache {
	// RAM Box: {[1, 477], [-1, 269]}
	// Capacity: 246
	// # of read delays: 4
  // 0, 1, 123, 245
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 121> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 121> f5;
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

	inline hw_uint<16> peek_244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_245() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 121
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 121 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_2_in_gauss_ds_2_update_0_write2_merged_banks_9_cache {
	// RAM Box: {[2, 478], [-1, 269]}
	// Capacity: 246
	// # of read delays: 4
  // 0, 1, 123, 245
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 121> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 121> f5;
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

	inline hw_uint<16> peek_244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_245() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 121
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 121 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_2_in_gauss_ds_2_update_0_write3_merged_banks_9_cache {
	// RAM Box: {[-1, 479], [-1, 269]}
	// Capacity: 247
	// # of read delays: 7
  // 0, 1, 2, 123, 124, 245, 246
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 120> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 120> f9;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}

	inline hw_uint<16> peek_124() {
		return f8;
	}

	inline hw_uint<16> peek_244() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_245() {
		return f10;
	}

	inline hw_uint<16> peek_246() {
		return f12;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 120
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 120 reading from capacity: 1
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

struct in_gauss_ds_2_cache {
  // # of banks: 4
  in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9_cache in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9;
  in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9_cache in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9;
  in_gauss_ds_2_in_gauss_ds_2_update_0_write2_merged_banks_9_cache in_gauss_ds_2_in_gauss_ds_2_update_0_write2_merged_banks_9;
  in_gauss_ds_2_in_gauss_ds_2_update_0_write3_merged_banks_9_cache in_gauss_ds_2_in_gauss_ds_2_update_0_write3_merged_banks_9;
};



inline void in_gauss_ds_2_in_gauss_ds_2_update_0_write0_write(hw_uint<16>& in_gauss_ds_2_in_gauss_ds_2_update_0_write0, in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
  in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.push(in_gauss_ds_2_in_gauss_ds_2_update_0_write0);
}

inline void in_gauss_ds_2_in_gauss_ds_2_update_0_write1_write(hw_uint<16>& in_gauss_ds_2_in_gauss_ds_2_update_0_write1, in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
  in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.push(in_gauss_ds_2_in_gauss_ds_2_update_0_write1);
}

inline void in_gauss_ds_2_in_gauss_ds_2_update_0_write2_write(hw_uint<16>& in_gauss_ds_2_in_gauss_ds_2_update_0_write2, in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
  in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write2_merged_banks_9.push(in_gauss_ds_2_in_gauss_ds_2_update_0_write2);
}

inline void in_gauss_ds_2_in_gauss_ds_2_update_0_write3_write(hw_uint<16>& in_gauss_ds_2_in_gauss_ds_2_update_0_write3, in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
  in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write3_merged_banks_9.push(in_gauss_ds_2_in_gauss_ds_2_update_0_write3);
}

inline hw_uint<16> in_gauss_blur_3_rd0_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd0 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[-1 + 4d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write3_merged_banks_9.peek_246();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd1_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd1 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[-1 + 4d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write3_merged_banks_9.peek_124();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd10_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd10 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[4d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_123();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd11_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd11 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[4d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd12_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd12 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 4d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_245();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd13_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd13 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 4d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_123();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd14_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd14 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 4d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd15_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd15 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 4d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write2_merged_banks_9.peek_245();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd16_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd16 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 4d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write2_merged_banks_9.peek_123();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd17_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd17 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 4d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write2_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd18_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd18 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 4d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_245();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd19_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd19 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 4d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_123();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd2_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd2 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[-1 + 4d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write3_merged_banks_9.peek_2();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd20_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd20 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 4d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd21_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd21 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 4d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write2_merged_banks_9.peek_245();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd22_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd22 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 4d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write2_merged_banks_9.peek_123();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd23_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd23 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 4d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write2_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd24_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd24 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[3 + 4d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write3_merged_banks_9.peek_245();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd25_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd25 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[3 + 4d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write3_merged_banks_9.peek_123();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd26_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd26 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[3 + 4d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write3_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd27_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd27 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 4d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write2_merged_banks_9.peek_245();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd28_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd28 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 4d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write2_merged_banks_9.peek_123();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd29_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd29 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 4d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write2_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd3_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd3 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[4d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_245();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd30_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd30 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[3 + 4d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write3_merged_banks_9.peek_245();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd31_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd31 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[3 + 4d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write3_merged_banks_9.peek_123();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd32_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd32 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[3 + 4d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write3_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd33_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd33 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[4 + 4d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_244();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd34_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd34 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[4 + 4d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_122();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd35_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd35 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[4 + 4d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd4_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd4 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[4d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_123();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd5_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd5 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[4d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd6_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd6 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 4d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_245();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd7_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd7 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 4d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_123();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd8_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd8 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 4d0, 1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd9_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd9 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[4d0, -1 + d1] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_245();
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
//	in_gauss_blur_3_rd9
//	in_gauss_blur_3_rd10
//	in_gauss_blur_3_rd11
//	in_gauss_blur_3_rd12
//	in_gauss_blur_3_rd13
//	in_gauss_blur_3_rd14
//	in_gauss_blur_3_rd15
//	in_gauss_blur_3_rd16
//	in_gauss_blur_3_rd17
//	in_gauss_blur_3_rd18
//	in_gauss_blur_3_rd19
//	in_gauss_blur_3_rd20
//	in_gauss_blur_3_rd21
//	in_gauss_blur_3_rd22
//	in_gauss_blur_3_rd23
//	in_gauss_blur_3_rd24
//	in_gauss_blur_3_rd25
//	in_gauss_blur_3_rd26
//	in_gauss_blur_3_rd27
//	in_gauss_blur_3_rd28
//	in_gauss_blur_3_rd29
//	in_gauss_blur_3_rd30
//	in_gauss_blur_3_rd31
//	in_gauss_blur_3_rd32
//	in_gauss_blur_3_rd33
//	in_gauss_blur_3_rd34
//	in_gauss_blur_3_rd35
inline hw_uint<576> in_gauss_ds_2_in_gauss_blur_3_update_0_read_bundle_read(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 36
    // in_gauss_blur_3_rd0
    // in_gauss_blur_3_rd1
    // in_gauss_blur_3_rd2
    // in_gauss_blur_3_rd3
    // in_gauss_blur_3_rd4
    // in_gauss_blur_3_rd5
    // in_gauss_blur_3_rd6
    // in_gauss_blur_3_rd7
    // in_gauss_blur_3_rd8
    // in_gauss_blur_3_rd9
    // in_gauss_blur_3_rd10
    // in_gauss_blur_3_rd11
    // in_gauss_blur_3_rd12
    // in_gauss_blur_3_rd13
    // in_gauss_blur_3_rd14
    // in_gauss_blur_3_rd15
    // in_gauss_blur_3_rd16
    // in_gauss_blur_3_rd17
    // in_gauss_blur_3_rd18
    // in_gauss_blur_3_rd19
    // in_gauss_blur_3_rd20
    // in_gauss_blur_3_rd21
    // in_gauss_blur_3_rd22
    // in_gauss_blur_3_rd23
    // in_gauss_blur_3_rd24
    // in_gauss_blur_3_rd25
    // in_gauss_blur_3_rd26
    // in_gauss_blur_3_rd27
    // in_gauss_blur_3_rd28
    // in_gauss_blur_3_rd29
    // in_gauss_blur_3_rd30
    // in_gauss_blur_3_rd31
    // in_gauss_blur_3_rd32
    // in_gauss_blur_3_rd33
    // in_gauss_blur_3_rd34
    // in_gauss_blur_3_rd35

	hw_uint<576> result;
	hw_uint<16> in_gauss_blur_3_rd0_res = in_gauss_blur_3_rd0_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 576>(result, in_gauss_blur_3_rd0_res);
	hw_uint<16> in_gauss_blur_3_rd1_res = in_gauss_blur_3_rd1_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<16, 576>(result, in_gauss_blur_3_rd1_res);
	hw_uint<16> in_gauss_blur_3_rd2_res = in_gauss_blur_3_rd2_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<32, 576>(result, in_gauss_blur_3_rd2_res);
	hw_uint<16> in_gauss_blur_3_rd3_res = in_gauss_blur_3_rd3_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<48, 576>(result, in_gauss_blur_3_rd3_res);
	hw_uint<16> in_gauss_blur_3_rd4_res = in_gauss_blur_3_rd4_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<64, 576>(result, in_gauss_blur_3_rd4_res);
	hw_uint<16> in_gauss_blur_3_rd5_res = in_gauss_blur_3_rd5_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<80, 576>(result, in_gauss_blur_3_rd5_res);
	hw_uint<16> in_gauss_blur_3_rd6_res = in_gauss_blur_3_rd6_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<96, 576>(result, in_gauss_blur_3_rd6_res);
	hw_uint<16> in_gauss_blur_3_rd7_res = in_gauss_blur_3_rd7_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<112, 576>(result, in_gauss_blur_3_rd7_res);
	hw_uint<16> in_gauss_blur_3_rd8_res = in_gauss_blur_3_rd8_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<128, 576>(result, in_gauss_blur_3_rd8_res);
	hw_uint<16> in_gauss_blur_3_rd9_res = in_gauss_blur_3_rd9_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<144, 576>(result, in_gauss_blur_3_rd9_res);
	hw_uint<16> in_gauss_blur_3_rd10_res = in_gauss_blur_3_rd10_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<160, 576>(result, in_gauss_blur_3_rd10_res);
	hw_uint<16> in_gauss_blur_3_rd11_res = in_gauss_blur_3_rd11_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<176, 576>(result, in_gauss_blur_3_rd11_res);
	hw_uint<16> in_gauss_blur_3_rd12_res = in_gauss_blur_3_rd12_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<192, 576>(result, in_gauss_blur_3_rd12_res);
	hw_uint<16> in_gauss_blur_3_rd13_res = in_gauss_blur_3_rd13_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<208, 576>(result, in_gauss_blur_3_rd13_res);
	hw_uint<16> in_gauss_blur_3_rd14_res = in_gauss_blur_3_rd14_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<224, 576>(result, in_gauss_blur_3_rd14_res);
	hw_uint<16> in_gauss_blur_3_rd15_res = in_gauss_blur_3_rd15_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<240, 576>(result, in_gauss_blur_3_rd15_res);
	hw_uint<16> in_gauss_blur_3_rd16_res = in_gauss_blur_3_rd16_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<256, 576>(result, in_gauss_blur_3_rd16_res);
	hw_uint<16> in_gauss_blur_3_rd17_res = in_gauss_blur_3_rd17_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<272, 576>(result, in_gauss_blur_3_rd17_res);
	hw_uint<16> in_gauss_blur_3_rd18_res = in_gauss_blur_3_rd18_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<288, 576>(result, in_gauss_blur_3_rd18_res);
	hw_uint<16> in_gauss_blur_3_rd19_res = in_gauss_blur_3_rd19_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<304, 576>(result, in_gauss_blur_3_rd19_res);
	hw_uint<16> in_gauss_blur_3_rd20_res = in_gauss_blur_3_rd20_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<320, 576>(result, in_gauss_blur_3_rd20_res);
	hw_uint<16> in_gauss_blur_3_rd21_res = in_gauss_blur_3_rd21_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<336, 576>(result, in_gauss_blur_3_rd21_res);
	hw_uint<16> in_gauss_blur_3_rd22_res = in_gauss_blur_3_rd22_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<352, 576>(result, in_gauss_blur_3_rd22_res);
	hw_uint<16> in_gauss_blur_3_rd23_res = in_gauss_blur_3_rd23_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<368, 576>(result, in_gauss_blur_3_rd23_res);
	hw_uint<16> in_gauss_blur_3_rd24_res = in_gauss_blur_3_rd24_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<384, 576>(result, in_gauss_blur_3_rd24_res);
	hw_uint<16> in_gauss_blur_3_rd25_res = in_gauss_blur_3_rd25_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<400, 576>(result, in_gauss_blur_3_rd25_res);
	hw_uint<16> in_gauss_blur_3_rd26_res = in_gauss_blur_3_rd26_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<416, 576>(result, in_gauss_blur_3_rd26_res);
	hw_uint<16> in_gauss_blur_3_rd27_res = in_gauss_blur_3_rd27_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<432, 576>(result, in_gauss_blur_3_rd27_res);
	hw_uint<16> in_gauss_blur_3_rd28_res = in_gauss_blur_3_rd28_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<448, 576>(result, in_gauss_blur_3_rd28_res);
	hw_uint<16> in_gauss_blur_3_rd29_res = in_gauss_blur_3_rd29_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<464, 576>(result, in_gauss_blur_3_rd29_res);
	hw_uint<16> in_gauss_blur_3_rd30_res = in_gauss_blur_3_rd30_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<480, 576>(result, in_gauss_blur_3_rd30_res);
	hw_uint<16> in_gauss_blur_3_rd31_res = in_gauss_blur_3_rd31_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<496, 576>(result, in_gauss_blur_3_rd31_res);
	hw_uint<16> in_gauss_blur_3_rd32_res = in_gauss_blur_3_rd32_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<512, 576>(result, in_gauss_blur_3_rd32_res);
	hw_uint<16> in_gauss_blur_3_rd33_res = in_gauss_blur_3_rd33_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<528, 576>(result, in_gauss_blur_3_rd33_res);
	hw_uint<16> in_gauss_blur_3_rd34_res = in_gauss_blur_3_rd34_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<544, 576>(result, in_gauss_blur_3_rd34_res);
	hw_uint<16> in_gauss_blur_3_rd35_res = in_gauss_blur_3_rd35_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<560, 576>(result, in_gauss_blur_3_rd35_res);
	return result;
}

// in_gauss_ds_2_update_0_write
//	in_gauss_ds_2_in_gauss_ds_2_update_0_write0
//	in_gauss_ds_2_in_gauss_ds_2_update_0_write1
//	in_gauss_ds_2_in_gauss_ds_2_update_0_write2
//	in_gauss_ds_2_in_gauss_ds_2_update_0_write3
inline void in_gauss_ds_2_in_gauss_ds_2_update_0_write_bundle_write(hw_uint<64>& in_gauss_ds_2_update_0_write, in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_ds_2_in_gauss_ds_2_update_0_write0_res = in_gauss_ds_2_update_0_write.extract<0, 15>();
	in_gauss_ds_2_in_gauss_ds_2_update_0_write0_write(in_gauss_ds_2_in_gauss_ds_2_update_0_write0_res, in_gauss_ds_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_2_in_gauss_ds_2_update_0_write1_res = in_gauss_ds_2_update_0_write.extract<16, 31>();
	in_gauss_ds_2_in_gauss_ds_2_update_0_write1_write(in_gauss_ds_2_in_gauss_ds_2_update_0_write1_res, in_gauss_ds_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_2_in_gauss_ds_2_update_0_write2_res = in_gauss_ds_2_update_0_write.extract<32, 47>();
	in_gauss_ds_2_in_gauss_ds_2_update_0_write2_write(in_gauss_ds_2_in_gauss_ds_2_update_0_write2_res, in_gauss_ds_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_2_in_gauss_ds_2_update_0_write3_res = in_gauss_ds_2_update_0_write.extract<48, 63>();
	in_gauss_ds_2_in_gauss_ds_2_update_0_write3_write(in_gauss_ds_2_in_gauss_ds_2_update_0_write3_res, in_gauss_ds_2, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct in_gauss_ds_3_in_gauss_ds_3_update_0_write0_to_gp_fpga_16_rd0_cache {
	// RAM Box: {[0, 238], [0, 134]}
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

struct in_gauss_ds_3_in_gauss_ds_3_update_0_write1_to_gp_fpga_16_rd1_cache {
	// RAM Box: {[1, 239], [0, 134]}
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

struct in_gauss_ds_3_cache {
  // # of banks: 2
  in_gauss_ds_3_in_gauss_ds_3_update_0_write0_to_gp_fpga_16_rd0_cache in_gauss_ds_3_in_gauss_ds_3_update_0_write0_to_gp_fpga_16_rd0;
  in_gauss_ds_3_in_gauss_ds_3_update_0_write1_to_gp_fpga_16_rd1_cache in_gauss_ds_3_in_gauss_ds_3_update_0_write1_to_gp_fpga_16_rd1;
};



inline void in_gauss_ds_3_in_gauss_ds_3_update_0_write0_write(hw_uint<16>& in_gauss_ds_3_in_gauss_ds_3_update_0_write0, in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
  in_gauss_ds_3.in_gauss_ds_3_in_gauss_ds_3_update_0_write0_to_gp_fpga_16_rd0.push(in_gauss_ds_3_in_gauss_ds_3_update_0_write0);
}

inline void in_gauss_ds_3_in_gauss_ds_3_update_0_write1_write(hw_uint<16>& in_gauss_ds_3_in_gauss_ds_3_update_0_write1, in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
  in_gauss_ds_3.in_gauss_ds_3_in_gauss_ds_3_update_0_write1_to_gp_fpga_16_rd1.push(in_gauss_ds_3_in_gauss_ds_3_update_0_write1);
}

inline hw_uint<16> gp_fpga_16_rd0_select(in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_fpga_16_rd0 read pattern: { gp_fpga_16_update_0[d0, d1] -> in_gauss_ds_3[2d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 134 }
  // Read schedule : { gp_fpga_16_update_0[d0, d1] -> [7 + 8d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 134 }
  // Write schedule: { in_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 134 }
  auto value_in_gauss_ds_3_in_gauss_ds_3_update_0_write0 = in_gauss_ds_3.in_gauss_ds_3_in_gauss_ds_3_update_0_write0_to_gp_fpga_16_rd0.peek(/* one reader or all rams */ 0);
  return value_in_gauss_ds_3_in_gauss_ds_3_update_0_write0;
  return 0;
}

inline hw_uint<16> gp_fpga_16_rd1_select(in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_fpga_16_rd1 read pattern: { gp_fpga_16_update_0[d0, d1] -> in_gauss_ds_3[1 + 2d0, d1] : 0 <= d0 <= 119 and 0 <= d1 <= 134 }
  // Read schedule : { gp_fpga_16_update_0[d0, d1] -> [7 + 8d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 134 }
  // Write schedule: { in_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 134 }
  auto value_in_gauss_ds_3_in_gauss_ds_3_update_0_write1 = in_gauss_ds_3.in_gauss_ds_3_in_gauss_ds_3_update_0_write1_to_gp_fpga_16_rd1.peek(/* one reader or all rams */ 0);
  return value_in_gauss_ds_3_in_gauss_ds_3_update_0_write1;
  return 0;
}

// # of bundles = 2
// gp_fpga_16_update_0_read
//	gp_fpga_16_rd0
//	gp_fpga_16_rd1
inline hw_uint<32> in_gauss_ds_3_gp_fpga_16_update_0_read_bundle_read(in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 2
    // gp_fpga_16_rd0
    // gp_fpga_16_rd1

	hw_uint<32> result;
	hw_uint<16> gp_fpga_16_rd0_res = gp_fpga_16_rd0_select(in_gauss_ds_3, d0, d1, dynamic_address);
	set_at<0, 32>(result, gp_fpga_16_rd0_res);
	hw_uint<16> gp_fpga_16_rd1_res = gp_fpga_16_rd1_select(in_gauss_ds_3, d0, d1, dynamic_address);
	set_at<16, 32>(result, gp_fpga_16_rd1_res);
	return result;
}

// in_gauss_ds_3_update_0_write
//	in_gauss_ds_3_in_gauss_ds_3_update_0_write0
//	in_gauss_ds_3_in_gauss_ds_3_update_0_write1
inline void in_gauss_ds_3_in_gauss_ds_3_update_0_write_bundle_write(hw_uint<32>& in_gauss_ds_3_update_0_write, in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_ds_3_in_gauss_ds_3_update_0_write0_res = in_gauss_ds_3_update_0_write.extract<0, 15>();
	in_gauss_ds_3_in_gauss_ds_3_update_0_write0_write(in_gauss_ds_3_in_gauss_ds_3_update_0_write0_res, in_gauss_ds_3, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_3_in_gauss_ds_3_update_0_write1_res = in_gauss_ds_3_update_0_write.extract<16, 31>();
	in_gauss_ds_3_in_gauss_ds_3_update_0_write1_write(in_gauss_ds_3_in_gauss_ds_3_update_0_write1_res, in_gauss_ds_3, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 112368 bits


// Operation logic
inline void in_gauss_blur_3_update_0(in_gauss_ds_2_cache& in_gauss_ds_2, in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_ds_2
	auto in_gauss_ds_2_0_c__0_value = in_gauss_ds_2_in_gauss_blur_3_update_0_read_bundle_read(in_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_4(in_gauss_ds_2_0_c__0_value);
	// Produce: in_gauss_blur_3
	in_gauss_blur_3_in_gauss_blur_3_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_blur_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_gauss_ds_3_update_0(in_gauss_blur_3_cache& in_gauss_blur_3, in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_blur_3
	auto in_gauss_blur_3_0_c__0_value = in_gauss_blur_3_in_gauss_ds_3_update_0_read_bundle_read(in_gauss_blur_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_2(in_gauss_blur_3_0_c__0_value);
	// Produce: in_gauss_ds_3
	in_gauss_ds_3_in_gauss_ds_3_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_ds_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_fpga_16_update_0(in_gauss_ds_3_cache& in_gauss_ds_3, HWStream<hw_uint<32> >& /* buffer_args num ports = 2 */gp_fpga_16, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_ds_3
	auto in_gauss_ds_3_0_c__0_value = in_gauss_ds_3_gp_fpga_16_update_0_read_bundle_read(in_gauss_ds_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_2(in_gauss_ds_3_0_c__0_value);
	// Produce: gp_fpga_16
	gp_fpga_16.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_gauss_blur_2_update_0(in_gauss_ds_1_cache& in_gauss_ds_1, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_ds_1
	auto in_gauss_ds_1_0_c__0_value = in_gauss_ds_1_in_gauss_blur_2_update_0_read_bundle_read(in_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_8(in_gauss_ds_1_0_c__0_value);
	// Produce: in_gauss_blur_2
	in_gauss_blur_2_in_gauss_blur_2_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_blur_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_gauss_ds_2_update_0(in_gauss_blur_2_cache& in_gauss_blur_2, in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_blur_2
	auto in_gauss_blur_2_0_c__0_value = in_gauss_blur_2_in_gauss_ds_2_update_0_read_bundle_read(in_gauss_blur_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_4(in_gauss_blur_2_0_c__0_value);
	// Produce: in_gauss_ds_2
	in_gauss_ds_2_in_gauss_ds_2_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_ds_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_update_0(HWStream<hw_uint<256> >& /* buffer_args num ports = 16 */in_off_chip, in_cache& in, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_off_chip
	auto in_off_chip_0_c__0_value = in_off_chip.read();
	auto compute_result = id_unrolled_16(in_off_chip_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(/* arg names */compute_result, in, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_gauss_blur_1_update_0(in_cache& in, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_in_gauss_blur_1_update_0_read_bundle_read(in/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_16(in_0_c__0_value);
	// Produce: in_gauss_blur_1
	in_gauss_blur_1_in_gauss_blur_1_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_blur_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_gauss_ds_1_update_0(in_gauss_blur_1_cache& in_gauss_blur_1, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_blur_1
	auto in_gauss_blur_1_0_c__0_value = in_gauss_blur_1_in_gauss_ds_1_update_0_read_bundle_read(in_gauss_blur_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_8(in_gauss_blur_1_0_c__0_value);
	// Produce: in_gauss_ds_1
	in_gauss_ds_1_in_gauss_ds_1_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_ds_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void gp_fpga_16_opt(HWStream<hw_uint<256> >& /* get_args num ports = 16 */in_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 2 */gp_fpga_16) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("gp_fpga_16_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_gauss_blur_1_cache in_gauss_blur_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_gauss_blur_2_cache in_gauss_blur_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_gauss_blur_3_cache in_gauss_blur_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_gauss_ds_1_cache in_gauss_ds_1;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_gauss_ds_2_cache in_gauss_ds_2;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  in_gauss_ds_3_cache in_gauss_ds_3;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538; gp_fpga_16_update_0[d0, d1] -> [7 + 8d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 134; in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268; in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269; in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539; in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078; in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079; in_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 134 }
//   { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 120 and -2 <= d1 <= 538 }
// Condition for in_gauss_blur_2_update_0(((-1 - i0 + 2*floord(1 + i0, 2) == 0) && (-4 + i2 == 0) && (-1 + i1 >= 0) && (122 - i1 >= 0) && (1 + i0 >= 0) && (1079 - i0 >= 0)))
//   { gp_fpga_16_update_0[d0, d1] -> [7 + 8d1, 3 + d0, 8] : 0 <= d0 <= 119 and 0 <= d1 <= 134 }
// Condition for gp_fpga_16_update_0(((-1 - i0 + 8*floord(1 + i0, 8) == 0) && (-8 + i2 == 0) && (-3 + i1 >= 0) && (122 - i1 >= 0) && (-7 + i0 >= 0) && (1079 - i0 >= 0)))
//   { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 119 and 0 <= d1 <= 268 }
// Condition for in_gauss_blur_3_update_0(((-1 - i0 + 4*floord(1 + i0, 4) == 0) && (-6 + i2 == 0) && (-3 + i1 >= 0) && (122 - i1 >= 0) && (-7 + i0 >= 0) && (1079 - i0 >= 0)))
//   { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 120 and -1 <= d1 <= 269 }
// Condition for in_gauss_ds_2_update_0(((-1 - i0 + 4*floord(1 + i0, 4) == 0) && (-5 + i2 == 0) && (-1 + i1 >= 0) && (122 - i1 >= 0) && (1 + i0 >= 0) && (1079 - i0 >= 0)))
//   { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 121 and -3 <= d1 <= 539 }
// Condition for in_gauss_ds_1_update_0(((-1 - i0 + 2*floord(1 + i0, 2) == 0) && (-3 + i2 == 0) && (1 + i1 >= 0) && (122 - i1 >= 0) && (5 + i0 >= 0) && (1079 - i0 >= 0)))
//   { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 121 and -6 <= d1 <= 1078 }
// Condition for in_gauss_blur_1_update_0(((-2 + i2 == 0) && (1 + i1 >= 0) && (122 - i1 >= 0) && (5 + i0 >= 0) && (1079 - i0 >= 0)))
//   { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 122 and -7 <= d1 <= 1079 }
// Condition for in_update_0(((-1 + i2 == 0) && (3 + i1 >= 0) && (122 - i1 >= 0) && (7 + i0 >= 0) && (1079 - i0 >= 0)))
//   { in_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 3 + d0, 7] : 0 <= d0 <= 119 and 0 <= d1 <= 134 }
// Condition for in_gauss_ds_3_update_0(((-1 - i0 + 8*floord(1 + i0, 8) == 0) && (-7 + i2 == 0) && (-3 + i1 >= 0) && (122 - i1 >= 0) && (-7 + i0 >= 0) && (1079 - i0 >= 0)))

  /*
  // Schedules...
    // gp_fpga_16_update_0 -> [1*d1*1*8 + 1*7,1*d0*1*1 + 1*3,1*8]
    // in_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
    // in_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*3,1*d0*1*1 + 1*2,1*4]
    // in_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*7,1*d0*1*1 + 1*3,1*6]
    // in_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*1,1*d0*1*1 + 1*1,1*3]
    // in_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*3,1*d0*1*1 + 1*2,1*5]
    // in_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*7,1*d0*1*1 + 1*3,1*7]
    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
for (int c0 = -7; c0 <= 1079; c0++) {
  for (int c1 = -3; c1 <= 122; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((-3 <= c1 && c1 <= 122) && ((c1 - 0) % 1 == 0) && (-7 <= c0 && c0 <= 1079) && ((c0 - 0) % 1 == 0)) {
      in_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((-1 <= c1 && c1 <= 122) && ((c1 - 1) % 1 == 0) && (-5 <= c0 && c0 <= 1079) && ((c0 - 1) % 1 == 0)) {
      in_gauss_blur_1_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((-1 <= c1 && c1 <= 122) && ((c1 - 1) % 1 == 0) && (-5 <= c0 && c0 <= 1079) && ((c0 - 1) % 2 == 0)) {
      in_gauss_ds_1_update_0((c1 - 1) / 1, (c0 - 1) / 2);
    }

    if ((1 <= c1 && c1 <= 122) && ((c1 - 2) % 1 == 0) && (-1 <= c0 && c0 <= 1079) && ((c0 - 3) % 2 == 0)) {
      in_gauss_blur_2_update_0((c1 - 2) / 1, (c0 - 3) / 2);
    }

    if ((1 <= c1 && c1 <= 122) && ((c1 - 2) % 1 == 0) && (-1 <= c0 && c0 <= 1079) && ((c0 - 3) % 4 == 0)) {
      in_gauss_ds_2_update_0((c1 - 2) / 1, (c0 - 3) / 4);
    }

    if ((3 <= c1 && c1 <= 122) && ((c1 - 3) % 1 == 0) && (7 <= c0 && c0 <= 1079) && ((c0 - 7) % 4 == 0)) {
      in_gauss_blur_3_update_0((c1 - 3) / 1, (c0 - 7) / 4);
    }

    if ((3 <= c1 && c1 <= 122) && ((c1 - 3) % 1 == 0) && (7 <= c0 && c0 <= 1079) && ((c0 - 7) % 8 == 0)) {
      in_gauss_ds_3_update_0((c1 - 3) / 1, (c0 - 7) / 8);
    }

    if ((3 <= c1 && c1 <= 122) && ((c1 - 3) % 1 == 0) && (7 <= c0 && c0 <= 1079) && ((c0 - 7) % 8 == 0)) {
      gp_fpga_16_update_0((c1 - 3) / 1, (c0 - 7) / 8);
    }

  }
}

  */
	  // Schedules...
	    // gp_fpga_16_update_0 -> [1*d1*1*8 + 1*7,1*d0*1*1 + 1*3,1*8]
	    // in_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // in_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*3,1*d0*1*1 + 1*2,1*4]
	    // in_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*7,1*d0*1*1 + 1*3,1*6]
	    // in_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*1,1*d0*1*1 + 1*1,1*3]
	    // in_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*3,1*d0*1*1 + 1*2,1*5]
	    // in_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*7,1*d0*1*1 + 1*3,1*7]
	    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	for (int c0 = -7; c0 <= 1079; c0++) {
	  for (int c1 = -3; c1 <= 122; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-3 <= c1 && c1 <= 122) && ((c1 - 0) % 1 == 0) && (-7 <= c0 && c0 <= 1079) && ((c0 - 0) % 1 == 0)) {
	      in_update_0(in_off_chip /* buf name */, in, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((-1 <= c1 && c1 <= 122) && ((c1 - 1) % 1 == 0) && (-5 <= c0 && c0 <= 1079) && ((c0 - 1) % 1 == 0)) {
	      in_gauss_blur_1_update_0(in /* buf name */, in_gauss_blur_1, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((-1 <= c1 && c1 <= 122) && ((c1 - 1) % 1 == 0) && (-5 <= c0 && c0 <= 1079) && ((c0 - 1) % 2 == 0)) {
	      in_gauss_ds_1_update_0(in_gauss_blur_1 /* buf name */, in_gauss_ds_1, (c1 - 1) / 1, (c0 - 1) / 2);
	    }
	
	    if ((1 <= c1 && c1 <= 122) && ((c1 - 2) % 1 == 0) && (-1 <= c0 && c0 <= 1079) && ((c0 - 3) % 2 == 0)) {
	      in_gauss_blur_2_update_0(in_gauss_ds_1 /* buf name */, in_gauss_blur_2, (c1 - 2) / 1, (c0 - 3) / 2);
	    }
	
	    if ((1 <= c1 && c1 <= 122) && ((c1 - 2) % 1 == 0) && (-1 <= c0 && c0 <= 1079) && ((c0 - 3) % 4 == 0)) {
	      in_gauss_ds_2_update_0(in_gauss_blur_2 /* buf name */, in_gauss_ds_2, (c1 - 2) / 1, (c0 - 3) / 4);
	    }
	
	    if ((3 <= c1 && c1 <= 122) && ((c1 - 3) % 1 == 0) && (7 <= c0 && c0 <= 1079) && ((c0 - 7) % 4 == 0)) {
	      in_gauss_blur_3_update_0(in_gauss_ds_2 /* buf name */, in_gauss_blur_3, (c1 - 3) / 1, (c0 - 7) / 4);
	    }
	
	    if ((3 <= c1 && c1 <= 122) && ((c1 - 3) % 1 == 0) && (7 <= c0 && c0 <= 1079) && ((c0 - 7) % 8 == 0)) {
	      in_gauss_ds_3_update_0(in_gauss_blur_3 /* buf name */, in_gauss_ds_3, (c1 - 3) / 1, (c0 - 7) / 8);
	    }
	
	    if ((3 <= c1 && c1 <= 122) && ((c1 - 3) % 1 == 0) && (7 <= c0 && c0 <= 1079) && ((c0 - 7) % 8 == 0)) {
	      gp_fpga_16_update_0(in_gauss_ds_3 /* buf name */, gp_fpga_16, (c1 - 3) / 1, (c0 - 7) / 8);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void gp_fpga_16_opt_wrapper(HWStream<hw_uint<256> >& /* get_args num ports = 16 */in_off_chip, HWStream<hw_uint<32> >& /* get_args num ports = 2 */gp_fpga_16, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    gp_fpga_16_opt(in_off_chip, gp_fpga_16);
  }
}
#ifdef __VIVADO_SYNTH__
  // { gp_fpga_16_update_0[root = 0, gp_fpga_16_0, gp_fpga_16_1] -> gp_fpga_16[0, 0] : 0 <= gp_fpga_16_0 <= 119 and 0 <= gp_fpga_16_1 <= 134 }
const int gp_fpga_16_update_0_write_pipe0_num_transfers = 16200;
  // { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : -3 <= in_0 <= 122 and -7 <= in_1 <= 1079 }
const int in_update_0_read_pipe0_num_transfers = 136962;


extern "C" {

void gp_fpga_16_opt_accel(hw_uint<256>* in_update_0_read_pipe0, hw_uint<32>* gp_fpga_16_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = gp_fpga_16_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = gp_fpga_16_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<256> > in_update_0_read_pipe0_channel;
  static HWStream<hw_uint<32> > gp_fpga_16_update_0_write_pipe0_channel;

  burst_read<256>(in_update_0_read_pipe0, in_update_0_read_pipe0_channel, in_update_0_read_pipe0_num_transfers*size);

  gp_fpga_16_opt_wrapper(in_update_0_read_pipe0_channel, gp_fpga_16_update_0_write_pipe0_channel, size);

  burst_write<32>(gp_fpga_16_update_0_write_pipe0, gp_fpga_16_update_0_write_pipe0_channel, gp_fpga_16_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void gp_fpga_16_opt_rdai(HWStream<hw_uint<256> >& in_update_0_read_pipe0, HWStream<hw_uint<32> >&  gp_fpga_16_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = gp_fpga_16_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  gp_fpga_16_opt(in_update_0_read_pipe0, gp_fpga_16_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

