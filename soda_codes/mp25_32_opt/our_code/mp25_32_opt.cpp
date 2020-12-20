#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: mp25_32_opt_compute_units.h
#include "mp25_32_opt_compute_units.h"

#include "hw_classes.h"

struct in_in_update_0_write0_merged_banks_2_cache {
	// RAM Box: {[0, 96], [0, 127], [0, 63]}
	// Capacity: 5
	// # of read delays: 2
  // 0, 4
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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
	hw_uint<32>  f0;
	fifo<hw_uint<32> , 3> f1;
	hw_uint<32>  f2;


	inline hw_uint<32>  peek_0() {
		return f0;
	}

	inline hw_uint<32>  peek_3() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f1.back();
	}

	inline hw_uint<32>  peek_4() {
		return f2;
	}



	inline void push(const hw_uint<32>  value) {
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



inline void in_in_update_0_write0_write(hw_uint<32> & in_in_update_0_write0, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write0_merged_banks_2.push(in_in_update_0_write0);
}

inline void in_in_update_0_write1_write(hw_uint<32> & in_in_update_0_write1, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write1_merged_banks_2.push(in_in_update_0_write1);
}

inline void in_in_update_0_write10_write(hw_uint<32> & in_in_update_0_write10, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write10_merged_banks_2.push(in_in_update_0_write10);
}

inline void in_in_update_0_write11_write(hw_uint<32> & in_in_update_0_write11, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write11_merged_banks_2.push(in_in_update_0_write11);
}

inline void in_in_update_0_write12_write(hw_uint<32> & in_in_update_0_write12, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write12_merged_banks_2.push(in_in_update_0_write12);
}

inline void in_in_update_0_write13_write(hw_uint<32> & in_in_update_0_write13, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write13_merged_banks_2.push(in_in_update_0_write13);
}

inline void in_in_update_0_write14_write(hw_uint<32> & in_in_update_0_write14, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write14_merged_banks_2.push(in_in_update_0_write14);
}

inline void in_in_update_0_write15_write(hw_uint<32> & in_in_update_0_write15, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write15_merged_banks_2.push(in_in_update_0_write15);
}

inline void in_in_update_0_write16_write(hw_uint<32> & in_in_update_0_write16, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write16_merged_banks_2.push(in_in_update_0_write16);
}

inline void in_in_update_0_write17_write(hw_uint<32> & in_in_update_0_write17, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write17_merged_banks_2.push(in_in_update_0_write17);
}

inline void in_in_update_0_write18_write(hw_uint<32> & in_in_update_0_write18, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write18_merged_banks_2.push(in_in_update_0_write18);
}

inline void in_in_update_0_write19_write(hw_uint<32> & in_in_update_0_write19, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write19_merged_banks_2.push(in_in_update_0_write19);
}

inline void in_in_update_0_write2_write(hw_uint<32> & in_in_update_0_write2, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write2_merged_banks_2.push(in_in_update_0_write2);
}

inline void in_in_update_0_write20_write(hw_uint<32> & in_in_update_0_write20, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write20_merged_banks_2.push(in_in_update_0_write20);
}

inline void in_in_update_0_write21_write(hw_uint<32> & in_in_update_0_write21, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write21_merged_banks_2.push(in_in_update_0_write21);
}

inline void in_in_update_0_write22_write(hw_uint<32> & in_in_update_0_write22, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write22_merged_banks_2.push(in_in_update_0_write22);
}

inline void in_in_update_0_write23_write(hw_uint<32> & in_in_update_0_write23, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write23_merged_banks_2.push(in_in_update_0_write23);
}

inline void in_in_update_0_write24_write(hw_uint<32> & in_in_update_0_write24, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write24_merged_banks_2.push(in_in_update_0_write24);
}

inline void in_in_update_0_write25_write(hw_uint<32> & in_in_update_0_write25, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write25_merged_banks_2.push(in_in_update_0_write25);
}

inline void in_in_update_0_write26_write(hw_uint<32> & in_in_update_0_write26, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write26_merged_banks_2.push(in_in_update_0_write26);
}

inline void in_in_update_0_write27_write(hw_uint<32> & in_in_update_0_write27, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write27_merged_banks_2.push(in_in_update_0_write27);
}

inline void in_in_update_0_write28_write(hw_uint<32> & in_in_update_0_write28, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write28_merged_banks_2.push(in_in_update_0_write28);
}

inline void in_in_update_0_write29_write(hw_uint<32> & in_in_update_0_write29, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write29_merged_banks_2.push(in_in_update_0_write29);
}

inline void in_in_update_0_write3_write(hw_uint<32> & in_in_update_0_write3, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write3_merged_banks_2.push(in_in_update_0_write3);
}

inline void in_in_update_0_write30_write(hw_uint<32> & in_in_update_0_write30, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write30_merged_banks_2.push(in_in_update_0_write30);
}

inline void in_in_update_0_write31_write(hw_uint<32> & in_in_update_0_write31, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write31_merged_banks_2.push(in_in_update_0_write31);
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

inline void in_in_update_0_write8_write(hw_uint<32> & in_in_update_0_write8, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write8_merged_banks_2.push(in_in_update_0_write8);
}

inline void in_in_update_0_write9_write(hw_uint<32> & in_in_update_0_write9, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  in.in_in_update_0_write9_merged_banks_2.push(in_in_update_0_write9);
}

inline hw_uint<32>  mp25_32_rd0_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd0 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek_4();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<32>  mp25_32_rd1_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd1 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write0 = in.in_in_update_0_write0_merged_banks_2.peek_0();
  return value_in_in_update_0_write0;
  return 0;
}

inline hw_uint<32>  mp25_32_rd10_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd10 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[5 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_2.peek_4();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<32>  mp25_32_rd11_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd11 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[5 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write5 = in.in_in_update_0_write5_merged_banks_2.peek_0();
  return value_in_in_update_0_write5;
  return 0;
}

inline hw_uint<32>  mp25_32_rd12_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd12 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[6 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_2.peek_4();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<32>  mp25_32_rd13_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd13 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[6 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write6 = in.in_in_update_0_write6_merged_banks_2.peek_0();
  return value_in_in_update_0_write6;
  return 0;
}

inline hw_uint<32>  mp25_32_rd14_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd14 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[7 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_2.peek_4();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<32>  mp25_32_rd15_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd15 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[7 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write7 = in.in_in_update_0_write7_merged_banks_2.peek_0();
  return value_in_in_update_0_write7;
  return 0;
}

inline hw_uint<32>  mp25_32_rd16_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd16 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[8 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_2.peek_4();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<32>  mp25_32_rd17_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd17 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[8 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write8 = in.in_in_update_0_write8_merged_banks_2.peek_0();
  return value_in_in_update_0_write8;
  return 0;
}

inline hw_uint<32>  mp25_32_rd18_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd18 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[9 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_2.peek_4();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<32>  mp25_32_rd19_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd19 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[9 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write9 = in.in_in_update_0_write9_merged_banks_2.peek_0();
  return value_in_in_update_0_write9;
  return 0;
}

inline hw_uint<32>  mp25_32_rd2_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd2 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[1 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_2.peek_4();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<32>  mp25_32_rd20_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd20 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[10 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_2.peek_4();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<32>  mp25_32_rd21_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd21 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[10 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write10 = in.in_in_update_0_write10_merged_banks_2.peek_0();
  return value_in_in_update_0_write10;
  return 0;
}

inline hw_uint<32>  mp25_32_rd22_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd22 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[11 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_2.peek_4();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<32>  mp25_32_rd23_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd23 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[11 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write11 = in.in_in_update_0_write11_merged_banks_2.peek_0();
  return value_in_in_update_0_write11;
  return 0;
}

inline hw_uint<32>  mp25_32_rd24_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd24 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[12 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_2.peek_4();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<32>  mp25_32_rd25_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd25 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[12 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write12 = in.in_in_update_0_write12_merged_banks_2.peek_0();
  return value_in_in_update_0_write12;
  return 0;
}

inline hw_uint<32>  mp25_32_rd26_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd26 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[13 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_2.peek_4();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<32>  mp25_32_rd27_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd27 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[13 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write13 = in.in_in_update_0_write13_merged_banks_2.peek_0();
  return value_in_in_update_0_write13;
  return 0;
}

inline hw_uint<32>  mp25_32_rd28_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd28 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[14 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_2.peek_4();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<32>  mp25_32_rd29_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd29 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[14 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write14 = in.in_in_update_0_write14_merged_banks_2.peek_0();
  return value_in_in_update_0_write14;
  return 0;
}

inline hw_uint<32>  mp25_32_rd3_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd3 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[1 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write1 = in.in_in_update_0_write1_merged_banks_2.peek_0();
  return value_in_in_update_0_write1;
  return 0;
}

inline hw_uint<32>  mp25_32_rd30_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd30 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[15 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_2.peek_4();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<32>  mp25_32_rd31_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd31 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[15 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write15 = in.in_in_update_0_write15_merged_banks_2.peek_0();
  return value_in_in_update_0_write15;
  return 0;
}

inline hw_uint<32>  mp25_32_rd32_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd32 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[16 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write16 = in.in_in_update_0_write16_merged_banks_2.peek_4();
  return value_in_in_update_0_write16;
  return 0;
}

inline hw_uint<32>  mp25_32_rd33_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd33 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[16 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write16 = in.in_in_update_0_write16_merged_banks_2.peek_0();
  return value_in_in_update_0_write16;
  return 0;
}

inline hw_uint<32>  mp25_32_rd34_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd34 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[17 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write17 = in.in_in_update_0_write17_merged_banks_2.peek_4();
  return value_in_in_update_0_write17;
  return 0;
}

inline hw_uint<32>  mp25_32_rd35_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd35 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[17 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write17 = in.in_in_update_0_write17_merged_banks_2.peek_0();
  return value_in_in_update_0_write17;
  return 0;
}

inline hw_uint<32>  mp25_32_rd36_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd36 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[18 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write18 = in.in_in_update_0_write18_merged_banks_2.peek_4();
  return value_in_in_update_0_write18;
  return 0;
}

inline hw_uint<32>  mp25_32_rd37_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd37 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[18 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write18 = in.in_in_update_0_write18_merged_banks_2.peek_0();
  return value_in_in_update_0_write18;
  return 0;
}

inline hw_uint<32>  mp25_32_rd38_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd38 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[19 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write19 = in.in_in_update_0_write19_merged_banks_2.peek_4();
  return value_in_in_update_0_write19;
  return 0;
}

inline hw_uint<32>  mp25_32_rd39_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd39 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[19 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write19 = in.in_in_update_0_write19_merged_banks_2.peek_0();
  return value_in_in_update_0_write19;
  return 0;
}

inline hw_uint<32>  mp25_32_rd4_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd4 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[2 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_2.peek_4();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<32>  mp25_32_rd40_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd40 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[20 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write20 = in.in_in_update_0_write20_merged_banks_2.peek_4();
  return value_in_in_update_0_write20;
  return 0;
}

inline hw_uint<32>  mp25_32_rd41_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd41 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[20 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write20 = in.in_in_update_0_write20_merged_banks_2.peek_0();
  return value_in_in_update_0_write20;
  return 0;
}

inline hw_uint<32>  mp25_32_rd42_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd42 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[21 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write21 = in.in_in_update_0_write21_merged_banks_2.peek_4();
  return value_in_in_update_0_write21;
  return 0;
}

inline hw_uint<32>  mp25_32_rd43_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd43 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[21 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write21 = in.in_in_update_0_write21_merged_banks_2.peek_0();
  return value_in_in_update_0_write21;
  return 0;
}

inline hw_uint<32>  mp25_32_rd44_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd44 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[22 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write22 = in.in_in_update_0_write22_merged_banks_2.peek_4();
  return value_in_in_update_0_write22;
  return 0;
}

inline hw_uint<32>  mp25_32_rd45_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd45 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[22 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write22 = in.in_in_update_0_write22_merged_banks_2.peek_0();
  return value_in_in_update_0_write22;
  return 0;
}

inline hw_uint<32>  mp25_32_rd46_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd46 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[23 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write23 = in.in_in_update_0_write23_merged_banks_2.peek_4();
  return value_in_in_update_0_write23;
  return 0;
}

inline hw_uint<32>  mp25_32_rd47_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd47 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[23 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write23 = in.in_in_update_0_write23_merged_banks_2.peek_0();
  return value_in_in_update_0_write23;
  return 0;
}

inline hw_uint<32>  mp25_32_rd48_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd48 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[24 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write24 = in.in_in_update_0_write24_merged_banks_2.peek_4();
  return value_in_in_update_0_write24;
  return 0;
}

inline hw_uint<32>  mp25_32_rd49_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd49 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[24 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write24 = in.in_in_update_0_write24_merged_banks_2.peek_0();
  return value_in_in_update_0_write24;
  return 0;
}

inline hw_uint<32>  mp25_32_rd5_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd5 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[2 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write2 = in.in_in_update_0_write2_merged_banks_2.peek_0();
  return value_in_in_update_0_write2;
  return 0;
}

inline hw_uint<32>  mp25_32_rd50_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd50 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[25 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write25 = in.in_in_update_0_write25_merged_banks_2.peek_4();
  return value_in_in_update_0_write25;
  return 0;
}

inline hw_uint<32>  mp25_32_rd51_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd51 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[25 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write25 = in.in_in_update_0_write25_merged_banks_2.peek_0();
  return value_in_in_update_0_write25;
  return 0;
}

inline hw_uint<32>  mp25_32_rd52_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd52 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[26 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write26 = in.in_in_update_0_write26_merged_banks_2.peek_4();
  return value_in_in_update_0_write26;
  return 0;
}

inline hw_uint<32>  mp25_32_rd53_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd53 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[26 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write26 = in.in_in_update_0_write26_merged_banks_2.peek_0();
  return value_in_in_update_0_write26;
  return 0;
}

inline hw_uint<32>  mp25_32_rd54_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd54 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[27 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write27 = in.in_in_update_0_write27_merged_banks_2.peek_4();
  return value_in_in_update_0_write27;
  return 0;
}

inline hw_uint<32>  mp25_32_rd55_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd55 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[27 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write27 = in.in_in_update_0_write27_merged_banks_2.peek_0();
  return value_in_in_update_0_write27;
  return 0;
}

inline hw_uint<32>  mp25_32_rd56_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd56 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[28 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write28 = in.in_in_update_0_write28_merged_banks_2.peek_4();
  return value_in_in_update_0_write28;
  return 0;
}

inline hw_uint<32>  mp25_32_rd57_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd57 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[28 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write28 = in.in_in_update_0_write28_merged_banks_2.peek_0();
  return value_in_in_update_0_write28;
  return 0;
}

inline hw_uint<32>  mp25_32_rd58_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd58 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[29 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write29 = in.in_in_update_0_write29_merged_banks_2.peek_4();
  return value_in_in_update_0_write29;
  return 0;
}

inline hw_uint<32>  mp25_32_rd59_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd59 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[29 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write29 = in.in_in_update_0_write29_merged_banks_2.peek_0();
  return value_in_in_update_0_write29;
  return 0;
}

inline hw_uint<32>  mp25_32_rd6_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd6 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[3 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_2.peek_4();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<32>  mp25_32_rd60_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd60 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[30 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write30 = in.in_in_update_0_write30_merged_banks_2.peek_4();
  return value_in_in_update_0_write30;
  return 0;
}

inline hw_uint<32>  mp25_32_rd61_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd61 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[30 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write30 = in.in_in_update_0_write30_merged_banks_2.peek_0();
  return value_in_in_update_0_write30;
  return 0;
}

inline hw_uint<32>  mp25_32_rd62_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd62 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[31 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write31 = in.in_in_update_0_write31_merged_banks_2.peek_4();
  return value_in_in_update_0_write31;
  return 0;
}

inline hw_uint<32>  mp25_32_rd63_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd63 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[31 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write31 = in.in_in_update_0_write31_merged_banks_2.peek_0();
  return value_in_in_update_0_write31;
  return 0;
}

inline hw_uint<32>  mp25_32_rd7_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd7 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[3 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write3 = in.in_in_update_0_write3_merged_banks_2.peek_0();
  return value_in_in_update_0_write3;
  return 0;
}

inline hw_uint<32>  mp25_32_rd8_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd8 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[4 + 32d0, 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Write schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
  auto value_in_in_update_0_write4 = in.in_in_update_0_write4_merged_banks_2.peek_4();
  return value_in_in_update_0_write4;
  return 0;
}

inline hw_uint<32>  mp25_32_rd9_select(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mp25_32_rd9 read pattern: { mp25_32_update_0[d0, d1, d2] -> in[4 + 32d0, 1 + 2d1, d2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
  // Read schedule : { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
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
inline void in_in_update_0_write_bundle_write(hw_uint<1024>& in_update_0_write, in_cache& in, int d0, int d1, int d2, int dynamic_address) {
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
	hw_uint<32>  in_in_update_0_write8_res = in_update_0_write.extract<256, 287>();
	in_in_update_0_write8_write(in_in_update_0_write8_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write9_res = in_update_0_write.extract<288, 319>();
	in_in_update_0_write9_write(in_in_update_0_write9_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write10_res = in_update_0_write.extract<320, 351>();
	in_in_update_0_write10_write(in_in_update_0_write10_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write11_res = in_update_0_write.extract<352, 383>();
	in_in_update_0_write11_write(in_in_update_0_write11_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write12_res = in_update_0_write.extract<384, 415>();
	in_in_update_0_write12_write(in_in_update_0_write12_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write13_res = in_update_0_write.extract<416, 447>();
	in_in_update_0_write13_write(in_in_update_0_write13_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write14_res = in_update_0_write.extract<448, 479>();
	in_in_update_0_write14_write(in_in_update_0_write14_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write15_res = in_update_0_write.extract<480, 511>();
	in_in_update_0_write15_write(in_in_update_0_write15_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write16_res = in_update_0_write.extract<512, 543>();
	in_in_update_0_write16_write(in_in_update_0_write16_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write17_res = in_update_0_write.extract<544, 575>();
	in_in_update_0_write17_write(in_in_update_0_write17_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write18_res = in_update_0_write.extract<576, 607>();
	in_in_update_0_write18_write(in_in_update_0_write18_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write19_res = in_update_0_write.extract<608, 639>();
	in_in_update_0_write19_write(in_in_update_0_write19_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write20_res = in_update_0_write.extract<640, 671>();
	in_in_update_0_write20_write(in_in_update_0_write20_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write21_res = in_update_0_write.extract<672, 703>();
	in_in_update_0_write21_write(in_in_update_0_write21_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write22_res = in_update_0_write.extract<704, 735>();
	in_in_update_0_write22_write(in_in_update_0_write22_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write23_res = in_update_0_write.extract<736, 767>();
	in_in_update_0_write23_write(in_in_update_0_write23_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write24_res = in_update_0_write.extract<768, 799>();
	in_in_update_0_write24_write(in_in_update_0_write24_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write25_res = in_update_0_write.extract<800, 831>();
	in_in_update_0_write25_write(in_in_update_0_write25_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write26_res = in_update_0_write.extract<832, 863>();
	in_in_update_0_write26_write(in_in_update_0_write26_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write27_res = in_update_0_write.extract<864, 895>();
	in_in_update_0_write27_write(in_in_update_0_write27_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write28_res = in_update_0_write.extract<896, 927>();
	in_in_update_0_write28_write(in_in_update_0_write28_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write29_res = in_update_0_write.extract<928, 959>();
	in_in_update_0_write29_write(in_in_update_0_write29_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write30_res = in_update_0_write.extract<960, 991>();
	in_in_update_0_write30_write(in_in_update_0_write30_res, in, d0, d1, d2, dynamic_address);
	hw_uint<32>  in_in_update_0_write31_res = in_update_0_write.extract<992, 1023>();
	in_in_update_0_write31_write(in_in_update_0_write31_res, in, d0, d1, d2, dynamic_address);
}

// mp25_32_update_0_read
//	mp25_32_rd0
//	mp25_32_rd1
//	mp25_32_rd2
//	mp25_32_rd3
//	mp25_32_rd4
//	mp25_32_rd5
//	mp25_32_rd6
//	mp25_32_rd7
//	mp25_32_rd8
//	mp25_32_rd9
//	mp25_32_rd10
//	mp25_32_rd11
//	mp25_32_rd12
//	mp25_32_rd13
//	mp25_32_rd14
//	mp25_32_rd15
//	mp25_32_rd16
//	mp25_32_rd17
//	mp25_32_rd18
//	mp25_32_rd19
//	mp25_32_rd20
//	mp25_32_rd21
//	mp25_32_rd22
//	mp25_32_rd23
//	mp25_32_rd24
//	mp25_32_rd25
//	mp25_32_rd26
//	mp25_32_rd27
//	mp25_32_rd28
//	mp25_32_rd29
//	mp25_32_rd30
//	mp25_32_rd31
//	mp25_32_rd32
//	mp25_32_rd33
//	mp25_32_rd34
//	mp25_32_rd35
//	mp25_32_rd36
//	mp25_32_rd37
//	mp25_32_rd38
//	mp25_32_rd39
//	mp25_32_rd40
//	mp25_32_rd41
//	mp25_32_rd42
//	mp25_32_rd43
//	mp25_32_rd44
//	mp25_32_rd45
//	mp25_32_rd46
//	mp25_32_rd47
//	mp25_32_rd48
//	mp25_32_rd49
//	mp25_32_rd50
//	mp25_32_rd51
//	mp25_32_rd52
//	mp25_32_rd53
//	mp25_32_rd54
//	mp25_32_rd55
//	mp25_32_rd56
//	mp25_32_rd57
//	mp25_32_rd58
//	mp25_32_rd59
//	mp25_32_rd60
//	mp25_32_rd61
//	mp25_32_rd62
//	mp25_32_rd63
inline hw_uint<2048> in_mp25_32_update_0_read_bundle_read(in_cache& in, int d0, int d1, int d2, int dynamic_address) {
  // # of ports in bundle: 64
    // mp25_32_rd0
    // mp25_32_rd1
    // mp25_32_rd2
    // mp25_32_rd3
    // mp25_32_rd4
    // mp25_32_rd5
    // mp25_32_rd6
    // mp25_32_rd7
    // mp25_32_rd8
    // mp25_32_rd9
    // mp25_32_rd10
    // mp25_32_rd11
    // mp25_32_rd12
    // mp25_32_rd13
    // mp25_32_rd14
    // mp25_32_rd15
    // mp25_32_rd16
    // mp25_32_rd17
    // mp25_32_rd18
    // mp25_32_rd19
    // mp25_32_rd20
    // mp25_32_rd21
    // mp25_32_rd22
    // mp25_32_rd23
    // mp25_32_rd24
    // mp25_32_rd25
    // mp25_32_rd26
    // mp25_32_rd27
    // mp25_32_rd28
    // mp25_32_rd29
    // mp25_32_rd30
    // mp25_32_rd31
    // mp25_32_rd32
    // mp25_32_rd33
    // mp25_32_rd34
    // mp25_32_rd35
    // mp25_32_rd36
    // mp25_32_rd37
    // mp25_32_rd38
    // mp25_32_rd39
    // mp25_32_rd40
    // mp25_32_rd41
    // mp25_32_rd42
    // mp25_32_rd43
    // mp25_32_rd44
    // mp25_32_rd45
    // mp25_32_rd46
    // mp25_32_rd47
    // mp25_32_rd48
    // mp25_32_rd49
    // mp25_32_rd50
    // mp25_32_rd51
    // mp25_32_rd52
    // mp25_32_rd53
    // mp25_32_rd54
    // mp25_32_rd55
    // mp25_32_rd56
    // mp25_32_rd57
    // mp25_32_rd58
    // mp25_32_rd59
    // mp25_32_rd60
    // mp25_32_rd61
    // mp25_32_rd62
    // mp25_32_rd63

	hw_uint<2048> result;
	hw_uint<32>  mp25_32_rd0_res = mp25_32_rd0_select(in, d0, d1, d2, dynamic_address);
	set_at<0, 2048>(result, mp25_32_rd0_res);
	hw_uint<32>  mp25_32_rd1_res = mp25_32_rd1_select(in, d0, d1, d2, dynamic_address);
	set_at<32, 2048>(result, mp25_32_rd1_res);
	hw_uint<32>  mp25_32_rd2_res = mp25_32_rd2_select(in, d0, d1, d2, dynamic_address);
	set_at<64, 2048>(result, mp25_32_rd2_res);
	hw_uint<32>  mp25_32_rd3_res = mp25_32_rd3_select(in, d0, d1, d2, dynamic_address);
	set_at<96, 2048>(result, mp25_32_rd3_res);
	hw_uint<32>  mp25_32_rd4_res = mp25_32_rd4_select(in, d0, d1, d2, dynamic_address);
	set_at<128, 2048>(result, mp25_32_rd4_res);
	hw_uint<32>  mp25_32_rd5_res = mp25_32_rd5_select(in, d0, d1, d2, dynamic_address);
	set_at<160, 2048>(result, mp25_32_rd5_res);
	hw_uint<32>  mp25_32_rd6_res = mp25_32_rd6_select(in, d0, d1, d2, dynamic_address);
	set_at<192, 2048>(result, mp25_32_rd6_res);
	hw_uint<32>  mp25_32_rd7_res = mp25_32_rd7_select(in, d0, d1, d2, dynamic_address);
	set_at<224, 2048>(result, mp25_32_rd7_res);
	hw_uint<32>  mp25_32_rd8_res = mp25_32_rd8_select(in, d0, d1, d2, dynamic_address);
	set_at<256, 2048>(result, mp25_32_rd8_res);
	hw_uint<32>  mp25_32_rd9_res = mp25_32_rd9_select(in, d0, d1, d2, dynamic_address);
	set_at<288, 2048>(result, mp25_32_rd9_res);
	hw_uint<32>  mp25_32_rd10_res = mp25_32_rd10_select(in, d0, d1, d2, dynamic_address);
	set_at<320, 2048>(result, mp25_32_rd10_res);
	hw_uint<32>  mp25_32_rd11_res = mp25_32_rd11_select(in, d0, d1, d2, dynamic_address);
	set_at<352, 2048>(result, mp25_32_rd11_res);
	hw_uint<32>  mp25_32_rd12_res = mp25_32_rd12_select(in, d0, d1, d2, dynamic_address);
	set_at<384, 2048>(result, mp25_32_rd12_res);
	hw_uint<32>  mp25_32_rd13_res = mp25_32_rd13_select(in, d0, d1, d2, dynamic_address);
	set_at<416, 2048>(result, mp25_32_rd13_res);
	hw_uint<32>  mp25_32_rd14_res = mp25_32_rd14_select(in, d0, d1, d2, dynamic_address);
	set_at<448, 2048>(result, mp25_32_rd14_res);
	hw_uint<32>  mp25_32_rd15_res = mp25_32_rd15_select(in, d0, d1, d2, dynamic_address);
	set_at<480, 2048>(result, mp25_32_rd15_res);
	hw_uint<32>  mp25_32_rd16_res = mp25_32_rd16_select(in, d0, d1, d2, dynamic_address);
	set_at<512, 2048>(result, mp25_32_rd16_res);
	hw_uint<32>  mp25_32_rd17_res = mp25_32_rd17_select(in, d0, d1, d2, dynamic_address);
	set_at<544, 2048>(result, mp25_32_rd17_res);
	hw_uint<32>  mp25_32_rd18_res = mp25_32_rd18_select(in, d0, d1, d2, dynamic_address);
	set_at<576, 2048>(result, mp25_32_rd18_res);
	hw_uint<32>  mp25_32_rd19_res = mp25_32_rd19_select(in, d0, d1, d2, dynamic_address);
	set_at<608, 2048>(result, mp25_32_rd19_res);
	hw_uint<32>  mp25_32_rd20_res = mp25_32_rd20_select(in, d0, d1, d2, dynamic_address);
	set_at<640, 2048>(result, mp25_32_rd20_res);
	hw_uint<32>  mp25_32_rd21_res = mp25_32_rd21_select(in, d0, d1, d2, dynamic_address);
	set_at<672, 2048>(result, mp25_32_rd21_res);
	hw_uint<32>  mp25_32_rd22_res = mp25_32_rd22_select(in, d0, d1, d2, dynamic_address);
	set_at<704, 2048>(result, mp25_32_rd22_res);
	hw_uint<32>  mp25_32_rd23_res = mp25_32_rd23_select(in, d0, d1, d2, dynamic_address);
	set_at<736, 2048>(result, mp25_32_rd23_res);
	hw_uint<32>  mp25_32_rd24_res = mp25_32_rd24_select(in, d0, d1, d2, dynamic_address);
	set_at<768, 2048>(result, mp25_32_rd24_res);
	hw_uint<32>  mp25_32_rd25_res = mp25_32_rd25_select(in, d0, d1, d2, dynamic_address);
	set_at<800, 2048>(result, mp25_32_rd25_res);
	hw_uint<32>  mp25_32_rd26_res = mp25_32_rd26_select(in, d0, d1, d2, dynamic_address);
	set_at<832, 2048>(result, mp25_32_rd26_res);
	hw_uint<32>  mp25_32_rd27_res = mp25_32_rd27_select(in, d0, d1, d2, dynamic_address);
	set_at<864, 2048>(result, mp25_32_rd27_res);
	hw_uint<32>  mp25_32_rd28_res = mp25_32_rd28_select(in, d0, d1, d2, dynamic_address);
	set_at<896, 2048>(result, mp25_32_rd28_res);
	hw_uint<32>  mp25_32_rd29_res = mp25_32_rd29_select(in, d0, d1, d2, dynamic_address);
	set_at<928, 2048>(result, mp25_32_rd29_res);
	hw_uint<32>  mp25_32_rd30_res = mp25_32_rd30_select(in, d0, d1, d2, dynamic_address);
	set_at<960, 2048>(result, mp25_32_rd30_res);
	hw_uint<32>  mp25_32_rd31_res = mp25_32_rd31_select(in, d0, d1, d2, dynamic_address);
	set_at<992, 2048>(result, mp25_32_rd31_res);
	hw_uint<32>  mp25_32_rd32_res = mp25_32_rd32_select(in, d0, d1, d2, dynamic_address);
	set_at<1024, 2048>(result, mp25_32_rd32_res);
	hw_uint<32>  mp25_32_rd33_res = mp25_32_rd33_select(in, d0, d1, d2, dynamic_address);
	set_at<1056, 2048>(result, mp25_32_rd33_res);
	hw_uint<32>  mp25_32_rd34_res = mp25_32_rd34_select(in, d0, d1, d2, dynamic_address);
	set_at<1088, 2048>(result, mp25_32_rd34_res);
	hw_uint<32>  mp25_32_rd35_res = mp25_32_rd35_select(in, d0, d1, d2, dynamic_address);
	set_at<1120, 2048>(result, mp25_32_rd35_res);
	hw_uint<32>  mp25_32_rd36_res = mp25_32_rd36_select(in, d0, d1, d2, dynamic_address);
	set_at<1152, 2048>(result, mp25_32_rd36_res);
	hw_uint<32>  mp25_32_rd37_res = mp25_32_rd37_select(in, d0, d1, d2, dynamic_address);
	set_at<1184, 2048>(result, mp25_32_rd37_res);
	hw_uint<32>  mp25_32_rd38_res = mp25_32_rd38_select(in, d0, d1, d2, dynamic_address);
	set_at<1216, 2048>(result, mp25_32_rd38_res);
	hw_uint<32>  mp25_32_rd39_res = mp25_32_rd39_select(in, d0, d1, d2, dynamic_address);
	set_at<1248, 2048>(result, mp25_32_rd39_res);
	hw_uint<32>  mp25_32_rd40_res = mp25_32_rd40_select(in, d0, d1, d2, dynamic_address);
	set_at<1280, 2048>(result, mp25_32_rd40_res);
	hw_uint<32>  mp25_32_rd41_res = mp25_32_rd41_select(in, d0, d1, d2, dynamic_address);
	set_at<1312, 2048>(result, mp25_32_rd41_res);
	hw_uint<32>  mp25_32_rd42_res = mp25_32_rd42_select(in, d0, d1, d2, dynamic_address);
	set_at<1344, 2048>(result, mp25_32_rd42_res);
	hw_uint<32>  mp25_32_rd43_res = mp25_32_rd43_select(in, d0, d1, d2, dynamic_address);
	set_at<1376, 2048>(result, mp25_32_rd43_res);
	hw_uint<32>  mp25_32_rd44_res = mp25_32_rd44_select(in, d0, d1, d2, dynamic_address);
	set_at<1408, 2048>(result, mp25_32_rd44_res);
	hw_uint<32>  mp25_32_rd45_res = mp25_32_rd45_select(in, d0, d1, d2, dynamic_address);
	set_at<1440, 2048>(result, mp25_32_rd45_res);
	hw_uint<32>  mp25_32_rd46_res = mp25_32_rd46_select(in, d0, d1, d2, dynamic_address);
	set_at<1472, 2048>(result, mp25_32_rd46_res);
	hw_uint<32>  mp25_32_rd47_res = mp25_32_rd47_select(in, d0, d1, d2, dynamic_address);
	set_at<1504, 2048>(result, mp25_32_rd47_res);
	hw_uint<32>  mp25_32_rd48_res = mp25_32_rd48_select(in, d0, d1, d2, dynamic_address);
	set_at<1536, 2048>(result, mp25_32_rd48_res);
	hw_uint<32>  mp25_32_rd49_res = mp25_32_rd49_select(in, d0, d1, d2, dynamic_address);
	set_at<1568, 2048>(result, mp25_32_rd49_res);
	hw_uint<32>  mp25_32_rd50_res = mp25_32_rd50_select(in, d0, d1, d2, dynamic_address);
	set_at<1600, 2048>(result, mp25_32_rd50_res);
	hw_uint<32>  mp25_32_rd51_res = mp25_32_rd51_select(in, d0, d1, d2, dynamic_address);
	set_at<1632, 2048>(result, mp25_32_rd51_res);
	hw_uint<32>  mp25_32_rd52_res = mp25_32_rd52_select(in, d0, d1, d2, dynamic_address);
	set_at<1664, 2048>(result, mp25_32_rd52_res);
	hw_uint<32>  mp25_32_rd53_res = mp25_32_rd53_select(in, d0, d1, d2, dynamic_address);
	set_at<1696, 2048>(result, mp25_32_rd53_res);
	hw_uint<32>  mp25_32_rd54_res = mp25_32_rd54_select(in, d0, d1, d2, dynamic_address);
	set_at<1728, 2048>(result, mp25_32_rd54_res);
	hw_uint<32>  mp25_32_rd55_res = mp25_32_rd55_select(in, d0, d1, d2, dynamic_address);
	set_at<1760, 2048>(result, mp25_32_rd55_res);
	hw_uint<32>  mp25_32_rd56_res = mp25_32_rd56_select(in, d0, d1, d2, dynamic_address);
	set_at<1792, 2048>(result, mp25_32_rd56_res);
	hw_uint<32>  mp25_32_rd57_res = mp25_32_rd57_select(in, d0, d1, d2, dynamic_address);
	set_at<1824, 2048>(result, mp25_32_rd57_res);
	hw_uint<32>  mp25_32_rd58_res = mp25_32_rd58_select(in, d0, d1, d2, dynamic_address);
	set_at<1856, 2048>(result, mp25_32_rd58_res);
	hw_uint<32>  mp25_32_rd59_res = mp25_32_rd59_select(in, d0, d1, d2, dynamic_address);
	set_at<1888, 2048>(result, mp25_32_rd59_res);
	hw_uint<32>  mp25_32_rd60_res = mp25_32_rd60_select(in, d0, d1, d2, dynamic_address);
	set_at<1920, 2048>(result, mp25_32_rd60_res);
	hw_uint<32>  mp25_32_rd61_res = mp25_32_rd61_select(in, d0, d1, d2, dynamic_address);
	set_at<1952, 2048>(result, mp25_32_rd61_res);
	hw_uint<32>  mp25_32_rd62_res = mp25_32_rd62_select(in, d0, d1, d2, dynamic_address);
	set_at<1984, 2048>(result, mp25_32_rd62_res);
	hw_uint<32>  mp25_32_rd63_res = mp25_32_rd63_select(in, d0, d1, d2, dynamic_address);
	set_at<2016, 2048>(result, mp25_32_rd63_res);
	return result;
}

// Total re-use buffer capacity: 4096 bits


// Operation logic
inline void mp25_32_update_0(in_cache& in, HWStream<hw_uint<512> >& /* buffer_args num ports = 16 */mp25_32, int d0, int d1, int d2) {
  // Dynamic address computation

	// Consume: in
	auto in_0_c__0_value = in_mp25_32_update_0_read_bundle_read(in/* source_delay */, d0, d1, d2, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = max_pool_2x2_unrolled_16(in_0_c__0_value);
	// Produce: mp25_32
	mp25_32.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void in_update_0(HWStream<hw_uint<1024> >& /* buffer_args num ports = 32 */in_oc, in_cache& in, int d0, int d1, int d2) {
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
void mp25_32_opt(HWStream<hw_uint<1024> >& /* get_args num ports = 32 */in_oc, HWStream<hw_uint<512> >& /* get_args num ports = 16 */mp25_32) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("mp25_32_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  in_cache in;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63; mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
//   { in_update_0[d0, d1, d2] -> [d2, d1, d0, 1] : 0 <= d0 <= 3 and 0 <= d1 <= 127 and 0 <= d2 <= 63 }
// Condition for in_update_0(((-1 + i3 == 0) && (i2 >= 0) && (3 - i2 >= 0) && (i1 >= 0) && (127 - i1 >= 0) && (i0 >= 0) && (63 - i0 >= 0)))
//   { mp25_32_update_0[d0, d1, d2] -> [d2, 1 + 2d1, d0, 2] : 0 <= d0 <= 3 and 0 <= d1 <= 63 and 0 <= d2 <= 63 }
// Condition for mp25_32_update_0(((-1 - i1 + 2*floord(1 + i1, 2) == 0) && (-2 + i3 == 0) && (i2 >= 0) && (3 - i2 >= 0) && (-1 + i1 >= 0) && (127 - i1 >= 0) && (i0 >= 0) && (63 - i0 >= 0)))

  /*
  // Schedules...
    // in_oc_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // in_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // mp25_32_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*2 + 1*1,1*d0*1*1 + 1*0,1*2]
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
        mp25_32_update_0((c2 - 0) / 1, (c1 - 1) / 2, (c0 - 0) / 1);
      }

    }
  }
}

  */
	  // Schedules...
	    // in_oc_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // in_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // mp25_32_update_0 -> [1*d2*1*1 + 1*0,1*d1*1*2 + 1*1,1*d0*1*1 + 1*0,1*2]
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
	        mp25_32_update_0(in /* buf name */, mp25_32, (c2 - 0) / 1, (c1 - 1) / 2, (c0 - 0) / 1);
	      }
	
	    }
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void mp25_32_opt_wrapper(HWStream<hw_uint<1024> >& /* get_args num ports = 32 */in_oc, HWStream<hw_uint<512> >& /* get_args num ports = 16 */mp25_32, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    mp25_32_opt(in_oc, mp25_32);
  }
}
#ifdef __VIVADO_SYNTH__
  // { in_update_0[root = 0, in_0, in_1, in_2] -> in_oc[0, 0] : 0 <= in_0 <= 3 and 0 <= in_1 <= 127 and 0 <= in_2 <= 63 }
const int in_update_0_read_pipe0_num_transfers = 32768;
  // { mp25_32_update_0[root = 0, mp25_32_0, mp25_32_1, mp25_32_2] -> mp25_32[0, 0] : 0 <= mp25_32_0 <= 3 and 0 <= mp25_32_1 <= 63 and 0 <= mp25_32_2 <= 63 }
const int mp25_32_update_0_write_pipe0_num_transfers = 16384;


extern "C" {

void mp25_32_opt_accel(hw_uint<1024>* in_update_0_read_pipe0, hw_uint<512>* mp25_32_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = in_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = mp25_32_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = in_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = mp25_32_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<1024> > in_update_0_read_pipe0_channel;
  static HWStream<hw_uint<512> > mp25_32_update_0_write_pipe0_channel;

  burst_read<1024>(in_update_0_read_pipe0, in_update_0_read_pipe0_channel, in_update_0_read_pipe0_num_transfers*size);

  mp25_32_opt_wrapper(in_update_0_read_pipe0_channel, mp25_32_update_0_write_pipe0_channel, size);

  burst_write<512>(mp25_32_update_0_write_pipe0, mp25_32_update_0_write_pipe0_channel, mp25_32_update_0_write_pipe0_num_transfers*size);
}

}
extern "C" {

void mp25_32_opt_rdai(HWStream<hw_uint<1024> >& in_update_0_read_pipe0, HWStream<hw_uint<512> >&  mp25_32_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = in_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = mp25_32_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  mp25_32_opt(in_update_0_read_pipe0, mp25_32_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

