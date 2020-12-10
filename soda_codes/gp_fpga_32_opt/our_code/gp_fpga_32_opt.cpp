#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: gp_fpga_32_opt_compute_units.h
#include "gp_fpga_32_opt_compute_units.h"

#include "hw_classes.h"

struct in_in_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-64, 1984], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 6
  // 0, 1, 66, 67, 132, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 64> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 64> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


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

	inline hw_uint<16> peek_131() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_132() {
		return f8;
	}

	inline hw_uint<16> peek_133() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
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

struct in_in_update_0_write1_merged_banks_9_cache {
	// RAM Box: {[-63, 1953], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write10_merged_banks_9_cache {
	// RAM Box: {[-54, 1962], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write11_merged_banks_9_cache {
	// RAM Box: {[-53, 1963], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write12_merged_banks_9_cache {
	// RAM Box: {[-52, 1964], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write13_merged_banks_9_cache {
	// RAM Box: {[-51, 1965], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write14_merged_banks_9_cache {
	// RAM Box: {[-50, 1966], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write15_merged_banks_9_cache {
	// RAM Box: {[-49, 1967], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write16_merged_banks_9_cache {
	// RAM Box: {[-48, 1968], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write17_merged_banks_9_cache {
	// RAM Box: {[-47, 1969], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write18_merged_banks_9_cache {
	// RAM Box: {[-46, 1970], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write19_merged_banks_9_cache {
	// RAM Box: {[-45, 1971], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write2_merged_banks_9_cache {
	// RAM Box: {[-62, 1954], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write20_merged_banks_9_cache {
	// RAM Box: {[-44, 1972], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write21_merged_banks_9_cache {
	// RAM Box: {[-43, 1973], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write22_merged_banks_9_cache {
	// RAM Box: {[-42, 1974], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write23_merged_banks_9_cache {
	// RAM Box: {[-41, 1975], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write24_merged_banks_9_cache {
	// RAM Box: {[-40, 1976], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write25_merged_banks_9_cache {
	// RAM Box: {[-39, 1977], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write26_merged_banks_9_cache {
	// RAM Box: {[-38, 1978], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write27_merged_banks_9_cache {
	// RAM Box: {[-37, 1979], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write28_merged_banks_9_cache {
	// RAM Box: {[-36, 1980], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write29_merged_banks_9_cache {
	// RAM Box: {[-35, 1981], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write3_merged_banks_9_cache {
	// RAM Box: {[-61, 1955], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write30_merged_banks_9_cache {
	// RAM Box: {[-34, 1982], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write31_merged_banks_9_cache {
	// RAM Box: {[-65, 1983], [-7, 1079]}
	// Capacity: 135
	// # of read delays: 7
  // 0, 1, 2, 67, 68, 133, 134
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 64> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 64> f9;
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

	inline hw_uint<16> peek_66() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_67() {
		return f6;
	}

	inline hw_uint<16> peek_68() {
		return f8;
	}

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_133() {
		return f10;
	}

