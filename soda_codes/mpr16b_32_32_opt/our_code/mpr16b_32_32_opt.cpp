#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: mpr16b_32_32_opt_compute_units.h
#include "mpr16b_32_32_opt_compute_units.h"

#include "hw_classes.h"

struct in_in_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 96], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write1_merged_banks_2_cache {
	// RAM Box: {[1, 97], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write10_merged_banks_2_cache {
	// RAM Box: {[10, 106], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write11_merged_banks_2_cache {
	// RAM Box: {[11, 107], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write12_merged_banks_2_cache {
	// RAM Box: {[12, 108], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write13_merged_banks_2_cache {
	// RAM Box: {[13, 109], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write14_merged_banks_2_cache {
	// RAM Box: {[14, 110], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write15_merged_banks_2_cache {
	// RAM Box: {[15, 111], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write16_merged_banks_2_cache {
	// RAM Box: {[16, 112], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write17_merged_banks_2_cache {
	// RAM Box: {[17, 113], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write18_merged_banks_2_cache {
	// RAM Box: {[18, 114], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write19_merged_banks_2_cache {
	// RAM Box: {[19, 115], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write2_merged_banks_2_cache {
	// RAM Box: {[2, 98], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write20_merged_banks_2_cache {
	// RAM Box: {[20, 116], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write21_merged_banks_2_cache {
	// RAM Box: {[21, 117], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write22_merged_banks_2_cache {
	// RAM Box: {[22, 118], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write23_merged_banks_2_cache {
	// RAM Box: {[23, 119], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write24_merged_banks_2_cache {
	// RAM Box: {[24, 120], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write25_merged_banks_2_cache {
	// RAM Box: {[25, 121], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write26_merged_banks_2_cache {
	// RAM Box: {[26, 122], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write27_merged_banks_2_cache {
	// RAM Box: {[27, 123], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write28_merged_banks_2_cache {
	// RAM Box: {[28, 124], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write29_merged_banks_2_cache {
	// RAM Box: {[29, 125], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write3_merged_banks_2_cache {
	// RAM Box: {[3, 99], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write30_merged_banks_2_cache {
	// RAM Box: {[30, 126], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write31_merged_banks_2_cache {
	// RAM Box: {[31, 127], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write4_merged_banks_2_cache {
	// RAM Box: {[4, 100], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write5_merged_banks_2_cache {
	// RAM Box: {[5, 101], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write6_merged_banks_2_cache {
	// RAM Box: {[6, 102], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write7_merged_banks_2_cache {
	// RAM Box: {[7, 103], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write8_merged_banks_2_cache {
	// RAM Box: {[8, 104], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_in_update_0_write9_merged_banks_2_cache {
	// RAM Box: {[9, 105], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<16> f0;
	fifo<hw_uint<16>, 3> f1;
	hw_uint<16> f2;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<16> peek_4() {
		return f2;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 3
    f2 = f1.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 3 reading from capacity: 1
    f1.push(f0);
    // cap: 1
    f0 = value;
	}

};

struct in_cache {
  // # of banks: 32
  in_in_update_0_write0_merged_banks_2_cache in_in_update_0_write0_merged_banks_2;
  in_in_update_0_write1_merged_banks_2_cache in_in_update_0_write1_merged_banks_2;
  in_in_update_0_write10_merged_banks_2_cache in_in_update_0_write10_merged_banks_2;
  in_in_update_0_write11_merged_banks_2_cache in_in_update_0_write11_merged_banks_2;
  in_in_update_0_write12_merged_banks_2_cache in_in_update_0_write12_merged_banks_2;
  in_in_update_0_write13_merged_banks_2_cache in_in_update_0_write13_merged_banks_2;
  in_in_update_0_write14_merged_banks_2_cache in_in_update_0_write14_merged_banks_2;
  in_in_update_0_write15_merged_banks_2_cache in_in_update_0_write15_merged_banks_2;
  in_in_update_0_write16_merged_banks_2_cache in_in_update_0_write16_merged_banks_2;
  in_in_update_0_write17_merged_banks_2_cache in_in_update_0_write17_merged_banks_2;
  in_in_update_0_write18_merged_banks_2_cache in_in_update_0_write18_merged_banks_2;
  in_in_update_0_write19_merged_banks_2_cache in_in_update_0_write19_merged_banks_2;
  in_in_update_0_write2_merged_banks_2_cache in_in_update_0_write2_merged_banks_2;
  in_in_update_0_write20_merged_banks_2_cache in_in_update_0_write20_merged_banks_2;
  in_in_update_0_write21_merged_banks_2_cache in_in_update_0_write21_merged_banks_2;
  in_in_update_0_write22_merged_banks_2_cache in_in_update_0_write22_merged_banks_2;
  in_in_update_0_write23_merged_banks_2_cache in_in_update_0_write23_merged_banks_2;
  in_in_update_0_write24_merged_banks_2_cache in_in_update_0_write24_merged_banks_2;
  in_in_update_0_write25_merged_banks_2_cache in_in_update_0_write25_merged_banks_2;
  in_in_update_0_write26_merged_banks_2_cache in_in_update_0_write26_merged_banks_2;
  in_in_update_0_write27_merged_banks_2_cache in_in_update_0_write27_merged_banks_2;
  in_in_update_0_write28_merged_banks_2_cache in_in_update_0_write28_merged_banks_2;
  in_in_update_0_write29_merged_banks_2_cache in_in_update_0_write29_merged_banks_2;
  in_in_update_0_write3_merged_banks_2_cache in_in_update_0_write3_merged_banks_2;
  in_in_update_0_write30_merged_banks_2_cache in_in_update_0_write30_merged_banks_2;
  in_in_update_0_write31_merged_banks_2_cache in_in_update_0_write31_merged_banks_2;
  in_in_update_0_write4_merged_banks_2_cache in_in_update_0_write4_merged_banks_2;
  in_in_update_0_write5_merged_banks_2_cache in_in_update_0_write5_merged_banks_2;
  in_in_update_0_write6_merged_banks_2_cache in_in_update_0_write6_merged_banks_2;
  in_in_update_0_write7_merged_banks_2_cache in_in_update_0_write7_merged_banks_2;
  in_in_update_0_write8_merged_banks_2_cache in_in_update_0_write8_merged_banks_2;
  in_in_update_0_write9_merged_banks_2_cache in_in_update_0_write9_merged_banks_2;
};



