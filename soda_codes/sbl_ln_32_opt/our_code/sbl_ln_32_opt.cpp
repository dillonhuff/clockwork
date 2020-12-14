#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: sbl_ln_32_opt_compute_units.h
#include "sbl_ln_32_opt_compute_units.h"

struct img_img_update_0_write0_merged_banks_12_cache {
	// RAM Box: {[0, 1920], [-1, 1080]}
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

struct img_img_update_0_write1_merged_banks_12_cache {
	// RAM Box: {[1, 1889], [-1, 1080]}
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

struct img_img_update_0_write10_merged_banks_12_cache {
	// RAM Box: {[10, 1898], [-1, 1080]}
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

struct img_img_update_0_write11_merged_banks_12_cache {
	// RAM Box: {[11, 1899], [-1, 1080]}
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

struct img_img_update_0_write12_merged_banks_12_cache {
	// RAM Box: {[12, 1900], [-1, 1080]}
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

struct img_img_update_0_write13_merged_banks_12_cache {
	// RAM Box: {[13, 1901], [-1, 1080]}
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

struct img_img_update_0_write14_merged_banks_12_cache {
	// RAM Box: {[14, 1902], [-1, 1080]}
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

struct img_img_update_0_write15_merged_banks_12_cache {
	// RAM Box: {[15, 1903], [-1, 1080]}
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

struct img_img_update_0_write16_merged_banks_12_cache {
	// RAM Box: {[16, 1904], [-1, 1080]}
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

struct img_img_update_0_write17_merged_banks_12_cache {
	// RAM Box: {[17, 1905], [-1, 1080]}
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

struct img_img_update_0_write18_merged_banks_12_cache {
	// RAM Box: {[18, 1906], [-1, 1080]}
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

struct img_img_update_0_write19_merged_banks_12_cache {
	// RAM Box: {[19, 1907], [-1, 1080]}
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

struct img_img_update_0_write2_merged_banks_12_cache {
	// RAM Box: {[2, 1890], [-1, 1080]}
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

struct img_img_update_0_write20_merged_banks_12_cache {
	// RAM Box: {[20, 1908], [-1, 1080]}
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

struct img_img_update_0_write21_merged_banks_12_cache {
	// RAM Box: {[21, 1909], [-1, 1080]}
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

struct img_img_update_0_write22_merged_banks_12_cache {
	// RAM Box: {[22, 1910], [-1, 1080]}
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

struct img_img_update_0_write23_merged_banks_12_cache {
	// RAM Box: {[23, 1911], [-1, 1080]}
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

struct img_img_update_0_write24_merged_banks_12_cache {
	// RAM Box: {[24, 1912], [-1, 1080]}
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

struct img_img_update_0_write25_merged_banks_12_cache {
	// RAM Box: {[25, 1913], [-1, 1080]}
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

struct img_img_update_0_write26_merged_banks_12_cache {
	// RAM Box: {[26, 1914], [-1, 1080]}
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

struct img_img_update_0_write27_merged_banks_12_cache {
	// RAM Box: {[27, 1915], [-1, 1080]}
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

struct img_img_update_0_write28_merged_banks_12_cache {
	// RAM Box: {[28, 1916], [-1, 1080]}
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

struct img_img_update_0_write29_merged_banks_12_cache {
	// RAM Box: {[29, 1917], [-1, 1080]}
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

struct img_img_update_0_write3_merged_banks_12_cache {
	// RAM Box: {[3, 1891], [-1, 1080]}
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

struct img_img_update_0_write30_merged_banks_12_cache {
	// RAM Box: {[30, 1918], [-1, 1080]}
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

struct img_img_update_0_write31_merged_banks_12_cache {
	// RAM Box: {[-1, 1919], [-1, 1080]}
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

struct img_img_update_0_write4_merged_banks_12_cache {
	// RAM Box: {[4, 1892], [-1, 1080]}
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

struct img_img_update_0_write5_merged_banks_12_cache {
	// RAM Box: {[5, 1893], [-1, 1080]}
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

struct img_img_update_0_write6_merged_banks_12_cache {
	// RAM Box: {[6, 1894], [-1, 1080]}
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

struct img_img_update_0_write7_merged_banks_12_cache {
	// RAM Box: {[7, 1895], [-1, 1080]}
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

struct img_img_update_0_write8_merged_banks_12_cache {
	// RAM Box: {[8, 1896], [-1, 1080]}
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

struct img_img_update_0_write9_merged_banks_12_cache {
	// RAM Box: {[9, 1897], [-1, 1080]}
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

struct img_cache {
  // # of banks: 32
  img_img_update_0_write0_merged_banks_12_cache img_img_update_0_write0_merged_banks_12;
  img_img_update_0_write1_merged_banks_12_cache img_img_update_0_write1_merged_banks_12;
  img_img_update_0_write10_merged_banks_12_cache img_img_update_0_write10_merged_banks_12;
  img_img_update_0_write11_merged_banks_12_cache img_img_update_0_write11_merged_banks_12;
  img_img_update_0_write12_merged_banks_12_cache img_img_update_0_write12_merged_banks_12;
  img_img_update_0_write13_merged_banks_12_cache img_img_update_0_write13_merged_banks_12;
  img_img_update_0_write14_merged_banks_12_cache img_img_update_0_write14_merged_banks_12;
  img_img_update_0_write15_merged_banks_12_cache img_img_update_0_write15_merged_banks_12;
  img_img_update_0_write16_merged_banks_12_cache img_img_update_0_write16_merged_banks_12;
  img_img_update_0_write17_merged_banks_12_cache img_img_update_0_write17_merged_banks_12;
  img_img_update_0_write18_merged_banks_12_cache img_img_update_0_write18_merged_banks_12;
  img_img_update_0_write19_merged_banks_12_cache img_img_update_0_write19_merged_banks_12;
  img_img_update_0_write2_merged_banks_12_cache img_img_update_0_write2_merged_banks_12;
  img_img_update_0_write20_merged_banks_12_cache img_img_update_0_write20_merged_banks_12;
  img_img_update_0_write21_merged_banks_12_cache img_img_update_0_write21_merged_banks_12;
  img_img_update_0_write22_merged_banks_12_cache img_img_update_0_write22_merged_banks_12;
  img_img_update_0_write23_merged_banks_12_cache img_img_update_0_write23_merged_banks_12;
  img_img_update_0_write24_merged_banks_12_cache img_img_update_0_write24_merged_banks_12;
  img_img_update_0_write25_merged_banks_12_cache img_img_update_0_write25_merged_banks_12;
  img_img_update_0_write26_merged_banks_12_cache img_img_update_0_write26_merged_banks_12;
  img_img_update_0_write27_merged_banks_12_cache img_img_update_0_write27_merged_banks_12;
  img_img_update_0_write28_merged_banks_12_cache img_img_update_0_write28_merged_banks_12;
  img_img_update_0_write29_merged_banks_12_cache img_img_update_0_write29_merged_banks_12;
  img_img_update_0_write3_merged_banks_12_cache img_img_update_0_write3_merged_banks_12;
  img_img_update_0_write30_merged_banks_12_cache img_img_update_0_write30_merged_banks_12;
  img_img_update_0_write31_merged_banks_12_cache img_img_update_0_write31_merged_banks_12;
  img_img_update_0_write4_merged_banks_12_cache img_img_update_0_write4_merged_banks_12;
  img_img_update_0_write5_merged_banks_12_cache img_img_update_0_write5_merged_banks_12;
  img_img_update_0_write6_merged_banks_12_cache img_img_update_0_write6_merged_banks_12;
  img_img_update_0_write7_merged_banks_12_cache img_img_update_0_write7_merged_banks_12;
  img_img_update_0_write8_merged_banks_12_cache img_img_update_0_write8_merged_banks_12;
  img_img_update_0_write9_merged_banks_12_cache img_img_update_0_write9_merged_banks_12;
};



inline void img_img_update_0_write0_write(hw_uint<16>& img_img_update_0_write0, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write0_merged_banks_12.push(img_img_update_0_write0);
}

inline void img_img_update_0_write1_write(hw_uint<16>& img_img_update_0_write1, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write1_merged_banks_12.push(img_img_update_0_write1);
}

inline void img_img_update_0_write10_write(hw_uint<16>& img_img_update_0_write10, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write10_merged_banks_12.push(img_img_update_0_write10);
}

inline void img_img_update_0_write11_write(hw_uint<16>& img_img_update_0_write11, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write11_merged_banks_12.push(img_img_update_0_write11);
}

inline void img_img_update_0_write12_write(hw_uint<16>& img_img_update_0_write12, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write12_merged_banks_12.push(img_img_update_0_write12);
}

inline void img_img_update_0_write13_write(hw_uint<16>& img_img_update_0_write13, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write13_merged_banks_12.push(img_img_update_0_write13);
}

inline void img_img_update_0_write14_write(hw_uint<16>& img_img_update_0_write14, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write14_merged_banks_12.push(img_img_update_0_write14);
}

inline void img_img_update_0_write15_write(hw_uint<16>& img_img_update_0_write15, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write15_merged_banks_12.push(img_img_update_0_write15);
}

inline void img_img_update_0_write16_write(hw_uint<16>& img_img_update_0_write16, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write16_merged_banks_12.push(img_img_update_0_write16);
}

inline void img_img_update_0_write17_write(hw_uint<16>& img_img_update_0_write17, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write17_merged_banks_12.push(img_img_update_0_write17);
}

inline void img_img_update_0_write18_write(hw_uint<16>& img_img_update_0_write18, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write18_merged_banks_12.push(img_img_update_0_write18);
}

inline void img_img_update_0_write19_write(hw_uint<16>& img_img_update_0_write19, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write19_merged_banks_12.push(img_img_update_0_write19);
}

inline void img_img_update_0_write2_write(hw_uint<16>& img_img_update_0_write2, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write2_merged_banks_12.push(img_img_update_0_write2);
}

inline void img_img_update_0_write20_write(hw_uint<16>& img_img_update_0_write20, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write20_merged_banks_12.push(img_img_update_0_write20);
}

inline void img_img_update_0_write21_write(hw_uint<16>& img_img_update_0_write21, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write21_merged_banks_12.push(img_img_update_0_write21);
}

inline void img_img_update_0_write22_write(hw_uint<16>& img_img_update_0_write22, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write22_merged_banks_12.push(img_img_update_0_write22);
}

inline void img_img_update_0_write23_write(hw_uint<16>& img_img_update_0_write23, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write23_merged_banks_12.push(img_img_update_0_write23);
}

inline void img_img_update_0_write24_write(hw_uint<16>& img_img_update_0_write24, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write24_merged_banks_12.push(img_img_update_0_write24);
}

inline void img_img_update_0_write25_write(hw_uint<16>& img_img_update_0_write25, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write25_merged_banks_12.push(img_img_update_0_write25);
}

inline void img_img_update_0_write26_write(hw_uint<16>& img_img_update_0_write26, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write26_merged_banks_12.push(img_img_update_0_write26);
}

inline void img_img_update_0_write27_write(hw_uint<16>& img_img_update_0_write27, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write27_merged_banks_12.push(img_img_update_0_write27);
}

inline void img_img_update_0_write28_write(hw_uint<16>& img_img_update_0_write28, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write28_merged_banks_12.push(img_img_update_0_write28);
}

inline void img_img_update_0_write29_write(hw_uint<16>& img_img_update_0_write29, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write29_merged_banks_12.push(img_img_update_0_write29);
}

inline void img_img_update_0_write3_write(hw_uint<16>& img_img_update_0_write3, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write3_merged_banks_12.push(img_img_update_0_write3);
}

inline void img_img_update_0_write30_write(hw_uint<16>& img_img_update_0_write30, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write30_merged_banks_12.push(img_img_update_0_write30);
}

inline void img_img_update_0_write31_write(hw_uint<16>& img_img_update_0_write31, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write31_merged_banks_12.push(img_img_update_0_write31);
}

inline void img_img_update_0_write4_write(hw_uint<16>& img_img_update_0_write4, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write4_merged_banks_12.push(img_img_update_0_write4);
}

inline void img_img_update_0_write5_write(hw_uint<16>& img_img_update_0_write5, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write5_merged_banks_12.push(img_img_update_0_write5);
}

inline void img_img_update_0_write6_write(hw_uint<16>& img_img_update_0_write6, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write6_merged_banks_12.push(img_img_update_0_write6);
}

inline void img_img_update_0_write7_write(hw_uint<16>& img_img_update_0_write7, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write7_merged_banks_12.push(img_img_update_0_write7);
}

inline void img_img_update_0_write8_write(hw_uint<16>& img_img_update_0_write8, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write8_merged_banks_12.push(img_img_update_0_write8);
}

inline void img_img_update_0_write9_write(hw_uint<16>& img_img_update_0_write9, img_cache& img, int d0, int d1, int dynamic_address) {
  img.img_img_update_0_write9_merged_banks_12.push(img_img_update_0_write9);
}

inline hw_uint<16> mag_x_rd0_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd0 read pattern: { mag_x_update_0[d0, d1] -> img[-1 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write31 = img.img_img_update_0_write31_merged_banks_12.peek_126();
  return value_img_img_update_0_write31;
  return 0;
}

inline hw_uint<16> mag_x_rd1_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd1 read pattern: { mag_x_update_0[d0, d1] -> img[-1 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write31 = img.img_img_update_0_write31_merged_banks_12.peek_64();
  return value_img_img_update_0_write31;
  return 0;
}

inline hw_uint<16> mag_x_rd10_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd10 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_63();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<16> mag_x_rd100_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd100 read pattern: { mag_x_update_0[d0, d1] -> img[17 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write17 = img.img_img_update_0_write17_merged_banks_12.peek_63();
  return value_img_img_update_0_write17;
  return 0;
}

inline hw_uint<16> mag_x_rd101_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd101 read pattern: { mag_x_update_0[d0, d1] -> img[17 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write17 = img.img_img_update_0_write17_merged_banks_12.peek_1();
  return value_img_img_update_0_write17;
  return 0;
}

inline hw_uint<16> mag_x_rd102_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd102 read pattern: { mag_x_update_0[d0, d1] -> img[16 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write16 = img.img_img_update_0_write16_merged_banks_12.peek_125();
  return value_img_img_update_0_write16;
  return 0;
}

inline hw_uint<16> mag_x_rd103_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd103 read pattern: { mag_x_update_0[d0, d1] -> img[16 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write16 = img.img_img_update_0_write16_merged_banks_12.peek_63();
  return value_img_img_update_0_write16;
  return 0;
}

inline hw_uint<16> mag_x_rd104_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd104 read pattern: { mag_x_update_0[d0, d1] -> img[16 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write16 = img.img_img_update_0_write16_merged_banks_12.peek_1();
  return value_img_img_update_0_write16;
  return 0;
}

inline hw_uint<16> mag_x_rd105_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd105 read pattern: { mag_x_update_0[d0, d1] -> img[18 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write18 = img.img_img_update_0_write18_merged_banks_12.peek_125();
  return value_img_img_update_0_write18;
  return 0;
}

inline hw_uint<16> mag_x_rd106_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd106 read pattern: { mag_x_update_0[d0, d1] -> img[18 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write18 = img.img_img_update_0_write18_merged_banks_12.peek_63();
  return value_img_img_update_0_write18;
  return 0;
}

inline hw_uint<16> mag_x_rd107_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd107 read pattern: { mag_x_update_0[d0, d1] -> img[18 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write18 = img.img_img_update_0_write18_merged_banks_12.peek_1();
  return value_img_img_update_0_write18;
  return 0;
}

inline hw_uint<16> mag_x_rd108_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd108 read pattern: { mag_x_update_0[d0, d1] -> img[17 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write17 = img.img_img_update_0_write17_merged_banks_12.peek_125();
  return value_img_img_update_0_write17;
  return 0;
}

inline hw_uint<16> mag_x_rd109_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd109 read pattern: { mag_x_update_0[d0, d1] -> img[17 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write17 = img.img_img_update_0_write17_merged_banks_12.peek_63();
  return value_img_img_update_0_write17;
  return 0;
}

inline hw_uint<16> mag_x_rd11_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd11 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_1();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<16> mag_x_rd110_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd110 read pattern: { mag_x_update_0[d0, d1] -> img[17 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write17 = img.img_img_update_0_write17_merged_banks_12.peek_1();
  return value_img_img_update_0_write17;
  return 0;
}

inline hw_uint<16> mag_x_rd111_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd111 read pattern: { mag_x_update_0[d0, d1] -> img[19 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write19 = img.img_img_update_0_write19_merged_banks_12.peek_125();
  return value_img_img_update_0_write19;
  return 0;
}

inline hw_uint<16> mag_x_rd112_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd112 read pattern: { mag_x_update_0[d0, d1] -> img[19 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write19 = img.img_img_update_0_write19_merged_banks_12.peek_63();
  return value_img_img_update_0_write19;
  return 0;
}

inline hw_uint<16> mag_x_rd113_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd113 read pattern: { mag_x_update_0[d0, d1] -> img[19 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write19 = img.img_img_update_0_write19_merged_banks_12.peek_1();
  return value_img_img_update_0_write19;
  return 0;
}

inline hw_uint<16> mag_x_rd114_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd114 read pattern: { mag_x_update_0[d0, d1] -> img[18 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write18 = img.img_img_update_0_write18_merged_banks_12.peek_125();
  return value_img_img_update_0_write18;
  return 0;
}

inline hw_uint<16> mag_x_rd115_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd115 read pattern: { mag_x_update_0[d0, d1] -> img[18 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write18 = img.img_img_update_0_write18_merged_banks_12.peek_63();
  return value_img_img_update_0_write18;
  return 0;
}

inline hw_uint<16> mag_x_rd116_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd116 read pattern: { mag_x_update_0[d0, d1] -> img[18 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write18 = img.img_img_update_0_write18_merged_banks_12.peek_1();
  return value_img_img_update_0_write18;
  return 0;
}

inline hw_uint<16> mag_x_rd117_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd117 read pattern: { mag_x_update_0[d0, d1] -> img[20 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write20 = img.img_img_update_0_write20_merged_banks_12.peek_125();
  return value_img_img_update_0_write20;
  return 0;
}

inline hw_uint<16> mag_x_rd118_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd118 read pattern: { mag_x_update_0[d0, d1] -> img[20 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write20 = img.img_img_update_0_write20_merged_banks_12.peek_63();
  return value_img_img_update_0_write20;
  return 0;
}

inline hw_uint<16> mag_x_rd119_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd119 read pattern: { mag_x_update_0[d0, d1] -> img[20 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write20 = img.img_img_update_0_write20_merged_banks_12.peek_1();
  return value_img_img_update_0_write20;
  return 0;
}

inline hw_uint<16> mag_x_rd12_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd12 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_125();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<16> mag_x_rd120_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd120 read pattern: { mag_x_update_0[d0, d1] -> img[19 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write19 = img.img_img_update_0_write19_merged_banks_12.peek_125();
  return value_img_img_update_0_write19;
  return 0;
}

inline hw_uint<16> mag_x_rd121_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd121 read pattern: { mag_x_update_0[d0, d1] -> img[19 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write19 = img.img_img_update_0_write19_merged_banks_12.peek_63();
  return value_img_img_update_0_write19;
  return 0;
}

inline hw_uint<16> mag_x_rd122_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd122 read pattern: { mag_x_update_0[d0, d1] -> img[19 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write19 = img.img_img_update_0_write19_merged_banks_12.peek_1();
  return value_img_img_update_0_write19;
  return 0;
}

inline hw_uint<16> mag_x_rd123_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd123 read pattern: { mag_x_update_0[d0, d1] -> img[21 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write21 = img.img_img_update_0_write21_merged_banks_12.peek_125();
  return value_img_img_update_0_write21;
  return 0;
}

inline hw_uint<16> mag_x_rd124_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd124 read pattern: { mag_x_update_0[d0, d1] -> img[21 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write21 = img.img_img_update_0_write21_merged_banks_12.peek_63();
  return value_img_img_update_0_write21;
  return 0;
}

inline hw_uint<16> mag_x_rd125_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd125 read pattern: { mag_x_update_0[d0, d1] -> img[21 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write21 = img.img_img_update_0_write21_merged_banks_12.peek_1();
  return value_img_img_update_0_write21;
  return 0;
}

inline hw_uint<16> mag_x_rd126_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd126 read pattern: { mag_x_update_0[d0, d1] -> img[20 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write20 = img.img_img_update_0_write20_merged_banks_12.peek_125();
  return value_img_img_update_0_write20;
  return 0;
}

inline hw_uint<16> mag_x_rd127_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd127 read pattern: { mag_x_update_0[d0, d1] -> img[20 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write20 = img.img_img_update_0_write20_merged_banks_12.peek_63();
  return value_img_img_update_0_write20;
  return 0;
}

inline hw_uint<16> mag_x_rd128_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd128 read pattern: { mag_x_update_0[d0, d1] -> img[20 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write20 = img.img_img_update_0_write20_merged_banks_12.peek_1();
  return value_img_img_update_0_write20;
  return 0;
}

inline hw_uint<16> mag_x_rd129_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd129 read pattern: { mag_x_update_0[d0, d1] -> img[22 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write22 = img.img_img_update_0_write22_merged_banks_12.peek_125();
  return value_img_img_update_0_write22;
  return 0;
}

inline hw_uint<16> mag_x_rd13_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd13 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_63();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<16> mag_x_rd130_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd130 read pattern: { mag_x_update_0[d0, d1] -> img[22 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write22 = img.img_img_update_0_write22_merged_banks_12.peek_63();
  return value_img_img_update_0_write22;
  return 0;
}

inline hw_uint<16> mag_x_rd131_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd131 read pattern: { mag_x_update_0[d0, d1] -> img[22 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write22 = img.img_img_update_0_write22_merged_banks_12.peek_1();
  return value_img_img_update_0_write22;
  return 0;
}

inline hw_uint<16> mag_x_rd132_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd132 read pattern: { mag_x_update_0[d0, d1] -> img[21 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write21 = img.img_img_update_0_write21_merged_banks_12.peek_125();
  return value_img_img_update_0_write21;
  return 0;
}

inline hw_uint<16> mag_x_rd133_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd133 read pattern: { mag_x_update_0[d0, d1] -> img[21 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write21 = img.img_img_update_0_write21_merged_banks_12.peek_63();
  return value_img_img_update_0_write21;
  return 0;
}

inline hw_uint<16> mag_x_rd134_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd134 read pattern: { mag_x_update_0[d0, d1] -> img[21 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write21 = img.img_img_update_0_write21_merged_banks_12.peek_1();
  return value_img_img_update_0_write21;
  return 0;
}

inline hw_uint<16> mag_x_rd135_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd135 read pattern: { mag_x_update_0[d0, d1] -> img[23 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write23 = img.img_img_update_0_write23_merged_banks_12.peek_125();
  return value_img_img_update_0_write23;
  return 0;
}

inline hw_uint<16> mag_x_rd136_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd136 read pattern: { mag_x_update_0[d0, d1] -> img[23 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write23 = img.img_img_update_0_write23_merged_banks_12.peek_63();
  return value_img_img_update_0_write23;
  return 0;
}

inline hw_uint<16> mag_x_rd137_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd137 read pattern: { mag_x_update_0[d0, d1] -> img[23 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write23 = img.img_img_update_0_write23_merged_banks_12.peek_1();
  return value_img_img_update_0_write23;
  return 0;
}

inline hw_uint<16> mag_x_rd138_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd138 read pattern: { mag_x_update_0[d0, d1] -> img[22 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write22 = img.img_img_update_0_write22_merged_banks_12.peek_125();
  return value_img_img_update_0_write22;
  return 0;
}

inline hw_uint<16> mag_x_rd139_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd139 read pattern: { mag_x_update_0[d0, d1] -> img[22 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write22 = img.img_img_update_0_write22_merged_banks_12.peek_63();
  return value_img_img_update_0_write22;
  return 0;
}

inline hw_uint<16> mag_x_rd14_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd14 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<16> mag_x_rd140_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd140 read pattern: { mag_x_update_0[d0, d1] -> img[22 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write22 = img.img_img_update_0_write22_merged_banks_12.peek_1();
  return value_img_img_update_0_write22;
  return 0;
}

inline hw_uint<16> mag_x_rd141_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd141 read pattern: { mag_x_update_0[d0, d1] -> img[24 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write24 = img.img_img_update_0_write24_merged_banks_12.peek_125();
  return value_img_img_update_0_write24;
  return 0;
}

inline hw_uint<16> mag_x_rd142_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd142 read pattern: { mag_x_update_0[d0, d1] -> img[24 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write24 = img.img_img_update_0_write24_merged_banks_12.peek_63();
  return value_img_img_update_0_write24;
  return 0;
}

inline hw_uint<16> mag_x_rd143_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd143 read pattern: { mag_x_update_0[d0, d1] -> img[24 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write24 = img.img_img_update_0_write24_merged_banks_12.peek_1();
  return value_img_img_update_0_write24;
  return 0;
}

inline hw_uint<16> mag_x_rd144_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd144 read pattern: { mag_x_update_0[d0, d1] -> img[23 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write23 = img.img_img_update_0_write23_merged_banks_12.peek_125();
  return value_img_img_update_0_write23;
  return 0;
}

inline hw_uint<16> mag_x_rd145_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd145 read pattern: { mag_x_update_0[d0, d1] -> img[23 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write23 = img.img_img_update_0_write23_merged_banks_12.peek_63();
  return value_img_img_update_0_write23;
  return 0;
}

inline hw_uint<16> mag_x_rd146_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd146 read pattern: { mag_x_update_0[d0, d1] -> img[23 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write23 = img.img_img_update_0_write23_merged_banks_12.peek_1();
  return value_img_img_update_0_write23;
  return 0;
}

inline hw_uint<16> mag_x_rd147_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd147 read pattern: { mag_x_update_0[d0, d1] -> img[25 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write25 = img.img_img_update_0_write25_merged_banks_12.peek_125();
  return value_img_img_update_0_write25;
  return 0;
}

inline hw_uint<16> mag_x_rd148_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd148 read pattern: { mag_x_update_0[d0, d1] -> img[25 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write25 = img.img_img_update_0_write25_merged_banks_12.peek_63();
  return value_img_img_update_0_write25;
  return 0;
}

inline hw_uint<16> mag_x_rd149_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd149 read pattern: { mag_x_update_0[d0, d1] -> img[25 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write25 = img.img_img_update_0_write25_merged_banks_12.peek_1();
  return value_img_img_update_0_write25;
  return 0;
}

inline hw_uint<16> mag_x_rd15_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd15 read pattern: { mag_x_update_0[d0, d1] -> img[3 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_125();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<16> mag_x_rd150_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd150 read pattern: { mag_x_update_0[d0, d1] -> img[24 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write24 = img.img_img_update_0_write24_merged_banks_12.peek_125();
  return value_img_img_update_0_write24;
  return 0;
}

inline hw_uint<16> mag_x_rd151_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd151 read pattern: { mag_x_update_0[d0, d1] -> img[24 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write24 = img.img_img_update_0_write24_merged_banks_12.peek_63();
  return value_img_img_update_0_write24;
  return 0;
}

inline hw_uint<16> mag_x_rd152_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd152 read pattern: { mag_x_update_0[d0, d1] -> img[24 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write24 = img.img_img_update_0_write24_merged_banks_12.peek_1();
  return value_img_img_update_0_write24;
  return 0;
}

inline hw_uint<16> mag_x_rd153_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd153 read pattern: { mag_x_update_0[d0, d1] -> img[26 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write26 = img.img_img_update_0_write26_merged_banks_12.peek_125();
  return value_img_img_update_0_write26;
  return 0;
}

inline hw_uint<16> mag_x_rd154_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd154 read pattern: { mag_x_update_0[d0, d1] -> img[26 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write26 = img.img_img_update_0_write26_merged_banks_12.peek_63();
  return value_img_img_update_0_write26;
  return 0;
}

inline hw_uint<16> mag_x_rd155_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd155 read pattern: { mag_x_update_0[d0, d1] -> img[26 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write26 = img.img_img_update_0_write26_merged_banks_12.peek_1();
  return value_img_img_update_0_write26;
  return 0;
}

inline hw_uint<16> mag_x_rd156_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd156 read pattern: { mag_x_update_0[d0, d1] -> img[25 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write25 = img.img_img_update_0_write25_merged_banks_12.peek_125();
  return value_img_img_update_0_write25;
  return 0;
}

inline hw_uint<16> mag_x_rd157_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd157 read pattern: { mag_x_update_0[d0, d1] -> img[25 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write25 = img.img_img_update_0_write25_merged_banks_12.peek_63();
  return value_img_img_update_0_write25;
  return 0;
}

inline hw_uint<16> mag_x_rd158_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd158 read pattern: { mag_x_update_0[d0, d1] -> img[25 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write25 = img.img_img_update_0_write25_merged_banks_12.peek_1();
  return value_img_img_update_0_write25;
  return 0;
}

inline hw_uint<16> mag_x_rd159_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd159 read pattern: { mag_x_update_0[d0, d1] -> img[27 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write27 = img.img_img_update_0_write27_merged_banks_12.peek_125();
  return value_img_img_update_0_write27;
  return 0;
}

inline hw_uint<16> mag_x_rd16_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd16 read pattern: { mag_x_update_0[d0, d1] -> img[3 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_63();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<16> mag_x_rd160_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd160 read pattern: { mag_x_update_0[d0, d1] -> img[27 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write27 = img.img_img_update_0_write27_merged_banks_12.peek_63();
  return value_img_img_update_0_write27;
  return 0;
}

inline hw_uint<16> mag_x_rd161_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd161 read pattern: { mag_x_update_0[d0, d1] -> img[27 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write27 = img.img_img_update_0_write27_merged_banks_12.peek_1();
  return value_img_img_update_0_write27;
  return 0;
}

inline hw_uint<16> mag_x_rd162_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd162 read pattern: { mag_x_update_0[d0, d1] -> img[26 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write26 = img.img_img_update_0_write26_merged_banks_12.peek_125();
  return value_img_img_update_0_write26;
  return 0;
}

inline hw_uint<16> mag_x_rd163_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd163 read pattern: { mag_x_update_0[d0, d1] -> img[26 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write26 = img.img_img_update_0_write26_merged_banks_12.peek_63();
  return value_img_img_update_0_write26;
  return 0;
}

inline hw_uint<16> mag_x_rd164_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd164 read pattern: { mag_x_update_0[d0, d1] -> img[26 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write26 = img.img_img_update_0_write26_merged_banks_12.peek_1();
  return value_img_img_update_0_write26;
  return 0;
}

inline hw_uint<16> mag_x_rd165_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd165 read pattern: { mag_x_update_0[d0, d1] -> img[28 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write28 = img.img_img_update_0_write28_merged_banks_12.peek_125();
  return value_img_img_update_0_write28;
  return 0;
}

inline hw_uint<16> mag_x_rd166_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd166 read pattern: { mag_x_update_0[d0, d1] -> img[28 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write28 = img.img_img_update_0_write28_merged_banks_12.peek_63();
  return value_img_img_update_0_write28;
  return 0;
}

inline hw_uint<16> mag_x_rd167_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd167 read pattern: { mag_x_update_0[d0, d1] -> img[28 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write28 = img.img_img_update_0_write28_merged_banks_12.peek_1();
  return value_img_img_update_0_write28;
  return 0;
}

inline hw_uint<16> mag_x_rd168_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd168 read pattern: { mag_x_update_0[d0, d1] -> img[27 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write27 = img.img_img_update_0_write27_merged_banks_12.peek_125();
  return value_img_img_update_0_write27;
  return 0;
}

inline hw_uint<16> mag_x_rd169_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd169 read pattern: { mag_x_update_0[d0, d1] -> img[27 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write27 = img.img_img_update_0_write27_merged_banks_12.peek_63();
  return value_img_img_update_0_write27;
  return 0;
}

inline hw_uint<16> mag_x_rd17_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd17 read pattern: { mag_x_update_0[d0, d1] -> img[3 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_1();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<16> mag_x_rd170_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd170 read pattern: { mag_x_update_0[d0, d1] -> img[27 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write27 = img.img_img_update_0_write27_merged_banks_12.peek_1();
  return value_img_img_update_0_write27;
  return 0;
}

inline hw_uint<16> mag_x_rd171_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd171 read pattern: { mag_x_update_0[d0, d1] -> img[29 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write29 = img.img_img_update_0_write29_merged_banks_12.peek_125();
  return value_img_img_update_0_write29;
  return 0;
}

inline hw_uint<16> mag_x_rd172_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd172 read pattern: { mag_x_update_0[d0, d1] -> img[29 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write29 = img.img_img_update_0_write29_merged_banks_12.peek_63();
  return value_img_img_update_0_write29;
  return 0;
}

inline hw_uint<16> mag_x_rd173_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd173 read pattern: { mag_x_update_0[d0, d1] -> img[29 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write29 = img.img_img_update_0_write29_merged_banks_12.peek_1();
  return value_img_img_update_0_write29;
  return 0;
}

inline hw_uint<16> mag_x_rd174_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd174 read pattern: { mag_x_update_0[d0, d1] -> img[28 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write28 = img.img_img_update_0_write28_merged_banks_12.peek_125();
  return value_img_img_update_0_write28;
  return 0;
}

inline hw_uint<16> mag_x_rd175_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd175 read pattern: { mag_x_update_0[d0, d1] -> img[28 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write28 = img.img_img_update_0_write28_merged_banks_12.peek_63();
  return value_img_img_update_0_write28;
  return 0;
}

inline hw_uint<16> mag_x_rd176_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd176 read pattern: { mag_x_update_0[d0, d1] -> img[28 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write28 = img.img_img_update_0_write28_merged_banks_12.peek_1();
  return value_img_img_update_0_write28;
  return 0;
}

inline hw_uint<16> mag_x_rd177_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd177 read pattern: { mag_x_update_0[d0, d1] -> img[30 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write30 = img.img_img_update_0_write30_merged_banks_12.peek_125();
  return value_img_img_update_0_write30;
  return 0;
}

inline hw_uint<16> mag_x_rd178_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd178 read pattern: { mag_x_update_0[d0, d1] -> img[30 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write30 = img.img_img_update_0_write30_merged_banks_12.peek_63();
  return value_img_img_update_0_write30;
  return 0;
}

inline hw_uint<16> mag_x_rd179_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd179 read pattern: { mag_x_update_0[d0, d1] -> img[30 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write30 = img.img_img_update_0_write30_merged_banks_12.peek_1();
  return value_img_img_update_0_write30;
  return 0;
}

inline hw_uint<16> mag_x_rd18_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd18 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_125();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<16> mag_x_rd180_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd180 read pattern: { mag_x_update_0[d0, d1] -> img[29 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write29 = img.img_img_update_0_write29_merged_banks_12.peek_125();
  return value_img_img_update_0_write29;
  return 0;
}

inline hw_uint<16> mag_x_rd181_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd181 read pattern: { mag_x_update_0[d0, d1] -> img[29 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write29 = img.img_img_update_0_write29_merged_banks_12.peek_63();
  return value_img_img_update_0_write29;
  return 0;
}

inline hw_uint<16> mag_x_rd182_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd182 read pattern: { mag_x_update_0[d0, d1] -> img[29 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write29 = img.img_img_update_0_write29_merged_banks_12.peek_1();
  return value_img_img_update_0_write29;
  return 0;
}

inline hw_uint<16> mag_x_rd183_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd183 read pattern: { mag_x_update_0[d0, d1] -> img[31 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write31 = img.img_img_update_0_write31_merged_banks_12.peek_125();
  return value_img_img_update_0_write31;
  return 0;
}

inline hw_uint<16> mag_x_rd184_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd184 read pattern: { mag_x_update_0[d0, d1] -> img[31 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write31 = img.img_img_update_0_write31_merged_banks_12.peek_63();
  return value_img_img_update_0_write31;
  return 0;
}

inline hw_uint<16> mag_x_rd185_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd185 read pattern: { mag_x_update_0[d0, d1] -> img[31 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write31 = img.img_img_update_0_write31_merged_banks_12.peek_1();
  return value_img_img_update_0_write31;
  return 0;
}

inline hw_uint<16> mag_x_rd186_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd186 read pattern: { mag_x_update_0[d0, d1] -> img[30 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write30 = img.img_img_update_0_write30_merged_banks_12.peek_125();
  return value_img_img_update_0_write30;
  return 0;
}

inline hw_uint<16> mag_x_rd187_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd187 read pattern: { mag_x_update_0[d0, d1] -> img[30 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write30 = img.img_img_update_0_write30_merged_banks_12.peek_63();
  return value_img_img_update_0_write30;
  return 0;
}

inline hw_uint<16> mag_x_rd188_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd188 read pattern: { mag_x_update_0[d0, d1] -> img[30 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write30 = img.img_img_update_0_write30_merged_banks_12.peek_1();
  return value_img_img_update_0_write30;
  return 0;
}

inline hw_uint<16> mag_x_rd189_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd189 read pattern: { mag_x_update_0[d0, d1] -> img[32 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_124();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<16> mag_x_rd19_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd19 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_63();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<16> mag_x_rd190_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd190 read pattern: { mag_x_update_0[d0, d1] -> img[32 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_62();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<16> mag_x_rd191_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd191 read pattern: { mag_x_update_0[d0, d1] -> img[32 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_0();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<16> mag_x_rd2_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd2 read pattern: { mag_x_update_0[d0, d1] -> img[-1 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write31 = img.img_img_update_0_write31_merged_banks_12.peek_2();
  return value_img_img_update_0_write31;
  return 0;
}

inline hw_uint<16> mag_x_rd20_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd20 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_1();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<16> mag_x_rd21_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd21 read pattern: { mag_x_update_0[d0, d1] -> img[4 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_125();
  return value_img_img_update_0_write4;
  return 0;
}

inline hw_uint<16> mag_x_rd22_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd22 read pattern: { mag_x_update_0[d0, d1] -> img[4 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_63();
  return value_img_img_update_0_write4;
  return 0;
}

inline hw_uint<16> mag_x_rd23_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd23 read pattern: { mag_x_update_0[d0, d1] -> img[4 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_1();
  return value_img_img_update_0_write4;
  return 0;
}

inline hw_uint<16> mag_x_rd24_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd24 read pattern: { mag_x_update_0[d0, d1] -> img[3 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_125();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<16> mag_x_rd25_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd25 read pattern: { mag_x_update_0[d0, d1] -> img[3 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_63();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<16> mag_x_rd26_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd26 read pattern: { mag_x_update_0[d0, d1] -> img[3 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_1();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<16> mag_x_rd27_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd27 read pattern: { mag_x_update_0[d0, d1] -> img[5 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_125();
  return value_img_img_update_0_write5;
  return 0;
}

inline hw_uint<16> mag_x_rd28_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd28 read pattern: { mag_x_update_0[d0, d1] -> img[5 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_63();
  return value_img_img_update_0_write5;
  return 0;
}

inline hw_uint<16> mag_x_rd29_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd29 read pattern: { mag_x_update_0[d0, d1] -> img[5 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_1();
  return value_img_img_update_0_write5;
  return 0;
}

inline hw_uint<16> mag_x_rd3_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd3 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_125();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<16> mag_x_rd30_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd30 read pattern: { mag_x_update_0[d0, d1] -> img[4 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_125();
  return value_img_img_update_0_write4;
  return 0;
}

inline hw_uint<16> mag_x_rd31_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd31 read pattern: { mag_x_update_0[d0, d1] -> img[4 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_63();
  return value_img_img_update_0_write4;
  return 0;
}

inline hw_uint<16> mag_x_rd32_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd32 read pattern: { mag_x_update_0[d0, d1] -> img[4 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_1();
  return value_img_img_update_0_write4;
  return 0;
}

inline hw_uint<16> mag_x_rd33_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd33 read pattern: { mag_x_update_0[d0, d1] -> img[6 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_125();
  return value_img_img_update_0_write6;
  return 0;
}

inline hw_uint<16> mag_x_rd34_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd34 read pattern: { mag_x_update_0[d0, d1] -> img[6 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_63();
  return value_img_img_update_0_write6;
  return 0;
}

inline hw_uint<16> mag_x_rd35_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd35 read pattern: { mag_x_update_0[d0, d1] -> img[6 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_1();
  return value_img_img_update_0_write6;
  return 0;
}

inline hw_uint<16> mag_x_rd36_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd36 read pattern: { mag_x_update_0[d0, d1] -> img[5 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_125();
  return value_img_img_update_0_write5;
  return 0;
}

inline hw_uint<16> mag_x_rd37_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd37 read pattern: { mag_x_update_0[d0, d1] -> img[5 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_63();
  return value_img_img_update_0_write5;
  return 0;
}

inline hw_uint<16> mag_x_rd38_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd38 read pattern: { mag_x_update_0[d0, d1] -> img[5 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_1();
  return value_img_img_update_0_write5;
  return 0;
}

inline hw_uint<16> mag_x_rd39_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd39 read pattern: { mag_x_update_0[d0, d1] -> img[7 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_125();
  return value_img_img_update_0_write7;
  return 0;
}

inline hw_uint<16> mag_x_rd4_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd4 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_63();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<16> mag_x_rd40_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd40 read pattern: { mag_x_update_0[d0, d1] -> img[7 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_63();
  return value_img_img_update_0_write7;
  return 0;
}

inline hw_uint<16> mag_x_rd41_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd41 read pattern: { mag_x_update_0[d0, d1] -> img[7 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_1();
  return value_img_img_update_0_write7;
  return 0;
}

inline hw_uint<16> mag_x_rd42_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd42 read pattern: { mag_x_update_0[d0, d1] -> img[6 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_125();
  return value_img_img_update_0_write6;
  return 0;
}

inline hw_uint<16> mag_x_rd43_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd43 read pattern: { mag_x_update_0[d0, d1] -> img[6 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_63();
  return value_img_img_update_0_write6;
  return 0;
}

inline hw_uint<16> mag_x_rd44_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd44 read pattern: { mag_x_update_0[d0, d1] -> img[6 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_1();
  return value_img_img_update_0_write6;
  return 0;
}

inline hw_uint<16> mag_x_rd45_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd45 read pattern: { mag_x_update_0[d0, d1] -> img[8 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write8 = img.img_img_update_0_write8_merged_banks_12.peek_125();
  return value_img_img_update_0_write8;
  return 0;
}

inline hw_uint<16> mag_x_rd46_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd46 read pattern: { mag_x_update_0[d0, d1] -> img[8 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write8 = img.img_img_update_0_write8_merged_banks_12.peek_63();
  return value_img_img_update_0_write8;
  return 0;
}

inline hw_uint<16> mag_x_rd47_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd47 read pattern: { mag_x_update_0[d0, d1] -> img[8 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write8 = img.img_img_update_0_write8_merged_banks_12.peek_1();
  return value_img_img_update_0_write8;
  return 0;
}

inline hw_uint<16> mag_x_rd48_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd48 read pattern: { mag_x_update_0[d0, d1] -> img[7 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_125();
  return value_img_img_update_0_write7;
  return 0;
}

inline hw_uint<16> mag_x_rd49_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd49 read pattern: { mag_x_update_0[d0, d1] -> img[7 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_63();
  return value_img_img_update_0_write7;
  return 0;
}

inline hw_uint<16> mag_x_rd5_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd5 read pattern: { mag_x_update_0[d0, d1] -> img[1 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<16> mag_x_rd50_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd50 read pattern: { mag_x_update_0[d0, d1] -> img[7 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_1();
  return value_img_img_update_0_write7;
  return 0;
}

inline hw_uint<16> mag_x_rd51_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd51 read pattern: { mag_x_update_0[d0, d1] -> img[9 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write9 = img.img_img_update_0_write9_merged_banks_12.peek_125();
  return value_img_img_update_0_write9;
  return 0;
}

inline hw_uint<16> mag_x_rd52_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd52 read pattern: { mag_x_update_0[d0, d1] -> img[9 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write9 = img.img_img_update_0_write9_merged_banks_12.peek_63();
  return value_img_img_update_0_write9;
  return 0;
}

inline hw_uint<16> mag_x_rd53_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd53 read pattern: { mag_x_update_0[d0, d1] -> img[9 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write9 = img.img_img_update_0_write9_merged_banks_12.peek_1();
  return value_img_img_update_0_write9;
  return 0;
}

inline hw_uint<16> mag_x_rd54_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd54 read pattern: { mag_x_update_0[d0, d1] -> img[8 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write8 = img.img_img_update_0_write8_merged_banks_12.peek_125();
  return value_img_img_update_0_write8;
  return 0;
}

inline hw_uint<16> mag_x_rd55_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd55 read pattern: { mag_x_update_0[d0, d1] -> img[8 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write8 = img.img_img_update_0_write8_merged_banks_12.peek_63();
  return value_img_img_update_0_write8;
  return 0;
}

inline hw_uint<16> mag_x_rd56_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd56 read pattern: { mag_x_update_0[d0, d1] -> img[8 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write8 = img.img_img_update_0_write8_merged_banks_12.peek_1();
  return value_img_img_update_0_write8;
  return 0;
}

inline hw_uint<16> mag_x_rd57_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd57 read pattern: { mag_x_update_0[d0, d1] -> img[10 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write10 = img.img_img_update_0_write10_merged_banks_12.peek_125();
  return value_img_img_update_0_write10;
  return 0;
}

inline hw_uint<16> mag_x_rd58_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd58 read pattern: { mag_x_update_0[d0, d1] -> img[10 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write10 = img.img_img_update_0_write10_merged_banks_12.peek_63();
  return value_img_img_update_0_write10;
  return 0;
}

inline hw_uint<16> mag_x_rd59_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd59 read pattern: { mag_x_update_0[d0, d1] -> img[10 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write10 = img.img_img_update_0_write10_merged_banks_12.peek_1();
  return value_img_img_update_0_write10;
  return 0;
}

inline hw_uint<16> mag_x_rd6_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd6 read pattern: { mag_x_update_0[d0, d1] -> img[32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_125();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<16> mag_x_rd60_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd60 read pattern: { mag_x_update_0[d0, d1] -> img[9 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write9 = img.img_img_update_0_write9_merged_banks_12.peek_125();
  return value_img_img_update_0_write9;
  return 0;
}

inline hw_uint<16> mag_x_rd61_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd61 read pattern: { mag_x_update_0[d0, d1] -> img[9 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write9 = img.img_img_update_0_write9_merged_banks_12.peek_63();
  return value_img_img_update_0_write9;
  return 0;
}

inline hw_uint<16> mag_x_rd62_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd62 read pattern: { mag_x_update_0[d0, d1] -> img[9 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write9 = img.img_img_update_0_write9_merged_banks_12.peek_1();
  return value_img_img_update_0_write9;
  return 0;
}

inline hw_uint<16> mag_x_rd63_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd63 read pattern: { mag_x_update_0[d0, d1] -> img[11 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write11 = img.img_img_update_0_write11_merged_banks_12.peek_125();
  return value_img_img_update_0_write11;
  return 0;
}

inline hw_uint<16> mag_x_rd64_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd64 read pattern: { mag_x_update_0[d0, d1] -> img[11 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write11 = img.img_img_update_0_write11_merged_banks_12.peek_63();
  return value_img_img_update_0_write11;
  return 0;
}

inline hw_uint<16> mag_x_rd65_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd65 read pattern: { mag_x_update_0[d0, d1] -> img[11 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write11 = img.img_img_update_0_write11_merged_banks_12.peek_1();
  return value_img_img_update_0_write11;
  return 0;
}

inline hw_uint<16> mag_x_rd66_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd66 read pattern: { mag_x_update_0[d0, d1] -> img[10 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write10 = img.img_img_update_0_write10_merged_banks_12.peek_125();
  return value_img_img_update_0_write10;
  return 0;
}

inline hw_uint<16> mag_x_rd67_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd67 read pattern: { mag_x_update_0[d0, d1] -> img[10 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write10 = img.img_img_update_0_write10_merged_banks_12.peek_63();
  return value_img_img_update_0_write10;
  return 0;
}

inline hw_uint<16> mag_x_rd68_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd68 read pattern: { mag_x_update_0[d0, d1] -> img[10 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write10 = img.img_img_update_0_write10_merged_banks_12.peek_1();
  return value_img_img_update_0_write10;
  return 0;
}

inline hw_uint<16> mag_x_rd69_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd69 read pattern: { mag_x_update_0[d0, d1] -> img[12 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write12 = img.img_img_update_0_write12_merged_banks_12.peek_125();
  return value_img_img_update_0_write12;
  return 0;
}

inline hw_uint<16> mag_x_rd7_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd7 read pattern: { mag_x_update_0[d0, d1] -> img[32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_63();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<16> mag_x_rd70_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd70 read pattern: { mag_x_update_0[d0, d1] -> img[12 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write12 = img.img_img_update_0_write12_merged_banks_12.peek_63();
  return value_img_img_update_0_write12;
  return 0;
}

inline hw_uint<16> mag_x_rd71_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd71 read pattern: { mag_x_update_0[d0, d1] -> img[12 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write12 = img.img_img_update_0_write12_merged_banks_12.peek_1();
  return value_img_img_update_0_write12;
  return 0;
}

inline hw_uint<16> mag_x_rd72_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd72 read pattern: { mag_x_update_0[d0, d1] -> img[11 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write11 = img.img_img_update_0_write11_merged_banks_12.peek_125();
  return value_img_img_update_0_write11;
  return 0;
}

inline hw_uint<16> mag_x_rd73_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd73 read pattern: { mag_x_update_0[d0, d1] -> img[11 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write11 = img.img_img_update_0_write11_merged_banks_12.peek_63();
  return value_img_img_update_0_write11;
  return 0;
}

inline hw_uint<16> mag_x_rd74_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd74 read pattern: { mag_x_update_0[d0, d1] -> img[11 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write11 = img.img_img_update_0_write11_merged_banks_12.peek_1();
  return value_img_img_update_0_write11;
  return 0;
}

inline hw_uint<16> mag_x_rd75_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd75 read pattern: { mag_x_update_0[d0, d1] -> img[13 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write13 = img.img_img_update_0_write13_merged_banks_12.peek_125();
  return value_img_img_update_0_write13;
  return 0;
}

inline hw_uint<16> mag_x_rd76_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd76 read pattern: { mag_x_update_0[d0, d1] -> img[13 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write13 = img.img_img_update_0_write13_merged_banks_12.peek_63();
  return value_img_img_update_0_write13;
  return 0;
}

inline hw_uint<16> mag_x_rd77_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd77 read pattern: { mag_x_update_0[d0, d1] -> img[13 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write13 = img.img_img_update_0_write13_merged_banks_12.peek_1();
  return value_img_img_update_0_write13;
  return 0;
}

inline hw_uint<16> mag_x_rd78_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd78 read pattern: { mag_x_update_0[d0, d1] -> img[12 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write12 = img.img_img_update_0_write12_merged_banks_12.peek_125();
  return value_img_img_update_0_write12;
  return 0;
}

inline hw_uint<16> mag_x_rd79_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd79 read pattern: { mag_x_update_0[d0, d1] -> img[12 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write12 = img.img_img_update_0_write12_merged_banks_12.peek_63();
  return value_img_img_update_0_write12;
  return 0;
}

inline hw_uint<16> mag_x_rd8_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd8 read pattern: { mag_x_update_0[d0, d1] -> img[32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_1();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<16> mag_x_rd80_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd80 read pattern: { mag_x_update_0[d0, d1] -> img[12 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write12 = img.img_img_update_0_write12_merged_banks_12.peek_1();
  return value_img_img_update_0_write12;
  return 0;
}

inline hw_uint<16> mag_x_rd81_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd81 read pattern: { mag_x_update_0[d0, d1] -> img[14 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write14 = img.img_img_update_0_write14_merged_banks_12.peek_125();
  return value_img_img_update_0_write14;
  return 0;
}

inline hw_uint<16> mag_x_rd82_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd82 read pattern: { mag_x_update_0[d0, d1] -> img[14 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write14 = img.img_img_update_0_write14_merged_banks_12.peek_63();
  return value_img_img_update_0_write14;
  return 0;
}

inline hw_uint<16> mag_x_rd83_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd83 read pattern: { mag_x_update_0[d0, d1] -> img[14 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write14 = img.img_img_update_0_write14_merged_banks_12.peek_1();
  return value_img_img_update_0_write14;
  return 0;
}

inline hw_uint<16> mag_x_rd84_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd84 read pattern: { mag_x_update_0[d0, d1] -> img[13 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write13 = img.img_img_update_0_write13_merged_banks_12.peek_125();
  return value_img_img_update_0_write13;
  return 0;
}

inline hw_uint<16> mag_x_rd85_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd85 read pattern: { mag_x_update_0[d0, d1] -> img[13 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write13 = img.img_img_update_0_write13_merged_banks_12.peek_63();
  return value_img_img_update_0_write13;
  return 0;
}

inline hw_uint<16> mag_x_rd86_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd86 read pattern: { mag_x_update_0[d0, d1] -> img[13 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write13 = img.img_img_update_0_write13_merged_banks_12.peek_1();
  return value_img_img_update_0_write13;
  return 0;
}

inline hw_uint<16> mag_x_rd87_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd87 read pattern: { mag_x_update_0[d0, d1] -> img[15 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write15 = img.img_img_update_0_write15_merged_banks_12.peek_125();
  return value_img_img_update_0_write15;
  return 0;
}

inline hw_uint<16> mag_x_rd88_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd88 read pattern: { mag_x_update_0[d0, d1] -> img[15 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write15 = img.img_img_update_0_write15_merged_banks_12.peek_63();
  return value_img_img_update_0_write15;
  return 0;
}

inline hw_uint<16> mag_x_rd89_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd89 read pattern: { mag_x_update_0[d0, d1] -> img[15 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write15 = img.img_img_update_0_write15_merged_banks_12.peek_1();
  return value_img_img_update_0_write15;
  return 0;
}

inline hw_uint<16> mag_x_rd9_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd9 read pattern: { mag_x_update_0[d0, d1] -> img[2 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_125();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<16> mag_x_rd90_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd90 read pattern: { mag_x_update_0[d0, d1] -> img[14 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write14 = img.img_img_update_0_write14_merged_banks_12.peek_125();
  return value_img_img_update_0_write14;
  return 0;
}

inline hw_uint<16> mag_x_rd91_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd91 read pattern: { mag_x_update_0[d0, d1] -> img[14 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write14 = img.img_img_update_0_write14_merged_banks_12.peek_63();
  return value_img_img_update_0_write14;
  return 0;
}

inline hw_uint<16> mag_x_rd92_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd92 read pattern: { mag_x_update_0[d0, d1] -> img[14 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write14 = img.img_img_update_0_write14_merged_banks_12.peek_1();
  return value_img_img_update_0_write14;
  return 0;
}

inline hw_uint<16> mag_x_rd93_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd93 read pattern: { mag_x_update_0[d0, d1] -> img[16 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write16 = img.img_img_update_0_write16_merged_banks_12.peek_125();
  return value_img_img_update_0_write16;
  return 0;
}

inline hw_uint<16> mag_x_rd94_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd94 read pattern: { mag_x_update_0[d0, d1] -> img[16 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write16 = img.img_img_update_0_write16_merged_banks_12.peek_63();
  return value_img_img_update_0_write16;
  return 0;
}

inline hw_uint<16> mag_x_rd95_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd95 read pattern: { mag_x_update_0[d0, d1] -> img[16 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write16 = img.img_img_update_0_write16_merged_banks_12.peek_1();
  return value_img_img_update_0_write16;
  return 0;
}

inline hw_uint<16> mag_x_rd96_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd96 read pattern: { mag_x_update_0[d0, d1] -> img[15 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write15 = img.img_img_update_0_write15_merged_banks_12.peek_125();
  return value_img_img_update_0_write15;
  return 0;
}

inline hw_uint<16> mag_x_rd97_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd97 read pattern: { mag_x_update_0[d0, d1] -> img[15 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write15 = img.img_img_update_0_write15_merged_banks_12.peek_63();
  return value_img_img_update_0_write15;
  return 0;
}

inline hw_uint<16> mag_x_rd98_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd98 read pattern: { mag_x_update_0[d0, d1] -> img[15 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write15 = img.img_img_update_0_write15_merged_banks_12.peek_1();
  return value_img_img_update_0_write15;
  return 0;
}

inline hw_uint<16> mag_x_rd99_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_rd99 read pattern: { mag_x_update_0[d0, d1] -> img[17 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write17 = img.img_img_update_0_write17_merged_banks_12.peek_125();
  return value_img_img_update_0_write17;
  return 0;
}

inline hw_uint<16> mag_y_rd0_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd0 read pattern: { mag_y_update_0[d0, d1] -> img[-1 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write31 = img.img_img_update_0_write31_merged_banks_12.peek_126();
  return value_img_img_update_0_write31;
  return 0;
}

inline hw_uint<16> mag_y_rd1_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd1 read pattern: { mag_y_update_0[d0, d1] -> img[-1 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write31 = img.img_img_update_0_write31_merged_banks_12.peek_2();
  return value_img_img_update_0_write31;
  return 0;
}

inline hw_uint<16> mag_y_rd10_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd10 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_125();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<16> mag_y_rd100_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd100 read pattern: { mag_y_update_0[d0, d1] -> img[17 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write17 = img.img_img_update_0_write17_merged_banks_12.peek_125();
  return value_img_img_update_0_write17;
  return 0;
}

inline hw_uint<16> mag_y_rd101_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd101 read pattern: { mag_y_update_0[d0, d1] -> img[17 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write17 = img.img_img_update_0_write17_merged_banks_12.peek_1();
  return value_img_img_update_0_write17;
  return 0;
}

inline hw_uint<16> mag_y_rd102_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd102 read pattern: { mag_y_update_0[d0, d1] -> img[16 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write16 = img.img_img_update_0_write16_merged_banks_12.peek_125();
  return value_img_img_update_0_write16;
  return 0;
}

inline hw_uint<16> mag_y_rd103_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd103 read pattern: { mag_y_update_0[d0, d1] -> img[16 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write16 = img.img_img_update_0_write16_merged_banks_12.peek_1();
  return value_img_img_update_0_write16;
  return 0;
}

inline hw_uint<16> mag_y_rd104_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd104 read pattern: { mag_y_update_0[d0, d1] -> img[17 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write17 = img.img_img_update_0_write17_merged_banks_12.peek_125();
  return value_img_img_update_0_write17;
  return 0;
}

inline hw_uint<16> mag_y_rd105_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd105 read pattern: { mag_y_update_0[d0, d1] -> img[17 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write17 = img.img_img_update_0_write17_merged_banks_12.peek_1();
  return value_img_img_update_0_write17;
  return 0;
}

inline hw_uint<16> mag_y_rd106_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd106 read pattern: { mag_y_update_0[d0, d1] -> img[18 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write18 = img.img_img_update_0_write18_merged_banks_12.peek_125();
  return value_img_img_update_0_write18;
  return 0;
}

inline hw_uint<16> mag_y_rd107_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd107 read pattern: { mag_y_update_0[d0, d1] -> img[18 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write18 = img.img_img_update_0_write18_merged_banks_12.peek_1();
  return value_img_img_update_0_write18;
  return 0;
}

inline hw_uint<16> mag_y_rd108_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd108 read pattern: { mag_y_update_0[d0, d1] -> img[17 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write17 = img.img_img_update_0_write17_merged_banks_12.peek_125();
  return value_img_img_update_0_write17;
  return 0;
}

inline hw_uint<16> mag_y_rd109_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd109 read pattern: { mag_y_update_0[d0, d1] -> img[17 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write17 = img.img_img_update_0_write17_merged_banks_12.peek_1();
  return value_img_img_update_0_write17;
  return 0;
}

inline hw_uint<16> mag_y_rd11_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd11 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_1();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<16> mag_y_rd110_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd110 read pattern: { mag_y_update_0[d0, d1] -> img[18 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write18 = img.img_img_update_0_write18_merged_banks_12.peek_125();
  return value_img_img_update_0_write18;
  return 0;
}

inline hw_uint<16> mag_y_rd111_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd111 read pattern: { mag_y_update_0[d0, d1] -> img[18 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write18 = img.img_img_update_0_write18_merged_banks_12.peek_1();
  return value_img_img_update_0_write18;
  return 0;
}

inline hw_uint<16> mag_y_rd112_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd112 read pattern: { mag_y_update_0[d0, d1] -> img[19 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write19 = img.img_img_update_0_write19_merged_banks_12.peek_125();
  return value_img_img_update_0_write19;
  return 0;
}

inline hw_uint<16> mag_y_rd113_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd113 read pattern: { mag_y_update_0[d0, d1] -> img[19 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write19 = img.img_img_update_0_write19_merged_banks_12.peek_1();
  return value_img_img_update_0_write19;
  return 0;
}

inline hw_uint<16> mag_y_rd114_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd114 read pattern: { mag_y_update_0[d0, d1] -> img[18 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write18 = img.img_img_update_0_write18_merged_banks_12.peek_125();
  return value_img_img_update_0_write18;
  return 0;
}

inline hw_uint<16> mag_y_rd115_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd115 read pattern: { mag_y_update_0[d0, d1] -> img[18 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write18 = img.img_img_update_0_write18_merged_banks_12.peek_1();
  return value_img_img_update_0_write18;
  return 0;
}

inline hw_uint<16> mag_y_rd116_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd116 read pattern: { mag_y_update_0[d0, d1] -> img[19 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write19 = img.img_img_update_0_write19_merged_banks_12.peek_125();
  return value_img_img_update_0_write19;
  return 0;
}

inline hw_uint<16> mag_y_rd117_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd117 read pattern: { mag_y_update_0[d0, d1] -> img[19 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write19 = img.img_img_update_0_write19_merged_banks_12.peek_1();
  return value_img_img_update_0_write19;
  return 0;
}

inline hw_uint<16> mag_y_rd118_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd118 read pattern: { mag_y_update_0[d0, d1] -> img[20 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write20 = img.img_img_update_0_write20_merged_banks_12.peek_125();
  return value_img_img_update_0_write20;
  return 0;
}

inline hw_uint<16> mag_y_rd119_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd119 read pattern: { mag_y_update_0[d0, d1] -> img[20 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write20 = img.img_img_update_0_write20_merged_banks_12.peek_1();
  return value_img_img_update_0_write20;
  return 0;
}

inline hw_uint<16> mag_y_rd12_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd12 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_125();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<16> mag_y_rd120_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd120 read pattern: { mag_y_update_0[d0, d1] -> img[19 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write19 = img.img_img_update_0_write19_merged_banks_12.peek_125();
  return value_img_img_update_0_write19;
  return 0;
}

inline hw_uint<16> mag_y_rd121_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd121 read pattern: { mag_y_update_0[d0, d1] -> img[19 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write19 = img.img_img_update_0_write19_merged_banks_12.peek_1();
  return value_img_img_update_0_write19;
  return 0;
}

inline hw_uint<16> mag_y_rd122_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd122 read pattern: { mag_y_update_0[d0, d1] -> img[20 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write20 = img.img_img_update_0_write20_merged_banks_12.peek_125();
  return value_img_img_update_0_write20;
  return 0;
}

inline hw_uint<16> mag_y_rd123_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd123 read pattern: { mag_y_update_0[d0, d1] -> img[20 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write20 = img.img_img_update_0_write20_merged_banks_12.peek_1();
  return value_img_img_update_0_write20;
  return 0;
}

inline hw_uint<16> mag_y_rd124_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd124 read pattern: { mag_y_update_0[d0, d1] -> img[21 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write21 = img.img_img_update_0_write21_merged_banks_12.peek_125();
  return value_img_img_update_0_write21;
  return 0;
}

inline hw_uint<16> mag_y_rd125_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd125 read pattern: { mag_y_update_0[d0, d1] -> img[21 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write21 = img.img_img_update_0_write21_merged_banks_12.peek_1();
  return value_img_img_update_0_write21;
  return 0;
}

inline hw_uint<16> mag_y_rd126_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd126 read pattern: { mag_y_update_0[d0, d1] -> img[20 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write20 = img.img_img_update_0_write20_merged_banks_12.peek_125();
  return value_img_img_update_0_write20;
  return 0;
}

inline hw_uint<16> mag_y_rd127_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd127 read pattern: { mag_y_update_0[d0, d1] -> img[20 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write20 = img.img_img_update_0_write20_merged_banks_12.peek_1();
  return value_img_img_update_0_write20;
  return 0;
}

inline hw_uint<16> mag_y_rd128_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd128 read pattern: { mag_y_update_0[d0, d1] -> img[21 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write21 = img.img_img_update_0_write21_merged_banks_12.peek_125();
  return value_img_img_update_0_write21;
  return 0;
}

inline hw_uint<16> mag_y_rd129_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd129 read pattern: { mag_y_update_0[d0, d1] -> img[21 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write21 = img.img_img_update_0_write21_merged_banks_12.peek_1();
  return value_img_img_update_0_write21;
  return 0;
}

inline hw_uint<16> mag_y_rd13_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd13 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<16> mag_y_rd130_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd130 read pattern: { mag_y_update_0[d0, d1] -> img[22 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write22 = img.img_img_update_0_write22_merged_banks_12.peek_125();
  return value_img_img_update_0_write22;
  return 0;
}

inline hw_uint<16> mag_y_rd131_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd131 read pattern: { mag_y_update_0[d0, d1] -> img[22 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write22 = img.img_img_update_0_write22_merged_banks_12.peek_1();
  return value_img_img_update_0_write22;
  return 0;
}

inline hw_uint<16> mag_y_rd132_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd132 read pattern: { mag_y_update_0[d0, d1] -> img[21 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write21 = img.img_img_update_0_write21_merged_banks_12.peek_125();
  return value_img_img_update_0_write21;
  return 0;
}

inline hw_uint<16> mag_y_rd133_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd133 read pattern: { mag_y_update_0[d0, d1] -> img[21 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write21 = img.img_img_update_0_write21_merged_banks_12.peek_1();
  return value_img_img_update_0_write21;
  return 0;
}

inline hw_uint<16> mag_y_rd134_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd134 read pattern: { mag_y_update_0[d0, d1] -> img[22 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write22 = img.img_img_update_0_write22_merged_banks_12.peek_125();
  return value_img_img_update_0_write22;
  return 0;
}

inline hw_uint<16> mag_y_rd135_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd135 read pattern: { mag_y_update_0[d0, d1] -> img[22 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write22 = img.img_img_update_0_write22_merged_banks_12.peek_1();
  return value_img_img_update_0_write22;
  return 0;
}

inline hw_uint<16> mag_y_rd136_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd136 read pattern: { mag_y_update_0[d0, d1] -> img[23 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write23 = img.img_img_update_0_write23_merged_banks_12.peek_125();
  return value_img_img_update_0_write23;
  return 0;
}

inline hw_uint<16> mag_y_rd137_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd137 read pattern: { mag_y_update_0[d0, d1] -> img[23 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write23 = img.img_img_update_0_write23_merged_banks_12.peek_1();
  return value_img_img_update_0_write23;
  return 0;
}

inline hw_uint<16> mag_y_rd138_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd138 read pattern: { mag_y_update_0[d0, d1] -> img[22 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write22 = img.img_img_update_0_write22_merged_banks_12.peek_125();
  return value_img_img_update_0_write22;
  return 0;
}

inline hw_uint<16> mag_y_rd139_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd139 read pattern: { mag_y_update_0[d0, d1] -> img[22 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write22 = img.img_img_update_0_write22_merged_banks_12.peek_1();
  return value_img_img_update_0_write22;
  return 0;
}

inline hw_uint<16> mag_y_rd14_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd14 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_125();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<16> mag_y_rd140_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd140 read pattern: { mag_y_update_0[d0, d1] -> img[23 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write23 = img.img_img_update_0_write23_merged_banks_12.peek_125();
  return value_img_img_update_0_write23;
  return 0;
}

inline hw_uint<16> mag_y_rd141_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd141 read pattern: { mag_y_update_0[d0, d1] -> img[23 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write23 = img.img_img_update_0_write23_merged_banks_12.peek_1();
  return value_img_img_update_0_write23;
  return 0;
}

inline hw_uint<16> mag_y_rd142_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd142 read pattern: { mag_y_update_0[d0, d1] -> img[24 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write24 = img.img_img_update_0_write24_merged_banks_12.peek_125();
  return value_img_img_update_0_write24;
  return 0;
}

inline hw_uint<16> mag_y_rd143_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd143 read pattern: { mag_y_update_0[d0, d1] -> img[24 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write24 = img.img_img_update_0_write24_merged_banks_12.peek_1();
  return value_img_img_update_0_write24;
  return 0;
}

inline hw_uint<16> mag_y_rd144_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd144 read pattern: { mag_y_update_0[d0, d1] -> img[23 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write23 = img.img_img_update_0_write23_merged_banks_12.peek_125();
  return value_img_img_update_0_write23;
  return 0;
}

inline hw_uint<16> mag_y_rd145_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd145 read pattern: { mag_y_update_0[d0, d1] -> img[23 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write23 = img.img_img_update_0_write23_merged_banks_12.peek_1();
  return value_img_img_update_0_write23;
  return 0;
}

inline hw_uint<16> mag_y_rd146_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd146 read pattern: { mag_y_update_0[d0, d1] -> img[24 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write24 = img.img_img_update_0_write24_merged_banks_12.peek_125();
  return value_img_img_update_0_write24;
  return 0;
}

inline hw_uint<16> mag_y_rd147_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd147 read pattern: { mag_y_update_0[d0, d1] -> img[24 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write24 = img.img_img_update_0_write24_merged_banks_12.peek_1();
  return value_img_img_update_0_write24;
  return 0;
}

inline hw_uint<16> mag_y_rd148_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd148 read pattern: { mag_y_update_0[d0, d1] -> img[25 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write25 = img.img_img_update_0_write25_merged_banks_12.peek_125();
  return value_img_img_update_0_write25;
  return 0;
}

inline hw_uint<16> mag_y_rd149_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd149 read pattern: { mag_y_update_0[d0, d1] -> img[25 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write25 = img.img_img_update_0_write25_merged_banks_12.peek_1();
  return value_img_img_update_0_write25;
  return 0;
}

inline hw_uint<16> mag_y_rd15_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd15 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_1();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<16> mag_y_rd150_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd150 read pattern: { mag_y_update_0[d0, d1] -> img[24 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write24 = img.img_img_update_0_write24_merged_banks_12.peek_125();
  return value_img_img_update_0_write24;
  return 0;
}

inline hw_uint<16> mag_y_rd151_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd151 read pattern: { mag_y_update_0[d0, d1] -> img[24 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write24 = img.img_img_update_0_write24_merged_banks_12.peek_1();
  return value_img_img_update_0_write24;
  return 0;
}

inline hw_uint<16> mag_y_rd152_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd152 read pattern: { mag_y_update_0[d0, d1] -> img[25 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write25 = img.img_img_update_0_write25_merged_banks_12.peek_125();
  return value_img_img_update_0_write25;
  return 0;
}

inline hw_uint<16> mag_y_rd153_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd153 read pattern: { mag_y_update_0[d0, d1] -> img[25 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write25 = img.img_img_update_0_write25_merged_banks_12.peek_1();
  return value_img_img_update_0_write25;
  return 0;
}

inline hw_uint<16> mag_y_rd154_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd154 read pattern: { mag_y_update_0[d0, d1] -> img[26 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write26 = img.img_img_update_0_write26_merged_banks_12.peek_125();
  return value_img_img_update_0_write26;
  return 0;
}

inline hw_uint<16> mag_y_rd155_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd155 read pattern: { mag_y_update_0[d0, d1] -> img[26 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write26 = img.img_img_update_0_write26_merged_banks_12.peek_1();
  return value_img_img_update_0_write26;
  return 0;
}

inline hw_uint<16> mag_y_rd156_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd156 read pattern: { mag_y_update_0[d0, d1] -> img[25 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write25 = img.img_img_update_0_write25_merged_banks_12.peek_125();
  return value_img_img_update_0_write25;
  return 0;
}

inline hw_uint<16> mag_y_rd157_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd157 read pattern: { mag_y_update_0[d0, d1] -> img[25 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write25 = img.img_img_update_0_write25_merged_banks_12.peek_1();
  return value_img_img_update_0_write25;
  return 0;
}

inline hw_uint<16> mag_y_rd158_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd158 read pattern: { mag_y_update_0[d0, d1] -> img[26 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write26 = img.img_img_update_0_write26_merged_banks_12.peek_125();
  return value_img_img_update_0_write26;
  return 0;
}

inline hw_uint<16> mag_y_rd159_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd159 read pattern: { mag_y_update_0[d0, d1] -> img[26 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write26 = img.img_img_update_0_write26_merged_banks_12.peek_1();
  return value_img_img_update_0_write26;
  return 0;
}

inline hw_uint<16> mag_y_rd16_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd16 read pattern: { mag_y_update_0[d0, d1] -> img[3 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_125();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<16> mag_y_rd160_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd160 read pattern: { mag_y_update_0[d0, d1] -> img[27 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write27 = img.img_img_update_0_write27_merged_banks_12.peek_125();
  return value_img_img_update_0_write27;
  return 0;
}

inline hw_uint<16> mag_y_rd161_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd161 read pattern: { mag_y_update_0[d0, d1] -> img[27 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write27 = img.img_img_update_0_write27_merged_banks_12.peek_1();
  return value_img_img_update_0_write27;
  return 0;
}

inline hw_uint<16> mag_y_rd162_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd162 read pattern: { mag_y_update_0[d0, d1] -> img[26 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write26 = img.img_img_update_0_write26_merged_banks_12.peek_125();
  return value_img_img_update_0_write26;
  return 0;
}

inline hw_uint<16> mag_y_rd163_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd163 read pattern: { mag_y_update_0[d0, d1] -> img[26 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write26 = img.img_img_update_0_write26_merged_banks_12.peek_1();
  return value_img_img_update_0_write26;
  return 0;
}

inline hw_uint<16> mag_y_rd164_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd164 read pattern: { mag_y_update_0[d0, d1] -> img[27 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write27 = img.img_img_update_0_write27_merged_banks_12.peek_125();
  return value_img_img_update_0_write27;
  return 0;
}

inline hw_uint<16> mag_y_rd165_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd165 read pattern: { mag_y_update_0[d0, d1] -> img[27 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write27 = img.img_img_update_0_write27_merged_banks_12.peek_1();
  return value_img_img_update_0_write27;
  return 0;
}

inline hw_uint<16> mag_y_rd166_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd166 read pattern: { mag_y_update_0[d0, d1] -> img[28 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write28 = img.img_img_update_0_write28_merged_banks_12.peek_125();
  return value_img_img_update_0_write28;
  return 0;
}

inline hw_uint<16> mag_y_rd167_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd167 read pattern: { mag_y_update_0[d0, d1] -> img[28 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write28 = img.img_img_update_0_write28_merged_banks_12.peek_1();
  return value_img_img_update_0_write28;
  return 0;
}

inline hw_uint<16> mag_y_rd168_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd168 read pattern: { mag_y_update_0[d0, d1] -> img[27 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write27 = img.img_img_update_0_write27_merged_banks_12.peek_125();
  return value_img_img_update_0_write27;
  return 0;
}

inline hw_uint<16> mag_y_rd169_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd169 read pattern: { mag_y_update_0[d0, d1] -> img[27 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write27 = img.img_img_update_0_write27_merged_banks_12.peek_1();
  return value_img_img_update_0_write27;
  return 0;
}

inline hw_uint<16> mag_y_rd17_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd17 read pattern: { mag_y_update_0[d0, d1] -> img[3 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_1();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<16> mag_y_rd170_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd170 read pattern: { mag_y_update_0[d0, d1] -> img[28 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write28 = img.img_img_update_0_write28_merged_banks_12.peek_125();
  return value_img_img_update_0_write28;
  return 0;
}

inline hw_uint<16> mag_y_rd171_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd171 read pattern: { mag_y_update_0[d0, d1] -> img[28 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write28 = img.img_img_update_0_write28_merged_banks_12.peek_1();
  return value_img_img_update_0_write28;
  return 0;
}

inline hw_uint<16> mag_y_rd172_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd172 read pattern: { mag_y_update_0[d0, d1] -> img[29 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write29 = img.img_img_update_0_write29_merged_banks_12.peek_125();
  return value_img_img_update_0_write29;
  return 0;
}

inline hw_uint<16> mag_y_rd173_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd173 read pattern: { mag_y_update_0[d0, d1] -> img[29 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write29 = img.img_img_update_0_write29_merged_banks_12.peek_1();
  return value_img_img_update_0_write29;
  return 0;
}

inline hw_uint<16> mag_y_rd174_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd174 read pattern: { mag_y_update_0[d0, d1] -> img[28 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write28 = img.img_img_update_0_write28_merged_banks_12.peek_125();
  return value_img_img_update_0_write28;
  return 0;
}

inline hw_uint<16> mag_y_rd175_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd175 read pattern: { mag_y_update_0[d0, d1] -> img[28 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write28 = img.img_img_update_0_write28_merged_banks_12.peek_1();
  return value_img_img_update_0_write28;
  return 0;
}

inline hw_uint<16> mag_y_rd176_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd176 read pattern: { mag_y_update_0[d0, d1] -> img[29 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write29 = img.img_img_update_0_write29_merged_banks_12.peek_125();
  return value_img_img_update_0_write29;
  return 0;
}

inline hw_uint<16> mag_y_rd177_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd177 read pattern: { mag_y_update_0[d0, d1] -> img[29 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write29 = img.img_img_update_0_write29_merged_banks_12.peek_1();
  return value_img_img_update_0_write29;
  return 0;
}

inline hw_uint<16> mag_y_rd178_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd178 read pattern: { mag_y_update_0[d0, d1] -> img[30 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write30 = img.img_img_update_0_write30_merged_banks_12.peek_125();
  return value_img_img_update_0_write30;
  return 0;
}

inline hw_uint<16> mag_y_rd179_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd179 read pattern: { mag_y_update_0[d0, d1] -> img[30 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write30 = img.img_img_update_0_write30_merged_banks_12.peek_1();
  return value_img_img_update_0_write30;
  return 0;
}

inline hw_uint<16> mag_y_rd18_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd18 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_125();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<16> mag_y_rd180_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd180 read pattern: { mag_y_update_0[d0, d1] -> img[29 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write29 = img.img_img_update_0_write29_merged_banks_12.peek_125();
  return value_img_img_update_0_write29;
  return 0;
}

inline hw_uint<16> mag_y_rd181_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd181 read pattern: { mag_y_update_0[d0, d1] -> img[29 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write29 = img.img_img_update_0_write29_merged_banks_12.peek_1();
  return value_img_img_update_0_write29;
  return 0;
}

inline hw_uint<16> mag_y_rd182_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd182 read pattern: { mag_y_update_0[d0, d1] -> img[30 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write30 = img.img_img_update_0_write30_merged_banks_12.peek_125();
  return value_img_img_update_0_write30;
  return 0;
}

inline hw_uint<16> mag_y_rd183_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd183 read pattern: { mag_y_update_0[d0, d1] -> img[30 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write30 = img.img_img_update_0_write30_merged_banks_12.peek_1();
  return value_img_img_update_0_write30;
  return 0;
}

inline hw_uint<16> mag_y_rd184_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd184 read pattern: { mag_y_update_0[d0, d1] -> img[31 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write31 = img.img_img_update_0_write31_merged_banks_12.peek_125();
  return value_img_img_update_0_write31;
  return 0;
}

inline hw_uint<16> mag_y_rd185_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd185 read pattern: { mag_y_update_0[d0, d1] -> img[31 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write31 = img.img_img_update_0_write31_merged_banks_12.peek_1();
  return value_img_img_update_0_write31;
  return 0;
}

inline hw_uint<16> mag_y_rd186_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd186 read pattern: { mag_y_update_0[d0, d1] -> img[30 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write30 = img.img_img_update_0_write30_merged_banks_12.peek_125();
  return value_img_img_update_0_write30;
  return 0;
}

inline hw_uint<16> mag_y_rd187_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd187 read pattern: { mag_y_update_0[d0, d1] -> img[30 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write30 = img.img_img_update_0_write30_merged_banks_12.peek_1();
  return value_img_img_update_0_write30;
  return 0;
}

inline hw_uint<16> mag_y_rd188_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd188 read pattern: { mag_y_update_0[d0, d1] -> img[31 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write31 = img.img_img_update_0_write31_merged_banks_12.peek_125();
  return value_img_img_update_0_write31;
  return 0;
}

inline hw_uint<16> mag_y_rd189_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd189 read pattern: { mag_y_update_0[d0, d1] -> img[31 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write31 = img.img_img_update_0_write31_merged_banks_12.peek_1();
  return value_img_img_update_0_write31;
  return 0;
}

inline hw_uint<16> mag_y_rd19_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd19 read pattern: { mag_y_update_0[d0, d1] -> img[2 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write2 = img.img_img_update_0_write2_merged_banks_12.peek_1();
  return value_img_img_update_0_write2;
  return 0;
}

inline hw_uint<16> mag_y_rd190_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd190 read pattern: { mag_y_update_0[d0, d1] -> img[32 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_124();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<16> mag_y_rd191_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd191 read pattern: { mag_y_update_0[d0, d1] -> img[32 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_0();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<16> mag_y_rd2_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd2 read pattern: { mag_y_update_0[d0, d1] -> img[32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_125();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<16> mag_y_rd20_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd20 read pattern: { mag_y_update_0[d0, d1] -> img[3 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_125();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<16> mag_y_rd21_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd21 read pattern: { mag_y_update_0[d0, d1] -> img[3 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_1();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<16> mag_y_rd22_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd22 read pattern: { mag_y_update_0[d0, d1] -> img[4 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_125();
  return value_img_img_update_0_write4;
  return 0;
}

inline hw_uint<16> mag_y_rd23_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd23 read pattern: { mag_y_update_0[d0, d1] -> img[4 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_1();
  return value_img_img_update_0_write4;
  return 0;
}

inline hw_uint<16> mag_y_rd24_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd24 read pattern: { mag_y_update_0[d0, d1] -> img[3 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_125();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<16> mag_y_rd25_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd25 read pattern: { mag_y_update_0[d0, d1] -> img[3 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write3 = img.img_img_update_0_write3_merged_banks_12.peek_1();
  return value_img_img_update_0_write3;
  return 0;
}

inline hw_uint<16> mag_y_rd26_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd26 read pattern: { mag_y_update_0[d0, d1] -> img[4 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_125();
  return value_img_img_update_0_write4;
  return 0;
}

inline hw_uint<16> mag_y_rd27_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd27 read pattern: { mag_y_update_0[d0, d1] -> img[4 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_1();
  return value_img_img_update_0_write4;
  return 0;
}

inline hw_uint<16> mag_y_rd28_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd28 read pattern: { mag_y_update_0[d0, d1] -> img[5 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_125();
  return value_img_img_update_0_write5;
  return 0;
}

inline hw_uint<16> mag_y_rd29_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd29 read pattern: { mag_y_update_0[d0, d1] -> img[5 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_1();
  return value_img_img_update_0_write5;
  return 0;
}

inline hw_uint<16> mag_y_rd3_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd3 read pattern: { mag_y_update_0[d0, d1] -> img[32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_1();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<16> mag_y_rd30_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd30 read pattern: { mag_y_update_0[d0, d1] -> img[4 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_125();
  return value_img_img_update_0_write4;
  return 0;
}

inline hw_uint<16> mag_y_rd31_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd31 read pattern: { mag_y_update_0[d0, d1] -> img[4 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write4 = img.img_img_update_0_write4_merged_banks_12.peek_1();
  return value_img_img_update_0_write4;
  return 0;
}

inline hw_uint<16> mag_y_rd32_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd32 read pattern: { mag_y_update_0[d0, d1] -> img[5 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_125();
  return value_img_img_update_0_write5;
  return 0;
}

inline hw_uint<16> mag_y_rd33_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd33 read pattern: { mag_y_update_0[d0, d1] -> img[5 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_1();
  return value_img_img_update_0_write5;
  return 0;
}

inline hw_uint<16> mag_y_rd34_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd34 read pattern: { mag_y_update_0[d0, d1] -> img[6 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_125();
  return value_img_img_update_0_write6;
  return 0;
}

inline hw_uint<16> mag_y_rd35_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd35 read pattern: { mag_y_update_0[d0, d1] -> img[6 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_1();
  return value_img_img_update_0_write6;
  return 0;
}

inline hw_uint<16> mag_y_rd36_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd36 read pattern: { mag_y_update_0[d0, d1] -> img[5 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_125();
  return value_img_img_update_0_write5;
  return 0;
}

inline hw_uint<16> mag_y_rd37_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd37 read pattern: { mag_y_update_0[d0, d1] -> img[5 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write5 = img.img_img_update_0_write5_merged_banks_12.peek_1();
  return value_img_img_update_0_write5;
  return 0;
}

inline hw_uint<16> mag_y_rd38_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd38 read pattern: { mag_y_update_0[d0, d1] -> img[6 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_125();
  return value_img_img_update_0_write6;
  return 0;
}

inline hw_uint<16> mag_y_rd39_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd39 read pattern: { mag_y_update_0[d0, d1] -> img[6 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_1();
  return value_img_img_update_0_write6;
  return 0;
}

inline hw_uint<16> mag_y_rd4_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd4 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_125();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<16> mag_y_rd40_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd40 read pattern: { mag_y_update_0[d0, d1] -> img[7 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_125();
  return value_img_img_update_0_write7;
  return 0;
}

inline hw_uint<16> mag_y_rd41_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd41 read pattern: { mag_y_update_0[d0, d1] -> img[7 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_1();
  return value_img_img_update_0_write7;
  return 0;
}

inline hw_uint<16> mag_y_rd42_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd42 read pattern: { mag_y_update_0[d0, d1] -> img[6 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_125();
  return value_img_img_update_0_write6;
  return 0;
}

inline hw_uint<16> mag_y_rd43_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd43 read pattern: { mag_y_update_0[d0, d1] -> img[6 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write6 = img.img_img_update_0_write6_merged_banks_12.peek_1();
  return value_img_img_update_0_write6;
  return 0;
}

inline hw_uint<16> mag_y_rd44_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd44 read pattern: { mag_y_update_0[d0, d1] -> img[7 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_125();
  return value_img_img_update_0_write7;
  return 0;
}

inline hw_uint<16> mag_y_rd45_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd45 read pattern: { mag_y_update_0[d0, d1] -> img[7 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_1();
  return value_img_img_update_0_write7;
  return 0;
}

inline hw_uint<16> mag_y_rd46_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd46 read pattern: { mag_y_update_0[d0, d1] -> img[8 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write8 = img.img_img_update_0_write8_merged_banks_12.peek_125();
  return value_img_img_update_0_write8;
  return 0;
}

inline hw_uint<16> mag_y_rd47_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd47 read pattern: { mag_y_update_0[d0, d1] -> img[8 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write8 = img.img_img_update_0_write8_merged_banks_12.peek_1();
  return value_img_img_update_0_write8;
  return 0;
}

inline hw_uint<16> mag_y_rd48_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd48 read pattern: { mag_y_update_0[d0, d1] -> img[7 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_125();
  return value_img_img_update_0_write7;
  return 0;
}

inline hw_uint<16> mag_y_rd49_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd49 read pattern: { mag_y_update_0[d0, d1] -> img[7 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write7 = img.img_img_update_0_write7_merged_banks_12.peek_1();
  return value_img_img_update_0_write7;
  return 0;
}

inline hw_uint<16> mag_y_rd5_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd5 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<16> mag_y_rd50_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd50 read pattern: { mag_y_update_0[d0, d1] -> img[8 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write8 = img.img_img_update_0_write8_merged_banks_12.peek_125();
  return value_img_img_update_0_write8;
  return 0;
}

inline hw_uint<16> mag_y_rd51_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd51 read pattern: { mag_y_update_0[d0, d1] -> img[8 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write8 = img.img_img_update_0_write8_merged_banks_12.peek_1();
  return value_img_img_update_0_write8;
  return 0;
}

inline hw_uint<16> mag_y_rd52_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd52 read pattern: { mag_y_update_0[d0, d1] -> img[9 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write9 = img.img_img_update_0_write9_merged_banks_12.peek_125();
  return value_img_img_update_0_write9;
  return 0;
}

inline hw_uint<16> mag_y_rd53_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd53 read pattern: { mag_y_update_0[d0, d1] -> img[9 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write9 = img.img_img_update_0_write9_merged_banks_12.peek_1();
  return value_img_img_update_0_write9;
  return 0;
}

inline hw_uint<16> mag_y_rd54_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd54 read pattern: { mag_y_update_0[d0, d1] -> img[8 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write8 = img.img_img_update_0_write8_merged_banks_12.peek_125();
  return value_img_img_update_0_write8;
  return 0;
}

inline hw_uint<16> mag_y_rd55_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd55 read pattern: { mag_y_update_0[d0, d1] -> img[8 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write8 = img.img_img_update_0_write8_merged_banks_12.peek_1();
  return value_img_img_update_0_write8;
  return 0;
}

inline hw_uint<16> mag_y_rd56_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd56 read pattern: { mag_y_update_0[d0, d1] -> img[9 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write9 = img.img_img_update_0_write9_merged_banks_12.peek_125();
  return value_img_img_update_0_write9;
  return 0;
}

inline hw_uint<16> mag_y_rd57_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd57 read pattern: { mag_y_update_0[d0, d1] -> img[9 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write9 = img.img_img_update_0_write9_merged_banks_12.peek_1();
  return value_img_img_update_0_write9;
  return 0;
}

inline hw_uint<16> mag_y_rd58_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd58 read pattern: { mag_y_update_0[d0, d1] -> img[10 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write10 = img.img_img_update_0_write10_merged_banks_12.peek_125();
  return value_img_img_update_0_write10;
  return 0;
}

inline hw_uint<16> mag_y_rd59_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd59 read pattern: { mag_y_update_0[d0, d1] -> img[10 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write10 = img.img_img_update_0_write10_merged_banks_12.peek_1();
  return value_img_img_update_0_write10;
  return 0;
}

inline hw_uint<16> mag_y_rd6_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd6 read pattern: { mag_y_update_0[d0, d1] -> img[32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_125();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<16> mag_y_rd60_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd60 read pattern: { mag_y_update_0[d0, d1] -> img[9 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write9 = img.img_img_update_0_write9_merged_banks_12.peek_125();
  return value_img_img_update_0_write9;
  return 0;
}

inline hw_uint<16> mag_y_rd61_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd61 read pattern: { mag_y_update_0[d0, d1] -> img[9 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write9 = img.img_img_update_0_write9_merged_banks_12.peek_1();
  return value_img_img_update_0_write9;
  return 0;
}

inline hw_uint<16> mag_y_rd62_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd62 read pattern: { mag_y_update_0[d0, d1] -> img[10 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write10 = img.img_img_update_0_write10_merged_banks_12.peek_125();
  return value_img_img_update_0_write10;
  return 0;
}

inline hw_uint<16> mag_y_rd63_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd63 read pattern: { mag_y_update_0[d0, d1] -> img[10 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write10 = img.img_img_update_0_write10_merged_banks_12.peek_1();
  return value_img_img_update_0_write10;
  return 0;
}

inline hw_uint<16> mag_y_rd64_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd64 read pattern: { mag_y_update_0[d0, d1] -> img[11 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write11 = img.img_img_update_0_write11_merged_banks_12.peek_125();
  return value_img_img_update_0_write11;
  return 0;
}

inline hw_uint<16> mag_y_rd65_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd65 read pattern: { mag_y_update_0[d0, d1] -> img[11 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write11 = img.img_img_update_0_write11_merged_banks_12.peek_1();
  return value_img_img_update_0_write11;
  return 0;
}

inline hw_uint<16> mag_y_rd66_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd66 read pattern: { mag_y_update_0[d0, d1] -> img[10 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write10 = img.img_img_update_0_write10_merged_banks_12.peek_125();
  return value_img_img_update_0_write10;
  return 0;
}

inline hw_uint<16> mag_y_rd67_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd67 read pattern: { mag_y_update_0[d0, d1] -> img[10 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write10 = img.img_img_update_0_write10_merged_banks_12.peek_1();
  return value_img_img_update_0_write10;
  return 0;
}

inline hw_uint<16> mag_y_rd68_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd68 read pattern: { mag_y_update_0[d0, d1] -> img[11 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write11 = img.img_img_update_0_write11_merged_banks_12.peek_125();
  return value_img_img_update_0_write11;
  return 0;
}

inline hw_uint<16> mag_y_rd69_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd69 read pattern: { mag_y_update_0[d0, d1] -> img[11 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write11 = img.img_img_update_0_write11_merged_banks_12.peek_1();
  return value_img_img_update_0_write11;
  return 0;
}

inline hw_uint<16> mag_y_rd7_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd7 read pattern: { mag_y_update_0[d0, d1] -> img[32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write0 = img.img_img_update_0_write0_merged_banks_12.peek_1();
  return value_img_img_update_0_write0;
  return 0;
}

inline hw_uint<16> mag_y_rd70_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd70 read pattern: { mag_y_update_0[d0, d1] -> img[12 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write12 = img.img_img_update_0_write12_merged_banks_12.peek_125();
  return value_img_img_update_0_write12;
  return 0;
}

inline hw_uint<16> mag_y_rd71_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd71 read pattern: { mag_y_update_0[d0, d1] -> img[12 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write12 = img.img_img_update_0_write12_merged_banks_12.peek_1();
  return value_img_img_update_0_write12;
  return 0;
}

inline hw_uint<16> mag_y_rd72_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd72 read pattern: { mag_y_update_0[d0, d1] -> img[11 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write11 = img.img_img_update_0_write11_merged_banks_12.peek_125();
  return value_img_img_update_0_write11;
  return 0;
}

inline hw_uint<16> mag_y_rd73_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd73 read pattern: { mag_y_update_0[d0, d1] -> img[11 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write11 = img.img_img_update_0_write11_merged_banks_12.peek_1();
  return value_img_img_update_0_write11;
  return 0;
}

inline hw_uint<16> mag_y_rd74_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd74 read pattern: { mag_y_update_0[d0, d1] -> img[12 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write12 = img.img_img_update_0_write12_merged_banks_12.peek_125();
  return value_img_img_update_0_write12;
  return 0;
}

inline hw_uint<16> mag_y_rd75_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd75 read pattern: { mag_y_update_0[d0, d1] -> img[12 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write12 = img.img_img_update_0_write12_merged_banks_12.peek_1();
  return value_img_img_update_0_write12;
  return 0;
}

inline hw_uint<16> mag_y_rd76_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd76 read pattern: { mag_y_update_0[d0, d1] -> img[13 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write13 = img.img_img_update_0_write13_merged_banks_12.peek_125();
  return value_img_img_update_0_write13;
  return 0;
}

inline hw_uint<16> mag_y_rd77_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd77 read pattern: { mag_y_update_0[d0, d1] -> img[13 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write13 = img.img_img_update_0_write13_merged_banks_12.peek_1();
  return value_img_img_update_0_write13;
  return 0;
}

inline hw_uint<16> mag_y_rd78_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd78 read pattern: { mag_y_update_0[d0, d1] -> img[12 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write12 = img.img_img_update_0_write12_merged_banks_12.peek_125();
  return value_img_img_update_0_write12;
  return 0;
}

inline hw_uint<16> mag_y_rd79_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd79 read pattern: { mag_y_update_0[d0, d1] -> img[12 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write12 = img.img_img_update_0_write12_merged_banks_12.peek_1();
  return value_img_img_update_0_write12;
  return 0;
}

inline hw_uint<16> mag_y_rd8_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd8 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_125();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<16> mag_y_rd80_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd80 read pattern: { mag_y_update_0[d0, d1] -> img[13 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write13 = img.img_img_update_0_write13_merged_banks_12.peek_125();
  return value_img_img_update_0_write13;
  return 0;
}

inline hw_uint<16> mag_y_rd81_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd81 read pattern: { mag_y_update_0[d0, d1] -> img[13 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write13 = img.img_img_update_0_write13_merged_banks_12.peek_1();
  return value_img_img_update_0_write13;
  return 0;
}

inline hw_uint<16> mag_y_rd82_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd82 read pattern: { mag_y_update_0[d0, d1] -> img[14 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write14 = img.img_img_update_0_write14_merged_banks_12.peek_125();
  return value_img_img_update_0_write14;
  return 0;
}

inline hw_uint<16> mag_y_rd83_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd83 read pattern: { mag_y_update_0[d0, d1] -> img[14 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write14 = img.img_img_update_0_write14_merged_banks_12.peek_1();
  return value_img_img_update_0_write14;
  return 0;
}

inline hw_uint<16> mag_y_rd84_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd84 read pattern: { mag_y_update_0[d0, d1] -> img[13 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write13 = img.img_img_update_0_write13_merged_banks_12.peek_125();
  return value_img_img_update_0_write13;
  return 0;
}

inline hw_uint<16> mag_y_rd85_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd85 read pattern: { mag_y_update_0[d0, d1] -> img[13 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write13 = img.img_img_update_0_write13_merged_banks_12.peek_1();
  return value_img_img_update_0_write13;
  return 0;
}

inline hw_uint<16> mag_y_rd86_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd86 read pattern: { mag_y_update_0[d0, d1] -> img[14 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write14 = img.img_img_update_0_write14_merged_banks_12.peek_125();
  return value_img_img_update_0_write14;
  return 0;
}

inline hw_uint<16> mag_y_rd87_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd87 read pattern: { mag_y_update_0[d0, d1] -> img[14 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write14 = img.img_img_update_0_write14_merged_banks_12.peek_1();
  return value_img_img_update_0_write14;
  return 0;
}

inline hw_uint<16> mag_y_rd88_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd88 read pattern: { mag_y_update_0[d0, d1] -> img[15 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write15 = img.img_img_update_0_write15_merged_banks_12.peek_125();
  return value_img_img_update_0_write15;
  return 0;
}

inline hw_uint<16> mag_y_rd89_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd89 read pattern: { mag_y_update_0[d0, d1] -> img[15 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write15 = img.img_img_update_0_write15_merged_banks_12.peek_1();
  return value_img_img_update_0_write15;
  return 0;
}

inline hw_uint<16> mag_y_rd9_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd9 read pattern: { mag_y_update_0[d0, d1] -> img[1 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write1 = img.img_img_update_0_write1_merged_banks_12.peek_1();
  return value_img_img_update_0_write1;
  return 0;
}

inline hw_uint<16> mag_y_rd90_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd90 read pattern: { mag_y_update_0[d0, d1] -> img[14 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write14 = img.img_img_update_0_write14_merged_banks_12.peek_125();
  return value_img_img_update_0_write14;
  return 0;
}

inline hw_uint<16> mag_y_rd91_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd91 read pattern: { mag_y_update_0[d0, d1] -> img[14 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write14 = img.img_img_update_0_write14_merged_banks_12.peek_1();
  return value_img_img_update_0_write14;
  return 0;
}

inline hw_uint<16> mag_y_rd92_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd92 read pattern: { mag_y_update_0[d0, d1] -> img[15 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write15 = img.img_img_update_0_write15_merged_banks_12.peek_125();
  return value_img_img_update_0_write15;
  return 0;
}

inline hw_uint<16> mag_y_rd93_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd93 read pattern: { mag_y_update_0[d0, d1] -> img[15 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write15 = img.img_img_update_0_write15_merged_banks_12.peek_1();
  return value_img_img_update_0_write15;
  return 0;
}

inline hw_uint<16> mag_y_rd94_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd94 read pattern: { mag_y_update_0[d0, d1] -> img[16 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write16 = img.img_img_update_0_write16_merged_banks_12.peek_125();
  return value_img_img_update_0_write16;
  return 0;
}

inline hw_uint<16> mag_y_rd95_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd95 read pattern: { mag_y_update_0[d0, d1] -> img[16 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write16 = img.img_img_update_0_write16_merged_banks_12.peek_1();
  return value_img_img_update_0_write16;
  return 0;
}

inline hw_uint<16> mag_y_rd96_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd96 read pattern: { mag_y_update_0[d0, d1] -> img[15 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write15 = img.img_img_update_0_write15_merged_banks_12.peek_125();
  return value_img_img_update_0_write15;
  return 0;
}

inline hw_uint<16> mag_y_rd97_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd97 read pattern: { mag_y_update_0[d0, d1] -> img[15 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write15 = img.img_img_update_0_write15_merged_banks_12.peek_1();
  return value_img_img_update_0_write15;
  return 0;
}

inline hw_uint<16> mag_y_rd98_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd98 read pattern: { mag_y_update_0[d0, d1] -> img[16 + 32d0, -1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write16 = img.img_img_update_0_write16_merged_banks_12.peek_125();
  return value_img_img_update_0_write16;
  return 0;
}

inline hw_uint<16> mag_y_rd99_select(img_cache& img, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_rd99 read pattern: { mag_y_update_0[d0, d1] -> img[16 + 32d0, 1 + d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
  auto value_img_img_update_0_write16 = img.img_img_update_0_write16_merged_banks_12.peek_1();
  return value_img_img_update_0_write16;
  return 0;
}

// # of bundles = 3
// img_update_0_write
//	img_img_update_0_write0
//	img_img_update_0_write1
//	img_img_update_0_write2
//	img_img_update_0_write3
//	img_img_update_0_write4
//	img_img_update_0_write5
//	img_img_update_0_write6
//	img_img_update_0_write7
//	img_img_update_0_write8
//	img_img_update_0_write9
//	img_img_update_0_write10
//	img_img_update_0_write11
//	img_img_update_0_write12
//	img_img_update_0_write13
//	img_img_update_0_write14
//	img_img_update_0_write15
//	img_img_update_0_write16
//	img_img_update_0_write17
//	img_img_update_0_write18
//	img_img_update_0_write19
//	img_img_update_0_write20
//	img_img_update_0_write21
//	img_img_update_0_write22
//	img_img_update_0_write23
//	img_img_update_0_write24
//	img_img_update_0_write25
//	img_img_update_0_write26
//	img_img_update_0_write27
//	img_img_update_0_write28
//	img_img_update_0_write29
//	img_img_update_0_write30
//	img_img_update_0_write31
inline void img_img_update_0_write_bundle_write(hw_uint<512>& img_update_0_write, img_cache& img, int d0, int d1, int dynamic_address) {
	hw_uint<16> img_img_update_0_write0_res = img_update_0_write.extract<0, 15>();
	img_img_update_0_write0_write(img_img_update_0_write0_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write1_res = img_update_0_write.extract<16, 31>();
	img_img_update_0_write1_write(img_img_update_0_write1_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write2_res = img_update_0_write.extract<32, 47>();
	img_img_update_0_write2_write(img_img_update_0_write2_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write3_res = img_update_0_write.extract<48, 63>();
	img_img_update_0_write3_write(img_img_update_0_write3_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write4_res = img_update_0_write.extract<64, 79>();
	img_img_update_0_write4_write(img_img_update_0_write4_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write5_res = img_update_0_write.extract<80, 95>();
	img_img_update_0_write5_write(img_img_update_0_write5_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write6_res = img_update_0_write.extract<96, 111>();
	img_img_update_0_write6_write(img_img_update_0_write6_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write7_res = img_update_0_write.extract<112, 127>();
	img_img_update_0_write7_write(img_img_update_0_write7_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write8_res = img_update_0_write.extract<128, 143>();
	img_img_update_0_write8_write(img_img_update_0_write8_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write9_res = img_update_0_write.extract<144, 159>();
	img_img_update_0_write9_write(img_img_update_0_write9_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write10_res = img_update_0_write.extract<160, 175>();
	img_img_update_0_write10_write(img_img_update_0_write10_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write11_res = img_update_0_write.extract<176, 191>();
	img_img_update_0_write11_write(img_img_update_0_write11_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write12_res = img_update_0_write.extract<192, 207>();
	img_img_update_0_write12_write(img_img_update_0_write12_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write13_res = img_update_0_write.extract<208, 223>();
	img_img_update_0_write13_write(img_img_update_0_write13_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write14_res = img_update_0_write.extract<224, 239>();
	img_img_update_0_write14_write(img_img_update_0_write14_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write15_res = img_update_0_write.extract<240, 255>();
	img_img_update_0_write15_write(img_img_update_0_write15_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write16_res = img_update_0_write.extract<256, 271>();
	img_img_update_0_write16_write(img_img_update_0_write16_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write17_res = img_update_0_write.extract<272, 287>();
	img_img_update_0_write17_write(img_img_update_0_write17_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write18_res = img_update_0_write.extract<288, 303>();
	img_img_update_0_write18_write(img_img_update_0_write18_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write19_res = img_update_0_write.extract<304, 319>();
	img_img_update_0_write19_write(img_img_update_0_write19_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write20_res = img_update_0_write.extract<320, 335>();
	img_img_update_0_write20_write(img_img_update_0_write20_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write21_res = img_update_0_write.extract<336, 351>();
	img_img_update_0_write21_write(img_img_update_0_write21_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write22_res = img_update_0_write.extract<352, 367>();
	img_img_update_0_write22_write(img_img_update_0_write22_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write23_res = img_update_0_write.extract<368, 383>();
	img_img_update_0_write23_write(img_img_update_0_write23_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write24_res = img_update_0_write.extract<384, 399>();
	img_img_update_0_write24_write(img_img_update_0_write24_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write25_res = img_update_0_write.extract<400, 415>();
	img_img_update_0_write25_write(img_img_update_0_write25_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write26_res = img_update_0_write.extract<416, 431>();
	img_img_update_0_write26_write(img_img_update_0_write26_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write27_res = img_update_0_write.extract<432, 447>();
	img_img_update_0_write27_write(img_img_update_0_write27_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write28_res = img_update_0_write.extract<448, 463>();
	img_img_update_0_write28_write(img_img_update_0_write28_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write29_res = img_update_0_write.extract<464, 479>();
	img_img_update_0_write29_write(img_img_update_0_write29_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write30_res = img_update_0_write.extract<480, 495>();
	img_img_update_0_write30_write(img_img_update_0_write30_res, img, d0, d1, dynamic_address);
	hw_uint<16> img_img_update_0_write31_res = img_update_0_write.extract<496, 511>();
	img_img_update_0_write31_write(img_img_update_0_write31_res, img, d0, d1, dynamic_address);
}

// mag_x_update_0_read
//	mag_x_rd0
//	mag_x_rd1
//	mag_x_rd2
//	mag_x_rd3
//	mag_x_rd4
//	mag_x_rd5
//	mag_x_rd6
//	mag_x_rd7
//	mag_x_rd8
//	mag_x_rd9
//	mag_x_rd10
//	mag_x_rd11
//	mag_x_rd12
//	mag_x_rd13
//	mag_x_rd14
//	mag_x_rd15
//	mag_x_rd16
//	mag_x_rd17
//	mag_x_rd18
//	mag_x_rd19
//	mag_x_rd20
//	mag_x_rd21
//	mag_x_rd22
//	mag_x_rd23
//	mag_x_rd24
//	mag_x_rd25
//	mag_x_rd26
//	mag_x_rd27
//	mag_x_rd28
//	mag_x_rd29
//	mag_x_rd30
//	mag_x_rd31
//	mag_x_rd32
//	mag_x_rd33
//	mag_x_rd34
//	mag_x_rd35
//	mag_x_rd36
//	mag_x_rd37
//	mag_x_rd38
//	mag_x_rd39
//	mag_x_rd40
//	mag_x_rd41
//	mag_x_rd42
//	mag_x_rd43
//	mag_x_rd44
//	mag_x_rd45
//	mag_x_rd46
//	mag_x_rd47
//	mag_x_rd48
//	mag_x_rd49
//	mag_x_rd50
//	mag_x_rd51
//	mag_x_rd52
//	mag_x_rd53
//	mag_x_rd54
//	mag_x_rd55
//	mag_x_rd56
//	mag_x_rd57
//	mag_x_rd58
//	mag_x_rd59
//	mag_x_rd60
//	mag_x_rd61
//	mag_x_rd62
//	mag_x_rd63
//	mag_x_rd64
//	mag_x_rd65
//	mag_x_rd66
//	mag_x_rd67
//	mag_x_rd68
//	mag_x_rd69
//	mag_x_rd70
//	mag_x_rd71
//	mag_x_rd72
//	mag_x_rd73
//	mag_x_rd74
//	mag_x_rd75
//	mag_x_rd76
//	mag_x_rd77
//	mag_x_rd78
//	mag_x_rd79
//	mag_x_rd80
//	mag_x_rd81
//	mag_x_rd82
//	mag_x_rd83
//	mag_x_rd84
//	mag_x_rd85
//	mag_x_rd86
//	mag_x_rd87
//	mag_x_rd88
//	mag_x_rd89
//	mag_x_rd90
//	mag_x_rd91
//	mag_x_rd92
//	mag_x_rd93
//	mag_x_rd94
//	mag_x_rd95
//	mag_x_rd96
//	mag_x_rd97
//	mag_x_rd98
//	mag_x_rd99
//	mag_x_rd100
//	mag_x_rd101
//	mag_x_rd102
//	mag_x_rd103
//	mag_x_rd104
//	mag_x_rd105
//	mag_x_rd106
//	mag_x_rd107
//	mag_x_rd108
//	mag_x_rd109
//	mag_x_rd110
//	mag_x_rd111
//	mag_x_rd112
//	mag_x_rd113
//	mag_x_rd114
//	mag_x_rd115
//	mag_x_rd116
//	mag_x_rd117
//	mag_x_rd118
//	mag_x_rd119
//	mag_x_rd120
//	mag_x_rd121
//	mag_x_rd122
//	mag_x_rd123
//	mag_x_rd124
//	mag_x_rd125
//	mag_x_rd126
//	mag_x_rd127
//	mag_x_rd128
//	mag_x_rd129
//	mag_x_rd130
//	mag_x_rd131
//	mag_x_rd132
//	mag_x_rd133
//	mag_x_rd134
//	mag_x_rd135
//	mag_x_rd136
//	mag_x_rd137
//	mag_x_rd138
//	mag_x_rd139
//	mag_x_rd140
//	mag_x_rd141
//	mag_x_rd142
//	mag_x_rd143
//	mag_x_rd144
//	mag_x_rd145
//	mag_x_rd146
//	mag_x_rd147
//	mag_x_rd148
//	mag_x_rd149
//	mag_x_rd150
//	mag_x_rd151
//	mag_x_rd152
//	mag_x_rd153
//	mag_x_rd154
//	mag_x_rd155
//	mag_x_rd156
//	mag_x_rd157
//	mag_x_rd158
//	mag_x_rd159
//	mag_x_rd160
//	mag_x_rd161
//	mag_x_rd162
//	mag_x_rd163
//	mag_x_rd164
//	mag_x_rd165
//	mag_x_rd166
//	mag_x_rd167
//	mag_x_rd168
//	mag_x_rd169
//	mag_x_rd170
//	mag_x_rd171
//	mag_x_rd172
//	mag_x_rd173
//	mag_x_rd174
//	mag_x_rd175
//	mag_x_rd176
//	mag_x_rd177
//	mag_x_rd178
//	mag_x_rd179
//	mag_x_rd180
//	mag_x_rd181
//	mag_x_rd182
//	mag_x_rd183
//	mag_x_rd184
//	mag_x_rd185
//	mag_x_rd186
//	mag_x_rd187
//	mag_x_rd188
//	mag_x_rd189
//	mag_x_rd190
//	mag_x_rd191
inline hw_uint<3072> img_mag_x_update_0_read_bundle_read(img_cache& img, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 192
    // mag_x_rd0
    // mag_x_rd1
    // mag_x_rd2
    // mag_x_rd3
    // mag_x_rd4
    // mag_x_rd5
    // mag_x_rd6
    // mag_x_rd7
    // mag_x_rd8
    // mag_x_rd9
    // mag_x_rd10
    // mag_x_rd11
    // mag_x_rd12
    // mag_x_rd13
    // mag_x_rd14
    // mag_x_rd15
    // mag_x_rd16
    // mag_x_rd17
    // mag_x_rd18
    // mag_x_rd19
    // mag_x_rd20
    // mag_x_rd21
    // mag_x_rd22
    // mag_x_rd23
    // mag_x_rd24
    // mag_x_rd25
    // mag_x_rd26
    // mag_x_rd27
    // mag_x_rd28
    // mag_x_rd29
    // mag_x_rd30
    // mag_x_rd31
    // mag_x_rd32
    // mag_x_rd33
    // mag_x_rd34
    // mag_x_rd35
    // mag_x_rd36
    // mag_x_rd37
    // mag_x_rd38
    // mag_x_rd39
    // mag_x_rd40
    // mag_x_rd41
    // mag_x_rd42
    // mag_x_rd43
    // mag_x_rd44
    // mag_x_rd45
    // mag_x_rd46
    // mag_x_rd47
    // mag_x_rd48
    // mag_x_rd49
    // mag_x_rd50
    // mag_x_rd51
    // mag_x_rd52
    // mag_x_rd53
    // mag_x_rd54
    // mag_x_rd55
    // mag_x_rd56
    // mag_x_rd57
    // mag_x_rd58
    // mag_x_rd59
    // mag_x_rd60
    // mag_x_rd61
    // mag_x_rd62
    // mag_x_rd63
    // mag_x_rd64
    // mag_x_rd65
    // mag_x_rd66
    // mag_x_rd67
    // mag_x_rd68
    // mag_x_rd69
    // mag_x_rd70
    // mag_x_rd71
    // mag_x_rd72
    // mag_x_rd73
    // mag_x_rd74
    // mag_x_rd75
    // mag_x_rd76
    // mag_x_rd77
    // mag_x_rd78
    // mag_x_rd79
    // mag_x_rd80
    // mag_x_rd81
    // mag_x_rd82
    // mag_x_rd83
    // mag_x_rd84
    // mag_x_rd85
    // mag_x_rd86
    // mag_x_rd87
    // mag_x_rd88
    // mag_x_rd89
    // mag_x_rd90
    // mag_x_rd91
    // mag_x_rd92
    // mag_x_rd93
    // mag_x_rd94
    // mag_x_rd95
    // mag_x_rd96
    // mag_x_rd97
    // mag_x_rd98
    // mag_x_rd99
    // mag_x_rd100
    // mag_x_rd101
    // mag_x_rd102
    // mag_x_rd103
    // mag_x_rd104
    // mag_x_rd105
    // mag_x_rd106
    // mag_x_rd107
    // mag_x_rd108
    // mag_x_rd109
    // mag_x_rd110
    // mag_x_rd111
    // mag_x_rd112
    // mag_x_rd113
    // mag_x_rd114
    // mag_x_rd115
    // mag_x_rd116
    // mag_x_rd117
    // mag_x_rd118
    // mag_x_rd119
    // mag_x_rd120
    // mag_x_rd121
    // mag_x_rd122
    // mag_x_rd123
    // mag_x_rd124
    // mag_x_rd125
    // mag_x_rd126
    // mag_x_rd127
    // mag_x_rd128
    // mag_x_rd129
    // mag_x_rd130
    // mag_x_rd131
    // mag_x_rd132
    // mag_x_rd133
    // mag_x_rd134
    // mag_x_rd135
    // mag_x_rd136
    // mag_x_rd137
    // mag_x_rd138
    // mag_x_rd139
    // mag_x_rd140
    // mag_x_rd141
    // mag_x_rd142
    // mag_x_rd143
    // mag_x_rd144
    // mag_x_rd145
    // mag_x_rd146
    // mag_x_rd147
    // mag_x_rd148
    // mag_x_rd149
    // mag_x_rd150
    // mag_x_rd151
    // mag_x_rd152
    // mag_x_rd153
    // mag_x_rd154
    // mag_x_rd155
    // mag_x_rd156
    // mag_x_rd157
    // mag_x_rd158
    // mag_x_rd159
    // mag_x_rd160
    // mag_x_rd161
    // mag_x_rd162
    // mag_x_rd163
    // mag_x_rd164
    // mag_x_rd165
    // mag_x_rd166
    // mag_x_rd167
    // mag_x_rd168
    // mag_x_rd169
    // mag_x_rd170
    // mag_x_rd171
    // mag_x_rd172
    // mag_x_rd173
    // mag_x_rd174
    // mag_x_rd175
    // mag_x_rd176
    // mag_x_rd177
    // mag_x_rd178
    // mag_x_rd179
    // mag_x_rd180
    // mag_x_rd181
    // mag_x_rd182
    // mag_x_rd183
    // mag_x_rd184
    // mag_x_rd185
    // mag_x_rd186
    // mag_x_rd187
    // mag_x_rd188
    // mag_x_rd189
    // mag_x_rd190
    // mag_x_rd191

	hw_uint<3072> result;
	hw_uint<16> mag_x_rd0_res = mag_x_rd0_select(img, d0, d1, dynamic_address);
	set_at<0, 3072>(result, mag_x_rd0_res);
	hw_uint<16> mag_x_rd1_res = mag_x_rd1_select(img, d0, d1, dynamic_address);
	set_at<16, 3072>(result, mag_x_rd1_res);
	hw_uint<16> mag_x_rd2_res = mag_x_rd2_select(img, d0, d1, dynamic_address);
	set_at<32, 3072>(result, mag_x_rd2_res);
	hw_uint<16> mag_x_rd3_res = mag_x_rd3_select(img, d0, d1, dynamic_address);
	set_at<48, 3072>(result, mag_x_rd3_res);
	hw_uint<16> mag_x_rd4_res = mag_x_rd4_select(img, d0, d1, dynamic_address);
	set_at<64, 3072>(result, mag_x_rd4_res);
	hw_uint<16> mag_x_rd5_res = mag_x_rd5_select(img, d0, d1, dynamic_address);
	set_at<80, 3072>(result, mag_x_rd5_res);
	hw_uint<16> mag_x_rd6_res = mag_x_rd6_select(img, d0, d1, dynamic_address);
	set_at<96, 3072>(result, mag_x_rd6_res);
	hw_uint<16> mag_x_rd7_res = mag_x_rd7_select(img, d0, d1, dynamic_address);
	set_at<112, 3072>(result, mag_x_rd7_res);
	hw_uint<16> mag_x_rd8_res = mag_x_rd8_select(img, d0, d1, dynamic_address);
	set_at<128, 3072>(result, mag_x_rd8_res);
	hw_uint<16> mag_x_rd9_res = mag_x_rd9_select(img, d0, d1, dynamic_address);
	set_at<144, 3072>(result, mag_x_rd9_res);
	hw_uint<16> mag_x_rd10_res = mag_x_rd10_select(img, d0, d1, dynamic_address);
	set_at<160, 3072>(result, mag_x_rd10_res);
	hw_uint<16> mag_x_rd11_res = mag_x_rd11_select(img, d0, d1, dynamic_address);
	set_at<176, 3072>(result, mag_x_rd11_res);
	hw_uint<16> mag_x_rd12_res = mag_x_rd12_select(img, d0, d1, dynamic_address);
	set_at<192, 3072>(result, mag_x_rd12_res);
	hw_uint<16> mag_x_rd13_res = mag_x_rd13_select(img, d0, d1, dynamic_address);
	set_at<208, 3072>(result, mag_x_rd13_res);
	hw_uint<16> mag_x_rd14_res = mag_x_rd14_select(img, d0, d1, dynamic_address);
	set_at<224, 3072>(result, mag_x_rd14_res);
	hw_uint<16> mag_x_rd15_res = mag_x_rd15_select(img, d0, d1, dynamic_address);
	set_at<240, 3072>(result, mag_x_rd15_res);
	hw_uint<16> mag_x_rd16_res = mag_x_rd16_select(img, d0, d1, dynamic_address);
	set_at<256, 3072>(result, mag_x_rd16_res);
	hw_uint<16> mag_x_rd17_res = mag_x_rd17_select(img, d0, d1, dynamic_address);
	set_at<272, 3072>(result, mag_x_rd17_res);
	hw_uint<16> mag_x_rd18_res = mag_x_rd18_select(img, d0, d1, dynamic_address);
	set_at<288, 3072>(result, mag_x_rd18_res);
	hw_uint<16> mag_x_rd19_res = mag_x_rd19_select(img, d0, d1, dynamic_address);
	set_at<304, 3072>(result, mag_x_rd19_res);
	hw_uint<16> mag_x_rd20_res = mag_x_rd20_select(img, d0, d1, dynamic_address);
	set_at<320, 3072>(result, mag_x_rd20_res);
	hw_uint<16> mag_x_rd21_res = mag_x_rd21_select(img, d0, d1, dynamic_address);
	set_at<336, 3072>(result, mag_x_rd21_res);
	hw_uint<16> mag_x_rd22_res = mag_x_rd22_select(img, d0, d1, dynamic_address);
	set_at<352, 3072>(result, mag_x_rd22_res);
	hw_uint<16> mag_x_rd23_res = mag_x_rd23_select(img, d0, d1, dynamic_address);
	set_at<368, 3072>(result, mag_x_rd23_res);
	hw_uint<16> mag_x_rd24_res = mag_x_rd24_select(img, d0, d1, dynamic_address);
	set_at<384, 3072>(result, mag_x_rd24_res);
	hw_uint<16> mag_x_rd25_res = mag_x_rd25_select(img, d0, d1, dynamic_address);
	set_at<400, 3072>(result, mag_x_rd25_res);
	hw_uint<16> mag_x_rd26_res = mag_x_rd26_select(img, d0, d1, dynamic_address);
	set_at<416, 3072>(result, mag_x_rd26_res);
	hw_uint<16> mag_x_rd27_res = mag_x_rd27_select(img, d0, d1, dynamic_address);
	set_at<432, 3072>(result, mag_x_rd27_res);
	hw_uint<16> mag_x_rd28_res = mag_x_rd28_select(img, d0, d1, dynamic_address);
	set_at<448, 3072>(result, mag_x_rd28_res);
	hw_uint<16> mag_x_rd29_res = mag_x_rd29_select(img, d0, d1, dynamic_address);
	set_at<464, 3072>(result, mag_x_rd29_res);
	hw_uint<16> mag_x_rd30_res = mag_x_rd30_select(img, d0, d1, dynamic_address);
	set_at<480, 3072>(result, mag_x_rd30_res);
	hw_uint<16> mag_x_rd31_res = mag_x_rd31_select(img, d0, d1, dynamic_address);
	set_at<496, 3072>(result, mag_x_rd31_res);
	hw_uint<16> mag_x_rd32_res = mag_x_rd32_select(img, d0, d1, dynamic_address);
	set_at<512, 3072>(result, mag_x_rd32_res);
	hw_uint<16> mag_x_rd33_res = mag_x_rd33_select(img, d0, d1, dynamic_address);
	set_at<528, 3072>(result, mag_x_rd33_res);
	hw_uint<16> mag_x_rd34_res = mag_x_rd34_select(img, d0, d1, dynamic_address);
	set_at<544, 3072>(result, mag_x_rd34_res);
	hw_uint<16> mag_x_rd35_res = mag_x_rd35_select(img, d0, d1, dynamic_address);
	set_at<560, 3072>(result, mag_x_rd35_res);
	hw_uint<16> mag_x_rd36_res = mag_x_rd36_select(img, d0, d1, dynamic_address);
	set_at<576, 3072>(result, mag_x_rd36_res);
	hw_uint<16> mag_x_rd37_res = mag_x_rd37_select(img, d0, d1, dynamic_address);
	set_at<592, 3072>(result, mag_x_rd37_res);
	hw_uint<16> mag_x_rd38_res = mag_x_rd38_select(img, d0, d1, dynamic_address);
	set_at<608, 3072>(result, mag_x_rd38_res);
	hw_uint<16> mag_x_rd39_res = mag_x_rd39_select(img, d0, d1, dynamic_address);
	set_at<624, 3072>(result, mag_x_rd39_res);
	hw_uint<16> mag_x_rd40_res = mag_x_rd40_select(img, d0, d1, dynamic_address);
	set_at<640, 3072>(result, mag_x_rd40_res);
	hw_uint<16> mag_x_rd41_res = mag_x_rd41_select(img, d0, d1, dynamic_address);
	set_at<656, 3072>(result, mag_x_rd41_res);
	hw_uint<16> mag_x_rd42_res = mag_x_rd42_select(img, d0, d1, dynamic_address);
	set_at<672, 3072>(result, mag_x_rd42_res);
	hw_uint<16> mag_x_rd43_res = mag_x_rd43_select(img, d0, d1, dynamic_address);
	set_at<688, 3072>(result, mag_x_rd43_res);
	hw_uint<16> mag_x_rd44_res = mag_x_rd44_select(img, d0, d1, dynamic_address);
	set_at<704, 3072>(result, mag_x_rd44_res);
	hw_uint<16> mag_x_rd45_res = mag_x_rd45_select(img, d0, d1, dynamic_address);
	set_at<720, 3072>(result, mag_x_rd45_res);
	hw_uint<16> mag_x_rd46_res = mag_x_rd46_select(img, d0, d1, dynamic_address);
	set_at<736, 3072>(result, mag_x_rd46_res);
	hw_uint<16> mag_x_rd47_res = mag_x_rd47_select(img, d0, d1, dynamic_address);
	set_at<752, 3072>(result, mag_x_rd47_res);
	hw_uint<16> mag_x_rd48_res = mag_x_rd48_select(img, d0, d1, dynamic_address);
	set_at<768, 3072>(result, mag_x_rd48_res);
	hw_uint<16> mag_x_rd49_res = mag_x_rd49_select(img, d0, d1, dynamic_address);
	set_at<784, 3072>(result, mag_x_rd49_res);
	hw_uint<16> mag_x_rd50_res = mag_x_rd50_select(img, d0, d1, dynamic_address);
	set_at<800, 3072>(result, mag_x_rd50_res);
	hw_uint<16> mag_x_rd51_res = mag_x_rd51_select(img, d0, d1, dynamic_address);
	set_at<816, 3072>(result, mag_x_rd51_res);
	hw_uint<16> mag_x_rd52_res = mag_x_rd52_select(img, d0, d1, dynamic_address);
	set_at<832, 3072>(result, mag_x_rd52_res);
	hw_uint<16> mag_x_rd53_res = mag_x_rd53_select(img, d0, d1, dynamic_address);
	set_at<848, 3072>(result, mag_x_rd53_res);
	hw_uint<16> mag_x_rd54_res = mag_x_rd54_select(img, d0, d1, dynamic_address);
	set_at<864, 3072>(result, mag_x_rd54_res);
	hw_uint<16> mag_x_rd55_res = mag_x_rd55_select(img, d0, d1, dynamic_address);
	set_at<880, 3072>(result, mag_x_rd55_res);
	hw_uint<16> mag_x_rd56_res = mag_x_rd56_select(img, d0, d1, dynamic_address);
	set_at<896, 3072>(result, mag_x_rd56_res);
	hw_uint<16> mag_x_rd57_res = mag_x_rd57_select(img, d0, d1, dynamic_address);
	set_at<912, 3072>(result, mag_x_rd57_res);
	hw_uint<16> mag_x_rd58_res = mag_x_rd58_select(img, d0, d1, dynamic_address);
	set_at<928, 3072>(result, mag_x_rd58_res);
	hw_uint<16> mag_x_rd59_res = mag_x_rd59_select(img, d0, d1, dynamic_address);
	set_at<944, 3072>(result, mag_x_rd59_res);
	hw_uint<16> mag_x_rd60_res = mag_x_rd60_select(img, d0, d1, dynamic_address);
	set_at<960, 3072>(result, mag_x_rd60_res);
	hw_uint<16> mag_x_rd61_res = mag_x_rd61_select(img, d0, d1, dynamic_address);
	set_at<976, 3072>(result, mag_x_rd61_res);
	hw_uint<16> mag_x_rd62_res = mag_x_rd62_select(img, d0, d1, dynamic_address);
	set_at<992, 3072>(result, mag_x_rd62_res);
	hw_uint<16> mag_x_rd63_res = mag_x_rd63_select(img, d0, d1, dynamic_address);
	set_at<1008, 3072>(result, mag_x_rd63_res);
	hw_uint<16> mag_x_rd64_res = mag_x_rd64_select(img, d0, d1, dynamic_address);
	set_at<1024, 3072>(result, mag_x_rd64_res);
	hw_uint<16> mag_x_rd65_res = mag_x_rd65_select(img, d0, d1, dynamic_address);
	set_at<1040, 3072>(result, mag_x_rd65_res);
	hw_uint<16> mag_x_rd66_res = mag_x_rd66_select(img, d0, d1, dynamic_address);
	set_at<1056, 3072>(result, mag_x_rd66_res);
	hw_uint<16> mag_x_rd67_res = mag_x_rd67_select(img, d0, d1, dynamic_address);
	set_at<1072, 3072>(result, mag_x_rd67_res);
	hw_uint<16> mag_x_rd68_res = mag_x_rd68_select(img, d0, d1, dynamic_address);
	set_at<1088, 3072>(result, mag_x_rd68_res);
	hw_uint<16> mag_x_rd69_res = mag_x_rd69_select(img, d0, d1, dynamic_address);
	set_at<1104, 3072>(result, mag_x_rd69_res);
	hw_uint<16> mag_x_rd70_res = mag_x_rd70_select(img, d0, d1, dynamic_address);
	set_at<1120, 3072>(result, mag_x_rd70_res);
	hw_uint<16> mag_x_rd71_res = mag_x_rd71_select(img, d0, d1, dynamic_address);
	set_at<1136, 3072>(result, mag_x_rd71_res);
	hw_uint<16> mag_x_rd72_res = mag_x_rd72_select(img, d0, d1, dynamic_address);
	set_at<1152, 3072>(result, mag_x_rd72_res);
	hw_uint<16> mag_x_rd73_res = mag_x_rd73_select(img, d0, d1, dynamic_address);
	set_at<1168, 3072>(result, mag_x_rd73_res);
	hw_uint<16> mag_x_rd74_res = mag_x_rd74_select(img, d0, d1, dynamic_address);
	set_at<1184, 3072>(result, mag_x_rd74_res);
	hw_uint<16> mag_x_rd75_res = mag_x_rd75_select(img, d0, d1, dynamic_address);
	set_at<1200, 3072>(result, mag_x_rd75_res);
	hw_uint<16> mag_x_rd76_res = mag_x_rd76_select(img, d0, d1, dynamic_address);
	set_at<1216, 3072>(result, mag_x_rd76_res);
	hw_uint<16> mag_x_rd77_res = mag_x_rd77_select(img, d0, d1, dynamic_address);
	set_at<1232, 3072>(result, mag_x_rd77_res);
	hw_uint<16> mag_x_rd78_res = mag_x_rd78_select(img, d0, d1, dynamic_address);
	set_at<1248, 3072>(result, mag_x_rd78_res);
	hw_uint<16> mag_x_rd79_res = mag_x_rd79_select(img, d0, d1, dynamic_address);
	set_at<1264, 3072>(result, mag_x_rd79_res);
	hw_uint<16> mag_x_rd80_res = mag_x_rd80_select(img, d0, d1, dynamic_address);
	set_at<1280, 3072>(result, mag_x_rd80_res);
	hw_uint<16> mag_x_rd81_res = mag_x_rd81_select(img, d0, d1, dynamic_address);
	set_at<1296, 3072>(result, mag_x_rd81_res);
	hw_uint<16> mag_x_rd82_res = mag_x_rd82_select(img, d0, d1, dynamic_address);
	set_at<1312, 3072>(result, mag_x_rd82_res);
	hw_uint<16> mag_x_rd83_res = mag_x_rd83_select(img, d0, d1, dynamic_address);
	set_at<1328, 3072>(result, mag_x_rd83_res);
	hw_uint<16> mag_x_rd84_res = mag_x_rd84_select(img, d0, d1, dynamic_address);
	set_at<1344, 3072>(result, mag_x_rd84_res);
	hw_uint<16> mag_x_rd85_res = mag_x_rd85_select(img, d0, d1, dynamic_address);
	set_at<1360, 3072>(result, mag_x_rd85_res);
	hw_uint<16> mag_x_rd86_res = mag_x_rd86_select(img, d0, d1, dynamic_address);
	set_at<1376, 3072>(result, mag_x_rd86_res);
	hw_uint<16> mag_x_rd87_res = mag_x_rd87_select(img, d0, d1, dynamic_address);
	set_at<1392, 3072>(result, mag_x_rd87_res);
	hw_uint<16> mag_x_rd88_res = mag_x_rd88_select(img, d0, d1, dynamic_address);
	set_at<1408, 3072>(result, mag_x_rd88_res);
	hw_uint<16> mag_x_rd89_res = mag_x_rd89_select(img, d0, d1, dynamic_address);
	set_at<1424, 3072>(result, mag_x_rd89_res);
	hw_uint<16> mag_x_rd90_res = mag_x_rd90_select(img, d0, d1, dynamic_address);
	set_at<1440, 3072>(result, mag_x_rd90_res);
	hw_uint<16> mag_x_rd91_res = mag_x_rd91_select(img, d0, d1, dynamic_address);
	set_at<1456, 3072>(result, mag_x_rd91_res);
	hw_uint<16> mag_x_rd92_res = mag_x_rd92_select(img, d0, d1, dynamic_address);
	set_at<1472, 3072>(result, mag_x_rd92_res);
	hw_uint<16> mag_x_rd93_res = mag_x_rd93_select(img, d0, d1, dynamic_address);
	set_at<1488, 3072>(result, mag_x_rd93_res);
	hw_uint<16> mag_x_rd94_res = mag_x_rd94_select(img, d0, d1, dynamic_address);
	set_at<1504, 3072>(result, mag_x_rd94_res);
	hw_uint<16> mag_x_rd95_res = mag_x_rd95_select(img, d0, d1, dynamic_address);
	set_at<1520, 3072>(result, mag_x_rd95_res);
	hw_uint<16> mag_x_rd96_res = mag_x_rd96_select(img, d0, d1, dynamic_address);
	set_at<1536, 3072>(result, mag_x_rd96_res);
	hw_uint<16> mag_x_rd97_res = mag_x_rd97_select(img, d0, d1, dynamic_address);
	set_at<1552, 3072>(result, mag_x_rd97_res);
	hw_uint<16> mag_x_rd98_res = mag_x_rd98_select(img, d0, d1, dynamic_address);
	set_at<1568, 3072>(result, mag_x_rd98_res);
	hw_uint<16> mag_x_rd99_res = mag_x_rd99_select(img, d0, d1, dynamic_address);
	set_at<1584, 3072>(result, mag_x_rd99_res);
	hw_uint<16> mag_x_rd100_res = mag_x_rd100_select(img, d0, d1, dynamic_address);
	set_at<1600, 3072>(result, mag_x_rd100_res);
	hw_uint<16> mag_x_rd101_res = mag_x_rd101_select(img, d0, d1, dynamic_address);
	set_at<1616, 3072>(result, mag_x_rd101_res);
	hw_uint<16> mag_x_rd102_res = mag_x_rd102_select(img, d0, d1, dynamic_address);
	set_at<1632, 3072>(result, mag_x_rd102_res);
	hw_uint<16> mag_x_rd103_res = mag_x_rd103_select(img, d0, d1, dynamic_address);
	set_at<1648, 3072>(result, mag_x_rd103_res);
	hw_uint<16> mag_x_rd104_res = mag_x_rd104_select(img, d0, d1, dynamic_address);
	set_at<1664, 3072>(result, mag_x_rd104_res);
	hw_uint<16> mag_x_rd105_res = mag_x_rd105_select(img, d0, d1, dynamic_address);
	set_at<1680, 3072>(result, mag_x_rd105_res);
	hw_uint<16> mag_x_rd106_res = mag_x_rd106_select(img, d0, d1, dynamic_address);
	set_at<1696, 3072>(result, mag_x_rd106_res);
	hw_uint<16> mag_x_rd107_res = mag_x_rd107_select(img, d0, d1, dynamic_address);
	set_at<1712, 3072>(result, mag_x_rd107_res);
	hw_uint<16> mag_x_rd108_res = mag_x_rd108_select(img, d0, d1, dynamic_address);
	set_at<1728, 3072>(result, mag_x_rd108_res);
	hw_uint<16> mag_x_rd109_res = mag_x_rd109_select(img, d0, d1, dynamic_address);
	set_at<1744, 3072>(result, mag_x_rd109_res);
	hw_uint<16> mag_x_rd110_res = mag_x_rd110_select(img, d0, d1, dynamic_address);
	set_at<1760, 3072>(result, mag_x_rd110_res);
	hw_uint<16> mag_x_rd111_res = mag_x_rd111_select(img, d0, d1, dynamic_address);
	set_at<1776, 3072>(result, mag_x_rd111_res);
	hw_uint<16> mag_x_rd112_res = mag_x_rd112_select(img, d0, d1, dynamic_address);
	set_at<1792, 3072>(result, mag_x_rd112_res);
	hw_uint<16> mag_x_rd113_res = mag_x_rd113_select(img, d0, d1, dynamic_address);
	set_at<1808, 3072>(result, mag_x_rd113_res);
	hw_uint<16> mag_x_rd114_res = mag_x_rd114_select(img, d0, d1, dynamic_address);
	set_at<1824, 3072>(result, mag_x_rd114_res);
	hw_uint<16> mag_x_rd115_res = mag_x_rd115_select(img, d0, d1, dynamic_address);
	set_at<1840, 3072>(result, mag_x_rd115_res);
	hw_uint<16> mag_x_rd116_res = mag_x_rd116_select(img, d0, d1, dynamic_address);
	set_at<1856, 3072>(result, mag_x_rd116_res);
	hw_uint<16> mag_x_rd117_res = mag_x_rd117_select(img, d0, d1, dynamic_address);
	set_at<1872, 3072>(result, mag_x_rd117_res);
	hw_uint<16> mag_x_rd118_res = mag_x_rd118_select(img, d0, d1, dynamic_address);
	set_at<1888, 3072>(result, mag_x_rd118_res);
	hw_uint<16> mag_x_rd119_res = mag_x_rd119_select(img, d0, d1, dynamic_address);
	set_at<1904, 3072>(result, mag_x_rd119_res);
	hw_uint<16> mag_x_rd120_res = mag_x_rd120_select(img, d0, d1, dynamic_address);
	set_at<1920, 3072>(result, mag_x_rd120_res);
	hw_uint<16> mag_x_rd121_res = mag_x_rd121_select(img, d0, d1, dynamic_address);
	set_at<1936, 3072>(result, mag_x_rd121_res);
	hw_uint<16> mag_x_rd122_res = mag_x_rd122_select(img, d0, d1, dynamic_address);
	set_at<1952, 3072>(result, mag_x_rd122_res);
	hw_uint<16> mag_x_rd123_res = mag_x_rd123_select(img, d0, d1, dynamic_address);
	set_at<1968, 3072>(result, mag_x_rd123_res);
	hw_uint<16> mag_x_rd124_res = mag_x_rd124_select(img, d0, d1, dynamic_address);
	set_at<1984, 3072>(result, mag_x_rd124_res);
	hw_uint<16> mag_x_rd125_res = mag_x_rd125_select(img, d0, d1, dynamic_address);
	set_at<2000, 3072>(result, mag_x_rd125_res);
	hw_uint<16> mag_x_rd126_res = mag_x_rd126_select(img, d0, d1, dynamic_address);
	set_at<2016, 3072>(result, mag_x_rd126_res);
	hw_uint<16> mag_x_rd127_res = mag_x_rd127_select(img, d0, d1, dynamic_address);
	set_at<2032, 3072>(result, mag_x_rd127_res);
	hw_uint<16> mag_x_rd128_res = mag_x_rd128_select(img, d0, d1, dynamic_address);
	set_at<2048, 3072>(result, mag_x_rd128_res);
	hw_uint<16> mag_x_rd129_res = mag_x_rd129_select(img, d0, d1, dynamic_address);
	set_at<2064, 3072>(result, mag_x_rd129_res);
	hw_uint<16> mag_x_rd130_res = mag_x_rd130_select(img, d0, d1, dynamic_address);
	set_at<2080, 3072>(result, mag_x_rd130_res);
	hw_uint<16> mag_x_rd131_res = mag_x_rd131_select(img, d0, d1, dynamic_address);
	set_at<2096, 3072>(result, mag_x_rd131_res);
	hw_uint<16> mag_x_rd132_res = mag_x_rd132_select(img, d0, d1, dynamic_address);
	set_at<2112, 3072>(result, mag_x_rd132_res);
	hw_uint<16> mag_x_rd133_res = mag_x_rd133_select(img, d0, d1, dynamic_address);
	set_at<2128, 3072>(result, mag_x_rd133_res);
	hw_uint<16> mag_x_rd134_res = mag_x_rd134_select(img, d0, d1, dynamic_address);
	set_at<2144, 3072>(result, mag_x_rd134_res);
	hw_uint<16> mag_x_rd135_res = mag_x_rd135_select(img, d0, d1, dynamic_address);
	set_at<2160, 3072>(result, mag_x_rd135_res);
	hw_uint<16> mag_x_rd136_res = mag_x_rd136_select(img, d0, d1, dynamic_address);
	set_at<2176, 3072>(result, mag_x_rd136_res);
	hw_uint<16> mag_x_rd137_res = mag_x_rd137_select(img, d0, d1, dynamic_address);
	set_at<2192, 3072>(result, mag_x_rd137_res);
	hw_uint<16> mag_x_rd138_res = mag_x_rd138_select(img, d0, d1, dynamic_address);
	set_at<2208, 3072>(result, mag_x_rd138_res);
	hw_uint<16> mag_x_rd139_res = mag_x_rd139_select(img, d0, d1, dynamic_address);
	set_at<2224, 3072>(result, mag_x_rd139_res);
	hw_uint<16> mag_x_rd140_res = mag_x_rd140_select(img, d0, d1, dynamic_address);
	set_at<2240, 3072>(result, mag_x_rd140_res);
	hw_uint<16> mag_x_rd141_res = mag_x_rd141_select(img, d0, d1, dynamic_address);
	set_at<2256, 3072>(result, mag_x_rd141_res);
	hw_uint<16> mag_x_rd142_res = mag_x_rd142_select(img, d0, d1, dynamic_address);
	set_at<2272, 3072>(result, mag_x_rd142_res);
	hw_uint<16> mag_x_rd143_res = mag_x_rd143_select(img, d0, d1, dynamic_address);
	set_at<2288, 3072>(result, mag_x_rd143_res);
	hw_uint<16> mag_x_rd144_res = mag_x_rd144_select(img, d0, d1, dynamic_address);
	set_at<2304, 3072>(result, mag_x_rd144_res);
	hw_uint<16> mag_x_rd145_res = mag_x_rd145_select(img, d0, d1, dynamic_address);
	set_at<2320, 3072>(result, mag_x_rd145_res);
	hw_uint<16> mag_x_rd146_res = mag_x_rd146_select(img, d0, d1, dynamic_address);
	set_at<2336, 3072>(result, mag_x_rd146_res);
	hw_uint<16> mag_x_rd147_res = mag_x_rd147_select(img, d0, d1, dynamic_address);
	set_at<2352, 3072>(result, mag_x_rd147_res);
	hw_uint<16> mag_x_rd148_res = mag_x_rd148_select(img, d0, d1, dynamic_address);
	set_at<2368, 3072>(result, mag_x_rd148_res);
	hw_uint<16> mag_x_rd149_res = mag_x_rd149_select(img, d0, d1, dynamic_address);
	set_at<2384, 3072>(result, mag_x_rd149_res);
	hw_uint<16> mag_x_rd150_res = mag_x_rd150_select(img, d0, d1, dynamic_address);
	set_at<2400, 3072>(result, mag_x_rd150_res);
	hw_uint<16> mag_x_rd151_res = mag_x_rd151_select(img, d0, d1, dynamic_address);
	set_at<2416, 3072>(result, mag_x_rd151_res);
	hw_uint<16> mag_x_rd152_res = mag_x_rd152_select(img, d0, d1, dynamic_address);
	set_at<2432, 3072>(result, mag_x_rd152_res);
	hw_uint<16> mag_x_rd153_res = mag_x_rd153_select(img, d0, d1, dynamic_address);
	set_at<2448, 3072>(result, mag_x_rd153_res);
	hw_uint<16> mag_x_rd154_res = mag_x_rd154_select(img, d0, d1, dynamic_address);
	set_at<2464, 3072>(result, mag_x_rd154_res);
	hw_uint<16> mag_x_rd155_res = mag_x_rd155_select(img, d0, d1, dynamic_address);
	set_at<2480, 3072>(result, mag_x_rd155_res);
	hw_uint<16> mag_x_rd156_res = mag_x_rd156_select(img, d0, d1, dynamic_address);
	set_at<2496, 3072>(result, mag_x_rd156_res);
	hw_uint<16> mag_x_rd157_res = mag_x_rd157_select(img, d0, d1, dynamic_address);
	set_at<2512, 3072>(result, mag_x_rd157_res);
	hw_uint<16> mag_x_rd158_res = mag_x_rd158_select(img, d0, d1, dynamic_address);
	set_at<2528, 3072>(result, mag_x_rd158_res);
	hw_uint<16> mag_x_rd159_res = mag_x_rd159_select(img, d0, d1, dynamic_address);
	set_at<2544, 3072>(result, mag_x_rd159_res);
	hw_uint<16> mag_x_rd160_res = mag_x_rd160_select(img, d0, d1, dynamic_address);
	set_at<2560, 3072>(result, mag_x_rd160_res);
	hw_uint<16> mag_x_rd161_res = mag_x_rd161_select(img, d0, d1, dynamic_address);
	set_at<2576, 3072>(result, mag_x_rd161_res);
	hw_uint<16> mag_x_rd162_res = mag_x_rd162_select(img, d0, d1, dynamic_address);
	set_at<2592, 3072>(result, mag_x_rd162_res);
	hw_uint<16> mag_x_rd163_res = mag_x_rd163_select(img, d0, d1, dynamic_address);
	set_at<2608, 3072>(result, mag_x_rd163_res);
	hw_uint<16> mag_x_rd164_res = mag_x_rd164_select(img, d0, d1, dynamic_address);
	set_at<2624, 3072>(result, mag_x_rd164_res);
	hw_uint<16> mag_x_rd165_res = mag_x_rd165_select(img, d0, d1, dynamic_address);
	set_at<2640, 3072>(result, mag_x_rd165_res);
	hw_uint<16> mag_x_rd166_res = mag_x_rd166_select(img, d0, d1, dynamic_address);
	set_at<2656, 3072>(result, mag_x_rd166_res);
	hw_uint<16> mag_x_rd167_res = mag_x_rd167_select(img, d0, d1, dynamic_address);
	set_at<2672, 3072>(result, mag_x_rd167_res);
	hw_uint<16> mag_x_rd168_res = mag_x_rd168_select(img, d0, d1, dynamic_address);
	set_at<2688, 3072>(result, mag_x_rd168_res);
	hw_uint<16> mag_x_rd169_res = mag_x_rd169_select(img, d0, d1, dynamic_address);
	set_at<2704, 3072>(result, mag_x_rd169_res);
	hw_uint<16> mag_x_rd170_res = mag_x_rd170_select(img, d0, d1, dynamic_address);
	set_at<2720, 3072>(result, mag_x_rd170_res);
	hw_uint<16> mag_x_rd171_res = mag_x_rd171_select(img, d0, d1, dynamic_address);
	set_at<2736, 3072>(result, mag_x_rd171_res);
	hw_uint<16> mag_x_rd172_res = mag_x_rd172_select(img, d0, d1, dynamic_address);
	set_at<2752, 3072>(result, mag_x_rd172_res);
	hw_uint<16> mag_x_rd173_res = mag_x_rd173_select(img, d0, d1, dynamic_address);
	set_at<2768, 3072>(result, mag_x_rd173_res);
	hw_uint<16> mag_x_rd174_res = mag_x_rd174_select(img, d0, d1, dynamic_address);
	set_at<2784, 3072>(result, mag_x_rd174_res);
	hw_uint<16> mag_x_rd175_res = mag_x_rd175_select(img, d0, d1, dynamic_address);
	set_at<2800, 3072>(result, mag_x_rd175_res);
	hw_uint<16> mag_x_rd176_res = mag_x_rd176_select(img, d0, d1, dynamic_address);
	set_at<2816, 3072>(result, mag_x_rd176_res);
	hw_uint<16> mag_x_rd177_res = mag_x_rd177_select(img, d0, d1, dynamic_address);
	set_at<2832, 3072>(result, mag_x_rd177_res);
	hw_uint<16> mag_x_rd178_res = mag_x_rd178_select(img, d0, d1, dynamic_address);
	set_at<2848, 3072>(result, mag_x_rd178_res);
	hw_uint<16> mag_x_rd179_res = mag_x_rd179_select(img, d0, d1, dynamic_address);
	set_at<2864, 3072>(result, mag_x_rd179_res);
	hw_uint<16> mag_x_rd180_res = mag_x_rd180_select(img, d0, d1, dynamic_address);
	set_at<2880, 3072>(result, mag_x_rd180_res);
	hw_uint<16> mag_x_rd181_res = mag_x_rd181_select(img, d0, d1, dynamic_address);
	set_at<2896, 3072>(result, mag_x_rd181_res);
	hw_uint<16> mag_x_rd182_res = mag_x_rd182_select(img, d0, d1, dynamic_address);
	set_at<2912, 3072>(result, mag_x_rd182_res);
	hw_uint<16> mag_x_rd183_res = mag_x_rd183_select(img, d0, d1, dynamic_address);
	set_at<2928, 3072>(result, mag_x_rd183_res);
	hw_uint<16> mag_x_rd184_res = mag_x_rd184_select(img, d0, d1, dynamic_address);
	set_at<2944, 3072>(result, mag_x_rd184_res);
	hw_uint<16> mag_x_rd185_res = mag_x_rd185_select(img, d0, d1, dynamic_address);
	set_at<2960, 3072>(result, mag_x_rd185_res);
	hw_uint<16> mag_x_rd186_res = mag_x_rd186_select(img, d0, d1, dynamic_address);
	set_at<2976, 3072>(result, mag_x_rd186_res);
	hw_uint<16> mag_x_rd187_res = mag_x_rd187_select(img, d0, d1, dynamic_address);
	set_at<2992, 3072>(result, mag_x_rd187_res);
	hw_uint<16> mag_x_rd188_res = mag_x_rd188_select(img, d0, d1, dynamic_address);
	set_at<3008, 3072>(result, mag_x_rd188_res);
	hw_uint<16> mag_x_rd189_res = mag_x_rd189_select(img, d0, d1, dynamic_address);
	set_at<3024, 3072>(result, mag_x_rd189_res);
	hw_uint<16> mag_x_rd190_res = mag_x_rd190_select(img, d0, d1, dynamic_address);
	set_at<3040, 3072>(result, mag_x_rd190_res);
	hw_uint<16> mag_x_rd191_res = mag_x_rd191_select(img, d0, d1, dynamic_address);
	set_at<3056, 3072>(result, mag_x_rd191_res);
	return result;
}

// mag_y_update_0_read
//	mag_y_rd0
//	mag_y_rd1
//	mag_y_rd2
//	mag_y_rd3
//	mag_y_rd4
//	mag_y_rd5
//	mag_y_rd6
//	mag_y_rd7
//	mag_y_rd8
//	mag_y_rd9
//	mag_y_rd10
//	mag_y_rd11
//	mag_y_rd12
//	mag_y_rd13
//	mag_y_rd14
//	mag_y_rd15
//	mag_y_rd16
//	mag_y_rd17
//	mag_y_rd18
//	mag_y_rd19
//	mag_y_rd20
//	mag_y_rd21
//	mag_y_rd22
//	mag_y_rd23
//	mag_y_rd24
//	mag_y_rd25
//	mag_y_rd26
//	mag_y_rd27
//	mag_y_rd28
//	mag_y_rd29
//	mag_y_rd30
//	mag_y_rd31
//	mag_y_rd32
//	mag_y_rd33
//	mag_y_rd34
//	mag_y_rd35
//	mag_y_rd36
//	mag_y_rd37
//	mag_y_rd38
//	mag_y_rd39
//	mag_y_rd40
//	mag_y_rd41
//	mag_y_rd42
//	mag_y_rd43
//	mag_y_rd44
//	mag_y_rd45
//	mag_y_rd46
//	mag_y_rd47
//	mag_y_rd48
//	mag_y_rd49
//	mag_y_rd50
//	mag_y_rd51
//	mag_y_rd52
//	mag_y_rd53
//	mag_y_rd54
//	mag_y_rd55
//	mag_y_rd56
//	mag_y_rd57
//	mag_y_rd58
//	mag_y_rd59
//	mag_y_rd60
//	mag_y_rd61
//	mag_y_rd62
//	mag_y_rd63
//	mag_y_rd64
//	mag_y_rd65
//	mag_y_rd66
//	mag_y_rd67
//	mag_y_rd68
//	mag_y_rd69
//	mag_y_rd70
//	mag_y_rd71
//	mag_y_rd72
//	mag_y_rd73
//	mag_y_rd74
//	mag_y_rd75
//	mag_y_rd76
//	mag_y_rd77
//	mag_y_rd78
//	mag_y_rd79
//	mag_y_rd80
//	mag_y_rd81
//	mag_y_rd82
//	mag_y_rd83
//	mag_y_rd84
//	mag_y_rd85
//	mag_y_rd86
//	mag_y_rd87
//	mag_y_rd88
//	mag_y_rd89
//	mag_y_rd90
//	mag_y_rd91
//	mag_y_rd92
//	mag_y_rd93
//	mag_y_rd94
//	mag_y_rd95
//	mag_y_rd96
//	mag_y_rd97
//	mag_y_rd98
//	mag_y_rd99
//	mag_y_rd100
//	mag_y_rd101
//	mag_y_rd102
//	mag_y_rd103
//	mag_y_rd104
//	mag_y_rd105
//	mag_y_rd106
//	mag_y_rd107
//	mag_y_rd108
//	mag_y_rd109
//	mag_y_rd110
//	mag_y_rd111
//	mag_y_rd112
//	mag_y_rd113
//	mag_y_rd114
//	mag_y_rd115
//	mag_y_rd116
//	mag_y_rd117
//	mag_y_rd118
//	mag_y_rd119
//	mag_y_rd120
//	mag_y_rd121
//	mag_y_rd122
//	mag_y_rd123
//	mag_y_rd124
//	mag_y_rd125
//	mag_y_rd126
//	mag_y_rd127
//	mag_y_rd128
//	mag_y_rd129
//	mag_y_rd130
//	mag_y_rd131
//	mag_y_rd132
//	mag_y_rd133
//	mag_y_rd134
//	mag_y_rd135
//	mag_y_rd136
//	mag_y_rd137
//	mag_y_rd138
//	mag_y_rd139
//	mag_y_rd140
//	mag_y_rd141
//	mag_y_rd142
//	mag_y_rd143
//	mag_y_rd144
//	mag_y_rd145
//	mag_y_rd146
//	mag_y_rd147
//	mag_y_rd148
//	mag_y_rd149
//	mag_y_rd150
//	mag_y_rd151
//	mag_y_rd152
//	mag_y_rd153
//	mag_y_rd154
//	mag_y_rd155
//	mag_y_rd156
//	mag_y_rd157
//	mag_y_rd158
//	mag_y_rd159
//	mag_y_rd160
//	mag_y_rd161
//	mag_y_rd162
//	mag_y_rd163
//	mag_y_rd164
//	mag_y_rd165
//	mag_y_rd166
//	mag_y_rd167
//	mag_y_rd168
//	mag_y_rd169
//	mag_y_rd170
//	mag_y_rd171
//	mag_y_rd172
//	mag_y_rd173
//	mag_y_rd174
//	mag_y_rd175
//	mag_y_rd176
//	mag_y_rd177
//	mag_y_rd178
//	mag_y_rd179
//	mag_y_rd180
//	mag_y_rd181
//	mag_y_rd182
//	mag_y_rd183
//	mag_y_rd184
//	mag_y_rd185
//	mag_y_rd186
//	mag_y_rd187
//	mag_y_rd188
//	mag_y_rd189
//	mag_y_rd190
//	mag_y_rd191
inline hw_uint<3072> img_mag_y_update_0_read_bundle_read(img_cache& img, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 192
    // mag_y_rd0
    // mag_y_rd1
    // mag_y_rd2
    // mag_y_rd3
    // mag_y_rd4
    // mag_y_rd5
    // mag_y_rd6
    // mag_y_rd7
    // mag_y_rd8
    // mag_y_rd9
    // mag_y_rd10
    // mag_y_rd11
    // mag_y_rd12
    // mag_y_rd13
    // mag_y_rd14
    // mag_y_rd15
    // mag_y_rd16
    // mag_y_rd17
    // mag_y_rd18
    // mag_y_rd19
    // mag_y_rd20
    // mag_y_rd21
    // mag_y_rd22
    // mag_y_rd23
    // mag_y_rd24
    // mag_y_rd25
    // mag_y_rd26
    // mag_y_rd27
    // mag_y_rd28
    // mag_y_rd29
    // mag_y_rd30
    // mag_y_rd31
    // mag_y_rd32
    // mag_y_rd33
    // mag_y_rd34
    // mag_y_rd35
    // mag_y_rd36
    // mag_y_rd37
    // mag_y_rd38
    // mag_y_rd39
    // mag_y_rd40
    // mag_y_rd41
    // mag_y_rd42
    // mag_y_rd43
    // mag_y_rd44
    // mag_y_rd45
    // mag_y_rd46
    // mag_y_rd47
    // mag_y_rd48
    // mag_y_rd49
    // mag_y_rd50
    // mag_y_rd51
    // mag_y_rd52
    // mag_y_rd53
    // mag_y_rd54
    // mag_y_rd55
    // mag_y_rd56
    // mag_y_rd57
    // mag_y_rd58
    // mag_y_rd59
    // mag_y_rd60
    // mag_y_rd61
    // mag_y_rd62
    // mag_y_rd63
    // mag_y_rd64
    // mag_y_rd65
    // mag_y_rd66
    // mag_y_rd67
    // mag_y_rd68
    // mag_y_rd69
    // mag_y_rd70
    // mag_y_rd71
    // mag_y_rd72
    // mag_y_rd73
    // mag_y_rd74
    // mag_y_rd75
    // mag_y_rd76
    // mag_y_rd77
    // mag_y_rd78
    // mag_y_rd79
    // mag_y_rd80
    // mag_y_rd81
    // mag_y_rd82
    // mag_y_rd83
    // mag_y_rd84
    // mag_y_rd85
    // mag_y_rd86
    // mag_y_rd87
    // mag_y_rd88
    // mag_y_rd89
    // mag_y_rd90
    // mag_y_rd91
    // mag_y_rd92
    // mag_y_rd93
    // mag_y_rd94
    // mag_y_rd95
    // mag_y_rd96
    // mag_y_rd97
    // mag_y_rd98
    // mag_y_rd99
    // mag_y_rd100
    // mag_y_rd101
    // mag_y_rd102
    // mag_y_rd103
    // mag_y_rd104
    // mag_y_rd105
    // mag_y_rd106
    // mag_y_rd107
    // mag_y_rd108
    // mag_y_rd109
    // mag_y_rd110
    // mag_y_rd111
    // mag_y_rd112
    // mag_y_rd113
    // mag_y_rd114
    // mag_y_rd115
    // mag_y_rd116
    // mag_y_rd117
    // mag_y_rd118
    // mag_y_rd119
    // mag_y_rd120
    // mag_y_rd121
    // mag_y_rd122
    // mag_y_rd123
    // mag_y_rd124
    // mag_y_rd125
    // mag_y_rd126
    // mag_y_rd127
    // mag_y_rd128
    // mag_y_rd129
    // mag_y_rd130
    // mag_y_rd131
    // mag_y_rd132
    // mag_y_rd133
    // mag_y_rd134
    // mag_y_rd135
    // mag_y_rd136
    // mag_y_rd137
    // mag_y_rd138
    // mag_y_rd139
    // mag_y_rd140
    // mag_y_rd141
    // mag_y_rd142
    // mag_y_rd143
    // mag_y_rd144
    // mag_y_rd145
    // mag_y_rd146
    // mag_y_rd147
    // mag_y_rd148
    // mag_y_rd149
    // mag_y_rd150
    // mag_y_rd151
    // mag_y_rd152
    // mag_y_rd153
    // mag_y_rd154
    // mag_y_rd155
    // mag_y_rd156
    // mag_y_rd157
    // mag_y_rd158
    // mag_y_rd159
    // mag_y_rd160
    // mag_y_rd161
    // mag_y_rd162
    // mag_y_rd163
    // mag_y_rd164
    // mag_y_rd165
    // mag_y_rd166
    // mag_y_rd167
    // mag_y_rd168
    // mag_y_rd169
    // mag_y_rd170
    // mag_y_rd171
    // mag_y_rd172
    // mag_y_rd173
    // mag_y_rd174
    // mag_y_rd175
    // mag_y_rd176
    // mag_y_rd177
    // mag_y_rd178
    // mag_y_rd179
    // mag_y_rd180
    // mag_y_rd181
    // mag_y_rd182
    // mag_y_rd183
    // mag_y_rd184
    // mag_y_rd185
    // mag_y_rd186
    // mag_y_rd187
    // mag_y_rd188
    // mag_y_rd189
    // mag_y_rd190
    // mag_y_rd191

	hw_uint<3072> result;
	hw_uint<16> mag_y_rd0_res = mag_y_rd0_select(img, d0, d1, dynamic_address);
	set_at<0, 3072>(result, mag_y_rd0_res);
	hw_uint<16> mag_y_rd1_res = mag_y_rd1_select(img, d0, d1, dynamic_address);
	set_at<16, 3072>(result, mag_y_rd1_res);
	hw_uint<16> mag_y_rd2_res = mag_y_rd2_select(img, d0, d1, dynamic_address);
	set_at<32, 3072>(result, mag_y_rd2_res);
	hw_uint<16> mag_y_rd3_res = mag_y_rd3_select(img, d0, d1, dynamic_address);
	set_at<48, 3072>(result, mag_y_rd3_res);
	hw_uint<16> mag_y_rd4_res = mag_y_rd4_select(img, d0, d1, dynamic_address);
	set_at<64, 3072>(result, mag_y_rd4_res);
	hw_uint<16> mag_y_rd5_res = mag_y_rd5_select(img, d0, d1, dynamic_address);
	set_at<80, 3072>(result, mag_y_rd5_res);
	hw_uint<16> mag_y_rd6_res = mag_y_rd6_select(img, d0, d1, dynamic_address);
	set_at<96, 3072>(result, mag_y_rd6_res);
	hw_uint<16> mag_y_rd7_res = mag_y_rd7_select(img, d0, d1, dynamic_address);
	set_at<112, 3072>(result, mag_y_rd7_res);
	hw_uint<16> mag_y_rd8_res = mag_y_rd8_select(img, d0, d1, dynamic_address);
	set_at<128, 3072>(result, mag_y_rd8_res);
	hw_uint<16> mag_y_rd9_res = mag_y_rd9_select(img, d0, d1, dynamic_address);
	set_at<144, 3072>(result, mag_y_rd9_res);
	hw_uint<16> mag_y_rd10_res = mag_y_rd10_select(img, d0, d1, dynamic_address);
	set_at<160, 3072>(result, mag_y_rd10_res);
	hw_uint<16> mag_y_rd11_res = mag_y_rd11_select(img, d0, d1, dynamic_address);
	set_at<176, 3072>(result, mag_y_rd11_res);
	hw_uint<16> mag_y_rd12_res = mag_y_rd12_select(img, d0, d1, dynamic_address);
	set_at<192, 3072>(result, mag_y_rd12_res);
	hw_uint<16> mag_y_rd13_res = mag_y_rd13_select(img, d0, d1, dynamic_address);
	set_at<208, 3072>(result, mag_y_rd13_res);
	hw_uint<16> mag_y_rd14_res = mag_y_rd14_select(img, d0, d1, dynamic_address);
	set_at<224, 3072>(result, mag_y_rd14_res);
	hw_uint<16> mag_y_rd15_res = mag_y_rd15_select(img, d0, d1, dynamic_address);
	set_at<240, 3072>(result, mag_y_rd15_res);
	hw_uint<16> mag_y_rd16_res = mag_y_rd16_select(img, d0, d1, dynamic_address);
	set_at<256, 3072>(result, mag_y_rd16_res);
	hw_uint<16> mag_y_rd17_res = mag_y_rd17_select(img, d0, d1, dynamic_address);
	set_at<272, 3072>(result, mag_y_rd17_res);
	hw_uint<16> mag_y_rd18_res = mag_y_rd18_select(img, d0, d1, dynamic_address);
	set_at<288, 3072>(result, mag_y_rd18_res);
	hw_uint<16> mag_y_rd19_res = mag_y_rd19_select(img, d0, d1, dynamic_address);
	set_at<304, 3072>(result, mag_y_rd19_res);
	hw_uint<16> mag_y_rd20_res = mag_y_rd20_select(img, d0, d1, dynamic_address);
	set_at<320, 3072>(result, mag_y_rd20_res);
	hw_uint<16> mag_y_rd21_res = mag_y_rd21_select(img, d0, d1, dynamic_address);
	set_at<336, 3072>(result, mag_y_rd21_res);
	hw_uint<16> mag_y_rd22_res = mag_y_rd22_select(img, d0, d1, dynamic_address);
	set_at<352, 3072>(result, mag_y_rd22_res);
	hw_uint<16> mag_y_rd23_res = mag_y_rd23_select(img, d0, d1, dynamic_address);
	set_at<368, 3072>(result, mag_y_rd23_res);
	hw_uint<16> mag_y_rd24_res = mag_y_rd24_select(img, d0, d1, dynamic_address);
	set_at<384, 3072>(result, mag_y_rd24_res);
	hw_uint<16> mag_y_rd25_res = mag_y_rd25_select(img, d0, d1, dynamic_address);
	set_at<400, 3072>(result, mag_y_rd25_res);
	hw_uint<16> mag_y_rd26_res = mag_y_rd26_select(img, d0, d1, dynamic_address);
	set_at<416, 3072>(result, mag_y_rd26_res);
	hw_uint<16> mag_y_rd27_res = mag_y_rd27_select(img, d0, d1, dynamic_address);
	set_at<432, 3072>(result, mag_y_rd27_res);
	hw_uint<16> mag_y_rd28_res = mag_y_rd28_select(img, d0, d1, dynamic_address);
	set_at<448, 3072>(result, mag_y_rd28_res);
	hw_uint<16> mag_y_rd29_res = mag_y_rd29_select(img, d0, d1, dynamic_address);
	set_at<464, 3072>(result, mag_y_rd29_res);
	hw_uint<16> mag_y_rd30_res = mag_y_rd30_select(img, d0, d1, dynamic_address);
	set_at<480, 3072>(result, mag_y_rd30_res);
	hw_uint<16> mag_y_rd31_res = mag_y_rd31_select(img, d0, d1, dynamic_address);
	set_at<496, 3072>(result, mag_y_rd31_res);
	hw_uint<16> mag_y_rd32_res = mag_y_rd32_select(img, d0, d1, dynamic_address);
	set_at<512, 3072>(result, mag_y_rd32_res);
	hw_uint<16> mag_y_rd33_res = mag_y_rd33_select(img, d0, d1, dynamic_address);
	set_at<528, 3072>(result, mag_y_rd33_res);
	hw_uint<16> mag_y_rd34_res = mag_y_rd34_select(img, d0, d1, dynamic_address);
	set_at<544, 3072>(result, mag_y_rd34_res);
	hw_uint<16> mag_y_rd35_res = mag_y_rd35_select(img, d0, d1, dynamic_address);
	set_at<560, 3072>(result, mag_y_rd35_res);
	hw_uint<16> mag_y_rd36_res = mag_y_rd36_select(img, d0, d1, dynamic_address);
	set_at<576, 3072>(result, mag_y_rd36_res);
	hw_uint<16> mag_y_rd37_res = mag_y_rd37_select(img, d0, d1, dynamic_address);
	set_at<592, 3072>(result, mag_y_rd37_res);
	hw_uint<16> mag_y_rd38_res = mag_y_rd38_select(img, d0, d1, dynamic_address);
	set_at<608, 3072>(result, mag_y_rd38_res);
	hw_uint<16> mag_y_rd39_res = mag_y_rd39_select(img, d0, d1, dynamic_address);
	set_at<624, 3072>(result, mag_y_rd39_res);
	hw_uint<16> mag_y_rd40_res = mag_y_rd40_select(img, d0, d1, dynamic_address);
	set_at<640, 3072>(result, mag_y_rd40_res);
	hw_uint<16> mag_y_rd41_res = mag_y_rd41_select(img, d0, d1, dynamic_address);
	set_at<656, 3072>(result, mag_y_rd41_res);
	hw_uint<16> mag_y_rd42_res = mag_y_rd42_select(img, d0, d1, dynamic_address);
	set_at<672, 3072>(result, mag_y_rd42_res);
	hw_uint<16> mag_y_rd43_res = mag_y_rd43_select(img, d0, d1, dynamic_address);
	set_at<688, 3072>(result, mag_y_rd43_res);
	hw_uint<16> mag_y_rd44_res = mag_y_rd44_select(img, d0, d1, dynamic_address);
	set_at<704, 3072>(result, mag_y_rd44_res);
	hw_uint<16> mag_y_rd45_res = mag_y_rd45_select(img, d0, d1, dynamic_address);
	set_at<720, 3072>(result, mag_y_rd45_res);
	hw_uint<16> mag_y_rd46_res = mag_y_rd46_select(img, d0, d1, dynamic_address);
	set_at<736, 3072>(result, mag_y_rd46_res);
	hw_uint<16> mag_y_rd47_res = mag_y_rd47_select(img, d0, d1, dynamic_address);
	set_at<752, 3072>(result, mag_y_rd47_res);
	hw_uint<16> mag_y_rd48_res = mag_y_rd48_select(img, d0, d1, dynamic_address);
	set_at<768, 3072>(result, mag_y_rd48_res);
	hw_uint<16> mag_y_rd49_res = mag_y_rd49_select(img, d0, d1, dynamic_address);
	set_at<784, 3072>(result, mag_y_rd49_res);
	hw_uint<16> mag_y_rd50_res = mag_y_rd50_select(img, d0, d1, dynamic_address);
	set_at<800, 3072>(result, mag_y_rd50_res);
	hw_uint<16> mag_y_rd51_res = mag_y_rd51_select(img, d0, d1, dynamic_address);
	set_at<816, 3072>(result, mag_y_rd51_res);
	hw_uint<16> mag_y_rd52_res = mag_y_rd52_select(img, d0, d1, dynamic_address);
	set_at<832, 3072>(result, mag_y_rd52_res);
	hw_uint<16> mag_y_rd53_res = mag_y_rd53_select(img, d0, d1, dynamic_address);
	set_at<848, 3072>(result, mag_y_rd53_res);
	hw_uint<16> mag_y_rd54_res = mag_y_rd54_select(img, d0, d1, dynamic_address);
	set_at<864, 3072>(result, mag_y_rd54_res);
	hw_uint<16> mag_y_rd55_res = mag_y_rd55_select(img, d0, d1, dynamic_address);
	set_at<880, 3072>(result, mag_y_rd55_res);
	hw_uint<16> mag_y_rd56_res = mag_y_rd56_select(img, d0, d1, dynamic_address);
	set_at<896, 3072>(result, mag_y_rd56_res);
	hw_uint<16> mag_y_rd57_res = mag_y_rd57_select(img, d0, d1, dynamic_address);
	set_at<912, 3072>(result, mag_y_rd57_res);
	hw_uint<16> mag_y_rd58_res = mag_y_rd58_select(img, d0, d1, dynamic_address);
	set_at<928, 3072>(result, mag_y_rd58_res);
	hw_uint<16> mag_y_rd59_res = mag_y_rd59_select(img, d0, d1, dynamic_address);
	set_at<944, 3072>(result, mag_y_rd59_res);
	hw_uint<16> mag_y_rd60_res = mag_y_rd60_select(img, d0, d1, dynamic_address);
	set_at<960, 3072>(result, mag_y_rd60_res);
	hw_uint<16> mag_y_rd61_res = mag_y_rd61_select(img, d0, d1, dynamic_address);
	set_at<976, 3072>(result, mag_y_rd61_res);
	hw_uint<16> mag_y_rd62_res = mag_y_rd62_select(img, d0, d1, dynamic_address);
	set_at<992, 3072>(result, mag_y_rd62_res);
	hw_uint<16> mag_y_rd63_res = mag_y_rd63_select(img, d0, d1, dynamic_address);
	set_at<1008, 3072>(result, mag_y_rd63_res);
	hw_uint<16> mag_y_rd64_res = mag_y_rd64_select(img, d0, d1, dynamic_address);
	set_at<1024, 3072>(result, mag_y_rd64_res);
	hw_uint<16> mag_y_rd65_res = mag_y_rd65_select(img, d0, d1, dynamic_address);
	set_at<1040, 3072>(result, mag_y_rd65_res);
	hw_uint<16> mag_y_rd66_res = mag_y_rd66_select(img, d0, d1, dynamic_address);
	set_at<1056, 3072>(result, mag_y_rd66_res);
	hw_uint<16> mag_y_rd67_res = mag_y_rd67_select(img, d0, d1, dynamic_address);
	set_at<1072, 3072>(result, mag_y_rd67_res);
	hw_uint<16> mag_y_rd68_res = mag_y_rd68_select(img, d0, d1, dynamic_address);
	set_at<1088, 3072>(result, mag_y_rd68_res);
	hw_uint<16> mag_y_rd69_res = mag_y_rd69_select(img, d0, d1, dynamic_address);
	set_at<1104, 3072>(result, mag_y_rd69_res);
	hw_uint<16> mag_y_rd70_res = mag_y_rd70_select(img, d0, d1, dynamic_address);
	set_at<1120, 3072>(result, mag_y_rd70_res);
	hw_uint<16> mag_y_rd71_res = mag_y_rd71_select(img, d0, d1, dynamic_address);
	set_at<1136, 3072>(result, mag_y_rd71_res);
	hw_uint<16> mag_y_rd72_res = mag_y_rd72_select(img, d0, d1, dynamic_address);
	set_at<1152, 3072>(result, mag_y_rd72_res);
	hw_uint<16> mag_y_rd73_res = mag_y_rd73_select(img, d0, d1, dynamic_address);
	set_at<1168, 3072>(result, mag_y_rd73_res);
	hw_uint<16> mag_y_rd74_res = mag_y_rd74_select(img, d0, d1, dynamic_address);
	set_at<1184, 3072>(result, mag_y_rd74_res);
	hw_uint<16> mag_y_rd75_res = mag_y_rd75_select(img, d0, d1, dynamic_address);
	set_at<1200, 3072>(result, mag_y_rd75_res);
	hw_uint<16> mag_y_rd76_res = mag_y_rd76_select(img, d0, d1, dynamic_address);
	set_at<1216, 3072>(result, mag_y_rd76_res);
	hw_uint<16> mag_y_rd77_res = mag_y_rd77_select(img, d0, d1, dynamic_address);
	set_at<1232, 3072>(result, mag_y_rd77_res);
	hw_uint<16> mag_y_rd78_res = mag_y_rd78_select(img, d0, d1, dynamic_address);
	set_at<1248, 3072>(result, mag_y_rd78_res);
	hw_uint<16> mag_y_rd79_res = mag_y_rd79_select(img, d0, d1, dynamic_address);
	set_at<1264, 3072>(result, mag_y_rd79_res);
	hw_uint<16> mag_y_rd80_res = mag_y_rd80_select(img, d0, d1, dynamic_address);
	set_at<1280, 3072>(result, mag_y_rd80_res);
	hw_uint<16> mag_y_rd81_res = mag_y_rd81_select(img, d0, d1, dynamic_address);
	set_at<1296, 3072>(result, mag_y_rd81_res);
	hw_uint<16> mag_y_rd82_res = mag_y_rd82_select(img, d0, d1, dynamic_address);
	set_at<1312, 3072>(result, mag_y_rd82_res);
	hw_uint<16> mag_y_rd83_res = mag_y_rd83_select(img, d0, d1, dynamic_address);
	set_at<1328, 3072>(result, mag_y_rd83_res);
	hw_uint<16> mag_y_rd84_res = mag_y_rd84_select(img, d0, d1, dynamic_address);
	set_at<1344, 3072>(result, mag_y_rd84_res);
	hw_uint<16> mag_y_rd85_res = mag_y_rd85_select(img, d0, d1, dynamic_address);
	set_at<1360, 3072>(result, mag_y_rd85_res);
	hw_uint<16> mag_y_rd86_res = mag_y_rd86_select(img, d0, d1, dynamic_address);
	set_at<1376, 3072>(result, mag_y_rd86_res);
	hw_uint<16> mag_y_rd87_res = mag_y_rd87_select(img, d0, d1, dynamic_address);
	set_at<1392, 3072>(result, mag_y_rd87_res);
	hw_uint<16> mag_y_rd88_res = mag_y_rd88_select(img, d0, d1, dynamic_address);
	set_at<1408, 3072>(result, mag_y_rd88_res);
	hw_uint<16> mag_y_rd89_res = mag_y_rd89_select(img, d0, d1, dynamic_address);
	set_at<1424, 3072>(result, mag_y_rd89_res);
	hw_uint<16> mag_y_rd90_res = mag_y_rd90_select(img, d0, d1, dynamic_address);
	set_at<1440, 3072>(result, mag_y_rd90_res);
	hw_uint<16> mag_y_rd91_res = mag_y_rd91_select(img, d0, d1, dynamic_address);
	set_at<1456, 3072>(result, mag_y_rd91_res);
	hw_uint<16> mag_y_rd92_res = mag_y_rd92_select(img, d0, d1, dynamic_address);
	set_at<1472, 3072>(result, mag_y_rd92_res);
	hw_uint<16> mag_y_rd93_res = mag_y_rd93_select(img, d0, d1, dynamic_address);
	set_at<1488, 3072>(result, mag_y_rd93_res);
	hw_uint<16> mag_y_rd94_res = mag_y_rd94_select(img, d0, d1, dynamic_address);
	set_at<1504, 3072>(result, mag_y_rd94_res);
	hw_uint<16> mag_y_rd95_res = mag_y_rd95_select(img, d0, d1, dynamic_address);
	set_at<1520, 3072>(result, mag_y_rd95_res);
	hw_uint<16> mag_y_rd96_res = mag_y_rd96_select(img, d0, d1, dynamic_address);
	set_at<1536, 3072>(result, mag_y_rd96_res);
	hw_uint<16> mag_y_rd97_res = mag_y_rd97_select(img, d0, d1, dynamic_address);
	set_at<1552, 3072>(result, mag_y_rd97_res);
	hw_uint<16> mag_y_rd98_res = mag_y_rd98_select(img, d0, d1, dynamic_address);
	set_at<1568, 3072>(result, mag_y_rd98_res);
	hw_uint<16> mag_y_rd99_res = mag_y_rd99_select(img, d0, d1, dynamic_address);
	set_at<1584, 3072>(result, mag_y_rd99_res);
	hw_uint<16> mag_y_rd100_res = mag_y_rd100_select(img, d0, d1, dynamic_address);
	set_at<1600, 3072>(result, mag_y_rd100_res);
	hw_uint<16> mag_y_rd101_res = mag_y_rd101_select(img, d0, d1, dynamic_address);
	set_at<1616, 3072>(result, mag_y_rd101_res);
	hw_uint<16> mag_y_rd102_res = mag_y_rd102_select(img, d0, d1, dynamic_address);
	set_at<1632, 3072>(result, mag_y_rd102_res);
	hw_uint<16> mag_y_rd103_res = mag_y_rd103_select(img, d0, d1, dynamic_address);
	set_at<1648, 3072>(result, mag_y_rd103_res);
	hw_uint<16> mag_y_rd104_res = mag_y_rd104_select(img, d0, d1, dynamic_address);
	set_at<1664, 3072>(result, mag_y_rd104_res);
	hw_uint<16> mag_y_rd105_res = mag_y_rd105_select(img, d0, d1, dynamic_address);
	set_at<1680, 3072>(result, mag_y_rd105_res);
	hw_uint<16> mag_y_rd106_res = mag_y_rd106_select(img, d0, d1, dynamic_address);
	set_at<1696, 3072>(result, mag_y_rd106_res);
	hw_uint<16> mag_y_rd107_res = mag_y_rd107_select(img, d0, d1, dynamic_address);
	set_at<1712, 3072>(result, mag_y_rd107_res);
	hw_uint<16> mag_y_rd108_res = mag_y_rd108_select(img, d0, d1, dynamic_address);
	set_at<1728, 3072>(result, mag_y_rd108_res);
	hw_uint<16> mag_y_rd109_res = mag_y_rd109_select(img, d0, d1, dynamic_address);
	set_at<1744, 3072>(result, mag_y_rd109_res);
	hw_uint<16> mag_y_rd110_res = mag_y_rd110_select(img, d0, d1, dynamic_address);
	set_at<1760, 3072>(result, mag_y_rd110_res);
	hw_uint<16> mag_y_rd111_res = mag_y_rd111_select(img, d0, d1, dynamic_address);
	set_at<1776, 3072>(result, mag_y_rd111_res);
	hw_uint<16> mag_y_rd112_res = mag_y_rd112_select(img, d0, d1, dynamic_address);
	set_at<1792, 3072>(result, mag_y_rd112_res);
	hw_uint<16> mag_y_rd113_res = mag_y_rd113_select(img, d0, d1, dynamic_address);
	set_at<1808, 3072>(result, mag_y_rd113_res);
	hw_uint<16> mag_y_rd114_res = mag_y_rd114_select(img, d0, d1, dynamic_address);
	set_at<1824, 3072>(result, mag_y_rd114_res);
	hw_uint<16> mag_y_rd115_res = mag_y_rd115_select(img, d0, d1, dynamic_address);
	set_at<1840, 3072>(result, mag_y_rd115_res);
	hw_uint<16> mag_y_rd116_res = mag_y_rd116_select(img, d0, d1, dynamic_address);
	set_at<1856, 3072>(result, mag_y_rd116_res);
	hw_uint<16> mag_y_rd117_res = mag_y_rd117_select(img, d0, d1, dynamic_address);
	set_at<1872, 3072>(result, mag_y_rd117_res);
	hw_uint<16> mag_y_rd118_res = mag_y_rd118_select(img, d0, d1, dynamic_address);
	set_at<1888, 3072>(result, mag_y_rd118_res);
	hw_uint<16> mag_y_rd119_res = mag_y_rd119_select(img, d0, d1, dynamic_address);
	set_at<1904, 3072>(result, mag_y_rd119_res);
	hw_uint<16> mag_y_rd120_res = mag_y_rd120_select(img, d0, d1, dynamic_address);
	set_at<1920, 3072>(result, mag_y_rd120_res);
	hw_uint<16> mag_y_rd121_res = mag_y_rd121_select(img, d0, d1, dynamic_address);
	set_at<1936, 3072>(result, mag_y_rd121_res);
	hw_uint<16> mag_y_rd122_res = mag_y_rd122_select(img, d0, d1, dynamic_address);
	set_at<1952, 3072>(result, mag_y_rd122_res);
	hw_uint<16> mag_y_rd123_res = mag_y_rd123_select(img, d0, d1, dynamic_address);
	set_at<1968, 3072>(result, mag_y_rd123_res);
	hw_uint<16> mag_y_rd124_res = mag_y_rd124_select(img, d0, d1, dynamic_address);
	set_at<1984, 3072>(result, mag_y_rd124_res);
	hw_uint<16> mag_y_rd125_res = mag_y_rd125_select(img, d0, d1, dynamic_address);
	set_at<2000, 3072>(result, mag_y_rd125_res);
	hw_uint<16> mag_y_rd126_res = mag_y_rd126_select(img, d0, d1, dynamic_address);
	set_at<2016, 3072>(result, mag_y_rd126_res);
	hw_uint<16> mag_y_rd127_res = mag_y_rd127_select(img, d0, d1, dynamic_address);
	set_at<2032, 3072>(result, mag_y_rd127_res);
	hw_uint<16> mag_y_rd128_res = mag_y_rd128_select(img, d0, d1, dynamic_address);
	set_at<2048, 3072>(result, mag_y_rd128_res);
	hw_uint<16> mag_y_rd129_res = mag_y_rd129_select(img, d0, d1, dynamic_address);
	set_at<2064, 3072>(result, mag_y_rd129_res);
	hw_uint<16> mag_y_rd130_res = mag_y_rd130_select(img, d0, d1, dynamic_address);
	set_at<2080, 3072>(result, mag_y_rd130_res);
	hw_uint<16> mag_y_rd131_res = mag_y_rd131_select(img, d0, d1, dynamic_address);
	set_at<2096, 3072>(result, mag_y_rd131_res);
	hw_uint<16> mag_y_rd132_res = mag_y_rd132_select(img, d0, d1, dynamic_address);
	set_at<2112, 3072>(result, mag_y_rd132_res);
	hw_uint<16> mag_y_rd133_res = mag_y_rd133_select(img, d0, d1, dynamic_address);
	set_at<2128, 3072>(result, mag_y_rd133_res);
	hw_uint<16> mag_y_rd134_res = mag_y_rd134_select(img, d0, d1, dynamic_address);
	set_at<2144, 3072>(result, mag_y_rd134_res);
	hw_uint<16> mag_y_rd135_res = mag_y_rd135_select(img, d0, d1, dynamic_address);
	set_at<2160, 3072>(result, mag_y_rd135_res);
	hw_uint<16> mag_y_rd136_res = mag_y_rd136_select(img, d0, d1, dynamic_address);
	set_at<2176, 3072>(result, mag_y_rd136_res);
	hw_uint<16> mag_y_rd137_res = mag_y_rd137_select(img, d0, d1, dynamic_address);
	set_at<2192, 3072>(result, mag_y_rd137_res);
	hw_uint<16> mag_y_rd138_res = mag_y_rd138_select(img, d0, d1, dynamic_address);
	set_at<2208, 3072>(result, mag_y_rd138_res);
	hw_uint<16> mag_y_rd139_res = mag_y_rd139_select(img, d0, d1, dynamic_address);
	set_at<2224, 3072>(result, mag_y_rd139_res);
	hw_uint<16> mag_y_rd140_res = mag_y_rd140_select(img, d0, d1, dynamic_address);
	set_at<2240, 3072>(result, mag_y_rd140_res);
	hw_uint<16> mag_y_rd141_res = mag_y_rd141_select(img, d0, d1, dynamic_address);
	set_at<2256, 3072>(result, mag_y_rd141_res);
	hw_uint<16> mag_y_rd142_res = mag_y_rd142_select(img, d0, d1, dynamic_address);
	set_at<2272, 3072>(result, mag_y_rd142_res);
	hw_uint<16> mag_y_rd143_res = mag_y_rd143_select(img, d0, d1, dynamic_address);
	set_at<2288, 3072>(result, mag_y_rd143_res);
	hw_uint<16> mag_y_rd144_res = mag_y_rd144_select(img, d0, d1, dynamic_address);
	set_at<2304, 3072>(result, mag_y_rd144_res);
	hw_uint<16> mag_y_rd145_res = mag_y_rd145_select(img, d0, d1, dynamic_address);
	set_at<2320, 3072>(result, mag_y_rd145_res);
	hw_uint<16> mag_y_rd146_res = mag_y_rd146_select(img, d0, d1, dynamic_address);
	set_at<2336, 3072>(result, mag_y_rd146_res);
	hw_uint<16> mag_y_rd147_res = mag_y_rd147_select(img, d0, d1, dynamic_address);
	set_at<2352, 3072>(result, mag_y_rd147_res);
	hw_uint<16> mag_y_rd148_res = mag_y_rd148_select(img, d0, d1, dynamic_address);
	set_at<2368, 3072>(result, mag_y_rd148_res);
	hw_uint<16> mag_y_rd149_res = mag_y_rd149_select(img, d0, d1, dynamic_address);
	set_at<2384, 3072>(result, mag_y_rd149_res);
	hw_uint<16> mag_y_rd150_res = mag_y_rd150_select(img, d0, d1, dynamic_address);
	set_at<2400, 3072>(result, mag_y_rd150_res);
	hw_uint<16> mag_y_rd151_res = mag_y_rd151_select(img, d0, d1, dynamic_address);
	set_at<2416, 3072>(result, mag_y_rd151_res);
	hw_uint<16> mag_y_rd152_res = mag_y_rd152_select(img, d0, d1, dynamic_address);
	set_at<2432, 3072>(result, mag_y_rd152_res);
	hw_uint<16> mag_y_rd153_res = mag_y_rd153_select(img, d0, d1, dynamic_address);
	set_at<2448, 3072>(result, mag_y_rd153_res);
	hw_uint<16> mag_y_rd154_res = mag_y_rd154_select(img, d0, d1, dynamic_address);
	set_at<2464, 3072>(result, mag_y_rd154_res);
	hw_uint<16> mag_y_rd155_res = mag_y_rd155_select(img, d0, d1, dynamic_address);
	set_at<2480, 3072>(result, mag_y_rd155_res);
	hw_uint<16> mag_y_rd156_res = mag_y_rd156_select(img, d0, d1, dynamic_address);
	set_at<2496, 3072>(result, mag_y_rd156_res);
	hw_uint<16> mag_y_rd157_res = mag_y_rd157_select(img, d0, d1, dynamic_address);
	set_at<2512, 3072>(result, mag_y_rd157_res);
	hw_uint<16> mag_y_rd158_res = mag_y_rd158_select(img, d0, d1, dynamic_address);
	set_at<2528, 3072>(result, mag_y_rd158_res);
	hw_uint<16> mag_y_rd159_res = mag_y_rd159_select(img, d0, d1, dynamic_address);
	set_at<2544, 3072>(result, mag_y_rd159_res);
	hw_uint<16> mag_y_rd160_res = mag_y_rd160_select(img, d0, d1, dynamic_address);
	set_at<2560, 3072>(result, mag_y_rd160_res);
	hw_uint<16> mag_y_rd161_res = mag_y_rd161_select(img, d0, d1, dynamic_address);
	set_at<2576, 3072>(result, mag_y_rd161_res);
	hw_uint<16> mag_y_rd162_res = mag_y_rd162_select(img, d0, d1, dynamic_address);
	set_at<2592, 3072>(result, mag_y_rd162_res);
	hw_uint<16> mag_y_rd163_res = mag_y_rd163_select(img, d0, d1, dynamic_address);
	set_at<2608, 3072>(result, mag_y_rd163_res);
	hw_uint<16> mag_y_rd164_res = mag_y_rd164_select(img, d0, d1, dynamic_address);
	set_at<2624, 3072>(result, mag_y_rd164_res);
	hw_uint<16> mag_y_rd165_res = mag_y_rd165_select(img, d0, d1, dynamic_address);
	set_at<2640, 3072>(result, mag_y_rd165_res);
	hw_uint<16> mag_y_rd166_res = mag_y_rd166_select(img, d0, d1, dynamic_address);
	set_at<2656, 3072>(result, mag_y_rd166_res);
	hw_uint<16> mag_y_rd167_res = mag_y_rd167_select(img, d0, d1, dynamic_address);
	set_at<2672, 3072>(result, mag_y_rd167_res);
	hw_uint<16> mag_y_rd168_res = mag_y_rd168_select(img, d0, d1, dynamic_address);
	set_at<2688, 3072>(result, mag_y_rd168_res);
	hw_uint<16> mag_y_rd169_res = mag_y_rd169_select(img, d0, d1, dynamic_address);
	set_at<2704, 3072>(result, mag_y_rd169_res);
	hw_uint<16> mag_y_rd170_res = mag_y_rd170_select(img, d0, d1, dynamic_address);
	set_at<2720, 3072>(result, mag_y_rd170_res);
	hw_uint<16> mag_y_rd171_res = mag_y_rd171_select(img, d0, d1, dynamic_address);
	set_at<2736, 3072>(result, mag_y_rd171_res);
	hw_uint<16> mag_y_rd172_res = mag_y_rd172_select(img, d0, d1, dynamic_address);
	set_at<2752, 3072>(result, mag_y_rd172_res);
	hw_uint<16> mag_y_rd173_res = mag_y_rd173_select(img, d0, d1, dynamic_address);
	set_at<2768, 3072>(result, mag_y_rd173_res);
	hw_uint<16> mag_y_rd174_res = mag_y_rd174_select(img, d0, d1, dynamic_address);
	set_at<2784, 3072>(result, mag_y_rd174_res);
	hw_uint<16> mag_y_rd175_res = mag_y_rd175_select(img, d0, d1, dynamic_address);
	set_at<2800, 3072>(result, mag_y_rd175_res);
	hw_uint<16> mag_y_rd176_res = mag_y_rd176_select(img, d0, d1, dynamic_address);
	set_at<2816, 3072>(result, mag_y_rd176_res);
	hw_uint<16> mag_y_rd177_res = mag_y_rd177_select(img, d0, d1, dynamic_address);
	set_at<2832, 3072>(result, mag_y_rd177_res);
	hw_uint<16> mag_y_rd178_res = mag_y_rd178_select(img, d0, d1, dynamic_address);
	set_at<2848, 3072>(result, mag_y_rd178_res);
	hw_uint<16> mag_y_rd179_res = mag_y_rd179_select(img, d0, d1, dynamic_address);
	set_at<2864, 3072>(result, mag_y_rd179_res);
	hw_uint<16> mag_y_rd180_res = mag_y_rd180_select(img, d0, d1, dynamic_address);
	set_at<2880, 3072>(result, mag_y_rd180_res);
	hw_uint<16> mag_y_rd181_res = mag_y_rd181_select(img, d0, d1, dynamic_address);
	set_at<2896, 3072>(result, mag_y_rd181_res);
	hw_uint<16> mag_y_rd182_res = mag_y_rd182_select(img, d0, d1, dynamic_address);
	set_at<2912, 3072>(result, mag_y_rd182_res);
	hw_uint<16> mag_y_rd183_res = mag_y_rd183_select(img, d0, d1, dynamic_address);
	set_at<2928, 3072>(result, mag_y_rd183_res);
	hw_uint<16> mag_y_rd184_res = mag_y_rd184_select(img, d0, d1, dynamic_address);
	set_at<2944, 3072>(result, mag_y_rd184_res);
	hw_uint<16> mag_y_rd185_res = mag_y_rd185_select(img, d0, d1, dynamic_address);
	set_at<2960, 3072>(result, mag_y_rd185_res);
	hw_uint<16> mag_y_rd186_res = mag_y_rd186_select(img, d0, d1, dynamic_address);
	set_at<2976, 3072>(result, mag_y_rd186_res);
	hw_uint<16> mag_y_rd187_res = mag_y_rd187_select(img, d0, d1, dynamic_address);
	set_at<2992, 3072>(result, mag_y_rd187_res);
	hw_uint<16> mag_y_rd188_res = mag_y_rd188_select(img, d0, d1, dynamic_address);
	set_at<3008, 3072>(result, mag_y_rd188_res);
	hw_uint<16> mag_y_rd189_res = mag_y_rd189_select(img, d0, d1, dynamic_address);
	set_at<3024, 3072>(result, mag_y_rd189_res);
	hw_uint<16> mag_y_rd190_res = mag_y_rd190_select(img, d0, d1, dynamic_address);
	set_at<3040, 3072>(result, mag_y_rd190_res);
	hw_uint<16> mag_y_rd191_res = mag_y_rd191_select(img, d0, d1, dynamic_address);
	set_at<3056, 3072>(result, mag_y_rd191_res);
	return result;
}

struct mag_x_mag_x_update_0_write0_to_sbl_ln_32_rd0_cache {
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

struct mag_x_mag_x_update_0_write1_to_sbl_ln_32_rd1_cache {
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

struct mag_x_mag_x_update_0_write10_to_sbl_ln_32_rd10_cache {
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

struct mag_x_mag_x_update_0_write11_to_sbl_ln_32_rd11_cache {
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

struct mag_x_mag_x_update_0_write12_to_sbl_ln_32_rd12_cache {
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

struct mag_x_mag_x_update_0_write13_to_sbl_ln_32_rd13_cache {
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

struct mag_x_mag_x_update_0_write14_to_sbl_ln_32_rd14_cache {
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

struct mag_x_mag_x_update_0_write15_to_sbl_ln_32_rd15_cache {
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

struct mag_x_mag_x_update_0_write16_to_sbl_ln_32_rd16_cache {
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

struct mag_x_mag_x_update_0_write17_to_sbl_ln_32_rd17_cache {
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

struct mag_x_mag_x_update_0_write18_to_sbl_ln_32_rd18_cache {
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

struct mag_x_mag_x_update_0_write19_to_sbl_ln_32_rd19_cache {
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

struct mag_x_mag_x_update_0_write2_to_sbl_ln_32_rd2_cache {
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

struct mag_x_mag_x_update_0_write20_to_sbl_ln_32_rd20_cache {
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

struct mag_x_mag_x_update_0_write21_to_sbl_ln_32_rd21_cache {
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

struct mag_x_mag_x_update_0_write22_to_sbl_ln_32_rd22_cache {
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

struct mag_x_mag_x_update_0_write23_to_sbl_ln_32_rd23_cache {
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

struct mag_x_mag_x_update_0_write24_to_sbl_ln_32_rd24_cache {
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

struct mag_x_mag_x_update_0_write25_to_sbl_ln_32_rd25_cache {
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

struct mag_x_mag_x_update_0_write26_to_sbl_ln_32_rd26_cache {
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

struct mag_x_mag_x_update_0_write27_to_sbl_ln_32_rd27_cache {
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

struct mag_x_mag_x_update_0_write28_to_sbl_ln_32_rd28_cache {
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

struct mag_x_mag_x_update_0_write29_to_sbl_ln_32_rd29_cache {
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

struct mag_x_mag_x_update_0_write3_to_sbl_ln_32_rd3_cache {
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

struct mag_x_mag_x_update_0_write30_to_sbl_ln_32_rd30_cache {
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

struct mag_x_mag_x_update_0_write31_to_sbl_ln_32_rd31_cache {
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

struct mag_x_mag_x_update_0_write4_to_sbl_ln_32_rd4_cache {
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

struct mag_x_mag_x_update_0_write5_to_sbl_ln_32_rd5_cache {
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

struct mag_x_mag_x_update_0_write6_to_sbl_ln_32_rd6_cache {
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

struct mag_x_mag_x_update_0_write7_to_sbl_ln_32_rd7_cache {
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

struct mag_x_mag_x_update_0_write8_to_sbl_ln_32_rd8_cache {
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

struct mag_x_mag_x_update_0_write9_to_sbl_ln_32_rd9_cache {
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

struct mag_x_cache {
  // # of banks: 32
  mag_x_mag_x_update_0_write0_to_sbl_ln_32_rd0_cache mag_x_mag_x_update_0_write0_to_sbl_ln_32_rd0;
  mag_x_mag_x_update_0_write1_to_sbl_ln_32_rd1_cache mag_x_mag_x_update_0_write1_to_sbl_ln_32_rd1;
  mag_x_mag_x_update_0_write10_to_sbl_ln_32_rd10_cache mag_x_mag_x_update_0_write10_to_sbl_ln_32_rd10;
  mag_x_mag_x_update_0_write11_to_sbl_ln_32_rd11_cache mag_x_mag_x_update_0_write11_to_sbl_ln_32_rd11;
  mag_x_mag_x_update_0_write12_to_sbl_ln_32_rd12_cache mag_x_mag_x_update_0_write12_to_sbl_ln_32_rd12;
  mag_x_mag_x_update_0_write13_to_sbl_ln_32_rd13_cache mag_x_mag_x_update_0_write13_to_sbl_ln_32_rd13;
  mag_x_mag_x_update_0_write14_to_sbl_ln_32_rd14_cache mag_x_mag_x_update_0_write14_to_sbl_ln_32_rd14;
  mag_x_mag_x_update_0_write15_to_sbl_ln_32_rd15_cache mag_x_mag_x_update_0_write15_to_sbl_ln_32_rd15;
  mag_x_mag_x_update_0_write16_to_sbl_ln_32_rd16_cache mag_x_mag_x_update_0_write16_to_sbl_ln_32_rd16;
  mag_x_mag_x_update_0_write17_to_sbl_ln_32_rd17_cache mag_x_mag_x_update_0_write17_to_sbl_ln_32_rd17;
  mag_x_mag_x_update_0_write18_to_sbl_ln_32_rd18_cache mag_x_mag_x_update_0_write18_to_sbl_ln_32_rd18;
  mag_x_mag_x_update_0_write19_to_sbl_ln_32_rd19_cache mag_x_mag_x_update_0_write19_to_sbl_ln_32_rd19;
  mag_x_mag_x_update_0_write2_to_sbl_ln_32_rd2_cache mag_x_mag_x_update_0_write2_to_sbl_ln_32_rd2;
  mag_x_mag_x_update_0_write20_to_sbl_ln_32_rd20_cache mag_x_mag_x_update_0_write20_to_sbl_ln_32_rd20;
  mag_x_mag_x_update_0_write21_to_sbl_ln_32_rd21_cache mag_x_mag_x_update_0_write21_to_sbl_ln_32_rd21;
  mag_x_mag_x_update_0_write22_to_sbl_ln_32_rd22_cache mag_x_mag_x_update_0_write22_to_sbl_ln_32_rd22;
  mag_x_mag_x_update_0_write23_to_sbl_ln_32_rd23_cache mag_x_mag_x_update_0_write23_to_sbl_ln_32_rd23;
  mag_x_mag_x_update_0_write24_to_sbl_ln_32_rd24_cache mag_x_mag_x_update_0_write24_to_sbl_ln_32_rd24;
  mag_x_mag_x_update_0_write25_to_sbl_ln_32_rd25_cache mag_x_mag_x_update_0_write25_to_sbl_ln_32_rd25;
  mag_x_mag_x_update_0_write26_to_sbl_ln_32_rd26_cache mag_x_mag_x_update_0_write26_to_sbl_ln_32_rd26;
  mag_x_mag_x_update_0_write27_to_sbl_ln_32_rd27_cache mag_x_mag_x_update_0_write27_to_sbl_ln_32_rd27;
  mag_x_mag_x_update_0_write28_to_sbl_ln_32_rd28_cache mag_x_mag_x_update_0_write28_to_sbl_ln_32_rd28;
  mag_x_mag_x_update_0_write29_to_sbl_ln_32_rd29_cache mag_x_mag_x_update_0_write29_to_sbl_ln_32_rd29;
  mag_x_mag_x_update_0_write3_to_sbl_ln_32_rd3_cache mag_x_mag_x_update_0_write3_to_sbl_ln_32_rd3;
  mag_x_mag_x_update_0_write30_to_sbl_ln_32_rd30_cache mag_x_mag_x_update_0_write30_to_sbl_ln_32_rd30;
  mag_x_mag_x_update_0_write31_to_sbl_ln_32_rd31_cache mag_x_mag_x_update_0_write31_to_sbl_ln_32_rd31;
  mag_x_mag_x_update_0_write4_to_sbl_ln_32_rd4_cache mag_x_mag_x_update_0_write4_to_sbl_ln_32_rd4;
  mag_x_mag_x_update_0_write5_to_sbl_ln_32_rd5_cache mag_x_mag_x_update_0_write5_to_sbl_ln_32_rd5;
  mag_x_mag_x_update_0_write6_to_sbl_ln_32_rd6_cache mag_x_mag_x_update_0_write6_to_sbl_ln_32_rd6;
  mag_x_mag_x_update_0_write7_to_sbl_ln_32_rd7_cache mag_x_mag_x_update_0_write7_to_sbl_ln_32_rd7;
  mag_x_mag_x_update_0_write8_to_sbl_ln_32_rd8_cache mag_x_mag_x_update_0_write8_to_sbl_ln_32_rd8;
  mag_x_mag_x_update_0_write9_to_sbl_ln_32_rd9_cache mag_x_mag_x_update_0_write9_to_sbl_ln_32_rd9;
};



inline void mag_x_mag_x_update_0_write0_write(hw_uint<16>& mag_x_mag_x_update_0_write0, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write0_to_sbl_ln_32_rd0.push(mag_x_mag_x_update_0_write0);
}

inline void mag_x_mag_x_update_0_write1_write(hw_uint<16>& mag_x_mag_x_update_0_write1, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write1_to_sbl_ln_32_rd1.push(mag_x_mag_x_update_0_write1);
}

inline void mag_x_mag_x_update_0_write10_write(hw_uint<16>& mag_x_mag_x_update_0_write10, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write10_to_sbl_ln_32_rd10.push(mag_x_mag_x_update_0_write10);
}

inline void mag_x_mag_x_update_0_write11_write(hw_uint<16>& mag_x_mag_x_update_0_write11, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write11_to_sbl_ln_32_rd11.push(mag_x_mag_x_update_0_write11);
}

inline void mag_x_mag_x_update_0_write12_write(hw_uint<16>& mag_x_mag_x_update_0_write12, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write12_to_sbl_ln_32_rd12.push(mag_x_mag_x_update_0_write12);
}

inline void mag_x_mag_x_update_0_write13_write(hw_uint<16>& mag_x_mag_x_update_0_write13, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write13_to_sbl_ln_32_rd13.push(mag_x_mag_x_update_0_write13);
}

inline void mag_x_mag_x_update_0_write14_write(hw_uint<16>& mag_x_mag_x_update_0_write14, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write14_to_sbl_ln_32_rd14.push(mag_x_mag_x_update_0_write14);
}

inline void mag_x_mag_x_update_0_write15_write(hw_uint<16>& mag_x_mag_x_update_0_write15, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write15_to_sbl_ln_32_rd15.push(mag_x_mag_x_update_0_write15);
}

inline void mag_x_mag_x_update_0_write16_write(hw_uint<16>& mag_x_mag_x_update_0_write16, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write16_to_sbl_ln_32_rd16.push(mag_x_mag_x_update_0_write16);
}

inline void mag_x_mag_x_update_0_write17_write(hw_uint<16>& mag_x_mag_x_update_0_write17, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write17_to_sbl_ln_32_rd17.push(mag_x_mag_x_update_0_write17);
}

inline void mag_x_mag_x_update_0_write18_write(hw_uint<16>& mag_x_mag_x_update_0_write18, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write18_to_sbl_ln_32_rd18.push(mag_x_mag_x_update_0_write18);
}

inline void mag_x_mag_x_update_0_write19_write(hw_uint<16>& mag_x_mag_x_update_0_write19, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write19_to_sbl_ln_32_rd19.push(mag_x_mag_x_update_0_write19);
}

inline void mag_x_mag_x_update_0_write2_write(hw_uint<16>& mag_x_mag_x_update_0_write2, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write2_to_sbl_ln_32_rd2.push(mag_x_mag_x_update_0_write2);
}

inline void mag_x_mag_x_update_0_write20_write(hw_uint<16>& mag_x_mag_x_update_0_write20, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write20_to_sbl_ln_32_rd20.push(mag_x_mag_x_update_0_write20);
}

inline void mag_x_mag_x_update_0_write21_write(hw_uint<16>& mag_x_mag_x_update_0_write21, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write21_to_sbl_ln_32_rd21.push(mag_x_mag_x_update_0_write21);
}

inline void mag_x_mag_x_update_0_write22_write(hw_uint<16>& mag_x_mag_x_update_0_write22, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write22_to_sbl_ln_32_rd22.push(mag_x_mag_x_update_0_write22);
}

inline void mag_x_mag_x_update_0_write23_write(hw_uint<16>& mag_x_mag_x_update_0_write23, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write23_to_sbl_ln_32_rd23.push(mag_x_mag_x_update_0_write23);
}

inline void mag_x_mag_x_update_0_write24_write(hw_uint<16>& mag_x_mag_x_update_0_write24, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write24_to_sbl_ln_32_rd24.push(mag_x_mag_x_update_0_write24);
}

inline void mag_x_mag_x_update_0_write25_write(hw_uint<16>& mag_x_mag_x_update_0_write25, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write25_to_sbl_ln_32_rd25.push(mag_x_mag_x_update_0_write25);
}

inline void mag_x_mag_x_update_0_write26_write(hw_uint<16>& mag_x_mag_x_update_0_write26, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write26_to_sbl_ln_32_rd26.push(mag_x_mag_x_update_0_write26);
}

inline void mag_x_mag_x_update_0_write27_write(hw_uint<16>& mag_x_mag_x_update_0_write27, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write27_to_sbl_ln_32_rd27.push(mag_x_mag_x_update_0_write27);
}

inline void mag_x_mag_x_update_0_write28_write(hw_uint<16>& mag_x_mag_x_update_0_write28, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write28_to_sbl_ln_32_rd28.push(mag_x_mag_x_update_0_write28);
}

inline void mag_x_mag_x_update_0_write29_write(hw_uint<16>& mag_x_mag_x_update_0_write29, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write29_to_sbl_ln_32_rd29.push(mag_x_mag_x_update_0_write29);
}

inline void mag_x_mag_x_update_0_write3_write(hw_uint<16>& mag_x_mag_x_update_0_write3, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write3_to_sbl_ln_32_rd3.push(mag_x_mag_x_update_0_write3);
}

inline void mag_x_mag_x_update_0_write30_write(hw_uint<16>& mag_x_mag_x_update_0_write30, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write30_to_sbl_ln_32_rd30.push(mag_x_mag_x_update_0_write30);
}

inline void mag_x_mag_x_update_0_write31_write(hw_uint<16>& mag_x_mag_x_update_0_write31, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write31_to_sbl_ln_32_rd31.push(mag_x_mag_x_update_0_write31);
}

inline void mag_x_mag_x_update_0_write4_write(hw_uint<16>& mag_x_mag_x_update_0_write4, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write4_to_sbl_ln_32_rd4.push(mag_x_mag_x_update_0_write4);
}

inline void mag_x_mag_x_update_0_write5_write(hw_uint<16>& mag_x_mag_x_update_0_write5, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write5_to_sbl_ln_32_rd5.push(mag_x_mag_x_update_0_write5);
}

inline void mag_x_mag_x_update_0_write6_write(hw_uint<16>& mag_x_mag_x_update_0_write6, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write6_to_sbl_ln_32_rd6.push(mag_x_mag_x_update_0_write6);
}

inline void mag_x_mag_x_update_0_write7_write(hw_uint<16>& mag_x_mag_x_update_0_write7, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write7_to_sbl_ln_32_rd7.push(mag_x_mag_x_update_0_write7);
}

inline void mag_x_mag_x_update_0_write8_write(hw_uint<16>& mag_x_mag_x_update_0_write8, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write8_to_sbl_ln_32_rd8.push(mag_x_mag_x_update_0_write8);
}

inline void mag_x_mag_x_update_0_write9_write(hw_uint<16>& mag_x_mag_x_update_0_write9, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  mag_x.mag_x_mag_x_update_0_write9_to_sbl_ln_32_rd9.push(mag_x_mag_x_update_0_write9);
}

inline hw_uint<16> sbl_ln_32_rd0_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd0 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write0 = mag_x.mag_x_mag_x_update_0_write0_to_sbl_ln_32_rd0.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write0;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd1_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd1 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[1 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write1 = mag_x.mag_x_mag_x_update_0_write1_to_sbl_ln_32_rd1.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write1;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd10_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd10 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[10 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write10 = mag_x.mag_x_mag_x_update_0_write10_to_sbl_ln_32_rd10.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write10;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd11_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd11 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[11 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write11 = mag_x.mag_x_mag_x_update_0_write11_to_sbl_ln_32_rd11.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write11;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd12_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd12 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[12 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write12 = mag_x.mag_x_mag_x_update_0_write12_to_sbl_ln_32_rd12.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write12;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd13_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd13 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[13 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write13 = mag_x.mag_x_mag_x_update_0_write13_to_sbl_ln_32_rd13.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write13;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd14_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd14 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[14 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write14 = mag_x.mag_x_mag_x_update_0_write14_to_sbl_ln_32_rd14.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write14;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd15_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd15 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[15 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write15 = mag_x.mag_x_mag_x_update_0_write15_to_sbl_ln_32_rd15.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write15;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd16_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd16 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[16 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write16 = mag_x.mag_x_mag_x_update_0_write16_to_sbl_ln_32_rd16.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write16;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd17_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd17 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[17 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write17 = mag_x.mag_x_mag_x_update_0_write17_to_sbl_ln_32_rd17.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write17;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd18_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd18 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[18 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write18 = mag_x.mag_x_mag_x_update_0_write18_to_sbl_ln_32_rd18.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write18;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd19_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd19 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[19 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write19 = mag_x.mag_x_mag_x_update_0_write19_to_sbl_ln_32_rd19.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write19;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd2_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd2 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[2 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write2 = mag_x.mag_x_mag_x_update_0_write2_to_sbl_ln_32_rd2.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write2;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd20_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd20 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[20 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write20 = mag_x.mag_x_mag_x_update_0_write20_to_sbl_ln_32_rd20.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write20;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd21_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd21 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[21 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write21 = mag_x.mag_x_mag_x_update_0_write21_to_sbl_ln_32_rd21.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write21;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd22_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd22 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[22 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write22 = mag_x.mag_x_mag_x_update_0_write22_to_sbl_ln_32_rd22.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write22;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd23_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd23 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[23 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write23 = mag_x.mag_x_mag_x_update_0_write23_to_sbl_ln_32_rd23.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write23;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd24_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd24 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[24 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write24 = mag_x.mag_x_mag_x_update_0_write24_to_sbl_ln_32_rd24.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write24;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd25_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd25 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[25 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write25 = mag_x.mag_x_mag_x_update_0_write25_to_sbl_ln_32_rd25.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write25;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd26_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd26 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[26 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write26 = mag_x.mag_x_mag_x_update_0_write26_to_sbl_ln_32_rd26.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write26;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd27_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd27 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[27 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write27 = mag_x.mag_x_mag_x_update_0_write27_to_sbl_ln_32_rd27.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write27;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd28_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd28 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[28 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write28 = mag_x.mag_x_mag_x_update_0_write28_to_sbl_ln_32_rd28.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write28;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd29_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd29 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[29 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write29 = mag_x.mag_x_mag_x_update_0_write29_to_sbl_ln_32_rd29.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write29;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd3_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd3 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[3 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write3 = mag_x.mag_x_mag_x_update_0_write3_to_sbl_ln_32_rd3.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write3;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd30_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd30 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[30 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write30 = mag_x.mag_x_mag_x_update_0_write30_to_sbl_ln_32_rd30.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write30;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd31_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd31 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[31 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write31 = mag_x.mag_x_mag_x_update_0_write31_to_sbl_ln_32_rd31.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write31;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd4_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd4 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[4 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write4 = mag_x.mag_x_mag_x_update_0_write4_to_sbl_ln_32_rd4.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write4;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd5_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd5 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[5 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write5 = mag_x.mag_x_mag_x_update_0_write5_to_sbl_ln_32_rd5.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write5;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd6_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd6 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[6 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write6 = mag_x.mag_x_mag_x_update_0_write6_to_sbl_ln_32_rd6.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write6;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd7_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd7 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[7 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write7 = mag_x.mag_x_mag_x_update_0_write7_to_sbl_ln_32_rd7.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write7;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd8_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd8 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[8 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write8 = mag_x.mag_x_mag_x_update_0_write8_to_sbl_ln_32_rd8.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write8;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd9_select(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd9 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_x[9 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_x_mag_x_update_0_write9 = mag_x.mag_x_mag_x_update_0_write9_to_sbl_ln_32_rd9.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_update_0_write9;
  return 0;
}

// # of bundles = 2
// mag_x_update_0_write
//	mag_x_mag_x_update_0_write0
//	mag_x_mag_x_update_0_write1
//	mag_x_mag_x_update_0_write2
//	mag_x_mag_x_update_0_write3
//	mag_x_mag_x_update_0_write4
//	mag_x_mag_x_update_0_write5
//	mag_x_mag_x_update_0_write6
//	mag_x_mag_x_update_0_write7
//	mag_x_mag_x_update_0_write8
//	mag_x_mag_x_update_0_write9
//	mag_x_mag_x_update_0_write10
//	mag_x_mag_x_update_0_write11
//	mag_x_mag_x_update_0_write12
//	mag_x_mag_x_update_0_write13
//	mag_x_mag_x_update_0_write14
//	mag_x_mag_x_update_0_write15
//	mag_x_mag_x_update_0_write16
//	mag_x_mag_x_update_0_write17
//	mag_x_mag_x_update_0_write18
//	mag_x_mag_x_update_0_write19
//	mag_x_mag_x_update_0_write20
//	mag_x_mag_x_update_0_write21
//	mag_x_mag_x_update_0_write22
//	mag_x_mag_x_update_0_write23
//	mag_x_mag_x_update_0_write24
//	mag_x_mag_x_update_0_write25
//	mag_x_mag_x_update_0_write26
//	mag_x_mag_x_update_0_write27
//	mag_x_mag_x_update_0_write28
//	mag_x_mag_x_update_0_write29
//	mag_x_mag_x_update_0_write30
//	mag_x_mag_x_update_0_write31
inline void mag_x_mag_x_update_0_write_bundle_write(hw_uint<512>& mag_x_update_0_write, mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
	hw_uint<16> mag_x_mag_x_update_0_write0_res = mag_x_update_0_write.extract<0, 15>();
	mag_x_mag_x_update_0_write0_write(mag_x_mag_x_update_0_write0_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write1_res = mag_x_update_0_write.extract<16, 31>();
	mag_x_mag_x_update_0_write1_write(mag_x_mag_x_update_0_write1_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write2_res = mag_x_update_0_write.extract<32, 47>();
	mag_x_mag_x_update_0_write2_write(mag_x_mag_x_update_0_write2_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write3_res = mag_x_update_0_write.extract<48, 63>();
	mag_x_mag_x_update_0_write3_write(mag_x_mag_x_update_0_write3_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write4_res = mag_x_update_0_write.extract<64, 79>();
	mag_x_mag_x_update_0_write4_write(mag_x_mag_x_update_0_write4_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write5_res = mag_x_update_0_write.extract<80, 95>();
	mag_x_mag_x_update_0_write5_write(mag_x_mag_x_update_0_write5_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write6_res = mag_x_update_0_write.extract<96, 111>();
	mag_x_mag_x_update_0_write6_write(mag_x_mag_x_update_0_write6_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write7_res = mag_x_update_0_write.extract<112, 127>();
	mag_x_mag_x_update_0_write7_write(mag_x_mag_x_update_0_write7_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write8_res = mag_x_update_0_write.extract<128, 143>();
	mag_x_mag_x_update_0_write8_write(mag_x_mag_x_update_0_write8_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write9_res = mag_x_update_0_write.extract<144, 159>();
	mag_x_mag_x_update_0_write9_write(mag_x_mag_x_update_0_write9_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write10_res = mag_x_update_0_write.extract<160, 175>();
	mag_x_mag_x_update_0_write10_write(mag_x_mag_x_update_0_write10_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write11_res = mag_x_update_0_write.extract<176, 191>();
	mag_x_mag_x_update_0_write11_write(mag_x_mag_x_update_0_write11_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write12_res = mag_x_update_0_write.extract<192, 207>();
	mag_x_mag_x_update_0_write12_write(mag_x_mag_x_update_0_write12_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write13_res = mag_x_update_0_write.extract<208, 223>();
	mag_x_mag_x_update_0_write13_write(mag_x_mag_x_update_0_write13_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write14_res = mag_x_update_0_write.extract<224, 239>();
	mag_x_mag_x_update_0_write14_write(mag_x_mag_x_update_0_write14_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write15_res = mag_x_update_0_write.extract<240, 255>();
	mag_x_mag_x_update_0_write15_write(mag_x_mag_x_update_0_write15_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write16_res = mag_x_update_0_write.extract<256, 271>();
	mag_x_mag_x_update_0_write16_write(mag_x_mag_x_update_0_write16_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write17_res = mag_x_update_0_write.extract<272, 287>();
	mag_x_mag_x_update_0_write17_write(mag_x_mag_x_update_0_write17_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write18_res = mag_x_update_0_write.extract<288, 303>();
	mag_x_mag_x_update_0_write18_write(mag_x_mag_x_update_0_write18_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write19_res = mag_x_update_0_write.extract<304, 319>();
	mag_x_mag_x_update_0_write19_write(mag_x_mag_x_update_0_write19_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write20_res = mag_x_update_0_write.extract<320, 335>();
	mag_x_mag_x_update_0_write20_write(mag_x_mag_x_update_0_write20_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write21_res = mag_x_update_0_write.extract<336, 351>();
	mag_x_mag_x_update_0_write21_write(mag_x_mag_x_update_0_write21_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write22_res = mag_x_update_0_write.extract<352, 367>();
	mag_x_mag_x_update_0_write22_write(mag_x_mag_x_update_0_write22_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write23_res = mag_x_update_0_write.extract<368, 383>();
	mag_x_mag_x_update_0_write23_write(mag_x_mag_x_update_0_write23_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write24_res = mag_x_update_0_write.extract<384, 399>();
	mag_x_mag_x_update_0_write24_write(mag_x_mag_x_update_0_write24_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write25_res = mag_x_update_0_write.extract<400, 415>();
	mag_x_mag_x_update_0_write25_write(mag_x_mag_x_update_0_write25_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write26_res = mag_x_update_0_write.extract<416, 431>();
	mag_x_mag_x_update_0_write26_write(mag_x_mag_x_update_0_write26_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write27_res = mag_x_update_0_write.extract<432, 447>();
	mag_x_mag_x_update_0_write27_write(mag_x_mag_x_update_0_write27_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write28_res = mag_x_update_0_write.extract<448, 463>();
	mag_x_mag_x_update_0_write28_write(mag_x_mag_x_update_0_write28_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write29_res = mag_x_update_0_write.extract<464, 479>();
	mag_x_mag_x_update_0_write29_write(mag_x_mag_x_update_0_write29_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write30_res = mag_x_update_0_write.extract<480, 495>();
	mag_x_mag_x_update_0_write30_write(mag_x_mag_x_update_0_write30_res, mag_x, d0, d1, dynamic_address);
	hw_uint<16> mag_x_mag_x_update_0_write31_res = mag_x_update_0_write.extract<496, 511>();
	mag_x_mag_x_update_0_write31_write(mag_x_mag_x_update_0_write31_res, mag_x, d0, d1, dynamic_address);
}

// sbl_ln_32_update_0_read
//	sbl_ln_32_rd0
//	sbl_ln_32_rd1
//	sbl_ln_32_rd2
//	sbl_ln_32_rd3
//	sbl_ln_32_rd4
//	sbl_ln_32_rd5
//	sbl_ln_32_rd6
//	sbl_ln_32_rd7
//	sbl_ln_32_rd8
//	sbl_ln_32_rd9
//	sbl_ln_32_rd10
//	sbl_ln_32_rd11
//	sbl_ln_32_rd12
//	sbl_ln_32_rd13
//	sbl_ln_32_rd14
//	sbl_ln_32_rd15
//	sbl_ln_32_rd16
//	sbl_ln_32_rd17
//	sbl_ln_32_rd18
//	sbl_ln_32_rd19
//	sbl_ln_32_rd20
//	sbl_ln_32_rd21
//	sbl_ln_32_rd22
//	sbl_ln_32_rd23
//	sbl_ln_32_rd24
//	sbl_ln_32_rd25
//	sbl_ln_32_rd26
//	sbl_ln_32_rd27
//	sbl_ln_32_rd28
//	sbl_ln_32_rd29
//	sbl_ln_32_rd30
//	sbl_ln_32_rd31
inline hw_uint<512> mag_x_sbl_ln_32_update_0_read_bundle_read(mag_x_cache& mag_x, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 32
    // sbl_ln_32_rd0
    // sbl_ln_32_rd1
    // sbl_ln_32_rd2
    // sbl_ln_32_rd3
    // sbl_ln_32_rd4
    // sbl_ln_32_rd5
    // sbl_ln_32_rd6
    // sbl_ln_32_rd7
    // sbl_ln_32_rd8
    // sbl_ln_32_rd9
    // sbl_ln_32_rd10
    // sbl_ln_32_rd11
    // sbl_ln_32_rd12
    // sbl_ln_32_rd13
    // sbl_ln_32_rd14
    // sbl_ln_32_rd15
    // sbl_ln_32_rd16
    // sbl_ln_32_rd17
    // sbl_ln_32_rd18
    // sbl_ln_32_rd19
    // sbl_ln_32_rd20
    // sbl_ln_32_rd21
    // sbl_ln_32_rd22
    // sbl_ln_32_rd23
    // sbl_ln_32_rd24
    // sbl_ln_32_rd25
    // sbl_ln_32_rd26
    // sbl_ln_32_rd27
    // sbl_ln_32_rd28
    // sbl_ln_32_rd29
    // sbl_ln_32_rd30
    // sbl_ln_32_rd31

	hw_uint<512> result;
	hw_uint<16> sbl_ln_32_rd0_res = sbl_ln_32_rd0_select(mag_x, d0, d1, dynamic_address);
	set_at<0, 512>(result, sbl_ln_32_rd0_res);
	hw_uint<16> sbl_ln_32_rd1_res = sbl_ln_32_rd1_select(mag_x, d0, d1, dynamic_address);
	set_at<16, 512>(result, sbl_ln_32_rd1_res);
	hw_uint<16> sbl_ln_32_rd2_res = sbl_ln_32_rd2_select(mag_x, d0, d1, dynamic_address);
	set_at<32, 512>(result, sbl_ln_32_rd2_res);
	hw_uint<16> sbl_ln_32_rd3_res = sbl_ln_32_rd3_select(mag_x, d0, d1, dynamic_address);
	set_at<48, 512>(result, sbl_ln_32_rd3_res);
	hw_uint<16> sbl_ln_32_rd4_res = sbl_ln_32_rd4_select(mag_x, d0, d1, dynamic_address);
	set_at<64, 512>(result, sbl_ln_32_rd4_res);
	hw_uint<16> sbl_ln_32_rd5_res = sbl_ln_32_rd5_select(mag_x, d0, d1, dynamic_address);
	set_at<80, 512>(result, sbl_ln_32_rd5_res);
	hw_uint<16> sbl_ln_32_rd6_res = sbl_ln_32_rd6_select(mag_x, d0, d1, dynamic_address);
	set_at<96, 512>(result, sbl_ln_32_rd6_res);
	hw_uint<16> sbl_ln_32_rd7_res = sbl_ln_32_rd7_select(mag_x, d0, d1, dynamic_address);
	set_at<112, 512>(result, sbl_ln_32_rd7_res);
	hw_uint<16> sbl_ln_32_rd8_res = sbl_ln_32_rd8_select(mag_x, d0, d1, dynamic_address);
	set_at<128, 512>(result, sbl_ln_32_rd8_res);
	hw_uint<16> sbl_ln_32_rd9_res = sbl_ln_32_rd9_select(mag_x, d0, d1, dynamic_address);
	set_at<144, 512>(result, sbl_ln_32_rd9_res);
	hw_uint<16> sbl_ln_32_rd10_res = sbl_ln_32_rd10_select(mag_x, d0, d1, dynamic_address);
	set_at<160, 512>(result, sbl_ln_32_rd10_res);
	hw_uint<16> sbl_ln_32_rd11_res = sbl_ln_32_rd11_select(mag_x, d0, d1, dynamic_address);
	set_at<176, 512>(result, sbl_ln_32_rd11_res);
	hw_uint<16> sbl_ln_32_rd12_res = sbl_ln_32_rd12_select(mag_x, d0, d1, dynamic_address);
	set_at<192, 512>(result, sbl_ln_32_rd12_res);
	hw_uint<16> sbl_ln_32_rd13_res = sbl_ln_32_rd13_select(mag_x, d0, d1, dynamic_address);
	set_at<208, 512>(result, sbl_ln_32_rd13_res);
	hw_uint<16> sbl_ln_32_rd14_res = sbl_ln_32_rd14_select(mag_x, d0, d1, dynamic_address);
	set_at<224, 512>(result, sbl_ln_32_rd14_res);
	hw_uint<16> sbl_ln_32_rd15_res = sbl_ln_32_rd15_select(mag_x, d0, d1, dynamic_address);
	set_at<240, 512>(result, sbl_ln_32_rd15_res);
	hw_uint<16> sbl_ln_32_rd16_res = sbl_ln_32_rd16_select(mag_x, d0, d1, dynamic_address);
	set_at<256, 512>(result, sbl_ln_32_rd16_res);
	hw_uint<16> sbl_ln_32_rd17_res = sbl_ln_32_rd17_select(mag_x, d0, d1, dynamic_address);
	set_at<272, 512>(result, sbl_ln_32_rd17_res);
	hw_uint<16> sbl_ln_32_rd18_res = sbl_ln_32_rd18_select(mag_x, d0, d1, dynamic_address);
	set_at<288, 512>(result, sbl_ln_32_rd18_res);
	hw_uint<16> sbl_ln_32_rd19_res = sbl_ln_32_rd19_select(mag_x, d0, d1, dynamic_address);
	set_at<304, 512>(result, sbl_ln_32_rd19_res);
	hw_uint<16> sbl_ln_32_rd20_res = sbl_ln_32_rd20_select(mag_x, d0, d1, dynamic_address);
	set_at<320, 512>(result, sbl_ln_32_rd20_res);
	hw_uint<16> sbl_ln_32_rd21_res = sbl_ln_32_rd21_select(mag_x, d0, d1, dynamic_address);
	set_at<336, 512>(result, sbl_ln_32_rd21_res);
	hw_uint<16> sbl_ln_32_rd22_res = sbl_ln_32_rd22_select(mag_x, d0, d1, dynamic_address);
	set_at<352, 512>(result, sbl_ln_32_rd22_res);
	hw_uint<16> sbl_ln_32_rd23_res = sbl_ln_32_rd23_select(mag_x, d0, d1, dynamic_address);
	set_at<368, 512>(result, sbl_ln_32_rd23_res);
	hw_uint<16> sbl_ln_32_rd24_res = sbl_ln_32_rd24_select(mag_x, d0, d1, dynamic_address);
	set_at<384, 512>(result, sbl_ln_32_rd24_res);
	hw_uint<16> sbl_ln_32_rd25_res = sbl_ln_32_rd25_select(mag_x, d0, d1, dynamic_address);
	set_at<400, 512>(result, sbl_ln_32_rd25_res);
	hw_uint<16> sbl_ln_32_rd26_res = sbl_ln_32_rd26_select(mag_x, d0, d1, dynamic_address);
	set_at<416, 512>(result, sbl_ln_32_rd26_res);
	hw_uint<16> sbl_ln_32_rd27_res = sbl_ln_32_rd27_select(mag_x, d0, d1, dynamic_address);
	set_at<432, 512>(result, sbl_ln_32_rd27_res);
	hw_uint<16> sbl_ln_32_rd28_res = sbl_ln_32_rd28_select(mag_x, d0, d1, dynamic_address);
	set_at<448, 512>(result, sbl_ln_32_rd28_res);
	hw_uint<16> sbl_ln_32_rd29_res = sbl_ln_32_rd29_select(mag_x, d0, d1, dynamic_address);
	set_at<464, 512>(result, sbl_ln_32_rd29_res);
	hw_uint<16> sbl_ln_32_rd30_res = sbl_ln_32_rd30_select(mag_x, d0, d1, dynamic_address);
	set_at<480, 512>(result, sbl_ln_32_rd30_res);
	hw_uint<16> sbl_ln_32_rd31_res = sbl_ln_32_rd31_select(mag_x, d0, d1, dynamic_address);
	set_at<496, 512>(result, sbl_ln_32_rd31_res);
	return result;
}

struct mag_y_mag_y_update_0_write0_to_sbl_ln_32_rd0_cache {
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

struct mag_y_mag_y_update_0_write1_to_sbl_ln_32_rd1_cache {
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

struct mag_y_mag_y_update_0_write10_to_sbl_ln_32_rd10_cache {
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

struct mag_y_mag_y_update_0_write11_to_sbl_ln_32_rd11_cache {
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

struct mag_y_mag_y_update_0_write12_to_sbl_ln_32_rd12_cache {
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

struct mag_y_mag_y_update_0_write13_to_sbl_ln_32_rd13_cache {
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

struct mag_y_mag_y_update_0_write14_to_sbl_ln_32_rd14_cache {
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

struct mag_y_mag_y_update_0_write15_to_sbl_ln_32_rd15_cache {
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

struct mag_y_mag_y_update_0_write16_to_sbl_ln_32_rd16_cache {
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

struct mag_y_mag_y_update_0_write17_to_sbl_ln_32_rd17_cache {
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

struct mag_y_mag_y_update_0_write18_to_sbl_ln_32_rd18_cache {
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

struct mag_y_mag_y_update_0_write19_to_sbl_ln_32_rd19_cache {
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

struct mag_y_mag_y_update_0_write2_to_sbl_ln_32_rd2_cache {
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

struct mag_y_mag_y_update_0_write20_to_sbl_ln_32_rd20_cache {
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

struct mag_y_mag_y_update_0_write21_to_sbl_ln_32_rd21_cache {
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

struct mag_y_mag_y_update_0_write22_to_sbl_ln_32_rd22_cache {
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

struct mag_y_mag_y_update_0_write23_to_sbl_ln_32_rd23_cache {
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

struct mag_y_mag_y_update_0_write24_to_sbl_ln_32_rd24_cache {
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

struct mag_y_mag_y_update_0_write25_to_sbl_ln_32_rd25_cache {
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

struct mag_y_mag_y_update_0_write26_to_sbl_ln_32_rd26_cache {
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

struct mag_y_mag_y_update_0_write27_to_sbl_ln_32_rd27_cache {
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

struct mag_y_mag_y_update_0_write28_to_sbl_ln_32_rd28_cache {
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

struct mag_y_mag_y_update_0_write29_to_sbl_ln_32_rd29_cache {
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

struct mag_y_mag_y_update_0_write3_to_sbl_ln_32_rd3_cache {
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

struct mag_y_mag_y_update_0_write30_to_sbl_ln_32_rd30_cache {
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

struct mag_y_mag_y_update_0_write31_to_sbl_ln_32_rd31_cache {
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

struct mag_y_mag_y_update_0_write4_to_sbl_ln_32_rd4_cache {
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

struct mag_y_mag_y_update_0_write5_to_sbl_ln_32_rd5_cache {
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

struct mag_y_mag_y_update_0_write6_to_sbl_ln_32_rd6_cache {
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

struct mag_y_mag_y_update_0_write7_to_sbl_ln_32_rd7_cache {
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

struct mag_y_mag_y_update_0_write8_to_sbl_ln_32_rd8_cache {
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

struct mag_y_mag_y_update_0_write9_to_sbl_ln_32_rd9_cache {
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

struct mag_y_cache {
  // # of banks: 32
  mag_y_mag_y_update_0_write0_to_sbl_ln_32_rd0_cache mag_y_mag_y_update_0_write0_to_sbl_ln_32_rd0;
  mag_y_mag_y_update_0_write1_to_sbl_ln_32_rd1_cache mag_y_mag_y_update_0_write1_to_sbl_ln_32_rd1;
  mag_y_mag_y_update_0_write10_to_sbl_ln_32_rd10_cache mag_y_mag_y_update_0_write10_to_sbl_ln_32_rd10;
  mag_y_mag_y_update_0_write11_to_sbl_ln_32_rd11_cache mag_y_mag_y_update_0_write11_to_sbl_ln_32_rd11;
  mag_y_mag_y_update_0_write12_to_sbl_ln_32_rd12_cache mag_y_mag_y_update_0_write12_to_sbl_ln_32_rd12;
  mag_y_mag_y_update_0_write13_to_sbl_ln_32_rd13_cache mag_y_mag_y_update_0_write13_to_sbl_ln_32_rd13;
  mag_y_mag_y_update_0_write14_to_sbl_ln_32_rd14_cache mag_y_mag_y_update_0_write14_to_sbl_ln_32_rd14;
  mag_y_mag_y_update_0_write15_to_sbl_ln_32_rd15_cache mag_y_mag_y_update_0_write15_to_sbl_ln_32_rd15;
  mag_y_mag_y_update_0_write16_to_sbl_ln_32_rd16_cache mag_y_mag_y_update_0_write16_to_sbl_ln_32_rd16;
  mag_y_mag_y_update_0_write17_to_sbl_ln_32_rd17_cache mag_y_mag_y_update_0_write17_to_sbl_ln_32_rd17;
  mag_y_mag_y_update_0_write18_to_sbl_ln_32_rd18_cache mag_y_mag_y_update_0_write18_to_sbl_ln_32_rd18;
  mag_y_mag_y_update_0_write19_to_sbl_ln_32_rd19_cache mag_y_mag_y_update_0_write19_to_sbl_ln_32_rd19;
  mag_y_mag_y_update_0_write2_to_sbl_ln_32_rd2_cache mag_y_mag_y_update_0_write2_to_sbl_ln_32_rd2;
  mag_y_mag_y_update_0_write20_to_sbl_ln_32_rd20_cache mag_y_mag_y_update_0_write20_to_sbl_ln_32_rd20;
  mag_y_mag_y_update_0_write21_to_sbl_ln_32_rd21_cache mag_y_mag_y_update_0_write21_to_sbl_ln_32_rd21;
  mag_y_mag_y_update_0_write22_to_sbl_ln_32_rd22_cache mag_y_mag_y_update_0_write22_to_sbl_ln_32_rd22;
  mag_y_mag_y_update_0_write23_to_sbl_ln_32_rd23_cache mag_y_mag_y_update_0_write23_to_sbl_ln_32_rd23;
  mag_y_mag_y_update_0_write24_to_sbl_ln_32_rd24_cache mag_y_mag_y_update_0_write24_to_sbl_ln_32_rd24;
  mag_y_mag_y_update_0_write25_to_sbl_ln_32_rd25_cache mag_y_mag_y_update_0_write25_to_sbl_ln_32_rd25;
  mag_y_mag_y_update_0_write26_to_sbl_ln_32_rd26_cache mag_y_mag_y_update_0_write26_to_sbl_ln_32_rd26;
  mag_y_mag_y_update_0_write27_to_sbl_ln_32_rd27_cache mag_y_mag_y_update_0_write27_to_sbl_ln_32_rd27;
  mag_y_mag_y_update_0_write28_to_sbl_ln_32_rd28_cache mag_y_mag_y_update_0_write28_to_sbl_ln_32_rd28;
  mag_y_mag_y_update_0_write29_to_sbl_ln_32_rd29_cache mag_y_mag_y_update_0_write29_to_sbl_ln_32_rd29;
  mag_y_mag_y_update_0_write3_to_sbl_ln_32_rd3_cache mag_y_mag_y_update_0_write3_to_sbl_ln_32_rd3;
  mag_y_mag_y_update_0_write30_to_sbl_ln_32_rd30_cache mag_y_mag_y_update_0_write30_to_sbl_ln_32_rd30;
  mag_y_mag_y_update_0_write31_to_sbl_ln_32_rd31_cache mag_y_mag_y_update_0_write31_to_sbl_ln_32_rd31;
  mag_y_mag_y_update_0_write4_to_sbl_ln_32_rd4_cache mag_y_mag_y_update_0_write4_to_sbl_ln_32_rd4;
  mag_y_mag_y_update_0_write5_to_sbl_ln_32_rd5_cache mag_y_mag_y_update_0_write5_to_sbl_ln_32_rd5;
  mag_y_mag_y_update_0_write6_to_sbl_ln_32_rd6_cache mag_y_mag_y_update_0_write6_to_sbl_ln_32_rd6;
  mag_y_mag_y_update_0_write7_to_sbl_ln_32_rd7_cache mag_y_mag_y_update_0_write7_to_sbl_ln_32_rd7;
  mag_y_mag_y_update_0_write8_to_sbl_ln_32_rd8_cache mag_y_mag_y_update_0_write8_to_sbl_ln_32_rd8;
  mag_y_mag_y_update_0_write9_to_sbl_ln_32_rd9_cache mag_y_mag_y_update_0_write9_to_sbl_ln_32_rd9;
};



inline void mag_y_mag_y_update_0_write0_write(hw_uint<16>& mag_y_mag_y_update_0_write0, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write0_to_sbl_ln_32_rd0.push(mag_y_mag_y_update_0_write0);
}

inline void mag_y_mag_y_update_0_write1_write(hw_uint<16>& mag_y_mag_y_update_0_write1, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write1_to_sbl_ln_32_rd1.push(mag_y_mag_y_update_0_write1);
}

inline void mag_y_mag_y_update_0_write10_write(hw_uint<16>& mag_y_mag_y_update_0_write10, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write10_to_sbl_ln_32_rd10.push(mag_y_mag_y_update_0_write10);
}

inline void mag_y_mag_y_update_0_write11_write(hw_uint<16>& mag_y_mag_y_update_0_write11, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write11_to_sbl_ln_32_rd11.push(mag_y_mag_y_update_0_write11);
}

inline void mag_y_mag_y_update_0_write12_write(hw_uint<16>& mag_y_mag_y_update_0_write12, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write12_to_sbl_ln_32_rd12.push(mag_y_mag_y_update_0_write12);
}

inline void mag_y_mag_y_update_0_write13_write(hw_uint<16>& mag_y_mag_y_update_0_write13, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write13_to_sbl_ln_32_rd13.push(mag_y_mag_y_update_0_write13);
}

inline void mag_y_mag_y_update_0_write14_write(hw_uint<16>& mag_y_mag_y_update_0_write14, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write14_to_sbl_ln_32_rd14.push(mag_y_mag_y_update_0_write14);
}

inline void mag_y_mag_y_update_0_write15_write(hw_uint<16>& mag_y_mag_y_update_0_write15, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write15_to_sbl_ln_32_rd15.push(mag_y_mag_y_update_0_write15);
}

inline void mag_y_mag_y_update_0_write16_write(hw_uint<16>& mag_y_mag_y_update_0_write16, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write16_to_sbl_ln_32_rd16.push(mag_y_mag_y_update_0_write16);
}

inline void mag_y_mag_y_update_0_write17_write(hw_uint<16>& mag_y_mag_y_update_0_write17, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write17_to_sbl_ln_32_rd17.push(mag_y_mag_y_update_0_write17);
}

inline void mag_y_mag_y_update_0_write18_write(hw_uint<16>& mag_y_mag_y_update_0_write18, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write18_to_sbl_ln_32_rd18.push(mag_y_mag_y_update_0_write18);
}

inline void mag_y_mag_y_update_0_write19_write(hw_uint<16>& mag_y_mag_y_update_0_write19, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write19_to_sbl_ln_32_rd19.push(mag_y_mag_y_update_0_write19);
}

inline void mag_y_mag_y_update_0_write2_write(hw_uint<16>& mag_y_mag_y_update_0_write2, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write2_to_sbl_ln_32_rd2.push(mag_y_mag_y_update_0_write2);
}

inline void mag_y_mag_y_update_0_write20_write(hw_uint<16>& mag_y_mag_y_update_0_write20, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write20_to_sbl_ln_32_rd20.push(mag_y_mag_y_update_0_write20);
}

inline void mag_y_mag_y_update_0_write21_write(hw_uint<16>& mag_y_mag_y_update_0_write21, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write21_to_sbl_ln_32_rd21.push(mag_y_mag_y_update_0_write21);
}

inline void mag_y_mag_y_update_0_write22_write(hw_uint<16>& mag_y_mag_y_update_0_write22, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write22_to_sbl_ln_32_rd22.push(mag_y_mag_y_update_0_write22);
}

inline void mag_y_mag_y_update_0_write23_write(hw_uint<16>& mag_y_mag_y_update_0_write23, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write23_to_sbl_ln_32_rd23.push(mag_y_mag_y_update_0_write23);
}

inline void mag_y_mag_y_update_0_write24_write(hw_uint<16>& mag_y_mag_y_update_0_write24, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write24_to_sbl_ln_32_rd24.push(mag_y_mag_y_update_0_write24);
}

inline void mag_y_mag_y_update_0_write25_write(hw_uint<16>& mag_y_mag_y_update_0_write25, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write25_to_sbl_ln_32_rd25.push(mag_y_mag_y_update_0_write25);
}

inline void mag_y_mag_y_update_0_write26_write(hw_uint<16>& mag_y_mag_y_update_0_write26, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write26_to_sbl_ln_32_rd26.push(mag_y_mag_y_update_0_write26);
}

inline void mag_y_mag_y_update_0_write27_write(hw_uint<16>& mag_y_mag_y_update_0_write27, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write27_to_sbl_ln_32_rd27.push(mag_y_mag_y_update_0_write27);
}

inline void mag_y_mag_y_update_0_write28_write(hw_uint<16>& mag_y_mag_y_update_0_write28, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write28_to_sbl_ln_32_rd28.push(mag_y_mag_y_update_0_write28);
}

inline void mag_y_mag_y_update_0_write29_write(hw_uint<16>& mag_y_mag_y_update_0_write29, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write29_to_sbl_ln_32_rd29.push(mag_y_mag_y_update_0_write29);
}

inline void mag_y_mag_y_update_0_write3_write(hw_uint<16>& mag_y_mag_y_update_0_write3, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write3_to_sbl_ln_32_rd3.push(mag_y_mag_y_update_0_write3);
}

inline void mag_y_mag_y_update_0_write30_write(hw_uint<16>& mag_y_mag_y_update_0_write30, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write30_to_sbl_ln_32_rd30.push(mag_y_mag_y_update_0_write30);
}

inline void mag_y_mag_y_update_0_write31_write(hw_uint<16>& mag_y_mag_y_update_0_write31, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write31_to_sbl_ln_32_rd31.push(mag_y_mag_y_update_0_write31);
}

inline void mag_y_mag_y_update_0_write4_write(hw_uint<16>& mag_y_mag_y_update_0_write4, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write4_to_sbl_ln_32_rd4.push(mag_y_mag_y_update_0_write4);
}

inline void mag_y_mag_y_update_0_write5_write(hw_uint<16>& mag_y_mag_y_update_0_write5, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write5_to_sbl_ln_32_rd5.push(mag_y_mag_y_update_0_write5);
}

inline void mag_y_mag_y_update_0_write6_write(hw_uint<16>& mag_y_mag_y_update_0_write6, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write6_to_sbl_ln_32_rd6.push(mag_y_mag_y_update_0_write6);
}

inline void mag_y_mag_y_update_0_write7_write(hw_uint<16>& mag_y_mag_y_update_0_write7, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write7_to_sbl_ln_32_rd7.push(mag_y_mag_y_update_0_write7);
}

inline void mag_y_mag_y_update_0_write8_write(hw_uint<16>& mag_y_mag_y_update_0_write8, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write8_to_sbl_ln_32_rd8.push(mag_y_mag_y_update_0_write8);
}

inline void mag_y_mag_y_update_0_write9_write(hw_uint<16>& mag_y_mag_y_update_0_write9, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  mag_y.mag_y_mag_y_update_0_write9_to_sbl_ln_32_rd9.push(mag_y_mag_y_update_0_write9);
}

inline hw_uint<16> sbl_ln_32_rd0_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd0 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write0 = mag_y.mag_y_mag_y_update_0_write0_to_sbl_ln_32_rd0.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write0;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd1_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd1 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[1 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write1 = mag_y.mag_y_mag_y_update_0_write1_to_sbl_ln_32_rd1.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write1;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd10_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd10 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[10 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write10 = mag_y.mag_y_mag_y_update_0_write10_to_sbl_ln_32_rd10.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write10;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd11_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd11 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[11 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write11 = mag_y.mag_y_mag_y_update_0_write11_to_sbl_ln_32_rd11.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write11;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd12_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd12 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[12 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write12 = mag_y.mag_y_mag_y_update_0_write12_to_sbl_ln_32_rd12.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write12;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd13_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd13 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[13 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write13 = mag_y.mag_y_mag_y_update_0_write13_to_sbl_ln_32_rd13.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write13;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd14_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd14 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[14 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write14 = mag_y.mag_y_mag_y_update_0_write14_to_sbl_ln_32_rd14.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write14;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd15_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd15 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[15 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write15 = mag_y.mag_y_mag_y_update_0_write15_to_sbl_ln_32_rd15.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write15;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd16_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd16 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[16 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write16 = mag_y.mag_y_mag_y_update_0_write16_to_sbl_ln_32_rd16.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write16;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd17_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd17 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[17 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write17 = mag_y.mag_y_mag_y_update_0_write17_to_sbl_ln_32_rd17.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write17;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd18_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd18 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[18 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write18 = mag_y.mag_y_mag_y_update_0_write18_to_sbl_ln_32_rd18.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write18;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd19_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd19 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[19 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write19 = mag_y.mag_y_mag_y_update_0_write19_to_sbl_ln_32_rd19.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write19;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd2_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd2 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[2 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write2 = mag_y.mag_y_mag_y_update_0_write2_to_sbl_ln_32_rd2.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write2;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd20_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd20 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[20 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write20 = mag_y.mag_y_mag_y_update_0_write20_to_sbl_ln_32_rd20.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write20;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd21_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd21 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[21 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write21 = mag_y.mag_y_mag_y_update_0_write21_to_sbl_ln_32_rd21.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write21;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd22_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd22 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[22 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write22 = mag_y.mag_y_mag_y_update_0_write22_to_sbl_ln_32_rd22.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write22;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd23_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd23 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[23 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write23 = mag_y.mag_y_mag_y_update_0_write23_to_sbl_ln_32_rd23.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write23;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd24_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd24 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[24 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write24 = mag_y.mag_y_mag_y_update_0_write24_to_sbl_ln_32_rd24.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write24;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd25_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd25 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[25 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write25 = mag_y.mag_y_mag_y_update_0_write25_to_sbl_ln_32_rd25.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write25;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd26_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd26 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[26 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write26 = mag_y.mag_y_mag_y_update_0_write26_to_sbl_ln_32_rd26.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write26;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd27_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd27 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[27 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write27 = mag_y.mag_y_mag_y_update_0_write27_to_sbl_ln_32_rd27.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write27;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd28_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd28 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[28 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write28 = mag_y.mag_y_mag_y_update_0_write28_to_sbl_ln_32_rd28.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write28;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd29_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd29 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[29 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write29 = mag_y.mag_y_mag_y_update_0_write29_to_sbl_ln_32_rd29.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write29;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd3_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd3 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[3 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write3 = mag_y.mag_y_mag_y_update_0_write3_to_sbl_ln_32_rd3.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write3;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd30_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd30 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[30 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write30 = mag_y.mag_y_mag_y_update_0_write30_to_sbl_ln_32_rd30.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write30;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd31_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd31 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[31 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write31 = mag_y.mag_y_mag_y_update_0_write31_to_sbl_ln_32_rd31.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write31;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd4_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd4 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[4 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write4 = mag_y.mag_y_mag_y_update_0_write4_to_sbl_ln_32_rd4.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write4;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd5_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd5 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[5 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write5 = mag_y.mag_y_mag_y_update_0_write5_to_sbl_ln_32_rd5.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write5;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd6_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd6 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[6 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write6 = mag_y.mag_y_mag_y_update_0_write6_to_sbl_ln_32_rd6.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write6;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd7_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd7 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[7 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write7 = mag_y.mag_y_mag_y_update_0_write7_to_sbl_ln_32_rd7.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write7;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd8_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd8 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[8 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write8 = mag_y.mag_y_mag_y_update_0_write8_to_sbl_ln_32_rd8.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write8;
  return 0;
}

inline hw_uint<16> sbl_ln_32_rd9_select(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // sbl_ln_32_rd9 read pattern: { sbl_ln_32_update_0[d0, d1] -> mag_y[9 + 32d0, d1] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Read schedule : { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  // Write schedule: { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
  auto value_mag_y_mag_y_update_0_write9 = mag_y.mag_y_mag_y_update_0_write9_to_sbl_ln_32_rd9.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_update_0_write9;
  return 0;
}

// # of bundles = 2
// mag_y_update_0_write
//	mag_y_mag_y_update_0_write0
//	mag_y_mag_y_update_0_write1
//	mag_y_mag_y_update_0_write2
//	mag_y_mag_y_update_0_write3
//	mag_y_mag_y_update_0_write4
//	mag_y_mag_y_update_0_write5
//	mag_y_mag_y_update_0_write6
//	mag_y_mag_y_update_0_write7
//	mag_y_mag_y_update_0_write8
//	mag_y_mag_y_update_0_write9
//	mag_y_mag_y_update_0_write10
//	mag_y_mag_y_update_0_write11
//	mag_y_mag_y_update_0_write12
//	mag_y_mag_y_update_0_write13
//	mag_y_mag_y_update_0_write14
//	mag_y_mag_y_update_0_write15
//	mag_y_mag_y_update_0_write16
//	mag_y_mag_y_update_0_write17
//	mag_y_mag_y_update_0_write18
//	mag_y_mag_y_update_0_write19
//	mag_y_mag_y_update_0_write20
//	mag_y_mag_y_update_0_write21
//	mag_y_mag_y_update_0_write22
//	mag_y_mag_y_update_0_write23
//	mag_y_mag_y_update_0_write24
//	mag_y_mag_y_update_0_write25
//	mag_y_mag_y_update_0_write26
//	mag_y_mag_y_update_0_write27
//	mag_y_mag_y_update_0_write28
//	mag_y_mag_y_update_0_write29
//	mag_y_mag_y_update_0_write30
//	mag_y_mag_y_update_0_write31
inline void mag_y_mag_y_update_0_write_bundle_write(hw_uint<512>& mag_y_update_0_write, mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
	hw_uint<16> mag_y_mag_y_update_0_write0_res = mag_y_update_0_write.extract<0, 15>();
	mag_y_mag_y_update_0_write0_write(mag_y_mag_y_update_0_write0_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write1_res = mag_y_update_0_write.extract<16, 31>();
	mag_y_mag_y_update_0_write1_write(mag_y_mag_y_update_0_write1_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write2_res = mag_y_update_0_write.extract<32, 47>();
	mag_y_mag_y_update_0_write2_write(mag_y_mag_y_update_0_write2_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write3_res = mag_y_update_0_write.extract<48, 63>();
	mag_y_mag_y_update_0_write3_write(mag_y_mag_y_update_0_write3_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write4_res = mag_y_update_0_write.extract<64, 79>();
	mag_y_mag_y_update_0_write4_write(mag_y_mag_y_update_0_write4_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write5_res = mag_y_update_0_write.extract<80, 95>();
	mag_y_mag_y_update_0_write5_write(mag_y_mag_y_update_0_write5_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write6_res = mag_y_update_0_write.extract<96, 111>();
	mag_y_mag_y_update_0_write6_write(mag_y_mag_y_update_0_write6_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write7_res = mag_y_update_0_write.extract<112, 127>();
	mag_y_mag_y_update_0_write7_write(mag_y_mag_y_update_0_write7_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write8_res = mag_y_update_0_write.extract<128, 143>();
	mag_y_mag_y_update_0_write8_write(mag_y_mag_y_update_0_write8_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write9_res = mag_y_update_0_write.extract<144, 159>();
	mag_y_mag_y_update_0_write9_write(mag_y_mag_y_update_0_write9_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write10_res = mag_y_update_0_write.extract<160, 175>();
	mag_y_mag_y_update_0_write10_write(mag_y_mag_y_update_0_write10_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write11_res = mag_y_update_0_write.extract<176, 191>();
	mag_y_mag_y_update_0_write11_write(mag_y_mag_y_update_0_write11_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write12_res = mag_y_update_0_write.extract<192, 207>();
	mag_y_mag_y_update_0_write12_write(mag_y_mag_y_update_0_write12_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write13_res = mag_y_update_0_write.extract<208, 223>();
	mag_y_mag_y_update_0_write13_write(mag_y_mag_y_update_0_write13_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write14_res = mag_y_update_0_write.extract<224, 239>();
	mag_y_mag_y_update_0_write14_write(mag_y_mag_y_update_0_write14_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write15_res = mag_y_update_0_write.extract<240, 255>();
	mag_y_mag_y_update_0_write15_write(mag_y_mag_y_update_0_write15_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write16_res = mag_y_update_0_write.extract<256, 271>();
	mag_y_mag_y_update_0_write16_write(mag_y_mag_y_update_0_write16_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write17_res = mag_y_update_0_write.extract<272, 287>();
	mag_y_mag_y_update_0_write17_write(mag_y_mag_y_update_0_write17_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write18_res = mag_y_update_0_write.extract<288, 303>();
	mag_y_mag_y_update_0_write18_write(mag_y_mag_y_update_0_write18_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write19_res = mag_y_update_0_write.extract<304, 319>();
	mag_y_mag_y_update_0_write19_write(mag_y_mag_y_update_0_write19_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write20_res = mag_y_update_0_write.extract<320, 335>();
	mag_y_mag_y_update_0_write20_write(mag_y_mag_y_update_0_write20_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write21_res = mag_y_update_0_write.extract<336, 351>();
	mag_y_mag_y_update_0_write21_write(mag_y_mag_y_update_0_write21_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write22_res = mag_y_update_0_write.extract<352, 367>();
	mag_y_mag_y_update_0_write22_write(mag_y_mag_y_update_0_write22_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write23_res = mag_y_update_0_write.extract<368, 383>();
	mag_y_mag_y_update_0_write23_write(mag_y_mag_y_update_0_write23_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write24_res = mag_y_update_0_write.extract<384, 399>();
	mag_y_mag_y_update_0_write24_write(mag_y_mag_y_update_0_write24_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write25_res = mag_y_update_0_write.extract<400, 415>();
	mag_y_mag_y_update_0_write25_write(mag_y_mag_y_update_0_write25_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write26_res = mag_y_update_0_write.extract<416, 431>();
	mag_y_mag_y_update_0_write26_write(mag_y_mag_y_update_0_write26_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write27_res = mag_y_update_0_write.extract<432, 447>();
	mag_y_mag_y_update_0_write27_write(mag_y_mag_y_update_0_write27_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write28_res = mag_y_update_0_write.extract<448, 463>();
	mag_y_mag_y_update_0_write28_write(mag_y_mag_y_update_0_write28_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write29_res = mag_y_update_0_write.extract<464, 479>();
	mag_y_mag_y_update_0_write29_write(mag_y_mag_y_update_0_write29_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write30_res = mag_y_update_0_write.extract<480, 495>();
	mag_y_mag_y_update_0_write30_write(mag_y_mag_y_update_0_write30_res, mag_y, d0, d1, dynamic_address);
	hw_uint<16> mag_y_mag_y_update_0_write31_res = mag_y_update_0_write.extract<496, 511>();
	mag_y_mag_y_update_0_write31_write(mag_y_mag_y_update_0_write31_res, mag_y, d0, d1, dynamic_address);
}

// sbl_ln_32_update_0_read
//	sbl_ln_32_rd0
//	sbl_ln_32_rd1
//	sbl_ln_32_rd2
//	sbl_ln_32_rd3
//	sbl_ln_32_rd4
//	sbl_ln_32_rd5
//	sbl_ln_32_rd6
//	sbl_ln_32_rd7
//	sbl_ln_32_rd8
//	sbl_ln_32_rd9
//	sbl_ln_32_rd10
//	sbl_ln_32_rd11
//	sbl_ln_32_rd12
//	sbl_ln_32_rd13
//	sbl_ln_32_rd14
//	sbl_ln_32_rd15
//	sbl_ln_32_rd16
//	sbl_ln_32_rd17
//	sbl_ln_32_rd18
//	sbl_ln_32_rd19
//	sbl_ln_32_rd20
//	sbl_ln_32_rd21
//	sbl_ln_32_rd22
//	sbl_ln_32_rd23
//	sbl_ln_32_rd24
//	sbl_ln_32_rd25
//	sbl_ln_32_rd26
//	sbl_ln_32_rd27
//	sbl_ln_32_rd28
//	sbl_ln_32_rd29
//	sbl_ln_32_rd30
//	sbl_ln_32_rd31
inline hw_uint<512> mag_y_sbl_ln_32_update_0_read_bundle_read(mag_y_cache& mag_y, int d0, int d1, int dynamic_address) {
  // # of ports in bundle: 32
    // sbl_ln_32_rd0
    // sbl_ln_32_rd1
    // sbl_ln_32_rd2
    // sbl_ln_32_rd3
    // sbl_ln_32_rd4
    // sbl_ln_32_rd5
    // sbl_ln_32_rd6
    // sbl_ln_32_rd7
    // sbl_ln_32_rd8
    // sbl_ln_32_rd9
    // sbl_ln_32_rd10
    // sbl_ln_32_rd11
    // sbl_ln_32_rd12
    // sbl_ln_32_rd13
    // sbl_ln_32_rd14
    // sbl_ln_32_rd15
    // sbl_ln_32_rd16
    // sbl_ln_32_rd17
    // sbl_ln_32_rd18
    // sbl_ln_32_rd19
    // sbl_ln_32_rd20
    // sbl_ln_32_rd21
    // sbl_ln_32_rd22
    // sbl_ln_32_rd23
    // sbl_ln_32_rd24
    // sbl_ln_32_rd25
    // sbl_ln_32_rd26
    // sbl_ln_32_rd27
    // sbl_ln_32_rd28
    // sbl_ln_32_rd29
    // sbl_ln_32_rd30
    // sbl_ln_32_rd31

	hw_uint<512> result;
	hw_uint<16> sbl_ln_32_rd0_res = sbl_ln_32_rd0_select(mag_y, d0, d1, dynamic_address);
	set_at<0, 512>(result, sbl_ln_32_rd0_res);
	hw_uint<16> sbl_ln_32_rd1_res = sbl_ln_32_rd1_select(mag_y, d0, d1, dynamic_address);
	set_at<16, 512>(result, sbl_ln_32_rd1_res);
	hw_uint<16> sbl_ln_32_rd2_res = sbl_ln_32_rd2_select(mag_y, d0, d1, dynamic_address);
	set_at<32, 512>(result, sbl_ln_32_rd2_res);
	hw_uint<16> sbl_ln_32_rd3_res = sbl_ln_32_rd3_select(mag_y, d0, d1, dynamic_address);
	set_at<48, 512>(result, sbl_ln_32_rd3_res);
	hw_uint<16> sbl_ln_32_rd4_res = sbl_ln_32_rd4_select(mag_y, d0, d1, dynamic_address);
	set_at<64, 512>(result, sbl_ln_32_rd4_res);
	hw_uint<16> sbl_ln_32_rd5_res = sbl_ln_32_rd5_select(mag_y, d0, d1, dynamic_address);
	set_at<80, 512>(result, sbl_ln_32_rd5_res);
	hw_uint<16> sbl_ln_32_rd6_res = sbl_ln_32_rd6_select(mag_y, d0, d1, dynamic_address);
	set_at<96, 512>(result, sbl_ln_32_rd6_res);
	hw_uint<16> sbl_ln_32_rd7_res = sbl_ln_32_rd7_select(mag_y, d0, d1, dynamic_address);
	set_at<112, 512>(result, sbl_ln_32_rd7_res);
	hw_uint<16> sbl_ln_32_rd8_res = sbl_ln_32_rd8_select(mag_y, d0, d1, dynamic_address);
	set_at<128, 512>(result, sbl_ln_32_rd8_res);
	hw_uint<16> sbl_ln_32_rd9_res = sbl_ln_32_rd9_select(mag_y, d0, d1, dynamic_address);
	set_at<144, 512>(result, sbl_ln_32_rd9_res);
	hw_uint<16> sbl_ln_32_rd10_res = sbl_ln_32_rd10_select(mag_y, d0, d1, dynamic_address);
	set_at<160, 512>(result, sbl_ln_32_rd10_res);
	hw_uint<16> sbl_ln_32_rd11_res = sbl_ln_32_rd11_select(mag_y, d0, d1, dynamic_address);
	set_at<176, 512>(result, sbl_ln_32_rd11_res);
	hw_uint<16> sbl_ln_32_rd12_res = sbl_ln_32_rd12_select(mag_y, d0, d1, dynamic_address);
	set_at<192, 512>(result, sbl_ln_32_rd12_res);
	hw_uint<16> sbl_ln_32_rd13_res = sbl_ln_32_rd13_select(mag_y, d0, d1, dynamic_address);
	set_at<208, 512>(result, sbl_ln_32_rd13_res);
	hw_uint<16> sbl_ln_32_rd14_res = sbl_ln_32_rd14_select(mag_y, d0, d1, dynamic_address);
	set_at<224, 512>(result, sbl_ln_32_rd14_res);
	hw_uint<16> sbl_ln_32_rd15_res = sbl_ln_32_rd15_select(mag_y, d0, d1, dynamic_address);
	set_at<240, 512>(result, sbl_ln_32_rd15_res);
	hw_uint<16> sbl_ln_32_rd16_res = sbl_ln_32_rd16_select(mag_y, d0, d1, dynamic_address);
	set_at<256, 512>(result, sbl_ln_32_rd16_res);
	hw_uint<16> sbl_ln_32_rd17_res = sbl_ln_32_rd17_select(mag_y, d0, d1, dynamic_address);
	set_at<272, 512>(result, sbl_ln_32_rd17_res);
	hw_uint<16> sbl_ln_32_rd18_res = sbl_ln_32_rd18_select(mag_y, d0, d1, dynamic_address);
	set_at<288, 512>(result, sbl_ln_32_rd18_res);
	hw_uint<16> sbl_ln_32_rd19_res = sbl_ln_32_rd19_select(mag_y, d0, d1, dynamic_address);
	set_at<304, 512>(result, sbl_ln_32_rd19_res);
	hw_uint<16> sbl_ln_32_rd20_res = sbl_ln_32_rd20_select(mag_y, d0, d1, dynamic_address);
	set_at<320, 512>(result, sbl_ln_32_rd20_res);
	hw_uint<16> sbl_ln_32_rd21_res = sbl_ln_32_rd21_select(mag_y, d0, d1, dynamic_address);
	set_at<336, 512>(result, sbl_ln_32_rd21_res);
	hw_uint<16> sbl_ln_32_rd22_res = sbl_ln_32_rd22_select(mag_y, d0, d1, dynamic_address);
	set_at<352, 512>(result, sbl_ln_32_rd22_res);
	hw_uint<16> sbl_ln_32_rd23_res = sbl_ln_32_rd23_select(mag_y, d0, d1, dynamic_address);
	set_at<368, 512>(result, sbl_ln_32_rd23_res);
	hw_uint<16> sbl_ln_32_rd24_res = sbl_ln_32_rd24_select(mag_y, d0, d1, dynamic_address);
	set_at<384, 512>(result, sbl_ln_32_rd24_res);
	hw_uint<16> sbl_ln_32_rd25_res = sbl_ln_32_rd25_select(mag_y, d0, d1, dynamic_address);
	set_at<400, 512>(result, sbl_ln_32_rd25_res);
	hw_uint<16> sbl_ln_32_rd26_res = sbl_ln_32_rd26_select(mag_y, d0, d1, dynamic_address);
	set_at<416, 512>(result, sbl_ln_32_rd26_res);
	hw_uint<16> sbl_ln_32_rd27_res = sbl_ln_32_rd27_select(mag_y, d0, d1, dynamic_address);
	set_at<432, 512>(result, sbl_ln_32_rd27_res);
	hw_uint<16> sbl_ln_32_rd28_res = sbl_ln_32_rd28_select(mag_y, d0, d1, dynamic_address);
	set_at<448, 512>(result, sbl_ln_32_rd28_res);
	hw_uint<16> sbl_ln_32_rd29_res = sbl_ln_32_rd29_select(mag_y, d0, d1, dynamic_address);
	set_at<464, 512>(result, sbl_ln_32_rd29_res);
	hw_uint<16> sbl_ln_32_rd30_res = sbl_ln_32_rd30_select(mag_y, d0, d1, dynamic_address);
	set_at<480, 512>(result, sbl_ln_32_rd30_res);
	hw_uint<16> sbl_ln_32_rd31_res = sbl_ln_32_rd31_select(mag_y, d0, d1, dynamic_address);
	set_at<496, 512>(result, sbl_ln_32_rd31_res);
	return result;
}

// Total re-use buffer capacity: 64016 bits


// Operation logic
inline void img_update_0(HWStream<hw_uint<512> >& /* buffer_args num ports = 32 */off_chip_img, img_cache& img, int d0, int d1) {
  // Dynamic address computation

	// Consume: off_chip_img
	auto off_chip_img_0_c__0_value = off_chip_img.read();
	auto compute_result = img_generated_compute_unrolled_32(off_chip_img_0_c__0_value);
	// Produce: img
	img_img_update_0_write_bundle_write(/* arg names */compute_result, img, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void mag_y_update_0(img_cache& img, mag_y_cache& mag_y, int d0, int d1) {
  // Dynamic address computation

	// Consume: img
	auto img_0_c__0_value = img_mag_y_update_0_read_bundle_read(img/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = mag_y_generated_compute_unrolled_32(img_0_c__0_value);
	// Produce: mag_y
	mag_y_mag_y_update_0_write_bundle_write(/* arg names */compute_result, mag_y, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void sbl_ln_32_update_0(mag_x_cache& mag_x, mag_y_cache& mag_y, HWStream<hw_uint<512> >& /* buffer_args num ports = 32 */sbl_ln_32, int d0, int d1) {
  // Dynamic address computation

	// Consume: mag_x
	auto mag_x_0_c__0_value = mag_x_sbl_ln_32_update_0_read_bundle_read(mag_x/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: mag_y
	auto mag_y_0_c__0_value = mag_y_sbl_ln_32_update_0_read_bundle_read(mag_y/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = sbl_ln_32_generated_compute_unrolled_32(mag_x_0_c__0_value, mag_y_0_c__0_value);
	// Produce: sbl_ln_32
	sbl_ln_32.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void mag_x_update_0(img_cache& img, mag_x_cache& mag_x, int d0, int d1) {
  // Dynamic address computation

	// Consume: img
	auto img_0_c__0_value = img_mag_x_update_0_read_bundle_read(img/* source_delay */, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = mag_x_generated_compute_unrolled_32(img_0_c__0_value);
	// Produce: mag_x
	mag_x_mag_x_update_0_write_bundle_write(/* arg names */compute_result, mag_x, d0, d1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void sbl_ln_32_opt(HWStream<hw_uint<512> >& /* get_args num ports = 32 */off_chip_img, HWStream<hw_uint<512> >& /* get_args num ports = 32 */sbl_ln_32) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("sbl_ln_32_opt_debug.csv");
  global_debug_handle = &debug_file;
#endif //__VIVADO_SYNTH__
  img_cache img;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  mag_x_cache mag_x;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  mag_y_cache mag_y;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
#ifdef __VIVADO_SYNTH__
#pragma HLS inline recursive
#endif // __VIVADO_SYNTH__

// schedule: { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080; mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079; sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079; mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
//   { img_update_0[d0, d1] -> [d1, d0, 1] : -1 <= d0 <= 60 and -1 <= d1 <= 1080 }
// Condition for img_update_0(((-1 + i2 == 0) && (1 + i1 >= 0) && (60 - i1 >= 0) && (1 + i0 >= 0) && (1080 - i0 >= 0)))
//   { mag_y_update_0[d0, d1] -> [1 + d1, 1 + d0, 2] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
// Condition for mag_y_update_0(((-2 + i2 == 0) && (-1 + i1 >= 0) && (60 - i1 >= 0) && (-1 + i0 >= 0) && (1080 - i0 >= 0)))
//   { sbl_ln_32_update_0[d0, d1] -> [1 + d1, 1 + d0, 4] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
// Condition for sbl_ln_32_update_0(((-4 + i2 == 0) && (-1 + i1 >= 0) && (60 - i1 >= 0) && (-1 + i0 >= 0) && (1080 - i0 >= 0)))
//   { mag_x_update_0[d0, d1] -> [1 + d1, 1 + d0, 3] : 0 <= d0 <= 59 and 0 <= d1 <= 1079 }
// Condition for mag_x_update_0(((-3 + i2 == 0) && (-1 + i1 >= 0) && (60 - i1 >= 0) && (-1 + i0 >= 0) && (1080 - i0 >= 0)))

  /*
  // Schedules...
    // img_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
    // mag_x_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*3]
    // mag_y_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
    // off_chip_img_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
    // sbl_ln_32_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*4]
for (int c0 = -1; c0 <= 1080; c0++) {
  for (int c1 = -1; c1 <= 60; c1++) {

#ifdef __VIVADO_SYNTH__
#pragma HLS pipeline II=1
#endif // __VIVADO_SYNTH__

    if ((-1 <= c1 && c1 <= 60) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 1080) && ((c0 - 0) % 1 == 0)) {
      img_update_0((c1 - 0) / 1, (c0 - 0) / 1);
    }

    if ((1 <= c1 && c1 <= 60) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1080) && ((c0 - 1) % 1 == 0)) {
      mag_y_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((1 <= c1 && c1 <= 60) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1080) && ((c0 - 1) % 1 == 0)) {
      mag_x_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

    if ((1 <= c1 && c1 <= 60) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1080) && ((c0 - 1) % 1 == 0)) {
      sbl_ln_32_update_0((c1 - 1) / 1, (c0 - 1) / 1);
    }

  }
}

  */
	  // Schedules...
	    // img_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*1]
	    // mag_x_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*3]
	    // mag_y_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*2]
	    // off_chip_img_update_0 -> [1*d1*1*1 + 1*0,1*d0*1*1 + 1*0,1*0]
	    // sbl_ln_32_update_0 -> [1*d1*1*1 + 1*1,1*d0*1*1 + 1*1,1*4]
	for (int c0 = -1; c0 <= 1080; c0++) {
	  for (int c1 = -1; c1 <= 60; c1++) {
	
	#ifdef __VIVADO_SYNTH__
	#pragma HLS pipeline II=1
	#endif // __VIVADO_SYNTH__
	
	    if ((-1 <= c1 && c1 <= 60) && ((c1 - 0) % 1 == 0) && (-1 <= c0 && c0 <= 1080) && ((c0 - 0) % 1 == 0)) {
	      img_update_0(off_chip_img /* buf name */, img, (c1 - 0) / 1, (c0 - 0) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 60) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1080) && ((c0 - 1) % 1 == 0)) {
	      mag_y_update_0(img /* buf name */, mag_y, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 60) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1080) && ((c0 - 1) % 1 == 0)) {
	      mag_x_update_0(img /* buf name */, mag_x, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	    if ((1 <= c1 && c1 <= 60) && ((c1 - 1) % 1 == 0) && (1 <= c0 && c0 <= 1080) && ((c0 - 1) % 1 == 0)) {
	      sbl_ln_32_update_0(mag_x /* buf name */, mag_y /* buf name */, sbl_ln_32, (c1 - 1) / 1, (c0 - 1) / 1);
	    }
	
	  }
	}
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void sbl_ln_32_opt_wrapper(HWStream<hw_uint<512> >& /* get_args num ports = 32 */off_chip_img, HWStream<hw_uint<512> >& /* get_args num ports = 32 */sbl_ln_32, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    sbl_ln_32_opt(off_chip_img, sbl_ln_32);
  }
}
#ifdef __VIVADO_SYNTH__
  // { img_update_0[root = 0, img_0, img_1] -> off_chip_img[0, 0] : -1 <= img_0 <= 60 and -1 <= img_1 <= 1080 }
const int img_update_0_read_pipe0_num_transfers = 67084;
  // { sbl_ln_32_update_0[root = 0, sbl_ln_32_0, sbl_ln_32_1] -> sbl_ln_32[0, 0] : 0 <= sbl_ln_32_0 <= 59 and 0 <= sbl_ln_32_1 <= 1079 }
const int sbl_ln_32_update_0_write_pipe0_num_transfers = 64800;


extern "C" {

void sbl_ln_32_opt_accel(hw_uint<512>* img_update_0_read_pipe0, hw_uint<512>* sbl_ln_32_update_0_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = img_update_0_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = sbl_ln_32_update_0_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = img_update_0_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = sbl_ln_32_update_0_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<512> > img_update_0_read_pipe0_channel;
  static HWStream<hw_uint<512> > sbl_ln_32_update_0_write_pipe0_channel;

  burst_read<512>(img_update_0_read_pipe0, img_update_0_read_pipe0_channel, img_update_0_read_pipe0_num_transfers*30);

  sbl_ln_32_opt_wrapper(img_update_0_read_pipe0_channel, sbl_ln_32_update_0_write_pipe0_channel, size);

  burst_write<512>(sbl_ln_32_update_0_write_pipe0, sbl_ln_32_update_0_write_pipe0_channel, sbl_ln_32_update_0_write_pipe0_num_transfers*30);
}

}
extern "C" {

void sbl_ln_32_opt_rdai(HWStream<hw_uint<512> >& img_update_0_read_pipe0, HWStream<hw_uint<512> >&  sbl_ln_32_update_0_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = img_update_0_read_pipe0
#pragma HLS INTERFACE axis register port = sbl_ln_32_update_0_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  sbl_ln_32_opt(img_update_0_read_pipe0, sbl_ln_32_update_0_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