	inline hw_uint<16> peek_134() {
		return f12;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 64
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 64 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 64
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 64 reading from capacity: 1
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

struct in_in_update_0_write4_merged_banks_9_cache {
	// RAM Box: {[-60, 1956], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write5_merged_banks_9_cache {
	// RAM Box: {[-59, 1957], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write6_merged_banks_9_cache {
	// RAM Box: {[-58, 1958], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write7_merged_banks_9_cache {
	// RAM Box: {[-57, 1959], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write8_merged_banks_9_cache {
	// RAM Box: {[-56, 1960], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_in_update_0_write9_merged_banks_9_cache {
	// RAM Box: {[-55, 1961], [-7, 1079]}
	// Capacity: 134
	// # of read delays: 4
  // 0, 1, 67, 133
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 65> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 65> f5;
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

	inline hw_uint<16> peek_132() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_133() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct in_cache {
  // # of banks: 32
  in_in_update_0_write0_merged_banks_9_cache in_in_update_0_write0_merged_banks_9;
  in_in_update_0_write1_merged_banks_9_cache in_in_update_0_write1_merged_banks_9;
  in_in_update_0_write10_merged_banks_9_cache in_in_update_0_write10_merged_banks_9;
  in_in_update_0_write11_merged_banks_9_cache in_in_update_0_write11_merged_banks_9;
  in_in_update_0_write12_merged_banks_9_cache in_in_update_0_write12_merged_banks_9;
  in_in_update_0_write13_merged_banks_9_cache in_in_update_0_write13_merged_banks_9;
  in_in_update_0_write14_merged_banks_9_cache in_in_update_0_write14_merged_banks_9;
  in_in_update_0_write15_merged_banks_9_cache in_in_update_0_write15_merged_banks_9;
  in_in_update_0_write16_merged_banks_9_cache in_in_update_0_write16_merged_banks_9;
  in_in_update_0_write17_merged_banks_9_cache in_in_update_0_write17_merged_banks_9;
  in_in_update_0_write18_merged_banks_9_cache in_in_update_0_write18_merged_banks_9;
  in_in_update_0_write19_merged_banks_9_cache in_in_update_0_write19_merged_banks_9;
  in_in_update_0_write2_merged_banks_9_cache in_in_update_0_write2_merged_banks_9;
  in_in_update_0_write20_merged_banks_9_cache in_in_update_0_write20_merged_banks_9;
  in_in_update_0_write21_merged_banks_9_cache in_in_update_0_write21_merged_banks_9;
  in_in_update_0_write22_merged_banks_9_cache in_in_update_0_write22_merged_banks_9;
  in_in_update_0_write23_merged_banks_9_cache in_in_update_0_write23_merged_banks_9;
  in_in_update_0_write24_merged_banks_9_cache in_in_update_0_write24_merged_banks_9;
  in_in_update_0_write25_merged_banks_9_cache in_in_update_0_write25_merged_banks_9;
  in_in_update_0_write26_merged_banks_9_cache in_in_update_0_write26_merged_banks_9;
  in_in_update_0_write27_merged_banks_9_cache in_in_update_0_write27_merged_banks_9;
  in_in_update_0_write28_merged_banks_9_cache in_in_update_0_write28_merged_banks_9;
  in_in_update_0_write29_merged_banks_9_cache in_in_update_0_write29_merged_banks_9;
  in_in_update_0_write3_merged_banks_9_cache in_in_update_0_write3_merged_banks_9;
  in_in_update_0_write30_merged_banks_9_cache in_in_update_0_write30_merged_banks_9;
  in_in_update_0_write31_merged_banks_9_cache in_in_update_0_write31_merged_banks_9;
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

inline void in_in_update_0_write16_write(hw_uint<16>& in_in_update_0_write16, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write16_merged_banks_9.push(in_in_update_0_write16);
}

inline void in_in_update_0_write17_write(hw_uint<16>& in_in_update_0_write17, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write17_merged_banks_9.push(in_in_update_0_write17);
}

inline void in_in_update_0_write18_write(hw_uint<16>& in_in_update_0_write18, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write18_merged_banks_9.push(in_in_update_0_write18);
}

inline void in_in_update_0_write19_write(hw_uint<16>& in_in_update_0_write19, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write19_merged_banks_9.push(in_in_update_0_write19);
}

inline void in_in_update_0_write2_write(hw_uint<16>& in_in_update_0_write2, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write2_merged_banks_9.push(in_in_update_0_write2);
}

inline void in_in_update_0_write20_write(hw_uint<16>& in_in_update_0_write20, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write20_merged_banks_9.push(in_in_update_0_write20);
}

inline void in_in_update_0_write21_write(hw_uint<16>& in_in_update_0_write21, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write21_merged_banks_9.push(in_in_update_0_write21);
}

inline void in_in_update_0_write22_write(hw_uint<16>& in_in_update_0_write22, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write22_merged_banks_9.push(in_in_update_0_write22);
}

inline void in_in_update_0_write23_write(hw_uint<16>& in_in_update_0_write23, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write23_merged_banks_9.push(in_in_update_0_write23);
}

inline void in_in_update_0_write24_write(hw_uint<16>& in_in_update_0_write24, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write24_merged_banks_9.push(in_in_update_0_write24);
}

inline void in_in_update_0_write25_write(hw_uint<16>& in_in_update_0_write25, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write25_merged_banks_9.push(in_in_update_0_write25);
}

inline void in_in_update_0_write26_write(hw_uint<16>& in_in_update_0_write26, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write26_merged_banks_9.push(in_in_update_0_write26);
}

inline void in_in_update_0_write27_write(hw_uint<16>& in_in_update_0_write27, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write27_merged_banks_9.push(in_in_update_0_write27);
}

inline void in_in_update_0_write28_write(hw_uint<16>& in_in_update_0_write28, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write28_merged_banks_9.push(in_in_update_0_write28);
}

inline void in_in_update_0_write29_write(hw_uint<16>& in_in_update_0_write29, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write29_merged_banks_9.push(in_in_update_0_write29);
}

inline void in_in_update_0_write3_write(hw_uint<16>& in_in_update_0_write3, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write3_merged_banks_9.push(in_in_update_0_write3);
}

inline void in_in_update_0_write30_write(hw_uint<16>& in_in_update_0_write30, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write30_merged_banks_9.push(in_in_update_0_write30);
}

inline void in_in_update_0_write31_write(hw_uint<16>& in_in_update_0_write31, in_cache& in, int d0, int d1, int dynamic_address) {
  in.in_in_update_0_write31_merged_banks_9.push(in_in_update_0_write31);
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
  // in_gauss_blur_1_rd0 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[-1 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write31 = in.in_in_update_0_write31_merged_banks_9.peek_134();
  return value_in_in_update_0_write31;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd1_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd1 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[-1 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write31 = in.in_in_update_0_write31_merged_banks_9.peek_68();
  return value_in_in_update_0_write31;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd10_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd10 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_67();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd100_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd100 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[10 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_9.peek_67();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd101_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd101 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[10 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_9.peek_1();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd102_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd102 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[11 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_9.peek_133();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd103_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd103 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[11 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_9.peek_67();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd104_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd104 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[11 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_9.peek_1();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd105_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd105 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[12 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_9.peek_133();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd106_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd106 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[12 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_9.peek_67();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd107_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd107 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[12 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_9.peek_1();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd108_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd108 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[11 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_9.peek_133();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd109_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd109 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[11 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_9.peek_67();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd11_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd11 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_1();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd110_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd110 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[11 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_9.peek_1();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd111_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd111 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[12 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_9.peek_133();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd112_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd112 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[12 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_9.peek_67();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd113_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd113 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[12 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_9.peek_1();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd114_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd114 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[13 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_9.peek_133();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd115_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd115 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[13 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_9.peek_67();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd116_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd116 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[13 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_9.peek_1();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd117_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd117 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[12 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_9.peek_133();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd118_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd118 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[12 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_9.peek_67();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd119_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd119 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[12 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_9.peek_1();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd12_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd12 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_133();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd120_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd120 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[13 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_9.peek_133();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd121_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd121 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[13 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_9.peek_67();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd122_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd122 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[13 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_9.peek_1();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd123_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd123 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[14 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_9.peek_133();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd124_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd124 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[14 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_9.peek_67();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd125_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd125 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[14 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_9.peek_1();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd126_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd126 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[13 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_9.peek_133();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd127_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd127 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[13 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_9.peek_67();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd128_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd128 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[13 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_9.peek_1();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd129_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd129 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[14 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_9.peek_133();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd13_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd13 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_67();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd130_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd130 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[14 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_9.peek_67();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd131_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd131 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[14 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_9.peek_1();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd132_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd132 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[15 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_9.peek_133();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd133_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd133 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[15 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_9.peek_67();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd134_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd134 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[15 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_9.peek_1();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd135_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd135 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[14 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_9.peek_133();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd136_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd136 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[14 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_9.peek_67();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd137_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd137 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[14 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_9.peek_1();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd138_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd138 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[15 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_9.peek_133();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd139_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd139 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[15 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_9.peek_67();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd14_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd14 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_1();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd140_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd140 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[15 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_9.peek_1();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd141_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd141 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[16 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write16 = in.in_in_update_0_write16_merged_banks_9.peek_133();
  return value_in_in_update_0_write16;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd142_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd142 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[16 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write16 = in.in_in_update_0_write16_merged_banks_9.peek_67();
  return value_in_in_update_0_write16;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd143_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd143 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[16 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write16 = in.in_in_update_0_write16_merged_banks_9.peek_1();
  return value_in_in_update_0_write16;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd144_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd144 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[15 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_9.peek_133();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd145_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd145 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[15 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_9.peek_67();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd146_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd146 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[15 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_9.peek_1();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd147_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd147 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[16 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write16 = in.in_in_update_0_write16_merged_banks_9.peek_133();
  return value_in_in_update_0_write16;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd148_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd148 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[16 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write16 = in.in_in_update_0_write16_merged_banks_9.peek_67();
  return value_in_in_update_0_write16;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd149_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd149 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[16 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write16 = in.in_in_update_0_write16_merged_banks_9.peek_1();
  return value_in_in_update_0_write16;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd15_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd15 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_133();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd150_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd150 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[17 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write17 = in.in_in_update_0_write17_merged_banks_9.peek_133();
  return value_in_in_update_0_write17;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd151_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd151 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[17 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write17 = in.in_in_update_0_write17_merged_banks_9.peek_67();
  return value_in_in_update_0_write17;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd152_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd152 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[17 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write17 = in.in_in_update_0_write17_merged_banks_9.peek_1();
  return value_in_in_update_0_write17;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd153_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd153 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[16 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write16 = in.in_in_update_0_write16_merged_banks_9.peek_133();
  return value_in_in_update_0_write16;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd154_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd154 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[16 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write16 = in.in_in_update_0_write16_merged_banks_9.peek_67();
  return value_in_in_update_0_write16;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd155_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd155 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[16 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write16 = in.in_in_update_0_write16_merged_banks_9.peek_1();
  return value_in_in_update_0_write16;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd156_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd156 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[17 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write17 = in.in_in_update_0_write17_merged_banks_9.peek_133();
  return value_in_in_update_0_write17;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd157_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd157 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[17 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write17 = in.in_in_update_0_write17_merged_banks_9.peek_67();
  return value_in_in_update_0_write17;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd158_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd158 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[17 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write17 = in.in_in_update_0_write17_merged_banks_9.peek_1();
  return value_in_in_update_0_write17;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd159_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd159 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[18 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write18 = in.in_in_update_0_write18_merged_banks_9.peek_133();
  return value_in_in_update_0_write18;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd16_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd16 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_67();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd160_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd160 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[18 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write18 = in.in_in_update_0_write18_merged_banks_9.peek_67();
  return value_in_in_update_0_write18;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd161_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd161 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[18 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write18 = in.in_in_update_0_write18_merged_banks_9.peek_1();
  return value_in_in_update_0_write18;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd162_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd162 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[17 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write17 = in.in_in_update_0_write17_merged_banks_9.peek_133();
  return value_in_in_update_0_write17;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd163_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd163 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[17 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write17 = in.in_in_update_0_write17_merged_banks_9.peek_67();
  return value_in_in_update_0_write17;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd164_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd164 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[17 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write17 = in.in_in_update_0_write17_merged_banks_9.peek_1();
  return value_in_in_update_0_write17;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd165_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd165 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[18 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write18 = in.in_in_update_0_write18_merged_banks_9.peek_133();
  return value_in_in_update_0_write18;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd166_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd166 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[18 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write18 = in.in_in_update_0_write18_merged_banks_9.peek_67();
  return value_in_in_update_0_write18;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd167_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd167 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[18 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write18 = in.in_in_update_0_write18_merged_banks_9.peek_1();
  return value_in_in_update_0_write18;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd168_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd168 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[19 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write19 = in.in_in_update_0_write19_merged_banks_9.peek_133();
  return value_in_in_update_0_write19;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd169_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd169 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[19 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write19 = in.in_in_update_0_write19_merged_banks_9.peek_67();
  return value_in_in_update_0_write19;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd17_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd17 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_1();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd170_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd170 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[19 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write19 = in.in_in_update_0_write19_merged_banks_9.peek_1();
  return value_in_in_update_0_write19;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd171_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd171 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[18 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write18 = in.in_in_update_0_write18_merged_banks_9.peek_133();
  return value_in_in_update_0_write18;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd172_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd172 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[18 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write18 = in.in_in_update_0_write18_merged_banks_9.peek_67();
  return value_in_in_update_0_write18;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd173_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd173 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[18 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write18 = in.in_in_update_0_write18_merged_banks_9.peek_1();
  return value_in_in_update_0_write18;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd174_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd174 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[19 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write19 = in.in_in_update_0_write19_merged_banks_9.peek_133();
  return value_in_in_update_0_write19;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd175_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd175 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[19 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write19 = in.in_in_update_0_write19_merged_banks_9.peek_67();
  return value_in_in_update_0_write19;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd176_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd176 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[19 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write19 = in.in_in_update_0_write19_merged_banks_9.peek_1();
  return value_in_in_update_0_write19;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd177_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd177 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[20 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write20 = in.in_in_update_0_write20_merged_banks_9.peek_133();
  return value_in_in_update_0_write20;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd178_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd178 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[20 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write20 = in.in_in_update_0_write20_merged_banks_9.peek_67();
  return value_in_in_update_0_write20;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd179_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd179 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[20 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write20 = in.in_in_update_0_write20_merged_banks_9.peek_1();
  return value_in_in_update_0_write20;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd18_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd18 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_133();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd180_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd180 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[19 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write19 = in.in_in_update_0_write19_merged_banks_9.peek_133();
  return value_in_in_update_0_write19;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd181_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd181 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[19 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write19 = in.in_in_update_0_write19_merged_banks_9.peek_67();
  return value_in_in_update_0_write19;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd182_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd182 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[19 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write19 = in.in_in_update_0_write19_merged_banks_9.peek_1();
  return value_in_in_update_0_write19;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd183_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd183 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[20 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write20 = in.in_in_update_0_write20_merged_banks_9.peek_133();
  return value_in_in_update_0_write20;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd184_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd184 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[20 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write20 = in.in_in_update_0_write20_merged_banks_9.peek_67();
  return value_in_in_update_0_write20;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd185_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd185 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[20 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write20 = in.in_in_update_0_write20_merged_banks_9.peek_1();
  return value_in_in_update_0_write20;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd186_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd186 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[21 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write21 = in.in_in_update_0_write21_merged_banks_9.peek_133();
  return value_in_in_update_0_write21;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd187_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd187 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[21 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write21 = in.in_in_update_0_write21_merged_banks_9.peek_67();
  return value_in_in_update_0_write21;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd188_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd188 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[21 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write21 = in.in_in_update_0_write21_merged_banks_9.peek_1();
  return value_in_in_update_0_write21;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd189_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd189 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[20 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write20 = in.in_in_update_0_write20_merged_banks_9.peek_133();
  return value_in_in_update_0_write20;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd19_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd19 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_67();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd190_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd190 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[20 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write20 = in.in_in_update_0_write20_merged_banks_9.peek_67();
  return value_in_in_update_0_write20;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd191_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd191 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[20 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write20 = in.in_in_update_0_write20_merged_banks_9.peek_1();
  return value_in_in_update_0_write20;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd192_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd192 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[21 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write21 = in.in_in_update_0_write21_merged_banks_9.peek_133();
  return value_in_in_update_0_write21;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd193_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd193 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[21 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write21 = in.in_in_update_0_write21_merged_banks_9.peek_67();
  return value_in_in_update_0_write21;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd194_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd194 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[21 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write21 = in.in_in_update_0_write21_merged_banks_9.peek_1();
  return value_in_in_update_0_write21;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd195_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd195 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[22 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write22 = in.in_in_update_0_write22_merged_banks_9.peek_133();
  return value_in_in_update_0_write22;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd196_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd196 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[22 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write22 = in.in_in_update_0_write22_merged_banks_9.peek_67();
  return value_in_in_update_0_write22;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd197_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd197 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[22 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write22 = in.in_in_update_0_write22_merged_banks_9.peek_1();
  return value_in_in_update_0_write22;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd198_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd198 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[21 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write21 = in.in_in_update_0_write21_merged_banks_9.peek_133();
  return value_in_in_update_0_write21;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd199_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd199 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[21 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write21 = in.in_in_update_0_write21_merged_banks_9.peek_67();
  return value_in_in_update_0_write21;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd2_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd2 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[-1 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write31 = in.in_in_update_0_write31_merged_banks_9.peek_2();
  return value_in_in_update_0_write31;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd20_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd20 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_1();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd200_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd200 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[21 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write21 = in.in_in_update_0_write21_merged_banks_9.peek_1();
  return value_in_in_update_0_write21;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd201_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd201 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[22 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write22 = in.in_in_update_0_write22_merged_banks_9.peek_133();
  return value_in_in_update_0_write22;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd202_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd202 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[22 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write22 = in.in_in_update_0_write22_merged_banks_9.peek_67();
  return value_in_in_update_0_write22;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd203_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd203 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[22 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write22 = in.in_in_update_0_write22_merged_banks_9.peek_1();
  return value_in_in_update_0_write22;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd204_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd204 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[23 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write23 = in.in_in_update_0_write23_merged_banks_9.peek_133();
  return value_in_in_update_0_write23;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd205_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd205 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[23 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write23 = in.in_in_update_0_write23_merged_banks_9.peek_67();
  return value_in_in_update_0_write23;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd206_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd206 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[23 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write23 = in.in_in_update_0_write23_merged_banks_9.peek_1();
  return value_in_in_update_0_write23;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd207_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd207 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[22 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write22 = in.in_in_update_0_write22_merged_banks_9.peek_133();
  return value_in_in_update_0_write22;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd208_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd208 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[22 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write22 = in.in_in_update_0_write22_merged_banks_9.peek_67();
  return value_in_in_update_0_write22;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd209_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd209 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[22 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write22 = in.in_in_update_0_write22_merged_banks_9.peek_1();
  return value_in_in_update_0_write22;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd21_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd21 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_133();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd210_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd210 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[23 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write23 = in.in_in_update_0_write23_merged_banks_9.peek_133();
  return value_in_in_update_0_write23;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd211_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd211 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[23 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write23 = in.in_in_update_0_write23_merged_banks_9.peek_67();
  return value_in_in_update_0_write23;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd212_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd212 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[23 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write23 = in.in_in_update_0_write23_merged_banks_9.peek_1();
  return value_in_in_update_0_write23;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd213_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd213 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[24 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write24 = in.in_in_update_0_write24_merged_banks_9.peek_133();
  return value_in_in_update_0_write24;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd214_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd214 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[24 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write24 = in.in_in_update_0_write24_merged_banks_9.peek_67();
  return value_in_in_update_0_write24;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd215_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd215 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[24 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write24 = in.in_in_update_0_write24_merged_banks_9.peek_1();
  return value_in_in_update_0_write24;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd216_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd216 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[23 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write23 = in.in_in_update_0_write23_merged_banks_9.peek_133();
  return value_in_in_update_0_write23;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd217_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd217 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[23 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write23 = in.in_in_update_0_write23_merged_banks_9.peek_67();
  return value_in_in_update_0_write23;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd218_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd218 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[23 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write23 = in.in_in_update_0_write23_merged_banks_9.peek_1();
  return value_in_in_update_0_write23;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd219_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd219 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[24 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write24 = in.in_in_update_0_write24_merged_banks_9.peek_133();
  return value_in_in_update_0_write24;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd22_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd22 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_67();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd220_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd220 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[24 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write24 = in.in_in_update_0_write24_merged_banks_9.peek_67();
  return value_in_in_update_0_write24;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd221_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd221 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[24 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write24 = in.in_in_update_0_write24_merged_banks_9.peek_1();
  return value_in_in_update_0_write24;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd222_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd222 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[25 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write25 = in.in_in_update_0_write25_merged_banks_9.peek_133();
  return value_in_in_update_0_write25;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd223_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd223 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[25 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write25 = in.in_in_update_0_write25_merged_banks_9.peek_67();
  return value_in_in_update_0_write25;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd224_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd224 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[25 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write25 = in.in_in_update_0_write25_merged_banks_9.peek_1();
  return value_in_in_update_0_write25;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd225_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd225 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[24 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write24 = in.in_in_update_0_write24_merged_banks_9.peek_133();
  return value_in_in_update_0_write24;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd226_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd226 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[24 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write24 = in.in_in_update_0_write24_merged_banks_9.peek_67();
  return value_in_in_update_0_write24;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd227_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd227 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[24 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write24 = in.in_in_update_0_write24_merged_banks_9.peek_1();
  return value_in_in_update_0_write24;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd228_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd228 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[25 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write25 = in.in_in_update_0_write25_merged_banks_9.peek_133();
  return value_in_in_update_0_write25;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd229_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd229 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[25 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write25 = in.in_in_update_0_write25_merged_banks_9.peek_67();
  return value_in_in_update_0_write25;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd23_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd23 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_1();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd230_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd230 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[25 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write25 = in.in_in_update_0_write25_merged_banks_9.peek_1();
  return value_in_in_update_0_write25;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd231_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd231 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[26 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write26 = in.in_in_update_0_write26_merged_banks_9.peek_133();
  return value_in_in_update_0_write26;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd232_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd232 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[26 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write26 = in.in_in_update_0_write26_merged_banks_9.peek_67();
  return value_in_in_update_0_write26;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd233_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd233 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[26 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write26 = in.in_in_update_0_write26_merged_banks_9.peek_1();
  return value_in_in_update_0_write26;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd234_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd234 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[25 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write25 = in.in_in_update_0_write25_merged_banks_9.peek_133();
  return value_in_in_update_0_write25;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd235_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd235 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[25 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write25 = in.in_in_update_0_write25_merged_banks_9.peek_67();
  return value_in_in_update_0_write25;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd236_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd236 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[25 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write25 = in.in_in_update_0_write25_merged_banks_9.peek_1();
  return value_in_in_update_0_write25;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd237_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd237 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[26 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write26 = in.in_in_update_0_write26_merged_banks_9.peek_133();
  return value_in_in_update_0_write26;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd238_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd238 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[26 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write26 = in.in_in_update_0_write26_merged_banks_9.peek_67();
  return value_in_in_update_0_write26;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd239_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd239 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[26 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write26 = in.in_in_update_0_write26_merged_banks_9.peek_1();
  return value_in_in_update_0_write26;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd24_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd24 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_133();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd240_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd240 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[27 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write27 = in.in_in_update_0_write27_merged_banks_9.peek_133();
  return value_in_in_update_0_write27;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd241_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd241 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[27 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write27 = in.in_in_update_0_write27_merged_banks_9.peek_67();
  return value_in_in_update_0_write27;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd242_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd242 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[27 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write27 = in.in_in_update_0_write27_merged_banks_9.peek_1();
  return value_in_in_update_0_write27;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd243_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd243 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[26 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write26 = in.in_in_update_0_write26_merged_banks_9.peek_133();
  return value_in_in_update_0_write26;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd244_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd244 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[26 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write26 = in.in_in_update_0_write26_merged_banks_9.peek_67();
  return value_in_in_update_0_write26;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd245_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd245 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[26 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write26 = in.in_in_update_0_write26_merged_banks_9.peek_1();
  return value_in_in_update_0_write26;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd246_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd246 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[27 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write27 = in.in_in_update_0_write27_merged_banks_9.peek_133();
  return value_in_in_update_0_write27;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd247_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd247 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[27 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write27 = in.in_in_update_0_write27_merged_banks_9.peek_67();
  return value_in_in_update_0_write27;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd248_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd248 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[27 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write27 = in.in_in_update_0_write27_merged_banks_9.peek_1();
  return value_in_in_update_0_write27;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd249_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd249 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[28 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write28 = in.in_in_update_0_write28_merged_banks_9.peek_133();
  return value_in_in_update_0_write28;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd25_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd25 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_67();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd250_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd250 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[28 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write28 = in.in_in_update_0_write28_merged_banks_9.peek_67();
  return value_in_in_update_0_write28;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd251_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd251 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[28 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write28 = in.in_in_update_0_write28_merged_banks_9.peek_1();
  return value_in_in_update_0_write28;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd252_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd252 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[27 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write27 = in.in_in_update_0_write27_merged_banks_9.peek_133();
  return value_in_in_update_0_write27;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd253_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd253 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[27 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write27 = in.in_in_update_0_write27_merged_banks_9.peek_67();
  return value_in_in_update_0_write27;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd254_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd254 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[27 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write27 = in.in_in_update_0_write27_merged_banks_9.peek_1();
  return value_in_in_update_0_write27;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd255_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd255 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[28 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write28 = in.in_in_update_0_write28_merged_banks_9.peek_133();
  return value_in_in_update_0_write28;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd256_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd256 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[28 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write28 = in.in_in_update_0_write28_merged_banks_9.peek_67();
  return value_in_in_update_0_write28;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd257_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd257 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[28 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write28 = in.in_in_update_0_write28_merged_banks_9.peek_1();
  return value_in_in_update_0_write28;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd258_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd258 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[29 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write29 = in.in_in_update_0_write29_merged_banks_9.peek_133();
  return value_in_in_update_0_write29;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd259_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd259 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[29 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write29 = in.in_in_update_0_write29_merged_banks_9.peek_67();
  return value_in_in_update_0_write29;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd26_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd26 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_1();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd260_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd260 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[29 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write29 = in.in_in_update_0_write29_merged_banks_9.peek_1();
  return value_in_in_update_0_write29;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd261_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd261 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[28 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write28 = in.in_in_update_0_write28_merged_banks_9.peek_133();
  return value_in_in_update_0_write28;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd262_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd262 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[28 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write28 = in.in_in_update_0_write28_merged_banks_9.peek_67();
  return value_in_in_update_0_write28;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd263_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd263 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[28 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write28 = in.in_in_update_0_write28_merged_banks_9.peek_1();
  return value_in_in_update_0_write28;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd264_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd264 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[29 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write29 = in.in_in_update_0_write29_merged_banks_9.peek_133();
  return value_in_in_update_0_write29;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd265_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd265 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[29 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write29 = in.in_in_update_0_write29_merged_banks_9.peek_67();
  return value_in_in_update_0_write29;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd266_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd266 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[29 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write29 = in.in_in_update_0_write29_merged_banks_9.peek_1();
  return value_in_in_update_0_write29;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd267_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd267 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[30 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write30 = in.in_in_update_0_write30_merged_banks_9.peek_133();
  return value_in_in_update_0_write30;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd268_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd268 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[30 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write30 = in.in_in_update_0_write30_merged_banks_9.peek_67();
  return value_in_in_update_0_write30;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd269_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd269 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[30 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write30 = in.in_in_update_0_write30_merged_banks_9.peek_1();
  return value_in_in_update_0_write30;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd27_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd27 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_133();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd270_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd270 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[29 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write29 = in.in_in_update_0_write29_merged_banks_9.peek_133();
  return value_in_in_update_0_write29;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd271_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd271 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[29 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write29 = in.in_in_update_0_write29_merged_banks_9.peek_67();
  return value_in_in_update_0_write29;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd272_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd272 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[29 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write29 = in.in_in_update_0_write29_merged_banks_9.peek_1();
  return value_in_in_update_0_write29;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd273_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd273 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[30 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write30 = in.in_in_update_0_write30_merged_banks_9.peek_133();
  return value_in_in_update_0_write30;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd274_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd274 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[30 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write30 = in.in_in_update_0_write30_merged_banks_9.peek_67();
  return value_in_in_update_0_write30;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd275_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd275 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[30 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write30 = in.in_in_update_0_write30_merged_banks_9.peek_1();
  return value_in_in_update_0_write30;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd276_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd276 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[31 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write31 = in.in_in_update_0_write31_merged_banks_9.peek_133();
  return value_in_in_update_0_write31;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd277_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd277 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[31 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write31 = in.in_in_update_0_write31_merged_banks_9.peek_67();
  return value_in_in_update_0_write31;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd278_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd278 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[31 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write31 = in.in_in_update_0_write31_merged_banks_9.peek_1();
  return value_in_in_update_0_write31;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd279_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd279 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[30 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write30 = in.in_in_update_0_write30_merged_banks_9.peek_133();
  return value_in_in_update_0_write30;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd28_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd28 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_67();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd280_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd280 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[30 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write30 = in.in_in_update_0_write30_merged_banks_9.peek_67();
  return value_in_in_update_0_write30;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd281_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd281 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[30 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write30 = in.in_in_update_0_write30_merged_banks_9.peek_1();
  return value_in_in_update_0_write30;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd282_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd282 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[31 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write31 = in.in_in_update_0_write31_merged_banks_9.peek_133();
  return value_in_in_update_0_write31;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd283_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd283 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[31 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write31 = in.in_in_update_0_write31_merged_banks_9.peek_67();
  return value_in_in_update_0_write31;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd284_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd284 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[31 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write31 = in.in_in_update_0_write31_merged_banks_9.peek_1();
  return value_in_in_update_0_write31;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd285_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd285 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[32 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_132();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd286_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd286 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[32 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_66();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd287_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd287 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[32 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_0();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd29_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd29 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[2 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_9.peek_1();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd3_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd3 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_133();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd30_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd30 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_133();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd31_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd31 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_67();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd32_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd32 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_1();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd33_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd33 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_133();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd34_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd34 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_67();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd35_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd35 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_1();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd36_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd36 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_133();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd37_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd37 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_67();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd38_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd38 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[3 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_9.peek_1();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd39_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd39 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_133();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd4_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd4 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_67();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd40_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd40 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_67();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd41_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd41 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_1();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd42_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd42 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_133();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd43_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd43 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_67();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd44_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd44 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_1();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd45_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd45 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_133();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd46_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd46 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_67();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd47_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd47 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[4 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_9.peek_1();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd48_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd48 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_133();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd49_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd49 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_67();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd5_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd5 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_1();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd50_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd50 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_1();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd51_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd51 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_133();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd52_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd52 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_67();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd53_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd53 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_1();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd54_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd54 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_133();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd55_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd55 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_67();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd56_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd56 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[5 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_9.peek_1();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd57_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd57 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_133();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd58_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd58 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_67();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd59_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd59 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_1();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd6_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd6 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_133();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd60_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd60 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_133();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd61_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd61 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_67();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd62_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd62 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_1();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd63_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd63 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_133();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd64_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd64 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_67();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd65_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd65 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[6 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_9.peek_1();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd66_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd66 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_133();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd67_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd67 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_67();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd68_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd68 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_1();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd69_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd69 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_9.peek_133();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd7_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd7 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_67();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd70_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd70 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_9.peek_67();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd71_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd71 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_9.peek_1();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd72_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd72 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_133();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd73_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd73 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_67();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd74_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd74 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[7 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_9.peek_1();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd75_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd75 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_9.peek_133();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd76_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd76 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_9.peek_67();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd77_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd77 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_9.peek_1();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd78_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd78 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[9 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_9.peek_133();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd79_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd79 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[9 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_9.peek_67();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd8_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd8 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[1 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_9.peek_1();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd80_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd80 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[9 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_9.peek_1();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd81_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd81 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_9.peek_133();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd82_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd82 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_9.peek_67();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd83_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd83 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[8 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_9.peek_1();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd84_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd84 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[9 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_9.peek_133();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd85_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd85 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[9 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_9.peek_67();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd86_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd86 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[9 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_9.peek_1();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd87_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd87 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[10 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_9.peek_133();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd88_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd88 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[10 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_9.peek_67();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd89_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd89 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[10 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_9.peek_1();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd9_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd9 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_9.peek_133();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd90_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd90 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[9 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_9.peek_133();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd91_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd91 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[9 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_9.peek_67();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd92_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd92 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[9 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_9.peek_1();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd93_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd93 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[10 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_9.peek_133();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd94_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd94 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[10 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_9.peek_67();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd95_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd95 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[10 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_9.peek_1();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd96_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd96 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[11 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_9.peek_133();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd97_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd97 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[11 + 32d0, d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_9.peek_67();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd98_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd98 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[11 + 32d0, 1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_9.peek_1();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_1_rd99_select(in_cache& in, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_1_rd99 read pattern: { in_gauss_blur_1_update_0[d0, d1] -> in[10 + 32d0, -1 + d1] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Read schedule : { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  // Write schedule: { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_9.peek_133();
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
//	in_gauss_blur_1_rd144
//	in_gauss_blur_1_rd145
//	in_gauss_blur_1_rd146
//	in_gauss_blur_1_rd147
//	in_gauss_blur_1_rd148
//	in_gauss_blur_1_rd149
//	in_gauss_blur_1_rd150
//	in_gauss_blur_1_rd151
//	in_gauss_blur_1_rd152
//	in_gauss_blur_1_rd153
//	in_gauss_blur_1_rd154
//	in_gauss_blur_1_rd155
//	in_gauss_blur_1_rd156
//	in_gauss_blur_1_rd157
//	in_gauss_blur_1_rd158
//	in_gauss_blur_1_rd159
//	in_gauss_blur_1_rd160
//	in_gauss_blur_1_rd161
//	in_gauss_blur_1_rd162
//	in_gauss_blur_1_rd163
//	in_gauss_blur_1_rd164
//	in_gauss_blur_1_rd165
//	in_gauss_blur_1_rd166
//	in_gauss_blur_1_rd167
//	in_gauss_blur_1_rd168
//	in_gauss_blur_1_rd169
//	in_gauss_blur_1_rd170
//	in_gauss_blur_1_rd171
//	in_gauss_blur_1_rd172
//	in_gauss_blur_1_rd173
//	in_gauss_blur_1_rd174
//	in_gauss_blur_1_rd175
//	in_gauss_blur_1_rd176
//	in_gauss_blur_1_rd177
//	in_gauss_blur_1_rd178
//	in_gauss_blur_1_rd179
//	in_gauss_blur_1_rd180
//	in_gauss_blur_1_rd181
//	in_gauss_blur_1_rd182
//	in_gauss_blur_1_rd183
//	in_gauss_blur_1_rd184
//	in_gauss_blur_1_rd185
//	in_gauss_blur_1_rd186
//	in_gauss_blur_1_rd187
//	in_gauss_blur_1_rd188
//	in_gauss_blur_1_rd189
//	in_gauss_blur_1_rd190
//	in_gauss_blur_1_rd191
//	in_gauss_blur_1_rd192
//	in_gauss_blur_1_rd193
//	in_gauss_blur_1_rd194
//	in_gauss_blur_1_rd195
//	in_gauss_blur_1_rd196
//	in_gauss_blur_1_rd197
//	in_gauss_blur_1_rd198
//	in_gauss_blur_1_rd199
//	in_gauss_blur_1_rd200
//	in_gauss_blur_1_rd201
//	in_gauss_blur_1_rd202
//	in_gauss_blur_1_rd203
//	in_gauss_blur_1_rd204
//	in_gauss_blur_1_rd205
//	in_gauss_blur_1_rd206
//	in_gauss_blur_1_rd207
//	in_gauss_blur_1_rd208
//	in_gauss_blur_1_rd209
//	in_gauss_blur_1_rd210
//	in_gauss_blur_1_rd211
//	in_gauss_blur_1_rd212
//	in_gauss_blur_1_rd213
//	in_gauss_blur_1_rd214
//	in_gauss_blur_1_rd215
//	in_gauss_blur_1_rd216
//	in_gauss_blur_1_rd217
//	in_gauss_blur_1_rd218
//	in_gauss_blur_1_rd219
//	in_gauss_blur_1_rd220
//	in_gauss_blur_1_rd221
//	in_gauss_blur_1_rd222
//	in_gauss_blur_1_rd223
//	in_gauss_blur_1_rd224
//	in_gauss_blur_1_rd225
//	in_gauss_blur_1_rd226
//	in_gauss_blur_1_rd227
//	in_gauss_blur_1_rd228
//	in_gauss_blur_1_rd229
//	in_gauss_blur_1_rd230
//	in_gauss_blur_1_rd231
//	in_gauss_blur_1_rd232
//	in_gauss_blur_1_rd233
//	in_gauss_blur_1_rd234
//	in_gauss_blur_1_rd235
//	in_gauss_blur_1_rd236
//	in_gauss_blur_1_rd237
//	in_gauss_blur_1_rd238
//	in_gauss_blur_1_rd239
//	in_gauss_blur_1_rd240
//	in_gauss_blur_1_rd241
//	in_gauss_blur_1_rd242
//	in_gauss_blur_1_rd243
//	in_gauss_blur_1_rd244
//	in_gauss_blur_1_rd245
//	in_gauss_blur_1_rd246
//	in_gauss_blur_1_rd247
//	in_gauss_blur_1_rd248
//	in_gauss_blur_1_rd249
//	in_gauss_blur_1_rd250
//	in_gauss_blur_1_rd251
//	in_gauss_blur_1_rd252
//	in_gauss_blur_1_rd253
//	in_gauss_blur_1_rd254
//	in_gauss_blur_1_rd255
//	in_gauss_blur_1_rd256
//	in_gauss_blur_1_rd257
//	in_gauss_blur_1_rd258
//	in_gauss_blur_1_rd259
//	in_gauss_blur_1_rd260
//	in_gauss_blur_1_rd261
//	in_gauss_blur_1_rd262
//	in_gauss_blur_1_rd263
//	in_gauss_blur_1_rd264
//	in_gauss_blur_1_rd265
//	in_gauss_blur_1_rd266
//	in_gauss_blur_1_rd267
//	in_gauss_blur_1_rd268
//	in_gauss_blur_1_rd269
//	in_gauss_blur_1_rd270
//	in_gauss_blur_1_rd271
//	in_gauss_blur_1_rd272
//	in_gauss_blur_1_rd273
//	in_gauss_blur_1_rd274
//	in_gauss_blur_1_rd275
//	in_gauss_blur_1_rd276
//	in_gauss_blur_1_rd277
//	in_gauss_blur_1_rd278
//	in_gauss_blur_1_rd279
//	in_gauss_blur_1_rd280
//	in_gauss_blur_1_rd281
//	in_gauss_blur_1_rd282
//	in_gauss_blur_1_rd283
//	in_gauss_blur_1_rd284
//	in_gauss_blur_1_rd285
//	in_gauss_blur_1_rd286
//	in_gauss_blur_1_rd287
inline hw_uint<4608> in_in_gauss_blur_1_update_0_read_bundle_read(in_cache& in, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 288
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
    // in_gauss_blur_1_rd144
    // in_gauss_blur_1_rd145
    // in_gauss_blur_1_rd146
    // in_gauss_blur_1_rd147
    // in_gauss_blur_1_rd148
    // in_gauss_blur_1_rd149
    // in_gauss_blur_1_rd150
    // in_gauss_blur_1_rd151
    // in_gauss_blur_1_rd152
    // in_gauss_blur_1_rd153
    // in_gauss_blur_1_rd154
    // in_gauss_blur_1_rd155
    // in_gauss_blur_1_rd156
    // in_gauss_blur_1_rd157
    // in_gauss_blur_1_rd158
    // in_gauss_blur_1_rd159
    // in_gauss_blur_1_rd160
    // in_gauss_blur_1_rd161
    // in_gauss_blur_1_rd162
    // in_gauss_blur_1_rd163
    // in_gauss_blur_1_rd164
    // in_gauss_blur_1_rd165
    // in_gauss_blur_1_rd166
    // in_gauss_blur_1_rd167
    // in_gauss_blur_1_rd168
    // in_gauss_blur_1_rd169
    // in_gauss_blur_1_rd170
    // in_gauss_blur_1_rd171
    // in_gauss_blur_1_rd172
    // in_gauss_blur_1_rd173
    // in_gauss_blur_1_rd174
    // in_gauss_blur_1_rd175
    // in_gauss_blur_1_rd176
    // in_gauss_blur_1_rd177
    // in_gauss_blur_1_rd178
    // in_gauss_blur_1_rd179
    // in_gauss_blur_1_rd180
    // in_gauss_blur_1_rd181
    // in_gauss_blur_1_rd182
    // in_gauss_blur_1_rd183
    // in_gauss_blur_1_rd184
    // in_gauss_blur_1_rd185
    // in_gauss_blur_1_rd186
    // in_gauss_blur_1_rd187
    // in_gauss_blur_1_rd188
    // in_gauss_blur_1_rd189
    // in_gauss_blur_1_rd190
    // in_gauss_blur_1_rd191
    // in_gauss_blur_1_rd192
    // in_gauss_blur_1_rd193
    // in_gauss_blur_1_rd194
    // in_gauss_blur_1_rd195
    // in_gauss_blur_1_rd196
    // in_gauss_blur_1_rd197
    // in_gauss_blur_1_rd198
    // in_gauss_blur_1_rd199
    // in_gauss_blur_1_rd200
    // in_gauss_blur_1_rd201
    // in_gauss_blur_1_rd202
    // in_gauss_blur_1_rd203
    // in_gauss_blur_1_rd204
    // in_gauss_blur_1_rd205
    // in_gauss_blur_1_rd206
    // in_gauss_blur_1_rd207
    // in_gauss_blur_1_rd208
    // in_gauss_blur_1_rd209
    // in_gauss_blur_1_rd210
    // in_gauss_blur_1_rd211
    // in_gauss_blur_1_rd212
    // in_gauss_blur_1_rd213
    // in_gauss_blur_1_rd214
    // in_gauss_blur_1_rd215
    // in_gauss_blur_1_rd216
    // in_gauss_blur_1_rd217
    // in_gauss_blur_1_rd218
    // in_gauss_blur_1_rd219
    // in_gauss_blur_1_rd220
    // in_gauss_blur_1_rd221
    // in_gauss_blur_1_rd222
    // in_gauss_blur_1_rd223
    // in_gauss_blur_1_rd224
    // in_gauss_blur_1_rd225
    // in_gauss_blur_1_rd226
    // in_gauss_blur_1_rd227
    // in_gauss_blur_1_rd228
    // in_gauss_blur_1_rd229
    // in_gauss_blur_1_rd230
    // in_gauss_blur_1_rd231
    // in_gauss_blur_1_rd232
    // in_gauss_blur_1_rd233
    // in_gauss_blur_1_rd234
    // in_gauss_blur_1_rd235
    // in_gauss_blur_1_rd236
    // in_gauss_blur_1_rd237
    // in_gauss_blur_1_rd238
    // in_gauss_blur_1_rd239
    // in_gauss_blur_1_rd240
    // in_gauss_blur_1_rd241
    // in_gauss_blur_1_rd242
    // in_gauss_blur_1_rd243
    // in_gauss_blur_1_rd244
    // in_gauss_blur_1_rd245
    // in_gauss_blur_1_rd246
    // in_gauss_blur_1_rd247
    // in_gauss_blur_1_rd248
    // in_gauss_blur_1_rd249
    // in_gauss_blur_1_rd250
    // in_gauss_blur_1_rd251
    // in_gauss_blur_1_rd252
    // in_gauss_blur_1_rd253
    // in_gauss_blur_1_rd254
    // in_gauss_blur_1_rd255
    // in_gauss_blur_1_rd256
    // in_gauss_blur_1_rd257
    // in_gauss_blur_1_rd258
    // in_gauss_blur_1_rd259
    // in_gauss_blur_1_rd260
    // in_gauss_blur_1_rd261
    // in_gauss_blur_1_rd262
    // in_gauss_blur_1_rd263
    // in_gauss_blur_1_rd264
    // in_gauss_blur_1_rd265
    // in_gauss_blur_1_rd266
    // in_gauss_blur_1_rd267
    // in_gauss_blur_1_rd268
    // in_gauss_blur_1_rd269
    // in_gauss_blur_1_rd270
    // in_gauss_blur_1_rd271
    // in_gauss_blur_1_rd272
    // in_gauss_blur_1_rd273
    // in_gauss_blur_1_rd274
    // in_gauss_blur_1_rd275
    // in_gauss_blur_1_rd276
    // in_gauss_blur_1_rd277
    // in_gauss_blur_1_rd278
    // in_gauss_blur_1_rd279
    // in_gauss_blur_1_rd280
    // in_gauss_blur_1_rd281
    // in_gauss_blur_1_rd282
    // in_gauss_blur_1_rd283
    // in_gauss_blur_1_rd284
    // in_gauss_blur_1_rd285
    // in_gauss_blur_1_rd286
    // in_gauss_blur_1_rd287

	hw_uint<4608> result;
	hw_uint<16> in_gauss_blur_1_rd0_res = in_gauss_blur_1_rd0_select(in, d0, d1, dynamic_address);
	set_at<0, 4608>(result, in_gauss_blur_1_rd0_res);
	hw_uint<16> in_gauss_blur_1_rd1_res = in_gauss_blur_1_rd1_select(in, d0, d1, dynamic_address);
	set_at<16, 4608>(result, in_gauss_blur_1_rd1_res);
	hw_uint<16> in_gauss_blur_1_rd2_res = in_gauss_blur_1_rd2_select(in, d0, d1, dynamic_address);
	set_at<32, 4608>(result, in_gauss_blur_1_rd2_res);
	hw_uint<16> in_gauss_blur_1_rd3_res = in_gauss_blur_1_rd3_select(in, d0, d1, dynamic_address);
	set_at<48, 4608>(result, in_gauss_blur_1_rd3_res);
	hw_uint<16> in_gauss_blur_1_rd4_res = in_gauss_blur_1_rd4_select(in, d0, d1, dynamic_address);
	set_at<64, 4608>(result, in_gauss_blur_1_rd4_res);
	hw_uint<16> in_gauss_blur_1_rd5_res = in_gauss_blur_1_rd5_select(in, d0, d1, dynamic_address);
	set_at<80, 4608>(result, in_gauss_blur_1_rd5_res);
	hw_uint<16> in_gauss_blur_1_rd6_res = in_gauss_blur_1_rd6_select(in, d0, d1, dynamic_address);
	set_at<96, 4608>(result, in_gauss_blur_1_rd6_res);
	hw_uint<16> in_gauss_blur_1_rd7_res = in_gauss_blur_1_rd7_select(in, d0, d1, dynamic_address);
	set_at<112, 4608>(result, in_gauss_blur_1_rd7_res);
	hw_uint<16> in_gauss_blur_1_rd8_res = in_gauss_blur_1_rd8_select(in, d0, d1, dynamic_address);
	set_at<128, 4608>(result, in_gauss_blur_1_rd8_res);
	hw_uint<16> in_gauss_blur_1_rd9_res = in_gauss_blur_1_rd9_select(in, d0, d1, dynamic_address);
	set_at<144, 4608>(result, in_gauss_blur_1_rd9_res);
	hw_uint<16> in_gauss_blur_1_rd10_res = in_gauss_blur_1_rd10_select(in, d0, d1, dynamic_address);
	set_at<160, 4608>(result, in_gauss_blur_1_rd10_res);
	hw_uint<16> in_gauss_blur_1_rd11_res = in_gauss_blur_1_rd11_select(in, d0, d1, dynamic_address);
	set_at<176, 4608>(result, in_gauss_blur_1_rd11_res);
	hw_uint<16> in_gauss_blur_1_rd12_res = in_gauss_blur_1_rd12_select(in, d0, d1, dynamic_address);
	set_at<192, 4608>(result, in_gauss_blur_1_rd12_res);
	hw_uint<16> in_gauss_blur_1_rd13_res = in_gauss_blur_1_rd13_select(in, d0, d1, dynamic_address);
	set_at<208, 4608>(result, in_gauss_blur_1_rd13_res);
	hw_uint<16> in_gauss_blur_1_rd14_res = in_gauss_blur_1_rd14_select(in, d0, d1, dynamic_address);
	set_at<224, 4608>(result, in_gauss_blur_1_rd14_res);
	hw_uint<16> in_gauss_blur_1_rd15_res = in_gauss_blur_1_rd15_select(in, d0, d1, dynamic_address);
	set_at<240, 4608>(result, in_gauss_blur_1_rd15_res);
	hw_uint<16> in_gauss_blur_1_rd16_res = in_gauss_blur_1_rd16_select(in, d0, d1, dynamic_address);
	set_at<256, 4608>(result, in_gauss_blur_1_rd16_res);
	hw_uint<16> in_gauss_blur_1_rd17_res = in_gauss_blur_1_rd17_select(in, d0, d1, dynamic_address);
	set_at<272, 4608>(result, in_gauss_blur_1_rd17_res);
	hw_uint<16> in_gauss_blur_1_rd18_res = in_gauss_blur_1_rd18_select(in, d0, d1, dynamic_address);
	set_at<288, 4608>(result, in_gauss_blur_1_rd18_res);
	hw_uint<16> in_gauss_blur_1_rd19_res = in_gauss_blur_1_rd19_select(in, d0, d1, dynamic_address);
	set_at<304, 4608>(result, in_gauss_blur_1_rd19_res);
	hw_uint<16> in_gauss_blur_1_rd20_res = in_gauss_blur_1_rd20_select(in, d0, d1, dynamic_address);
	set_at<320, 4608>(result, in_gauss_blur_1_rd20_res);
	hw_uint<16> in_gauss_blur_1_rd21_res = in_gauss_blur_1_rd21_select(in, d0, d1, dynamic_address);
	set_at<336, 4608>(result, in_gauss_blur_1_rd21_res);
	hw_uint<16> in_gauss_blur_1_rd22_res = in_gauss_blur_1_rd22_select(in, d0, d1, dynamic_address);
	set_at<352, 4608>(result, in_gauss_blur_1_rd22_res);
	hw_uint<16> in_gauss_blur_1_rd23_res = in_gauss_blur_1_rd23_select(in, d0, d1, dynamic_address);
	set_at<368, 4608>(result, in_gauss_blur_1_rd23_res);
	hw_uint<16> in_gauss_blur_1_rd24_res = in_gauss_blur_1_rd24_select(in, d0, d1, dynamic_address);
	set_at<384, 4608>(result, in_gauss_blur_1_rd24_res);
	hw_uint<16> in_gauss_blur_1_rd25_res = in_gauss_blur_1_rd25_select(in, d0, d1, dynamic_address);
	set_at<400, 4608>(result, in_gauss_blur_1_rd25_res);
	hw_uint<16> in_gauss_blur_1_rd26_res = in_gauss_blur_1_rd26_select(in, d0, d1, dynamic_address);
	set_at<416, 4608>(result, in_gauss_blur_1_rd26_res);
	hw_uint<16> in_gauss_blur_1_rd27_res = in_gauss_blur_1_rd27_select(in, d0, d1, dynamic_address);
	set_at<432, 4608>(result, in_gauss_blur_1_rd27_res);
	hw_uint<16> in_gauss_blur_1_rd28_res = in_gauss_blur_1_rd28_select(in, d0, d1, dynamic_address);
	set_at<448, 4608>(result, in_gauss_blur_1_rd28_res);
	hw_uint<16> in_gauss_blur_1_rd29_res = in_gauss_blur_1_rd29_select(in, d0, d1, dynamic_address);
	set_at<464, 4608>(result, in_gauss_blur_1_rd29_res);
	hw_uint<16> in_gauss_blur_1_rd30_res = in_gauss_blur_1_rd30_select(in, d0, d1, dynamic_address);
	set_at<480, 4608>(result, in_gauss_blur_1_rd30_res);
	hw_uint<16> in_gauss_blur_1_rd31_res = in_gauss_blur_1_rd31_select(in, d0, d1, dynamic_address);
	set_at<496, 4608>(result, in_gauss_blur_1_rd31_res);
	hw_uint<16> in_gauss_blur_1_rd32_res = in_gauss_blur_1_rd32_select(in, d0, d1, dynamic_address);
	set_at<512, 4608>(result, in_gauss_blur_1_rd32_res);
	hw_uint<16> in_gauss_blur_1_rd33_res = in_gauss_blur_1_rd33_select(in, d0, d1, dynamic_address);
	set_at<528, 4608>(result, in_gauss_blur_1_rd33_res);
	hw_uint<16> in_gauss_blur_1_rd34_res = in_gauss_blur_1_rd34_select(in, d0, d1, dynamic_address);
	set_at<544, 4608>(result, in_gauss_blur_1_rd34_res);
	hw_uint<16> in_gauss_blur_1_rd35_res = in_gauss_blur_1_rd35_select(in, d0, d1, dynamic_address);
	set_at<560, 4608>(result, in_gauss_blur_1_rd35_res);
	hw_uint<16> in_gauss_blur_1_rd36_res = in_gauss_blur_1_rd36_select(in, d0, d1, dynamic_address);
	set_at<576, 4608>(result, in_gauss_blur_1_rd36_res);
	hw_uint<16> in_gauss_blur_1_rd37_res = in_gauss_blur_1_rd37_select(in, d0, d1, dynamic_address);
	set_at<592, 4608>(result, in_gauss_blur_1_rd37_res);
	hw_uint<16> in_gauss_blur_1_rd38_res = in_gauss_blur_1_rd38_select(in, d0, d1, dynamic_address);
	set_at<608, 4608>(result, in_gauss_blur_1_rd38_res);
	hw_uint<16> in_gauss_blur_1_rd39_res = in_gauss_blur_1_rd39_select(in, d0, d1, dynamic_address);
	set_at<624, 4608>(result, in_gauss_blur_1_rd39_res);
	hw_uint<16> in_gauss_blur_1_rd40_res = in_gauss_blur_1_rd40_select(in, d0, d1, dynamic_address);
	set_at<640, 4608>(result, in_gauss_blur_1_rd40_res);
	hw_uint<16> in_gauss_blur_1_rd41_res = in_gauss_blur_1_rd41_select(in, d0, d1, dynamic_address);
	set_at<656, 4608>(result, in_gauss_blur_1_rd41_res);
	hw_uint<16> in_gauss_blur_1_rd42_res = in_gauss_blur_1_rd42_select(in, d0, d1, dynamic_address);
	set_at<672, 4608>(result, in_gauss_blur_1_rd42_res);
	hw_uint<16> in_gauss_blur_1_rd43_res = in_gauss_blur_1_rd43_select(in, d0, d1, dynamic_address);
	set_at<688, 4608>(result, in_gauss_blur_1_rd43_res);
	hw_uint<16> in_gauss_blur_1_rd44_res = in_gauss_blur_1_rd44_select(in, d0, d1, dynamic_address);
	set_at<704, 4608>(result, in_gauss_blur_1_rd44_res);
	hw_uint<16> in_gauss_blur_1_rd45_res = in_gauss_blur_1_rd45_select(in, d0, d1, dynamic_address);
	set_at<720, 4608>(result, in_gauss_blur_1_rd45_res);
	hw_uint<16> in_gauss_blur_1_rd46_res = in_gauss_blur_1_rd46_select(in, d0, d1, dynamic_address);
	set_at<736, 4608>(result, in_gauss_blur_1_rd46_res);
	hw_uint<16> in_gauss_blur_1_rd47_res = in_gauss_blur_1_rd47_select(in, d0, d1, dynamic_address);
	set_at<752, 4608>(result, in_gauss_blur_1_rd47_res);
	hw_uint<16> in_gauss_blur_1_rd48_res = in_gauss_blur_1_rd48_select(in, d0, d1, dynamic_address);
	set_at<768, 4608>(result, in_gauss_blur_1_rd48_res);
	hw_uint<16> in_gauss_blur_1_rd49_res = in_gauss_blur_1_rd49_select(in, d0, d1, dynamic_address);
	set_at<784, 4608>(result, in_gauss_blur_1_rd49_res);
	hw_uint<16> in_gauss_blur_1_rd50_res = in_gauss_blur_1_rd50_select(in, d0, d1, dynamic_address);
	set_at<800, 4608>(result, in_gauss_blur_1_rd50_res);
	hw_uint<16> in_gauss_blur_1_rd51_res = in_gauss_blur_1_rd51_select(in, d0, d1, dynamic_address);
	set_at<816, 4608>(result, in_gauss_blur_1_rd51_res);
	hw_uint<16> in_gauss_blur_1_rd52_res = in_gauss_blur_1_rd52_select(in, d0, d1, dynamic_address);
	set_at<832, 4608>(result, in_gauss_blur_1_rd52_res);
	hw_uint<16> in_gauss_blur_1_rd53_res = in_gauss_blur_1_rd53_select(in, d0, d1, dynamic_address);
	set_at<848, 4608>(result, in_gauss_blur_1_rd53_res);
	hw_uint<16> in_gauss_blur_1_rd54_res = in_gauss_blur_1_rd54_select(in, d0, d1, dynamic_address);
	set_at<864, 4608>(result, in_gauss_blur_1_rd54_res);
	hw_uint<16> in_gauss_blur_1_rd55_res = in_gauss_blur_1_rd55_select(in, d0, d1, dynamic_address);
	set_at<880, 4608>(result, in_gauss_blur_1_rd55_res);
	hw_uint<16> in_gauss_blur_1_rd56_res = in_gauss_blur_1_rd56_select(in, d0, d1, dynamic_address);
	set_at<896, 4608>(result, in_gauss_blur_1_rd56_res);
	hw_uint<16> in_gauss_blur_1_rd57_res = in_gauss_blur_1_rd57_select(in, d0, d1, dynamic_address);
	set_at<912, 4608>(result, in_gauss_blur_1_rd57_res);
	hw_uint<16> in_gauss_blur_1_rd58_res = in_gauss_blur_1_rd58_select(in, d0, d1, dynamic_address);
	set_at<928, 4608>(result, in_gauss_blur_1_rd58_res);
	hw_uint<16> in_gauss_blur_1_rd59_res = in_gauss_blur_1_rd59_select(in, d0, d1, dynamic_address);
	set_at<944, 4608>(result, in_gauss_blur_1_rd59_res);
	hw_uint<16> in_gauss_blur_1_rd60_res = in_gauss_blur_1_rd60_select(in, d0, d1, dynamic_address);
	set_at<960, 4608>(result, in_gauss_blur_1_rd60_res);
	hw_uint<16> in_gauss_blur_1_rd61_res = in_gauss_blur_1_rd61_select(in, d0, d1, dynamic_address);
	set_at<976, 4608>(result, in_gauss_blur_1_rd61_res);
	hw_uint<16> in_gauss_blur_1_rd62_res = in_gauss_blur_1_rd62_select(in, d0, d1, dynamic_address);
	set_at<992, 4608>(result, in_gauss_blur_1_rd62_res);
	hw_uint<16> in_gauss_blur_1_rd63_res = in_gauss_blur_1_rd63_select(in, d0, d1, dynamic_address);
	set_at<1008, 4608>(result, in_gauss_blur_1_rd63_res);
	hw_uint<16> in_gauss_blur_1_rd64_res = in_gauss_blur_1_rd64_select(in, d0, d1, dynamic_address);
	set_at<1024, 4608>(result, in_gauss_blur_1_rd64_res);
	hw_uint<16> in_gauss_blur_1_rd65_res = in_gauss_blur_1_rd65_select(in, d0, d1, dynamic_address);
	set_at<1040, 4608>(result, in_gauss_blur_1_rd65_res);
	hw_uint<16> in_gauss_blur_1_rd66_res = in_gauss_blur_1_rd66_select(in, d0, d1, dynamic_address);
	set_at<1056, 4608>(result, in_gauss_blur_1_rd66_res);
	hw_uint<16> in_gauss_blur_1_rd67_res = in_gauss_blur_1_rd67_select(in, d0, d1, dynamic_address);
	set_at<1072, 4608>(result, in_gauss_blur_1_rd67_res);
	hw_uint<16> in_gauss_blur_1_rd68_res = in_gauss_blur_1_rd68_select(in, d0, d1, dynamic_address);
	set_at<1088, 4608>(result, in_gauss_blur_1_rd68_res);
	hw_uint<16> in_gauss_blur_1_rd69_res = in_gauss_blur_1_rd69_select(in, d0, d1, dynamic_address);
	set_at<1104, 4608>(result, in_gauss_blur_1_rd69_res);
	hw_uint<16> in_gauss_blur_1_rd70_res = in_gauss_blur_1_rd70_select(in, d0, d1, dynamic_address);
	set_at<1120, 4608>(result, in_gauss_blur_1_rd70_res);
	hw_uint<16> in_gauss_blur_1_rd71_res = in_gauss_blur_1_rd71_select(in, d0, d1, dynamic_address);
	set_at<1136, 4608>(result, in_gauss_blur_1_rd71_res);
	hw_uint<16> in_gauss_blur_1_rd72_res = in_gauss_blur_1_rd72_select(in, d0, d1, dynamic_address);
	set_at<1152, 4608>(result, in_gauss_blur_1_rd72_res);
	hw_uint<16> in_gauss_blur_1_rd73_res = in_gauss_blur_1_rd73_select(in, d0, d1, dynamic_address);
	set_at<1168, 4608>(result, in_gauss_blur_1_rd73_res);
	hw_uint<16> in_gauss_blur_1_rd74_res = in_gauss_blur_1_rd74_select(in, d0, d1, dynamic_address);
	set_at<1184, 4608>(result, in_gauss_blur_1_rd74_res);
	hw_uint<16> in_gauss_blur_1_rd75_res = in_gauss_blur_1_rd75_select(in, d0, d1, dynamic_address);
	set_at<1200, 4608>(result, in_gauss_blur_1_rd75_res);
	hw_uint<16> in_gauss_blur_1_rd76_res = in_gauss_blur_1_rd76_select(in, d0, d1, dynamic_address);
	set_at<1216, 4608>(result, in_gauss_blur_1_rd76_res);
	hw_uint<16> in_gauss_blur_1_rd77_res = in_gauss_blur_1_rd77_select(in, d0, d1, dynamic_address);
	set_at<1232, 4608>(result, in_gauss_blur_1_rd77_res);
	hw_uint<16> in_gauss_blur_1_rd78_res = in_gauss_blur_1_rd78_select(in, d0, d1, dynamic_address);
	set_at<1248, 4608>(result, in_gauss_blur_1_rd78_res);
	hw_uint<16> in_gauss_blur_1_rd79_res = in_gauss_blur_1_rd79_select(in, d0, d1, dynamic_address);
	set_at<1264, 4608>(result, in_gauss_blur_1_rd79_res);
	hw_uint<16> in_gauss_blur_1_rd80_res = in_gauss_blur_1_rd80_select(in, d0, d1, dynamic_address);
	set_at<1280, 4608>(result, in_gauss_blur_1_rd80_res);
	hw_uint<16> in_gauss_blur_1_rd81_res = in_gauss_blur_1_rd81_select(in, d0, d1, dynamic_address);
	set_at<1296, 4608>(result, in_gauss_blur_1_rd81_res);
	hw_uint<16> in_gauss_blur_1_rd82_res = in_gauss_blur_1_rd82_select(in, d0, d1, dynamic_address);
	set_at<1312, 4608>(result, in_gauss_blur_1_rd82_res);
	hw_uint<16> in_gauss_blur_1_rd83_res = in_gauss_blur_1_rd83_select(in, d0, d1, dynamic_address);
	set_at<1328, 4608>(result, in_gauss_blur_1_rd83_res);
	hw_uint<16> in_gauss_blur_1_rd84_res = in_gauss_blur_1_rd84_select(in, d0, d1, dynamic_address);
	set_at<1344, 4608>(result, in_gauss_blur_1_rd84_res);
	hw_uint<16> in_gauss_blur_1_rd85_res = in_gauss_blur_1_rd85_select(in, d0, d1, dynamic_address);
	set_at<1360, 4608>(result, in_gauss_blur_1_rd85_res);
	hw_uint<16> in_gauss_blur_1_rd86_res = in_gauss_blur_1_rd86_select(in, d0, d1, dynamic_address);
	set_at<1376, 4608>(result, in_gauss_blur_1_rd86_res);
	hw_uint<16> in_gauss_blur_1_rd87_res = in_gauss_blur_1_rd87_select(in, d0, d1, dynamic_address);
	set_at<1392, 4608>(result, in_gauss_blur_1_rd87_res);
	hw_uint<16> in_gauss_blur_1_rd88_res = in_gauss_blur_1_rd88_select(in, d0, d1, dynamic_address);
	set_at<1408, 4608>(result, in_gauss_blur_1_rd88_res);
	hw_uint<16> in_gauss_blur_1_rd89_res = in_gauss_blur_1_rd89_select(in, d0, d1, dynamic_address);
	set_at<1424, 4608>(result, in_gauss_blur_1_rd89_res);
	hw_uint<16> in_gauss_blur_1_rd90_res = in_gauss_blur_1_rd90_select(in, d0, d1, dynamic_address);
	set_at<1440, 4608>(result, in_gauss_blur_1_rd90_res);
	hw_uint<16> in_gauss_blur_1_rd91_res = in_gauss_blur_1_rd91_select(in, d0, d1, dynamic_address);
	set_at<1456, 4608>(result, in_gauss_blur_1_rd91_res);
	hw_uint<16> in_gauss_blur_1_rd92_res = in_gauss_blur_1_rd92_select(in, d0, d1, dynamic_address);
	set_at<1472, 4608>(result, in_gauss_blur_1_rd92_res);
	hw_uint<16> in_gauss_blur_1_rd93_res = in_gauss_blur_1_rd93_select(in, d0, d1, dynamic_address);
	set_at<1488, 4608>(result, in_gauss_blur_1_rd93_res);
	hw_uint<16> in_gauss_blur_1_rd94_res = in_gauss_blur_1_rd94_select(in, d0, d1, dynamic_address);
	set_at<1504, 4608>(result, in_gauss_blur_1_rd94_res);
	hw_uint<16> in_gauss_blur_1_rd95_res = in_gauss_blur_1_rd95_select(in, d0, d1, dynamic_address);
	set_at<1520, 4608>(result, in_gauss_blur_1_rd95_res);
	hw_uint<16> in_gauss_blur_1_rd96_res = in_gauss_blur_1_rd96_select(in, d0, d1, dynamic_address);
	set_at<1536, 4608>(result, in_gauss_blur_1_rd96_res);
	hw_uint<16> in_gauss_blur_1_rd97_res = in_gauss_blur_1_rd97_select(in, d0, d1, dynamic_address);
	set_at<1552, 4608>(result, in_gauss_blur_1_rd97_res);
	hw_uint<16> in_gauss_blur_1_rd98_res = in_gauss_blur_1_rd98_select(in, d0, d1, dynamic_address);
	set_at<1568, 4608>(result, in_gauss_blur_1_rd98_res);
	hw_uint<16> in_gauss_blur_1_rd99_res = in_gauss_blur_1_rd99_select(in, d0, d1, dynamic_address);
	set_at<1584, 4608>(result, in_gauss_blur_1_rd99_res);
	hw_uint<16> in_gauss_blur_1_rd100_res = in_gauss_blur_1_rd100_select(in, d0, d1, dynamic_address);
	set_at<1600, 4608>(result, in_gauss_blur_1_rd100_res);
	hw_uint<16> in_gauss_blur_1_rd101_res = in_gauss_blur_1_rd101_select(in, d0, d1, dynamic_address);
	set_at<1616, 4608>(result, in_gauss_blur_1_rd101_res);
	hw_uint<16> in_gauss_blur_1_rd102_res = in_gauss_blur_1_rd102_select(in, d0, d1, dynamic_address);
	set_at<1632, 4608>(result, in_gauss_blur_1_rd102_res);
	hw_uint<16> in_gauss_blur_1_rd103_res = in_gauss_blur_1_rd103_select(in, d0, d1, dynamic_address);
	set_at<1648, 4608>(result, in_gauss_blur_1_rd103_res);
	hw_uint<16> in_gauss_blur_1_rd104_res = in_gauss_blur_1_rd104_select(in, d0, d1, dynamic_address);
	set_at<1664, 4608>(result, in_gauss_blur_1_rd104_res);
	hw_uint<16> in_gauss_blur_1_rd105_res = in_gauss_blur_1_rd105_select(in, d0, d1, dynamic_address);
	set_at<1680, 4608>(result, in_gauss_blur_1_rd105_res);
	hw_uint<16> in_gauss_blur_1_rd106_res = in_gauss_blur_1_rd106_select(in, d0, d1, dynamic_address);
	set_at<1696, 4608>(result, in_gauss_blur_1_rd106_res);
	hw_uint<16> in_gauss_blur_1_rd107_res = in_gauss_blur_1_rd107_select(in, d0, d1, dynamic_address);
	set_at<1712, 4608>(result, in_gauss_blur_1_rd107_res);
	hw_uint<16> in_gauss_blur_1_rd108_res = in_gauss_blur_1_rd108_select(in, d0, d1, dynamic_address);
	set_at<1728, 4608>(result, in_gauss_blur_1_rd108_res);
	hw_uint<16> in_gauss_blur_1_rd109_res = in_gauss_blur_1_rd109_select(in, d0, d1, dynamic_address);
	set_at<1744, 4608>(result, in_gauss_blur_1_rd109_res);
	hw_uint<16> in_gauss_blur_1_rd110_res = in_gauss_blur_1_rd110_select(in, d0, d1, dynamic_address);
	set_at<1760, 4608>(result, in_gauss_blur_1_rd110_res);
	hw_uint<16> in_gauss_blur_1_rd111_res = in_gauss_blur_1_rd111_select(in, d0, d1, dynamic_address);
	set_at<1776, 4608>(result, in_gauss_blur_1_rd111_res);
	hw_uint<16> in_gauss_blur_1_rd112_res = in_gauss_blur_1_rd112_select(in, d0, d1, dynamic_address);
	set_at<1792, 4608>(result, in_gauss_blur_1_rd112_res);
	hw_uint<16> in_gauss_blur_1_rd113_res = in_gauss_blur_1_rd113_select(in, d0, d1, dynamic_address);
	set_at<1808, 4608>(result, in_gauss_blur_1_rd113_res);
	hw_uint<16> in_gauss_blur_1_rd114_res = in_gauss_blur_1_rd114_select(in, d0, d1, dynamic_address);
	set_at<1824, 4608>(result, in_gauss_blur_1_rd114_res);
	hw_uint<16> in_gauss_blur_1_rd115_res = in_gauss_blur_1_rd115_select(in, d0, d1, dynamic_address);
	set_at<1840, 4608>(result, in_gauss_blur_1_rd115_res);
	hw_uint<16> in_gauss_blur_1_rd116_res = in_gauss_blur_1_rd116_select(in, d0, d1, dynamic_address);
	set_at<1856, 4608>(result, in_gauss_blur_1_rd116_res);
	hw_uint<16> in_gauss_blur_1_rd117_res = in_gauss_blur_1_rd117_select(in, d0, d1, dynamic_address);
	set_at<1872, 4608>(result, in_gauss_blur_1_rd117_res);
	hw_uint<16> in_gauss_blur_1_rd118_res = in_gauss_blur_1_rd118_select(in, d0, d1, dynamic_address);
	set_at<1888, 4608>(result, in_gauss_blur_1_rd118_res);
	hw_uint<16> in_gauss_blur_1_rd119_res = in_gauss_blur_1_rd119_select(in, d0, d1, dynamic_address);
	set_at<1904, 4608>(result, in_gauss_blur_1_rd119_res);
	hw_uint<16> in_gauss_blur_1_rd120_res = in_gauss_blur_1_rd120_select(in, d0, d1, dynamic_address);
	set_at<1920, 4608>(result, in_gauss_blur_1_rd120_res);
	hw_uint<16> in_gauss_blur_1_rd121_res = in_gauss_blur_1_rd121_select(in, d0, d1, dynamic_address);
	set_at<1936, 4608>(result, in_gauss_blur_1_rd121_res);
	hw_uint<16> in_gauss_blur_1_rd122_res = in_gauss_blur_1_rd122_select(in, d0, d1, dynamic_address);
	set_at<1952, 4608>(result, in_gauss_blur_1_rd122_res);
	hw_uint<16> in_gauss_blur_1_rd123_res = in_gauss_blur_1_rd123_select(in, d0, d1, dynamic_address);
	set_at<1968, 4608>(result, in_gauss_blur_1_rd123_res);
	hw_uint<16> in_gauss_blur_1_rd124_res = in_gauss_blur_1_rd124_select(in, d0, d1, dynamic_address);
	set_at<1984, 4608>(result, in_gauss_blur_1_rd124_res);
	hw_uint<16> in_gauss_blur_1_rd125_res = in_gauss_blur_1_rd125_select(in, d0, d1, dynamic_address);
	set_at<2000, 4608>(result, in_gauss_blur_1_rd125_res);
	hw_uint<16> in_gauss_blur_1_rd126_res = in_gauss_blur_1_rd126_select(in, d0, d1, dynamic_address);
	set_at<2016, 4608>(result, in_gauss_blur_1_rd126_res);
	hw_uint<16> in_gauss_blur_1_rd127_res = in_gauss_blur_1_rd127_select(in, d0, d1, dynamic_address);
	set_at<2032, 4608>(result, in_gauss_blur_1_rd127_res);
	hw_uint<16> in_gauss_blur_1_rd128_res = in_gauss_blur_1_rd128_select(in, d0, d1, dynamic_address);
	set_at<2048, 4608>(result, in_gauss_blur_1_rd128_res);
	hw_uint<16> in_gauss_blur_1_rd129_res = in_gauss_blur_1_rd129_select(in, d0, d1, dynamic_address);
	set_at<2064, 4608>(result, in_gauss_blur_1_rd129_res);
	hw_uint<16> in_gauss_blur_1_rd130_res = in_gauss_blur_1_rd130_select(in, d0, d1, dynamic_address);
	set_at<2080, 4608>(result, in_gauss_blur_1_rd130_res);
	hw_uint<16> in_gauss_blur_1_rd131_res = in_gauss_blur_1_rd131_select(in, d0, d1, dynamic_address);
	set_at<2096, 4608>(result, in_gauss_blur_1_rd131_res);
	hw_uint<16> in_gauss_blur_1_rd132_res = in_gauss_blur_1_rd132_select(in, d0, d1, dynamic_address);
	set_at<2112, 4608>(result, in_gauss_blur_1_rd132_res);
	hw_uint<16> in_gauss_blur_1_rd133_res = in_gauss_blur_1_rd133_select(in, d0, d1, dynamic_address);
	set_at<2128, 4608>(result, in_gauss_blur_1_rd133_res);
	hw_uint<16> in_gauss_blur_1_rd134_res = in_gauss_blur_1_rd134_select(in, d0, d1, dynamic_address);
	set_at<2144, 4608>(result, in_gauss_blur_1_rd134_res);
	hw_uint<16> in_gauss_blur_1_rd135_res = in_gauss_blur_1_rd135_select(in, d0, d1, dynamic_address);
	set_at<2160, 4608>(result, in_gauss_blur_1_rd135_res);
	hw_uint<16> in_gauss_blur_1_rd136_res = in_gauss_blur_1_rd136_select(in, d0, d1, dynamic_address);
	set_at<2176, 4608>(result, in_gauss_blur_1_rd136_res);
	hw_uint<16> in_gauss_blur_1_rd137_res = in_gauss_blur_1_rd137_select(in, d0, d1, dynamic_address);
	set_at<2192, 4608>(result, in_gauss_blur_1_rd137_res);
	hw_uint<16> in_gauss_blur_1_rd138_res = in_gauss_blur_1_rd138_select(in, d0, d1, dynamic_address);
	set_at<2208, 4608>(result, in_gauss_blur_1_rd138_res);
	hw_uint<16> in_gauss_blur_1_rd139_res = in_gauss_blur_1_rd139_select(in, d0, d1, dynamic_address);
	set_at<2224, 4608>(result, in_gauss_blur_1_rd139_res);
	hw_uint<16> in_gauss_blur_1_rd140_res = in_gauss_blur_1_rd140_select(in, d0, d1, dynamic_address);
	set_at<2240, 4608>(result, in_gauss_blur_1_rd140_res);
	hw_uint<16> in_gauss_blur_1_rd141_res = in_gauss_blur_1_rd141_select(in, d0, d1, dynamic_address);
	set_at<2256, 4608>(result, in_gauss_blur_1_rd141_res);
	hw_uint<16> in_gauss_blur_1_rd142_res = in_gauss_blur_1_rd142_select(in, d0, d1, dynamic_address);
	set_at<2272, 4608>(result, in_gauss_blur_1_rd142_res);
	hw_uint<16> in_gauss_blur_1_rd143_res = in_gauss_blur_1_rd143_select(in, d0, d1, dynamic_address);
	set_at<2288, 4608>(result, in_gauss_blur_1_rd143_res);
	hw_uint<16> in_gauss_blur_1_rd144_res = in_gauss_blur_1_rd144_select(in, d0, d1, dynamic_address);
	set_at<2304, 4608>(result, in_gauss_blur_1_rd144_res);
	hw_uint<16> in_gauss_blur_1_rd145_res = in_gauss_blur_1_rd145_select(in, d0, d1, dynamic_address);
	set_at<2320, 4608>(result, in_gauss_blur_1_rd145_res);
	hw_uint<16> in_gauss_blur_1_rd146_res = in_gauss_blur_1_rd146_select(in, d0, d1, dynamic_address);
	set_at<2336, 4608>(result, in_gauss_blur_1_rd146_res);
	hw_uint<16> in_gauss_blur_1_rd147_res = in_gauss_blur_1_rd147_select(in, d0, d1, dynamic_address);
	set_at<2352, 4608>(result, in_gauss_blur_1_rd147_res);
	hw_uint<16> in_gauss_blur_1_rd148_res = in_gauss_blur_1_rd148_select(in, d0, d1, dynamic_address);
	set_at<2368, 4608>(result, in_gauss_blur_1_rd148_res);
	hw_uint<16> in_gauss_blur_1_rd149_res = in_gauss_blur_1_rd149_select(in, d0, d1, dynamic_address);
	set_at<2384, 4608>(result, in_gauss_blur_1_rd149_res);
	hw_uint<16> in_gauss_blur_1_rd150_res = in_gauss_blur_1_rd150_select(in, d0, d1, dynamic_address);
	set_at<2400, 4608>(result, in_gauss_blur_1_rd150_res);
	hw_uint<16> in_gauss_blur_1_rd151_res = in_gauss_blur_1_rd151_select(in, d0, d1, dynamic_address);
	set_at<2416, 4608>(result, in_gauss_blur_1_rd151_res);
	hw_uint<16> in_gauss_blur_1_rd152_res = in_gauss_blur_1_rd152_select(in, d0, d1, dynamic_address);
	set_at<2432, 4608>(result, in_gauss_blur_1_rd152_res);
	hw_uint<16> in_gauss_blur_1_rd153_res = in_gauss_blur_1_rd153_select(in, d0, d1, dynamic_address);
	set_at<2448, 4608>(result, in_gauss_blur_1_rd153_res);
	hw_uint<16> in_gauss_blur_1_rd154_res = in_gauss_blur_1_rd154_select(in, d0, d1, dynamic_address);
	set_at<2464, 4608>(result, in_gauss_blur_1_rd154_res);
	hw_uint<16> in_gauss_blur_1_rd155_res = in_gauss_blur_1_rd155_select(in, d0, d1, dynamic_address);
	set_at<2480, 4608>(result, in_gauss_blur_1_rd155_res);
	hw_uint<16> in_gauss_blur_1_rd156_res = in_gauss_blur_1_rd156_select(in, d0, d1, dynamic_address);
	set_at<2496, 4608>(result, in_gauss_blur_1_rd156_res);
	hw_uint<16> in_gauss_blur_1_rd157_res = in_gauss_blur_1_rd157_select(in, d0, d1, dynamic_address);
	set_at<2512, 4608>(result, in_gauss_blur_1_rd157_res);
	hw_uint<16> in_gauss_blur_1_rd158_res = in_gauss_blur_1_rd158_select(in, d0, d1, dynamic_address);
	set_at<2528, 4608>(result, in_gauss_blur_1_rd158_res);
	hw_uint<16> in_gauss_blur_1_rd159_res = in_gauss_blur_1_rd159_select(in, d0, d1, dynamic_address);
	set_at<2544, 4608>(result, in_gauss_blur_1_rd159_res);
	hw_uint<16> in_gauss_blur_1_rd160_res = in_gauss_blur_1_rd160_select(in, d0, d1, dynamic_address);
	set_at<2560, 4608>(result, in_gauss_blur_1_rd160_res);
	hw_uint<16> in_gauss_blur_1_rd161_res = in_gauss_blur_1_rd161_select(in, d0, d1, dynamic_address);
	set_at<2576, 4608>(result, in_gauss_blur_1_rd161_res);
	hw_uint<16> in_gauss_blur_1_rd162_res = in_gauss_blur_1_rd162_select(in, d0, d1, dynamic_address);
	set_at<2592, 4608>(result, in_gauss_blur_1_rd162_res);
	hw_uint<16> in_gauss_blur_1_rd163_res = in_gauss_blur_1_rd163_select(in, d0, d1, dynamic_address);
	set_at<2608, 4608>(result, in_gauss_blur_1_rd163_res);
	hw_uint<16> in_gauss_blur_1_rd164_res = in_gauss_blur_1_rd164_select(in, d0, d1, dynamic_address);
	set_at<2624, 4608>(result, in_gauss_blur_1_rd164_res);
	hw_uint<16> in_gauss_blur_1_rd165_res = in_gauss_blur_1_rd165_select(in, d0, d1, dynamic_address);
	set_at<2640, 4608>(result, in_gauss_blur_1_rd165_res);
	hw_uint<16> in_gauss_blur_1_rd166_res = in_gauss_blur_1_rd166_select(in, d0, d1, dynamic_address);
	set_at<2656, 4608>(result, in_gauss_blur_1_rd166_res);
	hw_uint<16> in_gauss_blur_1_rd167_res = in_gauss_blur_1_rd167_select(in, d0, d1, dynamic_address);
	set_at<2672, 4608>(result, in_gauss_blur_1_rd167_res);
	hw_uint<16> in_gauss_blur_1_rd168_res = in_gauss_blur_1_rd168_select(in, d0, d1, dynamic_address);
	set_at<2688, 4608>(result, in_gauss_blur_1_rd168_res);
	hw_uint<16> in_gauss_blur_1_rd169_res = in_gauss_blur_1_rd169_select(in, d0, d1, dynamic_address);
	set_at<2704, 4608>(result, in_gauss_blur_1_rd169_res);
	hw_uint<16> in_gauss_blur_1_rd170_res = in_gauss_blur_1_rd170_select(in, d0, d1, dynamic_address);
	set_at<2720, 4608>(result, in_gauss_blur_1_rd170_res);
	hw_uint<16> in_gauss_blur_1_rd171_res = in_gauss_blur_1_rd171_select(in, d0, d1, dynamic_address);
	set_at<2736, 4608>(result, in_gauss_blur_1_rd171_res);
	hw_uint<16> in_gauss_blur_1_rd172_res = in_gauss_blur_1_rd172_select(in, d0, d1, dynamic_address);
	set_at<2752, 4608>(result, in_gauss_blur_1_rd172_res);
	hw_uint<16> in_gauss_blur_1_rd173_res = in_gauss_blur_1_rd173_select(in, d0, d1, dynamic_address);
	set_at<2768, 4608>(result, in_gauss_blur_1_rd173_res);
	hw_uint<16> in_gauss_blur_1_rd174_res = in_gauss_blur_1_rd174_select(in, d0, d1, dynamic_address);
	set_at<2784, 4608>(result, in_gauss_blur_1_rd174_res);
	hw_uint<16> in_gauss_blur_1_rd175_res = in_gauss_blur_1_rd175_select(in, d0, d1, dynamic_address);
	set_at<2800, 4608>(result, in_gauss_blur_1_rd175_res);
	hw_uint<16> in_gauss_blur_1_rd176_res = in_gauss_blur_1_rd176_select(in, d0, d1, dynamic_address);
	set_at<2816, 4608>(result, in_gauss_blur_1_rd176_res);
	hw_uint<16> in_gauss_blur_1_rd177_res = in_gauss_blur_1_rd177_select(in, d0, d1, dynamic_address);
	set_at<2832, 4608>(result, in_gauss_blur_1_rd177_res);
	hw_uint<16> in_gauss_blur_1_rd178_res = in_gauss_blur_1_rd178_select(in, d0, d1, dynamic_address);
	set_at<2848, 4608>(result, in_gauss_blur_1_rd178_res);
	hw_uint<16> in_gauss_blur_1_rd179_res = in_gauss_blur_1_rd179_select(in, d0, d1, dynamic_address);
	set_at<2864, 4608>(result, in_gauss_blur_1_rd179_res);
	hw_uint<16> in_gauss_blur_1_rd180_res = in_gauss_blur_1_rd180_select(in, d0, d1, dynamic_address);
	set_at<2880, 4608>(result, in_gauss_blur_1_rd180_res);
	hw_uint<16> in_gauss_blur_1_rd181_res = in_gauss_blur_1_rd181_select(in, d0, d1, dynamic_address);
	set_at<2896, 4608>(result, in_gauss_blur_1_rd181_res);
	hw_uint<16> in_gauss_blur_1_rd182_res = in_gauss_blur_1_rd182_select(in, d0, d1, dynamic_address);
	set_at<2912, 4608>(result, in_gauss_blur_1_rd182_res);
	hw_uint<16> in_gauss_blur_1_rd183_res = in_gauss_blur_1_rd183_select(in, d0, d1, dynamic_address);
	set_at<2928, 4608>(result, in_gauss_blur_1_rd183_res);
	hw_uint<16> in_gauss_blur_1_rd184_res = in_gauss_blur_1_rd184_select(in, d0, d1, dynamic_address);
	set_at<2944, 4608>(result, in_gauss_blur_1_rd184_res);
	hw_uint<16> in_gauss_blur_1_rd185_res = in_gauss_blur_1_rd185_select(in, d0, d1, dynamic_address);
	set_at<2960, 4608>(result, in_gauss_blur_1_rd185_res);
	hw_uint<16> in_gauss_blur_1_rd186_res = in_gauss_blur_1_rd186_select(in, d0, d1, dynamic_address);
	set_at<2976, 4608>(result, in_gauss_blur_1_rd186_res);
	hw_uint<16> in_gauss_blur_1_rd187_res = in_gauss_blur_1_rd187_select(in, d0, d1, dynamic_address);
	set_at<2992, 4608>(result, in_gauss_blur_1_rd187_res);
	hw_uint<16> in_gauss_blur_1_rd188_res = in_gauss_blur_1_rd188_select(in, d0, d1, dynamic_address);
	set_at<3008, 4608>(result, in_gauss_blur_1_rd188_res);
	hw_uint<16> in_gauss_blur_1_rd189_res = in_gauss_blur_1_rd189_select(in, d0, d1, dynamic_address);
	set_at<3024, 4608>(result, in_gauss_blur_1_rd189_res);
	hw_uint<16> in_gauss_blur_1_rd190_res = in_gauss_blur_1_rd190_select(in, d0, d1, dynamic_address);
	set_at<3040, 4608>(result, in_gauss_blur_1_rd190_res);
	hw_uint<16> in_gauss_blur_1_rd191_res = in_gauss_blur_1_rd191_select(in, d0, d1, dynamic_address);
	set_at<3056, 4608>(result, in_gauss_blur_1_rd191_res);
	hw_uint<16> in_gauss_blur_1_rd192_res = in_gauss_blur_1_rd192_select(in, d0, d1, dynamic_address);
	set_at<3072, 4608>(result, in_gauss_blur_1_rd192_res);
	hw_uint<16> in_gauss_blur_1_rd193_res = in_gauss_blur_1_rd193_select(in, d0, d1, dynamic_address);
	set_at<3088, 4608>(result, in_gauss_blur_1_rd193_res);
	hw_uint<16> in_gauss_blur_1_rd194_res = in_gauss_blur_1_rd194_select(in, d0, d1, dynamic_address);
	set_at<3104, 4608>(result, in_gauss_blur_1_rd194_res);
	hw_uint<16> in_gauss_blur_1_rd195_res = in_gauss_blur_1_rd195_select(in, d0, d1, dynamic_address);
	set_at<3120, 4608>(result, in_gauss_blur_1_rd195_res);
	hw_uint<16> in_gauss_blur_1_rd196_res = in_gauss_blur_1_rd196_select(in, d0, d1, dynamic_address);
	set_at<3136, 4608>(result, in_gauss_blur_1_rd196_res);
	hw_uint<16> in_gauss_blur_1_rd197_res = in_gauss_blur_1_rd197_select(in, d0, d1, dynamic_address);
	set_at<3152, 4608>(result, in_gauss_blur_1_rd197_res);
	hw_uint<16> in_gauss_blur_1_rd198_res = in_gauss_blur_1_rd198_select(in, d0, d1, dynamic_address);
	set_at<3168, 4608>(result, in_gauss_blur_1_rd198_res);
	hw_uint<16> in_gauss_blur_1_rd199_res = in_gauss_blur_1_rd199_select(in, d0, d1, dynamic_address);
	set_at<3184, 4608>(result, in_gauss_blur_1_rd199_res);
	hw_uint<16> in_gauss_blur_1_rd200_res = in_gauss_blur_1_rd200_select(in, d0, d1, dynamic_address);
	set_at<3200, 4608>(result, in_gauss_blur_1_rd200_res);
	hw_uint<16> in_gauss_blur_1_rd201_res = in_gauss_blur_1_rd201_select(in, d0, d1, dynamic_address);
	set_at<3216, 4608>(result, in_gauss_blur_1_rd201_res);
	hw_uint<16> in_gauss_blur_1_rd202_res = in_gauss_blur_1_rd202_select(in, d0, d1, dynamic_address);
	set_at<3232, 4608>(result, in_gauss_blur_1_rd202_res);
	hw_uint<16> in_gauss_blur_1_rd203_res = in_gauss_blur_1_rd203_select(in, d0, d1, dynamic_address);
	set_at<3248, 4608>(result, in_gauss_blur_1_rd203_res);
	hw_uint<16> in_gauss_blur_1_rd204_res = in_gauss_blur_1_rd204_select(in, d0, d1, dynamic_address);
	set_at<3264, 4608>(result, in_gauss_blur_1_rd204_res);
	hw_uint<16> in_gauss_blur_1_rd205_res = in_gauss_blur_1_rd205_select(in, d0, d1, dynamic_address);
	set_at<3280, 4608>(result, in_gauss_blur_1_rd205_res);
	hw_uint<16> in_gauss_blur_1_rd206_res = in_gauss_blur_1_rd206_select(in, d0, d1, dynamic_address);
	set_at<3296, 4608>(result, in_gauss_blur_1_rd206_res);
	hw_uint<16> in_gauss_blur_1_rd207_res = in_gauss_blur_1_rd207_select(in, d0, d1, dynamic_address);
	set_at<3312, 4608>(result, in_gauss_blur_1_rd207_res);
	hw_uint<16> in_gauss_blur_1_rd208_res = in_gauss_blur_1_rd208_select(in, d0, d1, dynamic_address);
	set_at<3328, 4608>(result, in_gauss_blur_1_rd208_res);
	hw_uint<16> in_gauss_blur_1_rd209_res = in_gauss_blur_1_rd209_select(in, d0, d1, dynamic_address);
	set_at<3344, 4608>(result, in_gauss_blur_1_rd209_res);
	hw_uint<16> in_gauss_blur_1_rd210_res = in_gauss_blur_1_rd210_select(in, d0, d1, dynamic_address);
	set_at<3360, 4608>(result, in_gauss_blur_1_rd210_res);
	hw_uint<16> in_gauss_blur_1_rd211_res = in_gauss_blur_1_rd211_select(in, d0, d1, dynamic_address);
	set_at<3376, 4608>(result, in_gauss_blur_1_rd211_res);
	hw_uint<16> in_gauss_blur_1_rd212_res = in_gauss_blur_1_rd212_select(in, d0, d1, dynamic_address);
	set_at<3392, 4608>(result, in_gauss_blur_1_rd212_res);
	hw_uint<16> in_gauss_blur_1_rd213_res = in_gauss_blur_1_rd213_select(in, d0, d1, dynamic_address);
	set_at<3408, 4608>(result, in_gauss_blur_1_rd213_res);
	hw_uint<16> in_gauss_blur_1_rd214_res = in_gauss_blur_1_rd214_select(in, d0, d1, dynamic_address);
	set_at<3424, 4608>(result, in_gauss_blur_1_rd214_res);
	hw_uint<16> in_gauss_blur_1_rd215_res = in_gauss_blur_1_rd215_select(in, d0, d1, dynamic_address);
	set_at<3440, 4608>(result, in_gauss_blur_1_rd215_res);
	hw_uint<16> in_gauss_blur_1_rd216_res = in_gauss_blur_1_rd216_select(in, d0, d1, dynamic_address);
	set_at<3456, 4608>(result, in_gauss_blur_1_rd216_res);
	hw_uint<16> in_gauss_blur_1_rd217_res = in_gauss_blur_1_rd217_select(in, d0, d1, dynamic_address);
	set_at<3472, 4608>(result, in_gauss_blur_1_rd217_res);
	hw_uint<16> in_gauss_blur_1_rd218_res = in_gauss_blur_1_rd218_select(in, d0, d1, dynamic_address);
	set_at<3488, 4608>(result, in_gauss_blur_1_rd218_res);
	hw_uint<16> in_gauss_blur_1_rd219_res = in_gauss_blur_1_rd219_select(in, d0, d1, dynamic_address);
	set_at<3504, 4608>(result, in_gauss_blur_1_rd219_res);
	hw_uint<16> in_gauss_blur_1_rd220_res = in_gauss_blur_1_rd220_select(in, d0, d1, dynamic_address);
	set_at<3520, 4608>(result, in_gauss_blur_1_rd220_res);
	hw_uint<16> in_gauss_blur_1_rd221_res = in_gauss_blur_1_rd221_select(in, d0, d1, dynamic_address);
	set_at<3536, 4608>(result, in_gauss_blur_1_rd221_res);
	hw_uint<16> in_gauss_blur_1_rd222_res = in_gauss_blur_1_rd222_select(in, d0, d1, dynamic_address);
	set_at<3552, 4608>(result, in_gauss_blur_1_rd222_res);
	hw_uint<16> in_gauss_blur_1_rd223_res = in_gauss_blur_1_rd223_select(in, d0, d1, dynamic_address);
	set_at<3568, 4608>(result, in_gauss_blur_1_rd223_res);
	hw_uint<16> in_gauss_blur_1_rd224_res = in_gauss_blur_1_rd224_select(in, d0, d1, dynamic_address);
	set_at<3584, 4608>(result, in_gauss_blur_1_rd224_res);
	hw_uint<16> in_gauss_blur_1_rd225_res = in_gauss_blur_1_rd225_select(in, d0, d1, dynamic_address);
	set_at<3600, 4608>(result, in_gauss_blur_1_rd225_res);
	hw_uint<16> in_gauss_blur_1_rd226_res = in_gauss_blur_1_rd226_select(in, d0, d1, dynamic_address);
	set_at<3616, 4608>(result, in_gauss_blur_1_rd226_res);
	hw_uint<16> in_gauss_blur_1_rd227_res = in_gauss_blur_1_rd227_select(in, d0, d1, dynamic_address);
	set_at<3632, 4608>(result, in_gauss_blur_1_rd227_res);
	hw_uint<16> in_gauss_blur_1_rd228_res = in_gauss_blur_1_rd228_select(in, d0, d1, dynamic_address);
	set_at<3648, 4608>(result, in_gauss_blur_1_rd228_res);
	hw_uint<16> in_gauss_blur_1_rd229_res = in_gauss_blur_1_rd229_select(in, d0, d1, dynamic_address);
	set_at<3664, 4608>(result, in_gauss_blur_1_rd229_res);
	hw_uint<16> in_gauss_blur_1_rd230_res = in_gauss_blur_1_rd230_select(in, d0, d1, dynamic_address);
	set_at<3680, 4608>(result, in_gauss_blur_1_rd230_res);
	hw_uint<16> in_gauss_blur_1_rd231_res = in_gauss_blur_1_rd231_select(in, d0, d1, dynamic_address);
	set_at<3696, 4608>(result, in_gauss_blur_1_rd231_res);
	hw_uint<16> in_gauss_blur_1_rd232_res = in_gauss_blur_1_rd232_select(in, d0, d1, dynamic_address);
	set_at<3712, 4608>(result, in_gauss_blur_1_rd232_res);
	hw_uint<16> in_gauss_blur_1_rd233_res = in_gauss_blur_1_rd233_select(in, d0, d1, dynamic_address);
	set_at<3728, 4608>(result, in_gauss_blur_1_rd233_res);
	hw_uint<16> in_gauss_blur_1_rd234_res = in_gauss_blur_1_rd234_select(in, d0, d1, dynamic_address);
	set_at<3744, 4608>(result, in_gauss_blur_1_rd234_res);
	hw_uint<16> in_gauss_blur_1_rd235_res = in_gauss_blur_1_rd235_select(in, d0, d1, dynamic_address);
	set_at<3760, 4608>(result, in_gauss_blur_1_rd235_res);
	hw_uint<16> in_gauss_blur_1_rd236_res = in_gauss_blur_1_rd236_select(in, d0, d1, dynamic_address);
	set_at<3776, 4608>(result, in_gauss_blur_1_rd236_res);
	hw_uint<16> in_gauss_blur_1_rd237_res = in_gauss_blur_1_rd237_select(in, d0, d1, dynamic_address);
	set_at<3792, 4608>(result, in_gauss_blur_1_rd237_res);
	hw_uint<16> in_gauss_blur_1_rd238_res = in_gauss_blur_1_rd238_select(in, d0, d1, dynamic_address);
	set_at<3808, 4608>(result, in_gauss_blur_1_rd238_res);
	hw_uint<16> in_gauss_blur_1_rd239_res = in_gauss_blur_1_rd239_select(in, d0, d1, dynamic_address);
	set_at<3824, 4608>(result, in_gauss_blur_1_rd239_res);
	hw_uint<16> in_gauss_blur_1_rd240_res = in_gauss_blur_1_rd240_select(in, d0, d1, dynamic_address);
	set_at<3840, 4608>(result, in_gauss_blur_1_rd240_res);
	hw_uint<16> in_gauss_blur_1_rd241_res = in_gauss_blur_1_rd241_select(in, d0, d1, dynamic_address);
	set_at<3856, 4608>(result, in_gauss_blur_1_rd241_res);
	hw_uint<16> in_gauss_blur_1_rd242_res = in_gauss_blur_1_rd242_select(in, d0, d1, dynamic_address);
	set_at<3872, 4608>(result, in_gauss_blur_1_rd242_res);
	hw_uint<16> in_gauss_blur_1_rd243_res = in_gauss_blur_1_rd243_select(in, d0, d1, dynamic_address);
	set_at<3888, 4608>(result, in_gauss_blur_1_rd243_res);
	hw_uint<16> in_gauss_blur_1_rd244_res = in_gauss_blur_1_rd244_select(in, d0, d1, dynamic_address);
	set_at<3904, 4608>(result, in_gauss_blur_1_rd244_res);
	hw_uint<16> in_gauss_blur_1_rd245_res = in_gauss_blur_1_rd245_select(in, d0, d1, dynamic_address);
	set_at<3920, 4608>(result, in_gauss_blur_1_rd245_res);
	hw_uint<16> in_gauss_blur_1_rd246_res = in_gauss_blur_1_rd246_select(in, d0, d1, dynamic_address);
	set_at<3936, 4608>(result, in_gauss_blur_1_rd246_res);
	hw_uint<16> in_gauss_blur_1_rd247_res = in_gauss_blur_1_rd247_select(in, d0, d1, dynamic_address);
	set_at<3952, 4608>(result, in_gauss_blur_1_rd247_res);
	hw_uint<16> in_gauss_blur_1_rd248_res = in_gauss_blur_1_rd248_select(in, d0, d1, dynamic_address);
	set_at<3968, 4608>(result, in_gauss_blur_1_rd248_res);
	hw_uint<16> in_gauss_blur_1_rd249_res = in_gauss_blur_1_rd249_select(in, d0, d1, dynamic_address);
	set_at<3984, 4608>(result, in_gauss_blur_1_rd249_res);
	hw_uint<16> in_gauss_blur_1_rd250_res = in_gauss_blur_1_rd250_select(in, d0, d1, dynamic_address);
	set_at<4000, 4608>(result, in_gauss_blur_1_rd250_res);
	hw_uint<16> in_gauss_blur_1_rd251_res = in_gauss_blur_1_rd251_select(in, d0, d1, dynamic_address);
	set_at<4016, 4608>(result, in_gauss_blur_1_rd251_res);
	hw_uint<16> in_gauss_blur_1_rd252_res = in_gauss_blur_1_rd252_select(in, d0, d1, dynamic_address);
	set_at<4032, 4608>(result, in_gauss_blur_1_rd252_res);
	hw_uint<16> in_gauss_blur_1_rd253_res = in_gauss_blur_1_rd253_select(in, d0, d1, dynamic_address);
	set_at<4048, 4608>(result, in_gauss_blur_1_rd253_res);
	hw_uint<16> in_gauss_blur_1_rd254_res = in_gauss_blur_1_rd254_select(in, d0, d1, dynamic_address);
	set_at<4064, 4608>(result, in_gauss_blur_1_rd254_res);
	hw_uint<16> in_gauss_blur_1_rd255_res = in_gauss_blur_1_rd255_select(in, d0, d1, dynamic_address);
	set_at<4080, 4608>(result, in_gauss_blur_1_rd255_res);
	hw_uint<16> in_gauss_blur_1_rd256_res = in_gauss_blur_1_rd256_select(in, d0, d1, dynamic_address);
	set_at<4096, 4608>(result, in_gauss_blur_1_rd256_res);
	hw_uint<16> in_gauss_blur_1_rd257_res = in_gauss_blur_1_rd257_select(in, d0, d1, dynamic_address);
	set_at<4112, 4608>(result, in_gauss_blur_1_rd257_res);
	hw_uint<16> in_gauss_blur_1_rd258_res = in_gauss_blur_1_rd258_select(in, d0, d1, dynamic_address);
	set_at<4128, 4608>(result, in_gauss_blur_1_rd258_res);
	hw_uint<16> in_gauss_blur_1_rd259_res = in_gauss_blur_1_rd259_select(in, d0, d1, dynamic_address);
	set_at<4144, 4608>(result, in_gauss_blur_1_rd259_res);
	hw_uint<16> in_gauss_blur_1_rd260_res = in_gauss_blur_1_rd260_select(in, d0, d1, dynamic_address);
	set_at<4160, 4608>(result, in_gauss_blur_1_rd260_res);
	hw_uint<16> in_gauss_blur_1_rd261_res = in_gauss_blur_1_rd261_select(in, d0, d1, dynamic_address);
	set_at<4176, 4608>(result, in_gauss_blur_1_rd261_res);
	hw_uint<16> in_gauss_blur_1_rd262_res = in_gauss_blur_1_rd262_select(in, d0, d1, dynamic_address);
	set_at<4192, 4608>(result, in_gauss_blur_1_rd262_res);
	hw_uint<16> in_gauss_blur_1_rd263_res = in_gauss_blur_1_rd263_select(in, d0, d1, dynamic_address);
	set_at<4208, 4608>(result, in_gauss_blur_1_rd263_res);
	hw_uint<16> in_gauss_blur_1_rd264_res = in_gauss_blur_1_rd264_select(in, d0, d1, dynamic_address);
	set_at<4224, 4608>(result, in_gauss_blur_1_rd264_res);
	hw_uint<16> in_gauss_blur_1_rd265_res = in_gauss_blur_1_rd265_select(in, d0, d1, dynamic_address);
	set_at<4240, 4608>(result, in_gauss_blur_1_rd265_res);
	hw_uint<16> in_gauss_blur_1_rd266_res = in_gauss_blur_1_rd266_select(in, d0, d1, dynamic_address);
	set_at<4256, 4608>(result, in_gauss_blur_1_rd266_res);
	hw_uint<16> in_gauss_blur_1_rd267_res = in_gauss_blur_1_rd267_select(in, d0, d1, dynamic_address);
	set_at<4272, 4608>(result, in_gauss_blur_1_rd267_res);
	hw_uint<16> in_gauss_blur_1_rd268_res = in_gauss_blur_1_rd268_select(in, d0, d1, dynamic_address);
	set_at<4288, 4608>(result, in_gauss_blur_1_rd268_res);
	hw_uint<16> in_gauss_blur_1_rd269_res = in_gauss_blur_1_rd269_select(in, d0, d1, dynamic_address);
	set_at<4304, 4608>(result, in_gauss_blur_1_rd269_res);
	hw_uint<16> in_gauss_blur_1_rd270_res = in_gauss_blur_1_rd270_select(in, d0, d1, dynamic_address);
	set_at<4320, 4608>(result, in_gauss_blur_1_rd270_res);
	hw_uint<16> in_gauss_blur_1_rd271_res = in_gauss_blur_1_rd271_select(in, d0, d1, dynamic_address);
	set_at<4336, 4608>(result, in_gauss_blur_1_rd271_res);
	hw_uint<16> in_gauss_blur_1_rd272_res = in_gauss_blur_1_rd272_select(in, d0, d1, dynamic_address);
	set_at<4352, 4608>(result, in_gauss_blur_1_rd272_res);
	hw_uint<16> in_gauss_blur_1_rd273_res = in_gauss_blur_1_rd273_select(in, d0, d1, dynamic_address);
	set_at<4368, 4608>(result, in_gauss_blur_1_rd273_res);
	hw_uint<16> in_gauss_blur_1_rd274_res = in_gauss_blur_1_rd274_select(in, d0, d1, dynamic_address);
	set_at<4384, 4608>(result, in_gauss_blur_1_rd274_res);
	hw_uint<16> in_gauss_blur_1_rd275_res = in_gauss_blur_1_rd275_select(in, d0, d1, dynamic_address);
	set_at<4400, 4608>(result, in_gauss_blur_1_rd275_res);
	hw_uint<16> in_gauss_blur_1_rd276_res = in_gauss_blur_1_rd276_select(in, d0, d1, dynamic_address);
	set_at<4416, 4608>(result, in_gauss_blur_1_rd276_res);
	hw_uint<16> in_gauss_blur_1_rd277_res = in_gauss_blur_1_rd277_select(in, d0, d1, dynamic_address);
	set_at<4432, 4608>(result, in_gauss_blur_1_rd277_res);
	hw_uint<16> in_gauss_blur_1_rd278_res = in_gauss_blur_1_rd278_select(in, d0, d1, dynamic_address);
	set_at<4448, 4608>(result, in_gauss_blur_1_rd278_res);
	hw_uint<16> in_gauss_blur_1_rd279_res = in_gauss_blur_1_rd279_select(in, d0, d1, dynamic_address);
	set_at<4464, 4608>(result, in_gauss_blur_1_rd279_res);
	hw_uint<16> in_gauss_blur_1_rd280_res = in_gauss_blur_1_rd280_select(in, d0, d1, dynamic_address);
	set_at<4480, 4608>(result, in_gauss_blur_1_rd280_res);
	hw_uint<16> in_gauss_blur_1_rd281_res = in_gauss_blur_1_rd281_select(in, d0, d1, dynamic_address);
	set_at<4496, 4608>(result, in_gauss_blur_1_rd281_res);
	hw_uint<16> in_gauss_blur_1_rd282_res = in_gauss_blur_1_rd282_select(in, d0, d1, dynamic_address);
	set_at<4512, 4608>(result, in_gauss_blur_1_rd282_res);
	hw_uint<16> in_gauss_blur_1_rd283_res = in_gauss_blur_1_rd283_select(in, d0, d1, dynamic_address);
	set_at<4528, 4608>(result, in_gauss_blur_1_rd283_res);
	hw_uint<16> in_gauss_blur_1_rd284_res = in_gauss_blur_1_rd284_select(in, d0, d1, dynamic_address);
	set_at<4544, 4608>(result, in_gauss_blur_1_rd284_res);
	hw_uint<16> in_gauss_blur_1_rd285_res = in_gauss_blur_1_rd285_select(in, d0, d1, dynamic_address);
	set_at<4560, 4608>(result, in_gauss_blur_1_rd285_res);
	hw_uint<16> in_gauss_blur_1_rd286_res = in_gauss_blur_1_rd286_select(in, d0, d1, dynamic_address);
	set_at<4576, 4608>(result, in_gauss_blur_1_rd286_res);
	hw_uint<16> in_gauss_blur_1_rd287_res = in_gauss_blur_1_rd287_select(in, d0, d1, dynamic_address);
	set_at<4592, 4608>(result, in_gauss_blur_1_rd287_res);
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

#include "hw_classes.h"

struct in_gauss_blur_1_in_gauss_blur_1_update_0_write0_to_in_gauss_ds_1_rd0_cache {
	// RAM Box: {[-64, 1952], [-6, 1078]}
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
	// RAM Box: {[-62, 1954], [-6, 1078]}
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

struct in_gauss_blur_1_in_gauss_blur_1_update_0_write20_to_in_gauss_ds_1_rd10_cache {
	// RAM Box: {[-44, 1972], [-6, 1078]}
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

struct in_gauss_blur_1_in_gauss_blur_1_update_0_write22_to_in_gauss_ds_1_rd11_cache {
	// RAM Box: {[-42, 1974], [-6, 1078]}
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

struct in_gauss_blur_1_in_gauss_blur_1_update_0_write24_to_in_gauss_ds_1_rd12_cache {
	// RAM Box: {[-40, 1976], [-6, 1078]}
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

struct in_gauss_blur_1_in_gauss_blur_1_update_0_write26_to_in_gauss_ds_1_rd13_cache {
	// RAM Box: {[-38, 1978], [-6, 1078]}
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

struct in_gauss_blur_1_in_gauss_blur_1_update_0_write28_to_in_gauss_ds_1_rd14_cache {
	// RAM Box: {[-36, 1980], [-6, 1078]}
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

struct in_gauss_blur_1_in_gauss_blur_1_update_0_write30_to_in_gauss_ds_1_rd15_cache {
	// RAM Box: {[-34, 1982], [-6, 1078]}
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
	// RAM Box: {[-60, 1956], [-6, 1078]}
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
	// RAM Box: {[-58, 1958], [-6, 1078]}
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
	// RAM Box: {[-56, 1960], [-6, 1078]}
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
	// RAM Box: {[-54, 1962], [-6, 1078]}
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
	// RAM Box: {[-52, 1964], [-6, 1078]}
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
	// RAM Box: {[-50, 1966], [-6, 1078]}
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

struct in_gauss_blur_1_in_gauss_blur_1_update_0_write16_to_in_gauss_ds_1_rd8_cache {
	// RAM Box: {[-48, 1968], [-6, 1078]}
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

struct in_gauss_blur_1_in_gauss_blur_1_update_0_write18_to_in_gauss_ds_1_rd9_cache {
	// RAM Box: {[-46, 1970], [-6, 1078]}
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
  // # of banks: 16
  in_gauss_blur_1_in_gauss_blur_1_update_0_write0_to_in_gauss_ds_1_rd0_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write0_to_in_gauss_ds_1_rd0;
  in_gauss_blur_1_in_gauss_blur_1_update_0_write2_to_in_gauss_ds_1_rd1_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write2_to_in_gauss_ds_1_rd1;
  in_gauss_blur_1_in_gauss_blur_1_update_0_write20_to_in_gauss_ds_1_rd10_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write20_to_in_gauss_ds_1_rd10;
  in_gauss_blur_1_in_gauss_blur_1_update_0_write22_to_in_gauss_ds_1_rd11_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write22_to_in_gauss_ds_1_rd11;
  in_gauss_blur_1_in_gauss_blur_1_update_0_write24_to_in_gauss_ds_1_rd12_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write24_to_in_gauss_ds_1_rd12;
  in_gauss_blur_1_in_gauss_blur_1_update_0_write26_to_in_gauss_ds_1_rd13_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write26_to_in_gauss_ds_1_rd13;
  in_gauss_blur_1_in_gauss_blur_1_update_0_write28_to_in_gauss_ds_1_rd14_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write28_to_in_gauss_ds_1_rd14;
  in_gauss_blur_1_in_gauss_blur_1_update_0_write30_to_in_gauss_ds_1_rd15_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write30_to_in_gauss_ds_1_rd15;
  in_gauss_blur_1_in_gauss_blur_1_update_0_write4_to_in_gauss_ds_1_rd2_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write4_to_in_gauss_ds_1_rd2;
  in_gauss_blur_1_in_gauss_blur_1_update_0_write6_to_in_gauss_ds_1_rd3_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write6_to_in_gauss_ds_1_rd3;
  in_gauss_blur_1_in_gauss_blur_1_update_0_write8_to_in_gauss_ds_1_rd4_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write8_to_in_gauss_ds_1_rd4;
  in_gauss_blur_1_in_gauss_blur_1_update_0_write10_to_in_gauss_ds_1_rd5_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write10_to_in_gauss_ds_1_rd5;
  in_gauss_blur_1_in_gauss_blur_1_update_0_write12_to_in_gauss_ds_1_rd6_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write12_to_in_gauss_ds_1_rd6;
  in_gauss_blur_1_in_gauss_blur_1_update_0_write14_to_in_gauss_ds_1_rd7_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write14_to_in_gauss_ds_1_rd7;
  in_gauss_blur_1_in_gauss_blur_1_update_0_write16_to_in_gauss_ds_1_rd8_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write16_to_in_gauss_ds_1_rd8;
  in_gauss_blur_1_in_gauss_blur_1_update_0_write18_to_in_gauss_ds_1_rd9_cache in_gauss_blur_1_in_gauss_blur_1_update_0_write18_to_in_gauss_ds_1_rd9;
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

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write16_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write16, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write16_to_in_gauss_ds_1_rd8.push(in_gauss_blur_1_in_gauss_blur_1_update_0_write16);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write17_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write17, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write18_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write18, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write18_to_in_gauss_ds_1_rd9.push(in_gauss_blur_1_in_gauss_blur_1_update_0_write18);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write19_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write19, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write2_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write2, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write2_to_in_gauss_ds_1_rd1.push(in_gauss_blur_1_in_gauss_blur_1_update_0_write2);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write20_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write20, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write20_to_in_gauss_ds_1_rd10.push(in_gauss_blur_1_in_gauss_blur_1_update_0_write20);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write21_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write21, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write22_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write22, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write22_to_in_gauss_ds_1_rd11.push(in_gauss_blur_1_in_gauss_blur_1_update_0_write22);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write23_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write23, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write24_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write24, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write24_to_in_gauss_ds_1_rd12.push(in_gauss_blur_1_in_gauss_blur_1_update_0_write24);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write25_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write25, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write26_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write26, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write26_to_in_gauss_ds_1_rd13.push(in_gauss_blur_1_in_gauss_blur_1_update_0_write26);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write27_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write27, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write28_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write28, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write28_to_in_gauss_ds_1_rd14.push(in_gauss_blur_1_in_gauss_blur_1_update_0_write28);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write29_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write29, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write3_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write3, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write30_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write30, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write30_to_in_gauss_ds_1_rd15.push(in_gauss_blur_1_in_gauss_blur_1_update_0_write30);
}

inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write31_write(hw_uint<16>& in_gauss_blur_1_in_gauss_blur_1_update_0_write31, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
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
  // in_gauss_ds_1_rd0 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[32d0, 2d1] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write0 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write0_to_in_gauss_ds_1_rd0.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd1_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd1 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[2 + 32d0, 2d1] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write2 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write2_to_in_gauss_ds_1_rd1.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd10_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd10 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[20 + 32d0, 2d1] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write20 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write20_to_in_gauss_ds_1_rd10.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write20;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd11_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd11 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[22 + 32d0, 2d1] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write22 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write22_to_in_gauss_ds_1_rd11.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write22;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd12_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd12 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[24 + 32d0, 2d1] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write24 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write24_to_in_gauss_ds_1_rd12.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write24;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd13_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd13 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[26 + 32d0, 2d1] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write26 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write26_to_in_gauss_ds_1_rd13.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write26;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd14_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd14 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[28 + 32d0, 2d1] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write28 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write28_to_in_gauss_ds_1_rd14.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write28;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd15_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd15 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[30 + 32d0, 2d1] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write30 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write30_to_in_gauss_ds_1_rd15.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write30;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd2_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd2 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[4 + 32d0, 2d1] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write4 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write4_to_in_gauss_ds_1_rd2.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd3_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd3 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[6 + 32d0, 2d1] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write6 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write6_to_in_gauss_ds_1_rd3.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd4_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd4 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[8 + 32d0, 2d1] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write8 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write8_to_in_gauss_ds_1_rd4.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd5_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd5 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[10 + 32d0, 2d1] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write10 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write10_to_in_gauss_ds_1_rd5.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd6_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd6 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[12 + 32d0, 2d1] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write12 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write12_to_in_gauss_ds_1_rd6.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd7_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd7 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[14 + 32d0, 2d1] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write14 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write14_to_in_gauss_ds_1_rd7.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd8_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd8 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[16 + 32d0, 2d1] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write16 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write16_to_in_gauss_ds_1_rd8.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write16;
  return 0;
}

inline hw_uint<16> in_gauss_ds_1_rd9_select(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_1_rd9 read pattern: { in_gauss_ds_1_update_0[d0, d1] -> in_gauss_blur_1[18 + 32d0, 2d1] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Read schedule : { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  // Write schedule: { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
  auto value_in_gauss_blur_1_in_gauss_blur_1_update_0_write18 = in_gauss_blur_1.in_gauss_blur_1_in_gauss_blur_1_update_0_write18_to_in_gauss_ds_1_rd9.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_1_in_gauss_blur_1_update_0_write18;
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
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write16
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write17
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write18
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write19
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write20
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write21
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write22
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write23
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write24
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write25
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write26
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write27
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write28
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write29
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write30
//	in_gauss_blur_1_in_gauss_blur_1_update_0_write31
inline void in_gauss_blur_1_in_gauss_blur_1_update_0_write_bundle_write(hw_uint<512>& in_gauss_blur_1_update_0_write, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
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
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write16_res = in_gauss_blur_1_update_0_write.extract<256, 271>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write16_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write16_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write17_res = in_gauss_blur_1_update_0_write.extract<272, 287>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write17_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write17_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write18_res = in_gauss_blur_1_update_0_write.extract<288, 303>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write18_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write18_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write19_res = in_gauss_blur_1_update_0_write.extract<304, 319>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write19_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write19_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write20_res = in_gauss_blur_1_update_0_write.extract<320, 335>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write20_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write20_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write21_res = in_gauss_blur_1_update_0_write.extract<336, 351>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write21_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write21_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write22_res = in_gauss_blur_1_update_0_write.extract<352, 367>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write22_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write22_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write23_res = in_gauss_blur_1_update_0_write.extract<368, 383>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write23_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write23_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write24_res = in_gauss_blur_1_update_0_write.extract<384, 399>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write24_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write24_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write25_res = in_gauss_blur_1_update_0_write.extract<400, 415>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write25_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write25_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write26_res = in_gauss_blur_1_update_0_write.extract<416, 431>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write26_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write26_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write27_res = in_gauss_blur_1_update_0_write.extract<432, 447>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write27_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write27_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write28_res = in_gauss_blur_1_update_0_write.extract<448, 463>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write28_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write28_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write29_res = in_gauss_blur_1_update_0_write.extract<464, 479>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write29_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write29_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write30_res = in_gauss_blur_1_update_0_write.extract<480, 495>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write30_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write30_res, in_gauss_blur_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_1_in_gauss_blur_1_update_0_write31_res = in_gauss_blur_1_update_0_write.extract<496, 511>();
	in_gauss_blur_1_in_gauss_blur_1_update_0_write31_write(in_gauss_blur_1_in_gauss_blur_1_update_0_write31_res, in_gauss_blur_1, d0, d1, dynamic_address);
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
//	in_gauss_ds_1_rd8
//	in_gauss_ds_1_rd9
//	in_gauss_ds_1_rd10
//	in_gauss_ds_1_rd11
//	in_gauss_ds_1_rd12
//	in_gauss_ds_1_rd13
//	in_gauss_ds_1_rd14
//	in_gauss_ds_1_rd15
inline hw_uint<256> in_gauss_blur_1_in_gauss_ds_1_update_0_read_bundle_read(in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 16
    // in_gauss_ds_1_rd0
    // in_gauss_ds_1_rd1
    // in_gauss_ds_1_rd2
    // in_gauss_ds_1_rd3
    // in_gauss_ds_1_rd4
    // in_gauss_ds_1_rd5
    // in_gauss_ds_1_rd6
    // in_gauss_ds_1_rd7
    // in_gauss_ds_1_rd8
    // in_gauss_ds_1_rd9
    // in_gauss_ds_1_rd10
    // in_gauss_ds_1_rd11
    // in_gauss_ds_1_rd12
    // in_gauss_ds_1_rd13
    // in_gauss_ds_1_rd14
    // in_gauss_ds_1_rd15

	hw_uint<256> result;
	hw_uint<16> in_gauss_ds_1_rd0_res = in_gauss_ds_1_rd0_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<0, 256>(result, in_gauss_ds_1_rd0_res);
	hw_uint<16> in_gauss_ds_1_rd1_res = in_gauss_ds_1_rd1_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<16, 256>(result, in_gauss_ds_1_rd1_res);
	hw_uint<16> in_gauss_ds_1_rd2_res = in_gauss_ds_1_rd2_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<32, 256>(result, in_gauss_ds_1_rd2_res);
	hw_uint<16> in_gauss_ds_1_rd3_res = in_gauss_ds_1_rd3_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<48, 256>(result, in_gauss_ds_1_rd3_res);
	hw_uint<16> in_gauss_ds_1_rd4_res = in_gauss_ds_1_rd4_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<64, 256>(result, in_gauss_ds_1_rd4_res);
	hw_uint<16> in_gauss_ds_1_rd5_res = in_gauss_ds_1_rd5_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<80, 256>(result, in_gauss_ds_1_rd5_res);
	hw_uint<16> in_gauss_ds_1_rd6_res = in_gauss_ds_1_rd6_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<96, 256>(result, in_gauss_ds_1_rd6_res);
	hw_uint<16> in_gauss_ds_1_rd7_res = in_gauss_ds_1_rd7_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<112, 256>(result, in_gauss_ds_1_rd7_res);
	hw_uint<16> in_gauss_ds_1_rd8_res = in_gauss_ds_1_rd8_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<128, 256>(result, in_gauss_ds_1_rd8_res);
	hw_uint<16> in_gauss_ds_1_rd9_res = in_gauss_ds_1_rd9_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<144, 256>(result, in_gauss_ds_1_rd9_res);
	hw_uint<16> in_gauss_ds_1_rd10_res = in_gauss_ds_1_rd10_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<160, 256>(result, in_gauss_ds_1_rd10_res);
	hw_uint<16> in_gauss_ds_1_rd11_res = in_gauss_ds_1_rd11_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<176, 256>(result, in_gauss_ds_1_rd11_res);
	hw_uint<16> in_gauss_ds_1_rd12_res = in_gauss_ds_1_rd12_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<192, 256>(result, in_gauss_ds_1_rd12_res);
	hw_uint<16> in_gauss_ds_1_rd13_res = in_gauss_ds_1_rd13_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<208, 256>(result, in_gauss_ds_1_rd13_res);
	hw_uint<16> in_gauss_ds_1_rd14_res = in_gauss_ds_1_rd14_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<224, 256>(result, in_gauss_ds_1_rd14_res);
	hw_uint<16> in_gauss_ds_1_rd15_res = in_gauss_ds_1_rd15_select(in_gauss_blur_1, d0, d1, dynamic_address);
	set_at<240, 256>(result, in_gauss_ds_1_rd15_res);
	return result;
}

#include "hw_classes.h"

struct in_gauss_blur_2_in_gauss_blur_2_update_0_write0_to_in_gauss_ds_2_rd0_cache {
	// RAM Box: {[-16, 960], [-2, 538]}
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
	// RAM Box: {[-14, 962], [-2, 538]}
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
	// RAM Box: {[-12, 964], [-2, 538]}
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
	// RAM Box: {[-10, 966], [-2, 538]}
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

struct in_gauss_blur_2_in_gauss_blur_2_update_0_write8_to_in_gauss_ds_2_rd4_cache {
	// RAM Box: {[-8, 968], [-2, 538]}
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

struct in_gauss_blur_2_in_gauss_blur_2_update_0_write10_to_in_gauss_ds_2_rd5_cache {
	// RAM Box: {[-6, 970], [-2, 538]}
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

struct in_gauss_blur_2_in_gauss_blur_2_update_0_write12_to_in_gauss_ds_2_rd6_cache {
	// RAM Box: {[-4, 972], [-2, 538]}
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

struct in_gauss_blur_2_in_gauss_blur_2_update_0_write14_to_in_gauss_ds_2_rd7_cache {
	// RAM Box: {[-2, 974], [-2, 538]}
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
  // # of banks: 8
  in_gauss_blur_2_in_gauss_blur_2_update_0_write0_to_in_gauss_ds_2_rd0_cache in_gauss_blur_2_in_gauss_blur_2_update_0_write0_to_in_gauss_ds_2_rd0;
  in_gauss_blur_2_in_gauss_blur_2_update_0_write2_to_in_gauss_ds_2_rd1_cache in_gauss_blur_2_in_gauss_blur_2_update_0_write2_to_in_gauss_ds_2_rd1;
  in_gauss_blur_2_in_gauss_blur_2_update_0_write4_to_in_gauss_ds_2_rd2_cache in_gauss_blur_2_in_gauss_blur_2_update_0_write4_to_in_gauss_ds_2_rd2;
  in_gauss_blur_2_in_gauss_blur_2_update_0_write6_to_in_gauss_ds_2_rd3_cache in_gauss_blur_2_in_gauss_blur_2_update_0_write6_to_in_gauss_ds_2_rd3;
  in_gauss_blur_2_in_gauss_blur_2_update_0_write8_to_in_gauss_ds_2_rd4_cache in_gauss_blur_2_in_gauss_blur_2_update_0_write8_to_in_gauss_ds_2_rd4;
  in_gauss_blur_2_in_gauss_blur_2_update_0_write10_to_in_gauss_ds_2_rd5_cache in_gauss_blur_2_in_gauss_blur_2_update_0_write10_to_in_gauss_ds_2_rd5;
  in_gauss_blur_2_in_gauss_blur_2_update_0_write12_to_in_gauss_ds_2_rd6_cache in_gauss_blur_2_in_gauss_blur_2_update_0_write12_to_in_gauss_ds_2_rd6;
  in_gauss_blur_2_in_gauss_blur_2_update_0_write14_to_in_gauss_ds_2_rd7_cache in_gauss_blur_2_in_gauss_blur_2_update_0_write14_to_in_gauss_ds_2_rd7;
};



inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write0_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write0, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
  in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write0_to_in_gauss_ds_2_rd0.push(in_gauss_blur_2_in_gauss_blur_2_update_0_write0);
}

inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write1_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write1, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write10_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write10, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
  in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write10_to_in_gauss_ds_2_rd5.push(in_gauss_blur_2_in_gauss_blur_2_update_0_write10);
}

inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write11_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write11, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write12_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write12, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
  in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write12_to_in_gauss_ds_2_rd6.push(in_gauss_blur_2_in_gauss_blur_2_update_0_write12);
}

inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write13_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write13, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write14_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write14, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
  in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write14_to_in_gauss_ds_2_rd7.push(in_gauss_blur_2_in_gauss_blur_2_update_0_write14);
}

inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write15_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write15, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
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

inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write8_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write8, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
  in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write8_to_in_gauss_ds_2_rd4.push(in_gauss_blur_2_in_gauss_blur_2_update_0_write8);
}

inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write9_write(hw_uint<16>& in_gauss_blur_2_in_gauss_blur_2_update_0_write9, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
}

inline hw_uint<16> in_gauss_ds_2_rd0_select(in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_2_rd0 read pattern: { in_gauss_ds_2_update_0[d0, d1] -> in_gauss_blur_2[16d0, 2d1] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  // Read schedule : { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  // Write schedule: { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  auto value_in_gauss_blur_2_in_gauss_blur_2_update_0_write0 = in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write0_to_in_gauss_ds_2_rd0.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_2_in_gauss_blur_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_ds_2_rd1_select(in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_2_rd1 read pattern: { in_gauss_ds_2_update_0[d0, d1] -> in_gauss_blur_2[2 + 16d0, 2d1] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  // Read schedule : { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  // Write schedule: { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  auto value_in_gauss_blur_2_in_gauss_blur_2_update_0_write2 = in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write2_to_in_gauss_ds_2_rd1.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_2_in_gauss_blur_2_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_ds_2_rd2_select(in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_2_rd2 read pattern: { in_gauss_ds_2_update_0[d0, d1] -> in_gauss_blur_2[4 + 16d0, 2d1] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  // Read schedule : { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  // Write schedule: { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  auto value_in_gauss_blur_2_in_gauss_blur_2_update_0_write4 = in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write4_to_in_gauss_ds_2_rd2.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_2_in_gauss_blur_2_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_ds_2_rd3_select(in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_2_rd3 read pattern: { in_gauss_ds_2_update_0[d0, d1] -> in_gauss_blur_2[6 + 16d0, 2d1] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  // Read schedule : { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  // Write schedule: { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  auto value_in_gauss_blur_2_in_gauss_blur_2_update_0_write6 = in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write6_to_in_gauss_ds_2_rd3.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_2_in_gauss_blur_2_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_ds_2_rd4_select(in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_2_rd4 read pattern: { in_gauss_ds_2_update_0[d0, d1] -> in_gauss_blur_2[8 + 16d0, 2d1] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  // Read schedule : { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  // Write schedule: { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  auto value_in_gauss_blur_2_in_gauss_blur_2_update_0_write8 = in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write8_to_in_gauss_ds_2_rd4.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_2_in_gauss_blur_2_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_ds_2_rd5_select(in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_2_rd5 read pattern: { in_gauss_ds_2_update_0[d0, d1] -> in_gauss_blur_2[10 + 16d0, 2d1] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  // Read schedule : { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  // Write schedule: { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  auto value_in_gauss_blur_2_in_gauss_blur_2_update_0_write10 = in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write10_to_in_gauss_ds_2_rd5.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_2_in_gauss_blur_2_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_ds_2_rd6_select(in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_2_rd6 read pattern: { in_gauss_ds_2_update_0[d0, d1] -> in_gauss_blur_2[12 + 16d0, 2d1] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  // Read schedule : { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  // Write schedule: { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  auto value_in_gauss_blur_2_in_gauss_blur_2_update_0_write12 = in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write12_to_in_gauss_ds_2_rd6.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_2_in_gauss_blur_2_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_ds_2_rd7_select(in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_2_rd7 read pattern: { in_gauss_ds_2_update_0[d0, d1] -> in_gauss_blur_2[14 + 16d0, 2d1] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  // Read schedule : { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  // Write schedule: { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  auto value_in_gauss_blur_2_in_gauss_blur_2_update_0_write14 = in_gauss_blur_2.in_gauss_blur_2_in_gauss_blur_2_update_0_write14_to_in_gauss_ds_2_rd7.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_2_in_gauss_blur_2_update_0_write14;
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
//	in_gauss_blur_2_in_gauss_blur_2_update_0_write8
//	in_gauss_blur_2_in_gauss_blur_2_update_0_write9
//	in_gauss_blur_2_in_gauss_blur_2_update_0_write10
//	in_gauss_blur_2_in_gauss_blur_2_update_0_write11
//	in_gauss_blur_2_in_gauss_blur_2_update_0_write12
//	in_gauss_blur_2_in_gauss_blur_2_update_0_write13
//	in_gauss_blur_2_in_gauss_blur_2_update_0_write14
//	in_gauss_blur_2_in_gauss_blur_2_update_0_write15
inline void in_gauss_blur_2_in_gauss_blur_2_update_0_write_bundle_write(hw_uint<256>& in_gauss_blur_2_update_0_write, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
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
	hw_uint<16> in_gauss_blur_2_in_gauss_blur_2_update_0_write8_res = in_gauss_blur_2_update_0_write.extract<128, 143>();
	in_gauss_blur_2_in_gauss_blur_2_update_0_write8_write(in_gauss_blur_2_in_gauss_blur_2_update_0_write8_res, in_gauss_blur_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_2_in_gauss_blur_2_update_0_write9_res = in_gauss_blur_2_update_0_write.extract<144, 159>();
	in_gauss_blur_2_in_gauss_blur_2_update_0_write9_write(in_gauss_blur_2_in_gauss_blur_2_update_0_write9_res, in_gauss_blur_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_2_in_gauss_blur_2_update_0_write10_res = in_gauss_blur_2_update_0_write.extract<160, 175>();
	in_gauss_blur_2_in_gauss_blur_2_update_0_write10_write(in_gauss_blur_2_in_gauss_blur_2_update_0_write10_res, in_gauss_blur_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_2_in_gauss_blur_2_update_0_write11_res = in_gauss_blur_2_update_0_write.extract<176, 191>();
	in_gauss_blur_2_in_gauss_blur_2_update_0_write11_write(in_gauss_blur_2_in_gauss_blur_2_update_0_write11_res, in_gauss_blur_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_2_in_gauss_blur_2_update_0_write12_res = in_gauss_blur_2_update_0_write.extract<192, 207>();
	in_gauss_blur_2_in_gauss_blur_2_update_0_write12_write(in_gauss_blur_2_in_gauss_blur_2_update_0_write12_res, in_gauss_blur_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_2_in_gauss_blur_2_update_0_write13_res = in_gauss_blur_2_update_0_write.extract<208, 223>();
	in_gauss_blur_2_in_gauss_blur_2_update_0_write13_write(in_gauss_blur_2_in_gauss_blur_2_update_0_write13_res, in_gauss_blur_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_2_in_gauss_blur_2_update_0_write14_res = in_gauss_blur_2_update_0_write.extract<224, 239>();
	in_gauss_blur_2_in_gauss_blur_2_update_0_write14_write(in_gauss_blur_2_in_gauss_blur_2_update_0_write14_res, in_gauss_blur_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_2_in_gauss_blur_2_update_0_write15_res = in_gauss_blur_2_update_0_write.extract<240, 255>();
	in_gauss_blur_2_in_gauss_blur_2_update_0_write15_write(in_gauss_blur_2_in_gauss_blur_2_update_0_write15_res, in_gauss_blur_2, d0, d1, dynamic_address);
}

// in_gauss_ds_2_update_0_read
//	in_gauss_ds_2_rd0
//	in_gauss_ds_2_rd1
//	in_gauss_ds_2_rd2
//	in_gauss_ds_2_rd3
//	in_gauss_ds_2_rd4
//	in_gauss_ds_2_rd5
//	in_gauss_ds_2_rd6
//	in_gauss_ds_2_rd7
inline hw_uint<128> in_gauss_blur_2_in_gauss_ds_2_update_0_read_bundle_read(in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 8
    // in_gauss_ds_2_rd0
    // in_gauss_ds_2_rd1
    // in_gauss_ds_2_rd2
    // in_gauss_ds_2_rd3
    // in_gauss_ds_2_rd4
    // in_gauss_ds_2_rd5
    // in_gauss_ds_2_rd6
    // in_gauss_ds_2_rd7

	hw_uint<128> result;
	hw_uint<16> in_gauss_ds_2_rd0_res = in_gauss_ds_2_rd0_select(in_gauss_blur_2, d0, d1, dynamic_address);
	set_at<0, 128>(result, in_gauss_ds_2_rd0_res);
	hw_uint<16> in_gauss_ds_2_rd1_res = in_gauss_ds_2_rd1_select(in_gauss_blur_2, d0, d1, dynamic_address);
	set_at<16, 128>(result, in_gauss_ds_2_rd1_res);
	hw_uint<16> in_gauss_ds_2_rd2_res = in_gauss_ds_2_rd2_select(in_gauss_blur_2, d0, d1, dynamic_address);
	set_at<32, 128>(result, in_gauss_ds_2_rd2_res);
	hw_uint<16> in_gauss_ds_2_rd3_res = in_gauss_ds_2_rd3_select(in_gauss_blur_2, d0, d1, dynamic_address);
	set_at<48, 128>(result, in_gauss_ds_2_rd3_res);
	hw_uint<16> in_gauss_ds_2_rd4_res = in_gauss_ds_2_rd4_select(in_gauss_blur_2, d0, d1, dynamic_address);
	set_at<64, 128>(result, in_gauss_ds_2_rd4_res);
	hw_uint<16> in_gauss_ds_2_rd5_res = in_gauss_ds_2_rd5_select(in_gauss_blur_2, d0, d1, dynamic_address);
	set_at<80, 128>(result, in_gauss_ds_2_rd5_res);
	hw_uint<16> in_gauss_ds_2_rd6_res = in_gauss_ds_2_rd6_select(in_gauss_blur_2, d0, d1, dynamic_address);
	set_at<96, 128>(result, in_gauss_ds_2_rd6_res);
	hw_uint<16> in_gauss_ds_2_rd7_res = in_gauss_ds_2_rd7_select(in_gauss_blur_2, d0, d1, dynamic_address);
	set_at<112, 128>(result, in_gauss_ds_2_rd7_res);
	return result;
}

#include "hw_classes.h"

struct in_gauss_blur_3_in_gauss_blur_3_update_0_write0_to_in_gauss_ds_3_rd0_cache {
	// RAM Box: {[0, 472], [0, 268]}
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
	// RAM Box: {[2, 474], [0, 268]}
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

struct in_gauss_blur_3_in_gauss_blur_3_update_0_write4_to_in_gauss_ds_3_rd2_cache {
	// RAM Box: {[4, 476], [0, 268]}
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

struct in_gauss_blur_3_in_gauss_blur_3_update_0_write6_to_in_gauss_ds_3_rd3_cache {
	// RAM Box: {[6, 478], [0, 268]}
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
  // # of banks: 4
  in_gauss_blur_3_in_gauss_blur_3_update_0_write0_to_in_gauss_ds_3_rd0_cache in_gauss_blur_3_in_gauss_blur_3_update_0_write0_to_in_gauss_ds_3_rd0;
  in_gauss_blur_3_in_gauss_blur_3_update_0_write2_to_in_gauss_ds_3_rd1_cache in_gauss_blur_3_in_gauss_blur_3_update_0_write2_to_in_gauss_ds_3_rd1;
  in_gauss_blur_3_in_gauss_blur_3_update_0_write4_to_in_gauss_ds_3_rd2_cache in_gauss_blur_3_in_gauss_blur_3_update_0_write4_to_in_gauss_ds_3_rd2;
  in_gauss_blur_3_in_gauss_blur_3_update_0_write6_to_in_gauss_ds_3_rd3_cache in_gauss_blur_3_in_gauss_blur_3_update_0_write6_to_in_gauss_ds_3_rd3;
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

inline void in_gauss_blur_3_in_gauss_blur_3_update_0_write4_write(hw_uint<16>& in_gauss_blur_3_in_gauss_blur_3_update_0_write4, in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
  in_gauss_blur_3.in_gauss_blur_3_in_gauss_blur_3_update_0_write4_to_in_gauss_ds_3_rd2.push(in_gauss_blur_3_in_gauss_blur_3_update_0_write4);
}

inline void in_gauss_blur_3_in_gauss_blur_3_update_0_write5_write(hw_uint<16>& in_gauss_blur_3_in_gauss_blur_3_update_0_write5, in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
}

inline void in_gauss_blur_3_in_gauss_blur_3_update_0_write6_write(hw_uint<16>& in_gauss_blur_3_in_gauss_blur_3_update_0_write6, in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
  in_gauss_blur_3.in_gauss_blur_3_in_gauss_blur_3_update_0_write6_to_in_gauss_ds_3_rd3.push(in_gauss_blur_3_in_gauss_blur_3_update_0_write6);
}

inline void in_gauss_blur_3_in_gauss_blur_3_update_0_write7_write(hw_uint<16>& in_gauss_blur_3_in_gauss_blur_3_update_0_write7, in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
}

inline hw_uint<16> in_gauss_ds_3_rd0_select(in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_3_rd0 read pattern: { in_gauss_ds_3_update_0[d0, d1] -> in_gauss_blur_3[8d0, 2d1] : 0 <= d0 <= 59 and 0 <= d1 <= 134 }
  // Read schedule : { in_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 3 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 134 }
  // Write schedule: { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  auto value_in_gauss_blur_3_in_gauss_blur_3_update_0_write0 = in_gauss_blur_3.in_gauss_blur_3_in_gauss_blur_3_update_0_write0_to_in_gauss_ds_3_rd0.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_3_in_gauss_blur_3_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_ds_3_rd1_select(in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_3_rd1 read pattern: { in_gauss_ds_3_update_0[d0, d1] -> in_gauss_blur_3[2 + 8d0, 2d1] : 0 <= d0 <= 59 and 0 <= d1 <= 134 }
  // Read schedule : { in_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 3 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 134 }
  // Write schedule: { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  auto value_in_gauss_blur_3_in_gauss_blur_3_update_0_write2 = in_gauss_blur_3.in_gauss_blur_3_in_gauss_blur_3_update_0_write2_to_in_gauss_ds_3_rd1.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_3_in_gauss_blur_3_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_ds_3_rd2_select(in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_3_rd2 read pattern: { in_gauss_ds_3_update_0[d0, d1] -> in_gauss_blur_3[4 + 8d0, 2d1] : 0 <= d0 <= 59 and 0 <= d1 <= 134 }
  // Read schedule : { in_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 3 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 134 }
  // Write schedule: { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  auto value_in_gauss_blur_3_in_gauss_blur_3_update_0_write4 = in_gauss_blur_3.in_gauss_blur_3_in_gauss_blur_3_update_0_write4_to_in_gauss_ds_3_rd2.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_3_in_gauss_blur_3_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_ds_3_rd3_select(in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_ds_3_rd3 read pattern: { in_gauss_ds_3_update_0[d0, d1] -> in_gauss_blur_3[6 + 8d0, 2d1] : 0 <= d0 <= 59 and 0 <= d1 <= 134 }
  // Read schedule : { in_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 3 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 134 }
  // Write schedule: { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  auto value_in_gauss_blur_3_in_gauss_blur_3_update_0_write6 = in_gauss_blur_3.in_gauss_blur_3_in_gauss_blur_3_update_0_write6_to_in_gauss_ds_3_rd3.peek(/* one reader or all rams */ 0);
  return value_in_gauss_blur_3_in_gauss_blur_3_update_0_write6;
  return 0;
}

// # of bundles = 2
// in_gauss_blur_3_update_0_write
//	in_gauss_blur_3_in_gauss_blur_3_update_0_write0
//	in_gauss_blur_3_in_gauss_blur_3_update_0_write1
//	in_gauss_blur_3_in_gauss_blur_3_update_0_write2
//	in_gauss_blur_3_in_gauss_blur_3_update_0_write3
//	in_gauss_blur_3_in_gauss_blur_3_update_0_write4
//	in_gauss_blur_3_in_gauss_blur_3_update_0_write5
//	in_gauss_blur_3_in_gauss_blur_3_update_0_write6
//	in_gauss_blur_3_in_gauss_blur_3_update_0_write7
inline void in_gauss_blur_3_in_gauss_blur_3_update_0_write_bundle_write(hw_uint<128>& in_gauss_blur_3_update_0_write, in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_blur_3_in_gauss_blur_3_update_0_write0_res = in_gauss_blur_3_update_0_write.extract<0, 15>();
	in_gauss_blur_3_in_gauss_blur_3_update_0_write0_write(in_gauss_blur_3_in_gauss_blur_3_update_0_write0_res, in_gauss_blur_3, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_3_in_gauss_blur_3_update_0_write1_res = in_gauss_blur_3_update_0_write.extract<16, 31>();
	in_gauss_blur_3_in_gauss_blur_3_update_0_write1_write(in_gauss_blur_3_in_gauss_blur_3_update_0_write1_res, in_gauss_blur_3, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_3_in_gauss_blur_3_update_0_write2_res = in_gauss_blur_3_update_0_write.extract<32, 47>();
	in_gauss_blur_3_in_gauss_blur_3_update_0_write2_write(in_gauss_blur_3_in_gauss_blur_3_update_0_write2_res, in_gauss_blur_3, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_3_in_gauss_blur_3_update_0_write3_res = in_gauss_blur_3_update_0_write.extract<48, 63>();
	in_gauss_blur_3_in_gauss_blur_3_update_0_write3_write(in_gauss_blur_3_in_gauss_blur_3_update_0_write3_res, in_gauss_blur_3, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_3_in_gauss_blur_3_update_0_write4_res = in_gauss_blur_3_update_0_write.extract<64, 79>();
	in_gauss_blur_3_in_gauss_blur_3_update_0_write4_write(in_gauss_blur_3_in_gauss_blur_3_update_0_write4_res, in_gauss_blur_3, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_3_in_gauss_blur_3_update_0_write5_res = in_gauss_blur_3_update_0_write.extract<80, 95>();
	in_gauss_blur_3_in_gauss_blur_3_update_0_write5_write(in_gauss_blur_3_in_gauss_blur_3_update_0_write5_res, in_gauss_blur_3, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_3_in_gauss_blur_3_update_0_write6_res = in_gauss_blur_3_update_0_write.extract<96, 111>();
	in_gauss_blur_3_in_gauss_blur_3_update_0_write6_write(in_gauss_blur_3_in_gauss_blur_3_update_0_write6_res, in_gauss_blur_3, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_blur_3_in_gauss_blur_3_update_0_write7_res = in_gauss_blur_3_update_0_write.extract<112, 127>();
	in_gauss_blur_3_in_gauss_blur_3_update_0_write7_write(in_gauss_blur_3_in_gauss_blur_3_update_0_write7_res, in_gauss_blur_3, d0, d1, dynamic_address);
}

// in_gauss_ds_3_update_0_read
//	in_gauss_ds_3_rd0
//	in_gauss_ds_3_rd1
//	in_gauss_ds_3_rd2
//	in_gauss_ds_3_rd3
inline hw_uint<64> in_gauss_blur_3_in_gauss_ds_3_update_0_read_bundle_read(in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // in_gauss_ds_3_rd0
    // in_gauss_ds_3_rd1
    // in_gauss_ds_3_rd2
    // in_gauss_ds_3_rd3

	hw_uint<64> result;
	hw_uint<16> in_gauss_ds_3_rd0_res = in_gauss_ds_3_rd0_select(in_gauss_blur_3, d0, d1, dynamic_address);
	set_at<0, 64>(result, in_gauss_ds_3_rd0_res);
	hw_uint<16> in_gauss_ds_3_rd1_res = in_gauss_ds_3_rd1_select(in_gauss_blur_3, d0, d1, dynamic_address);
	set_at<16, 64>(result, in_gauss_ds_3_rd1_res);
	hw_uint<16> in_gauss_ds_3_rd2_res = in_gauss_ds_3_rd2_select(in_gauss_blur_3, d0, d1, dynamic_address);
	set_at<32, 64>(result, in_gauss_ds_3_rd2_res);
	hw_uint<16> in_gauss_ds_3_rd3_res = in_gauss_ds_3_rd3_select(in_gauss_blur_3, d0, d1, dynamic_address);
	set_at<48, 64>(result, in_gauss_ds_3_rd3_res);
	return result;
}

#include "hw_classes.h"

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[-16, 976], [-3, 539]}
	// Capacity: 130
	// # of read delays: 6
  // 0, 1, 64, 65, 128, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 62> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 62> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


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

	inline hw_uint<16> peek_127() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_128() {
		return f8;
	}

	inline hw_uint<16> peek_129() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 62
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 62 reading from capacity: 1
    f7.push(f6);
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

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9_cache {
	// RAM Box: {[-15, 961], [-3, 539]}
	// Capacity: 130
	// # of read delays: 4
  // 0, 1, 65, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 63> f5;
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

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_129() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write10_merged_banks_9_cache {
	// RAM Box: {[-6, 970], [-3, 539]}
	// Capacity: 130
	// # of read delays: 4
  // 0, 1, 65, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 63> f5;
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

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_129() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write11_merged_banks_9_cache {
	// RAM Box: {[-5, 971], [-3, 539]}
	// Capacity: 130
	// # of read delays: 4
  // 0, 1, 65, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 63> f5;
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

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_129() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write12_merged_banks_9_cache {
	// RAM Box: {[-4, 972], [-3, 539]}
	// Capacity: 130
	// # of read delays: 4
  // 0, 1, 65, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 63> f5;
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

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_129() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write13_merged_banks_9_cache {
	// RAM Box: {[-3, 973], [-3, 539]}
	// Capacity: 130
	// # of read delays: 4
  // 0, 1, 65, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 63> f5;
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

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_129() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write14_merged_banks_9_cache {
	// RAM Box: {[-2, 974], [-3, 539]}
	// Capacity: 130
	// # of read delays: 4
  // 0, 1, 65, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 63> f5;
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

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_129() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write15_merged_banks_9_cache {
	// RAM Box: {[-17, 975], [-3, 539]}
	// Capacity: 131
	// # of read delays: 7
  // 0, 1, 2, 65, 66, 129, 130
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 62> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 62> f9;
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

	inline hw_uint<16> peek_64() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_65() {
		return f6;
	}

	inline hw_uint<16> peek_66() {
		return f8;
	}

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_129() {
		return f10;
	}

	inline hw_uint<16> peek_130() {
		return f12;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 62
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 62 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 62
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 62 reading from capacity: 1
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

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9_cache {
	// RAM Box: {[-14, 962], [-3, 539]}
	// Capacity: 130
	// # of read delays: 4
  // 0, 1, 65, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 63> f5;
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

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_129() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9_cache {
	// RAM Box: {[-13, 963], [-3, 539]}
	// Capacity: 130
	// # of read delays: 4
  // 0, 1, 65, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 63> f5;
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

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_129() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write4_merged_banks_9_cache {
	// RAM Box: {[-12, 964], [-3, 539]}
	// Capacity: 130
	// # of read delays: 4
  // 0, 1, 65, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 63> f5;
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

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_129() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write5_merged_banks_9_cache {
	// RAM Box: {[-11, 965], [-3, 539]}
	// Capacity: 130
	// # of read delays: 4
  // 0, 1, 65, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 63> f5;
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

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_129() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write6_merged_banks_9_cache {
	// RAM Box: {[-10, 966], [-3, 539]}
	// Capacity: 130
	// # of read delays: 4
  // 0, 1, 65, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 63> f5;
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

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_129() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write7_merged_banks_9_cache {
	// RAM Box: {[-9, 967], [-3, 539]}
	// Capacity: 130
	// # of read delays: 4
  // 0, 1, 65, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 63> f5;
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

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_129() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write8_merged_banks_9_cache {
	// RAM Box: {[-8, 968], [-3, 539]}
	// Capacity: 130
	// # of read delays: 4
  // 0, 1, 65, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 63> f5;
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

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_129() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_1_in_gauss_ds_1_update_0_write9_merged_banks_9_cache {
	// RAM Box: {[-7, 969], [-3, 539]}
	// Capacity: 130
	// # of read delays: 4
  // 0, 1, 65, 129
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 63> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 63> f5;
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

	inline hw_uint<16> peek_128() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_129() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 63
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 63 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_1_cache {
  // # of banks: 16
  in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9;
  in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9;
  in_gauss_ds_1_in_gauss_ds_1_update_0_write10_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write10_merged_banks_9;
  in_gauss_ds_1_in_gauss_ds_1_update_0_write11_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write11_merged_banks_9;
  in_gauss_ds_1_in_gauss_ds_1_update_0_write12_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write12_merged_banks_9;
  in_gauss_ds_1_in_gauss_ds_1_update_0_write13_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write13_merged_banks_9;
  in_gauss_ds_1_in_gauss_ds_1_update_0_write14_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write14_merged_banks_9;
  in_gauss_ds_1_in_gauss_ds_1_update_0_write15_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write15_merged_banks_9;
  in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9;
  in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9;
  in_gauss_ds_1_in_gauss_ds_1_update_0_write4_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write4_merged_banks_9;
  in_gauss_ds_1_in_gauss_ds_1_update_0_write5_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write5_merged_banks_9;
  in_gauss_ds_1_in_gauss_ds_1_update_0_write6_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write6_merged_banks_9;
  in_gauss_ds_1_in_gauss_ds_1_update_0_write7_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write7_merged_banks_9;
  in_gauss_ds_1_in_gauss_ds_1_update_0_write8_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write8_merged_banks_9;
  in_gauss_ds_1_in_gauss_ds_1_update_0_write9_merged_banks_9_cache in_gauss_ds_1_in_gauss_ds_1_update_0_write9_merged_banks_9;
};



inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write0_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write0, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.push(in_gauss_ds_1_in_gauss_ds_1_update_0_write0);
}

inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write1_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write1, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.push(in_gauss_ds_1_in_gauss_ds_1_update_0_write1);
}

inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write10_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write10, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write10_merged_banks_9.push(in_gauss_ds_1_in_gauss_ds_1_update_0_write10);
}

inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write11_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write11, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write11_merged_banks_9.push(in_gauss_ds_1_in_gauss_ds_1_update_0_write11);
}

inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write12_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write12, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write12_merged_banks_9.push(in_gauss_ds_1_in_gauss_ds_1_update_0_write12);
}

inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write13_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write13, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write13_merged_banks_9.push(in_gauss_ds_1_in_gauss_ds_1_update_0_write13);
}

inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write14_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write14, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write14_merged_banks_9.push(in_gauss_ds_1_in_gauss_ds_1_update_0_write14);
}

inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write15_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write15, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write15_merged_banks_9.push(in_gauss_ds_1_in_gauss_ds_1_update_0_write15);
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

inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write8_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write8, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write8_merged_banks_9.push(in_gauss_ds_1_in_gauss_ds_1_update_0_write8);
}

inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write9_write(hw_uint<16>& in_gauss_ds_1_in_gauss_ds_1_update_0_write9, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write9_merged_banks_9.push(in_gauss_ds_1_in_gauss_ds_1_update_0_write9);
}

inline hw_uint<16> in_gauss_blur_2_rd0_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd0 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[-1 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write15 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write15_merged_banks_9.peek_130();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd1_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd1 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[-1 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write15 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write15_merged_banks_9.peek_66();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd10_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd10 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd100_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd100 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[10 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write10 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write10_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd101_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd101 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[10 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write10 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write10_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd102_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd102 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[11 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write11 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write11_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd103_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd103 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[11 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write11 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write11_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd104_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd104 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[11 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write11 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write11_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd105_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd105 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[12 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write12 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write12_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd106_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd106 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[12 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write12 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write12_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd107_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd107 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[12 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write12 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write12_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd108_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd108 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[11 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write11 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write11_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd109_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd109 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[11 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write11 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write11_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd11_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd11 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd110_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd110 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[11 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write11 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write11_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd111_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd111 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[12 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write12 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write12_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd112_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd112 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[12 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write12 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write12_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd113_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd113 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[12 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write12 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write12_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd114_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd114 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[13 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write13 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write13_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd115_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd115 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[13 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write13 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write13_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd116_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd116 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[13 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write13 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write13_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd117_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd117 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[12 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write12 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write12_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd118_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd118 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[12 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write12 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write12_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd119_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd119 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[12 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write12 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write12_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write12;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd12_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd12 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd120_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd120 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[13 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write13 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write13_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd121_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd121 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[13 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write13 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write13_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd122_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd122 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[13 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write13 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write13_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd123_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd123 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[14 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write14 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write14_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd124_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd124 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[14 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write14 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write14_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd125_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd125 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[14 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write14 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write14_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd126_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd126 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[13 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write13 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write13_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd127_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd127 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[13 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write13 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write13_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd128_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd128 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[13 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write13 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write13_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write13;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd129_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd129 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[14 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write14 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write14_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd13_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd13 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd130_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd130 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[14 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write14 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write14_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd131_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd131 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[14 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write14 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write14_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd132_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd132 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[15 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write15 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write15_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd133_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd133 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[15 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write15 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write15_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd134_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd134 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[15 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write15 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write15_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd135_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd135 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[14 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write14 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write14_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd136_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd136 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[14 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write14 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write14_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd137_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd137 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[14 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write14 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write14_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write14;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd138_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd138 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[15 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write15 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write15_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd139_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd139 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[15 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write15 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write15_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd14_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd14 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd140_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd140 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[15 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write15 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write15_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd141_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd141 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[16 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_128();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd142_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd142 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[16 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_64();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd143_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd143 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[16 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_0();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd15_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd15 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd16_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd16 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd17_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd17 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd18_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd18 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd19_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd19 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd2_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd2 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[-1 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write15 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write15_merged_banks_9.peek_2();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write15;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd20_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd20 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd21_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd21 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd22_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd22 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd23_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd23 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd24_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd24 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd25_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd25 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd26_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd26 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd27_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd27 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd28_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd28 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd29_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd29 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[2 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write2_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd3_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd3 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd30_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd30 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd31_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd31 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd32_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd32 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd33_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd33 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write4_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd34_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd34 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write4_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd35_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd35 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write4_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd36_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd36 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd37_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd37 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd38_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd38 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[3 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write3_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd39_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd39 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write4_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd4_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd4 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd40_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd40 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write4_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd41_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd41 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write4_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd42_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd42 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[5 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write5_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd43_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd43 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[5 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write5_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd44_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd44 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[5 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write5_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd45_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd45 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write4_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd46_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd46 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write4_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd47_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd47 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[4 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write4_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd48_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd48 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[5 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write5_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd49_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd49 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[5 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write5_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd5_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd5 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd50_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd50 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[5 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write5_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd51_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd51 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[6 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write6_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd52_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd52 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[6 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write6_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd53_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd53 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[6 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write6_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd54_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd54 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[5 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write5_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd55_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd55 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[5 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write5_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd56_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd56 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[5 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write5_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd57_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd57 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[6 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write6_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd58_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd58 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[6 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write6_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd59_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd59 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[6 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write6_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd6_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd6 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd60_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd60 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[7 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write7_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd61_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd61 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[7 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write7_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd62_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd62 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[7 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write7_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd63_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd63 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[6 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write6_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd64_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd64 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[6 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write6_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd65_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd65 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[6 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write6_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd66_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd66 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[7 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write7_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd67_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd67 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[7 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write7_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd68_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd68 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[7 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write7_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd69_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd69 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[8 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write8 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write8_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd7_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd7 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd70_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd70 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[8 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write8 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write8_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd71_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd71 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[8 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write8 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write8_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd72_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd72 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[7 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write7_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd73_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd73 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[7 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write7_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd74_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd74 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[7 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write7_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd75_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd75 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[8 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write8 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write8_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd76_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd76 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[8 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write8 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write8_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd77_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd77 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[8 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write8 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write8_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd78_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd78 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[9 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write9 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write9_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd79_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd79 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[9 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write9 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write9_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd8_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd8 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[1 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write1_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd80_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd80 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[9 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write9 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write9_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd81_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd81 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[8 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write8 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write8_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd82_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd82 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[8 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write8 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write8_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd83_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd83 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[8 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write8 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write8_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write8;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd84_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd84 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[9 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write9 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write9_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd85_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd85 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[9 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write9 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write9_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd86_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd86 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[9 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write9 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write9_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd87_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd87 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[10 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write10 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write10_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd88_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd88 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[10 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write10 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write10_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd89_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd89 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[10 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write10 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write10_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd9_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd9 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write0_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd90_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd90 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[9 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write9 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write9_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd91_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd91 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[9 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write9 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write9_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd92_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd92 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[9 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write9 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write9_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write9;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd93_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd93 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[10 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write10 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write10_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd94_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd94 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[10 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write10 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write10_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd95_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd95 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[10 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write10 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write10_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write10;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd96_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd96 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[11 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write11 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write11_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd97_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd97 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[11 + 16d0, d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write11 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write11_merged_banks_9.peek_65();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd98_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd98 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[11 + 16d0, 1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write11 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write11_merged_banks_9.peek_1();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write11;
  return 0;
}

inline hw_uint<16> in_gauss_blur_2_rd99_select(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_2_rd99 read pattern: { in_gauss_blur_2_update_0[d0, d1] -> in_gauss_ds_1[10 + 16d0, -1 + d1] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Read schedule : { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
  // Write schedule: { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
  auto value_in_gauss_ds_1_in_gauss_ds_1_update_0_write10 = in_gauss_ds_1.in_gauss_ds_1_in_gauss_ds_1_update_0_write10_merged_banks_9.peek_129();
  return value_in_gauss_ds_1_in_gauss_ds_1_update_0_write10;
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
//	in_gauss_blur_2_rd72
//	in_gauss_blur_2_rd73
//	in_gauss_blur_2_rd74
//	in_gauss_blur_2_rd75
//	in_gauss_blur_2_rd76
//	in_gauss_blur_2_rd77
//	in_gauss_blur_2_rd78
//	in_gauss_blur_2_rd79
//	in_gauss_blur_2_rd80
//	in_gauss_blur_2_rd81
//	in_gauss_blur_2_rd82
//	in_gauss_blur_2_rd83
//	in_gauss_blur_2_rd84
//	in_gauss_blur_2_rd85
//	in_gauss_blur_2_rd86
//	in_gauss_blur_2_rd87
//	in_gauss_blur_2_rd88
//	in_gauss_blur_2_rd89
//	in_gauss_blur_2_rd90
//	in_gauss_blur_2_rd91
//	in_gauss_blur_2_rd92
//	in_gauss_blur_2_rd93
//	in_gauss_blur_2_rd94
//	in_gauss_blur_2_rd95
//	in_gauss_blur_2_rd96
//	in_gauss_blur_2_rd97
//	in_gauss_blur_2_rd98
//	in_gauss_blur_2_rd99
//	in_gauss_blur_2_rd100
//	in_gauss_blur_2_rd101
//	in_gauss_blur_2_rd102
//	in_gauss_blur_2_rd103
//	in_gauss_blur_2_rd104
//	in_gauss_blur_2_rd105
//	in_gauss_blur_2_rd106
//	in_gauss_blur_2_rd107
//	in_gauss_blur_2_rd108
//	in_gauss_blur_2_rd109
//	in_gauss_blur_2_rd110
//	in_gauss_blur_2_rd111
//	in_gauss_blur_2_rd112
//	in_gauss_blur_2_rd113
//	in_gauss_blur_2_rd114
//	in_gauss_blur_2_rd115
//	in_gauss_blur_2_rd116
//	in_gauss_blur_2_rd117
//	in_gauss_blur_2_rd118
//	in_gauss_blur_2_rd119
//	in_gauss_blur_2_rd120
//	in_gauss_blur_2_rd121
//	in_gauss_blur_2_rd122
//	in_gauss_blur_2_rd123
//	in_gauss_blur_2_rd124
//	in_gauss_blur_2_rd125
//	in_gauss_blur_2_rd126
//	in_gauss_blur_2_rd127
//	in_gauss_blur_2_rd128
//	in_gauss_blur_2_rd129
//	in_gauss_blur_2_rd130
//	in_gauss_blur_2_rd131
//	in_gauss_blur_2_rd132
//	in_gauss_blur_2_rd133
//	in_gauss_blur_2_rd134
//	in_gauss_blur_2_rd135
//	in_gauss_blur_2_rd136
//	in_gauss_blur_2_rd137
//	in_gauss_blur_2_rd138
//	in_gauss_blur_2_rd139
//	in_gauss_blur_2_rd140
//	in_gauss_blur_2_rd141
//	in_gauss_blur_2_rd142
//	in_gauss_blur_2_rd143
inline hw_uint<2304> in_gauss_ds_1_in_gauss_blur_2_update_0_read_bundle_read(in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 144
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
    // in_gauss_blur_2_rd72
    // in_gauss_blur_2_rd73
    // in_gauss_blur_2_rd74
    // in_gauss_blur_2_rd75
    // in_gauss_blur_2_rd76
    // in_gauss_blur_2_rd77
    // in_gauss_blur_2_rd78
    // in_gauss_blur_2_rd79
    // in_gauss_blur_2_rd80
    // in_gauss_blur_2_rd81
    // in_gauss_blur_2_rd82
    // in_gauss_blur_2_rd83
    // in_gauss_blur_2_rd84
    // in_gauss_blur_2_rd85
    // in_gauss_blur_2_rd86
    // in_gauss_blur_2_rd87
    // in_gauss_blur_2_rd88
    // in_gauss_blur_2_rd89
    // in_gauss_blur_2_rd90
    // in_gauss_blur_2_rd91
    // in_gauss_blur_2_rd92
    // in_gauss_blur_2_rd93
    // in_gauss_blur_2_rd94
    // in_gauss_blur_2_rd95
    // in_gauss_blur_2_rd96
    // in_gauss_blur_2_rd97
    // in_gauss_blur_2_rd98
    // in_gauss_blur_2_rd99
    // in_gauss_blur_2_rd100
    // in_gauss_blur_2_rd101
    // in_gauss_blur_2_rd102
    // in_gauss_blur_2_rd103
    // in_gauss_blur_2_rd104
    // in_gauss_blur_2_rd105
    // in_gauss_blur_2_rd106
    // in_gauss_blur_2_rd107
    // in_gauss_blur_2_rd108
    // in_gauss_blur_2_rd109
    // in_gauss_blur_2_rd110
    // in_gauss_blur_2_rd111
    // in_gauss_blur_2_rd112
    // in_gauss_blur_2_rd113
    // in_gauss_blur_2_rd114
    // in_gauss_blur_2_rd115
    // in_gauss_blur_2_rd116
    // in_gauss_blur_2_rd117
    // in_gauss_blur_2_rd118
    // in_gauss_blur_2_rd119
    // in_gauss_blur_2_rd120
    // in_gauss_blur_2_rd121
    // in_gauss_blur_2_rd122
    // in_gauss_blur_2_rd123
    // in_gauss_blur_2_rd124
    // in_gauss_blur_2_rd125
    // in_gauss_blur_2_rd126
    // in_gauss_blur_2_rd127
    // in_gauss_blur_2_rd128
    // in_gauss_blur_2_rd129
    // in_gauss_blur_2_rd130
    // in_gauss_blur_2_rd131
    // in_gauss_blur_2_rd132
    // in_gauss_blur_2_rd133
    // in_gauss_blur_2_rd134
    // in_gauss_blur_2_rd135
    // in_gauss_blur_2_rd136
    // in_gauss_blur_2_rd137
    // in_gauss_blur_2_rd138
    // in_gauss_blur_2_rd139
    // in_gauss_blur_2_rd140
    // in_gauss_blur_2_rd141
    // in_gauss_blur_2_rd142
    // in_gauss_blur_2_rd143

	hw_uint<2304> result;
	hw_uint<16> in_gauss_blur_2_rd0_res = in_gauss_blur_2_rd0_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<0, 2304>(result, in_gauss_blur_2_rd0_res);
	hw_uint<16> in_gauss_blur_2_rd1_res = in_gauss_blur_2_rd1_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<16, 2304>(result, in_gauss_blur_2_rd1_res);
	hw_uint<16> in_gauss_blur_2_rd2_res = in_gauss_blur_2_rd2_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<32, 2304>(result, in_gauss_blur_2_rd2_res);
	hw_uint<16> in_gauss_blur_2_rd3_res = in_gauss_blur_2_rd3_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<48, 2304>(result, in_gauss_blur_2_rd3_res);
	hw_uint<16> in_gauss_blur_2_rd4_res = in_gauss_blur_2_rd4_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<64, 2304>(result, in_gauss_blur_2_rd4_res);
	hw_uint<16> in_gauss_blur_2_rd5_res = in_gauss_blur_2_rd5_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<80, 2304>(result, in_gauss_blur_2_rd5_res);
	hw_uint<16> in_gauss_blur_2_rd6_res = in_gauss_blur_2_rd6_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<96, 2304>(result, in_gauss_blur_2_rd6_res);
	hw_uint<16> in_gauss_blur_2_rd7_res = in_gauss_blur_2_rd7_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<112, 2304>(result, in_gauss_blur_2_rd7_res);
	hw_uint<16> in_gauss_blur_2_rd8_res = in_gauss_blur_2_rd8_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<128, 2304>(result, in_gauss_blur_2_rd8_res);
	hw_uint<16> in_gauss_blur_2_rd9_res = in_gauss_blur_2_rd9_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<144, 2304>(result, in_gauss_blur_2_rd9_res);
	hw_uint<16> in_gauss_blur_2_rd10_res = in_gauss_blur_2_rd10_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<160, 2304>(result, in_gauss_blur_2_rd10_res);
	hw_uint<16> in_gauss_blur_2_rd11_res = in_gauss_blur_2_rd11_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<176, 2304>(result, in_gauss_blur_2_rd11_res);
	hw_uint<16> in_gauss_blur_2_rd12_res = in_gauss_blur_2_rd12_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<192, 2304>(result, in_gauss_blur_2_rd12_res);
	hw_uint<16> in_gauss_blur_2_rd13_res = in_gauss_blur_2_rd13_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<208, 2304>(result, in_gauss_blur_2_rd13_res);
	hw_uint<16> in_gauss_blur_2_rd14_res = in_gauss_blur_2_rd14_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<224, 2304>(result, in_gauss_blur_2_rd14_res);
	hw_uint<16> in_gauss_blur_2_rd15_res = in_gauss_blur_2_rd15_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<240, 2304>(result, in_gauss_blur_2_rd15_res);
	hw_uint<16> in_gauss_blur_2_rd16_res = in_gauss_blur_2_rd16_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<256, 2304>(result, in_gauss_blur_2_rd16_res);
	hw_uint<16> in_gauss_blur_2_rd17_res = in_gauss_blur_2_rd17_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<272, 2304>(result, in_gauss_blur_2_rd17_res);
	hw_uint<16> in_gauss_blur_2_rd18_res = in_gauss_blur_2_rd18_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<288, 2304>(result, in_gauss_blur_2_rd18_res);
	hw_uint<16> in_gauss_blur_2_rd19_res = in_gauss_blur_2_rd19_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<304, 2304>(result, in_gauss_blur_2_rd19_res);
	hw_uint<16> in_gauss_blur_2_rd20_res = in_gauss_blur_2_rd20_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<320, 2304>(result, in_gauss_blur_2_rd20_res);
	hw_uint<16> in_gauss_blur_2_rd21_res = in_gauss_blur_2_rd21_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<336, 2304>(result, in_gauss_blur_2_rd21_res);
	hw_uint<16> in_gauss_blur_2_rd22_res = in_gauss_blur_2_rd22_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<352, 2304>(result, in_gauss_blur_2_rd22_res);
	hw_uint<16> in_gauss_blur_2_rd23_res = in_gauss_blur_2_rd23_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<368, 2304>(result, in_gauss_blur_2_rd23_res);
	hw_uint<16> in_gauss_blur_2_rd24_res = in_gauss_blur_2_rd24_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<384, 2304>(result, in_gauss_blur_2_rd24_res);
	hw_uint<16> in_gauss_blur_2_rd25_res = in_gauss_blur_2_rd25_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<400, 2304>(result, in_gauss_blur_2_rd25_res);
	hw_uint<16> in_gauss_blur_2_rd26_res = in_gauss_blur_2_rd26_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<416, 2304>(result, in_gauss_blur_2_rd26_res);
	hw_uint<16> in_gauss_blur_2_rd27_res = in_gauss_blur_2_rd27_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<432, 2304>(result, in_gauss_blur_2_rd27_res);
	hw_uint<16> in_gauss_blur_2_rd28_res = in_gauss_blur_2_rd28_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<448, 2304>(result, in_gauss_blur_2_rd28_res);
	hw_uint<16> in_gauss_blur_2_rd29_res = in_gauss_blur_2_rd29_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<464, 2304>(result, in_gauss_blur_2_rd29_res);
	hw_uint<16> in_gauss_blur_2_rd30_res = in_gauss_blur_2_rd30_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<480, 2304>(result, in_gauss_blur_2_rd30_res);
	hw_uint<16> in_gauss_blur_2_rd31_res = in_gauss_blur_2_rd31_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<496, 2304>(result, in_gauss_blur_2_rd31_res);
	hw_uint<16> in_gauss_blur_2_rd32_res = in_gauss_blur_2_rd32_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<512, 2304>(result, in_gauss_blur_2_rd32_res);
	hw_uint<16> in_gauss_blur_2_rd33_res = in_gauss_blur_2_rd33_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<528, 2304>(result, in_gauss_blur_2_rd33_res);
	hw_uint<16> in_gauss_blur_2_rd34_res = in_gauss_blur_2_rd34_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<544, 2304>(result, in_gauss_blur_2_rd34_res);
	hw_uint<16> in_gauss_blur_2_rd35_res = in_gauss_blur_2_rd35_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<560, 2304>(result, in_gauss_blur_2_rd35_res);
	hw_uint<16> in_gauss_blur_2_rd36_res = in_gauss_blur_2_rd36_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<576, 2304>(result, in_gauss_blur_2_rd36_res);
	hw_uint<16> in_gauss_blur_2_rd37_res = in_gauss_blur_2_rd37_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<592, 2304>(result, in_gauss_blur_2_rd37_res);
	hw_uint<16> in_gauss_blur_2_rd38_res = in_gauss_blur_2_rd38_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<608, 2304>(result, in_gauss_blur_2_rd38_res);
	hw_uint<16> in_gauss_blur_2_rd39_res = in_gauss_blur_2_rd39_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<624, 2304>(result, in_gauss_blur_2_rd39_res);
	hw_uint<16> in_gauss_blur_2_rd40_res = in_gauss_blur_2_rd40_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<640, 2304>(result, in_gauss_blur_2_rd40_res);
	hw_uint<16> in_gauss_blur_2_rd41_res = in_gauss_blur_2_rd41_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<656, 2304>(result, in_gauss_blur_2_rd41_res);
	hw_uint<16> in_gauss_blur_2_rd42_res = in_gauss_blur_2_rd42_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<672, 2304>(result, in_gauss_blur_2_rd42_res);
	hw_uint<16> in_gauss_blur_2_rd43_res = in_gauss_blur_2_rd43_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<688, 2304>(result, in_gauss_blur_2_rd43_res);
	hw_uint<16> in_gauss_blur_2_rd44_res = in_gauss_blur_2_rd44_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<704, 2304>(result, in_gauss_blur_2_rd44_res);
	hw_uint<16> in_gauss_blur_2_rd45_res = in_gauss_blur_2_rd45_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<720, 2304>(result, in_gauss_blur_2_rd45_res);
	hw_uint<16> in_gauss_blur_2_rd46_res = in_gauss_blur_2_rd46_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<736, 2304>(result, in_gauss_blur_2_rd46_res);
	hw_uint<16> in_gauss_blur_2_rd47_res = in_gauss_blur_2_rd47_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<752, 2304>(result, in_gauss_blur_2_rd47_res);
	hw_uint<16> in_gauss_blur_2_rd48_res = in_gauss_blur_2_rd48_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<768, 2304>(result, in_gauss_blur_2_rd48_res);
	hw_uint<16> in_gauss_blur_2_rd49_res = in_gauss_blur_2_rd49_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<784, 2304>(result, in_gauss_blur_2_rd49_res);
	hw_uint<16> in_gauss_blur_2_rd50_res = in_gauss_blur_2_rd50_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<800, 2304>(result, in_gauss_blur_2_rd50_res);
	hw_uint<16> in_gauss_blur_2_rd51_res = in_gauss_blur_2_rd51_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<816, 2304>(result, in_gauss_blur_2_rd51_res);
	hw_uint<16> in_gauss_blur_2_rd52_res = in_gauss_blur_2_rd52_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<832, 2304>(result, in_gauss_blur_2_rd52_res);
	hw_uint<16> in_gauss_blur_2_rd53_res = in_gauss_blur_2_rd53_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<848, 2304>(result, in_gauss_blur_2_rd53_res);
	hw_uint<16> in_gauss_blur_2_rd54_res = in_gauss_blur_2_rd54_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<864, 2304>(result, in_gauss_blur_2_rd54_res);
	hw_uint<16> in_gauss_blur_2_rd55_res = in_gauss_blur_2_rd55_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<880, 2304>(result, in_gauss_blur_2_rd55_res);
	hw_uint<16> in_gauss_blur_2_rd56_res = in_gauss_blur_2_rd56_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<896, 2304>(result, in_gauss_blur_2_rd56_res);
	hw_uint<16> in_gauss_blur_2_rd57_res = in_gauss_blur_2_rd57_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<912, 2304>(result, in_gauss_blur_2_rd57_res);
	hw_uint<16> in_gauss_blur_2_rd58_res = in_gauss_blur_2_rd58_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<928, 2304>(result, in_gauss_blur_2_rd58_res);
	hw_uint<16> in_gauss_blur_2_rd59_res = in_gauss_blur_2_rd59_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<944, 2304>(result, in_gauss_blur_2_rd59_res);
	hw_uint<16> in_gauss_blur_2_rd60_res = in_gauss_blur_2_rd60_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<960, 2304>(result, in_gauss_blur_2_rd60_res);
	hw_uint<16> in_gauss_blur_2_rd61_res = in_gauss_blur_2_rd61_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<976, 2304>(result, in_gauss_blur_2_rd61_res);
	hw_uint<16> in_gauss_blur_2_rd62_res = in_gauss_blur_2_rd62_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<992, 2304>(result, in_gauss_blur_2_rd62_res);
	hw_uint<16> in_gauss_blur_2_rd63_res = in_gauss_blur_2_rd63_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1008, 2304>(result, in_gauss_blur_2_rd63_res);
	hw_uint<16> in_gauss_blur_2_rd64_res = in_gauss_blur_2_rd64_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1024, 2304>(result, in_gauss_blur_2_rd64_res);
	hw_uint<16> in_gauss_blur_2_rd65_res = in_gauss_blur_2_rd65_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1040, 2304>(result, in_gauss_blur_2_rd65_res);
	hw_uint<16> in_gauss_blur_2_rd66_res = in_gauss_blur_2_rd66_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1056, 2304>(result, in_gauss_blur_2_rd66_res);
	hw_uint<16> in_gauss_blur_2_rd67_res = in_gauss_blur_2_rd67_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1072, 2304>(result, in_gauss_blur_2_rd67_res);
	hw_uint<16> in_gauss_blur_2_rd68_res = in_gauss_blur_2_rd68_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1088, 2304>(result, in_gauss_blur_2_rd68_res);
	hw_uint<16> in_gauss_blur_2_rd69_res = in_gauss_blur_2_rd69_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1104, 2304>(result, in_gauss_blur_2_rd69_res);
	hw_uint<16> in_gauss_blur_2_rd70_res = in_gauss_blur_2_rd70_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1120, 2304>(result, in_gauss_blur_2_rd70_res);
	hw_uint<16> in_gauss_blur_2_rd71_res = in_gauss_blur_2_rd71_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1136, 2304>(result, in_gauss_blur_2_rd71_res);
	hw_uint<16> in_gauss_blur_2_rd72_res = in_gauss_blur_2_rd72_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1152, 2304>(result, in_gauss_blur_2_rd72_res);
	hw_uint<16> in_gauss_blur_2_rd73_res = in_gauss_blur_2_rd73_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1168, 2304>(result, in_gauss_blur_2_rd73_res);
	hw_uint<16> in_gauss_blur_2_rd74_res = in_gauss_blur_2_rd74_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1184, 2304>(result, in_gauss_blur_2_rd74_res);
	hw_uint<16> in_gauss_blur_2_rd75_res = in_gauss_blur_2_rd75_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1200, 2304>(result, in_gauss_blur_2_rd75_res);
	hw_uint<16> in_gauss_blur_2_rd76_res = in_gauss_blur_2_rd76_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1216, 2304>(result, in_gauss_blur_2_rd76_res);
	hw_uint<16> in_gauss_blur_2_rd77_res = in_gauss_blur_2_rd77_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1232, 2304>(result, in_gauss_blur_2_rd77_res);
	hw_uint<16> in_gauss_blur_2_rd78_res = in_gauss_blur_2_rd78_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1248, 2304>(result, in_gauss_blur_2_rd78_res);
	hw_uint<16> in_gauss_blur_2_rd79_res = in_gauss_blur_2_rd79_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1264, 2304>(result, in_gauss_blur_2_rd79_res);
	hw_uint<16> in_gauss_blur_2_rd80_res = in_gauss_blur_2_rd80_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1280, 2304>(result, in_gauss_blur_2_rd80_res);
	hw_uint<16> in_gauss_blur_2_rd81_res = in_gauss_blur_2_rd81_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1296, 2304>(result, in_gauss_blur_2_rd81_res);
	hw_uint<16> in_gauss_blur_2_rd82_res = in_gauss_blur_2_rd82_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1312, 2304>(result, in_gauss_blur_2_rd82_res);
	hw_uint<16> in_gauss_blur_2_rd83_res = in_gauss_blur_2_rd83_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1328, 2304>(result, in_gauss_blur_2_rd83_res);
	hw_uint<16> in_gauss_blur_2_rd84_res = in_gauss_blur_2_rd84_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1344, 2304>(result, in_gauss_blur_2_rd84_res);
	hw_uint<16> in_gauss_blur_2_rd85_res = in_gauss_blur_2_rd85_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1360, 2304>(result, in_gauss_blur_2_rd85_res);
	hw_uint<16> in_gauss_blur_2_rd86_res = in_gauss_blur_2_rd86_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1376, 2304>(result, in_gauss_blur_2_rd86_res);
	hw_uint<16> in_gauss_blur_2_rd87_res = in_gauss_blur_2_rd87_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1392, 2304>(result, in_gauss_blur_2_rd87_res);
	hw_uint<16> in_gauss_blur_2_rd88_res = in_gauss_blur_2_rd88_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1408, 2304>(result, in_gauss_blur_2_rd88_res);
	hw_uint<16> in_gauss_blur_2_rd89_res = in_gauss_blur_2_rd89_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1424, 2304>(result, in_gauss_blur_2_rd89_res);
	hw_uint<16> in_gauss_blur_2_rd90_res = in_gauss_blur_2_rd90_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1440, 2304>(result, in_gauss_blur_2_rd90_res);
	hw_uint<16> in_gauss_blur_2_rd91_res = in_gauss_blur_2_rd91_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1456, 2304>(result, in_gauss_blur_2_rd91_res);
	hw_uint<16> in_gauss_blur_2_rd92_res = in_gauss_blur_2_rd92_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1472, 2304>(result, in_gauss_blur_2_rd92_res);
	hw_uint<16> in_gauss_blur_2_rd93_res = in_gauss_blur_2_rd93_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1488, 2304>(result, in_gauss_blur_2_rd93_res);
	hw_uint<16> in_gauss_blur_2_rd94_res = in_gauss_blur_2_rd94_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1504, 2304>(result, in_gauss_blur_2_rd94_res);
	hw_uint<16> in_gauss_blur_2_rd95_res = in_gauss_blur_2_rd95_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1520, 2304>(result, in_gauss_blur_2_rd95_res);
	hw_uint<16> in_gauss_blur_2_rd96_res = in_gauss_blur_2_rd96_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1536, 2304>(result, in_gauss_blur_2_rd96_res);
	hw_uint<16> in_gauss_blur_2_rd97_res = in_gauss_blur_2_rd97_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1552, 2304>(result, in_gauss_blur_2_rd97_res);
	hw_uint<16> in_gauss_blur_2_rd98_res = in_gauss_blur_2_rd98_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1568, 2304>(result, in_gauss_blur_2_rd98_res);
	hw_uint<16> in_gauss_blur_2_rd99_res = in_gauss_blur_2_rd99_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1584, 2304>(result, in_gauss_blur_2_rd99_res);
	hw_uint<16> in_gauss_blur_2_rd100_res = in_gauss_blur_2_rd100_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1600, 2304>(result, in_gauss_blur_2_rd100_res);
	hw_uint<16> in_gauss_blur_2_rd101_res = in_gauss_blur_2_rd101_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1616, 2304>(result, in_gauss_blur_2_rd101_res);
	hw_uint<16> in_gauss_blur_2_rd102_res = in_gauss_blur_2_rd102_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1632, 2304>(result, in_gauss_blur_2_rd102_res);
	hw_uint<16> in_gauss_blur_2_rd103_res = in_gauss_blur_2_rd103_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1648, 2304>(result, in_gauss_blur_2_rd103_res);
	hw_uint<16> in_gauss_blur_2_rd104_res = in_gauss_blur_2_rd104_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1664, 2304>(result, in_gauss_blur_2_rd104_res);
	hw_uint<16> in_gauss_blur_2_rd105_res = in_gauss_blur_2_rd105_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1680, 2304>(result, in_gauss_blur_2_rd105_res);
	hw_uint<16> in_gauss_blur_2_rd106_res = in_gauss_blur_2_rd106_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1696, 2304>(result, in_gauss_blur_2_rd106_res);
	hw_uint<16> in_gauss_blur_2_rd107_res = in_gauss_blur_2_rd107_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1712, 2304>(result, in_gauss_blur_2_rd107_res);
	hw_uint<16> in_gauss_blur_2_rd108_res = in_gauss_blur_2_rd108_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1728, 2304>(result, in_gauss_blur_2_rd108_res);
	hw_uint<16> in_gauss_blur_2_rd109_res = in_gauss_blur_2_rd109_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1744, 2304>(result, in_gauss_blur_2_rd109_res);
	hw_uint<16> in_gauss_blur_2_rd110_res = in_gauss_blur_2_rd110_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1760, 2304>(result, in_gauss_blur_2_rd110_res);
	hw_uint<16> in_gauss_blur_2_rd111_res = in_gauss_blur_2_rd111_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1776, 2304>(result, in_gauss_blur_2_rd111_res);
	hw_uint<16> in_gauss_blur_2_rd112_res = in_gauss_blur_2_rd112_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1792, 2304>(result, in_gauss_blur_2_rd112_res);
	hw_uint<16> in_gauss_blur_2_rd113_res = in_gauss_blur_2_rd113_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1808, 2304>(result, in_gauss_blur_2_rd113_res);
	hw_uint<16> in_gauss_blur_2_rd114_res = in_gauss_blur_2_rd114_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1824, 2304>(result, in_gauss_blur_2_rd114_res);
	hw_uint<16> in_gauss_blur_2_rd115_res = in_gauss_blur_2_rd115_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1840, 2304>(result, in_gauss_blur_2_rd115_res);
	hw_uint<16> in_gauss_blur_2_rd116_res = in_gauss_blur_2_rd116_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1856, 2304>(result, in_gauss_blur_2_rd116_res);
	hw_uint<16> in_gauss_blur_2_rd117_res = in_gauss_blur_2_rd117_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1872, 2304>(result, in_gauss_blur_2_rd117_res);
	hw_uint<16> in_gauss_blur_2_rd118_res = in_gauss_blur_2_rd118_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1888, 2304>(result, in_gauss_blur_2_rd118_res);
	hw_uint<16> in_gauss_blur_2_rd119_res = in_gauss_blur_2_rd119_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1904, 2304>(result, in_gauss_blur_2_rd119_res);
	hw_uint<16> in_gauss_blur_2_rd120_res = in_gauss_blur_2_rd120_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1920, 2304>(result, in_gauss_blur_2_rd120_res);
	hw_uint<16> in_gauss_blur_2_rd121_res = in_gauss_blur_2_rd121_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1936, 2304>(result, in_gauss_blur_2_rd121_res);
	hw_uint<16> in_gauss_blur_2_rd122_res = in_gauss_blur_2_rd122_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1952, 2304>(result, in_gauss_blur_2_rd122_res);
	hw_uint<16> in_gauss_blur_2_rd123_res = in_gauss_blur_2_rd123_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1968, 2304>(result, in_gauss_blur_2_rd123_res);
	hw_uint<16> in_gauss_blur_2_rd124_res = in_gauss_blur_2_rd124_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<1984, 2304>(result, in_gauss_blur_2_rd124_res);
	hw_uint<16> in_gauss_blur_2_rd125_res = in_gauss_blur_2_rd125_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<2000, 2304>(result, in_gauss_blur_2_rd125_res);
	hw_uint<16> in_gauss_blur_2_rd126_res = in_gauss_blur_2_rd126_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<2016, 2304>(result, in_gauss_blur_2_rd126_res);
	hw_uint<16> in_gauss_blur_2_rd127_res = in_gauss_blur_2_rd127_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<2032, 2304>(result, in_gauss_blur_2_rd127_res);
	hw_uint<16> in_gauss_blur_2_rd128_res = in_gauss_blur_2_rd128_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<2048, 2304>(result, in_gauss_blur_2_rd128_res);
	hw_uint<16> in_gauss_blur_2_rd129_res = in_gauss_blur_2_rd129_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<2064, 2304>(result, in_gauss_blur_2_rd129_res);
	hw_uint<16> in_gauss_blur_2_rd130_res = in_gauss_blur_2_rd130_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<2080, 2304>(result, in_gauss_blur_2_rd130_res);
	hw_uint<16> in_gauss_blur_2_rd131_res = in_gauss_blur_2_rd131_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<2096, 2304>(result, in_gauss_blur_2_rd131_res);
	hw_uint<16> in_gauss_blur_2_rd132_res = in_gauss_blur_2_rd132_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<2112, 2304>(result, in_gauss_blur_2_rd132_res);
	hw_uint<16> in_gauss_blur_2_rd133_res = in_gauss_blur_2_rd133_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<2128, 2304>(result, in_gauss_blur_2_rd133_res);
	hw_uint<16> in_gauss_blur_2_rd134_res = in_gauss_blur_2_rd134_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<2144, 2304>(result, in_gauss_blur_2_rd134_res);
	hw_uint<16> in_gauss_blur_2_rd135_res = in_gauss_blur_2_rd135_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<2160, 2304>(result, in_gauss_blur_2_rd135_res);
	hw_uint<16> in_gauss_blur_2_rd136_res = in_gauss_blur_2_rd136_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<2176, 2304>(result, in_gauss_blur_2_rd136_res);
	hw_uint<16> in_gauss_blur_2_rd137_res = in_gauss_blur_2_rd137_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<2192, 2304>(result, in_gauss_blur_2_rd137_res);
	hw_uint<16> in_gauss_blur_2_rd138_res = in_gauss_blur_2_rd138_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<2208, 2304>(result, in_gauss_blur_2_rd138_res);
	hw_uint<16> in_gauss_blur_2_rd139_res = in_gauss_blur_2_rd139_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<2224, 2304>(result, in_gauss_blur_2_rd139_res);
	hw_uint<16> in_gauss_blur_2_rd140_res = in_gauss_blur_2_rd140_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<2240, 2304>(result, in_gauss_blur_2_rd140_res);
	hw_uint<16> in_gauss_blur_2_rd141_res = in_gauss_blur_2_rd141_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<2256, 2304>(result, in_gauss_blur_2_rd141_res);
	hw_uint<16> in_gauss_blur_2_rd142_res = in_gauss_blur_2_rd142_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<2272, 2304>(result, in_gauss_blur_2_rd142_res);
	hw_uint<16> in_gauss_blur_2_rd143_res = in_gauss_blur_2_rd143_select(in_gauss_ds_1, d0, d1, dynamic_address);
	set_at<2288, 2304>(result, in_gauss_blur_2_rd143_res);
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
//	in_gauss_ds_1_in_gauss_ds_1_update_0_write8
//	in_gauss_ds_1_in_gauss_ds_1_update_0_write9
//	in_gauss_ds_1_in_gauss_ds_1_update_0_write10
//	in_gauss_ds_1_in_gauss_ds_1_update_0_write11
//	in_gauss_ds_1_in_gauss_ds_1_update_0_write12
//	in_gauss_ds_1_in_gauss_ds_1_update_0_write13
//	in_gauss_ds_1_in_gauss_ds_1_update_0_write14
//	in_gauss_ds_1_in_gauss_ds_1_update_0_write15
inline void in_gauss_ds_1_in_gauss_ds_1_update_0_write_bundle_write(hw_uint<256>& in_gauss_ds_1_update_0_write, in_gauss_ds_1_cache& in_gauss_ds_1, int d0, int d1, int dynamic_address) {
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
	hw_uint<16> in_gauss_ds_1_in_gauss_ds_1_update_0_write8_res = in_gauss_ds_1_update_0_write.extract<128, 143>();
	in_gauss_ds_1_in_gauss_ds_1_update_0_write8_write(in_gauss_ds_1_in_gauss_ds_1_update_0_write8_res, in_gauss_ds_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_1_in_gauss_ds_1_update_0_write9_res = in_gauss_ds_1_update_0_write.extract<144, 159>();
	in_gauss_ds_1_in_gauss_ds_1_update_0_write9_write(in_gauss_ds_1_in_gauss_ds_1_update_0_write9_res, in_gauss_ds_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_1_in_gauss_ds_1_update_0_write10_res = in_gauss_ds_1_update_0_write.extract<160, 175>();
	in_gauss_ds_1_in_gauss_ds_1_update_0_write10_write(in_gauss_ds_1_in_gauss_ds_1_update_0_write10_res, in_gauss_ds_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_1_in_gauss_ds_1_update_0_write11_res = in_gauss_ds_1_update_0_write.extract<176, 191>();
	in_gauss_ds_1_in_gauss_ds_1_update_0_write11_write(in_gauss_ds_1_in_gauss_ds_1_update_0_write11_res, in_gauss_ds_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_1_in_gauss_ds_1_update_0_write12_res = in_gauss_ds_1_update_0_write.extract<192, 207>();
	in_gauss_ds_1_in_gauss_ds_1_update_0_write12_write(in_gauss_ds_1_in_gauss_ds_1_update_0_write12_res, in_gauss_ds_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_1_in_gauss_ds_1_update_0_write13_res = in_gauss_ds_1_update_0_write.extract<208, 223>();
	in_gauss_ds_1_in_gauss_ds_1_update_0_write13_write(in_gauss_ds_1_in_gauss_ds_1_update_0_write13_res, in_gauss_ds_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_1_in_gauss_ds_1_update_0_write14_res = in_gauss_ds_1_update_0_write.extract<224, 239>();
	in_gauss_ds_1_in_gauss_ds_1_update_0_write14_write(in_gauss_ds_1_in_gauss_ds_1_update_0_write14_res, in_gauss_ds_1, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_1_in_gauss_ds_1_update_0_write15_res = in_gauss_ds_1_update_0_write.extract<240, 255>();
	in_gauss_ds_1_in_gauss_ds_1_update_0_write15_write(in_gauss_ds_1_in_gauss_ds_1_update_0_write15_res, in_gauss_ds_1, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9_cache {
	// RAM Box: {[0, 480], [-1, 269]}
	// Capacity: 126
	// # of read delays: 6
  // 0, 1, 62, 63, 124, 125
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 60> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


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

	inline hw_uint<16> peek_123() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_124() {
		return f8;
	}

	inline hw_uint<16> peek_125() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f7.push(f6);
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

struct in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9_cache {
	// RAM Box: {[1, 473], [-1, 269]}
	// Capacity: 126
	// # of read delays: 4
  // 0, 1, 63, 125
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 61> f5;
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

	inline hw_uint<16> peek_124() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_125() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_2_in_gauss_ds_2_update_0_write2_merged_banks_9_cache {
	// RAM Box: {[2, 474], [-1, 269]}
	// Capacity: 126
	// # of read delays: 4
  // 0, 1, 63, 125
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 61> f5;
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

	inline hw_uint<16> peek_124() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_125() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_2_in_gauss_ds_2_update_0_write3_merged_banks_9_cache {
	// RAM Box: {[3, 475], [-1, 269]}
	// Capacity: 126
	// # of read delays: 4
  // 0, 1, 63, 125
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 61> f5;
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

	inline hw_uint<16> peek_124() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_125() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_2_in_gauss_ds_2_update_0_write4_merged_banks_9_cache {
	// RAM Box: {[4, 476], [-1, 269]}
	// Capacity: 126
	// # of read delays: 4
  // 0, 1, 63, 125
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 61> f5;
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

	inline hw_uint<16> peek_124() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_125() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_2_in_gauss_ds_2_update_0_write5_merged_banks_9_cache {
	// RAM Box: {[5, 477], [-1, 269]}
	// Capacity: 126
	// # of read delays: 4
  // 0, 1, 63, 125
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 61> f5;
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

	inline hw_uint<16> peek_124() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_125() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_2_in_gauss_ds_2_update_0_write6_merged_banks_9_cache {
	// RAM Box: {[6, 478], [-1, 269]}
	// Capacity: 126
	// # of read delays: 4
  // 0, 1, 63, 125
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 61> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 61> f5;
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

	inline hw_uint<16> peek_124() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_125() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 61
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 61 reading from capacity: 1
    f5.push(f4);
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

struct in_gauss_ds_2_in_gauss_ds_2_update_0_write7_merged_banks_9_cache {
	// RAM Box: {[-1, 479], [-1, 269]}
	// Capacity: 127
	// # of read delays: 7
  // 0, 1, 2, 63, 64, 125, 126
	hw_uint<16> f0;
	hw_uint<16> f2;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
	hw_uint<16> f6;
	hw_uint<16> f8;
	fifo<hw_uint<16>, 60> f9;
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

	inline hw_uint<16> peek_62() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_63() {
		return f6;
	}

	inline hw_uint<16> peek_64() {
		return f8;
	}

	inline hw_uint<16> peek_124() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f9.back();
	}

	inline hw_uint<16> peek_125() {
		return f10;
	}

	inline hw_uint<16> peek_126() {
		return f12;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f12 = f10;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f10 = f9.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
    f9.push(f8);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f8 = f6;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 60
    f6 = f5.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 60 reading from capacity: 1
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
  // # of banks: 8
  in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9_cache in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9;
  in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9_cache in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9;
  in_gauss_ds_2_in_gauss_ds_2_update_0_write2_merged_banks_9_cache in_gauss_ds_2_in_gauss_ds_2_update_0_write2_merged_banks_9;
  in_gauss_ds_2_in_gauss_ds_2_update_0_write3_merged_banks_9_cache in_gauss_ds_2_in_gauss_ds_2_update_0_write3_merged_banks_9;
  in_gauss_ds_2_in_gauss_ds_2_update_0_write4_merged_banks_9_cache in_gauss_ds_2_in_gauss_ds_2_update_0_write4_merged_banks_9;
  in_gauss_ds_2_in_gauss_ds_2_update_0_write5_merged_banks_9_cache in_gauss_ds_2_in_gauss_ds_2_update_0_write5_merged_banks_9;
  in_gauss_ds_2_in_gauss_ds_2_update_0_write6_merged_banks_9_cache in_gauss_ds_2_in_gauss_ds_2_update_0_write6_merged_banks_9;
  in_gauss_ds_2_in_gauss_ds_2_update_0_write7_merged_banks_9_cache in_gauss_ds_2_in_gauss_ds_2_update_0_write7_merged_banks_9;
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

inline void in_gauss_ds_2_in_gauss_ds_2_update_0_write4_write(hw_uint<16>& in_gauss_ds_2_in_gauss_ds_2_update_0_write4, in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
  in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write4_merged_banks_9.push(in_gauss_ds_2_in_gauss_ds_2_update_0_write4);
}

inline void in_gauss_ds_2_in_gauss_ds_2_update_0_write5_write(hw_uint<16>& in_gauss_ds_2_in_gauss_ds_2_update_0_write5, in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
  in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write5_merged_banks_9.push(in_gauss_ds_2_in_gauss_ds_2_update_0_write5);
}

inline void in_gauss_ds_2_in_gauss_ds_2_update_0_write6_write(hw_uint<16>& in_gauss_ds_2_in_gauss_ds_2_update_0_write6, in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
  in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write6_merged_banks_9.push(in_gauss_ds_2_in_gauss_ds_2_update_0_write6);
}

inline void in_gauss_ds_2_in_gauss_ds_2_update_0_write7_write(hw_uint<16>& in_gauss_ds_2_in_gauss_ds_2_update_0_write7, in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
  in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write7_merged_banks_9.push(in_gauss_ds_2_in_gauss_ds_2_update_0_write7);
}

inline hw_uint<16> in_gauss_blur_3_rd0_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd0 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[-1 + 8d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write7 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write7_merged_banks_9.peek_126();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd1_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd1 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[-1 + 8d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write7 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write7_merged_banks_9.peek_64();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd10_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd10 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[8d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_63();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd11_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd11 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[8d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd12_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd12 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 8d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_125();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd13_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd13 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 8d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_63();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd14_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd14 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 8d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd15_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd15 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 8d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write2_merged_banks_9.peek_125();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd16_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd16 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 8d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write2_merged_banks_9.peek_63();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd17_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd17 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 8d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write2_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd18_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd18 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 8d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_125();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd19_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd19 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 8d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_63();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd2_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd2 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[-1 + 8d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write7 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write7_merged_banks_9.peek_2();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd20_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd20 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 8d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd21_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd21 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 8d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write2_merged_banks_9.peek_125();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd22_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd22 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 8d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write2_merged_banks_9.peek_63();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd23_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd23 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 8d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write2_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd24_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd24 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[3 + 8d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write3_merged_banks_9.peek_125();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd25_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd25 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[3 + 8d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write3_merged_banks_9.peek_63();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd26_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd26 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[3 + 8d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write3_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd27_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd27 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 8d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write2_merged_banks_9.peek_125();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd28_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd28 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 8d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write2_merged_banks_9.peek_63();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd29_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd29 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[2 + 8d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write2_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write2;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd3_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd3 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[8d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_125();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd30_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd30 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[3 + 8d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write3_merged_banks_9.peek_125();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd31_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd31 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[3 + 8d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write3_merged_banks_9.peek_63();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd32_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd32 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[3 + 8d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write3_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd33_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd33 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[4 + 8d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write4 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write4_merged_banks_9.peek_125();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd34_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd34 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[4 + 8d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write4 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write4_merged_banks_9.peek_63();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd35_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd35 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[4 + 8d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write4 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write4_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd36_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd36 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[3 + 8d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write3_merged_banks_9.peek_125();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd37_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd37 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[3 + 8d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write3_merged_banks_9.peek_63();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd38_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd38 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[3 + 8d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write3_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write3;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd39_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd39 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[4 + 8d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write4 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write4_merged_banks_9.peek_125();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd4_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd4 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[8d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_63();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd40_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd40 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[4 + 8d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write4 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write4_merged_banks_9.peek_63();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd41_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd41 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[4 + 8d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write4 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write4_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd42_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd42 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[5 + 8d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write5 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write5_merged_banks_9.peek_125();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd43_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd43 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[5 + 8d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write5 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write5_merged_banks_9.peek_63();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd44_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd44 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[5 + 8d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write5 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write5_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd45_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd45 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[4 + 8d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write4 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write4_merged_banks_9.peek_125();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd46_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd46 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[4 + 8d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write4 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write4_merged_banks_9.peek_63();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd47_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd47 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[4 + 8d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write4 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write4_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write4;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd48_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd48 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[5 + 8d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write5 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write5_merged_banks_9.peek_125();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd49_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd49 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[5 + 8d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write5 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write5_merged_banks_9.peek_63();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd5_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd5 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[8d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd50_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd50 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[5 + 8d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write5 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write5_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd51_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd51 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[6 + 8d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write6 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write6_merged_banks_9.peek_125();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd52_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd52 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[6 + 8d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write6 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write6_merged_banks_9.peek_63();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd53_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd53 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[6 + 8d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write6 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write6_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd54_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd54 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[5 + 8d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write5 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write5_merged_banks_9.peek_125();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd55_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd55 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[5 + 8d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write5 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write5_merged_banks_9.peek_63();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd56_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd56 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[5 + 8d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write5 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write5_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write5;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd57_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd57 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[6 + 8d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write6 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write6_merged_banks_9.peek_125();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd58_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd58 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[6 + 8d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write6 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write6_merged_banks_9.peek_63();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd59_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd59 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[6 + 8d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write6 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write6_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd6_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd6 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 8d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_125();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd60_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd60 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[7 + 8d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write7 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write7_merged_banks_9.peek_125();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd61_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd61 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[7 + 8d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write7 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write7_merged_banks_9.peek_63();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd62_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd62 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[7 + 8d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write7 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write7_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd63_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd63 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[6 + 8d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write6 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write6_merged_banks_9.peek_125();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd64_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd64 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[6 + 8d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write6 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write6_merged_banks_9.peek_63();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd65_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd65 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[6 + 8d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write6 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write6_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write6;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd66_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd66 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[7 + 8d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write7 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write7_merged_banks_9.peek_125();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd67_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd67 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[7 + 8d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write7 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write7_merged_banks_9.peek_63();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd68_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd68 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[7 + 8d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write7 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write7_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write7;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd69_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd69 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[8 + 8d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_124();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd7_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd7 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 8d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_63();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd70_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd70 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[8 + 8d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_62();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd71_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd71 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[8 + 8d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_0();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd8_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd8 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[1 + 8d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write1_merged_banks_9.peek_1();
  return value_in_gauss_ds_2_in_gauss_ds_2_update_0_write1;
  return 0;
}

inline hw_uint<16> in_gauss_blur_3_rd9_select(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // in_gauss_blur_3_rd9 read pattern: { in_gauss_blur_3_update_0[d0, d1] -> in_gauss_ds_2[8d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Read schedule : { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
  // Write schedule: { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
  auto value_in_gauss_ds_2_in_gauss_ds_2_update_0_write0 = in_gauss_ds_2.in_gauss_ds_2_in_gauss_ds_2_update_0_write0_merged_banks_9.peek_125();
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
//	in_gauss_blur_3_rd36
//	in_gauss_blur_3_rd37
//	in_gauss_blur_3_rd38
//	in_gauss_blur_3_rd39
//	in_gauss_blur_3_rd40
//	in_gauss_blur_3_rd41
//	in_gauss_blur_3_rd42
//	in_gauss_blur_3_rd43
//	in_gauss_blur_3_rd44
//	in_gauss_blur_3_rd45
//	in_gauss_blur_3_rd46
//	in_gauss_blur_3_rd47
//	in_gauss_blur_3_rd48
//	in_gauss_blur_3_rd49
//	in_gauss_blur_3_rd50
//	in_gauss_blur_3_rd51
//	in_gauss_blur_3_rd52
//	in_gauss_blur_3_rd53
//	in_gauss_blur_3_rd54
//	in_gauss_blur_3_rd55
//	in_gauss_blur_3_rd56
//	in_gauss_blur_3_rd57
//	in_gauss_blur_3_rd58
//	in_gauss_blur_3_rd59
//	in_gauss_blur_3_rd60
//	in_gauss_blur_3_rd61
//	in_gauss_blur_3_rd62
//	in_gauss_blur_3_rd63
//	in_gauss_blur_3_rd64
//	in_gauss_blur_3_rd65
//	in_gauss_blur_3_rd66
//	in_gauss_blur_3_rd67
//	in_gauss_blur_3_rd68
//	in_gauss_blur_3_rd69
//	in_gauss_blur_3_rd70
//	in_gauss_blur_3_rd71
inline hw_uint<1152> in_gauss_ds_2_in_gauss_blur_3_update_0_read_bundle_read(in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 72
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
    // in_gauss_blur_3_rd36
    // in_gauss_blur_3_rd37
    // in_gauss_blur_3_rd38
    // in_gauss_blur_3_rd39
    // in_gauss_blur_3_rd40
    // in_gauss_blur_3_rd41
    // in_gauss_blur_3_rd42
    // in_gauss_blur_3_rd43
    // in_gauss_blur_3_rd44
    // in_gauss_blur_3_rd45
    // in_gauss_blur_3_rd46
    // in_gauss_blur_3_rd47
    // in_gauss_blur_3_rd48
    // in_gauss_blur_3_rd49
    // in_gauss_blur_3_rd50
    // in_gauss_blur_3_rd51
    // in_gauss_blur_3_rd52
    // in_gauss_blur_3_rd53
    // in_gauss_blur_3_rd54
    // in_gauss_blur_3_rd55
    // in_gauss_blur_3_rd56
    // in_gauss_blur_3_rd57
    // in_gauss_blur_3_rd58
    // in_gauss_blur_3_rd59
    // in_gauss_blur_3_rd60
    // in_gauss_blur_3_rd61
    // in_gauss_blur_3_rd62
    // in_gauss_blur_3_rd63
    // in_gauss_blur_3_rd64
    // in_gauss_blur_3_rd65
    // in_gauss_blur_3_rd66
    // in_gauss_blur_3_rd67
    // in_gauss_blur_3_rd68
    // in_gauss_blur_3_rd69
    // in_gauss_blur_3_rd70
    // in_gauss_blur_3_rd71

	hw_uint<1152> result;
	hw_uint<16> in_gauss_blur_3_rd0_res = in_gauss_blur_3_rd0_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<0, 1152>(result, in_gauss_blur_3_rd0_res);
	hw_uint<16> in_gauss_blur_3_rd1_res = in_gauss_blur_3_rd1_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<16, 1152>(result, in_gauss_blur_3_rd1_res);
	hw_uint<16> in_gauss_blur_3_rd2_res = in_gauss_blur_3_rd2_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<32, 1152>(result, in_gauss_blur_3_rd2_res);
	hw_uint<16> in_gauss_blur_3_rd3_res = in_gauss_blur_3_rd3_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<48, 1152>(result, in_gauss_blur_3_rd3_res);
	hw_uint<16> in_gauss_blur_3_rd4_res = in_gauss_blur_3_rd4_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<64, 1152>(result, in_gauss_blur_3_rd4_res);
	hw_uint<16> in_gauss_blur_3_rd5_res = in_gauss_blur_3_rd5_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<80, 1152>(result, in_gauss_blur_3_rd5_res);
	hw_uint<16> in_gauss_blur_3_rd6_res = in_gauss_blur_3_rd6_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<96, 1152>(result, in_gauss_blur_3_rd6_res);
	hw_uint<16> in_gauss_blur_3_rd7_res = in_gauss_blur_3_rd7_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<112, 1152>(result, in_gauss_blur_3_rd7_res);
	hw_uint<16> in_gauss_blur_3_rd8_res = in_gauss_blur_3_rd8_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<128, 1152>(result, in_gauss_blur_3_rd8_res);
	hw_uint<16> in_gauss_blur_3_rd9_res = in_gauss_blur_3_rd9_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<144, 1152>(result, in_gauss_blur_3_rd9_res);
	hw_uint<16> in_gauss_blur_3_rd10_res = in_gauss_blur_3_rd10_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<160, 1152>(result, in_gauss_blur_3_rd10_res);
	hw_uint<16> in_gauss_blur_3_rd11_res = in_gauss_blur_3_rd11_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<176, 1152>(result, in_gauss_blur_3_rd11_res);
	hw_uint<16> in_gauss_blur_3_rd12_res = in_gauss_blur_3_rd12_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<192, 1152>(result, in_gauss_blur_3_rd12_res);
	hw_uint<16> in_gauss_blur_3_rd13_res = in_gauss_blur_3_rd13_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<208, 1152>(result, in_gauss_blur_3_rd13_res);
	hw_uint<16> in_gauss_blur_3_rd14_res = in_gauss_blur_3_rd14_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<224, 1152>(result, in_gauss_blur_3_rd14_res);
	hw_uint<16> in_gauss_blur_3_rd15_res = in_gauss_blur_3_rd15_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<240, 1152>(result, in_gauss_blur_3_rd15_res);
	hw_uint<16> in_gauss_blur_3_rd16_res = in_gauss_blur_3_rd16_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<256, 1152>(result, in_gauss_blur_3_rd16_res);
	hw_uint<16> in_gauss_blur_3_rd17_res = in_gauss_blur_3_rd17_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<272, 1152>(result, in_gauss_blur_3_rd17_res);
	hw_uint<16> in_gauss_blur_3_rd18_res = in_gauss_blur_3_rd18_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<288, 1152>(result, in_gauss_blur_3_rd18_res);
	hw_uint<16> in_gauss_blur_3_rd19_res = in_gauss_blur_3_rd19_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<304, 1152>(result, in_gauss_blur_3_rd19_res);
	hw_uint<16> in_gauss_blur_3_rd20_res = in_gauss_blur_3_rd20_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<320, 1152>(result, in_gauss_blur_3_rd20_res);
	hw_uint<16> in_gauss_blur_3_rd21_res = in_gauss_blur_3_rd21_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<336, 1152>(result, in_gauss_blur_3_rd21_res);
	hw_uint<16> in_gauss_blur_3_rd22_res = in_gauss_blur_3_rd22_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<352, 1152>(result, in_gauss_blur_3_rd22_res);
	hw_uint<16> in_gauss_blur_3_rd23_res = in_gauss_blur_3_rd23_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<368, 1152>(result, in_gauss_blur_3_rd23_res);
	hw_uint<16> in_gauss_blur_3_rd24_res = in_gauss_blur_3_rd24_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<384, 1152>(result, in_gauss_blur_3_rd24_res);
	hw_uint<16> in_gauss_blur_3_rd25_res = in_gauss_blur_3_rd25_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<400, 1152>(result, in_gauss_blur_3_rd25_res);
	hw_uint<16> in_gauss_blur_3_rd26_res = in_gauss_blur_3_rd26_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<416, 1152>(result, in_gauss_blur_3_rd26_res);
	hw_uint<16> in_gauss_blur_3_rd27_res = in_gauss_blur_3_rd27_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<432, 1152>(result, in_gauss_blur_3_rd27_res);
	hw_uint<16> in_gauss_blur_3_rd28_res = in_gauss_blur_3_rd28_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<448, 1152>(result, in_gauss_blur_3_rd28_res);
	hw_uint<16> in_gauss_blur_3_rd29_res = in_gauss_blur_3_rd29_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<464, 1152>(result, in_gauss_blur_3_rd29_res);
	hw_uint<16> in_gauss_blur_3_rd30_res = in_gauss_blur_3_rd30_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<480, 1152>(result, in_gauss_blur_3_rd30_res);
	hw_uint<16> in_gauss_blur_3_rd31_res = in_gauss_blur_3_rd31_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<496, 1152>(result, in_gauss_blur_3_rd31_res);
	hw_uint<16> in_gauss_blur_3_rd32_res = in_gauss_blur_3_rd32_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<512, 1152>(result, in_gauss_blur_3_rd32_res);
	hw_uint<16> in_gauss_blur_3_rd33_res = in_gauss_blur_3_rd33_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<528, 1152>(result, in_gauss_blur_3_rd33_res);
	hw_uint<16> in_gauss_blur_3_rd34_res = in_gauss_blur_3_rd34_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<544, 1152>(result, in_gauss_blur_3_rd34_res);
	hw_uint<16> in_gauss_blur_3_rd35_res = in_gauss_blur_3_rd35_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<560, 1152>(result, in_gauss_blur_3_rd35_res);
	hw_uint<16> in_gauss_blur_3_rd36_res = in_gauss_blur_3_rd36_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<576, 1152>(result, in_gauss_blur_3_rd36_res);
	hw_uint<16> in_gauss_blur_3_rd37_res = in_gauss_blur_3_rd37_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<592, 1152>(result, in_gauss_blur_3_rd37_res);
	hw_uint<16> in_gauss_blur_3_rd38_res = in_gauss_blur_3_rd38_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<608, 1152>(result, in_gauss_blur_3_rd38_res);
	hw_uint<16> in_gauss_blur_3_rd39_res = in_gauss_blur_3_rd39_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<624, 1152>(result, in_gauss_blur_3_rd39_res);
	hw_uint<16> in_gauss_blur_3_rd40_res = in_gauss_blur_3_rd40_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<640, 1152>(result, in_gauss_blur_3_rd40_res);
	hw_uint<16> in_gauss_blur_3_rd41_res = in_gauss_blur_3_rd41_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<656, 1152>(result, in_gauss_blur_3_rd41_res);
	hw_uint<16> in_gauss_blur_3_rd42_res = in_gauss_blur_3_rd42_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<672, 1152>(result, in_gauss_blur_3_rd42_res);
	hw_uint<16> in_gauss_blur_3_rd43_res = in_gauss_blur_3_rd43_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<688, 1152>(result, in_gauss_blur_3_rd43_res);
	hw_uint<16> in_gauss_blur_3_rd44_res = in_gauss_blur_3_rd44_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<704, 1152>(result, in_gauss_blur_3_rd44_res);
	hw_uint<16> in_gauss_blur_3_rd45_res = in_gauss_blur_3_rd45_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<720, 1152>(result, in_gauss_blur_3_rd45_res);
	hw_uint<16> in_gauss_blur_3_rd46_res = in_gauss_blur_3_rd46_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<736, 1152>(result, in_gauss_blur_3_rd46_res);
	hw_uint<16> in_gauss_blur_3_rd47_res = in_gauss_blur_3_rd47_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<752, 1152>(result, in_gauss_blur_3_rd47_res);
	hw_uint<16> in_gauss_blur_3_rd48_res = in_gauss_blur_3_rd48_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<768, 1152>(result, in_gauss_blur_3_rd48_res);
	hw_uint<16> in_gauss_blur_3_rd49_res = in_gauss_blur_3_rd49_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<784, 1152>(result, in_gauss_blur_3_rd49_res);
	hw_uint<16> in_gauss_blur_3_rd50_res = in_gauss_blur_3_rd50_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<800, 1152>(result, in_gauss_blur_3_rd50_res);
	hw_uint<16> in_gauss_blur_3_rd51_res = in_gauss_blur_3_rd51_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<816, 1152>(result, in_gauss_blur_3_rd51_res);
	hw_uint<16> in_gauss_blur_3_rd52_res = in_gauss_blur_3_rd52_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<832, 1152>(result, in_gauss_blur_3_rd52_res);
	hw_uint<16> in_gauss_blur_3_rd53_res = in_gauss_blur_3_rd53_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<848, 1152>(result, in_gauss_blur_3_rd53_res);
	hw_uint<16> in_gauss_blur_3_rd54_res = in_gauss_blur_3_rd54_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<864, 1152>(result, in_gauss_blur_3_rd54_res);
	hw_uint<16> in_gauss_blur_3_rd55_res = in_gauss_blur_3_rd55_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<880, 1152>(result, in_gauss_blur_3_rd55_res);
	hw_uint<16> in_gauss_blur_3_rd56_res = in_gauss_blur_3_rd56_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<896, 1152>(result, in_gauss_blur_3_rd56_res);
	hw_uint<16> in_gauss_blur_3_rd57_res = in_gauss_blur_3_rd57_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<912, 1152>(result, in_gauss_blur_3_rd57_res);
	hw_uint<16> in_gauss_blur_3_rd58_res = in_gauss_blur_3_rd58_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<928, 1152>(result, in_gauss_blur_3_rd58_res);
	hw_uint<16> in_gauss_blur_3_rd59_res = in_gauss_blur_3_rd59_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<944, 1152>(result, in_gauss_blur_3_rd59_res);
	hw_uint<16> in_gauss_blur_3_rd60_res = in_gauss_blur_3_rd60_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<960, 1152>(result, in_gauss_blur_3_rd60_res);
	hw_uint<16> in_gauss_blur_3_rd61_res = in_gauss_blur_3_rd61_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<976, 1152>(result, in_gauss_blur_3_rd61_res);
	hw_uint<16> in_gauss_blur_3_rd62_res = in_gauss_blur_3_rd62_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<992, 1152>(result, in_gauss_blur_3_rd62_res);
	hw_uint<16> in_gauss_blur_3_rd63_res = in_gauss_blur_3_rd63_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<1008, 1152>(result, in_gauss_blur_3_rd63_res);
	hw_uint<16> in_gauss_blur_3_rd64_res = in_gauss_blur_3_rd64_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<1024, 1152>(result, in_gauss_blur_3_rd64_res);
	hw_uint<16> in_gauss_blur_3_rd65_res = in_gauss_blur_3_rd65_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<1040, 1152>(result, in_gauss_blur_3_rd65_res);
	hw_uint<16> in_gauss_blur_3_rd66_res = in_gauss_blur_3_rd66_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<1056, 1152>(result, in_gauss_blur_3_rd66_res);
	hw_uint<16> in_gauss_blur_3_rd67_res = in_gauss_blur_3_rd67_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<1072, 1152>(result, in_gauss_blur_3_rd67_res);
	hw_uint<16> in_gauss_blur_3_rd68_res = in_gauss_blur_3_rd68_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<1088, 1152>(result, in_gauss_blur_3_rd68_res);
	hw_uint<16> in_gauss_blur_3_rd69_res = in_gauss_blur_3_rd69_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<1104, 1152>(result, in_gauss_blur_3_rd69_res);
	hw_uint<16> in_gauss_blur_3_rd70_res = in_gauss_blur_3_rd70_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<1120, 1152>(result, in_gauss_blur_3_rd70_res);
	hw_uint<16> in_gauss_blur_3_rd71_res = in_gauss_blur_3_rd71_select(in_gauss_ds_2, d0, d1, dynamic_address);
	set_at<1136, 1152>(result, in_gauss_blur_3_rd71_res);
	return result;
}

// in_gauss_ds_2_update_0_write
//	in_gauss_ds_2_in_gauss_ds_2_update_0_write0
//	in_gauss_ds_2_in_gauss_ds_2_update_0_write1
//	in_gauss_ds_2_in_gauss_ds_2_update_0_write2
//	in_gauss_ds_2_in_gauss_ds_2_update_0_write3
//	in_gauss_ds_2_in_gauss_ds_2_update_0_write4
//	in_gauss_ds_2_in_gauss_ds_2_update_0_write5
//	in_gauss_ds_2_in_gauss_ds_2_update_0_write6
//	in_gauss_ds_2_in_gauss_ds_2_update_0_write7
inline void in_gauss_ds_2_in_gauss_ds_2_update_0_write_bundle_write(hw_uint<128>& in_gauss_ds_2_update_0_write, in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_ds_2_in_gauss_ds_2_update_0_write0_res = in_gauss_ds_2_update_0_write.extract<0, 15>();
	in_gauss_ds_2_in_gauss_ds_2_update_0_write0_write(in_gauss_ds_2_in_gauss_ds_2_update_0_write0_res, in_gauss_ds_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_2_in_gauss_ds_2_update_0_write1_res = in_gauss_ds_2_update_0_write.extract<16, 31>();
	in_gauss_ds_2_in_gauss_ds_2_update_0_write1_write(in_gauss_ds_2_in_gauss_ds_2_update_0_write1_res, in_gauss_ds_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_2_in_gauss_ds_2_update_0_write2_res = in_gauss_ds_2_update_0_write.extract<32, 47>();
	in_gauss_ds_2_in_gauss_ds_2_update_0_write2_write(in_gauss_ds_2_in_gauss_ds_2_update_0_write2_res, in_gauss_ds_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_2_in_gauss_ds_2_update_0_write3_res = in_gauss_ds_2_update_0_write.extract<48, 63>();
	in_gauss_ds_2_in_gauss_ds_2_update_0_write3_write(in_gauss_ds_2_in_gauss_ds_2_update_0_write3_res, in_gauss_ds_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_2_in_gauss_ds_2_update_0_write4_res = in_gauss_ds_2_update_0_write.extract<64, 79>();
	in_gauss_ds_2_in_gauss_ds_2_update_0_write4_write(in_gauss_ds_2_in_gauss_ds_2_update_0_write4_res, in_gauss_ds_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_2_in_gauss_ds_2_update_0_write5_res = in_gauss_ds_2_update_0_write.extract<80, 95>();
	in_gauss_ds_2_in_gauss_ds_2_update_0_write5_write(in_gauss_ds_2_in_gauss_ds_2_update_0_write5_res, in_gauss_ds_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_2_in_gauss_ds_2_update_0_write6_res = in_gauss_ds_2_update_0_write.extract<96, 111>();
	in_gauss_ds_2_in_gauss_ds_2_update_0_write6_write(in_gauss_ds_2_in_gauss_ds_2_update_0_write6_res, in_gauss_ds_2, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_2_in_gauss_ds_2_update_0_write7_res = in_gauss_ds_2_update_0_write.extract<112, 127>();
	in_gauss_ds_2_in_gauss_ds_2_update_0_write7_write(in_gauss_ds_2_in_gauss_ds_2_update_0_write7_res, in_gauss_ds_2, d0, d1, dynamic_address);
}

#include "hw_classes.h"

struct in_gauss_ds_3_in_gauss_ds_3_update_0_write0_to_gp_fpga_32_rd0_cache {
	// RAM Box: {[0, 236], [0, 134]}
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

struct in_gauss_ds_3_in_gauss_ds_3_update_0_write1_to_gp_fpga_32_rd1_cache {
	// RAM Box: {[1, 237], [0, 134]}
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

struct in_gauss_ds_3_in_gauss_ds_3_update_0_write2_to_gp_fpga_32_rd2_cache {
	// RAM Box: {[2, 238], [0, 134]}
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

struct in_gauss_ds_3_in_gauss_ds_3_update_0_write3_to_gp_fpga_32_rd3_cache {
	// RAM Box: {[3, 239], [0, 134]}
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
  // # of banks: 4
  in_gauss_ds_3_in_gauss_ds_3_update_0_write0_to_gp_fpga_32_rd0_cache in_gauss_ds_3_in_gauss_ds_3_update_0_write0_to_gp_fpga_32_rd0;
  in_gauss_ds_3_in_gauss_ds_3_update_0_write1_to_gp_fpga_32_rd1_cache in_gauss_ds_3_in_gauss_ds_3_update_0_write1_to_gp_fpga_32_rd1;
  in_gauss_ds_3_in_gauss_ds_3_update_0_write2_to_gp_fpga_32_rd2_cache in_gauss_ds_3_in_gauss_ds_3_update_0_write2_to_gp_fpga_32_rd2;
  in_gauss_ds_3_in_gauss_ds_3_update_0_write3_to_gp_fpga_32_rd3_cache in_gauss_ds_3_in_gauss_ds_3_update_0_write3_to_gp_fpga_32_rd3;
};



inline void in_gauss_ds_3_in_gauss_ds_3_update_0_write0_write(hw_uint<16>& in_gauss_ds_3_in_gauss_ds_3_update_0_write0, in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
  in_gauss_ds_3.in_gauss_ds_3_in_gauss_ds_3_update_0_write0_to_gp_fpga_32_rd0.push(in_gauss_ds_3_in_gauss_ds_3_update_0_write0);
}

inline void in_gauss_ds_3_in_gauss_ds_3_update_0_write1_write(hw_uint<16>& in_gauss_ds_3_in_gauss_ds_3_update_0_write1, in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
  in_gauss_ds_3.in_gauss_ds_3_in_gauss_ds_3_update_0_write1_to_gp_fpga_32_rd1.push(in_gauss_ds_3_in_gauss_ds_3_update_0_write1);
}

inline void in_gauss_ds_3_in_gauss_ds_3_update_0_write2_write(hw_uint<16>& in_gauss_ds_3_in_gauss_ds_3_update_0_write2, in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
  in_gauss_ds_3.in_gauss_ds_3_in_gauss_ds_3_update_0_write2_to_gp_fpga_32_rd2.push(in_gauss_ds_3_in_gauss_ds_3_update_0_write2);
}

inline void in_gauss_ds_3_in_gauss_ds_3_update_0_write3_write(hw_uint<16>& in_gauss_ds_3_in_gauss_ds_3_update_0_write3, in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
  in_gauss_ds_3.in_gauss_ds_3_in_gauss_ds_3_update_0_write3_to_gp_fpga_32_rd3.push(in_gauss_ds_3_in_gauss_ds_3_update_0_write3);
}

inline hw_uint<16> gp_fpga_32_rd0_select(in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_fpga_32_rd0 read pattern: { gp_fpga_32_update_0[d0, d1] -> in_gauss_ds_3[4d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 134 }
  // Read schedule : { gp_fpga_32_update_0[d0, d1] -> [7 + 8d1, 3 + d0, 8] : 0 <= d0 <= 59 and 0 <= d1 <= 134 }
  // Write schedule: { in_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 3 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 134 }
  auto value_in_gauss_ds_3_in_gauss_ds_3_update_0_write0 = in_gauss_ds_3.in_gauss_ds_3_in_gauss_ds_3_update_0_write0_to_gp_fpga_32_rd0.peek(/* one reader or all rams */ 0);
  return value_in_gauss_ds_3_in_gauss_ds_3_update_0_write0;
  return 0;
}

inline hw_uint<16> gp_fpga_32_rd1_select(in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_fpga_32_rd1 read pattern: { gp_fpga_32_update_0[d0, d1] -> in_gauss_ds_3[1 + 4d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 134 }
  // Read schedule : { gp_fpga_32_update_0[d0, d1] -> [7 + 8d1, 3 + d0, 8] : 0 <= d0 <= 59 and 0 <= d1 <= 134 }
  // Write schedule: { in_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 3 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 134 }
  auto value_in_gauss_ds_3_in_gauss_ds_3_update_0_write1 = in_gauss_ds_3.in_gauss_ds_3_in_gauss_ds_3_update_0_write1_to_gp_fpga_32_rd1.peek(/* one reader or all rams */ 0);
  return value_in_gauss_ds_3_in_gauss_ds_3_update_0_write1;
  return 0;
}

inline hw_uint<16> gp_fpga_32_rd2_select(in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_fpga_32_rd2 read pattern: { gp_fpga_32_update_0[d0, d1] -> in_gauss_ds_3[2 + 4d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 134 }
  // Read schedule : { gp_fpga_32_update_0[d0, d1] -> [7 + 8d1, 3 + d0, 8] : 0 <= d0 <= 59 and 0 <= d1 <= 134 }
  // Write schedule: { in_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 3 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 134 }
  auto value_in_gauss_ds_3_in_gauss_ds_3_update_0_write2 = in_gauss_ds_3.in_gauss_ds_3_in_gauss_ds_3_update_0_write2_to_gp_fpga_32_rd2.peek(/* one reader or all rams */ 0);
  return value_in_gauss_ds_3_in_gauss_ds_3_update_0_write2;
  return 0;
}

inline hw_uint<16> gp_fpga_32_rd3_select(in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // gp_fpga_32_rd3 read pattern: { gp_fpga_32_update_0[d0, d1] -> in_gauss_ds_3[3 + 4d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 134 }
  // Read schedule : { gp_fpga_32_update_0[d0, d1] -> [7 + 8d1, 3 + d0, 8] : 0 <= d0 <= 59 and 0 <= d1 <= 134 }
  // Write schedule: { in_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 3 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 134 }
  auto value_in_gauss_ds_3_in_gauss_ds_3_update_0_write3 = in_gauss_ds_3.in_gauss_ds_3_in_gauss_ds_3_update_0_write3_to_gp_fpga_32_rd3.peek(/* one reader or all rams */ 0);
  return value_in_gauss_ds_3_in_gauss_ds_3_update_0_write3;
  return 0;
}

// # of bundles = 2
// gp_fpga_32_update_0_read
//	gp_fpga_32_rd0
//	gp_fpga_32_rd1
//	gp_fpga_32_rd2
//	gp_fpga_32_rd3
inline hw_uint<64> in_gauss_ds_3_gp_fpga_32_update_0_read_bundle_read(in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 4
    // gp_fpga_32_rd0
    // gp_fpga_32_rd1
    // gp_fpga_32_rd2
    // gp_fpga_32_rd3

	hw_uint<64> result;
	hw_uint<16> gp_fpga_32_rd0_res = gp_fpga_32_rd0_select(in_gauss_ds_3, d0, d1, dynamic_address);
	set_at<0, 64>(result, gp_fpga_32_rd0_res);
	hw_uint<16> gp_fpga_32_rd1_res = gp_fpga_32_rd1_select(in_gauss_ds_3, d0, d1, dynamic_address);
	set_at<16, 64>(result, gp_fpga_32_rd1_res);
	hw_uint<16> gp_fpga_32_rd2_res = gp_fpga_32_rd2_select(in_gauss_ds_3, d0, d1, dynamic_address);
	set_at<32, 64>(result, gp_fpga_32_rd2_res);
	hw_uint<16> gp_fpga_32_rd3_res = gp_fpga_32_rd3_select(in_gauss_ds_3, d0, d1, dynamic_address);
	set_at<48, 64>(result, gp_fpga_32_rd3_res);
	return result;
}

// in_gauss_ds_3_update_0_write
//	in_gauss_ds_3_in_gauss_ds_3_update_0_write0
//	in_gauss_ds_3_in_gauss_ds_3_update_0_write1
//	in_gauss_ds_3_in_gauss_ds_3_update_0_write2
//	in_gauss_ds_3_in_gauss_ds_3_update_0_write3
inline void in_gauss_ds_3_in_gauss_ds_3_update_0_write_bundle_write(hw_uint<64>& in_gauss_ds_3_update_0_write, in_gauss_ds_3_cache& in_gauss_ds_3, int d0, int d1, int dynamic_address) {
	hw_uint<16> in_gauss_ds_3_in_gauss_ds_3_update_0_write0_res = in_gauss_ds_3_update_0_write.extract<0, 15>();
	in_gauss_ds_3_in_gauss_ds_3_update_0_write0_write(in_gauss_ds_3_in_gauss_ds_3_update_0_write0_res, in_gauss_ds_3, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_3_in_gauss_ds_3_update_0_write1_res = in_gauss_ds_3_update_0_write.extract<16, 31>();
	in_gauss_ds_3_in_gauss_ds_3_update_0_write1_write(in_gauss_ds_3_in_gauss_ds_3_update_0_write1_res, in_gauss_ds_3, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_3_in_gauss_ds_3_update_0_write2_res = in_gauss_ds_3_update_0_write.extract<32, 47>();
	in_gauss_ds_3_in_gauss_ds_3_update_0_write2_write(in_gauss_ds_3_in_gauss_ds_3_update_0_write2_res, in_gauss_ds_3, d0, d1, dynamic_address);
	hw_uint<16> in_gauss_ds_3_in_gauss_ds_3_update_0_write3_res = in_gauss_ds_3_update_0_write.extract<48, 63>();
	in_gauss_ds_3_in_gauss_ds_3_update_0_write3_write(in_gauss_ds_3_in_gauss_ds_3_update_0_write3_res, in_gauss_ds_3, d0, d1, dynamic_address);
}

// Total re-use buffer capacity: 117168 bits


// Operation logic
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

inline void in_gauss_blur_1_update_0(in_cache& in, in_gauss_blur_1_cache& in_gauss_blur_1, int d0, int d1) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_in_gauss_blur_1_update_0_read_bundle_read(in/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_32(in_0_c__0_value);
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

	auto compute_result = id_unrolled_16(in_gauss_blur_1_0_c__0_value);
	// Produce: in_gauss_ds_1
	in_gauss_ds_1_in_gauss_ds_1_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_ds_1, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_gauss_ds_2_update_0(in_gauss_blur_2_cache& in_gauss_blur_2, in_gauss_ds_2_cache& in_gauss_ds_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_blur_2
	auto in_gauss_blur_2_0_c__0_value = in_gauss_blur_2_in_gauss_ds_2_update_0_read_bundle_read(in_gauss_blur_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_8(in_gauss_blur_2_0_c__0_value);
	// Produce: in_gauss_ds_2
	in_gauss_ds_2_in_gauss_ds_2_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_ds_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_gauss_blur_3_update_0(in_gauss_ds_2_cache& in_gauss_ds_2, in_gauss_blur_3_cache& in_gauss_blur_3, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_ds_2
	auto in_gauss_ds_2_0_c__0_value = in_gauss_ds_2_in_gauss_blur_3_update_0_read_bundle_read(in_gauss_ds_2/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_8(in_gauss_ds_2_0_c__0_value);
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

	auto compute_result = id_unrolled_4(in_gauss_blur_3_0_c__0_value);
	// Produce: in_gauss_ds_3
	in_gauss_ds_3_in_gauss_ds_3_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_ds_3, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void gp_fpga_32_update_0(in_gauss_ds_3_cache& in_gauss_ds_3, HWStream<hw_uint<64> >& /* buffer_args num ports = 4 */gp_fpga_32, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_ds_3
	auto in_gauss_ds_3_0_c__0_value = in_gauss_ds_3_gp_fpga_32_update_0_read_bundle_read(in_gauss_ds_3/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = id_unrolled_4(in_gauss_ds_3_0_c__0_value);
	// Produce: gp_fpga_32
	gp_fpga_32.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_gauss_blur_2_update_0(in_gauss_ds_1_cache& in_gauss_ds_1, in_gauss_blur_2_cache& in_gauss_blur_2, int d0, int d1) {
  // Dynamic address computation

	// Consume: in_gauss_ds_1
	auto in_gauss_ds_1_0_c__0_value = in_gauss_ds_1_in_gauss_blur_2_update_0_read_bundle_read(in_gauss_ds_1/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = reduce_gauss_unrolled_16(in_gauss_ds_1_0_c__0_value);
	// Produce: in_gauss_blur_2
	in_gauss_blur_2_in_gauss_blur_2_update_0_write_bundle_write(/* arg names */compute_result, in_gauss_blur_2, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void gp_fpga_32_opt(HWStream<hw_uint<512> >& /* get_args num ports = 32 */in_off_chip, HWStream<hw_uint<64> >& /* get_args num ports = 4 */gp_fpga_32) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("gp_fpga_32_opt_debug.csv");
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

// schedule: { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538; gp_fpga_32_update_0[d0, d1] -> [7 + 8d1, 3 + d0, 8] : 0 <= d0 <= 59 and 0 <= d1 <= 134; in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268; in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269; in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539; in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078; in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079; in_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 3 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 134 }
//   { in_gauss_blur_2_update_0[d0, d1] -> [3 + 2d1, 2 + d0, 4] : -1 <= d0 <= 60 and -2 <= d1 <= 538 }
// Condition for in_gauss_blur_2_update_0(((-1 - i0 + 2*floord(1 + i0, 2) == 0) && (-4 + i2 == 0) && (-1 + i1 >= 0) && (62 - i1 >= 0) && (1 + i0 >= 0) && (1079 - i0 >= 0)))
//   { gp_fpga_32_update_0[d0, d1] -> [7 + 8d1, 3 + d0, 8] : 0 <= d0 <= 59 and 0 <= d1 <= 134 }
// Condition for gp_fpga_32_update_0(((-1 - i0 + 8*floord(1 + i0, 8) == 0) && (-8 + i2 == 0) && (-3 + i1 >= 0) && (62 - i1 >= 0) && (-7 + i0 >= 0) && (1079 - i0 >= 0)))
//   { in_gauss_blur_3_update_0[d0, d1] -> [7 + 4d1, 3 + d0, 6] : 0 <= d0 <= 59 and 0 <= d1 <= 268 }
// Condition for in_gauss_blur_3_update_0(((-1 - i0 + 4*floord(1 + i0, 4) == 0) && (-6 + i2 == 0) && (-3 + i1 >= 0) && (62 - i1 >= 0) && (-7 + i0 >= 0) && (1079 - i0 >= 0)))
//   { in_gauss_ds_2_update_0[d0, d1] -> [3 + 4d1, 2 + d0, 5] : -1 <= d0 <= 60 and -1 <= d1 <= 269 }
// Condition for in_gauss_ds_2_update_0(((-1 - i0 + 4*floord(1 + i0, 4) == 0) && (-5 + i2 == 0) && (-1 + i1 >= 0) && (62 - i1 >= 0) && (1 + i0 >= 0) && (1079 - i0 >= 0)))
//   { in_gauss_ds_1_update_0[d0, d1] -> [1 + 2d1, 1 + d0, 3] : -2 <= d0 <= 61 and -3 <= d1 <= 539 }
// Condition for in_gauss_ds_1_update_0(((-1 - i0 + 2*floord(1 + i0, 2) == 0) && (-3 + i2 == 0) && (1 + i1 >= 0) && (62 - i1 >= 0) && (5 + i0 >= 0) && (1079 - i0 >= 0)))
//   { in_gauss_blur_1_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : -2 <= d0 <= 61 and -6 <= d1 <= 1078 }
// Condition for in_gauss_blur_1_update_0(((-2 + i2 == 0) && (1 + i1 >= 0) && (62 - i1 >= 0) && (5 + i0 >= 0) && (1079 - i0 >= 0)))
//   { in_update_0[d0, d1] -> [d1, d0, 1] : -3 <= d0 <= 62 and -7 <= d1 <= 1079 }
// Condition for in_update_0(((-1 + i2 == 0) && (3 + i1 >= 0) && (62 - i1 >= 0) && (7 + i0 >= 0) && (1079 - i0 >= 0)))
//   { in_gauss_ds_3_update_0[d0, d1] -> [7 + 8d1, 3 + d0, 7] : 0 <= d0 <= 59 and 0 <= d1 <= 134 }
// Condition for in_gauss_ds_3_update_0(((-1 - i0 + 8*floord(1 + i0, 8) == 0) && (-7 + i2 == 0) && (-3 + i1 >= 0) && (62 - i1 >= 0) && (-7 + i0 >= 0) && (1079 - i0 >= 0)))

  /*
  // Schedules...
    // gp_fpga_32_update_0 -> [1*d1*1*8 + 1*7,1*d0*1*1 + 1*3,1*8]
    // in_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
    // in_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*3,1*d0*1*1 + 1*2,1*4]
    // in_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*7,1*d0*1*1 + 1*3,1*6]
    // in_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*1,1*d0*1*1 + 1*1,1*3]
    // in_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*3,1*d0*1*1 + 1*2,1*5]
    // in_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*7,1*d0*1*1 + 1*3,1*7]
    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
for (int c0 = -7; c0 <= 1079; c0++) {
  for (int c1 = -3; c1 <= 62; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((-3 <= c1 && c1 <= 62) && ((c1 - 0) % 1 == 0) && (-7 <= c0 && c0 <= 1079) && ((c0 - 0) % 1 == 0)) {
      in_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((-1 <= c1 && c1 <= 62) && ((c1 - 1) % 1 == 0) && (-5 <= c0 && c0 <= 1079) && ((c0 - 1) % 1 == 0)) {
      in_gauss_blur_1_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((-1 <= c1 && c1 <= 62) && ((c1 - 1) % 1 == 0) && (-5 <= c0 && c0 <= 1079) && ((c0 - 1) % 2 == 0)) {
      in_gauss_ds_1_update_0((c1 - 1) / 1, (c0 - 1) / 2);
    }

    if ((1 <= c1 && c1 <= 62) && ((c1 - 2) % 1 == 0) && (-1 <= c0 && c0 <= 1079) && ((c0 - 3) % 2 == 0)) {
      in_gauss_blur_2_update_0((c1 - 2) / 1, (c0 - 3) / 2);
    }

    if ((1 <= c1 && c1 <= 62) && ((c1 - 2) % 1 == 0) && (-1 <= c0 && c0 <= 1079) && ((c0 - 3) % 4 == 0)) {
      in_gauss_ds_2_update_0((c1 - 2) / 1, (c0 - 3) / 4);
    }

    if ((3 <= c1 && c1 <= 62) && ((c1 - 3) % 1 == 0) && (7 <= c0 && c0 <= 1079) && ((c0 - 7) % 4 == 0)) {
      in_gauss_blur_3_update_0((c1 - 3) / 1, (c0 - 7) / 4);
    }

    if ((3 <= c1 && c1 <= 62) && ((c1 - 3) % 1 == 0) && (7 <= c0 && c0 <= 1079) && ((c0 - 7) % 8 == 0)) {
      in_gauss_ds_3_update_0((c1 - 3) / 1, (c0 - 7) / 8);
    }

    if ((3 <= c1 && c1 <= 62) && ((c1 - 3) % 1 == 0) && (7 <= c0 && c0 <= 1079) && ((c0 - 7) % 8 == 0)) {
      gp_fpga_32_update_0((c1 - 3) / 1, (c0 - 7) / 8);
    }

  }
}

  */
	  // Schedules...
	    // gp_fpga_32_update_0 -> [1*d1*1*8 + 1*7,1*d0*1*1 + 1*3,1*8]
	    // in_gauss_blur_1_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // in_gauss_blur_2_update_0 -> [1*d1*1*2 + 1*3,1*d0*1*1 + 1*2,1*4]
	    // in_gauss_blur_3_update_0 -> [1*d1*1*4 + 1*7,1*d0*1*1 + 1*3,1*6]
	    // in_gauss_ds_1_update_0 -> [1*d1*1*2 + 1*1,1*d0*1*1 + 1*1,1*3]
	    // in_gauss_ds_2_update_0 -> [1*d1*1*4 + 1*3,1*d0*1*1 + 1*2,1*5]
	    // in_gauss_ds_3_update_0 -> [1*d1*1*8 + 1*7,1*d0*1*1 + 1*3,1*7]
	    // in_off_chip_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	for (int c0 = -7; c0 <= 1079; c0++) {
	  for (int c1 = -3; c1 <= 62; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-3 <= c1 && c1 <= 62) && ((c1 - 0) % 1 == 0) && (-7 <= c0 && c0 <= 1079) && ((c0 - 0) % 1 == 0)) {
	      in_update_0(in_off_chip /* buf name */, in, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((-1 <= c1 && c1 <= 62) && ((c1 - 1) % 1 == 0) && (-5 <= c0 && c0 <= 1079) && ((c0 - 1) % 1 == 0)) {
	      in_gauss_blur_1_update_0(in /* buf name */, in_gauss_blur_1, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((-1 <= c1 && c1 <= 62) && ((c1 - 1) % 1 == 0) && (-5 <= c0 && c0 <= 1079) && ((c0 - 1) % 2 == 0)) {
	      in_gauss_ds_1_update_0(in_gauss_blur_1 /* buf name */, in_gauss_ds_1, (c1 - 1) / 1, (c0 - 1) / 2);
	    }
	
	    if ((1 <= c1 && c1 <= 62) && ((c1 - 2) % 1 == 0) && (-1 <= c0 && c0 <= 1079) && ((c0 - 3) % 2 == 0)) {
	      in_gauss_blur_2_update_0(in_gauss_ds_1 /* buf name */, in_gauss_blur_2, (c1 - 2) / 1, (c0 - 3) / 2);
	    }
	
	    if ((1 <= c1 && c1 <= 62) && ((c1 - 2) % 1 == 0) && (-1 <= c0 && c0 <= 1079) && ((c0 - 3) % 4 == 0)) {
	      in_gauss_ds_2_update_0(in_gauss_blur_2 /* buf name */, in_gauss_ds_2, (c1 - 2) / 1, (c0 - 3) / 4);
	    }
	
	    if ((3 <= c1 && c1 <= 62) && ((c1 - 3) % 1 == 0) && (7 <= c0 && c0 <= 1079) && ((c0 - 7) % 4 == 0)) {
	      in_gauss_blur_3_update_0(in_gauss_ds_2 /* buf name */, in_gauss_blur_3, (c1 - 3) / 1, (c0 - 7) / 4);
	    }
	
	    if ((3 <= c1 && c1 <= 62) && ((c1 - 3) % 1 == 0) && (7 <= c0 && c0 <= 1079) && ((c0 - 7) % 8 == 0)) {
	      in_gauss_ds_3_update_0(in_gauss_blur_3 /* buf name */, in_gauss_ds_3, (c1 - 3) / 1, (c0 - 7) / 8);
	    }
	
	    if ((3 <= c1 && c1 <= 62) && ((c1 - 3) % 1 == 0) && (7 <= c0 && c0 <= 1079) && ((c0 - 7) % 8 == 0)) {
	      gp_fpga_32_update_0(in_gauss_ds_3 /* buf name */, gp_fpga_32, (c1 - 3) / 1, (c0 - 7) / 8);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void gp_fpga_32_opt_wrapper(HWStream<hw_uint<512> >& /* get_args num ports = 32 */in_off_chip, HWStream<hw_uint<64> >& /* get_args num ports = 4 */gp_fpga_32, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    gp_fpga_32_opt(in_off_chip, gp_fpga_32);
  }
}
#ifdef __VIVADO_SYNTH__
  // { gp_fpga_32_update_0[root = 0, gp_fpga_32_0, gp_fpga_32_1] -> gp_fpga_32[0, 0] : 0 <= gp_fpga_32_0 <= 59 and 0 <= gp_fpga_32_1 <= 134 }
const int gp_fpga_32_update_0_write_pipe0_num_transfers = 8100;
  // { in_update_0[root = 0, in_0, in_1] -> in_off_chip[0, 0] : -3 <= in_0 <= 62 and -7 <= in_1 <= 1079 }
const int in_update_0_read_pipe0_num_transfers = 71742;


extern "C" {

void gp_fpga_32_opt_accel(hw_uint<512>* in_update_0_read_pipe0, hw_uint<64>* gp_fpga_32_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = gp_fpga_32_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = gp_fpga_32_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<512> > in_update_0_read_pipe0_channel;
  static HWStream<hw_uint<64> > gp_fpga_32_update_0_write_pipe0_channel;

  burst_read<512>(in_update_0_read_pipe0, in_update_0_read_pipe0_channel, in_update_0_read_pipe0_num_transfers*size);

  gp_fpga_32_opt_wrapper(in_update_0_read_pipe0_channel, gp_fpga_32_update_0_write_pipe0_channel, size);

  burst_write<64>(gp_fpga_32_update_0_write_pipe0, gp_fpga_32_update_0_write_pipe0_channel, gp_fpga_32_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void gp_fpga_32_opt_rdai(HWStream<hw_uint<512> >& in_update_0_read_pipe0, HWStream<hw_uint<64> >&  gp_fpga_32_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = gp_fpga_32_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  gp_fpga_32_opt(in_update_0_read_pipe0, gp_fpga_32_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