inline void in_in_update_0_write0_write(hw_uint<16>& in_in_update_0_write0, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write0_merged_banks_2.push(in_in_update_0_write0);
}

inline void in_in_update_0_write1_write(hw_uint<16>& in_in_update_0_write1, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write1_merged_banks_2.push(in_in_update_0_write1);
}

inline void in_in_update_0_write10_write(hw_uint<16>& in_in_update_0_write10, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write10_merged_banks_2.push(in_in_update_0_write10);
}

inline void in_in_update_0_write11_write(hw_uint<16>& in_in_update_0_write11, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write11_merged_banks_2.push(in_in_update_0_write11);
}

inline void in_in_update_0_write12_write(hw_uint<16>& in_in_update_0_write12, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write12_merged_banks_2.push(in_in_update_0_write12);
}

inline void in_in_update_0_write13_write(hw_uint<16>& in_in_update_0_write13, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write13_merged_banks_2.push(in_in_update_0_write13);
}

inline void in_in_update_0_write14_write(hw_uint<16>& in_in_update_0_write14, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write14_merged_banks_2.push(in_in_update_0_write14);
}

inline void in_in_update_0_write15_write(hw_uint<16>& in_in_update_0_write15, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write15_merged_banks_2.push(in_in_update_0_write15);
}

inline void in_in_update_0_write16_write(hw_uint<16>& in_in_update_0_write16, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write16_merged_banks_2.push(in_in_update_0_write16);
}

inline void in_in_update_0_write17_write(hw_uint<16>& in_in_update_0_write17, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write17_merged_banks_2.push(in_in_update_0_write17);
}

inline void in_in_update_0_write18_write(hw_uint<16>& in_in_update_0_write18, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write18_merged_banks_2.push(in_in_update_0_write18);
}

inline void in_in_update_0_write19_write(hw_uint<16>& in_in_update_0_write19, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write19_merged_banks_2.push(in_in_update_0_write19);
}

inline void in_in_update_0_write2_write(hw_uint<16>& in_in_update_0_write2, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write2_merged_banks_2.push(in_in_update_0_write2);
}

inline void in_in_update_0_write20_write(hw_uint<16>& in_in_update_0_write20, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write20_merged_banks_2.push(in_in_update_0_write20);
}

inline void in_in_update_0_write21_write(hw_uint<16>& in_in_update_0_write21, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write21_merged_banks_2.push(in_in_update_0_write21);
}

inline void in_in_update_0_write22_write(hw_uint<16>& in_in_update_0_write22, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write22_merged_banks_2.push(in_in_update_0_write22);
}

inline void in_in_update_0_write23_write(hw_uint<16>& in_in_update_0_write23, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write23_merged_banks_2.push(in_in_update_0_write23);
}

inline void in_in_update_0_write24_write(hw_uint<16>& in_in_update_0_write24, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write24_merged_banks_2.push(in_in_update_0_write24);
}

inline void in_in_update_0_write25_write(hw_uint<16>& in_in_update_0_write25, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write25_merged_banks_2.push(in_in_update_0_write25);
}

inline void in_in_update_0_write26_write(hw_uint<16>& in_in_update_0_write26, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write26_merged_banks_2.push(in_in_update_0_write26);
}

inline void in_in_update_0_write27_write(hw_uint<16>& in_in_update_0_write27, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write27_merged_banks_2.push(in_in_update_0_write27);
}

inline void in_in_update_0_write28_write(hw_uint<16>& in_in_update_0_write28, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write28_merged_banks_2.push(in_in_update_0_write28);
}

inline void in_in_update_0_write29_write(hw_uint<16>& in_in_update_0_write29, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write29_merged_banks_2.push(in_in_update_0_write29);
}

inline void in_in_update_0_write3_write(hw_uint<16>& in_in_update_0_write3, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write3_merged_banks_2.push(in_in_update_0_write3);
}

inline void in_in_update_0_write30_write(hw_uint<16>& in_in_update_0_write30, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write30_merged_banks_2.push(in_in_update_0_write30);
}

inline void in_in_update_0_write31_write(hw_uint<16>& in_in_update_0_write31, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write31_merged_banks_2.push(in_in_update_0_write31);
}

inline void in_in_update_0_write4_write(hw_uint<16>& in_in_update_0_write4, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write4_merged_banks_2.push(in_in_update_0_write4);
}

inline void in_in_update_0_write5_write(hw_uint<16>& in_in_update_0_write5, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write5_merged_banks_2.push(in_in_update_0_write5);
}

inline void in_in_update_0_write6_write(hw_uint<16>& in_in_update_0_write6, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write6_merged_banks_2.push(in_in_update_0_write6);
}

inline void in_in_update_0_write7_write(hw_uint<16>& in_in_update_0_write7, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write7_merged_banks_2.push(in_in_update_0_write7);
}

inline void in_in_update_0_write8_write(hw_uint<16>& in_in_update_0_write8, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write8_merged_banks_2.push(in_in_update_0_write8);
}

inline void in_in_update_0_write9_write(hw_uint<16>& in_in_update_0_write9, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write9_merged_banks_2.push(in_in_update_0_write9);
}

inline hw_uint<16> mpr16b_32_32_rd0_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd0 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek_4();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd1_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd1 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek_0();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd10_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd10 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[5 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_2.peek_4();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd11_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd11 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[5 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_2.peek_0();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd12_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd12 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[6 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_2.peek_4();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd13_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd13 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[6 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_2.peek_0();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd14_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd14 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[7 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_2.peek_4();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd15_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd15 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[7 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_2.peek_0();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd16_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd16 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[8 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_2.peek_4();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd17_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd17 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[8 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_2.peek_0();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd18_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd18 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[9 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_2.peek_4();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd19_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd19 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[9 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_2.peek_0();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd2_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd2 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[1 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_2.peek_4();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd20_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd20 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[10 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_2.peek_4();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd21_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd21 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[10 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_2.peek_0();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd22_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd22 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[11 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_2.peek_4();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd23_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd23 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[11 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_2.peek_0();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd24_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd24 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[12 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_2.peek_4();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd25_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd25 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[12 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_2.peek_0();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd26_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd26 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[13 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_2.peek_4();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd27_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd27 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[13 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_2.peek_0();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd28_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd28 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[14 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_2.peek_4();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd29_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd29 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[14 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_2.peek_0();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd3_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd3 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[1 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_2.peek_0();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd30_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd30 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[15 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_2.peek_4();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd31_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd31 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[15 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_2.peek_0();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd32_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd32 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[16 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write16 = in.in_in_update_0_write16_merged_banks_2.peek_4();
  return value_in_in_update_0_write16;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd33_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd33 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[16 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write16 = in.in_in_update_0_write16_merged_banks_2.peek_0();
  return value_in_in_update_0_write16;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd34_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd34 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[17 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write17 = in.in_in_update_0_write17_merged_banks_2.peek_4();
  return value_in_in_update_0_write17;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd35_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd35 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[17 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write17 = in.in_in_update_0_write17_merged_banks_2.peek_0();
  return value_in_in_update_0_write17;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd36_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd36 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[18 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write18 = in.in_in_update_0_write18_merged_banks_2.peek_4();
  return value_in_in_update_0_write18;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd37_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd37 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[18 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write18 = in.in_in_update_0_write18_merged_banks_2.peek_0();
  return value_in_in_update_0_write18;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd38_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd38 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[19 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write19 = in.in_in_update_0_write19_merged_banks_2.peek_4();
  return value_in_in_update_0_write19;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd39_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd39 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[19 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write19 = in.in_in_update_0_write19_merged_banks_2.peek_0();
  return value_in_in_update_0_write19;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd4_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd4 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[2 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_2.peek_4();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd40_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd40 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[20 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write20 = in.in_in_update_0_write20_merged_banks_2.peek_4();
  return value_in_in_update_0_write20;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd41_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd41 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[20 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write20 = in.in_in_update_0_write20_merged_banks_2.peek_0();
  return value_in_in_update_0_write20;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd42_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd42 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[21 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write21 = in.in_in_update_0_write21_merged_banks_2.peek_4();
  return value_in_in_update_0_write21;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd43_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd43 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[21 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write21 = in.in_in_update_0_write21_merged_banks_2.peek_0();
  return value_in_in_update_0_write21;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd44_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd44 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[22 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write22 = in.in_in_update_0_write22_merged_banks_2.peek_4();
  return value_in_in_update_0_write22;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd45_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd45 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[22 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write22 = in.in_in_update_0_write22_merged_banks_2.peek_0();
  return value_in_in_update_0_write22;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd46_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd46 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[23 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write23 = in.in_in_update_0_write23_merged_banks_2.peek_4();
  return value_in_in_update_0_write23;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd47_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd47 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[23 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write23 = in.in_in_update_0_write23_merged_banks_2.peek_0();
  return value_in_in_update_0_write23;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd48_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd48 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[24 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write24 = in.in_in_update_0_write24_merged_banks_2.peek_4();
  return value_in_in_update_0_write24;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd49_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd49 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[24 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write24 = in.in_in_update_0_write24_merged_banks_2.peek_0();
  return value_in_in_update_0_write24;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd5_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd5 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[2 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_2.peek_0();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd50_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd50 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[25 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write25 = in.in_in_update_0_write25_merged_banks_2.peek_4();
  return value_in_in_update_0_write25;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd51_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd51 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[25 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write25 = in.in_in_update_0_write25_merged_banks_2.peek_0();
  return value_in_in_update_0_write25;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd52_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd52 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[26 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write26 = in.in_in_update_0_write26_merged_banks_2.peek_4();
  return value_in_in_update_0_write26;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd53_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd53 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[26 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write26 = in.in_in_update_0_write26_merged_banks_2.peek_0();
  return value_in_in_update_0_write26;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd54_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd54 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[27 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write27 = in.in_in_update_0_write27_merged_banks_2.peek_4();
  return value_in_in_update_0_write27;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd55_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd55 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[27 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write27 = in.in_in_update_0_write27_merged_banks_2.peek_0();
  return value_in_in_update_0_write27;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd56_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd56 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[28 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write28 = in.in_in_update_0_write28_merged_banks_2.peek_4();
  return value_in_in_update_0_write28;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd57_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd57 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[28 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write28 = in.in_in_update_0_write28_merged_banks_2.peek_0();
  return value_in_in_update_0_write28;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd58_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd58 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[29 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write29 = in.in_in_update_0_write29_merged_banks_2.peek_4();
  return value_in_in_update_0_write29;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd59_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd59 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[29 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write29 = in.in_in_update_0_write29_merged_banks_2.peek_0();
  return value_in_in_update_0_write29;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd6_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd6 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[3 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_2.peek_4();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd60_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd60 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[30 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write30 = in.in_in_update_0_write30_merged_banks_2.peek_4();
  return value_in_in_update_0_write30;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd61_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd61 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[30 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write30 = in.in_in_update_0_write30_merged_banks_2.peek_0();
  return value_in_in_update_0_write30;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd62_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd62 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[31 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write31 = in.in_in_update_0_write31_merged_banks_2.peek_4();
  return value_in_in_update_0_write31;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd63_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd63 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[31 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write31 = in.in_in_update_0_write31_merged_banks_2.peek_0();
  return value_in_in_update_0_write31;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd7_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd7 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[3 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_2.peek_0();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd8_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd8 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[4 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_2.peek_4();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<16> mpr16b_32_32_rd9_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mpr16b_32_32_rd9 read pattern: { mpr16b_32_32_update_0[d0, d1, d2] -> in[4 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
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
inline void in_in_update_0_write_bundle_write(hw_uint<512>& in_update_0_write, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
	hw_uint<16> in_in_update_0_write0_res = in_update_0_write.extract<0, 15>();
	in_in_update_0_write0_write(in_in_update_0_write0_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write1_res = in_update_0_write.extract<16, 31>();
	in_in_update_0_write1_write(in_in_update_0_write1_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write2_res = in_update_0_write.extract<32, 47>();
	in_in_update_0_write2_write(in_in_update_0_write2_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write3_res = in_update_0_write.extract<48, 63>();
	in_in_update_0_write3_write(in_in_update_0_write3_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write4_res = in_update_0_write.extract<64, 79>();
	in_in_update_0_write4_write(in_in_update_0_write4_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write5_res = in_update_0_write.extract<80, 95>();
	in_in_update_0_write5_write(in_in_update_0_write5_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write6_res = in_update_0_write.extract<96, 111>();
	in_in_update_0_write6_write(in_in_update_0_write6_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write7_res = in_update_0_write.extract<112, 127>();
	in_in_update_0_write7_write(in_in_update_0_write7_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write8_res = in_update_0_write.extract<128, 143>();
	in_in_update_0_write8_write(in_in_update_0_write8_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write9_res = in_update_0_write.extract<144, 159>();
	in_in_update_0_write9_write(in_in_update_0_write9_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write10_res = in_update_0_write.extract<160, 175>();
	in_in_update_0_write10_write(in_in_update_0_write10_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write11_res = in_update_0_write.extract<176, 191>();
	in_in_update_0_write11_write(in_in_update_0_write11_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write12_res = in_update_0_write.extract<192, 207>();
	in_in_update_0_write12_write(in_in_update_0_write12_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write13_res = in_update_0_write.extract<208, 223>();
	in_in_update_0_write13_write(in_in_update_0_write13_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write14_res = in_update_0_write.extract<224, 239>();
	in_in_update_0_write14_write(in_in_update_0_write14_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write15_res = in_update_0_write.extract<240, 255>();
	in_in_update_0_write15_write(in_in_update_0_write15_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write16_res = in_update_0_write.extract<256, 271>();
	in_in_update_0_write16_write(in_in_update_0_write16_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write17_res = in_update_0_write.extract<272, 287>();
	in_in_update_0_write17_write(in_in_update_0_write17_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write18_res = in_update_0_write.extract<288, 303>();
	in_in_update_0_write18_write(in_in_update_0_write18_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write19_res = in_update_0_write.extract<304, 319>();
	in_in_update_0_write19_write(in_in_update_0_write19_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write20_res = in_update_0_write.extract<320, 335>();
	in_in_update_0_write20_write(in_in_update_0_write20_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write21_res = in_update_0_write.extract<336, 351>();
	in_in_update_0_write21_write(in_in_update_0_write21_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write22_res = in_update_0_write.extract<352, 367>();
	in_in_update_0_write22_write(in_in_update_0_write22_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write23_res = in_update_0_write.extract<368, 383>();
	in_in_update_0_write23_write(in_in_update_0_write23_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write24_res = in_update_0_write.extract<384, 399>();
	in_in_update_0_write24_write(in_in_update_0_write24_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write25_res = in_update_0_write.extract<400, 415>();
	in_in_update_0_write25_write(in_in_update_0_write25_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write26_res = in_update_0_write.extract<416, 431>();
	in_in_update_0_write26_write(in_in_update_0_write26_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write27_res = in_update_0_write.extract<432, 447>();
	in_in_update_0_write27_write(in_in_update_0_write27_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write28_res = in_update_0_write.extract<448, 463>();
	in_in_update_0_write28_write(in_in_update_0_write28_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write29_res = in_update_0_write.extract<464, 479>();
	in_in_update_0_write29_write(in_in_update_0_write29_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write30_res = in_update_0_write.extract<480, 495>();
	in_in_update_0_write30_write(in_in_update_0_write30_res, in, d0, d1, d2, dynamic_address);
	hw_uint<16> in_in_update_0_write31_res = in_update_0_write.extract<496, 511>();
	in_in_update_0_write31_write(in_in_update_0_write31_res, in, d0, d1, d2, dynamic_address);
}

// mpr16b_32_32_update_0_read
//	mpr16b_32_32_rd0
//	mpr16b_32_32_rd1
//	mpr16b_32_32_rd2
//	mpr16b_32_32_rd3
//	mpr16b_32_32_rd4
//	mpr16b_32_32_rd5
//	mpr16b_32_32_rd6
//	mpr16b_32_32_rd7
//	mpr16b_32_32_rd8
//	mpr16b_32_32_rd9
//	mpr16b_32_32_rd10
//	mpr16b_32_32_rd11
//	mpr16b_32_32_rd12
//	mpr16b_32_32_rd13
//	mpr16b_32_32_rd14
//	mpr16b_32_32_rd15
//	mpr16b_32_32_rd16
//	mpr16b_32_32_rd17
//	mpr16b_32_32_rd18
//	mpr16b_32_32_rd19
//	mpr16b_32_32_rd20
//	mpr16b_32_32_rd21
//	mpr16b_32_32_rd22
//	mpr16b_32_32_rd23
//	mpr16b_32_32_rd24
//	mpr16b_32_32_rd25
//	mpr16b_32_32_rd26
//	mpr16b_32_32_rd27
//	mpr16b_32_32_rd28
//	mpr16b_32_32_rd29
//	mpr16b_32_32_rd30
//	mpr16b_32_32_rd31
//	mpr16b_32_32_rd32
//	mpr16b_32_32_rd33
//	mpr16b_32_32_rd34
//	mpr16b_32_32_rd35
//	mpr16b_32_32_rd36
//	mpr16b_32_32_rd37
//	mpr16b_32_32_rd38
//	mpr16b_32_32_rd39
//	mpr16b_32_32_rd40
//	mpr16b_32_32_rd41
//	mpr16b_32_32_rd42
//	mpr16b_32_32_rd43
//	mpr16b_32_32_rd44
//	mpr16b_32_32_rd45
//	mpr16b_32_32_rd46
//	mpr16b_32_32_rd47
//	mpr16b_32_32_rd48
//	mpr16b_32_32_rd49
//	mpr16b_32_32_rd50
//	mpr16b_32_32_rd51
//	mpr16b_32_32_rd52
//	mpr16b_32_32_rd53
//	mpr16b_32_32_rd54
//	mpr16b_32_32_rd55
//	mpr16b_32_32_rd56
//	mpr16b_32_32_rd57
//	mpr16b_32_32_rd58
//	mpr16b_32_32_rd59
//	mpr16b_32_32_rd60
//	mpr16b_32_32_rd61
//	mpr16b_32_32_rd62
//	mpr16b_32_32_rd63
inline hw_uint<1024> in_mpr16b_32_32_update_0_read_bundle_read(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 64
    // mpr16b_32_32_rd0
    // mpr16b_32_32_rd1
    // mpr16b_32_32_rd2
    // mpr16b_32_32_rd3
    // mpr16b_32_32_rd4
    // mpr16b_32_32_rd5
    // mpr16b_32_32_rd6
    // mpr16b_32_32_rd7
    // mpr16b_32_32_rd8
    // mpr16b_32_32_rd9
    // mpr16b_32_32_rd10
    // mpr16b_32_32_rd11
    // mpr16b_32_32_rd12
    // mpr16b_32_32_rd13
    // mpr16b_32_32_rd14
    // mpr16b_32_32_rd15
    // mpr16b_32_32_rd16
    // mpr16b_32_32_rd17
    // mpr16b_32_32_rd18
    // mpr16b_32_32_rd19
    // mpr16b_32_32_rd20
    // mpr16b_32_32_rd21
    // mpr16b_32_32_rd22
    // mpr16b_32_32_rd23
    // mpr16b_32_32_rd24
    // mpr16b_32_32_rd25
    // mpr16b_32_32_rd26
    // mpr16b_32_32_rd27
    // mpr16b_32_32_rd28
    // mpr16b_32_32_rd29
    // mpr16b_32_32_rd30
    // mpr16b_32_32_rd31
    // mpr16b_32_32_rd32
    // mpr16b_32_32_rd33
    // mpr16b_32_32_rd34
    // mpr16b_32_32_rd35
    // mpr16b_32_32_rd36
    // mpr16b_32_32_rd37
    // mpr16b_32_32_rd38
    // mpr16b_32_32_rd39
    // mpr16b_32_32_rd40
    // mpr16b_32_32_rd41
    // mpr16b_32_32_rd42
    // mpr16b_32_32_rd43
    // mpr16b_32_32_rd44
    // mpr16b_32_32_rd45
    // mpr16b_32_32_rd46
    // mpr16b_32_32_rd47
    // mpr16b_32_32_rd48
    // mpr16b_32_32_rd49
    // mpr16b_32_32_rd50
    // mpr16b_32_32_rd51
    // mpr16b_32_32_rd52
    // mpr16b_32_32_rd53
    // mpr16b_32_32_rd54
    // mpr16b_32_32_rd55
    // mpr16b_32_32_rd56
    // mpr16b_32_32_rd57
    // mpr16b_32_32_rd58
    // mpr16b_32_32_rd59
    // mpr16b_32_32_rd60
    // mpr16b_32_32_rd61
    // mpr16b_32_32_rd62
    // mpr16b_32_32_rd63

	hw_uint<1024> result;
	hw_uint<16> mpr16b_32_32_rd0_res = mpr16b_32_32_rd0_select(in, d0, d1, d2, dynamic_address);
	set_at<0, 1024>(result, mpr16b_32_32_rd0_res);
	hw_uint<16> mpr16b_32_32_rd1_res = mpr16b_32_32_rd1_select(in, d0, d1, d2, dynamic_address);
	set_at<16, 1024>(result, mpr16b_32_32_rd1_res);
	hw_uint<16> mpr16b_32_32_rd2_res = mpr16b_32_32_rd2_select(in, d0, d1, d2, dynamic_address);
	set_at<32, 1024>(result, mpr16b_32_32_rd2_res);
	hw_uint<16> mpr16b_32_32_rd3_res = mpr16b_32_32_rd3_select(in, d0, d1, d2, dynamic_address);
	set_at<48, 1024>(result, mpr16b_32_32_rd3_res);
	hw_uint<16> mpr16b_32_32_rd4_res = mpr16b_32_32_rd4_select(in, d0, d1, d2, dynamic_address);
	set_at<64, 1024>(result, mpr16b_32_32_rd4_res);
	hw_uint<16> mpr16b_32_32_rd5_res = mpr16b_32_32_rd5_select(in, d0, d1, d2, dynamic_address);
	set_at<80, 1024>(result, mpr16b_32_32_rd5_res);
	hw_uint<16> mpr16b_32_32_rd6_res = mpr16b_32_32_rd6_select(in, d0, d1, d2, dynamic_address);
	set_at<96, 1024>(result, mpr16b_32_32_rd6_res);
	hw_uint<16> mpr16b_32_32_rd7_res = mpr16b_32_32_rd7_select(in, d0, d1, d2, dynamic_address);
	set_at<112, 1024>(result, mpr16b_32_32_rd7_res);
	hw_uint<16> mpr16b_32_32_rd8_res = mpr16b_32_32_rd8_select(in, d0, d1, d2, dynamic_address);
	set_at<128, 1024>(result, mpr16b_32_32_rd8_res);
	hw_uint<16> mpr16b_32_32_rd9_res = mpr16b_32_32_rd9_select(in, d0, d1, d2, dynamic_address);
	set_at<144, 1024>(result, mpr16b_32_32_rd9_res);
	hw_uint<16> mpr16b_32_32_rd10_res = mpr16b_32_32_rd10_select(in, d0, d1, d2, dynamic_address);
	set_at<160, 1024>(result, mpr16b_32_32_rd10_res);
	hw_uint<16> mpr16b_32_32_rd11_res = mpr16b_32_32_rd11_select(in, d0, d1, d2, dynamic_address);
	set_at<176, 1024>(result, mpr16b_32_32_rd11_res);
	hw_uint<16> mpr16b_32_32_rd12_res = mpr16b_32_32_rd12_select(in, d0, d1, d2, dynamic_address);
	set_at<192, 1024>(result, mpr16b_32_32_rd12_res);
	hw_uint<16> mpr16b_32_32_rd13_res = mpr16b_32_32_rd13_select(in, d0, d1, d2, dynamic_address);
	set_at<208, 1024>(result, mpr16b_32_32_rd13_res);
	hw_uint<16> mpr16b_32_32_rd14_res = mpr16b_32_32_rd14_select(in, d0, d1, d2, dynamic_address);
	set_at<224, 1024>(result, mpr16b_32_32_rd14_res);
	hw_uint<16> mpr16b_32_32_rd15_res = mpr16b_32_32_rd15_select(in, d0, d1, d2, dynamic_address);
	set_at<240, 1024>(result, mpr16b_32_32_rd15_res);
	hw_uint<16> mpr16b_32_32_rd16_res = mpr16b_32_32_rd16_select(in, d0, d1, d2, dynamic_address);
	set_at<256, 1024>(result, mpr16b_32_32_rd16_res);
	hw_uint<16> mpr16b_32_32_rd17_res = mpr16b_32_32_rd17_select(in, d0, d1, d2, dynamic_address);
	set_at<272, 1024>(result, mpr16b_32_32_rd17_res);
	hw_uint<16> mpr16b_32_32_rd18_res = mpr16b_32_32_rd18_select(in, d0, d1, d2, dynamic_address);
	set_at<288, 1024>(result, mpr16b_32_32_rd18_res);
	hw_uint<16> mpr16b_32_32_rd19_res = mpr16b_32_32_rd19_select(in, d0, d1, d2, dynamic_address);
	set_at<304, 1024>(result, mpr16b_32_32_rd19_res);
	hw_uint<16> mpr16b_32_32_rd20_res = mpr16b_32_32_rd20_select(in, d0, d1, d2, dynamic_address);
	set_at<320, 1024>(result, mpr16b_32_32_rd20_res);
	hw_uint<16> mpr16b_32_32_rd21_res = mpr16b_32_32_rd21_select(in, d0, d1, d2, dynamic_address);
	set_at<336, 1024>(result, mpr16b_32_32_rd21_res);
	hw_uint<16> mpr16b_32_32_rd22_res = mpr16b_32_32_rd22_select(in, d0, d1, d2, dynamic_address);
	set_at<352, 1024>(result, mpr16b_32_32_rd22_res);
	hw_uint<16> mpr16b_32_32_rd23_res = mpr16b_32_32_rd23_select(in, d0, d1, d2, dynamic_address);
	set_at<368, 1024>(result, mpr16b_32_32_rd23_res);
	hw_uint<16> mpr16b_32_32_rd24_res = mpr16b_32_32_rd24_select(in, d0, d1, d2, dynamic_address);
	set_at<384, 1024>(result, mpr16b_32_32_rd24_res);
	hw_uint<16> mpr16b_32_32_rd25_res = mpr16b_32_32_rd25_select(in, d0, d1, d2, dynamic_address);
	set_at<400, 1024>(result, mpr16b_32_32_rd25_res);
	hw_uint<16> mpr16b_32_32_rd26_res = mpr16b_32_32_rd26_select(in, d0, d1, d2, dynamic_address);
	set_at<416, 1024>(result, mpr16b_32_32_rd26_res);
	hw_uint<16> mpr16b_32_32_rd27_res = mpr16b_32_32_rd27_select(in, d0, d1, d2, dynamic_address);
	set_at<432, 1024>(result, mpr16b_32_32_rd27_res);
	hw_uint<16> mpr16b_32_32_rd28_res = mpr16b_32_32_rd28_select(in, d0, d1, d2, dynamic_address);
	set_at<448, 1024>(result, mpr16b_32_32_rd28_res);
	hw_uint<16> mpr16b_32_32_rd29_res = mpr16b_32_32_rd29_select(in, d0, d1, d2, dynamic_address);
	set_at<464, 1024>(result, mpr16b_32_32_rd29_res);
	hw_uint<16> mpr16b_32_32_rd30_res = mpr16b_32_32_rd30_select(in, d0, d1, d2, dynamic_address);
	set_at<480, 1024>(result, mpr16b_32_32_rd30_res);
	hw_uint<16> mpr16b_32_32_rd31_res = mpr16b_32_32_rd31_select(in, d0, d1, d2, dynamic_address);
	set_at<496, 1024>(result, mpr16b_32_32_rd31_res);
	hw_uint<16> mpr16b_32_32_rd32_res = mpr16b_32_32_rd32_select(in, d0, d1, d2, dynamic_address);
	set_at<512, 1024>(result, mpr16b_32_32_rd32_res);
	hw_uint<16> mpr16b_32_32_rd33_res = mpr16b_32_32_rd33_select(in, d0, d1, d2, dynamic_address);
	set_at<528, 1024>(result, mpr16b_32_32_rd33_res);
	hw_uint<16> mpr16b_32_32_rd34_res = mpr16b_32_32_rd34_select(in, d0, d1, d2, dynamic_address);
	set_at<544, 1024>(result, mpr16b_32_32_rd34_res);
	hw_uint<16> mpr16b_32_32_rd35_res = mpr16b_32_32_rd35_select(in, d0, d1, d2, dynamic_address);
	set_at<560, 1024>(result, mpr16b_32_32_rd35_res);
	hw_uint<16> mpr16b_32_32_rd36_res = mpr16b_32_32_rd36_select(in, d0, d1, d2, dynamic_address);
	set_at<576, 1024>(result, mpr16b_32_32_rd36_res);
	hw_uint<16> mpr16b_32_32_rd37_res = mpr16b_32_32_rd37_select(in, d0, d1, d2, dynamic_address);
	set_at<592, 1024>(result, mpr16b_32_32_rd37_res);
	hw_uint<16> mpr16b_32_32_rd38_res = mpr16b_32_32_rd38_select(in, d0, d1, d2, dynamic_address);
	set_at<608, 1024>(result, mpr16b_32_32_rd38_res);
	hw_uint<16> mpr16b_32_32_rd39_res = mpr16b_32_32_rd39_select(in, d0, d1, d2, dynamic_address);
	set_at<624, 1024>(result, mpr16b_32_32_rd39_res);
	hw_uint<16> mpr16b_32_32_rd40_res = mpr16b_32_32_rd40_select(in, d0, d1, d2, dynamic_address);
	set_at<640, 1024>(result, mpr16b_32_32_rd40_res);
	hw_uint<16> mpr16b_32_32_rd41_res = mpr16b_32_32_rd41_select(in, d0, d1, d2, dynamic_address);
	set_at<656, 1024>(result, mpr16b_32_32_rd41_res);
	hw_uint<16> mpr16b_32_32_rd42_res = mpr16b_32_32_rd42_select(in, d0, d1, d2, dynamic_address);
	set_at<672, 1024>(result, mpr16b_32_32_rd42_res);
	hw_uint<16> mpr16b_32_32_rd43_res = mpr16b_32_32_rd43_select(in, d0, d1, d2, dynamic_address);
	set_at<688, 1024>(result, mpr16b_32_32_rd43_res);
	hw_uint<16> mpr16b_32_32_rd44_res = mpr16b_32_32_rd44_select(in, d0, d1, d2, dynamic_address);
	set_at<704, 1024>(result, mpr16b_32_32_rd44_res);
	hw_uint<16> mpr16b_32_32_rd45_res = mpr16b_32_32_rd45_select(in, d0, d1, d2, dynamic_address);
	set_at<720, 1024>(result, mpr16b_32_32_rd45_res);
	hw_uint<16> mpr16b_32_32_rd46_res = mpr16b_32_32_rd46_select(in, d0, d1, d2, dynamic_address);
	set_at<736, 1024>(result, mpr16b_32_32_rd46_res);
	hw_uint<16> mpr16b_32_32_rd47_res = mpr16b_32_32_rd47_select(in, d0, d1, d2, dynamic_address);
	set_at<752, 1024>(result, mpr16b_32_32_rd47_res);
	hw_uint<16> mpr16b_32_32_rd48_res = mpr16b_32_32_rd48_select(in, d0, d1, d2, dynamic_address);
	set_at<768, 1024>(result, mpr16b_32_32_rd48_res);
	hw_uint<16> mpr16b_32_32_rd49_res = mpr16b_32_32_rd49_select(in, d0, d1, d2, dynamic_address);
	set_at<784, 1024>(result, mpr16b_32_32_rd49_res);
	hw_uint<16> mpr16b_32_32_rd50_res = mpr16b_32_32_rd50_select(in, d0, d1, d2, dynamic_address);
	set_at<800, 1024>(result, mpr16b_32_32_rd50_res);
	hw_uint<16> mpr16b_32_32_rd51_res = mpr16b_32_32_rd51_select(in, d0, d1, d2, dynamic_address);
	set_at<816, 1024>(result, mpr16b_32_32_rd51_res);
	hw_uint<16> mpr16b_32_32_rd52_res = mpr16b_32_32_rd52_select(in, d0, d1, d2, dynamic_address);
	set_at<832, 1024>(result, mpr16b_32_32_rd52_res);
	hw_uint<16> mpr16b_32_32_rd53_res = mpr16b_32_32_rd53_select(in, d0, d1, d2, dynamic_address);
	set_at<848, 1024>(result, mpr16b_32_32_rd53_res);
	hw_uint<16> mpr16b_32_32_rd54_res = mpr16b_32_32_rd54_select(in, d0, d1, d2, dynamic_address);
	set_at<864, 1024>(result, mpr16b_32_32_rd54_res);
	hw_uint<16> mpr16b_32_32_rd55_res = mpr16b_32_32_rd55_select(in, d0, d1, d2, dynamic_address);
	set_at<880, 1024>(result, mpr16b_32_32_rd55_res);
	hw_uint<16> mpr16b_32_32_rd56_res = mpr16b_32_32_rd56_select(in, d0, d1, d2, dynamic_address);
	set_at<896, 1024>(result, mpr16b_32_32_rd56_res);
	hw_uint<16> mpr16b_32_32_rd57_res = mpr16b_32_32_rd57_select(in, d0, d1, d2, dynamic_address);
	set_at<912, 1024>(result, mpr16b_32_32_rd57_res);
	hw_uint<16> mpr16b_32_32_rd58_res = mpr16b_32_32_rd58_select(in, d0, d1, d2, dynamic_address);
	set_at<928, 1024>(result, mpr16b_32_32_rd58_res);
	hw_uint<16> mpr16b_32_32_rd59_res = mpr16b_32_32_rd59_select(in, d0, d1, d2, dynamic_address);
	set_at<944, 1024>(result, mpr16b_32_32_rd59_res);
	hw_uint<16> mpr16b_32_32_rd60_res = mpr16b_32_32_rd60_select(in, d0, d1, d2, dynamic_address);
	set_at<960, 1024>(result, mpr16b_32_32_rd60_res);
	hw_uint<16> mpr16b_32_32_rd61_res = mpr16b_32_32_rd61_select(in, d0, d1, d2, dynamic_address);
	set_at<976, 1024>(result, mpr16b_32_32_rd61_res);
	hw_uint<16> mpr16b_32_32_rd62_res = mpr16b_32_32_rd62_select(in, d0, d1, d2, dynamic_address);
	set_at<992, 1024>(result, mpr16b_32_32_rd62_res);
	hw_uint<16> mpr16b_32_32_rd63_res = mpr16b_32_32_rd63_select(in, d0, d1, d2, dynamic_address);
	set_at<1008, 1024>(result, mpr16b_32_32_rd63_res);
	return result;
}

// Total re-use buffer capacity: 2048 bits


// Operation logic
inline void mpr16b_32_32_update_0(in_cache& in, HWStream<hw_uint<256> >& /* buffer_args num ports = 16 */mpr16b_32_32, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_mpr16b_32_32_update_0_read_bundle_read(in/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = max_pool_2x2_unrolled_16(in_0_c__0_value);
	// Produce: mpr16b_32_32
	mpr16b_32_32.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_update_0(HWStream<hw_uint<512> >& /* buffer_args num ports = 32 */in_oc, in_cache& in, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in_oc
	auto in_oc_0_c__0_value = in_oc.read();
	auto compute_result = id_unrolled_32(in_oc_0_c__0_value);
	// Produce: in
	in_in_update_0_write_bundle_write(/* arg names */compute_result, in, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void mpr16b_32_32_opt(HWStream<hw_uint<512> >& /* get_args num ports = 32 */in_oc, HWStream<hw_uint<256> >& /* get_args num ports = 16 */mpr16b_32_32) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("mpr16b_32_32_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63; mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
//   { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
// Condition for in_update_0(((-1 + i3 == 0) && (i2 >= 0) && (3 - i2 >= 0) && (i1 >= 0) && (127 - i1 >= 0) && (i0 >= 0) && (63 - i0 >= 0)))
//   { mpr16b_32_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for mpr16b_32_32_update_0(((-1 - i1 + 2*floord(1 + i1, 2) == 0) && (-2 + i3 == 0) && (i2 >= 0) && (3 - i2 >= 0) && (-1 + i1 >= 0) && (127 - i1 >= 0) && (i0 >= 0) && (63 - i0 >= 0)))

  /*
  // Schedules...
    // in_oc_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // in_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // mpr16b_32_32_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*2 + 1*1,1*d0*1*1 + 1*0,1*2]
for (int c0 = 0; c0 <= 63; c0++) {
  for (int c1 = 0; c1 <= 127; c1++) {
    for (int c2 = 0; c2 <= 3; c2++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

      if ((0 <= c2 && c2 <= 3) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 127) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
        in_update_0((c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
      }

      if ((0 <= c2 && c2 <= 3) && ((c2 - 0) % 1 == 0) && (1 <= c1 && c1 <= 127) && ((c1 - 1) % 2 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
        mpr16b_32_32_update_0((c2 - 0) / 1, (c1 - 1) / 2, (c0 - 0) / 1);
      }

    }
  }
}

  */
	  // Schedules...
	    // in_oc_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // mpr16b_32_32_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*2 + 1*1,1*d0*1*1 + 1*0,1*2]
	for (int c0 = 0; c0 <= 63; c0++) {
	  for (int c1 = 0; c1 <= 127; c1++) {
	    for (int c2 = 0; c2 <= 3; c2++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	      if ((0 <= c2 && c2 <= 3) && ((c2 - 0) % 1 == 0) && (0 <= c1 && c1 <= 127) && ((c1 - 0) % 1 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
	        in_update_0(in_oc /* buf name */, in, (c2 - 0) / 1, (c1 - 0) / 1, (c0 - 0) / 1);
	      }
	
	      if ((0 <= c2 && c2 <= 3) && ((c2 - 0) % 1 == 0) && (1 <= c1 && c1 <= 127) && ((c1 - 1) % 2 == 0) && (0 <= c0 && c0 <= 63) && ((c0 - 0) % 1 == 0)) {
	        mpr16b_32_32_update_0(in /* buf name */, mpr16b_32_32, (c2 - 0) / 1, (c1 - 1) / 2, (c0 - 0) / 1);
	      }
	
	    }
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void mpr16b_32_32_opt_wrapper(HWStream<hw_uint<512> >& /* get_args num ports = 32 */in_oc, HWStream<hw_uint<256> >& /* get_args num ports = 16 */mpr16b_32_32, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    mpr16b_32_32_opt(in_oc, mpr16b_32_32);
  }
}
#ifdef __VIVADO_SYNTH__
  // { in_update_0[root = 0, in_0, in_1, in_2] -> in_oc[0, 0] : 0 <= in_0 <= 3 and 0 <= in_1 <= 127 and 0 <= in_2 <= 63 }
const int in_update_0_read_pipe0_num_transfers = 32768;
  // { mpr16b_32_32_update_0[root = 0, mpr16b_32_32_0, mpr16b_32_32_1, mpr16b_32_32_2] -> mpr16b_32_32[0, 0] : 0 <= mpr16b_32_32_0 <= 3 and 0 <= mpr16b_32_32_1 <= 63 and 0 <= mpr16b_32_32_2 <= 63 }
const int mpr16b_32_32_update_0_write_pipe0_num_transfers = 16384;


extern "C" {

void mpr16b_32_32_opt_accel(hw_uint<512>* in_update_0_read_pipe0, hw_uint<256>* mpr16b_32_32_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = mpr16b_32_32_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = mpr16b_32_32_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<512> > in_update_0_read_pipe0_channel;
  static HWStream<hw_uint<256> > mpr16b_32_32_update_0_write_pipe0_channel;

  burst_read<512>(in_update_0_read_pipe0, in_update_0_read_pipe0_channel, in_update_0_read_pipe0_num_transfers*size);

  mpr16b_32_32_opt_wrapper(in_update_0_read_pipe0_channel, mpr16b_32_32_update_0_write_pipe0_channel, size);

  burst_write<256>(mpr16b_32_32_update_0_write_pipe0, mpr16b_32_32_update_0_write_pipe0_channel, mpr16b_32_32_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void mpr16b_32_32_opt_rdai(HWStream<hw_uint<512> >& in_update_0_read_pipe0, HWStream<hw_uint<256> >&  mpr16b_32_32_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = mpr16b_32_32_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  mpr16b_32_32_opt(in_update_0_read_pipe0, mpr16b_32_32_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

