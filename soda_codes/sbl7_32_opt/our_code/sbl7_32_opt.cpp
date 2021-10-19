#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: sbl7_32_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "sbl7_32_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct img_img_1_merged265_544_merged_banks_12_cache {
	// RAM Box: {[0, 1920], [0, 1081]}
	// Capacity: 124
	// # of read delays: 6
  // 0, 1, 61, 62, 122, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 59> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 59> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_61() {
		return f4;
	}

	inline hw_uint<16> peek_62() {
		return f6;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_122() {
		return f8;
	}

	inline hw_uint<16> peek_123() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 59
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 59 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 59
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 59 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct img_img_1_merged265_545_merged_banks_12_cache {
	// RAM Box: {[1, 1921], [0, 1081]}
	// Capacity: 124
	// # of read delays: 6
  // 0, 1, 61, 62, 122, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 59> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 59> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_60() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_61() {
		return f4;
	}

	inline hw_uint<16> peek_62() {
		return f6;
	}

	inline hw_uint<16> peek_121() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_122() {
		return f8;
	}

	inline hw_uint<16> peek_123() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 59
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 59 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 59
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 59 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct img_img_1_merged265_546_merged_banks_12_cache {
	// RAM Box: {[2, 1890], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_547_merged_banks_12_cache {
	// RAM Box: {[3, 1891], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_548_merged_banks_12_cache {
	// RAM Box: {[4, 1892], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_549_merged_banks_12_cache {
	// RAM Box: {[5, 1893], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_550_merged_banks_12_cache {
	// RAM Box: {[6, 1894], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_551_merged_banks_12_cache {
	// RAM Box: {[7, 1895], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_552_merged_banks_12_cache {
	// RAM Box: {[8, 1896], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_553_merged_banks_12_cache {
	// RAM Box: {[9, 1897], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_554_merged_banks_12_cache {
	// RAM Box: {[10, 1898], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_555_merged_banks_12_cache {
	// RAM Box: {[11, 1899], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_556_merged_banks_12_cache {
	// RAM Box: {[12, 1900], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_557_merged_banks_12_cache {
	// RAM Box: {[13, 1901], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_558_merged_banks_12_cache {
	// RAM Box: {[14, 1902], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_559_merged_banks_12_cache {
	// RAM Box: {[15, 1903], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_560_merged_banks_12_cache {
	// RAM Box: {[16, 1904], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_561_merged_banks_12_cache {
	// RAM Box: {[17, 1905], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_562_merged_banks_12_cache {
	// RAM Box: {[18, 1906], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_563_merged_banks_12_cache {
	// RAM Box: {[19, 1907], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_564_merged_banks_12_cache {
	// RAM Box: {[20, 1908], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_565_merged_banks_12_cache {
	// RAM Box: {[21, 1909], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_566_merged_banks_12_cache {
	// RAM Box: {[22, 1910], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_567_merged_banks_12_cache {
	// RAM Box: {[23, 1911], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_568_merged_banks_12_cache {
	// RAM Box: {[24, 1912], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_569_merged_banks_12_cache {
	// RAM Box: {[25, 1913], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_570_merged_banks_12_cache {
	// RAM Box: {[26, 1914], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_571_merged_banks_12_cache {
	// RAM Box: {[27, 1915], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_572_merged_banks_12_cache {
	// RAM Box: {[28, 1916], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_573_merged_banks_12_cache {
	// RAM Box: {[29, 1917], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_574_merged_banks_12_cache {
	// RAM Box: {[30, 1918], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged265_575_merged_banks_12_cache {
	// RAM Box: {[31, 1919], [0, 1081]}
	// Capacity: 124
	// # of read delays: 4
  // 0, 1, 62, 123
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 60> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 60> f5;
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

	inline hw_uint<16> peek_122() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_123() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_cache {
  // Reader addrs...
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[2 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[2 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[2 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[1 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[1 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[1 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[3 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[3 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[3 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[2 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[2 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[2 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[4 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[4 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[4 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[3 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[3 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[3 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[5 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[5 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[5 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[4 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[4 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[4 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[6 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[6 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[6 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[5 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[5 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[5 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[7 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[7 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[7 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[6 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[6 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[6 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[8 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[8 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[8 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[7 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[7 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[7 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[9 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[9 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[9 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[8 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[8 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[8 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[10 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[10 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[10 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[9 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[9 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[9 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[11 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[11 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[11 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[10 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[10 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[10 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[12 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[12 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[12 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[11 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[11 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[11 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[13 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[13 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[13 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[12 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[12 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[12 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[14 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[14 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[14 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[13 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[13 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[13 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[15 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[15 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[15 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[14 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[14 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[14 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[16 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[16 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[16 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[15 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[15 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[15 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[17 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[17 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[17 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[16 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[16 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[16 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[18 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[18 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[18 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[17 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[17 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[17 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[19 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[19 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[19 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[18 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[18 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[18 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[20 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[20 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[20 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[19 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[19 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[19 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[21 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[21 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[21 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[20 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[20 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[20 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[22 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[22 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[22 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[21 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[21 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[21 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[23 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[23 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[23 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[22 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[22 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[22 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[24 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[24 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[24 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[23 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[23 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[23 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[25 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[25 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[25 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[24 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[24 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[24 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[26 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[26 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[26 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[25 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[25 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[25 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[27 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[27 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[27 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[26 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[26 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[26 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[28 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[28 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[28 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[27 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[27 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[27 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[29 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[29 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[29 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[28 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[28 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[28 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[30 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[30 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[30 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[29 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[29 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[29 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[31 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[31 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[31 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[30 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[30 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[30 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[32 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[32 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[32 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[31 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[31 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[31 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[33 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[33 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[33 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[1 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[1 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[2 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[2 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[1 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[1 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[2 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[2 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[3 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[3 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[2 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[2 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[3 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[3 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[4 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[4 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[3 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[3 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[4 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[4 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[5 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[5 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[4 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[4 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[5 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[5 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[6 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[6 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[5 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[5 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[6 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[6 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[7 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[7 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[6 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[6 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[7 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[7 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[8 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[8 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[7 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[7 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[8 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[8 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[9 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[9 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[8 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[8 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[9 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[9 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[10 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[10 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[9 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[9 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[10 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[10 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[11 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[11 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[10 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[10 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[11 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[11 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[12 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[12 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[11 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[11 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[12 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[12 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[13 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[13 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[12 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[12 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[13 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[13 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[14 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[14 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[13 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[13 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[14 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[14 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[15 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[15 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[14 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[14 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[15 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[15 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[16 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[16 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[15 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[15 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[16 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[16 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[17 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[17 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[16 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[16 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[17 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[17 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[18 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[18 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[17 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[17 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[18 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[18 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[19 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[19 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[18 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[18 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[19 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[19 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[20 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[20 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[19 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[19 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[20 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[20 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[21 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[21 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[20 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[20 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[21 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[21 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[22 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[22 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[21 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[21 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[22 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[22 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[23 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[23 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[22 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[22 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[23 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[23 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[24 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[24 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[23 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[23 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[24 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[24 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[25 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[25 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[24 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[24 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[25 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[25 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[26 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[26 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[25 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[25 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[26 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[26 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[27 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[27 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[26 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[26 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[27 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[27 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[28 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[28 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[27 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[27 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[28 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[28 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[29 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[29 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[28 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[28 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[29 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[29 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[30 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[30 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[29 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[29 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[30 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[30 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[31 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[31 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[30 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[30 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[31 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[31 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[32 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[32 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[31 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[31 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[32 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[32 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[33 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
    // { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[33 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // # of banks: 32
  img_img_1_merged265_544_merged_banks_12_cache img_img_1_merged265_544_merged_banks_12;
  img_img_1_merged265_545_merged_banks_12_cache img_img_1_merged265_545_merged_banks_12;
  img_img_1_merged265_546_merged_banks_12_cache img_img_1_merged265_546_merged_banks_12;
  img_img_1_merged265_547_merged_banks_12_cache img_img_1_merged265_547_merged_banks_12;
  img_img_1_merged265_548_merged_banks_12_cache img_img_1_merged265_548_merged_banks_12;
  img_img_1_merged265_549_merged_banks_12_cache img_img_1_merged265_549_merged_banks_12;
  img_img_1_merged265_550_merged_banks_12_cache img_img_1_merged265_550_merged_banks_12;
  img_img_1_merged265_551_merged_banks_12_cache img_img_1_merged265_551_merged_banks_12;
  img_img_1_merged265_552_merged_banks_12_cache img_img_1_merged265_552_merged_banks_12;
  img_img_1_merged265_553_merged_banks_12_cache img_img_1_merged265_553_merged_banks_12;
  img_img_1_merged265_554_merged_banks_12_cache img_img_1_merged265_554_merged_banks_12;
  img_img_1_merged265_555_merged_banks_12_cache img_img_1_merged265_555_merged_banks_12;
  img_img_1_merged265_556_merged_banks_12_cache img_img_1_merged265_556_merged_banks_12;
  img_img_1_merged265_557_merged_banks_12_cache img_img_1_merged265_557_merged_banks_12;
  img_img_1_merged265_558_merged_banks_12_cache img_img_1_merged265_558_merged_banks_12;
  img_img_1_merged265_559_merged_banks_12_cache img_img_1_merged265_559_merged_banks_12;
  img_img_1_merged265_560_merged_banks_12_cache img_img_1_merged265_560_merged_banks_12;
  img_img_1_merged265_561_merged_banks_12_cache img_img_1_merged265_561_merged_banks_12;
  img_img_1_merged265_562_merged_banks_12_cache img_img_1_merged265_562_merged_banks_12;
  img_img_1_merged265_563_merged_banks_12_cache img_img_1_merged265_563_merged_banks_12;
  img_img_1_merged265_564_merged_banks_12_cache img_img_1_merged265_564_merged_banks_12;
  img_img_1_merged265_565_merged_banks_12_cache img_img_1_merged265_565_merged_banks_12;
  img_img_1_merged265_566_merged_banks_12_cache img_img_1_merged265_566_merged_banks_12;
  img_img_1_merged265_567_merged_banks_12_cache img_img_1_merged265_567_merged_banks_12;
  img_img_1_merged265_568_merged_banks_12_cache img_img_1_merged265_568_merged_banks_12;
  img_img_1_merged265_569_merged_banks_12_cache img_img_1_merged265_569_merged_banks_12;
  img_img_1_merged265_570_merged_banks_12_cache img_img_1_merged265_570_merged_banks_12;
  img_img_1_merged265_571_merged_banks_12_cache img_img_1_merged265_571_merged_banks_12;
  img_img_1_merged265_572_merged_banks_12_cache img_img_1_merged265_572_merged_banks_12;
  img_img_1_merged265_573_merged_banks_12_cache img_img_1_merged265_573_merged_banks_12;
  img_img_1_merged265_574_merged_banks_12_cache img_img_1_merged265_574_merged_banks_12;
  img_img_1_merged265_575_merged_banks_12_cache img_img_1_merged265_575_merged_banks_12;
};



inline void img_img_1_merged265_544_write(hw_uint<16>& img_img_1_merged265_544, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_544_merged_banks_12.push(img_img_1_merged265_544);
}

inline void img_img_1_merged265_545_write(hw_uint<16>& img_img_1_merged265_545, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_545_merged_banks_12.push(img_img_1_merged265_545);
}

inline void img_img_1_merged265_546_write(hw_uint<16>& img_img_1_merged265_546, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_546_merged_banks_12.push(img_img_1_merged265_546);
}

inline void img_img_1_merged265_547_write(hw_uint<16>& img_img_1_merged265_547, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_547_merged_banks_12.push(img_img_1_merged265_547);
}

inline void img_img_1_merged265_548_write(hw_uint<16>& img_img_1_merged265_548, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_548_merged_banks_12.push(img_img_1_merged265_548);
}

inline void img_img_1_merged265_549_write(hw_uint<16>& img_img_1_merged265_549, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_549_merged_banks_12.push(img_img_1_merged265_549);
}

inline void img_img_1_merged265_550_write(hw_uint<16>& img_img_1_merged265_550, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_550_merged_banks_12.push(img_img_1_merged265_550);
}

inline void img_img_1_merged265_551_write(hw_uint<16>& img_img_1_merged265_551, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_551_merged_banks_12.push(img_img_1_merged265_551);
}

inline void img_img_1_merged265_552_write(hw_uint<16>& img_img_1_merged265_552, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_552_merged_banks_12.push(img_img_1_merged265_552);
}

inline void img_img_1_merged265_553_write(hw_uint<16>& img_img_1_merged265_553, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_553_merged_banks_12.push(img_img_1_merged265_553);
}

inline void img_img_1_merged265_554_write(hw_uint<16>& img_img_1_merged265_554, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_554_merged_banks_12.push(img_img_1_merged265_554);
}

inline void img_img_1_merged265_555_write(hw_uint<16>& img_img_1_merged265_555, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_555_merged_banks_12.push(img_img_1_merged265_555);
}

inline void img_img_1_merged265_556_write(hw_uint<16>& img_img_1_merged265_556, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_556_merged_banks_12.push(img_img_1_merged265_556);
}

inline void img_img_1_merged265_557_write(hw_uint<16>& img_img_1_merged265_557, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_557_merged_banks_12.push(img_img_1_merged265_557);
}

inline void img_img_1_merged265_558_write(hw_uint<16>& img_img_1_merged265_558, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_558_merged_banks_12.push(img_img_1_merged265_558);
}

inline void img_img_1_merged265_559_write(hw_uint<16>& img_img_1_merged265_559, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_559_merged_banks_12.push(img_img_1_merged265_559);
}

inline void img_img_1_merged265_560_write(hw_uint<16>& img_img_1_merged265_560, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_560_merged_banks_12.push(img_img_1_merged265_560);
}

inline void img_img_1_merged265_561_write(hw_uint<16>& img_img_1_merged265_561, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_561_merged_banks_12.push(img_img_1_merged265_561);
}

inline void img_img_1_merged265_562_write(hw_uint<16>& img_img_1_merged265_562, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_562_merged_banks_12.push(img_img_1_merged265_562);
}

inline void img_img_1_merged265_563_write(hw_uint<16>& img_img_1_merged265_563, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_563_merged_banks_12.push(img_img_1_merged265_563);
}

inline void img_img_1_merged265_564_write(hw_uint<16>& img_img_1_merged265_564, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_564_merged_banks_12.push(img_img_1_merged265_564);
}

inline void img_img_1_merged265_565_write(hw_uint<16>& img_img_1_merged265_565, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_565_merged_banks_12.push(img_img_1_merged265_565);
}

inline void img_img_1_merged265_566_write(hw_uint<16>& img_img_1_merged265_566, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_566_merged_banks_12.push(img_img_1_merged265_566);
}

inline void img_img_1_merged265_567_write(hw_uint<16>& img_img_1_merged265_567, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_567_merged_banks_12.push(img_img_1_merged265_567);
}

inline void img_img_1_merged265_568_write(hw_uint<16>& img_img_1_merged265_568, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_568_merged_banks_12.push(img_img_1_merged265_568);
}

inline void img_img_1_merged265_569_write(hw_uint<16>& img_img_1_merged265_569, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_569_merged_banks_12.push(img_img_1_merged265_569);
}

inline void img_img_1_merged265_570_write(hw_uint<16>& img_img_1_merged265_570, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_570_merged_banks_12.push(img_img_1_merged265_570);
}

inline void img_img_1_merged265_571_write(hw_uint<16>& img_img_1_merged265_571, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_571_merged_banks_12.push(img_img_1_merged265_571);
}

inline void img_img_1_merged265_572_write(hw_uint<16>& img_img_1_merged265_572, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_572_merged_banks_12.push(img_img_1_merged265_572);
}

inline void img_img_1_merged265_573_write(hw_uint<16>& img_img_1_merged265_573, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_573_merged_banks_12.push(img_img_1_merged265_573);
}

inline void img_img_1_merged265_574_write(hw_uint<16>& img_img_1_merged265_574, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_574_merged_banks_12.push(img_img_1_merged265_574);
}

inline void img_img_1_merged265_575_write(hw_uint<16>& img_img_1_merged265_575, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged265_575_merged_banks_12.push(img_img_1_merged265_575);
}

inline hw_uint<16> img_mag_x_1_merged268_352_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_352 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_544 = img.img_img_1_merged265_544_merged_banks_12.peek_123();
  return value_img_img_1_merged265_544;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_353_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_353 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_544 = img.img_img_1_merged265_544_merged_banks_12.peek_62();
  return value_img_img_1_merged265_544;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_354_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_354 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_544 = img.img_img_1_merged265_544_merged_banks_12.peek_1();
  return value_img_img_1_merged265_544;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_355_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_355 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[2 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_546 = img.img_img_1_merged265_546_merged_banks_12.peek_123();
  return value_img_img_1_merged265_546;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_356_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_356 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[2 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_546 = img.img_img_1_merged265_546_merged_banks_12.peek_62();
  return value_img_img_1_merged265_546;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_357_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_357 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[2 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_546 = img.img_img_1_merged265_546_merged_banks_12.peek_1();
  return value_img_img_1_merged265_546;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_358_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_358 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[1 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_545 = img.img_img_1_merged265_545_merged_banks_12.peek_123();
  return value_img_img_1_merged265_545;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_359_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_359 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[1 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_545 = img.img_img_1_merged265_545_merged_banks_12.peek_62();
  return value_img_img_1_merged265_545;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_360_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_360 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[1 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_545 = img.img_img_1_merged265_545_merged_banks_12.peek_1();
  return value_img_img_1_merged265_545;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_361_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_361 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[3 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_547 = img.img_img_1_merged265_547_merged_banks_12.peek_123();
  return value_img_img_1_merged265_547;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_362_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_362 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[3 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_547 = img.img_img_1_merged265_547_merged_banks_12.peek_62();
  return value_img_img_1_merged265_547;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_363_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_363 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[3 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_547 = img.img_img_1_merged265_547_merged_banks_12.peek_1();
  return value_img_img_1_merged265_547;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_364_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_364 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[2 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_546 = img.img_img_1_merged265_546_merged_banks_12.peek_123();
  return value_img_img_1_merged265_546;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_365_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_365 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[2 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_546 = img.img_img_1_merged265_546_merged_banks_12.peek_62();
  return value_img_img_1_merged265_546;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_366_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_366 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[2 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_546 = img.img_img_1_merged265_546_merged_banks_12.peek_1();
  return value_img_img_1_merged265_546;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_367_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_367 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[4 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_548 = img.img_img_1_merged265_548_merged_banks_12.peek_123();
  return value_img_img_1_merged265_548;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_368_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_368 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[4 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_548 = img.img_img_1_merged265_548_merged_banks_12.peek_62();
  return value_img_img_1_merged265_548;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_369_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_369 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[4 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_548 = img.img_img_1_merged265_548_merged_banks_12.peek_1();
  return value_img_img_1_merged265_548;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_370_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_370 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[3 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_547 = img.img_img_1_merged265_547_merged_banks_12.peek_123();
  return value_img_img_1_merged265_547;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_371_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_371 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[3 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_547 = img.img_img_1_merged265_547_merged_banks_12.peek_62();
  return value_img_img_1_merged265_547;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_372_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_372 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[3 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_547 = img.img_img_1_merged265_547_merged_banks_12.peek_1();
  return value_img_img_1_merged265_547;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_373_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_373 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[5 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_549 = img.img_img_1_merged265_549_merged_banks_12.peek_123();
  return value_img_img_1_merged265_549;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_374_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_374 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[5 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_549 = img.img_img_1_merged265_549_merged_banks_12.peek_62();
  return value_img_img_1_merged265_549;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_375_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_375 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[5 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_549 = img.img_img_1_merged265_549_merged_banks_12.peek_1();
  return value_img_img_1_merged265_549;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_376_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_376 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[4 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_548 = img.img_img_1_merged265_548_merged_banks_12.peek_123();
  return value_img_img_1_merged265_548;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_377_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_377 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[4 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_548 = img.img_img_1_merged265_548_merged_banks_12.peek_62();
  return value_img_img_1_merged265_548;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_378_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_378 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[4 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_548 = img.img_img_1_merged265_548_merged_banks_12.peek_1();
  return value_img_img_1_merged265_548;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_379_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_379 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[6 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_550 = img.img_img_1_merged265_550_merged_banks_12.peek_123();
  return value_img_img_1_merged265_550;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_380_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_380 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[6 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_550 = img.img_img_1_merged265_550_merged_banks_12.peek_62();
  return value_img_img_1_merged265_550;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_381_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_381 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[6 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_550 = img.img_img_1_merged265_550_merged_banks_12.peek_1();
  return value_img_img_1_merged265_550;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_382_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_382 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[5 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_549 = img.img_img_1_merged265_549_merged_banks_12.peek_123();
  return value_img_img_1_merged265_549;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_383_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_383 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[5 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_549 = img.img_img_1_merged265_549_merged_banks_12.peek_62();
  return value_img_img_1_merged265_549;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_384_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_384 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[5 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_549 = img.img_img_1_merged265_549_merged_banks_12.peek_1();
  return value_img_img_1_merged265_549;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_385_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_385 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[7 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_551 = img.img_img_1_merged265_551_merged_banks_12.peek_123();
  return value_img_img_1_merged265_551;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_386_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_386 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[7 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_551 = img.img_img_1_merged265_551_merged_banks_12.peek_62();
  return value_img_img_1_merged265_551;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_387_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_387 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[7 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_551 = img.img_img_1_merged265_551_merged_banks_12.peek_1();
  return value_img_img_1_merged265_551;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_388_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_388 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[6 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_550 = img.img_img_1_merged265_550_merged_banks_12.peek_123();
  return value_img_img_1_merged265_550;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_389_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_389 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[6 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_550 = img.img_img_1_merged265_550_merged_banks_12.peek_62();
  return value_img_img_1_merged265_550;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_390_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_390 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[6 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_550 = img.img_img_1_merged265_550_merged_banks_12.peek_1();
  return value_img_img_1_merged265_550;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_391_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_391 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[8 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_552 = img.img_img_1_merged265_552_merged_banks_12.peek_123();
  return value_img_img_1_merged265_552;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_392_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_392 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[8 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_552 = img.img_img_1_merged265_552_merged_banks_12.peek_62();
  return value_img_img_1_merged265_552;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_393_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_393 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[8 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_552 = img.img_img_1_merged265_552_merged_banks_12.peek_1();
  return value_img_img_1_merged265_552;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_394_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_394 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[7 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_551 = img.img_img_1_merged265_551_merged_banks_12.peek_123();
  return value_img_img_1_merged265_551;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_395_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_395 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[7 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_551 = img.img_img_1_merged265_551_merged_banks_12.peek_62();
  return value_img_img_1_merged265_551;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_396_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_396 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[7 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_551 = img.img_img_1_merged265_551_merged_banks_12.peek_1();
  return value_img_img_1_merged265_551;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_397_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_397 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[9 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_553 = img.img_img_1_merged265_553_merged_banks_12.peek_123();
  return value_img_img_1_merged265_553;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_398_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_398 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[9 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_553 = img.img_img_1_merged265_553_merged_banks_12.peek_62();
  return value_img_img_1_merged265_553;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_399_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_399 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[9 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_553 = img.img_img_1_merged265_553_merged_banks_12.peek_1();
  return value_img_img_1_merged265_553;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_400_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_400 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[8 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_552 = img.img_img_1_merged265_552_merged_banks_12.peek_123();
  return value_img_img_1_merged265_552;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_401_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_401 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[8 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_552 = img.img_img_1_merged265_552_merged_banks_12.peek_62();
  return value_img_img_1_merged265_552;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_402_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_402 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[8 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_552 = img.img_img_1_merged265_552_merged_banks_12.peek_1();
  return value_img_img_1_merged265_552;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_403_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_403 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[10 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_554 = img.img_img_1_merged265_554_merged_banks_12.peek_123();
  return value_img_img_1_merged265_554;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_404_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_404 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[10 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_554 = img.img_img_1_merged265_554_merged_banks_12.peek_62();
  return value_img_img_1_merged265_554;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_405_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_405 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[10 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_554 = img.img_img_1_merged265_554_merged_banks_12.peek_1();
  return value_img_img_1_merged265_554;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_406_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_406 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[9 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_553 = img.img_img_1_merged265_553_merged_banks_12.peek_123();
  return value_img_img_1_merged265_553;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_407_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_407 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[9 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_553 = img.img_img_1_merged265_553_merged_banks_12.peek_62();
  return value_img_img_1_merged265_553;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_408_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_408 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[9 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_553 = img.img_img_1_merged265_553_merged_banks_12.peek_1();
  return value_img_img_1_merged265_553;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_409_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_409 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[11 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_555 = img.img_img_1_merged265_555_merged_banks_12.peek_123();
  return value_img_img_1_merged265_555;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_410_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_410 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[11 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_555 = img.img_img_1_merged265_555_merged_banks_12.peek_62();
  return value_img_img_1_merged265_555;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_411_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_411 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[11 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_555 = img.img_img_1_merged265_555_merged_banks_12.peek_1();
  return value_img_img_1_merged265_555;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_412_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_412 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[10 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_554 = img.img_img_1_merged265_554_merged_banks_12.peek_123();
  return value_img_img_1_merged265_554;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_413_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_413 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[10 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_554 = img.img_img_1_merged265_554_merged_banks_12.peek_62();
  return value_img_img_1_merged265_554;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_414_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_414 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[10 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_554 = img.img_img_1_merged265_554_merged_banks_12.peek_1();
  return value_img_img_1_merged265_554;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_415_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_415 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[12 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_556 = img.img_img_1_merged265_556_merged_banks_12.peek_123();
  return value_img_img_1_merged265_556;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_416_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_416 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[12 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_556 = img.img_img_1_merged265_556_merged_banks_12.peek_62();
  return value_img_img_1_merged265_556;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_417_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_417 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[12 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_556 = img.img_img_1_merged265_556_merged_banks_12.peek_1();
  return value_img_img_1_merged265_556;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_418_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_418 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[11 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_555 = img.img_img_1_merged265_555_merged_banks_12.peek_123();
  return value_img_img_1_merged265_555;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_419_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_419 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[11 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_555 = img.img_img_1_merged265_555_merged_banks_12.peek_62();
  return value_img_img_1_merged265_555;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_420_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_420 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[11 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_555 = img.img_img_1_merged265_555_merged_banks_12.peek_1();
  return value_img_img_1_merged265_555;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_421_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_421 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[13 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_557 = img.img_img_1_merged265_557_merged_banks_12.peek_123();
  return value_img_img_1_merged265_557;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_422_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_422 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[13 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_557 = img.img_img_1_merged265_557_merged_banks_12.peek_62();
  return value_img_img_1_merged265_557;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_423_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_423 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[13 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_557 = img.img_img_1_merged265_557_merged_banks_12.peek_1();
  return value_img_img_1_merged265_557;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_424_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_424 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[12 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_556 = img.img_img_1_merged265_556_merged_banks_12.peek_123();
  return value_img_img_1_merged265_556;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_425_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_425 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[12 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_556 = img.img_img_1_merged265_556_merged_banks_12.peek_62();
  return value_img_img_1_merged265_556;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_426_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_426 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[12 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_556 = img.img_img_1_merged265_556_merged_banks_12.peek_1();
  return value_img_img_1_merged265_556;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_427_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_427 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[14 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_558 = img.img_img_1_merged265_558_merged_banks_12.peek_123();
  return value_img_img_1_merged265_558;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_428_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_428 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[14 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_558 = img.img_img_1_merged265_558_merged_banks_12.peek_62();
  return value_img_img_1_merged265_558;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_429_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_429 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[14 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_558 = img.img_img_1_merged265_558_merged_banks_12.peek_1();
  return value_img_img_1_merged265_558;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_430_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_430 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[13 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_557 = img.img_img_1_merged265_557_merged_banks_12.peek_123();
  return value_img_img_1_merged265_557;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_431_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_431 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[13 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_557 = img.img_img_1_merged265_557_merged_banks_12.peek_62();
  return value_img_img_1_merged265_557;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_432_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_432 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[13 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_557 = img.img_img_1_merged265_557_merged_banks_12.peek_1();
  return value_img_img_1_merged265_557;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_433_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_433 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[15 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_559 = img.img_img_1_merged265_559_merged_banks_12.peek_123();
  return value_img_img_1_merged265_559;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_434_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_434 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[15 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_559 = img.img_img_1_merged265_559_merged_banks_12.peek_62();
  return value_img_img_1_merged265_559;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_435_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_435 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[15 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_559 = img.img_img_1_merged265_559_merged_banks_12.peek_1();
  return value_img_img_1_merged265_559;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_436_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_436 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[14 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_558 = img.img_img_1_merged265_558_merged_banks_12.peek_123();
  return value_img_img_1_merged265_558;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_437_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_437 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[14 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_558 = img.img_img_1_merged265_558_merged_banks_12.peek_62();
  return value_img_img_1_merged265_558;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_438_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_438 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[14 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_558 = img.img_img_1_merged265_558_merged_banks_12.peek_1();
  return value_img_img_1_merged265_558;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_439_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_439 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[16 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_560 = img.img_img_1_merged265_560_merged_banks_12.peek_123();
  return value_img_img_1_merged265_560;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_440_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_440 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[16 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_560 = img.img_img_1_merged265_560_merged_banks_12.peek_62();
  return value_img_img_1_merged265_560;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_441_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_441 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[16 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_560 = img.img_img_1_merged265_560_merged_banks_12.peek_1();
  return value_img_img_1_merged265_560;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_442_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_442 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[15 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_559 = img.img_img_1_merged265_559_merged_banks_12.peek_123();
  return value_img_img_1_merged265_559;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_443_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_443 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[15 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_559 = img.img_img_1_merged265_559_merged_banks_12.peek_62();
  return value_img_img_1_merged265_559;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_444_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_444 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[15 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_559 = img.img_img_1_merged265_559_merged_banks_12.peek_1();
  return value_img_img_1_merged265_559;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_445_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_445 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[17 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_561 = img.img_img_1_merged265_561_merged_banks_12.peek_123();
  return value_img_img_1_merged265_561;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_446_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_446 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[17 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_561 = img.img_img_1_merged265_561_merged_banks_12.peek_62();
  return value_img_img_1_merged265_561;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_447_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_447 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[17 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_561 = img.img_img_1_merged265_561_merged_banks_12.peek_1();
  return value_img_img_1_merged265_561;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_448_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_448 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[16 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_560 = img.img_img_1_merged265_560_merged_banks_12.peek_123();
  return value_img_img_1_merged265_560;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_449_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_449 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[16 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_560 = img.img_img_1_merged265_560_merged_banks_12.peek_62();
  return value_img_img_1_merged265_560;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_450_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_450 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[16 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_560 = img.img_img_1_merged265_560_merged_banks_12.peek_1();
  return value_img_img_1_merged265_560;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_451_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_451 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[18 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_562 = img.img_img_1_merged265_562_merged_banks_12.peek_123();
  return value_img_img_1_merged265_562;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_452_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_452 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[18 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_562 = img.img_img_1_merged265_562_merged_banks_12.peek_62();
  return value_img_img_1_merged265_562;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_453_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_453 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[18 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_562 = img.img_img_1_merged265_562_merged_banks_12.peek_1();
  return value_img_img_1_merged265_562;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_454_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_454 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[17 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_561 = img.img_img_1_merged265_561_merged_banks_12.peek_123();
  return value_img_img_1_merged265_561;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_455_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_455 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[17 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_561 = img.img_img_1_merged265_561_merged_banks_12.peek_62();
  return value_img_img_1_merged265_561;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_456_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_456 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[17 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_561 = img.img_img_1_merged265_561_merged_banks_12.peek_1();
  return value_img_img_1_merged265_561;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_457_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_457 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[19 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_563 = img.img_img_1_merged265_563_merged_banks_12.peek_123();
  return value_img_img_1_merged265_563;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_458_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_458 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[19 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_563 = img.img_img_1_merged265_563_merged_banks_12.peek_62();
  return value_img_img_1_merged265_563;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_459_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_459 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[19 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_563 = img.img_img_1_merged265_563_merged_banks_12.peek_1();
  return value_img_img_1_merged265_563;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_460_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_460 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[18 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_562 = img.img_img_1_merged265_562_merged_banks_12.peek_123();
  return value_img_img_1_merged265_562;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_461_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_461 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[18 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_562 = img.img_img_1_merged265_562_merged_banks_12.peek_62();
  return value_img_img_1_merged265_562;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_462_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_462 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[18 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_562 = img.img_img_1_merged265_562_merged_banks_12.peek_1();
  return value_img_img_1_merged265_562;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_463_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_463 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[20 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_564 = img.img_img_1_merged265_564_merged_banks_12.peek_123();
  return value_img_img_1_merged265_564;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_464_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_464 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[20 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_564 = img.img_img_1_merged265_564_merged_banks_12.peek_62();
  return value_img_img_1_merged265_564;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_465_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_465 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[20 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_564 = img.img_img_1_merged265_564_merged_banks_12.peek_1();
  return value_img_img_1_merged265_564;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_466_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_466 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[19 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_563 = img.img_img_1_merged265_563_merged_banks_12.peek_123();
  return value_img_img_1_merged265_563;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_467_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_467 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[19 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_563 = img.img_img_1_merged265_563_merged_banks_12.peek_62();
  return value_img_img_1_merged265_563;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_468_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_468 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[19 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_563 = img.img_img_1_merged265_563_merged_banks_12.peek_1();
  return value_img_img_1_merged265_563;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_469_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_469 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[21 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_565 = img.img_img_1_merged265_565_merged_banks_12.peek_123();
  return value_img_img_1_merged265_565;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_470_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_470 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[21 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_565 = img.img_img_1_merged265_565_merged_banks_12.peek_62();
  return value_img_img_1_merged265_565;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_471_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_471 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[21 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_565 = img.img_img_1_merged265_565_merged_banks_12.peek_1();
  return value_img_img_1_merged265_565;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_472_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_472 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[20 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_564 = img.img_img_1_merged265_564_merged_banks_12.peek_123();
  return value_img_img_1_merged265_564;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_473_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_473 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[20 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_564 = img.img_img_1_merged265_564_merged_banks_12.peek_62();
  return value_img_img_1_merged265_564;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_474_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_474 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[20 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_564 = img.img_img_1_merged265_564_merged_banks_12.peek_1();
  return value_img_img_1_merged265_564;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_475_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_475 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[22 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_566 = img.img_img_1_merged265_566_merged_banks_12.peek_123();
  return value_img_img_1_merged265_566;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_476_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_476 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[22 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_566 = img.img_img_1_merged265_566_merged_banks_12.peek_62();
  return value_img_img_1_merged265_566;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_477_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_477 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[22 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_566 = img.img_img_1_merged265_566_merged_banks_12.peek_1();
  return value_img_img_1_merged265_566;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_478_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_478 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[21 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_565 = img.img_img_1_merged265_565_merged_banks_12.peek_123();
  return value_img_img_1_merged265_565;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_479_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_479 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[21 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_565 = img.img_img_1_merged265_565_merged_banks_12.peek_62();
  return value_img_img_1_merged265_565;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_480_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_480 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[21 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_565 = img.img_img_1_merged265_565_merged_banks_12.peek_1();
  return value_img_img_1_merged265_565;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_481_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_481 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[23 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_567 = img.img_img_1_merged265_567_merged_banks_12.peek_123();
  return value_img_img_1_merged265_567;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_482_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_482 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[23 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_567 = img.img_img_1_merged265_567_merged_banks_12.peek_62();
  return value_img_img_1_merged265_567;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_483_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_483 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[23 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_567 = img.img_img_1_merged265_567_merged_banks_12.peek_1();
  return value_img_img_1_merged265_567;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_484_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_484 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[22 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_566 = img.img_img_1_merged265_566_merged_banks_12.peek_123();
  return value_img_img_1_merged265_566;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_485_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_485 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[22 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_566 = img.img_img_1_merged265_566_merged_banks_12.peek_62();
  return value_img_img_1_merged265_566;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_486_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_486 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[22 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_566 = img.img_img_1_merged265_566_merged_banks_12.peek_1();
  return value_img_img_1_merged265_566;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_487_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_487 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[24 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_568 = img.img_img_1_merged265_568_merged_banks_12.peek_123();
  return value_img_img_1_merged265_568;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_488_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_488 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[24 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_568 = img.img_img_1_merged265_568_merged_banks_12.peek_62();
  return value_img_img_1_merged265_568;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_489_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_489 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[24 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_568 = img.img_img_1_merged265_568_merged_banks_12.peek_1();
  return value_img_img_1_merged265_568;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_490_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_490 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[23 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_567 = img.img_img_1_merged265_567_merged_banks_12.peek_123();
  return value_img_img_1_merged265_567;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_491_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_491 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[23 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_567 = img.img_img_1_merged265_567_merged_banks_12.peek_62();
  return value_img_img_1_merged265_567;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_492_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_492 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[23 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_567 = img.img_img_1_merged265_567_merged_banks_12.peek_1();
  return value_img_img_1_merged265_567;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_493_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_493 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[25 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_569 = img.img_img_1_merged265_569_merged_banks_12.peek_123();
  return value_img_img_1_merged265_569;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_494_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_494 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[25 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_569 = img.img_img_1_merged265_569_merged_banks_12.peek_62();
  return value_img_img_1_merged265_569;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_495_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_495 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[25 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_569 = img.img_img_1_merged265_569_merged_banks_12.peek_1();
  return value_img_img_1_merged265_569;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_496_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_496 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[24 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_568 = img.img_img_1_merged265_568_merged_banks_12.peek_123();
  return value_img_img_1_merged265_568;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_497_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_497 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[24 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_568 = img.img_img_1_merged265_568_merged_banks_12.peek_62();
  return value_img_img_1_merged265_568;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_498_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_498 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[24 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_568 = img.img_img_1_merged265_568_merged_banks_12.peek_1();
  return value_img_img_1_merged265_568;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_499_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_499 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[26 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_570 = img.img_img_1_merged265_570_merged_banks_12.peek_123();
  return value_img_img_1_merged265_570;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_500_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_500 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[26 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_570 = img.img_img_1_merged265_570_merged_banks_12.peek_62();
  return value_img_img_1_merged265_570;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_501_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_501 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[26 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_570 = img.img_img_1_merged265_570_merged_banks_12.peek_1();
  return value_img_img_1_merged265_570;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_502_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_502 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[25 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_569 = img.img_img_1_merged265_569_merged_banks_12.peek_123();
  return value_img_img_1_merged265_569;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_503_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_503 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[25 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_569 = img.img_img_1_merged265_569_merged_banks_12.peek_62();
  return value_img_img_1_merged265_569;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_504_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_504 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[25 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_569 = img.img_img_1_merged265_569_merged_banks_12.peek_1();
  return value_img_img_1_merged265_569;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_505_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_505 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[27 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_571 = img.img_img_1_merged265_571_merged_banks_12.peek_123();
  return value_img_img_1_merged265_571;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_506_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_506 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[27 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_571 = img.img_img_1_merged265_571_merged_banks_12.peek_62();
  return value_img_img_1_merged265_571;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_507_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_507 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[27 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_571 = img.img_img_1_merged265_571_merged_banks_12.peek_1();
  return value_img_img_1_merged265_571;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_508_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_508 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[26 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_570 = img.img_img_1_merged265_570_merged_banks_12.peek_123();
  return value_img_img_1_merged265_570;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_509_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_509 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[26 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_570 = img.img_img_1_merged265_570_merged_banks_12.peek_62();
  return value_img_img_1_merged265_570;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_510_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_510 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[26 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_570 = img.img_img_1_merged265_570_merged_banks_12.peek_1();
  return value_img_img_1_merged265_570;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_511_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_511 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[28 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_572 = img.img_img_1_merged265_572_merged_banks_12.peek_123();
  return value_img_img_1_merged265_572;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_512_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_512 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[28 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_572 = img.img_img_1_merged265_572_merged_banks_12.peek_62();
  return value_img_img_1_merged265_572;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_513_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_513 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[28 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_572 = img.img_img_1_merged265_572_merged_banks_12.peek_1();
  return value_img_img_1_merged265_572;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_514_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_514 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[27 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_571 = img.img_img_1_merged265_571_merged_banks_12.peek_123();
  return value_img_img_1_merged265_571;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_515_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_515 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[27 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_571 = img.img_img_1_merged265_571_merged_banks_12.peek_62();
  return value_img_img_1_merged265_571;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_516_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_516 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[27 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_571 = img.img_img_1_merged265_571_merged_banks_12.peek_1();
  return value_img_img_1_merged265_571;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_517_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_517 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[29 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_573 = img.img_img_1_merged265_573_merged_banks_12.peek_123();
  return value_img_img_1_merged265_573;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_518_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_518 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[29 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_573 = img.img_img_1_merged265_573_merged_banks_12.peek_62();
  return value_img_img_1_merged265_573;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_519_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_519 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[29 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_573 = img.img_img_1_merged265_573_merged_banks_12.peek_1();
  return value_img_img_1_merged265_573;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_520_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_520 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[28 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_572 = img.img_img_1_merged265_572_merged_banks_12.peek_123();
  return value_img_img_1_merged265_572;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_521_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_521 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[28 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_572 = img.img_img_1_merged265_572_merged_banks_12.peek_62();
  return value_img_img_1_merged265_572;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_522_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_522 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[28 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_572 = img.img_img_1_merged265_572_merged_banks_12.peek_1();
  return value_img_img_1_merged265_572;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_523_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_523 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[30 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_574 = img.img_img_1_merged265_574_merged_banks_12.peek_123();
  return value_img_img_1_merged265_574;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_524_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_524 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[30 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_574 = img.img_img_1_merged265_574_merged_banks_12.peek_62();
  return value_img_img_1_merged265_574;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_525_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_525 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[30 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_574 = img.img_img_1_merged265_574_merged_banks_12.peek_1();
  return value_img_img_1_merged265_574;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_526_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_526 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[29 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_573 = img.img_img_1_merged265_573_merged_banks_12.peek_123();
  return value_img_img_1_merged265_573;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_527_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_527 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[29 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_573 = img.img_img_1_merged265_573_merged_banks_12.peek_62();
  return value_img_img_1_merged265_573;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_528_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_528 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[29 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_573 = img.img_img_1_merged265_573_merged_banks_12.peek_1();
  return value_img_img_1_merged265_573;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_529_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_529 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[31 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_575 = img.img_img_1_merged265_575_merged_banks_12.peek_123();
  return value_img_img_1_merged265_575;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_530_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_530 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[31 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_575 = img.img_img_1_merged265_575_merged_banks_12.peek_62();
  return value_img_img_1_merged265_575;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_531_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_531 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[31 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_575 = img.img_img_1_merged265_575_merged_banks_12.peek_1();
  return value_img_img_1_merged265_575;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_532_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_532 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[30 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_574 = img.img_img_1_merged265_574_merged_banks_12.peek_123();
  return value_img_img_1_merged265_574;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_533_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_533 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[30 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_574 = img.img_img_1_merged265_574_merged_banks_12.peek_62();
  return value_img_img_1_merged265_574;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_534_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_534 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[30 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_574 = img.img_img_1_merged265_574_merged_banks_12.peek_1();
  return value_img_img_1_merged265_574;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_535_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_535 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[32 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_544 = img.img_img_1_merged265_544_merged_banks_12.peek_122();
  return value_img_img_1_merged265_544;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_536_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_536 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[32 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_544 = img.img_img_1_merged265_544_merged_banks_12.peek_61();
  return value_img_img_1_merged265_544;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_537_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_537 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[32 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_544 = img.img_img_1_merged265_544_merged_banks_12.peek_0();
  return value_img_img_1_merged265_544;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_538_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_538 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[31 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_575 = img.img_img_1_merged265_575_merged_banks_12.peek_123();
  return value_img_img_1_merged265_575;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_539_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_539 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[31 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_575 = img.img_img_1_merged265_575_merged_banks_12.peek_62();
  return value_img_img_1_merged265_575;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_540_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_540 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[31 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_575 = img.img_img_1_merged265_575_merged_banks_12.peek_1();
  return value_img_img_1_merged265_575;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_541_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_541 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[33 + 32mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_545 = img.img_img_1_merged265_545_merged_banks_12.peek_122();
  return value_img_img_1_merged265_545;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_542_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_542 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[33 + 32mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_545 = img.img_img_1_merged265_545_merged_banks_12.peek_61();
  return value_img_img_1_merged265_545;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged268_543_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged268_543 read pattern: { mag_x_1_merged268[root = 0, mag_x_0, mag_x_1] -> img[33 + 32mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 59 }
  // Read schedule : { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_545 = img.img_img_1_merged265_545_merged_banks_12.peek_0();
  return value_img_img_1_merged265_545;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_128_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_128 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_544 = img.img_img_1_merged265_544_merged_banks_12.peek_123();
  return value_img_img_1_merged265_544;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_129_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_129 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_544 = img.img_img_1_merged265_544_merged_banks_12.peek_1();
  return value_img_img_1_merged265_544;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_130_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_130 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[1 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_545 = img.img_img_1_merged265_545_merged_banks_12.peek_123();
  return value_img_img_1_merged265_545;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_131_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_131 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[1 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_545 = img.img_img_1_merged265_545_merged_banks_12.peek_1();
  return value_img_img_1_merged265_545;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_132_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_132 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[2 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_546 = img.img_img_1_merged265_546_merged_banks_12.peek_123();
  return value_img_img_1_merged265_546;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_133_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_133 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[2 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_546 = img.img_img_1_merged265_546_merged_banks_12.peek_1();
  return value_img_img_1_merged265_546;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_134_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_134 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[1 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_545 = img.img_img_1_merged265_545_merged_banks_12.peek_123();
  return value_img_img_1_merged265_545;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_135_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_135 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[1 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_545 = img.img_img_1_merged265_545_merged_banks_12.peek_1();
  return value_img_img_1_merged265_545;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_136_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_136 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[2 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_546 = img.img_img_1_merged265_546_merged_banks_12.peek_123();
  return value_img_img_1_merged265_546;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_137_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_137 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[2 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_546 = img.img_img_1_merged265_546_merged_banks_12.peek_1();
  return value_img_img_1_merged265_546;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_138_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_138 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[3 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_547 = img.img_img_1_merged265_547_merged_banks_12.peek_123();
  return value_img_img_1_merged265_547;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_139_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_139 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[3 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_547 = img.img_img_1_merged265_547_merged_banks_12.peek_1();
  return value_img_img_1_merged265_547;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_140_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_140 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[2 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_546 = img.img_img_1_merged265_546_merged_banks_12.peek_123();
  return value_img_img_1_merged265_546;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_141_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_141 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[2 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_546 = img.img_img_1_merged265_546_merged_banks_12.peek_1();
  return value_img_img_1_merged265_546;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_142_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_142 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[3 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_547 = img.img_img_1_merged265_547_merged_banks_12.peek_123();
  return value_img_img_1_merged265_547;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_143_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_143 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[3 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_547 = img.img_img_1_merged265_547_merged_banks_12.peek_1();
  return value_img_img_1_merged265_547;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_144_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_144 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[4 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_548 = img.img_img_1_merged265_548_merged_banks_12.peek_123();
  return value_img_img_1_merged265_548;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_145_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_145 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[4 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_548 = img.img_img_1_merged265_548_merged_banks_12.peek_1();
  return value_img_img_1_merged265_548;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_146_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_146 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[3 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_547 = img.img_img_1_merged265_547_merged_banks_12.peek_123();
  return value_img_img_1_merged265_547;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_147_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_147 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[3 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_547 = img.img_img_1_merged265_547_merged_banks_12.peek_1();
  return value_img_img_1_merged265_547;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_148_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_148 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[4 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_548 = img.img_img_1_merged265_548_merged_banks_12.peek_123();
  return value_img_img_1_merged265_548;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_149_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_149 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[4 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_548 = img.img_img_1_merged265_548_merged_banks_12.peek_1();
  return value_img_img_1_merged265_548;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_150_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_150 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[5 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_549 = img.img_img_1_merged265_549_merged_banks_12.peek_123();
  return value_img_img_1_merged265_549;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_151_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_151 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[5 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_549 = img.img_img_1_merged265_549_merged_banks_12.peek_1();
  return value_img_img_1_merged265_549;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_152_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_152 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[4 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_548 = img.img_img_1_merged265_548_merged_banks_12.peek_123();
  return value_img_img_1_merged265_548;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_153_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_153 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[4 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_548 = img.img_img_1_merged265_548_merged_banks_12.peek_1();
  return value_img_img_1_merged265_548;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_154_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_154 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[5 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_549 = img.img_img_1_merged265_549_merged_banks_12.peek_123();
  return value_img_img_1_merged265_549;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_155_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_155 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[5 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_549 = img.img_img_1_merged265_549_merged_banks_12.peek_1();
  return value_img_img_1_merged265_549;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_156_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_156 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[6 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_550 = img.img_img_1_merged265_550_merged_banks_12.peek_123();
  return value_img_img_1_merged265_550;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_157_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_157 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[6 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_550 = img.img_img_1_merged265_550_merged_banks_12.peek_1();
  return value_img_img_1_merged265_550;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_158_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_158 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[5 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_549 = img.img_img_1_merged265_549_merged_banks_12.peek_123();
  return value_img_img_1_merged265_549;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_159_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_159 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[5 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_549 = img.img_img_1_merged265_549_merged_banks_12.peek_1();
  return value_img_img_1_merged265_549;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_160_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_160 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[6 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_550 = img.img_img_1_merged265_550_merged_banks_12.peek_123();
  return value_img_img_1_merged265_550;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_161_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_161 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[6 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_550 = img.img_img_1_merged265_550_merged_banks_12.peek_1();
  return value_img_img_1_merged265_550;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_162_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_162 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[7 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_551 = img.img_img_1_merged265_551_merged_banks_12.peek_123();
  return value_img_img_1_merged265_551;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_163_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_163 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[7 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_551 = img.img_img_1_merged265_551_merged_banks_12.peek_1();
  return value_img_img_1_merged265_551;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_164_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_164 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[6 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_550 = img.img_img_1_merged265_550_merged_banks_12.peek_123();
  return value_img_img_1_merged265_550;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_165_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_165 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[6 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_550 = img.img_img_1_merged265_550_merged_banks_12.peek_1();
  return value_img_img_1_merged265_550;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_166_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_166 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[7 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_551 = img.img_img_1_merged265_551_merged_banks_12.peek_123();
  return value_img_img_1_merged265_551;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_167_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_167 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[7 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_551 = img.img_img_1_merged265_551_merged_banks_12.peek_1();
  return value_img_img_1_merged265_551;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_168_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_168 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[8 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_552 = img.img_img_1_merged265_552_merged_banks_12.peek_123();
  return value_img_img_1_merged265_552;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_169_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_169 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[8 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_552 = img.img_img_1_merged265_552_merged_banks_12.peek_1();
  return value_img_img_1_merged265_552;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_170_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_170 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[7 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_551 = img.img_img_1_merged265_551_merged_banks_12.peek_123();
  return value_img_img_1_merged265_551;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_171_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_171 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[7 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_551 = img.img_img_1_merged265_551_merged_banks_12.peek_1();
  return value_img_img_1_merged265_551;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_172_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_172 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[8 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_552 = img.img_img_1_merged265_552_merged_banks_12.peek_123();
  return value_img_img_1_merged265_552;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_173_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_173 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[8 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_552 = img.img_img_1_merged265_552_merged_banks_12.peek_1();
  return value_img_img_1_merged265_552;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_174_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_174 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[9 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_553 = img.img_img_1_merged265_553_merged_banks_12.peek_123();
  return value_img_img_1_merged265_553;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_175_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_175 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[9 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_553 = img.img_img_1_merged265_553_merged_banks_12.peek_1();
  return value_img_img_1_merged265_553;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_176_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_176 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[8 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_552 = img.img_img_1_merged265_552_merged_banks_12.peek_123();
  return value_img_img_1_merged265_552;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_177_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_177 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[8 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_552 = img.img_img_1_merged265_552_merged_banks_12.peek_1();
  return value_img_img_1_merged265_552;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_178_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_178 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[9 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_553 = img.img_img_1_merged265_553_merged_banks_12.peek_123();
  return value_img_img_1_merged265_553;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_179_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_179 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[9 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_553 = img.img_img_1_merged265_553_merged_banks_12.peek_1();
  return value_img_img_1_merged265_553;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_180_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_180 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[10 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_554 = img.img_img_1_merged265_554_merged_banks_12.peek_123();
  return value_img_img_1_merged265_554;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_181_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_181 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[10 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_554 = img.img_img_1_merged265_554_merged_banks_12.peek_1();
  return value_img_img_1_merged265_554;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_182_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_182 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[9 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_553 = img.img_img_1_merged265_553_merged_banks_12.peek_123();
  return value_img_img_1_merged265_553;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_183_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_183 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[9 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_553 = img.img_img_1_merged265_553_merged_banks_12.peek_1();
  return value_img_img_1_merged265_553;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_184_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_184 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[10 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_554 = img.img_img_1_merged265_554_merged_banks_12.peek_123();
  return value_img_img_1_merged265_554;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_185_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_185 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[10 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_554 = img.img_img_1_merged265_554_merged_banks_12.peek_1();
  return value_img_img_1_merged265_554;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_186_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_186 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[11 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_555 = img.img_img_1_merged265_555_merged_banks_12.peek_123();
  return value_img_img_1_merged265_555;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_187_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_187 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[11 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_555 = img.img_img_1_merged265_555_merged_banks_12.peek_1();
  return value_img_img_1_merged265_555;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_188_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_188 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[10 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_554 = img.img_img_1_merged265_554_merged_banks_12.peek_123();
  return value_img_img_1_merged265_554;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_189_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_189 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[10 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_554 = img.img_img_1_merged265_554_merged_banks_12.peek_1();
  return value_img_img_1_merged265_554;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_190_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_190 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[11 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_555 = img.img_img_1_merged265_555_merged_banks_12.peek_123();
  return value_img_img_1_merged265_555;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_191_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_191 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[11 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_555 = img.img_img_1_merged265_555_merged_banks_12.peek_1();
  return value_img_img_1_merged265_555;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_192_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_192 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[12 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_556 = img.img_img_1_merged265_556_merged_banks_12.peek_123();
  return value_img_img_1_merged265_556;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_193_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_193 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[12 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_556 = img.img_img_1_merged265_556_merged_banks_12.peek_1();
  return value_img_img_1_merged265_556;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_194_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_194 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[11 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_555 = img.img_img_1_merged265_555_merged_banks_12.peek_123();
  return value_img_img_1_merged265_555;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_195_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_195 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[11 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_555 = img.img_img_1_merged265_555_merged_banks_12.peek_1();
  return value_img_img_1_merged265_555;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_196_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_196 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[12 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_556 = img.img_img_1_merged265_556_merged_banks_12.peek_123();
  return value_img_img_1_merged265_556;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_197_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_197 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[12 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_556 = img.img_img_1_merged265_556_merged_banks_12.peek_1();
  return value_img_img_1_merged265_556;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_198_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_198 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[13 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_557 = img.img_img_1_merged265_557_merged_banks_12.peek_123();
  return value_img_img_1_merged265_557;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_199_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_199 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[13 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_557 = img.img_img_1_merged265_557_merged_banks_12.peek_1();
  return value_img_img_1_merged265_557;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_200_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_200 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[12 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_556 = img.img_img_1_merged265_556_merged_banks_12.peek_123();
  return value_img_img_1_merged265_556;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_201_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_201 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[12 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_556 = img.img_img_1_merged265_556_merged_banks_12.peek_1();
  return value_img_img_1_merged265_556;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_202_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_202 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[13 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_557 = img.img_img_1_merged265_557_merged_banks_12.peek_123();
  return value_img_img_1_merged265_557;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_203_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_203 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[13 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_557 = img.img_img_1_merged265_557_merged_banks_12.peek_1();
  return value_img_img_1_merged265_557;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_204_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_204 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[14 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_558 = img.img_img_1_merged265_558_merged_banks_12.peek_123();
  return value_img_img_1_merged265_558;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_205_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_205 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[14 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_558 = img.img_img_1_merged265_558_merged_banks_12.peek_1();
  return value_img_img_1_merged265_558;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_206_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_206 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[13 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_557 = img.img_img_1_merged265_557_merged_banks_12.peek_123();
  return value_img_img_1_merged265_557;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_207_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_207 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[13 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_557 = img.img_img_1_merged265_557_merged_banks_12.peek_1();
  return value_img_img_1_merged265_557;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_208_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_208 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[14 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_558 = img.img_img_1_merged265_558_merged_banks_12.peek_123();
  return value_img_img_1_merged265_558;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_209_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_209 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[14 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_558 = img.img_img_1_merged265_558_merged_banks_12.peek_1();
  return value_img_img_1_merged265_558;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_210_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_210 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[15 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_559 = img.img_img_1_merged265_559_merged_banks_12.peek_123();
  return value_img_img_1_merged265_559;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_211_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_211 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[15 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_559 = img.img_img_1_merged265_559_merged_banks_12.peek_1();
  return value_img_img_1_merged265_559;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_212_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_212 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[14 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_558 = img.img_img_1_merged265_558_merged_banks_12.peek_123();
  return value_img_img_1_merged265_558;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_213_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_213 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[14 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_558 = img.img_img_1_merged265_558_merged_banks_12.peek_1();
  return value_img_img_1_merged265_558;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_214_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_214 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[15 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_559 = img.img_img_1_merged265_559_merged_banks_12.peek_123();
  return value_img_img_1_merged265_559;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_215_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_215 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[15 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_559 = img.img_img_1_merged265_559_merged_banks_12.peek_1();
  return value_img_img_1_merged265_559;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_216_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_216 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[16 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_560 = img.img_img_1_merged265_560_merged_banks_12.peek_123();
  return value_img_img_1_merged265_560;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_217_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_217 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[16 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_560 = img.img_img_1_merged265_560_merged_banks_12.peek_1();
  return value_img_img_1_merged265_560;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_218_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_218 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[15 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_559 = img.img_img_1_merged265_559_merged_banks_12.peek_123();
  return value_img_img_1_merged265_559;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_219_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_219 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[15 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_559 = img.img_img_1_merged265_559_merged_banks_12.peek_1();
  return value_img_img_1_merged265_559;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_220_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_220 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[16 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_560 = img.img_img_1_merged265_560_merged_banks_12.peek_123();
  return value_img_img_1_merged265_560;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_221_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_221 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[16 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_560 = img.img_img_1_merged265_560_merged_banks_12.peek_1();
  return value_img_img_1_merged265_560;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_222_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_222 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[17 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_561 = img.img_img_1_merged265_561_merged_banks_12.peek_123();
  return value_img_img_1_merged265_561;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_223_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_223 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[17 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_561 = img.img_img_1_merged265_561_merged_banks_12.peek_1();
  return value_img_img_1_merged265_561;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_224_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_224 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[16 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_560 = img.img_img_1_merged265_560_merged_banks_12.peek_123();
  return value_img_img_1_merged265_560;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_225_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_225 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[16 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_560 = img.img_img_1_merged265_560_merged_banks_12.peek_1();
  return value_img_img_1_merged265_560;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_226_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_226 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[17 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_561 = img.img_img_1_merged265_561_merged_banks_12.peek_123();
  return value_img_img_1_merged265_561;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_227_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_227 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[17 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_561 = img.img_img_1_merged265_561_merged_banks_12.peek_1();
  return value_img_img_1_merged265_561;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_228_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_228 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[18 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_562 = img.img_img_1_merged265_562_merged_banks_12.peek_123();
  return value_img_img_1_merged265_562;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_229_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_229 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[18 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_562 = img.img_img_1_merged265_562_merged_banks_12.peek_1();
  return value_img_img_1_merged265_562;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_230_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_230 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[17 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_561 = img.img_img_1_merged265_561_merged_banks_12.peek_123();
  return value_img_img_1_merged265_561;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_231_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_231 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[17 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_561 = img.img_img_1_merged265_561_merged_banks_12.peek_1();
  return value_img_img_1_merged265_561;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_232_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_232 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[18 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_562 = img.img_img_1_merged265_562_merged_banks_12.peek_123();
  return value_img_img_1_merged265_562;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_233_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_233 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[18 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_562 = img.img_img_1_merged265_562_merged_banks_12.peek_1();
  return value_img_img_1_merged265_562;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_234_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_234 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[19 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_563 = img.img_img_1_merged265_563_merged_banks_12.peek_123();
  return value_img_img_1_merged265_563;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_235_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_235 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[19 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_563 = img.img_img_1_merged265_563_merged_banks_12.peek_1();
  return value_img_img_1_merged265_563;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_236_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_236 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[18 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_562 = img.img_img_1_merged265_562_merged_banks_12.peek_123();
  return value_img_img_1_merged265_562;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_237_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_237 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[18 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_562 = img.img_img_1_merged265_562_merged_banks_12.peek_1();
  return value_img_img_1_merged265_562;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_238_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_238 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[19 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_563 = img.img_img_1_merged265_563_merged_banks_12.peek_123();
  return value_img_img_1_merged265_563;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_239_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_239 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[19 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_563 = img.img_img_1_merged265_563_merged_banks_12.peek_1();
  return value_img_img_1_merged265_563;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_240_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_240 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[20 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_564 = img.img_img_1_merged265_564_merged_banks_12.peek_123();
  return value_img_img_1_merged265_564;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_241_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_241 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[20 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_564 = img.img_img_1_merged265_564_merged_banks_12.peek_1();
  return value_img_img_1_merged265_564;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_242_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_242 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[19 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_563 = img.img_img_1_merged265_563_merged_banks_12.peek_123();
  return value_img_img_1_merged265_563;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_243_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_243 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[19 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_563 = img.img_img_1_merged265_563_merged_banks_12.peek_1();
  return value_img_img_1_merged265_563;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_244_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_244 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[20 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_564 = img.img_img_1_merged265_564_merged_banks_12.peek_123();
  return value_img_img_1_merged265_564;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_245_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_245 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[20 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_564 = img.img_img_1_merged265_564_merged_banks_12.peek_1();
  return value_img_img_1_merged265_564;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_246_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_246 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[21 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_565 = img.img_img_1_merged265_565_merged_banks_12.peek_123();
  return value_img_img_1_merged265_565;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_247_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_247 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[21 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_565 = img.img_img_1_merged265_565_merged_banks_12.peek_1();
  return value_img_img_1_merged265_565;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_248_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_248 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[20 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_564 = img.img_img_1_merged265_564_merged_banks_12.peek_123();
  return value_img_img_1_merged265_564;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_249_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_249 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[20 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_564 = img.img_img_1_merged265_564_merged_banks_12.peek_1();
  return value_img_img_1_merged265_564;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_250_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_250 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[21 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_565 = img.img_img_1_merged265_565_merged_banks_12.peek_123();
  return value_img_img_1_merged265_565;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_251_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_251 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[21 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_565 = img.img_img_1_merged265_565_merged_banks_12.peek_1();
  return value_img_img_1_merged265_565;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_252_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_252 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[22 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_566 = img.img_img_1_merged265_566_merged_banks_12.peek_123();
  return value_img_img_1_merged265_566;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_253_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_253 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[22 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_566 = img.img_img_1_merged265_566_merged_banks_12.peek_1();
  return value_img_img_1_merged265_566;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_254_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_254 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[21 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_565 = img.img_img_1_merged265_565_merged_banks_12.peek_123();
  return value_img_img_1_merged265_565;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_255_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_255 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[21 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_565 = img.img_img_1_merged265_565_merged_banks_12.peek_1();
  return value_img_img_1_merged265_565;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_256_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_256 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[22 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_566 = img.img_img_1_merged265_566_merged_banks_12.peek_123();
  return value_img_img_1_merged265_566;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_257_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_257 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[22 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_566 = img.img_img_1_merged265_566_merged_banks_12.peek_1();
  return value_img_img_1_merged265_566;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_258_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_258 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[23 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_567 = img.img_img_1_merged265_567_merged_banks_12.peek_123();
  return value_img_img_1_merged265_567;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_259_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_259 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[23 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_567 = img.img_img_1_merged265_567_merged_banks_12.peek_1();
  return value_img_img_1_merged265_567;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_260_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_260 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[22 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_566 = img.img_img_1_merged265_566_merged_banks_12.peek_123();
  return value_img_img_1_merged265_566;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_261_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_261 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[22 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_566 = img.img_img_1_merged265_566_merged_banks_12.peek_1();
  return value_img_img_1_merged265_566;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_262_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_262 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[23 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_567 = img.img_img_1_merged265_567_merged_banks_12.peek_123();
  return value_img_img_1_merged265_567;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_263_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_263 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[23 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_567 = img.img_img_1_merged265_567_merged_banks_12.peek_1();
  return value_img_img_1_merged265_567;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_264_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_264 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[24 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_568 = img.img_img_1_merged265_568_merged_banks_12.peek_123();
  return value_img_img_1_merged265_568;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_265_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_265 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[24 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_568 = img.img_img_1_merged265_568_merged_banks_12.peek_1();
  return value_img_img_1_merged265_568;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_266_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_266 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[23 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_567 = img.img_img_1_merged265_567_merged_banks_12.peek_123();
  return value_img_img_1_merged265_567;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_267_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_267 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[23 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_567 = img.img_img_1_merged265_567_merged_banks_12.peek_1();
  return value_img_img_1_merged265_567;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_268_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_268 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[24 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_568 = img.img_img_1_merged265_568_merged_banks_12.peek_123();
  return value_img_img_1_merged265_568;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_269_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_269 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[24 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_568 = img.img_img_1_merged265_568_merged_banks_12.peek_1();
  return value_img_img_1_merged265_568;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_270_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_270 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[25 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_569 = img.img_img_1_merged265_569_merged_banks_12.peek_123();
  return value_img_img_1_merged265_569;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_271_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_271 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[25 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_569 = img.img_img_1_merged265_569_merged_banks_12.peek_1();
  return value_img_img_1_merged265_569;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_272_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_272 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[24 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_568 = img.img_img_1_merged265_568_merged_banks_12.peek_123();
  return value_img_img_1_merged265_568;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_273_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_273 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[24 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_568 = img.img_img_1_merged265_568_merged_banks_12.peek_1();
  return value_img_img_1_merged265_568;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_274_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_274 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[25 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_569 = img.img_img_1_merged265_569_merged_banks_12.peek_123();
  return value_img_img_1_merged265_569;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_275_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_275 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[25 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_569 = img.img_img_1_merged265_569_merged_banks_12.peek_1();
  return value_img_img_1_merged265_569;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_276_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_276 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[26 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_570 = img.img_img_1_merged265_570_merged_banks_12.peek_123();
  return value_img_img_1_merged265_570;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_277_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_277 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[26 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_570 = img.img_img_1_merged265_570_merged_banks_12.peek_1();
  return value_img_img_1_merged265_570;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_278_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_278 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[25 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_569 = img.img_img_1_merged265_569_merged_banks_12.peek_123();
  return value_img_img_1_merged265_569;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_279_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_279 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[25 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_569 = img.img_img_1_merged265_569_merged_banks_12.peek_1();
  return value_img_img_1_merged265_569;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_280_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_280 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[26 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_570 = img.img_img_1_merged265_570_merged_banks_12.peek_123();
  return value_img_img_1_merged265_570;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_281_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_281 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[26 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_570 = img.img_img_1_merged265_570_merged_banks_12.peek_1();
  return value_img_img_1_merged265_570;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_282_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_282 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[27 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_571 = img.img_img_1_merged265_571_merged_banks_12.peek_123();
  return value_img_img_1_merged265_571;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_283_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_283 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[27 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_571 = img.img_img_1_merged265_571_merged_banks_12.peek_1();
  return value_img_img_1_merged265_571;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_284_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_284 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[26 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_570 = img.img_img_1_merged265_570_merged_banks_12.peek_123();
  return value_img_img_1_merged265_570;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_285_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_285 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[26 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_570 = img.img_img_1_merged265_570_merged_banks_12.peek_1();
  return value_img_img_1_merged265_570;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_286_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_286 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[27 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_571 = img.img_img_1_merged265_571_merged_banks_12.peek_123();
  return value_img_img_1_merged265_571;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_287_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_287 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[27 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_571 = img.img_img_1_merged265_571_merged_banks_12.peek_1();
  return value_img_img_1_merged265_571;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_288_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_288 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[28 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_572 = img.img_img_1_merged265_572_merged_banks_12.peek_123();
  return value_img_img_1_merged265_572;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_289_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_289 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[28 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_572 = img.img_img_1_merged265_572_merged_banks_12.peek_1();
  return value_img_img_1_merged265_572;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_290_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_290 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[27 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_571 = img.img_img_1_merged265_571_merged_banks_12.peek_123();
  return value_img_img_1_merged265_571;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_291_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_291 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[27 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_571 = img.img_img_1_merged265_571_merged_banks_12.peek_1();
  return value_img_img_1_merged265_571;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_292_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_292 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[28 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_572 = img.img_img_1_merged265_572_merged_banks_12.peek_123();
  return value_img_img_1_merged265_572;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_293_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_293 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[28 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_572 = img.img_img_1_merged265_572_merged_banks_12.peek_1();
  return value_img_img_1_merged265_572;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_294_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_294 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[29 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_573 = img.img_img_1_merged265_573_merged_banks_12.peek_123();
  return value_img_img_1_merged265_573;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_295_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_295 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[29 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_573 = img.img_img_1_merged265_573_merged_banks_12.peek_1();
  return value_img_img_1_merged265_573;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_296_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_296 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[28 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_572 = img.img_img_1_merged265_572_merged_banks_12.peek_123();
  return value_img_img_1_merged265_572;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_297_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_297 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[28 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_572 = img.img_img_1_merged265_572_merged_banks_12.peek_1();
  return value_img_img_1_merged265_572;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_298_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_298 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[29 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_573 = img.img_img_1_merged265_573_merged_banks_12.peek_123();
  return value_img_img_1_merged265_573;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_299_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_299 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[29 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_573 = img.img_img_1_merged265_573_merged_banks_12.peek_1();
  return value_img_img_1_merged265_573;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_300_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_300 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[30 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_574 = img.img_img_1_merged265_574_merged_banks_12.peek_123();
  return value_img_img_1_merged265_574;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_301_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_301 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[30 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_574 = img.img_img_1_merged265_574_merged_banks_12.peek_1();
  return value_img_img_1_merged265_574;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_302_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_302 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[29 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_573 = img.img_img_1_merged265_573_merged_banks_12.peek_123();
  return value_img_img_1_merged265_573;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_303_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_303 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[29 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_573 = img.img_img_1_merged265_573_merged_banks_12.peek_1();
  return value_img_img_1_merged265_573;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_304_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_304 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[30 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_574 = img.img_img_1_merged265_574_merged_banks_12.peek_123();
  return value_img_img_1_merged265_574;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_305_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_305 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[30 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_574 = img.img_img_1_merged265_574_merged_banks_12.peek_1();
  return value_img_img_1_merged265_574;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_306_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_306 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[31 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_575 = img.img_img_1_merged265_575_merged_banks_12.peek_123();
  return value_img_img_1_merged265_575;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_307_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_307 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[31 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_575 = img.img_img_1_merged265_575_merged_banks_12.peek_1();
  return value_img_img_1_merged265_575;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_308_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_308 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[30 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_574 = img.img_img_1_merged265_574_merged_banks_12.peek_123();
  return value_img_img_1_merged265_574;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_309_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_309 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[30 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_574 = img.img_img_1_merged265_574_merged_banks_12.peek_1();
  return value_img_img_1_merged265_574;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_310_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_310 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[31 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_575 = img.img_img_1_merged265_575_merged_banks_12.peek_123();
  return value_img_img_1_merged265_575;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_311_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_311 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[31 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_575 = img.img_img_1_merged265_575_merged_banks_12.peek_1();
  return value_img_img_1_merged265_575;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_312_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_312 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[32 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_544 = img.img_img_1_merged265_544_merged_banks_12.peek_122();
  return value_img_img_1_merged265_544;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_313_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_313 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[32 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_544 = img.img_img_1_merged265_544_merged_banks_12.peek_0();
  return value_img_img_1_merged265_544;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_314_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_314 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[31 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_575 = img.img_img_1_merged265_575_merged_banks_12.peek_123();
  return value_img_img_1_merged265_575;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_315_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_315 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[31 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_575 = img.img_img_1_merged265_575_merged_banks_12.peek_1();
  return value_img_img_1_merged265_575;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_316_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_316 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[32 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_544 = img.img_img_1_merged265_544_merged_banks_12.peek_122();
  return value_img_img_1_merged265_544;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_317_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_317 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[32 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_544 = img.img_img_1_merged265_544_merged_banks_12.peek_0();
  return value_img_img_1_merged265_544;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_318_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_318 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[33 + 32mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_545 = img.img_img_1_merged265_545_merged_banks_12.peek_122();
  return value_img_img_1_merged265_545;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged262_319_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged262_319 read pattern: { mag_y_1_merged262[root = 0, mag_y_0, mag_y_1] -> img[33 + 32mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 59 }
  // Read schedule : { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
  auto value_img_img_1_merged265_545 = img.img_img_1_merged265_545_merged_banks_12.peek_0();
  return value_img_img_1_merged265_545;
  return 0;
}

// # of bundles = 3
// img_1_merged265_write
//	img_img_1_merged265_544
//	img_img_1_merged265_545
//	img_img_1_merged265_546
//	img_img_1_merged265_547
//	img_img_1_merged265_548
//	img_img_1_merged265_549
//	img_img_1_merged265_550
//	img_img_1_merged265_551
//	img_img_1_merged265_552
//	img_img_1_merged265_553
//	img_img_1_merged265_554
//	img_img_1_merged265_555
//	img_img_1_merged265_556
//	img_img_1_merged265_557
//	img_img_1_merged265_558
//	img_img_1_merged265_559
//	img_img_1_merged265_560
//	img_img_1_merged265_561
//	img_img_1_merged265_562
//	img_img_1_merged265_563
//	img_img_1_merged265_564
//	img_img_1_merged265_565
//	img_img_1_merged265_566
//	img_img_1_merged265_567
//	img_img_1_merged265_568
//	img_img_1_merged265_569
//	img_img_1_merged265_570
//	img_img_1_merged265_571
//	img_img_1_merged265_572
//	img_img_1_merged265_573
//	img_img_1_merged265_574
//	img_img_1_merged265_575
inline void img_img_1_merged265_write_bundle_write(hw_uint<512>& img_1_merged265_write, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
	hw_uint<16> img_img_1_merged265_544_res = img_1_merged265_write.extract<0, 15>();
	img_img_1_merged265_544_write(img_img_1_merged265_544_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_545_res = img_1_merged265_write.extract<16, 31>();
	img_img_1_merged265_545_write(img_img_1_merged265_545_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_546_res = img_1_merged265_write.extract<32, 47>();
	img_img_1_merged265_546_write(img_img_1_merged265_546_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_547_res = img_1_merged265_write.extract<48, 63>();
	img_img_1_merged265_547_write(img_img_1_merged265_547_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_548_res = img_1_merged265_write.extract<64, 79>();
	img_img_1_merged265_548_write(img_img_1_merged265_548_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_549_res = img_1_merged265_write.extract<80, 95>();
	img_img_1_merged265_549_write(img_img_1_merged265_549_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_550_res = img_1_merged265_write.extract<96, 111>();
	img_img_1_merged265_550_write(img_img_1_merged265_550_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_551_res = img_1_merged265_write.extract<112, 127>();
	img_img_1_merged265_551_write(img_img_1_merged265_551_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_552_res = img_1_merged265_write.extract<128, 143>();
	img_img_1_merged265_552_write(img_img_1_merged265_552_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_553_res = img_1_merged265_write.extract<144, 159>();
	img_img_1_merged265_553_write(img_img_1_merged265_553_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_554_res = img_1_merged265_write.extract<160, 175>();
	img_img_1_merged265_554_write(img_img_1_merged265_554_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_555_res = img_1_merged265_write.extract<176, 191>();
	img_img_1_merged265_555_write(img_img_1_merged265_555_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_556_res = img_1_merged265_write.extract<192, 207>();
	img_img_1_merged265_556_write(img_img_1_merged265_556_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_557_res = img_1_merged265_write.extract<208, 223>();
	img_img_1_merged265_557_write(img_img_1_merged265_557_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_558_res = img_1_merged265_write.extract<224, 239>();
	img_img_1_merged265_558_write(img_img_1_merged265_558_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_559_res = img_1_merged265_write.extract<240, 255>();
	img_img_1_merged265_559_write(img_img_1_merged265_559_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_560_res = img_1_merged265_write.extract<256, 271>();
	img_img_1_merged265_560_write(img_img_1_merged265_560_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_561_res = img_1_merged265_write.extract<272, 287>();
	img_img_1_merged265_561_write(img_img_1_merged265_561_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_562_res = img_1_merged265_write.extract<288, 303>();
	img_img_1_merged265_562_write(img_img_1_merged265_562_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_563_res = img_1_merged265_write.extract<304, 319>();
	img_img_1_merged265_563_write(img_img_1_merged265_563_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_564_res = img_1_merged265_write.extract<320, 335>();
	img_img_1_merged265_564_write(img_img_1_merged265_564_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_565_res = img_1_merged265_write.extract<336, 351>();
	img_img_1_merged265_565_write(img_img_1_merged265_565_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_566_res = img_1_merged265_write.extract<352, 367>();
	img_img_1_merged265_566_write(img_img_1_merged265_566_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_567_res = img_1_merged265_write.extract<368, 383>();
	img_img_1_merged265_567_write(img_img_1_merged265_567_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_568_res = img_1_merged265_write.extract<384, 399>();
	img_img_1_merged265_568_write(img_img_1_merged265_568_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_569_res = img_1_merged265_write.extract<400, 415>();
	img_img_1_merged265_569_write(img_img_1_merged265_569_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_570_res = img_1_merged265_write.extract<416, 431>();
	img_img_1_merged265_570_write(img_img_1_merged265_570_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_571_res = img_1_merged265_write.extract<432, 447>();
	img_img_1_merged265_571_write(img_img_1_merged265_571_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_572_res = img_1_merged265_write.extract<448, 463>();
	img_img_1_merged265_572_write(img_img_1_merged265_572_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_573_res = img_1_merged265_write.extract<464, 479>();
	img_img_1_merged265_573_write(img_img_1_merged265_573_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_574_res = img_1_merged265_write.extract<480, 495>();
	img_img_1_merged265_574_write(img_img_1_merged265_574_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged265_575_res = img_1_merged265_write.extract<496, 511>();
	img_img_1_merged265_575_write(img_img_1_merged265_575_res, img, root, img_0, img_1, dynamic_address);
}

// mag_x_1_merged268_read
//	img_mag_x_1_merged268_352
//	img_mag_x_1_merged268_353
//	img_mag_x_1_merged268_354
//	img_mag_x_1_merged268_355
//	img_mag_x_1_merged268_356
//	img_mag_x_1_merged268_357
//	img_mag_x_1_merged268_358
//	img_mag_x_1_merged268_359
//	img_mag_x_1_merged268_360
//	img_mag_x_1_merged268_361
//	img_mag_x_1_merged268_362
//	img_mag_x_1_merged268_363
//	img_mag_x_1_merged268_364
//	img_mag_x_1_merged268_365
//	img_mag_x_1_merged268_366
//	img_mag_x_1_merged268_367
//	img_mag_x_1_merged268_368
//	img_mag_x_1_merged268_369
//	img_mag_x_1_merged268_370
//	img_mag_x_1_merged268_371
//	img_mag_x_1_merged268_372
//	img_mag_x_1_merged268_373
//	img_mag_x_1_merged268_374
//	img_mag_x_1_merged268_375
//	img_mag_x_1_merged268_376
//	img_mag_x_1_merged268_377
//	img_mag_x_1_merged268_378
//	img_mag_x_1_merged268_379
//	img_mag_x_1_merged268_380
//	img_mag_x_1_merged268_381
//	img_mag_x_1_merged268_382
//	img_mag_x_1_merged268_383
//	img_mag_x_1_merged268_384
//	img_mag_x_1_merged268_385
//	img_mag_x_1_merged268_386
//	img_mag_x_1_merged268_387
//	img_mag_x_1_merged268_388
//	img_mag_x_1_merged268_389
//	img_mag_x_1_merged268_390
//	img_mag_x_1_merged268_391
//	img_mag_x_1_merged268_392
//	img_mag_x_1_merged268_393
//	img_mag_x_1_merged268_394
//	img_mag_x_1_merged268_395
//	img_mag_x_1_merged268_396
//	img_mag_x_1_merged268_397
//	img_mag_x_1_merged268_398
//	img_mag_x_1_merged268_399
//	img_mag_x_1_merged268_400
//	img_mag_x_1_merged268_401
//	img_mag_x_1_merged268_402
//	img_mag_x_1_merged268_403
//	img_mag_x_1_merged268_404
//	img_mag_x_1_merged268_405
//	img_mag_x_1_merged268_406
//	img_mag_x_1_merged268_407
//	img_mag_x_1_merged268_408
//	img_mag_x_1_merged268_409
//	img_mag_x_1_merged268_410
//	img_mag_x_1_merged268_411
//	img_mag_x_1_merged268_412
//	img_mag_x_1_merged268_413
//	img_mag_x_1_merged268_414
//	img_mag_x_1_merged268_415
//	img_mag_x_1_merged268_416
//	img_mag_x_1_merged268_417
//	img_mag_x_1_merged268_418
//	img_mag_x_1_merged268_419
//	img_mag_x_1_merged268_420
//	img_mag_x_1_merged268_421
//	img_mag_x_1_merged268_422
//	img_mag_x_1_merged268_423
//	img_mag_x_1_merged268_424
//	img_mag_x_1_merged268_425
//	img_mag_x_1_merged268_426
//	img_mag_x_1_merged268_427
//	img_mag_x_1_merged268_428
//	img_mag_x_1_merged268_429
//	img_mag_x_1_merged268_430
//	img_mag_x_1_merged268_431
//	img_mag_x_1_merged268_432
//	img_mag_x_1_merged268_433
//	img_mag_x_1_merged268_434
//	img_mag_x_1_merged268_435
//	img_mag_x_1_merged268_436
//	img_mag_x_1_merged268_437
//	img_mag_x_1_merged268_438
//	img_mag_x_1_merged268_439
//	img_mag_x_1_merged268_440
//	img_mag_x_1_merged268_441
//	img_mag_x_1_merged268_442
//	img_mag_x_1_merged268_443
//	img_mag_x_1_merged268_444
//	img_mag_x_1_merged268_445
//	img_mag_x_1_merged268_446
//	img_mag_x_1_merged268_447
//	img_mag_x_1_merged268_448
//	img_mag_x_1_merged268_449
//	img_mag_x_1_merged268_450
//	img_mag_x_1_merged268_451
//	img_mag_x_1_merged268_452
//	img_mag_x_1_merged268_453
//	img_mag_x_1_merged268_454
//	img_mag_x_1_merged268_455
//	img_mag_x_1_merged268_456
//	img_mag_x_1_merged268_457
//	img_mag_x_1_merged268_458
//	img_mag_x_1_merged268_459
//	img_mag_x_1_merged268_460
//	img_mag_x_1_merged268_461
//	img_mag_x_1_merged268_462
//	img_mag_x_1_merged268_463
//	img_mag_x_1_merged268_464
//	img_mag_x_1_merged268_465
//	img_mag_x_1_merged268_466
//	img_mag_x_1_merged268_467
//	img_mag_x_1_merged268_468
//	img_mag_x_1_merged268_469
//	img_mag_x_1_merged268_470
//	img_mag_x_1_merged268_471
//	img_mag_x_1_merged268_472
//	img_mag_x_1_merged268_473
//	img_mag_x_1_merged268_474
//	img_mag_x_1_merged268_475
//	img_mag_x_1_merged268_476
//	img_mag_x_1_merged268_477
//	img_mag_x_1_merged268_478
//	img_mag_x_1_merged268_479
//	img_mag_x_1_merged268_480
//	img_mag_x_1_merged268_481
//	img_mag_x_1_merged268_482
//	img_mag_x_1_merged268_483
//	img_mag_x_1_merged268_484
//	img_mag_x_1_merged268_485
//	img_mag_x_1_merged268_486
//	img_mag_x_1_merged268_487
//	img_mag_x_1_merged268_488
//	img_mag_x_1_merged268_489
//	img_mag_x_1_merged268_490
//	img_mag_x_1_merged268_491
//	img_mag_x_1_merged268_492
//	img_mag_x_1_merged268_493
//	img_mag_x_1_merged268_494
//	img_mag_x_1_merged268_495
//	img_mag_x_1_merged268_496
//	img_mag_x_1_merged268_497
//	img_mag_x_1_merged268_498
//	img_mag_x_1_merged268_499
//	img_mag_x_1_merged268_500
//	img_mag_x_1_merged268_501
//	img_mag_x_1_merged268_502
//	img_mag_x_1_merged268_503
//	img_mag_x_1_merged268_504
//	img_mag_x_1_merged268_505
//	img_mag_x_1_merged268_506
//	img_mag_x_1_merged268_507
//	img_mag_x_1_merged268_508
//	img_mag_x_1_merged268_509
//	img_mag_x_1_merged268_510
//	img_mag_x_1_merged268_511
//	img_mag_x_1_merged268_512
//	img_mag_x_1_merged268_513
//	img_mag_x_1_merged268_514
//	img_mag_x_1_merged268_515
//	img_mag_x_1_merged268_516
//	img_mag_x_1_merged268_517
//	img_mag_x_1_merged268_518
//	img_mag_x_1_merged268_519
//	img_mag_x_1_merged268_520
//	img_mag_x_1_merged268_521
//	img_mag_x_1_merged268_522
//	img_mag_x_1_merged268_523
//	img_mag_x_1_merged268_524
//	img_mag_x_1_merged268_525
//	img_mag_x_1_merged268_526
//	img_mag_x_1_merged268_527
//	img_mag_x_1_merged268_528
//	img_mag_x_1_merged268_529
//	img_mag_x_1_merged268_530
//	img_mag_x_1_merged268_531
//	img_mag_x_1_merged268_532
//	img_mag_x_1_merged268_533
//	img_mag_x_1_merged268_534
//	img_mag_x_1_merged268_535
//	img_mag_x_1_merged268_536
//	img_mag_x_1_merged268_537
//	img_mag_x_1_merged268_538
//	img_mag_x_1_merged268_539
//	img_mag_x_1_merged268_540
//	img_mag_x_1_merged268_541
//	img_mag_x_1_merged268_542
//	img_mag_x_1_merged268_543
inline hw_uint<3072> img_mag_x_1_merged268_read_bundle_read(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  // # of ports in bundle: 192
    // img_mag_x_1_merged268_352
    // img_mag_x_1_merged268_353
    // img_mag_x_1_merged268_354
    // img_mag_x_1_merged268_355
    // img_mag_x_1_merged268_356
    // img_mag_x_1_merged268_357
    // img_mag_x_1_merged268_358
    // img_mag_x_1_merged268_359
    // img_mag_x_1_merged268_360
    // img_mag_x_1_merged268_361
    // img_mag_x_1_merged268_362
    // img_mag_x_1_merged268_363
    // img_mag_x_1_merged268_364
    // img_mag_x_1_merged268_365
    // img_mag_x_1_merged268_366
    // img_mag_x_1_merged268_367
    // img_mag_x_1_merged268_368
    // img_mag_x_1_merged268_369
    // img_mag_x_1_merged268_370
    // img_mag_x_1_merged268_371
    // img_mag_x_1_merged268_372
    // img_mag_x_1_merged268_373
    // img_mag_x_1_merged268_374
    // img_mag_x_1_merged268_375
    // img_mag_x_1_merged268_376
    // img_mag_x_1_merged268_377
    // img_mag_x_1_merged268_378
    // img_mag_x_1_merged268_379
    // img_mag_x_1_merged268_380
    // img_mag_x_1_merged268_381
    // img_mag_x_1_merged268_382
    // img_mag_x_1_merged268_383
    // img_mag_x_1_merged268_384
    // img_mag_x_1_merged268_385
    // img_mag_x_1_merged268_386
    // img_mag_x_1_merged268_387
    // img_mag_x_1_merged268_388
    // img_mag_x_1_merged268_389
    // img_mag_x_1_merged268_390
    // img_mag_x_1_merged268_391
    // img_mag_x_1_merged268_392
    // img_mag_x_1_merged268_393
    // img_mag_x_1_merged268_394
    // img_mag_x_1_merged268_395
    // img_mag_x_1_merged268_396
    // img_mag_x_1_merged268_397
    // img_mag_x_1_merged268_398
    // img_mag_x_1_merged268_399
    // img_mag_x_1_merged268_400
    // img_mag_x_1_merged268_401
    // img_mag_x_1_merged268_402
    // img_mag_x_1_merged268_403
    // img_mag_x_1_merged268_404
    // img_mag_x_1_merged268_405
    // img_mag_x_1_merged268_406
    // img_mag_x_1_merged268_407
    // img_mag_x_1_merged268_408
    // img_mag_x_1_merged268_409
    // img_mag_x_1_merged268_410
    // img_mag_x_1_merged268_411
    // img_mag_x_1_merged268_412
    // img_mag_x_1_merged268_413
    // img_mag_x_1_merged268_414
    // img_mag_x_1_merged268_415
    // img_mag_x_1_merged268_416
    // img_mag_x_1_merged268_417
    // img_mag_x_1_merged268_418
    // img_mag_x_1_merged268_419
    // img_mag_x_1_merged268_420
    // img_mag_x_1_merged268_421
    // img_mag_x_1_merged268_422
    // img_mag_x_1_merged268_423
    // img_mag_x_1_merged268_424
    // img_mag_x_1_merged268_425
    // img_mag_x_1_merged268_426
    // img_mag_x_1_merged268_427
    // img_mag_x_1_merged268_428
    // img_mag_x_1_merged268_429
    // img_mag_x_1_merged268_430
    // img_mag_x_1_merged268_431
    // img_mag_x_1_merged268_432
    // img_mag_x_1_merged268_433
    // img_mag_x_1_merged268_434
    // img_mag_x_1_merged268_435
    // img_mag_x_1_merged268_436
    // img_mag_x_1_merged268_437
    // img_mag_x_1_merged268_438
    // img_mag_x_1_merged268_439
    // img_mag_x_1_merged268_440
    // img_mag_x_1_merged268_441
    // img_mag_x_1_merged268_442
    // img_mag_x_1_merged268_443
    // img_mag_x_1_merged268_444
    // img_mag_x_1_merged268_445
    // img_mag_x_1_merged268_446
    // img_mag_x_1_merged268_447
    // img_mag_x_1_merged268_448
    // img_mag_x_1_merged268_449
    // img_mag_x_1_merged268_450
    // img_mag_x_1_merged268_451
    // img_mag_x_1_merged268_452
    // img_mag_x_1_merged268_453
    // img_mag_x_1_merged268_454
    // img_mag_x_1_merged268_455
    // img_mag_x_1_merged268_456
    // img_mag_x_1_merged268_457
    // img_mag_x_1_merged268_458
    // img_mag_x_1_merged268_459
    // img_mag_x_1_merged268_460
    // img_mag_x_1_merged268_461
    // img_mag_x_1_merged268_462
    // img_mag_x_1_merged268_463
    // img_mag_x_1_merged268_464
    // img_mag_x_1_merged268_465
    // img_mag_x_1_merged268_466
    // img_mag_x_1_merged268_467
    // img_mag_x_1_merged268_468
    // img_mag_x_1_merged268_469
    // img_mag_x_1_merged268_470
    // img_mag_x_1_merged268_471
    // img_mag_x_1_merged268_472
    // img_mag_x_1_merged268_473
    // img_mag_x_1_merged268_474
    // img_mag_x_1_merged268_475
    // img_mag_x_1_merged268_476
    // img_mag_x_1_merged268_477
    // img_mag_x_1_merged268_478
    // img_mag_x_1_merged268_479
    // img_mag_x_1_merged268_480
    // img_mag_x_1_merged268_481
    // img_mag_x_1_merged268_482
    // img_mag_x_1_merged268_483
    // img_mag_x_1_merged268_484
    // img_mag_x_1_merged268_485
    // img_mag_x_1_merged268_486
    // img_mag_x_1_merged268_487
    // img_mag_x_1_merged268_488
    // img_mag_x_1_merged268_489
    // img_mag_x_1_merged268_490
    // img_mag_x_1_merged268_491
    // img_mag_x_1_merged268_492
    // img_mag_x_1_merged268_493
    // img_mag_x_1_merged268_494
    // img_mag_x_1_merged268_495
    // img_mag_x_1_merged268_496
    // img_mag_x_1_merged268_497
    // img_mag_x_1_merged268_498
    // img_mag_x_1_merged268_499
    // img_mag_x_1_merged268_500
    // img_mag_x_1_merged268_501
    // img_mag_x_1_merged268_502
    // img_mag_x_1_merged268_503
    // img_mag_x_1_merged268_504
    // img_mag_x_1_merged268_505
    // img_mag_x_1_merged268_506
    // img_mag_x_1_merged268_507
    // img_mag_x_1_merged268_508
    // img_mag_x_1_merged268_509
    // img_mag_x_1_merged268_510
    // img_mag_x_1_merged268_511
    // img_mag_x_1_merged268_512
    // img_mag_x_1_merged268_513
    // img_mag_x_1_merged268_514
    // img_mag_x_1_merged268_515
    // img_mag_x_1_merged268_516
    // img_mag_x_1_merged268_517
    // img_mag_x_1_merged268_518
    // img_mag_x_1_merged268_519
    // img_mag_x_1_merged268_520
    // img_mag_x_1_merged268_521
    // img_mag_x_1_merged268_522
    // img_mag_x_1_merged268_523
    // img_mag_x_1_merged268_524
    // img_mag_x_1_merged268_525
    // img_mag_x_1_merged268_526
    // img_mag_x_1_merged268_527
    // img_mag_x_1_merged268_528
    // img_mag_x_1_merged268_529
    // img_mag_x_1_merged268_530
    // img_mag_x_1_merged268_531
    // img_mag_x_1_merged268_532
    // img_mag_x_1_merged268_533
    // img_mag_x_1_merged268_534
    // img_mag_x_1_merged268_535
    // img_mag_x_1_merged268_536
    // img_mag_x_1_merged268_537
    // img_mag_x_1_merged268_538
    // img_mag_x_1_merged268_539
    // img_mag_x_1_merged268_540
    // img_mag_x_1_merged268_541
    // img_mag_x_1_merged268_542
    // img_mag_x_1_merged268_543

	hw_uint<3072> result;
	hw_uint<16> img_mag_x_1_merged268_352_res = img_mag_x_1_merged268_352_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<0, 3072>(result, img_mag_x_1_merged268_352_res);
	hw_uint<16> img_mag_x_1_merged268_353_res = img_mag_x_1_merged268_353_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<16, 3072>(result, img_mag_x_1_merged268_353_res);
	hw_uint<16> img_mag_x_1_merged268_354_res = img_mag_x_1_merged268_354_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<32, 3072>(result, img_mag_x_1_merged268_354_res);
	hw_uint<16> img_mag_x_1_merged268_355_res = img_mag_x_1_merged268_355_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<48, 3072>(result, img_mag_x_1_merged268_355_res);
	hw_uint<16> img_mag_x_1_merged268_356_res = img_mag_x_1_merged268_356_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<64, 3072>(result, img_mag_x_1_merged268_356_res);
	hw_uint<16> img_mag_x_1_merged268_357_res = img_mag_x_1_merged268_357_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<80, 3072>(result, img_mag_x_1_merged268_357_res);
	hw_uint<16> img_mag_x_1_merged268_358_res = img_mag_x_1_merged268_358_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<96, 3072>(result, img_mag_x_1_merged268_358_res);
	hw_uint<16> img_mag_x_1_merged268_359_res = img_mag_x_1_merged268_359_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<112, 3072>(result, img_mag_x_1_merged268_359_res);
	hw_uint<16> img_mag_x_1_merged268_360_res = img_mag_x_1_merged268_360_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<128, 3072>(result, img_mag_x_1_merged268_360_res);
	hw_uint<16> img_mag_x_1_merged268_361_res = img_mag_x_1_merged268_361_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<144, 3072>(result, img_mag_x_1_merged268_361_res);
	hw_uint<16> img_mag_x_1_merged268_362_res = img_mag_x_1_merged268_362_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<160, 3072>(result, img_mag_x_1_merged268_362_res);
	hw_uint<16> img_mag_x_1_merged268_363_res = img_mag_x_1_merged268_363_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<176, 3072>(result, img_mag_x_1_merged268_363_res);
	hw_uint<16> img_mag_x_1_merged268_364_res = img_mag_x_1_merged268_364_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<192, 3072>(result, img_mag_x_1_merged268_364_res);
	hw_uint<16> img_mag_x_1_merged268_365_res = img_mag_x_1_merged268_365_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<208, 3072>(result, img_mag_x_1_merged268_365_res);
	hw_uint<16> img_mag_x_1_merged268_366_res = img_mag_x_1_merged268_366_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<224, 3072>(result, img_mag_x_1_merged268_366_res);
	hw_uint<16> img_mag_x_1_merged268_367_res = img_mag_x_1_merged268_367_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<240, 3072>(result, img_mag_x_1_merged268_367_res);
	hw_uint<16> img_mag_x_1_merged268_368_res = img_mag_x_1_merged268_368_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<256, 3072>(result, img_mag_x_1_merged268_368_res);
	hw_uint<16> img_mag_x_1_merged268_369_res = img_mag_x_1_merged268_369_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<272, 3072>(result, img_mag_x_1_merged268_369_res);
	hw_uint<16> img_mag_x_1_merged268_370_res = img_mag_x_1_merged268_370_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<288, 3072>(result, img_mag_x_1_merged268_370_res);
	hw_uint<16> img_mag_x_1_merged268_371_res = img_mag_x_1_merged268_371_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<304, 3072>(result, img_mag_x_1_merged268_371_res);
	hw_uint<16> img_mag_x_1_merged268_372_res = img_mag_x_1_merged268_372_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<320, 3072>(result, img_mag_x_1_merged268_372_res);
	hw_uint<16> img_mag_x_1_merged268_373_res = img_mag_x_1_merged268_373_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<336, 3072>(result, img_mag_x_1_merged268_373_res);
	hw_uint<16> img_mag_x_1_merged268_374_res = img_mag_x_1_merged268_374_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<352, 3072>(result, img_mag_x_1_merged268_374_res);
	hw_uint<16> img_mag_x_1_merged268_375_res = img_mag_x_1_merged268_375_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<368, 3072>(result, img_mag_x_1_merged268_375_res);
	hw_uint<16> img_mag_x_1_merged268_376_res = img_mag_x_1_merged268_376_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<384, 3072>(result, img_mag_x_1_merged268_376_res);
	hw_uint<16> img_mag_x_1_merged268_377_res = img_mag_x_1_merged268_377_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<400, 3072>(result, img_mag_x_1_merged268_377_res);
	hw_uint<16> img_mag_x_1_merged268_378_res = img_mag_x_1_merged268_378_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<416, 3072>(result, img_mag_x_1_merged268_378_res);
	hw_uint<16> img_mag_x_1_merged268_379_res = img_mag_x_1_merged268_379_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<432, 3072>(result, img_mag_x_1_merged268_379_res);
	hw_uint<16> img_mag_x_1_merged268_380_res = img_mag_x_1_merged268_380_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<448, 3072>(result, img_mag_x_1_merged268_380_res);
	hw_uint<16> img_mag_x_1_merged268_381_res = img_mag_x_1_merged268_381_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<464, 3072>(result, img_mag_x_1_merged268_381_res);
	hw_uint<16> img_mag_x_1_merged268_382_res = img_mag_x_1_merged268_382_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<480, 3072>(result, img_mag_x_1_merged268_382_res);
	hw_uint<16> img_mag_x_1_merged268_383_res = img_mag_x_1_merged268_383_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<496, 3072>(result, img_mag_x_1_merged268_383_res);
	hw_uint<16> img_mag_x_1_merged268_384_res = img_mag_x_1_merged268_384_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<512, 3072>(result, img_mag_x_1_merged268_384_res);
	hw_uint<16> img_mag_x_1_merged268_385_res = img_mag_x_1_merged268_385_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<528, 3072>(result, img_mag_x_1_merged268_385_res);
	hw_uint<16> img_mag_x_1_merged268_386_res = img_mag_x_1_merged268_386_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<544, 3072>(result, img_mag_x_1_merged268_386_res);
	hw_uint<16> img_mag_x_1_merged268_387_res = img_mag_x_1_merged268_387_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<560, 3072>(result, img_mag_x_1_merged268_387_res);
	hw_uint<16> img_mag_x_1_merged268_388_res = img_mag_x_1_merged268_388_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<576, 3072>(result, img_mag_x_1_merged268_388_res);
	hw_uint<16> img_mag_x_1_merged268_389_res = img_mag_x_1_merged268_389_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<592, 3072>(result, img_mag_x_1_merged268_389_res);
	hw_uint<16> img_mag_x_1_merged268_390_res = img_mag_x_1_merged268_390_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<608, 3072>(result, img_mag_x_1_merged268_390_res);
	hw_uint<16> img_mag_x_1_merged268_391_res = img_mag_x_1_merged268_391_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<624, 3072>(result, img_mag_x_1_merged268_391_res);
	hw_uint<16> img_mag_x_1_merged268_392_res = img_mag_x_1_merged268_392_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<640, 3072>(result, img_mag_x_1_merged268_392_res);
	hw_uint<16> img_mag_x_1_merged268_393_res = img_mag_x_1_merged268_393_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<656, 3072>(result, img_mag_x_1_merged268_393_res);
	hw_uint<16> img_mag_x_1_merged268_394_res = img_mag_x_1_merged268_394_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<672, 3072>(result, img_mag_x_1_merged268_394_res);
	hw_uint<16> img_mag_x_1_merged268_395_res = img_mag_x_1_merged268_395_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<688, 3072>(result, img_mag_x_1_merged268_395_res);
	hw_uint<16> img_mag_x_1_merged268_396_res = img_mag_x_1_merged268_396_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<704, 3072>(result, img_mag_x_1_merged268_396_res);
	hw_uint<16> img_mag_x_1_merged268_397_res = img_mag_x_1_merged268_397_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<720, 3072>(result, img_mag_x_1_merged268_397_res);
	hw_uint<16> img_mag_x_1_merged268_398_res = img_mag_x_1_merged268_398_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<736, 3072>(result, img_mag_x_1_merged268_398_res);
	hw_uint<16> img_mag_x_1_merged268_399_res = img_mag_x_1_merged268_399_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<752, 3072>(result, img_mag_x_1_merged268_399_res);
	hw_uint<16> img_mag_x_1_merged268_400_res = img_mag_x_1_merged268_400_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<768, 3072>(result, img_mag_x_1_merged268_400_res);
	hw_uint<16> img_mag_x_1_merged268_401_res = img_mag_x_1_merged268_401_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<784, 3072>(result, img_mag_x_1_merged268_401_res);
	hw_uint<16> img_mag_x_1_merged268_402_res = img_mag_x_1_merged268_402_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<800, 3072>(result, img_mag_x_1_merged268_402_res);
	hw_uint<16> img_mag_x_1_merged268_403_res = img_mag_x_1_merged268_403_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<816, 3072>(result, img_mag_x_1_merged268_403_res);
	hw_uint<16> img_mag_x_1_merged268_404_res = img_mag_x_1_merged268_404_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<832, 3072>(result, img_mag_x_1_merged268_404_res);
	hw_uint<16> img_mag_x_1_merged268_405_res = img_mag_x_1_merged268_405_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<848, 3072>(result, img_mag_x_1_merged268_405_res);
	hw_uint<16> img_mag_x_1_merged268_406_res = img_mag_x_1_merged268_406_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<864, 3072>(result, img_mag_x_1_merged268_406_res);
	hw_uint<16> img_mag_x_1_merged268_407_res = img_mag_x_1_merged268_407_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<880, 3072>(result, img_mag_x_1_merged268_407_res);
	hw_uint<16> img_mag_x_1_merged268_408_res = img_mag_x_1_merged268_408_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<896, 3072>(result, img_mag_x_1_merged268_408_res);
	hw_uint<16> img_mag_x_1_merged268_409_res = img_mag_x_1_merged268_409_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<912, 3072>(result, img_mag_x_1_merged268_409_res);
	hw_uint<16> img_mag_x_1_merged268_410_res = img_mag_x_1_merged268_410_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<928, 3072>(result, img_mag_x_1_merged268_410_res);
	hw_uint<16> img_mag_x_1_merged268_411_res = img_mag_x_1_merged268_411_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<944, 3072>(result, img_mag_x_1_merged268_411_res);
	hw_uint<16> img_mag_x_1_merged268_412_res = img_mag_x_1_merged268_412_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<960, 3072>(result, img_mag_x_1_merged268_412_res);
	hw_uint<16> img_mag_x_1_merged268_413_res = img_mag_x_1_merged268_413_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<976, 3072>(result, img_mag_x_1_merged268_413_res);
	hw_uint<16> img_mag_x_1_merged268_414_res = img_mag_x_1_merged268_414_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<992, 3072>(result, img_mag_x_1_merged268_414_res);
	hw_uint<16> img_mag_x_1_merged268_415_res = img_mag_x_1_merged268_415_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1008, 3072>(result, img_mag_x_1_merged268_415_res);
	hw_uint<16> img_mag_x_1_merged268_416_res = img_mag_x_1_merged268_416_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1024, 3072>(result, img_mag_x_1_merged268_416_res);
	hw_uint<16> img_mag_x_1_merged268_417_res = img_mag_x_1_merged268_417_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1040, 3072>(result, img_mag_x_1_merged268_417_res);
	hw_uint<16> img_mag_x_1_merged268_418_res = img_mag_x_1_merged268_418_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1056, 3072>(result, img_mag_x_1_merged268_418_res);
	hw_uint<16> img_mag_x_1_merged268_419_res = img_mag_x_1_merged268_419_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1072, 3072>(result, img_mag_x_1_merged268_419_res);
	hw_uint<16> img_mag_x_1_merged268_420_res = img_mag_x_1_merged268_420_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1088, 3072>(result, img_mag_x_1_merged268_420_res);
	hw_uint<16> img_mag_x_1_merged268_421_res = img_mag_x_1_merged268_421_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1104, 3072>(result, img_mag_x_1_merged268_421_res);
	hw_uint<16> img_mag_x_1_merged268_422_res = img_mag_x_1_merged268_422_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1120, 3072>(result, img_mag_x_1_merged268_422_res);
	hw_uint<16> img_mag_x_1_merged268_423_res = img_mag_x_1_merged268_423_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1136, 3072>(result, img_mag_x_1_merged268_423_res);
	hw_uint<16> img_mag_x_1_merged268_424_res = img_mag_x_1_merged268_424_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1152, 3072>(result, img_mag_x_1_merged268_424_res);
	hw_uint<16> img_mag_x_1_merged268_425_res = img_mag_x_1_merged268_425_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1168, 3072>(result, img_mag_x_1_merged268_425_res);
	hw_uint<16> img_mag_x_1_merged268_426_res = img_mag_x_1_merged268_426_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1184, 3072>(result, img_mag_x_1_merged268_426_res);
	hw_uint<16> img_mag_x_1_merged268_427_res = img_mag_x_1_merged268_427_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1200, 3072>(result, img_mag_x_1_merged268_427_res);
	hw_uint<16> img_mag_x_1_merged268_428_res = img_mag_x_1_merged268_428_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1216, 3072>(result, img_mag_x_1_merged268_428_res);
	hw_uint<16> img_mag_x_1_merged268_429_res = img_mag_x_1_merged268_429_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1232, 3072>(result, img_mag_x_1_merged268_429_res);
	hw_uint<16> img_mag_x_1_merged268_430_res = img_mag_x_1_merged268_430_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1248, 3072>(result, img_mag_x_1_merged268_430_res);
	hw_uint<16> img_mag_x_1_merged268_431_res = img_mag_x_1_merged268_431_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1264, 3072>(result, img_mag_x_1_merged268_431_res);
	hw_uint<16> img_mag_x_1_merged268_432_res = img_mag_x_1_merged268_432_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1280, 3072>(result, img_mag_x_1_merged268_432_res);
	hw_uint<16> img_mag_x_1_merged268_433_res = img_mag_x_1_merged268_433_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1296, 3072>(result, img_mag_x_1_merged268_433_res);
	hw_uint<16> img_mag_x_1_merged268_434_res = img_mag_x_1_merged268_434_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1312, 3072>(result, img_mag_x_1_merged268_434_res);
	hw_uint<16> img_mag_x_1_merged268_435_res = img_mag_x_1_merged268_435_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1328, 3072>(result, img_mag_x_1_merged268_435_res);
	hw_uint<16> img_mag_x_1_merged268_436_res = img_mag_x_1_merged268_436_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1344, 3072>(result, img_mag_x_1_merged268_436_res);
	hw_uint<16> img_mag_x_1_merged268_437_res = img_mag_x_1_merged268_437_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1360, 3072>(result, img_mag_x_1_merged268_437_res);
	hw_uint<16> img_mag_x_1_merged268_438_res = img_mag_x_1_merged268_438_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1376, 3072>(result, img_mag_x_1_merged268_438_res);
	hw_uint<16> img_mag_x_1_merged268_439_res = img_mag_x_1_merged268_439_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1392, 3072>(result, img_mag_x_1_merged268_439_res);
	hw_uint<16> img_mag_x_1_merged268_440_res = img_mag_x_1_merged268_440_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1408, 3072>(result, img_mag_x_1_merged268_440_res);
	hw_uint<16> img_mag_x_1_merged268_441_res = img_mag_x_1_merged268_441_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1424, 3072>(result, img_mag_x_1_merged268_441_res);
	hw_uint<16> img_mag_x_1_merged268_442_res = img_mag_x_1_merged268_442_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1440, 3072>(result, img_mag_x_1_merged268_442_res);
	hw_uint<16> img_mag_x_1_merged268_443_res = img_mag_x_1_merged268_443_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1456, 3072>(result, img_mag_x_1_merged268_443_res);
	hw_uint<16> img_mag_x_1_merged268_444_res = img_mag_x_1_merged268_444_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1472, 3072>(result, img_mag_x_1_merged268_444_res);
	hw_uint<16> img_mag_x_1_merged268_445_res = img_mag_x_1_merged268_445_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1488, 3072>(result, img_mag_x_1_merged268_445_res);
	hw_uint<16> img_mag_x_1_merged268_446_res = img_mag_x_1_merged268_446_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1504, 3072>(result, img_mag_x_1_merged268_446_res);
	hw_uint<16> img_mag_x_1_merged268_447_res = img_mag_x_1_merged268_447_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1520, 3072>(result, img_mag_x_1_merged268_447_res);
	hw_uint<16> img_mag_x_1_merged268_448_res = img_mag_x_1_merged268_448_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1536, 3072>(result, img_mag_x_1_merged268_448_res);
	hw_uint<16> img_mag_x_1_merged268_449_res = img_mag_x_1_merged268_449_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1552, 3072>(result, img_mag_x_1_merged268_449_res);
	hw_uint<16> img_mag_x_1_merged268_450_res = img_mag_x_1_merged268_450_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1568, 3072>(result, img_mag_x_1_merged268_450_res);
	hw_uint<16> img_mag_x_1_merged268_451_res = img_mag_x_1_merged268_451_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1584, 3072>(result, img_mag_x_1_merged268_451_res);
	hw_uint<16> img_mag_x_1_merged268_452_res = img_mag_x_1_merged268_452_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1600, 3072>(result, img_mag_x_1_merged268_452_res);
	hw_uint<16> img_mag_x_1_merged268_453_res = img_mag_x_1_merged268_453_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1616, 3072>(result, img_mag_x_1_merged268_453_res);
	hw_uint<16> img_mag_x_1_merged268_454_res = img_mag_x_1_merged268_454_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1632, 3072>(result, img_mag_x_1_merged268_454_res);
	hw_uint<16> img_mag_x_1_merged268_455_res = img_mag_x_1_merged268_455_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1648, 3072>(result, img_mag_x_1_merged268_455_res);
	hw_uint<16> img_mag_x_1_merged268_456_res = img_mag_x_1_merged268_456_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1664, 3072>(result, img_mag_x_1_merged268_456_res);
	hw_uint<16> img_mag_x_1_merged268_457_res = img_mag_x_1_merged268_457_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1680, 3072>(result, img_mag_x_1_merged268_457_res);
	hw_uint<16> img_mag_x_1_merged268_458_res = img_mag_x_1_merged268_458_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1696, 3072>(result, img_mag_x_1_merged268_458_res);
	hw_uint<16> img_mag_x_1_merged268_459_res = img_mag_x_1_merged268_459_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1712, 3072>(result, img_mag_x_1_merged268_459_res);
	hw_uint<16> img_mag_x_1_merged268_460_res = img_mag_x_1_merged268_460_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1728, 3072>(result, img_mag_x_1_merged268_460_res);
	hw_uint<16> img_mag_x_1_merged268_461_res = img_mag_x_1_merged268_461_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1744, 3072>(result, img_mag_x_1_merged268_461_res);
	hw_uint<16> img_mag_x_1_merged268_462_res = img_mag_x_1_merged268_462_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1760, 3072>(result, img_mag_x_1_merged268_462_res);
	hw_uint<16> img_mag_x_1_merged268_463_res = img_mag_x_1_merged268_463_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1776, 3072>(result, img_mag_x_1_merged268_463_res);
	hw_uint<16> img_mag_x_1_merged268_464_res = img_mag_x_1_merged268_464_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1792, 3072>(result, img_mag_x_1_merged268_464_res);
	hw_uint<16> img_mag_x_1_merged268_465_res = img_mag_x_1_merged268_465_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1808, 3072>(result, img_mag_x_1_merged268_465_res);
	hw_uint<16> img_mag_x_1_merged268_466_res = img_mag_x_1_merged268_466_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1824, 3072>(result, img_mag_x_1_merged268_466_res);
	hw_uint<16> img_mag_x_1_merged268_467_res = img_mag_x_1_merged268_467_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1840, 3072>(result, img_mag_x_1_merged268_467_res);
	hw_uint<16> img_mag_x_1_merged268_468_res = img_mag_x_1_merged268_468_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1856, 3072>(result, img_mag_x_1_merged268_468_res);
	hw_uint<16> img_mag_x_1_merged268_469_res = img_mag_x_1_merged268_469_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1872, 3072>(result, img_mag_x_1_merged268_469_res);
	hw_uint<16> img_mag_x_1_merged268_470_res = img_mag_x_1_merged268_470_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1888, 3072>(result, img_mag_x_1_merged268_470_res);
	hw_uint<16> img_mag_x_1_merged268_471_res = img_mag_x_1_merged268_471_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1904, 3072>(result, img_mag_x_1_merged268_471_res);
	hw_uint<16> img_mag_x_1_merged268_472_res = img_mag_x_1_merged268_472_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1920, 3072>(result, img_mag_x_1_merged268_472_res);
	hw_uint<16> img_mag_x_1_merged268_473_res = img_mag_x_1_merged268_473_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1936, 3072>(result, img_mag_x_1_merged268_473_res);
	hw_uint<16> img_mag_x_1_merged268_474_res = img_mag_x_1_merged268_474_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1952, 3072>(result, img_mag_x_1_merged268_474_res);
	hw_uint<16> img_mag_x_1_merged268_475_res = img_mag_x_1_merged268_475_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1968, 3072>(result, img_mag_x_1_merged268_475_res);
	hw_uint<16> img_mag_x_1_merged268_476_res = img_mag_x_1_merged268_476_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1984, 3072>(result, img_mag_x_1_merged268_476_res);
	hw_uint<16> img_mag_x_1_merged268_477_res = img_mag_x_1_merged268_477_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2000, 3072>(result, img_mag_x_1_merged268_477_res);
	hw_uint<16> img_mag_x_1_merged268_478_res = img_mag_x_1_merged268_478_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2016, 3072>(result, img_mag_x_1_merged268_478_res);
	hw_uint<16> img_mag_x_1_merged268_479_res = img_mag_x_1_merged268_479_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2032, 3072>(result, img_mag_x_1_merged268_479_res);
	hw_uint<16> img_mag_x_1_merged268_480_res = img_mag_x_1_merged268_480_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2048, 3072>(result, img_mag_x_1_merged268_480_res);
	hw_uint<16> img_mag_x_1_merged268_481_res = img_mag_x_1_merged268_481_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2064, 3072>(result, img_mag_x_1_merged268_481_res);
	hw_uint<16> img_mag_x_1_merged268_482_res = img_mag_x_1_merged268_482_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2080, 3072>(result, img_mag_x_1_merged268_482_res);
	hw_uint<16> img_mag_x_1_merged268_483_res = img_mag_x_1_merged268_483_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2096, 3072>(result, img_mag_x_1_merged268_483_res);
	hw_uint<16> img_mag_x_1_merged268_484_res = img_mag_x_1_merged268_484_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2112, 3072>(result, img_mag_x_1_merged268_484_res);
	hw_uint<16> img_mag_x_1_merged268_485_res = img_mag_x_1_merged268_485_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2128, 3072>(result, img_mag_x_1_merged268_485_res);
	hw_uint<16> img_mag_x_1_merged268_486_res = img_mag_x_1_merged268_486_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2144, 3072>(result, img_mag_x_1_merged268_486_res);
	hw_uint<16> img_mag_x_1_merged268_487_res = img_mag_x_1_merged268_487_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2160, 3072>(result, img_mag_x_1_merged268_487_res);
	hw_uint<16> img_mag_x_1_merged268_488_res = img_mag_x_1_merged268_488_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2176, 3072>(result, img_mag_x_1_merged268_488_res);
	hw_uint<16> img_mag_x_1_merged268_489_res = img_mag_x_1_merged268_489_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2192, 3072>(result, img_mag_x_1_merged268_489_res);
	hw_uint<16> img_mag_x_1_merged268_490_res = img_mag_x_1_merged268_490_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2208, 3072>(result, img_mag_x_1_merged268_490_res);
	hw_uint<16> img_mag_x_1_merged268_491_res = img_mag_x_1_merged268_491_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2224, 3072>(result, img_mag_x_1_merged268_491_res);
	hw_uint<16> img_mag_x_1_merged268_492_res = img_mag_x_1_merged268_492_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2240, 3072>(result, img_mag_x_1_merged268_492_res);
	hw_uint<16> img_mag_x_1_merged268_493_res = img_mag_x_1_merged268_493_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2256, 3072>(result, img_mag_x_1_merged268_493_res);
	hw_uint<16> img_mag_x_1_merged268_494_res = img_mag_x_1_merged268_494_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2272, 3072>(result, img_mag_x_1_merged268_494_res);
	hw_uint<16> img_mag_x_1_merged268_495_res = img_mag_x_1_merged268_495_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2288, 3072>(result, img_mag_x_1_merged268_495_res);
	hw_uint<16> img_mag_x_1_merged268_496_res = img_mag_x_1_merged268_496_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2304, 3072>(result, img_mag_x_1_merged268_496_res);
	hw_uint<16> img_mag_x_1_merged268_497_res = img_mag_x_1_merged268_497_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2320, 3072>(result, img_mag_x_1_merged268_497_res);
	hw_uint<16> img_mag_x_1_merged268_498_res = img_mag_x_1_merged268_498_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2336, 3072>(result, img_mag_x_1_merged268_498_res);
	hw_uint<16> img_mag_x_1_merged268_499_res = img_mag_x_1_merged268_499_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2352, 3072>(result, img_mag_x_1_merged268_499_res);
	hw_uint<16> img_mag_x_1_merged268_500_res = img_mag_x_1_merged268_500_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2368, 3072>(result, img_mag_x_1_merged268_500_res);
	hw_uint<16> img_mag_x_1_merged268_501_res = img_mag_x_1_merged268_501_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2384, 3072>(result, img_mag_x_1_merged268_501_res);
	hw_uint<16> img_mag_x_1_merged268_502_res = img_mag_x_1_merged268_502_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2400, 3072>(result, img_mag_x_1_merged268_502_res);
	hw_uint<16> img_mag_x_1_merged268_503_res = img_mag_x_1_merged268_503_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2416, 3072>(result, img_mag_x_1_merged268_503_res);
	hw_uint<16> img_mag_x_1_merged268_504_res = img_mag_x_1_merged268_504_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2432, 3072>(result, img_mag_x_1_merged268_504_res);
	hw_uint<16> img_mag_x_1_merged268_505_res = img_mag_x_1_merged268_505_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2448, 3072>(result, img_mag_x_1_merged268_505_res);
	hw_uint<16> img_mag_x_1_merged268_506_res = img_mag_x_1_merged268_506_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2464, 3072>(result, img_mag_x_1_merged268_506_res);
	hw_uint<16> img_mag_x_1_merged268_507_res = img_mag_x_1_merged268_507_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2480, 3072>(result, img_mag_x_1_merged268_507_res);
	hw_uint<16> img_mag_x_1_merged268_508_res = img_mag_x_1_merged268_508_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2496, 3072>(result, img_mag_x_1_merged268_508_res);
	hw_uint<16> img_mag_x_1_merged268_509_res = img_mag_x_1_merged268_509_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2512, 3072>(result, img_mag_x_1_merged268_509_res);
	hw_uint<16> img_mag_x_1_merged268_510_res = img_mag_x_1_merged268_510_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2528, 3072>(result, img_mag_x_1_merged268_510_res);
	hw_uint<16> img_mag_x_1_merged268_511_res = img_mag_x_1_merged268_511_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2544, 3072>(result, img_mag_x_1_merged268_511_res);
	hw_uint<16> img_mag_x_1_merged268_512_res = img_mag_x_1_merged268_512_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2560, 3072>(result, img_mag_x_1_merged268_512_res);
	hw_uint<16> img_mag_x_1_merged268_513_res = img_mag_x_1_merged268_513_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2576, 3072>(result, img_mag_x_1_merged268_513_res);
	hw_uint<16> img_mag_x_1_merged268_514_res = img_mag_x_1_merged268_514_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2592, 3072>(result, img_mag_x_1_merged268_514_res);
	hw_uint<16> img_mag_x_1_merged268_515_res = img_mag_x_1_merged268_515_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2608, 3072>(result, img_mag_x_1_merged268_515_res);
	hw_uint<16> img_mag_x_1_merged268_516_res = img_mag_x_1_merged268_516_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2624, 3072>(result, img_mag_x_1_merged268_516_res);
	hw_uint<16> img_mag_x_1_merged268_517_res = img_mag_x_1_merged268_517_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2640, 3072>(result, img_mag_x_1_merged268_517_res);
	hw_uint<16> img_mag_x_1_merged268_518_res = img_mag_x_1_merged268_518_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2656, 3072>(result, img_mag_x_1_merged268_518_res);
	hw_uint<16> img_mag_x_1_merged268_519_res = img_mag_x_1_merged268_519_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2672, 3072>(result, img_mag_x_1_merged268_519_res);
	hw_uint<16> img_mag_x_1_merged268_520_res = img_mag_x_1_merged268_520_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2688, 3072>(result, img_mag_x_1_merged268_520_res);
	hw_uint<16> img_mag_x_1_merged268_521_res = img_mag_x_1_merged268_521_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2704, 3072>(result, img_mag_x_1_merged268_521_res);
	hw_uint<16> img_mag_x_1_merged268_522_res = img_mag_x_1_merged268_522_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2720, 3072>(result, img_mag_x_1_merged268_522_res);
	hw_uint<16> img_mag_x_1_merged268_523_res = img_mag_x_1_merged268_523_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2736, 3072>(result, img_mag_x_1_merged268_523_res);
	hw_uint<16> img_mag_x_1_merged268_524_res = img_mag_x_1_merged268_524_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2752, 3072>(result, img_mag_x_1_merged268_524_res);
	hw_uint<16> img_mag_x_1_merged268_525_res = img_mag_x_1_merged268_525_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2768, 3072>(result, img_mag_x_1_merged268_525_res);
	hw_uint<16> img_mag_x_1_merged268_526_res = img_mag_x_1_merged268_526_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2784, 3072>(result, img_mag_x_1_merged268_526_res);
	hw_uint<16> img_mag_x_1_merged268_527_res = img_mag_x_1_merged268_527_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2800, 3072>(result, img_mag_x_1_merged268_527_res);
	hw_uint<16> img_mag_x_1_merged268_528_res = img_mag_x_1_merged268_528_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2816, 3072>(result, img_mag_x_1_merged268_528_res);
	hw_uint<16> img_mag_x_1_merged268_529_res = img_mag_x_1_merged268_529_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2832, 3072>(result, img_mag_x_1_merged268_529_res);
	hw_uint<16> img_mag_x_1_merged268_530_res = img_mag_x_1_merged268_530_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2848, 3072>(result, img_mag_x_1_merged268_530_res);
	hw_uint<16> img_mag_x_1_merged268_531_res = img_mag_x_1_merged268_531_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2864, 3072>(result, img_mag_x_1_merged268_531_res);
	hw_uint<16> img_mag_x_1_merged268_532_res = img_mag_x_1_merged268_532_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2880, 3072>(result, img_mag_x_1_merged268_532_res);
	hw_uint<16> img_mag_x_1_merged268_533_res = img_mag_x_1_merged268_533_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2896, 3072>(result, img_mag_x_1_merged268_533_res);
	hw_uint<16> img_mag_x_1_merged268_534_res = img_mag_x_1_merged268_534_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2912, 3072>(result, img_mag_x_1_merged268_534_res);
	hw_uint<16> img_mag_x_1_merged268_535_res = img_mag_x_1_merged268_535_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2928, 3072>(result, img_mag_x_1_merged268_535_res);
	hw_uint<16> img_mag_x_1_merged268_536_res = img_mag_x_1_merged268_536_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2944, 3072>(result, img_mag_x_1_merged268_536_res);
	hw_uint<16> img_mag_x_1_merged268_537_res = img_mag_x_1_merged268_537_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2960, 3072>(result, img_mag_x_1_merged268_537_res);
	hw_uint<16> img_mag_x_1_merged268_538_res = img_mag_x_1_merged268_538_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2976, 3072>(result, img_mag_x_1_merged268_538_res);
	hw_uint<16> img_mag_x_1_merged268_539_res = img_mag_x_1_merged268_539_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<2992, 3072>(result, img_mag_x_1_merged268_539_res);
	hw_uint<16> img_mag_x_1_merged268_540_res = img_mag_x_1_merged268_540_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<3008, 3072>(result, img_mag_x_1_merged268_540_res);
	hw_uint<16> img_mag_x_1_merged268_541_res = img_mag_x_1_merged268_541_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<3024, 3072>(result, img_mag_x_1_merged268_541_res);
	hw_uint<16> img_mag_x_1_merged268_542_res = img_mag_x_1_merged268_542_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<3040, 3072>(result, img_mag_x_1_merged268_542_res);
	hw_uint<16> img_mag_x_1_merged268_543_res = img_mag_x_1_merged268_543_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<3056, 3072>(result, img_mag_x_1_merged268_543_res);
	return result;
}

// mag_y_1_merged262_read
//	img_mag_y_1_merged262_128
//	img_mag_y_1_merged262_129
//	img_mag_y_1_merged262_130
//	img_mag_y_1_merged262_131
//	img_mag_y_1_merged262_132
//	img_mag_y_1_merged262_133
//	img_mag_y_1_merged262_134
//	img_mag_y_1_merged262_135
//	img_mag_y_1_merged262_136
//	img_mag_y_1_merged262_137
//	img_mag_y_1_merged262_138
//	img_mag_y_1_merged262_139
//	img_mag_y_1_merged262_140
//	img_mag_y_1_merged262_141
//	img_mag_y_1_merged262_142
//	img_mag_y_1_merged262_143
//	img_mag_y_1_merged262_144
//	img_mag_y_1_merged262_145
//	img_mag_y_1_merged262_146
//	img_mag_y_1_merged262_147
//	img_mag_y_1_merged262_148
//	img_mag_y_1_merged262_149
//	img_mag_y_1_merged262_150
//	img_mag_y_1_merged262_151
//	img_mag_y_1_merged262_152
//	img_mag_y_1_merged262_153
//	img_mag_y_1_merged262_154
//	img_mag_y_1_merged262_155
//	img_mag_y_1_merged262_156
//	img_mag_y_1_merged262_157
//	img_mag_y_1_merged262_158
//	img_mag_y_1_merged262_159
//	img_mag_y_1_merged262_160
//	img_mag_y_1_merged262_161
//	img_mag_y_1_merged262_162
//	img_mag_y_1_merged262_163
//	img_mag_y_1_merged262_164
//	img_mag_y_1_merged262_165
//	img_mag_y_1_merged262_166
//	img_mag_y_1_merged262_167
//	img_mag_y_1_merged262_168
//	img_mag_y_1_merged262_169
//	img_mag_y_1_merged262_170
//	img_mag_y_1_merged262_171
//	img_mag_y_1_merged262_172
//	img_mag_y_1_merged262_173
//	img_mag_y_1_merged262_174
//	img_mag_y_1_merged262_175
//	img_mag_y_1_merged262_176
//	img_mag_y_1_merged262_177
//	img_mag_y_1_merged262_178
//	img_mag_y_1_merged262_179
//	img_mag_y_1_merged262_180
//	img_mag_y_1_merged262_181
//	img_mag_y_1_merged262_182
//	img_mag_y_1_merged262_183
//	img_mag_y_1_merged262_184
//	img_mag_y_1_merged262_185
//	img_mag_y_1_merged262_186
//	img_mag_y_1_merged262_187
//	img_mag_y_1_merged262_188
//	img_mag_y_1_merged262_189
//	img_mag_y_1_merged262_190
//	img_mag_y_1_merged262_191
//	img_mag_y_1_merged262_192
//	img_mag_y_1_merged262_193
//	img_mag_y_1_merged262_194
//	img_mag_y_1_merged262_195
//	img_mag_y_1_merged262_196
//	img_mag_y_1_merged262_197
//	img_mag_y_1_merged262_198
//	img_mag_y_1_merged262_199
//	img_mag_y_1_merged262_200
//	img_mag_y_1_merged262_201
//	img_mag_y_1_merged262_202
//	img_mag_y_1_merged262_203
//	img_mag_y_1_merged262_204
//	img_mag_y_1_merged262_205
//	img_mag_y_1_merged262_206
//	img_mag_y_1_merged262_207
//	img_mag_y_1_merged262_208
//	img_mag_y_1_merged262_209
//	img_mag_y_1_merged262_210
//	img_mag_y_1_merged262_211
//	img_mag_y_1_merged262_212
//	img_mag_y_1_merged262_213
//	img_mag_y_1_merged262_214
//	img_mag_y_1_merged262_215
//	img_mag_y_1_merged262_216
//	img_mag_y_1_merged262_217
//	img_mag_y_1_merged262_218
//	img_mag_y_1_merged262_219
//	img_mag_y_1_merged262_220
//	img_mag_y_1_merged262_221
//	img_mag_y_1_merged262_222
//	img_mag_y_1_merged262_223
//	img_mag_y_1_merged262_224
//	img_mag_y_1_merged262_225
//	img_mag_y_1_merged262_226
//	img_mag_y_1_merged262_227
//	img_mag_y_1_merged262_228
//	img_mag_y_1_merged262_229
//	img_mag_y_1_merged262_230
//	img_mag_y_1_merged262_231
//	img_mag_y_1_merged262_232
//	img_mag_y_1_merged262_233
//	img_mag_y_1_merged262_234
//	img_mag_y_1_merged262_235
//	img_mag_y_1_merged262_236
//	img_mag_y_1_merged262_237
//	img_mag_y_1_merged262_238
//	img_mag_y_1_merged262_239
//	img_mag_y_1_merged262_240
//	img_mag_y_1_merged262_241
//	img_mag_y_1_merged262_242
//	img_mag_y_1_merged262_243
//	img_mag_y_1_merged262_244
//	img_mag_y_1_merged262_245
//	img_mag_y_1_merged262_246
//	img_mag_y_1_merged262_247
//	img_mag_y_1_merged262_248
//	img_mag_y_1_merged262_249
//	img_mag_y_1_merged262_250
//	img_mag_y_1_merged262_251
//	img_mag_y_1_merged262_252
//	img_mag_y_1_merged262_253
//	img_mag_y_1_merged262_254
//	img_mag_y_1_merged262_255
//	img_mag_y_1_merged262_256
//	img_mag_y_1_merged262_257
//	img_mag_y_1_merged262_258
//	img_mag_y_1_merged262_259
//	img_mag_y_1_merged262_260
//	img_mag_y_1_merged262_261
//	img_mag_y_1_merged262_262
//	img_mag_y_1_merged262_263
//	img_mag_y_1_merged262_264
//	img_mag_y_1_merged262_265
//	img_mag_y_1_merged262_266
//	img_mag_y_1_merged262_267
//	img_mag_y_1_merged262_268
//	img_mag_y_1_merged262_269
//	img_mag_y_1_merged262_270
//	img_mag_y_1_merged262_271
//	img_mag_y_1_merged262_272
//	img_mag_y_1_merged262_273
//	img_mag_y_1_merged262_274
//	img_mag_y_1_merged262_275
//	img_mag_y_1_merged262_276
//	img_mag_y_1_merged262_277
//	img_mag_y_1_merged262_278
//	img_mag_y_1_merged262_279
//	img_mag_y_1_merged262_280
//	img_mag_y_1_merged262_281
//	img_mag_y_1_merged262_282
//	img_mag_y_1_merged262_283
//	img_mag_y_1_merged262_284
//	img_mag_y_1_merged262_285
//	img_mag_y_1_merged262_286
//	img_mag_y_1_merged262_287
//	img_mag_y_1_merged262_288
//	img_mag_y_1_merged262_289
//	img_mag_y_1_merged262_290
//	img_mag_y_1_merged262_291
//	img_mag_y_1_merged262_292
//	img_mag_y_1_merged262_293
//	img_mag_y_1_merged262_294
//	img_mag_y_1_merged262_295
//	img_mag_y_1_merged262_296
//	img_mag_y_1_merged262_297
//	img_mag_y_1_merged262_298
//	img_mag_y_1_merged262_299
//	img_mag_y_1_merged262_300
//	img_mag_y_1_merged262_301
//	img_mag_y_1_merged262_302
//	img_mag_y_1_merged262_303
//	img_mag_y_1_merged262_304
//	img_mag_y_1_merged262_305
//	img_mag_y_1_merged262_306
//	img_mag_y_1_merged262_307
//	img_mag_y_1_merged262_308
//	img_mag_y_1_merged262_309
//	img_mag_y_1_merged262_310
//	img_mag_y_1_merged262_311
//	img_mag_y_1_merged262_312
//	img_mag_y_1_merged262_313
//	img_mag_y_1_merged262_314
//	img_mag_y_1_merged262_315
//	img_mag_y_1_merged262_316
//	img_mag_y_1_merged262_317
//	img_mag_y_1_merged262_318
//	img_mag_y_1_merged262_319
inline hw_uint<3072> img_mag_y_1_merged262_read_bundle_read(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  // # of ports in bundle: 192
    // img_mag_y_1_merged262_128
    // img_mag_y_1_merged262_129
    // img_mag_y_1_merged262_130
    // img_mag_y_1_merged262_131
    // img_mag_y_1_merged262_132
    // img_mag_y_1_merged262_133
    // img_mag_y_1_merged262_134
    // img_mag_y_1_merged262_135
    // img_mag_y_1_merged262_136
    // img_mag_y_1_merged262_137
    // img_mag_y_1_merged262_138
    // img_mag_y_1_merged262_139
    // img_mag_y_1_merged262_140
    // img_mag_y_1_merged262_141
    // img_mag_y_1_merged262_142
    // img_mag_y_1_merged262_143
    // img_mag_y_1_merged262_144
    // img_mag_y_1_merged262_145
    // img_mag_y_1_merged262_146
    // img_mag_y_1_merged262_147
    // img_mag_y_1_merged262_148
    // img_mag_y_1_merged262_149
    // img_mag_y_1_merged262_150
    // img_mag_y_1_merged262_151
    // img_mag_y_1_merged262_152
    // img_mag_y_1_merged262_153
    // img_mag_y_1_merged262_154
    // img_mag_y_1_merged262_155
    // img_mag_y_1_merged262_156
    // img_mag_y_1_merged262_157
    // img_mag_y_1_merged262_158
    // img_mag_y_1_merged262_159
    // img_mag_y_1_merged262_160
    // img_mag_y_1_merged262_161
    // img_mag_y_1_merged262_162
    // img_mag_y_1_merged262_163
    // img_mag_y_1_merged262_164
    // img_mag_y_1_merged262_165
    // img_mag_y_1_merged262_166
    // img_mag_y_1_merged262_167
    // img_mag_y_1_merged262_168
    // img_mag_y_1_merged262_169
    // img_mag_y_1_merged262_170
    // img_mag_y_1_merged262_171
    // img_mag_y_1_merged262_172
    // img_mag_y_1_merged262_173
    // img_mag_y_1_merged262_174
    // img_mag_y_1_merged262_175
    // img_mag_y_1_merged262_176
    // img_mag_y_1_merged262_177
    // img_mag_y_1_merged262_178
    // img_mag_y_1_merged262_179
    // img_mag_y_1_merged262_180
    // img_mag_y_1_merged262_181
    // img_mag_y_1_merged262_182
    // img_mag_y_1_merged262_183
    // img_mag_y_1_merged262_184
    // img_mag_y_1_merged262_185
    // img_mag_y_1_merged262_186
    // img_mag_y_1_merged262_187
    // img_mag_y_1_merged262_188
    // img_mag_y_1_merged262_189
    // img_mag_y_1_merged262_190
    // img_mag_y_1_merged262_191
    // img_mag_y_1_merged262_192
    // img_mag_y_1_merged262_193
    // img_mag_y_1_merged262_194
    // img_mag_y_1_merged262_195
    // img_mag_y_1_merged262_196
    // img_mag_y_1_merged262_197
    // img_mag_y_1_merged262_198
    // img_mag_y_1_merged262_199
    // img_mag_y_1_merged262_200
    // img_mag_y_1_merged262_201
    // img_mag_y_1_merged262_202
    // img_mag_y_1_merged262_203
    // img_mag_y_1_merged262_204
    // img_mag_y_1_merged262_205
    // img_mag_y_1_merged262_206
    // img_mag_y_1_merged262_207
    // img_mag_y_1_merged262_208
    // img_mag_y_1_merged262_209
    // img_mag_y_1_merged262_210
    // img_mag_y_1_merged262_211
    // img_mag_y_1_merged262_212
    // img_mag_y_1_merged262_213
    // img_mag_y_1_merged262_214
    // img_mag_y_1_merged262_215
    // img_mag_y_1_merged262_216
    // img_mag_y_1_merged262_217
    // img_mag_y_1_merged262_218
    // img_mag_y_1_merged262_219
    // img_mag_y_1_merged262_220
    // img_mag_y_1_merged262_221
    // img_mag_y_1_merged262_222
    // img_mag_y_1_merged262_223
    // img_mag_y_1_merged262_224
    // img_mag_y_1_merged262_225
    // img_mag_y_1_merged262_226
    // img_mag_y_1_merged262_227
    // img_mag_y_1_merged262_228
    // img_mag_y_1_merged262_229
    // img_mag_y_1_merged262_230
    // img_mag_y_1_merged262_231
    // img_mag_y_1_merged262_232
    // img_mag_y_1_merged262_233
    // img_mag_y_1_merged262_234
    // img_mag_y_1_merged262_235
    // img_mag_y_1_merged262_236
    // img_mag_y_1_merged262_237
    // img_mag_y_1_merged262_238
    // img_mag_y_1_merged262_239
    // img_mag_y_1_merged262_240
    // img_mag_y_1_merged262_241
    // img_mag_y_1_merged262_242
    // img_mag_y_1_merged262_243
    // img_mag_y_1_merged262_244
    // img_mag_y_1_merged262_245
    // img_mag_y_1_merged262_246
    // img_mag_y_1_merged262_247
    // img_mag_y_1_merged262_248
    // img_mag_y_1_merged262_249
    // img_mag_y_1_merged262_250
    // img_mag_y_1_merged262_251
    // img_mag_y_1_merged262_252
    // img_mag_y_1_merged262_253
    // img_mag_y_1_merged262_254
    // img_mag_y_1_merged262_255
    // img_mag_y_1_merged262_256
    // img_mag_y_1_merged262_257
    // img_mag_y_1_merged262_258
    // img_mag_y_1_merged262_259
    // img_mag_y_1_merged262_260
    // img_mag_y_1_merged262_261
    // img_mag_y_1_merged262_262
    // img_mag_y_1_merged262_263
    // img_mag_y_1_merged262_264
    // img_mag_y_1_merged262_265
    // img_mag_y_1_merged262_266
    // img_mag_y_1_merged262_267
    // img_mag_y_1_merged262_268
    // img_mag_y_1_merged262_269
    // img_mag_y_1_merged262_270
    // img_mag_y_1_merged262_271
    // img_mag_y_1_merged262_272
    // img_mag_y_1_merged262_273
    // img_mag_y_1_merged262_274
    // img_mag_y_1_merged262_275
    // img_mag_y_1_merged262_276
    // img_mag_y_1_merged262_277
    // img_mag_y_1_merged262_278
    // img_mag_y_1_merged262_279
    // img_mag_y_1_merged262_280
    // img_mag_y_1_merged262_281
    // img_mag_y_1_merged262_282
    // img_mag_y_1_merged262_283
    // img_mag_y_1_merged262_284
    // img_mag_y_1_merged262_285
    // img_mag_y_1_merged262_286
    // img_mag_y_1_merged262_287
    // img_mag_y_1_merged262_288
    // img_mag_y_1_merged262_289
    // img_mag_y_1_merged262_290
    // img_mag_y_1_merged262_291
    // img_mag_y_1_merged262_292
    // img_mag_y_1_merged262_293
    // img_mag_y_1_merged262_294
    // img_mag_y_1_merged262_295
    // img_mag_y_1_merged262_296
    // img_mag_y_1_merged262_297
    // img_mag_y_1_merged262_298
    // img_mag_y_1_merged262_299
    // img_mag_y_1_merged262_300
    // img_mag_y_1_merged262_301
    // img_mag_y_1_merged262_302
    // img_mag_y_1_merged262_303
    // img_mag_y_1_merged262_304
    // img_mag_y_1_merged262_305
    // img_mag_y_1_merged262_306
    // img_mag_y_1_merged262_307
    // img_mag_y_1_merged262_308
    // img_mag_y_1_merged262_309
    // img_mag_y_1_merged262_310
    // img_mag_y_1_merged262_311
    // img_mag_y_1_merged262_312
    // img_mag_y_1_merged262_313
    // img_mag_y_1_merged262_314
    // img_mag_y_1_merged262_315
    // img_mag_y_1_merged262_316
    // img_mag_y_1_merged262_317
    // img_mag_y_1_merged262_318
    // img_mag_y_1_merged262_319

	hw_uint<3072> result;
	hw_uint<16> img_mag_y_1_merged262_128_res = img_mag_y_1_merged262_128_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<0, 3072>(result, img_mag_y_1_merged262_128_res);
	hw_uint<16> img_mag_y_1_merged262_129_res = img_mag_y_1_merged262_129_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<16, 3072>(result, img_mag_y_1_merged262_129_res);
	hw_uint<16> img_mag_y_1_merged262_130_res = img_mag_y_1_merged262_130_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<32, 3072>(result, img_mag_y_1_merged262_130_res);
	hw_uint<16> img_mag_y_1_merged262_131_res = img_mag_y_1_merged262_131_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<48, 3072>(result, img_mag_y_1_merged262_131_res);
	hw_uint<16> img_mag_y_1_merged262_132_res = img_mag_y_1_merged262_132_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<64, 3072>(result, img_mag_y_1_merged262_132_res);
	hw_uint<16> img_mag_y_1_merged262_133_res = img_mag_y_1_merged262_133_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<80, 3072>(result, img_mag_y_1_merged262_133_res);
	hw_uint<16> img_mag_y_1_merged262_134_res = img_mag_y_1_merged262_134_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<96, 3072>(result, img_mag_y_1_merged262_134_res);
	hw_uint<16> img_mag_y_1_merged262_135_res = img_mag_y_1_merged262_135_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<112, 3072>(result, img_mag_y_1_merged262_135_res);
	hw_uint<16> img_mag_y_1_merged262_136_res = img_mag_y_1_merged262_136_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<128, 3072>(result, img_mag_y_1_merged262_136_res);
	hw_uint<16> img_mag_y_1_merged262_137_res = img_mag_y_1_merged262_137_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<144, 3072>(result, img_mag_y_1_merged262_137_res);
	hw_uint<16> img_mag_y_1_merged262_138_res = img_mag_y_1_merged262_138_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<160, 3072>(result, img_mag_y_1_merged262_138_res);
	hw_uint<16> img_mag_y_1_merged262_139_res = img_mag_y_1_merged262_139_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<176, 3072>(result, img_mag_y_1_merged262_139_res);
	hw_uint<16> img_mag_y_1_merged262_140_res = img_mag_y_1_merged262_140_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<192, 3072>(result, img_mag_y_1_merged262_140_res);
	hw_uint<16> img_mag_y_1_merged262_141_res = img_mag_y_1_merged262_141_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<208, 3072>(result, img_mag_y_1_merged262_141_res);
	hw_uint<16> img_mag_y_1_merged262_142_res = img_mag_y_1_merged262_142_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<224, 3072>(result, img_mag_y_1_merged262_142_res);
	hw_uint<16> img_mag_y_1_merged262_143_res = img_mag_y_1_merged262_143_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<240, 3072>(result, img_mag_y_1_merged262_143_res);
	hw_uint<16> img_mag_y_1_merged262_144_res = img_mag_y_1_merged262_144_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<256, 3072>(result, img_mag_y_1_merged262_144_res);
	hw_uint<16> img_mag_y_1_merged262_145_res = img_mag_y_1_merged262_145_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<272, 3072>(result, img_mag_y_1_merged262_145_res);
	hw_uint<16> img_mag_y_1_merged262_146_res = img_mag_y_1_merged262_146_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<288, 3072>(result, img_mag_y_1_merged262_146_res);
	hw_uint<16> img_mag_y_1_merged262_147_res = img_mag_y_1_merged262_147_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<304, 3072>(result, img_mag_y_1_merged262_147_res);
	hw_uint<16> img_mag_y_1_merged262_148_res = img_mag_y_1_merged262_148_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<320, 3072>(result, img_mag_y_1_merged262_148_res);
	hw_uint<16> img_mag_y_1_merged262_149_res = img_mag_y_1_merged262_149_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<336, 3072>(result, img_mag_y_1_merged262_149_res);
	hw_uint<16> img_mag_y_1_merged262_150_res = img_mag_y_1_merged262_150_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<352, 3072>(result, img_mag_y_1_merged262_150_res);
	hw_uint<16> img_mag_y_1_merged262_151_res = img_mag_y_1_merged262_151_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<368, 3072>(result, img_mag_y_1_merged262_151_res);
	hw_uint<16> img_mag_y_1_merged262_152_res = img_mag_y_1_merged262_152_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<384, 3072>(result, img_mag_y_1_merged262_152_res);
	hw_uint<16> img_mag_y_1_merged262_153_res = img_mag_y_1_merged262_153_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<400, 3072>(result, img_mag_y_1_merged262_153_res);
	hw_uint<16> img_mag_y_1_merged262_154_res = img_mag_y_1_merged262_154_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<416, 3072>(result, img_mag_y_1_merged262_154_res);
	hw_uint<16> img_mag_y_1_merged262_155_res = img_mag_y_1_merged262_155_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<432, 3072>(result, img_mag_y_1_merged262_155_res);
	hw_uint<16> img_mag_y_1_merged262_156_res = img_mag_y_1_merged262_156_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<448, 3072>(result, img_mag_y_1_merged262_156_res);
	hw_uint<16> img_mag_y_1_merged262_157_res = img_mag_y_1_merged262_157_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<464, 3072>(result, img_mag_y_1_merged262_157_res);
	hw_uint<16> img_mag_y_1_merged262_158_res = img_mag_y_1_merged262_158_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<480, 3072>(result, img_mag_y_1_merged262_158_res);
	hw_uint<16> img_mag_y_1_merged262_159_res = img_mag_y_1_merged262_159_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<496, 3072>(result, img_mag_y_1_merged262_159_res);
	hw_uint<16> img_mag_y_1_merged262_160_res = img_mag_y_1_merged262_160_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<512, 3072>(result, img_mag_y_1_merged262_160_res);
	hw_uint<16> img_mag_y_1_merged262_161_res = img_mag_y_1_merged262_161_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<528, 3072>(result, img_mag_y_1_merged262_161_res);
	hw_uint<16> img_mag_y_1_merged262_162_res = img_mag_y_1_merged262_162_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<544, 3072>(result, img_mag_y_1_merged262_162_res);
	hw_uint<16> img_mag_y_1_merged262_163_res = img_mag_y_1_merged262_163_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<560, 3072>(result, img_mag_y_1_merged262_163_res);
	hw_uint<16> img_mag_y_1_merged262_164_res = img_mag_y_1_merged262_164_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<576, 3072>(result, img_mag_y_1_merged262_164_res);
	hw_uint<16> img_mag_y_1_merged262_165_res = img_mag_y_1_merged262_165_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<592, 3072>(result, img_mag_y_1_merged262_165_res);
	hw_uint<16> img_mag_y_1_merged262_166_res = img_mag_y_1_merged262_166_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<608, 3072>(result, img_mag_y_1_merged262_166_res);
	hw_uint<16> img_mag_y_1_merged262_167_res = img_mag_y_1_merged262_167_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<624, 3072>(result, img_mag_y_1_merged262_167_res);
	hw_uint<16> img_mag_y_1_merged262_168_res = img_mag_y_1_merged262_168_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<640, 3072>(result, img_mag_y_1_merged262_168_res);
	hw_uint<16> img_mag_y_1_merged262_169_res = img_mag_y_1_merged262_169_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<656, 3072>(result, img_mag_y_1_merged262_169_res);
	hw_uint<16> img_mag_y_1_merged262_170_res = img_mag_y_1_merged262_170_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<672, 3072>(result, img_mag_y_1_merged262_170_res);
	hw_uint<16> img_mag_y_1_merged262_171_res = img_mag_y_1_merged262_171_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<688, 3072>(result, img_mag_y_1_merged262_171_res);
	hw_uint<16> img_mag_y_1_merged262_172_res = img_mag_y_1_merged262_172_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<704, 3072>(result, img_mag_y_1_merged262_172_res);
	hw_uint<16> img_mag_y_1_merged262_173_res = img_mag_y_1_merged262_173_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<720, 3072>(result, img_mag_y_1_merged262_173_res);
	hw_uint<16> img_mag_y_1_merged262_174_res = img_mag_y_1_merged262_174_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<736, 3072>(result, img_mag_y_1_merged262_174_res);
	hw_uint<16> img_mag_y_1_merged262_175_res = img_mag_y_1_merged262_175_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<752, 3072>(result, img_mag_y_1_merged262_175_res);
	hw_uint<16> img_mag_y_1_merged262_176_res = img_mag_y_1_merged262_176_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<768, 3072>(result, img_mag_y_1_merged262_176_res);
	hw_uint<16> img_mag_y_1_merged262_177_res = img_mag_y_1_merged262_177_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<784, 3072>(result, img_mag_y_1_merged262_177_res);
	hw_uint<16> img_mag_y_1_merged262_178_res = img_mag_y_1_merged262_178_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<800, 3072>(result, img_mag_y_1_merged262_178_res);
	hw_uint<16> img_mag_y_1_merged262_179_res = img_mag_y_1_merged262_179_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<816, 3072>(result, img_mag_y_1_merged262_179_res);
	hw_uint<16> img_mag_y_1_merged262_180_res = img_mag_y_1_merged262_180_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<832, 3072>(result, img_mag_y_1_merged262_180_res);
	hw_uint<16> img_mag_y_1_merged262_181_res = img_mag_y_1_merged262_181_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<848, 3072>(result, img_mag_y_1_merged262_181_res);
	hw_uint<16> img_mag_y_1_merged262_182_res = img_mag_y_1_merged262_182_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<864, 3072>(result, img_mag_y_1_merged262_182_res);
	hw_uint<16> img_mag_y_1_merged262_183_res = img_mag_y_1_merged262_183_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<880, 3072>(result, img_mag_y_1_merged262_183_res);
	hw_uint<16> img_mag_y_1_merged262_184_res = img_mag_y_1_merged262_184_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<896, 3072>(result, img_mag_y_1_merged262_184_res);
	hw_uint<16> img_mag_y_1_merged262_185_res = img_mag_y_1_merged262_185_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<912, 3072>(result, img_mag_y_1_merged262_185_res);
	hw_uint<16> img_mag_y_1_merged262_186_res = img_mag_y_1_merged262_186_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<928, 3072>(result, img_mag_y_1_merged262_186_res);
	hw_uint<16> img_mag_y_1_merged262_187_res = img_mag_y_1_merged262_187_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<944, 3072>(result, img_mag_y_1_merged262_187_res);
	hw_uint<16> img_mag_y_1_merged262_188_res = img_mag_y_1_merged262_188_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<960, 3072>(result, img_mag_y_1_merged262_188_res);
	hw_uint<16> img_mag_y_1_merged262_189_res = img_mag_y_1_merged262_189_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<976, 3072>(result, img_mag_y_1_merged262_189_res);
	hw_uint<16> img_mag_y_1_merged262_190_res = img_mag_y_1_merged262_190_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<992, 3072>(result, img_mag_y_1_merged262_190_res);
	hw_uint<16> img_mag_y_1_merged262_191_res = img_mag_y_1_merged262_191_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1008, 3072>(result, img_mag_y_1_merged262_191_res);
	hw_uint<16> img_mag_y_1_merged262_192_res = img_mag_y_1_merged262_192_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1024, 3072>(result, img_mag_y_1_merged262_192_res);
	hw_uint<16> img_mag_y_1_merged262_193_res = img_mag_y_1_merged262_193_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1040, 3072>(result, img_mag_y_1_merged262_193_res);
	hw_uint<16> img_mag_y_1_merged262_194_res = img_mag_y_1_merged262_194_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1056, 3072>(result, img_mag_y_1_merged262_194_res);
	hw_uint<16> img_mag_y_1_merged262_195_res = img_mag_y_1_merged262_195_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1072, 3072>(result, img_mag_y_1_merged262_195_res);
	hw_uint<16> img_mag_y_1_merged262_196_res = img_mag_y_1_merged262_196_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1088, 3072>(result, img_mag_y_1_merged262_196_res);
	hw_uint<16> img_mag_y_1_merged262_197_res = img_mag_y_1_merged262_197_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1104, 3072>(result, img_mag_y_1_merged262_197_res);
	hw_uint<16> img_mag_y_1_merged262_198_res = img_mag_y_1_merged262_198_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1120, 3072>(result, img_mag_y_1_merged262_198_res);
	hw_uint<16> img_mag_y_1_merged262_199_res = img_mag_y_1_merged262_199_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1136, 3072>(result, img_mag_y_1_merged262_199_res);
	hw_uint<16> img_mag_y_1_merged262_200_res = img_mag_y_1_merged262_200_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1152, 3072>(result, img_mag_y_1_merged262_200_res);
	hw_uint<16> img_mag_y_1_merged262_201_res = img_mag_y_1_merged262_201_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1168, 3072>(result, img_mag_y_1_merged262_201_res);
	hw_uint<16> img_mag_y_1_merged262_202_res = img_mag_y_1_merged262_202_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1184, 3072>(result, img_mag_y_1_merged262_202_res);
	hw_uint<16> img_mag_y_1_merged262_203_res = img_mag_y_1_merged262_203_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1200, 3072>(result, img_mag_y_1_merged262_203_res);
	hw_uint<16> img_mag_y_1_merged262_204_res = img_mag_y_1_merged262_204_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1216, 3072>(result, img_mag_y_1_merged262_204_res);
	hw_uint<16> img_mag_y_1_merged262_205_res = img_mag_y_1_merged262_205_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1232, 3072>(result, img_mag_y_1_merged262_205_res);
	hw_uint<16> img_mag_y_1_merged262_206_res = img_mag_y_1_merged262_206_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1248, 3072>(result, img_mag_y_1_merged262_206_res);
	hw_uint<16> img_mag_y_1_merged262_207_res = img_mag_y_1_merged262_207_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1264, 3072>(result, img_mag_y_1_merged262_207_res);
	hw_uint<16> img_mag_y_1_merged262_208_res = img_mag_y_1_merged262_208_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1280, 3072>(result, img_mag_y_1_merged262_208_res);
	hw_uint<16> img_mag_y_1_merged262_209_res = img_mag_y_1_merged262_209_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1296, 3072>(result, img_mag_y_1_merged262_209_res);
	hw_uint<16> img_mag_y_1_merged262_210_res = img_mag_y_1_merged262_210_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1312, 3072>(result, img_mag_y_1_merged262_210_res);
	hw_uint<16> img_mag_y_1_merged262_211_res = img_mag_y_1_merged262_211_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1328, 3072>(result, img_mag_y_1_merged262_211_res);
	hw_uint<16> img_mag_y_1_merged262_212_res = img_mag_y_1_merged262_212_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1344, 3072>(result, img_mag_y_1_merged262_212_res);
	hw_uint<16> img_mag_y_1_merged262_213_res = img_mag_y_1_merged262_213_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1360, 3072>(result, img_mag_y_1_merged262_213_res);
	hw_uint<16> img_mag_y_1_merged262_214_res = img_mag_y_1_merged262_214_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1376, 3072>(result, img_mag_y_1_merged262_214_res);
	hw_uint<16> img_mag_y_1_merged262_215_res = img_mag_y_1_merged262_215_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1392, 3072>(result, img_mag_y_1_merged262_215_res);
	hw_uint<16> img_mag_y_1_merged262_216_res = img_mag_y_1_merged262_216_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1408, 3072>(result, img_mag_y_1_merged262_216_res);
	hw_uint<16> img_mag_y_1_merged262_217_res = img_mag_y_1_merged262_217_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1424, 3072>(result, img_mag_y_1_merged262_217_res);
	hw_uint<16> img_mag_y_1_merged262_218_res = img_mag_y_1_merged262_218_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1440, 3072>(result, img_mag_y_1_merged262_218_res);
	hw_uint<16> img_mag_y_1_merged262_219_res = img_mag_y_1_merged262_219_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1456, 3072>(result, img_mag_y_1_merged262_219_res);
	hw_uint<16> img_mag_y_1_merged262_220_res = img_mag_y_1_merged262_220_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1472, 3072>(result, img_mag_y_1_merged262_220_res);
	hw_uint<16> img_mag_y_1_merged262_221_res = img_mag_y_1_merged262_221_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1488, 3072>(result, img_mag_y_1_merged262_221_res);
	hw_uint<16> img_mag_y_1_merged262_222_res = img_mag_y_1_merged262_222_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1504, 3072>(result, img_mag_y_1_merged262_222_res);
	hw_uint<16> img_mag_y_1_merged262_223_res = img_mag_y_1_merged262_223_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1520, 3072>(result, img_mag_y_1_merged262_223_res);
	hw_uint<16> img_mag_y_1_merged262_224_res = img_mag_y_1_merged262_224_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1536, 3072>(result, img_mag_y_1_merged262_224_res);
	hw_uint<16> img_mag_y_1_merged262_225_res = img_mag_y_1_merged262_225_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1552, 3072>(result, img_mag_y_1_merged262_225_res);
	hw_uint<16> img_mag_y_1_merged262_226_res = img_mag_y_1_merged262_226_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1568, 3072>(result, img_mag_y_1_merged262_226_res);
	hw_uint<16> img_mag_y_1_merged262_227_res = img_mag_y_1_merged262_227_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1584, 3072>(result, img_mag_y_1_merged262_227_res);
	hw_uint<16> img_mag_y_1_merged262_228_res = img_mag_y_1_merged262_228_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1600, 3072>(result, img_mag_y_1_merged262_228_res);
	hw_uint<16> img_mag_y_1_merged262_229_res = img_mag_y_1_merged262_229_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1616, 3072>(result, img_mag_y_1_merged262_229_res);
	hw_uint<16> img_mag_y_1_merged262_230_res = img_mag_y_1_merged262_230_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1632, 3072>(result, img_mag_y_1_merged262_230_res);
	hw_uint<16> img_mag_y_1_merged262_231_res = img_mag_y_1_merged262_231_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1648, 3072>(result, img_mag_y_1_merged262_231_res);
	hw_uint<16> img_mag_y_1_merged262_232_res = img_mag_y_1_merged262_232_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1664, 3072>(result, img_mag_y_1_merged262_232_res);
	hw_uint<16> img_mag_y_1_merged262_233_res = img_mag_y_1_merged262_233_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1680, 3072>(result, img_mag_y_1_merged262_233_res);
	hw_uint<16> img_mag_y_1_merged262_234_res = img_mag_y_1_merged262_234_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1696, 3072>(result, img_mag_y_1_merged262_234_res);
	hw_uint<16> img_mag_y_1_merged262_235_res = img_mag_y_1_merged262_235_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1712, 3072>(result, img_mag_y_1_merged262_235_res);
	hw_uint<16> img_mag_y_1_merged262_236_res = img_mag_y_1_merged262_236_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1728, 3072>(result, img_mag_y_1_merged262_236_res);
	hw_uint<16> img_mag_y_1_merged262_237_res = img_mag_y_1_merged262_237_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1744, 3072>(result, img_mag_y_1_merged262_237_res);
	hw_uint<16> img_mag_y_1_merged262_238_res = img_mag_y_1_merged262_238_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1760, 3072>(result, img_mag_y_1_merged262_238_res);
	hw_uint<16> img_mag_y_1_merged262_239_res = img_mag_y_1_merged262_239_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1776, 3072>(result, img_mag_y_1_merged262_239_res);
	hw_uint<16> img_mag_y_1_merged262_240_res = img_mag_y_1_merged262_240_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1792, 3072>(result, img_mag_y_1_merged262_240_res);
	hw_uint<16> img_mag_y_1_merged262_241_res = img_mag_y_1_merged262_241_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1808, 3072>(result, img_mag_y_1_merged262_241_res);
	hw_uint<16> img_mag_y_1_merged262_242_res = img_mag_y_1_merged262_242_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1824, 3072>(result, img_mag_y_1_merged262_242_res);
	hw_uint<16> img_mag_y_1_merged262_243_res = img_mag_y_1_merged262_243_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1840, 3072>(result, img_mag_y_1_merged262_243_res);
	hw_uint<16> img_mag_y_1_merged262_244_res = img_mag_y_1_merged262_244_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1856, 3072>(result, img_mag_y_1_merged262_244_res);
	hw_uint<16> img_mag_y_1_merged262_245_res = img_mag_y_1_merged262_245_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1872, 3072>(result, img_mag_y_1_merged262_245_res);
	hw_uint<16> img_mag_y_1_merged262_246_res = img_mag_y_1_merged262_246_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1888, 3072>(result, img_mag_y_1_merged262_246_res);
	hw_uint<16> img_mag_y_1_merged262_247_res = img_mag_y_1_merged262_247_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1904, 3072>(result, img_mag_y_1_merged262_247_res);
	hw_uint<16> img_mag_y_1_merged262_248_res = img_mag_y_1_merged262_248_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1920, 3072>(result, img_mag_y_1_merged262_248_res);
	hw_uint<16> img_mag_y_1_merged262_249_res = img_mag_y_1_merged262_249_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1936, 3072>(result, img_mag_y_1_merged262_249_res);
	hw_uint<16> img_mag_y_1_merged262_250_res = img_mag_y_1_merged262_250_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1952, 3072>(result, img_mag_y_1_merged262_250_res);
	hw_uint<16> img_mag_y_1_merged262_251_res = img_mag_y_1_merged262_251_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1968, 3072>(result, img_mag_y_1_merged262_251_res);
	hw_uint<16> img_mag_y_1_merged262_252_res = img_mag_y_1_merged262_252_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1984, 3072>(result, img_mag_y_1_merged262_252_res);
	hw_uint<16> img_mag_y_1_merged262_253_res = img_mag_y_1_merged262_253_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2000, 3072>(result, img_mag_y_1_merged262_253_res);
	hw_uint<16> img_mag_y_1_merged262_254_res = img_mag_y_1_merged262_254_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2016, 3072>(result, img_mag_y_1_merged262_254_res);
	hw_uint<16> img_mag_y_1_merged262_255_res = img_mag_y_1_merged262_255_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2032, 3072>(result, img_mag_y_1_merged262_255_res);
	hw_uint<16> img_mag_y_1_merged262_256_res = img_mag_y_1_merged262_256_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2048, 3072>(result, img_mag_y_1_merged262_256_res);
	hw_uint<16> img_mag_y_1_merged262_257_res = img_mag_y_1_merged262_257_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2064, 3072>(result, img_mag_y_1_merged262_257_res);
	hw_uint<16> img_mag_y_1_merged262_258_res = img_mag_y_1_merged262_258_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2080, 3072>(result, img_mag_y_1_merged262_258_res);
	hw_uint<16> img_mag_y_1_merged262_259_res = img_mag_y_1_merged262_259_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2096, 3072>(result, img_mag_y_1_merged262_259_res);
	hw_uint<16> img_mag_y_1_merged262_260_res = img_mag_y_1_merged262_260_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2112, 3072>(result, img_mag_y_1_merged262_260_res);
	hw_uint<16> img_mag_y_1_merged262_261_res = img_mag_y_1_merged262_261_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2128, 3072>(result, img_mag_y_1_merged262_261_res);
	hw_uint<16> img_mag_y_1_merged262_262_res = img_mag_y_1_merged262_262_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2144, 3072>(result, img_mag_y_1_merged262_262_res);
	hw_uint<16> img_mag_y_1_merged262_263_res = img_mag_y_1_merged262_263_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2160, 3072>(result, img_mag_y_1_merged262_263_res);
	hw_uint<16> img_mag_y_1_merged262_264_res = img_mag_y_1_merged262_264_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2176, 3072>(result, img_mag_y_1_merged262_264_res);
	hw_uint<16> img_mag_y_1_merged262_265_res = img_mag_y_1_merged262_265_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2192, 3072>(result, img_mag_y_1_merged262_265_res);
	hw_uint<16> img_mag_y_1_merged262_266_res = img_mag_y_1_merged262_266_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2208, 3072>(result, img_mag_y_1_merged262_266_res);
	hw_uint<16> img_mag_y_1_merged262_267_res = img_mag_y_1_merged262_267_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2224, 3072>(result, img_mag_y_1_merged262_267_res);
	hw_uint<16> img_mag_y_1_merged262_268_res = img_mag_y_1_merged262_268_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2240, 3072>(result, img_mag_y_1_merged262_268_res);
	hw_uint<16> img_mag_y_1_merged262_269_res = img_mag_y_1_merged262_269_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2256, 3072>(result, img_mag_y_1_merged262_269_res);
	hw_uint<16> img_mag_y_1_merged262_270_res = img_mag_y_1_merged262_270_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2272, 3072>(result, img_mag_y_1_merged262_270_res);
	hw_uint<16> img_mag_y_1_merged262_271_res = img_mag_y_1_merged262_271_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2288, 3072>(result, img_mag_y_1_merged262_271_res);
	hw_uint<16> img_mag_y_1_merged262_272_res = img_mag_y_1_merged262_272_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2304, 3072>(result, img_mag_y_1_merged262_272_res);
	hw_uint<16> img_mag_y_1_merged262_273_res = img_mag_y_1_merged262_273_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2320, 3072>(result, img_mag_y_1_merged262_273_res);
	hw_uint<16> img_mag_y_1_merged262_274_res = img_mag_y_1_merged262_274_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2336, 3072>(result, img_mag_y_1_merged262_274_res);
	hw_uint<16> img_mag_y_1_merged262_275_res = img_mag_y_1_merged262_275_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2352, 3072>(result, img_mag_y_1_merged262_275_res);
	hw_uint<16> img_mag_y_1_merged262_276_res = img_mag_y_1_merged262_276_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2368, 3072>(result, img_mag_y_1_merged262_276_res);
	hw_uint<16> img_mag_y_1_merged262_277_res = img_mag_y_1_merged262_277_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2384, 3072>(result, img_mag_y_1_merged262_277_res);
	hw_uint<16> img_mag_y_1_merged262_278_res = img_mag_y_1_merged262_278_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2400, 3072>(result, img_mag_y_1_merged262_278_res);
	hw_uint<16> img_mag_y_1_merged262_279_res = img_mag_y_1_merged262_279_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2416, 3072>(result, img_mag_y_1_merged262_279_res);
	hw_uint<16> img_mag_y_1_merged262_280_res = img_mag_y_1_merged262_280_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2432, 3072>(result, img_mag_y_1_merged262_280_res);
	hw_uint<16> img_mag_y_1_merged262_281_res = img_mag_y_1_merged262_281_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2448, 3072>(result, img_mag_y_1_merged262_281_res);
	hw_uint<16> img_mag_y_1_merged262_282_res = img_mag_y_1_merged262_282_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2464, 3072>(result, img_mag_y_1_merged262_282_res);
	hw_uint<16> img_mag_y_1_merged262_283_res = img_mag_y_1_merged262_283_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2480, 3072>(result, img_mag_y_1_merged262_283_res);
	hw_uint<16> img_mag_y_1_merged262_284_res = img_mag_y_1_merged262_284_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2496, 3072>(result, img_mag_y_1_merged262_284_res);
	hw_uint<16> img_mag_y_1_merged262_285_res = img_mag_y_1_merged262_285_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2512, 3072>(result, img_mag_y_1_merged262_285_res);
	hw_uint<16> img_mag_y_1_merged262_286_res = img_mag_y_1_merged262_286_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2528, 3072>(result, img_mag_y_1_merged262_286_res);
	hw_uint<16> img_mag_y_1_merged262_287_res = img_mag_y_1_merged262_287_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2544, 3072>(result, img_mag_y_1_merged262_287_res);
	hw_uint<16> img_mag_y_1_merged262_288_res = img_mag_y_1_merged262_288_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2560, 3072>(result, img_mag_y_1_merged262_288_res);
	hw_uint<16> img_mag_y_1_merged262_289_res = img_mag_y_1_merged262_289_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2576, 3072>(result, img_mag_y_1_merged262_289_res);
	hw_uint<16> img_mag_y_1_merged262_290_res = img_mag_y_1_merged262_290_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2592, 3072>(result, img_mag_y_1_merged262_290_res);
	hw_uint<16> img_mag_y_1_merged262_291_res = img_mag_y_1_merged262_291_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2608, 3072>(result, img_mag_y_1_merged262_291_res);
	hw_uint<16> img_mag_y_1_merged262_292_res = img_mag_y_1_merged262_292_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2624, 3072>(result, img_mag_y_1_merged262_292_res);
	hw_uint<16> img_mag_y_1_merged262_293_res = img_mag_y_1_merged262_293_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2640, 3072>(result, img_mag_y_1_merged262_293_res);
	hw_uint<16> img_mag_y_1_merged262_294_res = img_mag_y_1_merged262_294_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2656, 3072>(result, img_mag_y_1_merged262_294_res);
	hw_uint<16> img_mag_y_1_merged262_295_res = img_mag_y_1_merged262_295_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2672, 3072>(result, img_mag_y_1_merged262_295_res);
	hw_uint<16> img_mag_y_1_merged262_296_res = img_mag_y_1_merged262_296_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2688, 3072>(result, img_mag_y_1_merged262_296_res);
	hw_uint<16> img_mag_y_1_merged262_297_res = img_mag_y_1_merged262_297_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2704, 3072>(result, img_mag_y_1_merged262_297_res);
	hw_uint<16> img_mag_y_1_merged262_298_res = img_mag_y_1_merged262_298_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2720, 3072>(result, img_mag_y_1_merged262_298_res);
	hw_uint<16> img_mag_y_1_merged262_299_res = img_mag_y_1_merged262_299_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2736, 3072>(result, img_mag_y_1_merged262_299_res);
	hw_uint<16> img_mag_y_1_merged262_300_res = img_mag_y_1_merged262_300_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2752, 3072>(result, img_mag_y_1_merged262_300_res);
	hw_uint<16> img_mag_y_1_merged262_301_res = img_mag_y_1_merged262_301_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2768, 3072>(result, img_mag_y_1_merged262_301_res);
	hw_uint<16> img_mag_y_1_merged262_302_res = img_mag_y_1_merged262_302_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2784, 3072>(result, img_mag_y_1_merged262_302_res);
	hw_uint<16> img_mag_y_1_merged262_303_res = img_mag_y_1_merged262_303_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2800, 3072>(result, img_mag_y_1_merged262_303_res);
	hw_uint<16> img_mag_y_1_merged262_304_res = img_mag_y_1_merged262_304_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2816, 3072>(result, img_mag_y_1_merged262_304_res);
	hw_uint<16> img_mag_y_1_merged262_305_res = img_mag_y_1_merged262_305_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2832, 3072>(result, img_mag_y_1_merged262_305_res);
	hw_uint<16> img_mag_y_1_merged262_306_res = img_mag_y_1_merged262_306_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2848, 3072>(result, img_mag_y_1_merged262_306_res);
	hw_uint<16> img_mag_y_1_merged262_307_res = img_mag_y_1_merged262_307_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2864, 3072>(result, img_mag_y_1_merged262_307_res);
	hw_uint<16> img_mag_y_1_merged262_308_res = img_mag_y_1_merged262_308_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2880, 3072>(result, img_mag_y_1_merged262_308_res);
	hw_uint<16> img_mag_y_1_merged262_309_res = img_mag_y_1_merged262_309_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2896, 3072>(result, img_mag_y_1_merged262_309_res);
	hw_uint<16> img_mag_y_1_merged262_310_res = img_mag_y_1_merged262_310_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2912, 3072>(result, img_mag_y_1_merged262_310_res);
	hw_uint<16> img_mag_y_1_merged262_311_res = img_mag_y_1_merged262_311_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2928, 3072>(result, img_mag_y_1_merged262_311_res);
	hw_uint<16> img_mag_y_1_merged262_312_res = img_mag_y_1_merged262_312_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2944, 3072>(result, img_mag_y_1_merged262_312_res);
	hw_uint<16> img_mag_y_1_merged262_313_res = img_mag_y_1_merged262_313_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2960, 3072>(result, img_mag_y_1_merged262_313_res);
	hw_uint<16> img_mag_y_1_merged262_314_res = img_mag_y_1_merged262_314_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2976, 3072>(result, img_mag_y_1_merged262_314_res);
	hw_uint<16> img_mag_y_1_merged262_315_res = img_mag_y_1_merged262_315_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<2992, 3072>(result, img_mag_y_1_merged262_315_res);
	hw_uint<16> img_mag_y_1_merged262_316_res = img_mag_y_1_merged262_316_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<3008, 3072>(result, img_mag_y_1_merged262_316_res);
	hw_uint<16> img_mag_y_1_merged262_317_res = img_mag_y_1_merged262_317_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<3024, 3072>(result, img_mag_y_1_merged262_317_res);
	hw_uint<16> img_mag_y_1_merged262_318_res = img_mag_y_1_merged262_318_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<3040, 3072>(result, img_mag_y_1_merged262_318_res);
	hw_uint<16> img_mag_y_1_merged262_319_res = img_mag_y_1_merged262_319_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<3056, 3072>(result, img_mag_y_1_merged262_319_res);
	return result;
}

struct mag_x_mag_x_1_merged268_320_to_mag_x_sbl7_32_1_merged271_32_cache {
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

struct mag_x_mag_x_1_merged268_321_to_mag_x_sbl7_32_1_merged271_34_cache {
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

struct mag_x_mag_x_1_merged268_322_to_mag_x_sbl7_32_1_merged271_36_cache {
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

struct mag_x_mag_x_1_merged268_323_to_mag_x_sbl7_32_1_merged271_38_cache {
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

struct mag_x_mag_x_1_merged268_324_to_mag_x_sbl7_32_1_merged271_40_cache {
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

struct mag_x_mag_x_1_merged268_325_to_mag_x_sbl7_32_1_merged271_42_cache {
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

struct mag_x_mag_x_1_merged268_326_to_mag_x_sbl7_32_1_merged271_44_cache {
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

struct mag_x_mag_x_1_merged268_327_to_mag_x_sbl7_32_1_merged271_46_cache {
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

struct mag_x_mag_x_1_merged268_328_to_mag_x_sbl7_32_1_merged271_48_cache {
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

struct mag_x_mag_x_1_merged268_329_to_mag_x_sbl7_32_1_merged271_50_cache {
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

struct mag_x_mag_x_1_merged268_330_to_mag_x_sbl7_32_1_merged271_52_cache {
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

struct mag_x_mag_x_1_merged268_331_to_mag_x_sbl7_32_1_merged271_54_cache {
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

struct mag_x_mag_x_1_merged268_332_to_mag_x_sbl7_32_1_merged271_56_cache {
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

struct mag_x_mag_x_1_merged268_333_to_mag_x_sbl7_32_1_merged271_58_cache {
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

struct mag_x_mag_x_1_merged268_334_to_mag_x_sbl7_32_1_merged271_60_cache {
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

struct mag_x_mag_x_1_merged268_335_to_mag_x_sbl7_32_1_merged271_62_cache {
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

struct mag_x_mag_x_1_merged268_336_to_mag_x_sbl7_32_1_merged271_64_cache {
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

struct mag_x_mag_x_1_merged268_337_to_mag_x_sbl7_32_1_merged271_66_cache {
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

struct mag_x_mag_x_1_merged268_338_to_mag_x_sbl7_32_1_merged271_68_cache {
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

struct mag_x_mag_x_1_merged268_339_to_mag_x_sbl7_32_1_merged271_70_cache {
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

struct mag_x_mag_x_1_merged268_340_to_mag_x_sbl7_32_1_merged271_72_cache {
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

struct mag_x_mag_x_1_merged268_341_to_mag_x_sbl7_32_1_merged271_74_cache {
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

struct mag_x_mag_x_1_merged268_342_to_mag_x_sbl7_32_1_merged271_76_cache {
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

struct mag_x_mag_x_1_merged268_343_to_mag_x_sbl7_32_1_merged271_78_cache {
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

struct mag_x_mag_x_1_merged268_344_to_mag_x_sbl7_32_1_merged271_80_cache {
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

struct mag_x_mag_x_1_merged268_345_to_mag_x_sbl7_32_1_merged271_82_cache {
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

struct mag_x_mag_x_1_merged268_346_to_mag_x_sbl7_32_1_merged271_84_cache {
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

struct mag_x_mag_x_1_merged268_347_to_mag_x_sbl7_32_1_merged271_86_cache {
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

struct mag_x_mag_x_1_merged268_348_to_mag_x_sbl7_32_1_merged271_88_cache {
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

struct mag_x_mag_x_1_merged268_349_to_mag_x_sbl7_32_1_merged271_90_cache {
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

struct mag_x_mag_x_1_merged268_350_to_mag_x_sbl7_32_1_merged271_92_cache {
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

struct mag_x_mag_x_1_merged268_351_to_mag_x_sbl7_32_1_merged271_94_cache {
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

struct mag_x_cache {
  // Reader addrs...
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[1 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[2 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[3 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[4 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[5 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[6 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[7 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[8 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[9 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[10 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[11 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[12 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[13 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[14 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[15 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[16 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[17 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[18 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[19 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[20 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[21 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[22 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[23 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[24 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[25 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[26 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[27 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[28 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[29 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[30 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[31 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // # of banks: 32
  mag_x_mag_x_1_merged268_320_to_mag_x_sbl7_32_1_merged271_32_cache mag_x_mag_x_1_merged268_320_to_mag_x_sbl7_32_1_merged271_32;
  mag_x_mag_x_1_merged268_321_to_mag_x_sbl7_32_1_merged271_34_cache mag_x_mag_x_1_merged268_321_to_mag_x_sbl7_32_1_merged271_34;
  mag_x_mag_x_1_merged268_322_to_mag_x_sbl7_32_1_merged271_36_cache mag_x_mag_x_1_merged268_322_to_mag_x_sbl7_32_1_merged271_36;
  mag_x_mag_x_1_merged268_323_to_mag_x_sbl7_32_1_merged271_38_cache mag_x_mag_x_1_merged268_323_to_mag_x_sbl7_32_1_merged271_38;
  mag_x_mag_x_1_merged268_324_to_mag_x_sbl7_32_1_merged271_40_cache mag_x_mag_x_1_merged268_324_to_mag_x_sbl7_32_1_merged271_40;
  mag_x_mag_x_1_merged268_325_to_mag_x_sbl7_32_1_merged271_42_cache mag_x_mag_x_1_merged268_325_to_mag_x_sbl7_32_1_merged271_42;
  mag_x_mag_x_1_merged268_326_to_mag_x_sbl7_32_1_merged271_44_cache mag_x_mag_x_1_merged268_326_to_mag_x_sbl7_32_1_merged271_44;
  mag_x_mag_x_1_merged268_327_to_mag_x_sbl7_32_1_merged271_46_cache mag_x_mag_x_1_merged268_327_to_mag_x_sbl7_32_1_merged271_46;
  mag_x_mag_x_1_merged268_328_to_mag_x_sbl7_32_1_merged271_48_cache mag_x_mag_x_1_merged268_328_to_mag_x_sbl7_32_1_merged271_48;
  mag_x_mag_x_1_merged268_329_to_mag_x_sbl7_32_1_merged271_50_cache mag_x_mag_x_1_merged268_329_to_mag_x_sbl7_32_1_merged271_50;
  mag_x_mag_x_1_merged268_330_to_mag_x_sbl7_32_1_merged271_52_cache mag_x_mag_x_1_merged268_330_to_mag_x_sbl7_32_1_merged271_52;
  mag_x_mag_x_1_merged268_331_to_mag_x_sbl7_32_1_merged271_54_cache mag_x_mag_x_1_merged268_331_to_mag_x_sbl7_32_1_merged271_54;
  mag_x_mag_x_1_merged268_332_to_mag_x_sbl7_32_1_merged271_56_cache mag_x_mag_x_1_merged268_332_to_mag_x_sbl7_32_1_merged271_56;
  mag_x_mag_x_1_merged268_333_to_mag_x_sbl7_32_1_merged271_58_cache mag_x_mag_x_1_merged268_333_to_mag_x_sbl7_32_1_merged271_58;
  mag_x_mag_x_1_merged268_334_to_mag_x_sbl7_32_1_merged271_60_cache mag_x_mag_x_1_merged268_334_to_mag_x_sbl7_32_1_merged271_60;
  mag_x_mag_x_1_merged268_335_to_mag_x_sbl7_32_1_merged271_62_cache mag_x_mag_x_1_merged268_335_to_mag_x_sbl7_32_1_merged271_62;
  mag_x_mag_x_1_merged268_336_to_mag_x_sbl7_32_1_merged271_64_cache mag_x_mag_x_1_merged268_336_to_mag_x_sbl7_32_1_merged271_64;
  mag_x_mag_x_1_merged268_337_to_mag_x_sbl7_32_1_merged271_66_cache mag_x_mag_x_1_merged268_337_to_mag_x_sbl7_32_1_merged271_66;
  mag_x_mag_x_1_merged268_338_to_mag_x_sbl7_32_1_merged271_68_cache mag_x_mag_x_1_merged268_338_to_mag_x_sbl7_32_1_merged271_68;
  mag_x_mag_x_1_merged268_339_to_mag_x_sbl7_32_1_merged271_70_cache mag_x_mag_x_1_merged268_339_to_mag_x_sbl7_32_1_merged271_70;
  mag_x_mag_x_1_merged268_340_to_mag_x_sbl7_32_1_merged271_72_cache mag_x_mag_x_1_merged268_340_to_mag_x_sbl7_32_1_merged271_72;
  mag_x_mag_x_1_merged268_341_to_mag_x_sbl7_32_1_merged271_74_cache mag_x_mag_x_1_merged268_341_to_mag_x_sbl7_32_1_merged271_74;
  mag_x_mag_x_1_merged268_342_to_mag_x_sbl7_32_1_merged271_76_cache mag_x_mag_x_1_merged268_342_to_mag_x_sbl7_32_1_merged271_76;
  mag_x_mag_x_1_merged268_343_to_mag_x_sbl7_32_1_merged271_78_cache mag_x_mag_x_1_merged268_343_to_mag_x_sbl7_32_1_merged271_78;
  mag_x_mag_x_1_merged268_344_to_mag_x_sbl7_32_1_merged271_80_cache mag_x_mag_x_1_merged268_344_to_mag_x_sbl7_32_1_merged271_80;
  mag_x_mag_x_1_merged268_345_to_mag_x_sbl7_32_1_merged271_82_cache mag_x_mag_x_1_merged268_345_to_mag_x_sbl7_32_1_merged271_82;
  mag_x_mag_x_1_merged268_346_to_mag_x_sbl7_32_1_merged271_84_cache mag_x_mag_x_1_merged268_346_to_mag_x_sbl7_32_1_merged271_84;
  mag_x_mag_x_1_merged268_347_to_mag_x_sbl7_32_1_merged271_86_cache mag_x_mag_x_1_merged268_347_to_mag_x_sbl7_32_1_merged271_86;
  mag_x_mag_x_1_merged268_348_to_mag_x_sbl7_32_1_merged271_88_cache mag_x_mag_x_1_merged268_348_to_mag_x_sbl7_32_1_merged271_88;
  mag_x_mag_x_1_merged268_349_to_mag_x_sbl7_32_1_merged271_90_cache mag_x_mag_x_1_merged268_349_to_mag_x_sbl7_32_1_merged271_90;
  mag_x_mag_x_1_merged268_350_to_mag_x_sbl7_32_1_merged271_92_cache mag_x_mag_x_1_merged268_350_to_mag_x_sbl7_32_1_merged271_92;
  mag_x_mag_x_1_merged268_351_to_mag_x_sbl7_32_1_merged271_94_cache mag_x_mag_x_1_merged268_351_to_mag_x_sbl7_32_1_merged271_94;
};



inline void mag_x_mag_x_1_merged268_320_write(hw_uint<16>& mag_x_mag_x_1_merged268_320, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_320_to_mag_x_sbl7_32_1_merged271_32.push(mag_x_mag_x_1_merged268_320);
}

inline void mag_x_mag_x_1_merged268_321_write(hw_uint<16>& mag_x_mag_x_1_merged268_321, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_321_to_mag_x_sbl7_32_1_merged271_34.push(mag_x_mag_x_1_merged268_321);
}

inline void mag_x_mag_x_1_merged268_322_write(hw_uint<16>& mag_x_mag_x_1_merged268_322, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_322_to_mag_x_sbl7_32_1_merged271_36.push(mag_x_mag_x_1_merged268_322);
}

inline void mag_x_mag_x_1_merged268_323_write(hw_uint<16>& mag_x_mag_x_1_merged268_323, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_323_to_mag_x_sbl7_32_1_merged271_38.push(mag_x_mag_x_1_merged268_323);
}

inline void mag_x_mag_x_1_merged268_324_write(hw_uint<16>& mag_x_mag_x_1_merged268_324, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_324_to_mag_x_sbl7_32_1_merged271_40.push(mag_x_mag_x_1_merged268_324);
}

inline void mag_x_mag_x_1_merged268_325_write(hw_uint<16>& mag_x_mag_x_1_merged268_325, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_325_to_mag_x_sbl7_32_1_merged271_42.push(mag_x_mag_x_1_merged268_325);
}

inline void mag_x_mag_x_1_merged268_326_write(hw_uint<16>& mag_x_mag_x_1_merged268_326, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_326_to_mag_x_sbl7_32_1_merged271_44.push(mag_x_mag_x_1_merged268_326);
}

inline void mag_x_mag_x_1_merged268_327_write(hw_uint<16>& mag_x_mag_x_1_merged268_327, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_327_to_mag_x_sbl7_32_1_merged271_46.push(mag_x_mag_x_1_merged268_327);
}

inline void mag_x_mag_x_1_merged268_328_write(hw_uint<16>& mag_x_mag_x_1_merged268_328, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_328_to_mag_x_sbl7_32_1_merged271_48.push(mag_x_mag_x_1_merged268_328);
}

inline void mag_x_mag_x_1_merged268_329_write(hw_uint<16>& mag_x_mag_x_1_merged268_329, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_329_to_mag_x_sbl7_32_1_merged271_50.push(mag_x_mag_x_1_merged268_329);
}

inline void mag_x_mag_x_1_merged268_330_write(hw_uint<16>& mag_x_mag_x_1_merged268_330, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_330_to_mag_x_sbl7_32_1_merged271_52.push(mag_x_mag_x_1_merged268_330);
}

inline void mag_x_mag_x_1_merged268_331_write(hw_uint<16>& mag_x_mag_x_1_merged268_331, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_331_to_mag_x_sbl7_32_1_merged271_54.push(mag_x_mag_x_1_merged268_331);
}

inline void mag_x_mag_x_1_merged268_332_write(hw_uint<16>& mag_x_mag_x_1_merged268_332, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_332_to_mag_x_sbl7_32_1_merged271_56.push(mag_x_mag_x_1_merged268_332);
}

inline void mag_x_mag_x_1_merged268_333_write(hw_uint<16>& mag_x_mag_x_1_merged268_333, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_333_to_mag_x_sbl7_32_1_merged271_58.push(mag_x_mag_x_1_merged268_333);
}

inline void mag_x_mag_x_1_merged268_334_write(hw_uint<16>& mag_x_mag_x_1_merged268_334, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_334_to_mag_x_sbl7_32_1_merged271_60.push(mag_x_mag_x_1_merged268_334);
}

inline void mag_x_mag_x_1_merged268_335_write(hw_uint<16>& mag_x_mag_x_1_merged268_335, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_335_to_mag_x_sbl7_32_1_merged271_62.push(mag_x_mag_x_1_merged268_335);
}

inline void mag_x_mag_x_1_merged268_336_write(hw_uint<16>& mag_x_mag_x_1_merged268_336, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_336_to_mag_x_sbl7_32_1_merged271_64.push(mag_x_mag_x_1_merged268_336);
}

inline void mag_x_mag_x_1_merged268_337_write(hw_uint<16>& mag_x_mag_x_1_merged268_337, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_337_to_mag_x_sbl7_32_1_merged271_66.push(mag_x_mag_x_1_merged268_337);
}

inline void mag_x_mag_x_1_merged268_338_write(hw_uint<16>& mag_x_mag_x_1_merged268_338, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_338_to_mag_x_sbl7_32_1_merged271_68.push(mag_x_mag_x_1_merged268_338);
}

inline void mag_x_mag_x_1_merged268_339_write(hw_uint<16>& mag_x_mag_x_1_merged268_339, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_339_to_mag_x_sbl7_32_1_merged271_70.push(mag_x_mag_x_1_merged268_339);
}

inline void mag_x_mag_x_1_merged268_340_write(hw_uint<16>& mag_x_mag_x_1_merged268_340, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_340_to_mag_x_sbl7_32_1_merged271_72.push(mag_x_mag_x_1_merged268_340);
}

inline void mag_x_mag_x_1_merged268_341_write(hw_uint<16>& mag_x_mag_x_1_merged268_341, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_341_to_mag_x_sbl7_32_1_merged271_74.push(mag_x_mag_x_1_merged268_341);
}

inline void mag_x_mag_x_1_merged268_342_write(hw_uint<16>& mag_x_mag_x_1_merged268_342, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_342_to_mag_x_sbl7_32_1_merged271_76.push(mag_x_mag_x_1_merged268_342);
}

inline void mag_x_mag_x_1_merged268_343_write(hw_uint<16>& mag_x_mag_x_1_merged268_343, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_343_to_mag_x_sbl7_32_1_merged271_78.push(mag_x_mag_x_1_merged268_343);
}

inline void mag_x_mag_x_1_merged268_344_write(hw_uint<16>& mag_x_mag_x_1_merged268_344, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_344_to_mag_x_sbl7_32_1_merged271_80.push(mag_x_mag_x_1_merged268_344);
}

inline void mag_x_mag_x_1_merged268_345_write(hw_uint<16>& mag_x_mag_x_1_merged268_345, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_345_to_mag_x_sbl7_32_1_merged271_82.push(mag_x_mag_x_1_merged268_345);
}

inline void mag_x_mag_x_1_merged268_346_write(hw_uint<16>& mag_x_mag_x_1_merged268_346, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_346_to_mag_x_sbl7_32_1_merged271_84.push(mag_x_mag_x_1_merged268_346);
}

inline void mag_x_mag_x_1_merged268_347_write(hw_uint<16>& mag_x_mag_x_1_merged268_347, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_347_to_mag_x_sbl7_32_1_merged271_86.push(mag_x_mag_x_1_merged268_347);
}

inline void mag_x_mag_x_1_merged268_348_write(hw_uint<16>& mag_x_mag_x_1_merged268_348, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_348_to_mag_x_sbl7_32_1_merged271_88.push(mag_x_mag_x_1_merged268_348);
}

inline void mag_x_mag_x_1_merged268_349_write(hw_uint<16>& mag_x_mag_x_1_merged268_349, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_349_to_mag_x_sbl7_32_1_merged271_90.push(mag_x_mag_x_1_merged268_349);
}

inline void mag_x_mag_x_1_merged268_350_write(hw_uint<16>& mag_x_mag_x_1_merged268_350, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_350_to_mag_x_sbl7_32_1_merged271_92.push(mag_x_mag_x_1_merged268_350);
}

inline void mag_x_mag_x_1_merged268_351_write(hw_uint<16>& mag_x_mag_x_1_merged268_351, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged268_351_to_mag_x_sbl7_32_1_merged271_94.push(mag_x_mag_x_1_merged268_351);
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_32_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_32 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_320 = mag_x.mag_x_mag_x_1_merged268_320_to_mag_x_sbl7_32_1_merged271_32.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_320;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_34_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_34 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[1 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_321 = mag_x.mag_x_mag_x_1_merged268_321_to_mag_x_sbl7_32_1_merged271_34.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_321;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_36_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_36 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[2 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_322 = mag_x.mag_x_mag_x_1_merged268_322_to_mag_x_sbl7_32_1_merged271_36.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_322;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_38_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_38 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[3 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_323 = mag_x.mag_x_mag_x_1_merged268_323_to_mag_x_sbl7_32_1_merged271_38.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_323;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_40_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_40 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[4 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_324 = mag_x.mag_x_mag_x_1_merged268_324_to_mag_x_sbl7_32_1_merged271_40.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_324;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_42_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_42 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[5 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_325 = mag_x.mag_x_mag_x_1_merged268_325_to_mag_x_sbl7_32_1_merged271_42.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_325;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_44_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_44 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[6 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_326 = mag_x.mag_x_mag_x_1_merged268_326_to_mag_x_sbl7_32_1_merged271_44.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_326;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_46_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_46 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[7 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_327 = mag_x.mag_x_mag_x_1_merged268_327_to_mag_x_sbl7_32_1_merged271_46.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_327;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_48_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_48 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[8 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_328 = mag_x.mag_x_mag_x_1_merged268_328_to_mag_x_sbl7_32_1_merged271_48.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_328;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_50_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_50 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[9 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_329 = mag_x.mag_x_mag_x_1_merged268_329_to_mag_x_sbl7_32_1_merged271_50.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_329;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_52_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_52 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[10 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_330 = mag_x.mag_x_mag_x_1_merged268_330_to_mag_x_sbl7_32_1_merged271_52.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_330;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_54_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_54 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[11 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_331 = mag_x.mag_x_mag_x_1_merged268_331_to_mag_x_sbl7_32_1_merged271_54.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_331;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_56_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_56 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[12 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_332 = mag_x.mag_x_mag_x_1_merged268_332_to_mag_x_sbl7_32_1_merged271_56.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_332;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_58_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_58 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[13 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_333 = mag_x.mag_x_mag_x_1_merged268_333_to_mag_x_sbl7_32_1_merged271_58.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_333;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_60_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_60 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[14 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_334 = mag_x.mag_x_mag_x_1_merged268_334_to_mag_x_sbl7_32_1_merged271_60.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_334;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_62_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_62 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[15 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_335 = mag_x.mag_x_mag_x_1_merged268_335_to_mag_x_sbl7_32_1_merged271_62.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_335;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_64_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_64 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[16 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_336 = mag_x.mag_x_mag_x_1_merged268_336_to_mag_x_sbl7_32_1_merged271_64.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_336;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_66_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_66 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[17 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_337 = mag_x.mag_x_mag_x_1_merged268_337_to_mag_x_sbl7_32_1_merged271_66.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_337;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_68_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_68 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[18 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_338 = mag_x.mag_x_mag_x_1_merged268_338_to_mag_x_sbl7_32_1_merged271_68.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_338;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_70_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_70 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[19 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_339 = mag_x.mag_x_mag_x_1_merged268_339_to_mag_x_sbl7_32_1_merged271_70.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_339;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_72_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_72 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[20 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_340 = mag_x.mag_x_mag_x_1_merged268_340_to_mag_x_sbl7_32_1_merged271_72.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_340;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_74_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_74 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[21 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_341 = mag_x.mag_x_mag_x_1_merged268_341_to_mag_x_sbl7_32_1_merged271_74.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_341;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_76_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_76 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[22 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_342 = mag_x.mag_x_mag_x_1_merged268_342_to_mag_x_sbl7_32_1_merged271_76.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_342;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_78_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_78 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[23 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_343 = mag_x.mag_x_mag_x_1_merged268_343_to_mag_x_sbl7_32_1_merged271_78.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_343;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_80_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_80 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[24 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_344 = mag_x.mag_x_mag_x_1_merged268_344_to_mag_x_sbl7_32_1_merged271_80.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_344;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_82_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_82 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[25 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_345 = mag_x.mag_x_mag_x_1_merged268_345_to_mag_x_sbl7_32_1_merged271_82.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_345;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_84_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_84 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[26 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_346 = mag_x.mag_x_mag_x_1_merged268_346_to_mag_x_sbl7_32_1_merged271_84.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_346;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_86_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_86 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[27 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_347 = mag_x.mag_x_mag_x_1_merged268_347_to_mag_x_sbl7_32_1_merged271_86.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_347;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_88_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_88 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[28 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_348 = mag_x.mag_x_mag_x_1_merged268_348_to_mag_x_sbl7_32_1_merged271_88.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_348;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_90_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_90 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[29 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_349 = mag_x.mag_x_mag_x_1_merged268_349_to_mag_x_sbl7_32_1_merged271_90.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_349;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_92_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_92 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[30 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_350 = mag_x.mag_x_mag_x_1_merged268_350_to_mag_x_sbl7_32_1_merged271_92.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_350;
  return 0;
}

inline hw_uint<16> mag_x_sbl7_32_1_merged271_94_select(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl7_32_1_merged271_94 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_x[31 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_x_mag_x_1_merged268_351 = mag_x.mag_x_mag_x_1_merged268_351_to_mag_x_sbl7_32_1_merged271_94.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged268_351;
  return 0;
}

// # of bundles = 2
// mag_x_1_merged268_write
//	mag_x_mag_x_1_merged268_320
//	mag_x_mag_x_1_merged268_321
//	mag_x_mag_x_1_merged268_322
//	mag_x_mag_x_1_merged268_323
//	mag_x_mag_x_1_merged268_324
//	mag_x_mag_x_1_merged268_325
//	mag_x_mag_x_1_merged268_326
//	mag_x_mag_x_1_merged268_327
//	mag_x_mag_x_1_merged268_328
//	mag_x_mag_x_1_merged268_329
//	mag_x_mag_x_1_merged268_330
//	mag_x_mag_x_1_merged268_331
//	mag_x_mag_x_1_merged268_332
//	mag_x_mag_x_1_merged268_333
//	mag_x_mag_x_1_merged268_334
//	mag_x_mag_x_1_merged268_335
//	mag_x_mag_x_1_merged268_336
//	mag_x_mag_x_1_merged268_337
//	mag_x_mag_x_1_merged268_338
//	mag_x_mag_x_1_merged268_339
//	mag_x_mag_x_1_merged268_340
//	mag_x_mag_x_1_merged268_341
//	mag_x_mag_x_1_merged268_342
//	mag_x_mag_x_1_merged268_343
//	mag_x_mag_x_1_merged268_344
//	mag_x_mag_x_1_merged268_345
//	mag_x_mag_x_1_merged268_346
//	mag_x_mag_x_1_merged268_347
//	mag_x_mag_x_1_merged268_348
//	mag_x_mag_x_1_merged268_349
//	mag_x_mag_x_1_merged268_350
//	mag_x_mag_x_1_merged268_351
inline void mag_x_mag_x_1_merged268_write_bundle_write(hw_uint<512>& mag_x_1_merged268_write, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
	hw_uint<16> mag_x_mag_x_1_merged268_320_res = mag_x_1_merged268_write.extract<0, 15>();
	mag_x_mag_x_1_merged268_320_write(mag_x_mag_x_1_merged268_320_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_321_res = mag_x_1_merged268_write.extract<16, 31>();
	mag_x_mag_x_1_merged268_321_write(mag_x_mag_x_1_merged268_321_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_322_res = mag_x_1_merged268_write.extract<32, 47>();
	mag_x_mag_x_1_merged268_322_write(mag_x_mag_x_1_merged268_322_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_323_res = mag_x_1_merged268_write.extract<48, 63>();
	mag_x_mag_x_1_merged268_323_write(mag_x_mag_x_1_merged268_323_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_324_res = mag_x_1_merged268_write.extract<64, 79>();
	mag_x_mag_x_1_merged268_324_write(mag_x_mag_x_1_merged268_324_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_325_res = mag_x_1_merged268_write.extract<80, 95>();
	mag_x_mag_x_1_merged268_325_write(mag_x_mag_x_1_merged268_325_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_326_res = mag_x_1_merged268_write.extract<96, 111>();
	mag_x_mag_x_1_merged268_326_write(mag_x_mag_x_1_merged268_326_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_327_res = mag_x_1_merged268_write.extract<112, 127>();
	mag_x_mag_x_1_merged268_327_write(mag_x_mag_x_1_merged268_327_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_328_res = mag_x_1_merged268_write.extract<128, 143>();
	mag_x_mag_x_1_merged268_328_write(mag_x_mag_x_1_merged268_328_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_329_res = mag_x_1_merged268_write.extract<144, 159>();
	mag_x_mag_x_1_merged268_329_write(mag_x_mag_x_1_merged268_329_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_330_res = mag_x_1_merged268_write.extract<160, 175>();
	mag_x_mag_x_1_merged268_330_write(mag_x_mag_x_1_merged268_330_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_331_res = mag_x_1_merged268_write.extract<176, 191>();
	mag_x_mag_x_1_merged268_331_write(mag_x_mag_x_1_merged268_331_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_332_res = mag_x_1_merged268_write.extract<192, 207>();
	mag_x_mag_x_1_merged268_332_write(mag_x_mag_x_1_merged268_332_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_333_res = mag_x_1_merged268_write.extract<208, 223>();
	mag_x_mag_x_1_merged268_333_write(mag_x_mag_x_1_merged268_333_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_334_res = mag_x_1_merged268_write.extract<224, 239>();
	mag_x_mag_x_1_merged268_334_write(mag_x_mag_x_1_merged268_334_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_335_res = mag_x_1_merged268_write.extract<240, 255>();
	mag_x_mag_x_1_merged268_335_write(mag_x_mag_x_1_merged268_335_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_336_res = mag_x_1_merged268_write.extract<256, 271>();
	mag_x_mag_x_1_merged268_336_write(mag_x_mag_x_1_merged268_336_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_337_res = mag_x_1_merged268_write.extract<272, 287>();
	mag_x_mag_x_1_merged268_337_write(mag_x_mag_x_1_merged268_337_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_338_res = mag_x_1_merged268_write.extract<288, 303>();
	mag_x_mag_x_1_merged268_338_write(mag_x_mag_x_1_merged268_338_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_339_res = mag_x_1_merged268_write.extract<304, 319>();
	mag_x_mag_x_1_merged268_339_write(mag_x_mag_x_1_merged268_339_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_340_res = mag_x_1_merged268_write.extract<320, 335>();
	mag_x_mag_x_1_merged268_340_write(mag_x_mag_x_1_merged268_340_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_341_res = mag_x_1_merged268_write.extract<336, 351>();
	mag_x_mag_x_1_merged268_341_write(mag_x_mag_x_1_merged268_341_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_342_res = mag_x_1_merged268_write.extract<352, 367>();
	mag_x_mag_x_1_merged268_342_write(mag_x_mag_x_1_merged268_342_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_343_res = mag_x_1_merged268_write.extract<368, 383>();
	mag_x_mag_x_1_merged268_343_write(mag_x_mag_x_1_merged268_343_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_344_res = mag_x_1_merged268_write.extract<384, 399>();
	mag_x_mag_x_1_merged268_344_write(mag_x_mag_x_1_merged268_344_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_345_res = mag_x_1_merged268_write.extract<400, 415>();
	mag_x_mag_x_1_merged268_345_write(mag_x_mag_x_1_merged268_345_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_346_res = mag_x_1_merged268_write.extract<416, 431>();
	mag_x_mag_x_1_merged268_346_write(mag_x_mag_x_1_merged268_346_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_347_res = mag_x_1_merged268_write.extract<432, 447>();
	mag_x_mag_x_1_merged268_347_write(mag_x_mag_x_1_merged268_347_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_348_res = mag_x_1_merged268_write.extract<448, 463>();
	mag_x_mag_x_1_merged268_348_write(mag_x_mag_x_1_merged268_348_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_349_res = mag_x_1_merged268_write.extract<464, 479>();
	mag_x_mag_x_1_merged268_349_write(mag_x_mag_x_1_merged268_349_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_350_res = mag_x_1_merged268_write.extract<480, 495>();
	mag_x_mag_x_1_merged268_350_write(mag_x_mag_x_1_merged268_350_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged268_351_res = mag_x_1_merged268_write.extract<496, 511>();
	mag_x_mag_x_1_merged268_351_write(mag_x_mag_x_1_merged268_351_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
}

// sbl7_32_1_merged271_read
//	mag_x_sbl7_32_1_merged271_32
//	mag_x_sbl7_32_1_merged271_34
//	mag_x_sbl7_32_1_merged271_36
//	mag_x_sbl7_32_1_merged271_38
//	mag_x_sbl7_32_1_merged271_40
//	mag_x_sbl7_32_1_merged271_42
//	mag_x_sbl7_32_1_merged271_44
//	mag_x_sbl7_32_1_merged271_46
//	mag_x_sbl7_32_1_merged271_48
//	mag_x_sbl7_32_1_merged271_50
//	mag_x_sbl7_32_1_merged271_52
//	mag_x_sbl7_32_1_merged271_54
//	mag_x_sbl7_32_1_merged271_56
//	mag_x_sbl7_32_1_merged271_58
//	mag_x_sbl7_32_1_merged271_60
//	mag_x_sbl7_32_1_merged271_62
//	mag_x_sbl7_32_1_merged271_64
//	mag_x_sbl7_32_1_merged271_66
//	mag_x_sbl7_32_1_merged271_68
//	mag_x_sbl7_32_1_merged271_70
//	mag_x_sbl7_32_1_merged271_72
//	mag_x_sbl7_32_1_merged271_74
//	mag_x_sbl7_32_1_merged271_76
//	mag_x_sbl7_32_1_merged271_78
//	mag_x_sbl7_32_1_merged271_80
//	mag_x_sbl7_32_1_merged271_82
//	mag_x_sbl7_32_1_merged271_84
//	mag_x_sbl7_32_1_merged271_86
//	mag_x_sbl7_32_1_merged271_88
//	mag_x_sbl7_32_1_merged271_90
//	mag_x_sbl7_32_1_merged271_92
//	mag_x_sbl7_32_1_merged271_94
inline hw_uint<512> mag_x_sbl7_32_1_merged271_read_bundle_read(mag_x_cache& mag_x, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
  // # of ports in bundle: 32
    // mag_x_sbl7_32_1_merged271_32
    // mag_x_sbl7_32_1_merged271_34
    // mag_x_sbl7_32_1_merged271_36
    // mag_x_sbl7_32_1_merged271_38
    // mag_x_sbl7_32_1_merged271_40
    // mag_x_sbl7_32_1_merged271_42
    // mag_x_sbl7_32_1_merged271_44
    // mag_x_sbl7_32_1_merged271_46
    // mag_x_sbl7_32_1_merged271_48
    // mag_x_sbl7_32_1_merged271_50
    // mag_x_sbl7_32_1_merged271_52
    // mag_x_sbl7_32_1_merged271_54
    // mag_x_sbl7_32_1_merged271_56
    // mag_x_sbl7_32_1_merged271_58
    // mag_x_sbl7_32_1_merged271_60
    // mag_x_sbl7_32_1_merged271_62
    // mag_x_sbl7_32_1_merged271_64
    // mag_x_sbl7_32_1_merged271_66
    // mag_x_sbl7_32_1_merged271_68
    // mag_x_sbl7_32_1_merged271_70
    // mag_x_sbl7_32_1_merged271_72
    // mag_x_sbl7_32_1_merged271_74
    // mag_x_sbl7_32_1_merged271_76
    // mag_x_sbl7_32_1_merged271_78
    // mag_x_sbl7_32_1_merged271_80
    // mag_x_sbl7_32_1_merged271_82
    // mag_x_sbl7_32_1_merged271_84
    // mag_x_sbl7_32_1_merged271_86
    // mag_x_sbl7_32_1_merged271_88
    // mag_x_sbl7_32_1_merged271_90
    // mag_x_sbl7_32_1_merged271_92
    // mag_x_sbl7_32_1_merged271_94

	hw_uint<512> result;
	hw_uint<16> mag_x_sbl7_32_1_merged271_32_res = mag_x_sbl7_32_1_merged271_32_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<0, 512>(result, mag_x_sbl7_32_1_merged271_32_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_34_res = mag_x_sbl7_32_1_merged271_34_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<16, 512>(result, mag_x_sbl7_32_1_merged271_34_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_36_res = mag_x_sbl7_32_1_merged271_36_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<32, 512>(result, mag_x_sbl7_32_1_merged271_36_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_38_res = mag_x_sbl7_32_1_merged271_38_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<48, 512>(result, mag_x_sbl7_32_1_merged271_38_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_40_res = mag_x_sbl7_32_1_merged271_40_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<64, 512>(result, mag_x_sbl7_32_1_merged271_40_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_42_res = mag_x_sbl7_32_1_merged271_42_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<80, 512>(result, mag_x_sbl7_32_1_merged271_42_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_44_res = mag_x_sbl7_32_1_merged271_44_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<96, 512>(result, mag_x_sbl7_32_1_merged271_44_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_46_res = mag_x_sbl7_32_1_merged271_46_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<112, 512>(result, mag_x_sbl7_32_1_merged271_46_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_48_res = mag_x_sbl7_32_1_merged271_48_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<128, 512>(result, mag_x_sbl7_32_1_merged271_48_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_50_res = mag_x_sbl7_32_1_merged271_50_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<144, 512>(result, mag_x_sbl7_32_1_merged271_50_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_52_res = mag_x_sbl7_32_1_merged271_52_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<160, 512>(result, mag_x_sbl7_32_1_merged271_52_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_54_res = mag_x_sbl7_32_1_merged271_54_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<176, 512>(result, mag_x_sbl7_32_1_merged271_54_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_56_res = mag_x_sbl7_32_1_merged271_56_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<192, 512>(result, mag_x_sbl7_32_1_merged271_56_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_58_res = mag_x_sbl7_32_1_merged271_58_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<208, 512>(result, mag_x_sbl7_32_1_merged271_58_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_60_res = mag_x_sbl7_32_1_merged271_60_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<224, 512>(result, mag_x_sbl7_32_1_merged271_60_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_62_res = mag_x_sbl7_32_1_merged271_62_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<240, 512>(result, mag_x_sbl7_32_1_merged271_62_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_64_res = mag_x_sbl7_32_1_merged271_64_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<256, 512>(result, mag_x_sbl7_32_1_merged271_64_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_66_res = mag_x_sbl7_32_1_merged271_66_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<272, 512>(result, mag_x_sbl7_32_1_merged271_66_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_68_res = mag_x_sbl7_32_1_merged271_68_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<288, 512>(result, mag_x_sbl7_32_1_merged271_68_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_70_res = mag_x_sbl7_32_1_merged271_70_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<304, 512>(result, mag_x_sbl7_32_1_merged271_70_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_72_res = mag_x_sbl7_32_1_merged271_72_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<320, 512>(result, mag_x_sbl7_32_1_merged271_72_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_74_res = mag_x_sbl7_32_1_merged271_74_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<336, 512>(result, mag_x_sbl7_32_1_merged271_74_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_76_res = mag_x_sbl7_32_1_merged271_76_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<352, 512>(result, mag_x_sbl7_32_1_merged271_76_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_78_res = mag_x_sbl7_32_1_merged271_78_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<368, 512>(result, mag_x_sbl7_32_1_merged271_78_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_80_res = mag_x_sbl7_32_1_merged271_80_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<384, 512>(result, mag_x_sbl7_32_1_merged271_80_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_82_res = mag_x_sbl7_32_1_merged271_82_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<400, 512>(result, mag_x_sbl7_32_1_merged271_82_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_84_res = mag_x_sbl7_32_1_merged271_84_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<416, 512>(result, mag_x_sbl7_32_1_merged271_84_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_86_res = mag_x_sbl7_32_1_merged271_86_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<432, 512>(result, mag_x_sbl7_32_1_merged271_86_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_88_res = mag_x_sbl7_32_1_merged271_88_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<448, 512>(result, mag_x_sbl7_32_1_merged271_88_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_90_res = mag_x_sbl7_32_1_merged271_90_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<464, 512>(result, mag_x_sbl7_32_1_merged271_90_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_92_res = mag_x_sbl7_32_1_merged271_92_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<480, 512>(result, mag_x_sbl7_32_1_merged271_92_res);
	hw_uint<16> mag_x_sbl7_32_1_merged271_94_res = mag_x_sbl7_32_1_merged271_94_select(mag_x, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<496, 512>(result, mag_x_sbl7_32_1_merged271_94_res);
	return result;
}

struct mag_y_mag_y_1_merged262_96_to_mag_y_sbl7_32_1_merged271_33_cache {
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

struct mag_y_mag_y_1_merged262_97_to_mag_y_sbl7_32_1_merged271_35_cache {
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

struct mag_y_mag_y_1_merged262_98_to_mag_y_sbl7_32_1_merged271_37_cache {
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

struct mag_y_mag_y_1_merged262_99_to_mag_y_sbl7_32_1_merged271_39_cache {
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

struct mag_y_mag_y_1_merged262_100_to_mag_y_sbl7_32_1_merged271_41_cache {
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

struct mag_y_mag_y_1_merged262_101_to_mag_y_sbl7_32_1_merged271_43_cache {
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

struct mag_y_mag_y_1_merged262_102_to_mag_y_sbl7_32_1_merged271_45_cache {
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

struct mag_y_mag_y_1_merged262_103_to_mag_y_sbl7_32_1_merged271_47_cache {
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

struct mag_y_mag_y_1_merged262_104_to_mag_y_sbl7_32_1_merged271_49_cache {
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

struct mag_y_mag_y_1_merged262_105_to_mag_y_sbl7_32_1_merged271_51_cache {
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

struct mag_y_mag_y_1_merged262_106_to_mag_y_sbl7_32_1_merged271_53_cache {
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

struct mag_y_mag_y_1_merged262_107_to_mag_y_sbl7_32_1_merged271_55_cache {
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

struct mag_y_mag_y_1_merged262_108_to_mag_y_sbl7_32_1_merged271_57_cache {
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

struct mag_y_mag_y_1_merged262_109_to_mag_y_sbl7_32_1_merged271_59_cache {
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

struct mag_y_mag_y_1_merged262_110_to_mag_y_sbl7_32_1_merged271_61_cache {
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

struct mag_y_mag_y_1_merged262_111_to_mag_y_sbl7_32_1_merged271_63_cache {
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

struct mag_y_mag_y_1_merged262_112_to_mag_y_sbl7_32_1_merged271_65_cache {
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

struct mag_y_mag_y_1_merged262_113_to_mag_y_sbl7_32_1_merged271_67_cache {
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

struct mag_y_mag_y_1_merged262_114_to_mag_y_sbl7_32_1_merged271_69_cache {
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

struct mag_y_mag_y_1_merged262_115_to_mag_y_sbl7_32_1_merged271_71_cache {
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

struct mag_y_mag_y_1_merged262_116_to_mag_y_sbl7_32_1_merged271_73_cache {
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

struct mag_y_mag_y_1_merged262_117_to_mag_y_sbl7_32_1_merged271_75_cache {
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

struct mag_y_mag_y_1_merged262_118_to_mag_y_sbl7_32_1_merged271_77_cache {
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

struct mag_y_mag_y_1_merged262_119_to_mag_y_sbl7_32_1_merged271_79_cache {
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

struct mag_y_mag_y_1_merged262_120_to_mag_y_sbl7_32_1_merged271_81_cache {
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

struct mag_y_mag_y_1_merged262_121_to_mag_y_sbl7_32_1_merged271_83_cache {
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

struct mag_y_mag_y_1_merged262_122_to_mag_y_sbl7_32_1_merged271_85_cache {
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

struct mag_y_mag_y_1_merged262_123_to_mag_y_sbl7_32_1_merged271_87_cache {
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

struct mag_y_mag_y_1_merged262_124_to_mag_y_sbl7_32_1_merged271_89_cache {
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

struct mag_y_mag_y_1_merged262_125_to_mag_y_sbl7_32_1_merged271_91_cache {
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

struct mag_y_mag_y_1_merged262_126_to_mag_y_sbl7_32_1_merged271_93_cache {
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

struct mag_y_mag_y_1_merged262_127_to_mag_y_sbl7_32_1_merged271_95_cache {
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

struct mag_y_cache {
  // Reader addrs...
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[1 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[2 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[3 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[4 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[5 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[6 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[7 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[8 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[9 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[10 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[11 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[12 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[13 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[14 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[15 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[16 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[17 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[18 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[19 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[20 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[21 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[22 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[23 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[24 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[25 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[26 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[27 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[28 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[29 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[30 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
    // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[31 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // # of banks: 32
  mag_y_mag_y_1_merged262_96_to_mag_y_sbl7_32_1_merged271_33_cache mag_y_mag_y_1_merged262_96_to_mag_y_sbl7_32_1_merged271_33;
  mag_y_mag_y_1_merged262_97_to_mag_y_sbl7_32_1_merged271_35_cache mag_y_mag_y_1_merged262_97_to_mag_y_sbl7_32_1_merged271_35;
  mag_y_mag_y_1_merged262_98_to_mag_y_sbl7_32_1_merged271_37_cache mag_y_mag_y_1_merged262_98_to_mag_y_sbl7_32_1_merged271_37;
  mag_y_mag_y_1_merged262_99_to_mag_y_sbl7_32_1_merged271_39_cache mag_y_mag_y_1_merged262_99_to_mag_y_sbl7_32_1_merged271_39;
  mag_y_mag_y_1_merged262_100_to_mag_y_sbl7_32_1_merged271_41_cache mag_y_mag_y_1_merged262_100_to_mag_y_sbl7_32_1_merged271_41;
  mag_y_mag_y_1_merged262_101_to_mag_y_sbl7_32_1_merged271_43_cache mag_y_mag_y_1_merged262_101_to_mag_y_sbl7_32_1_merged271_43;
  mag_y_mag_y_1_merged262_102_to_mag_y_sbl7_32_1_merged271_45_cache mag_y_mag_y_1_merged262_102_to_mag_y_sbl7_32_1_merged271_45;
  mag_y_mag_y_1_merged262_103_to_mag_y_sbl7_32_1_merged271_47_cache mag_y_mag_y_1_merged262_103_to_mag_y_sbl7_32_1_merged271_47;
  mag_y_mag_y_1_merged262_104_to_mag_y_sbl7_32_1_merged271_49_cache mag_y_mag_y_1_merged262_104_to_mag_y_sbl7_32_1_merged271_49;
  mag_y_mag_y_1_merged262_105_to_mag_y_sbl7_32_1_merged271_51_cache mag_y_mag_y_1_merged262_105_to_mag_y_sbl7_32_1_merged271_51;
  mag_y_mag_y_1_merged262_106_to_mag_y_sbl7_32_1_merged271_53_cache mag_y_mag_y_1_merged262_106_to_mag_y_sbl7_32_1_merged271_53;
  mag_y_mag_y_1_merged262_107_to_mag_y_sbl7_32_1_merged271_55_cache mag_y_mag_y_1_merged262_107_to_mag_y_sbl7_32_1_merged271_55;
  mag_y_mag_y_1_merged262_108_to_mag_y_sbl7_32_1_merged271_57_cache mag_y_mag_y_1_merged262_108_to_mag_y_sbl7_32_1_merged271_57;
  mag_y_mag_y_1_merged262_109_to_mag_y_sbl7_32_1_merged271_59_cache mag_y_mag_y_1_merged262_109_to_mag_y_sbl7_32_1_merged271_59;
  mag_y_mag_y_1_merged262_110_to_mag_y_sbl7_32_1_merged271_61_cache mag_y_mag_y_1_merged262_110_to_mag_y_sbl7_32_1_merged271_61;
  mag_y_mag_y_1_merged262_111_to_mag_y_sbl7_32_1_merged271_63_cache mag_y_mag_y_1_merged262_111_to_mag_y_sbl7_32_1_merged271_63;
  mag_y_mag_y_1_merged262_112_to_mag_y_sbl7_32_1_merged271_65_cache mag_y_mag_y_1_merged262_112_to_mag_y_sbl7_32_1_merged271_65;
  mag_y_mag_y_1_merged262_113_to_mag_y_sbl7_32_1_merged271_67_cache mag_y_mag_y_1_merged262_113_to_mag_y_sbl7_32_1_merged271_67;
  mag_y_mag_y_1_merged262_114_to_mag_y_sbl7_32_1_merged271_69_cache mag_y_mag_y_1_merged262_114_to_mag_y_sbl7_32_1_merged271_69;
  mag_y_mag_y_1_merged262_115_to_mag_y_sbl7_32_1_merged271_71_cache mag_y_mag_y_1_merged262_115_to_mag_y_sbl7_32_1_merged271_71;
  mag_y_mag_y_1_merged262_116_to_mag_y_sbl7_32_1_merged271_73_cache mag_y_mag_y_1_merged262_116_to_mag_y_sbl7_32_1_merged271_73;
  mag_y_mag_y_1_merged262_117_to_mag_y_sbl7_32_1_merged271_75_cache mag_y_mag_y_1_merged262_117_to_mag_y_sbl7_32_1_merged271_75;
  mag_y_mag_y_1_merged262_118_to_mag_y_sbl7_32_1_merged271_77_cache mag_y_mag_y_1_merged262_118_to_mag_y_sbl7_32_1_merged271_77;
  mag_y_mag_y_1_merged262_119_to_mag_y_sbl7_32_1_merged271_79_cache mag_y_mag_y_1_merged262_119_to_mag_y_sbl7_32_1_merged271_79;
  mag_y_mag_y_1_merged262_120_to_mag_y_sbl7_32_1_merged271_81_cache mag_y_mag_y_1_merged262_120_to_mag_y_sbl7_32_1_merged271_81;
  mag_y_mag_y_1_merged262_121_to_mag_y_sbl7_32_1_merged271_83_cache mag_y_mag_y_1_merged262_121_to_mag_y_sbl7_32_1_merged271_83;
  mag_y_mag_y_1_merged262_122_to_mag_y_sbl7_32_1_merged271_85_cache mag_y_mag_y_1_merged262_122_to_mag_y_sbl7_32_1_merged271_85;
  mag_y_mag_y_1_merged262_123_to_mag_y_sbl7_32_1_merged271_87_cache mag_y_mag_y_1_merged262_123_to_mag_y_sbl7_32_1_merged271_87;
  mag_y_mag_y_1_merged262_124_to_mag_y_sbl7_32_1_merged271_89_cache mag_y_mag_y_1_merged262_124_to_mag_y_sbl7_32_1_merged271_89;
  mag_y_mag_y_1_merged262_125_to_mag_y_sbl7_32_1_merged271_91_cache mag_y_mag_y_1_merged262_125_to_mag_y_sbl7_32_1_merged271_91;
  mag_y_mag_y_1_merged262_126_to_mag_y_sbl7_32_1_merged271_93_cache mag_y_mag_y_1_merged262_126_to_mag_y_sbl7_32_1_merged271_93;
  mag_y_mag_y_1_merged262_127_to_mag_y_sbl7_32_1_merged271_95_cache mag_y_mag_y_1_merged262_127_to_mag_y_sbl7_32_1_merged271_95;
};



inline void mag_y_mag_y_1_merged262_100_write(hw_uint<16>& mag_y_mag_y_1_merged262_100, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_100_to_mag_y_sbl7_32_1_merged271_41.push(mag_y_mag_y_1_merged262_100);
}

inline void mag_y_mag_y_1_merged262_101_write(hw_uint<16>& mag_y_mag_y_1_merged262_101, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_101_to_mag_y_sbl7_32_1_merged271_43.push(mag_y_mag_y_1_merged262_101);
}

inline void mag_y_mag_y_1_merged262_102_write(hw_uint<16>& mag_y_mag_y_1_merged262_102, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_102_to_mag_y_sbl7_32_1_merged271_45.push(mag_y_mag_y_1_merged262_102);
}

inline void mag_y_mag_y_1_merged262_103_write(hw_uint<16>& mag_y_mag_y_1_merged262_103, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_103_to_mag_y_sbl7_32_1_merged271_47.push(mag_y_mag_y_1_merged262_103);
}

inline void mag_y_mag_y_1_merged262_104_write(hw_uint<16>& mag_y_mag_y_1_merged262_104, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_104_to_mag_y_sbl7_32_1_merged271_49.push(mag_y_mag_y_1_merged262_104);
}

inline void mag_y_mag_y_1_merged262_105_write(hw_uint<16>& mag_y_mag_y_1_merged262_105, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_105_to_mag_y_sbl7_32_1_merged271_51.push(mag_y_mag_y_1_merged262_105);
}

inline void mag_y_mag_y_1_merged262_106_write(hw_uint<16>& mag_y_mag_y_1_merged262_106, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_106_to_mag_y_sbl7_32_1_merged271_53.push(mag_y_mag_y_1_merged262_106);
}

inline void mag_y_mag_y_1_merged262_107_write(hw_uint<16>& mag_y_mag_y_1_merged262_107, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_107_to_mag_y_sbl7_32_1_merged271_55.push(mag_y_mag_y_1_merged262_107);
}

inline void mag_y_mag_y_1_merged262_108_write(hw_uint<16>& mag_y_mag_y_1_merged262_108, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_108_to_mag_y_sbl7_32_1_merged271_57.push(mag_y_mag_y_1_merged262_108);
}

inline void mag_y_mag_y_1_merged262_109_write(hw_uint<16>& mag_y_mag_y_1_merged262_109, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_109_to_mag_y_sbl7_32_1_merged271_59.push(mag_y_mag_y_1_merged262_109);
}

inline void mag_y_mag_y_1_merged262_110_write(hw_uint<16>& mag_y_mag_y_1_merged262_110, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_110_to_mag_y_sbl7_32_1_merged271_61.push(mag_y_mag_y_1_merged262_110);
}

inline void mag_y_mag_y_1_merged262_111_write(hw_uint<16>& mag_y_mag_y_1_merged262_111, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_111_to_mag_y_sbl7_32_1_merged271_63.push(mag_y_mag_y_1_merged262_111);
}

inline void mag_y_mag_y_1_merged262_112_write(hw_uint<16>& mag_y_mag_y_1_merged262_112, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_112_to_mag_y_sbl7_32_1_merged271_65.push(mag_y_mag_y_1_merged262_112);
}

inline void mag_y_mag_y_1_merged262_113_write(hw_uint<16>& mag_y_mag_y_1_merged262_113, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_113_to_mag_y_sbl7_32_1_merged271_67.push(mag_y_mag_y_1_merged262_113);
}

inline void mag_y_mag_y_1_merged262_114_write(hw_uint<16>& mag_y_mag_y_1_merged262_114, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_114_to_mag_y_sbl7_32_1_merged271_69.push(mag_y_mag_y_1_merged262_114);
}

inline void mag_y_mag_y_1_merged262_115_write(hw_uint<16>& mag_y_mag_y_1_merged262_115, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_115_to_mag_y_sbl7_32_1_merged271_71.push(mag_y_mag_y_1_merged262_115);
}

inline void mag_y_mag_y_1_merged262_116_write(hw_uint<16>& mag_y_mag_y_1_merged262_116, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_116_to_mag_y_sbl7_32_1_merged271_73.push(mag_y_mag_y_1_merged262_116);
}

inline void mag_y_mag_y_1_merged262_117_write(hw_uint<16>& mag_y_mag_y_1_merged262_117, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_117_to_mag_y_sbl7_32_1_merged271_75.push(mag_y_mag_y_1_merged262_117);
}

inline void mag_y_mag_y_1_merged262_118_write(hw_uint<16>& mag_y_mag_y_1_merged262_118, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_118_to_mag_y_sbl7_32_1_merged271_77.push(mag_y_mag_y_1_merged262_118);
}

inline void mag_y_mag_y_1_merged262_119_write(hw_uint<16>& mag_y_mag_y_1_merged262_119, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_119_to_mag_y_sbl7_32_1_merged271_79.push(mag_y_mag_y_1_merged262_119);
}

inline void mag_y_mag_y_1_merged262_120_write(hw_uint<16>& mag_y_mag_y_1_merged262_120, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_120_to_mag_y_sbl7_32_1_merged271_81.push(mag_y_mag_y_1_merged262_120);
}

inline void mag_y_mag_y_1_merged262_121_write(hw_uint<16>& mag_y_mag_y_1_merged262_121, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_121_to_mag_y_sbl7_32_1_merged271_83.push(mag_y_mag_y_1_merged262_121);
}

inline void mag_y_mag_y_1_merged262_122_write(hw_uint<16>& mag_y_mag_y_1_merged262_122, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_122_to_mag_y_sbl7_32_1_merged271_85.push(mag_y_mag_y_1_merged262_122);
}

inline void mag_y_mag_y_1_merged262_123_write(hw_uint<16>& mag_y_mag_y_1_merged262_123, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_123_to_mag_y_sbl7_32_1_merged271_87.push(mag_y_mag_y_1_merged262_123);
}

inline void mag_y_mag_y_1_merged262_124_write(hw_uint<16>& mag_y_mag_y_1_merged262_124, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_124_to_mag_y_sbl7_32_1_merged271_89.push(mag_y_mag_y_1_merged262_124);
}

inline void mag_y_mag_y_1_merged262_125_write(hw_uint<16>& mag_y_mag_y_1_merged262_125, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_125_to_mag_y_sbl7_32_1_merged271_91.push(mag_y_mag_y_1_merged262_125);
}

inline void mag_y_mag_y_1_merged262_126_write(hw_uint<16>& mag_y_mag_y_1_merged262_126, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_126_to_mag_y_sbl7_32_1_merged271_93.push(mag_y_mag_y_1_merged262_126);
}

inline void mag_y_mag_y_1_merged262_127_write(hw_uint<16>& mag_y_mag_y_1_merged262_127, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_127_to_mag_y_sbl7_32_1_merged271_95.push(mag_y_mag_y_1_merged262_127);
}

inline void mag_y_mag_y_1_merged262_96_write(hw_uint<16>& mag_y_mag_y_1_merged262_96, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_96_to_mag_y_sbl7_32_1_merged271_33.push(mag_y_mag_y_1_merged262_96);
}

inline void mag_y_mag_y_1_merged262_97_write(hw_uint<16>& mag_y_mag_y_1_merged262_97, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_97_to_mag_y_sbl7_32_1_merged271_35.push(mag_y_mag_y_1_merged262_97);
}

inline void mag_y_mag_y_1_merged262_98_write(hw_uint<16>& mag_y_mag_y_1_merged262_98, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_98_to_mag_y_sbl7_32_1_merged271_37.push(mag_y_mag_y_1_merged262_98);
}

inline void mag_y_mag_y_1_merged262_99_write(hw_uint<16>& mag_y_mag_y_1_merged262_99, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged262_99_to_mag_y_sbl7_32_1_merged271_39.push(mag_y_mag_y_1_merged262_99);
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_33_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_33 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_96 = mag_y.mag_y_mag_y_1_merged262_96_to_mag_y_sbl7_32_1_merged271_33.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_96;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_35_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_35 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[1 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_97 = mag_y.mag_y_mag_y_1_merged262_97_to_mag_y_sbl7_32_1_merged271_35.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_97;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_37_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_37 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[2 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_98 = mag_y.mag_y_mag_y_1_merged262_98_to_mag_y_sbl7_32_1_merged271_37.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_98;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_39_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_39 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[3 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_99 = mag_y.mag_y_mag_y_1_merged262_99_to_mag_y_sbl7_32_1_merged271_39.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_99;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_41_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_41 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[4 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_100 = mag_y.mag_y_mag_y_1_merged262_100_to_mag_y_sbl7_32_1_merged271_41.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_100;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_43_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_43 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[5 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_101 = mag_y.mag_y_mag_y_1_merged262_101_to_mag_y_sbl7_32_1_merged271_43.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_101;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_45_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_45 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[6 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_102 = mag_y.mag_y_mag_y_1_merged262_102_to_mag_y_sbl7_32_1_merged271_45.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_102;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_47_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_47 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[7 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_103 = mag_y.mag_y_mag_y_1_merged262_103_to_mag_y_sbl7_32_1_merged271_47.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_103;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_49_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_49 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[8 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_104 = mag_y.mag_y_mag_y_1_merged262_104_to_mag_y_sbl7_32_1_merged271_49.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_104;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_51_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_51 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[9 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_105 = mag_y.mag_y_mag_y_1_merged262_105_to_mag_y_sbl7_32_1_merged271_51.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_105;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_53_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_53 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[10 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_106 = mag_y.mag_y_mag_y_1_merged262_106_to_mag_y_sbl7_32_1_merged271_53.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_106;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_55_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_55 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[11 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_107 = mag_y.mag_y_mag_y_1_merged262_107_to_mag_y_sbl7_32_1_merged271_55.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_107;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_57_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_57 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[12 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_108 = mag_y.mag_y_mag_y_1_merged262_108_to_mag_y_sbl7_32_1_merged271_57.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_108;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_59_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_59 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[13 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_109 = mag_y.mag_y_mag_y_1_merged262_109_to_mag_y_sbl7_32_1_merged271_59.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_109;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_61_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_61 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[14 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_110 = mag_y.mag_y_mag_y_1_merged262_110_to_mag_y_sbl7_32_1_merged271_61.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_110;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_63_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_63 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[15 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_111 = mag_y.mag_y_mag_y_1_merged262_111_to_mag_y_sbl7_32_1_merged271_63.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_111;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_65_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_65 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[16 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_112 = mag_y.mag_y_mag_y_1_merged262_112_to_mag_y_sbl7_32_1_merged271_65.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_112;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_67_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_67 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[17 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_113 = mag_y.mag_y_mag_y_1_merged262_113_to_mag_y_sbl7_32_1_merged271_67.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_113;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_69_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_69 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[18 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_114 = mag_y.mag_y_mag_y_1_merged262_114_to_mag_y_sbl7_32_1_merged271_69.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_114;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_71_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_71 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[19 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_115 = mag_y.mag_y_mag_y_1_merged262_115_to_mag_y_sbl7_32_1_merged271_71.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_115;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_73_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_73 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[20 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_116 = mag_y.mag_y_mag_y_1_merged262_116_to_mag_y_sbl7_32_1_merged271_73.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_116;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_75_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_75 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[21 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_117 = mag_y.mag_y_mag_y_1_merged262_117_to_mag_y_sbl7_32_1_merged271_75.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_117;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_77_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_77 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[22 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_118 = mag_y.mag_y_mag_y_1_merged262_118_to_mag_y_sbl7_32_1_merged271_77.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_118;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_79_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_79 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[23 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_119 = mag_y.mag_y_mag_y_1_merged262_119_to_mag_y_sbl7_32_1_merged271_79.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_119;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_81_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_81 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[24 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_120 = mag_y.mag_y_mag_y_1_merged262_120_to_mag_y_sbl7_32_1_merged271_81.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_120;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_83_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_83 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[25 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_121 = mag_y.mag_y_mag_y_1_merged262_121_to_mag_y_sbl7_32_1_merged271_83.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_121;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_85_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_85 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[26 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_122 = mag_y.mag_y_mag_y_1_merged262_122_to_mag_y_sbl7_32_1_merged271_85.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_122;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_87_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_87 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[27 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_123 = mag_y.mag_y_mag_y_1_merged262_123_to_mag_y_sbl7_32_1_merged271_87.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_123;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_89_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_89 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[28 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_124 = mag_y.mag_y_mag_y_1_merged262_124_to_mag_y_sbl7_32_1_merged271_89.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_124;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_91_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_91 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[29 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_125 = mag_y.mag_y_mag_y_1_merged262_125_to_mag_y_sbl7_32_1_merged271_91.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_125;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_93_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_93 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[30 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_126 = mag_y.mag_y_mag_y_1_merged262_126_to_mag_y_sbl7_32_1_merged271_93.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_126;
  return 0;
}

inline hw_uint<16> mag_y_sbl7_32_1_merged271_95_select(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl7_32_1_merged271_95 read pattern: { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> mag_y[31 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
  // Read schedule : { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  // Write schedule: { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
  auto value_mag_y_mag_y_1_merged262_127 = mag_y.mag_y_mag_y_1_merged262_127_to_mag_y_sbl7_32_1_merged271_95.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged262_127;
  return 0;
}

// # of bundles = 2
// mag_y_1_merged262_write
//	mag_y_mag_y_1_merged262_96
//	mag_y_mag_y_1_merged262_97
//	mag_y_mag_y_1_merged262_98
//	mag_y_mag_y_1_merged262_99
//	mag_y_mag_y_1_merged262_100
//	mag_y_mag_y_1_merged262_101
//	mag_y_mag_y_1_merged262_102
//	mag_y_mag_y_1_merged262_103
//	mag_y_mag_y_1_merged262_104
//	mag_y_mag_y_1_merged262_105
//	mag_y_mag_y_1_merged262_106
//	mag_y_mag_y_1_merged262_107
//	mag_y_mag_y_1_merged262_108
//	mag_y_mag_y_1_merged262_109
//	mag_y_mag_y_1_merged262_110
//	mag_y_mag_y_1_merged262_111
//	mag_y_mag_y_1_merged262_112
//	mag_y_mag_y_1_merged262_113
//	mag_y_mag_y_1_merged262_114
//	mag_y_mag_y_1_merged262_115
//	mag_y_mag_y_1_merged262_116
//	mag_y_mag_y_1_merged262_117
//	mag_y_mag_y_1_merged262_118
//	mag_y_mag_y_1_merged262_119
//	mag_y_mag_y_1_merged262_120
//	mag_y_mag_y_1_merged262_121
//	mag_y_mag_y_1_merged262_122
//	mag_y_mag_y_1_merged262_123
//	mag_y_mag_y_1_merged262_124
//	mag_y_mag_y_1_merged262_125
//	mag_y_mag_y_1_merged262_126
//	mag_y_mag_y_1_merged262_127
inline void mag_y_mag_y_1_merged262_write_bundle_write(hw_uint<512>& mag_y_1_merged262_write, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
	hw_uint<16> mag_y_mag_y_1_merged262_96_res = mag_y_1_merged262_write.extract<0, 15>();
	mag_y_mag_y_1_merged262_96_write(mag_y_mag_y_1_merged262_96_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_97_res = mag_y_1_merged262_write.extract<16, 31>();
	mag_y_mag_y_1_merged262_97_write(mag_y_mag_y_1_merged262_97_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_98_res = mag_y_1_merged262_write.extract<32, 47>();
	mag_y_mag_y_1_merged262_98_write(mag_y_mag_y_1_merged262_98_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_99_res = mag_y_1_merged262_write.extract<48, 63>();
	mag_y_mag_y_1_merged262_99_write(mag_y_mag_y_1_merged262_99_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_100_res = mag_y_1_merged262_write.extract<64, 79>();
	mag_y_mag_y_1_merged262_100_write(mag_y_mag_y_1_merged262_100_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_101_res = mag_y_1_merged262_write.extract<80, 95>();
	mag_y_mag_y_1_merged262_101_write(mag_y_mag_y_1_merged262_101_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_102_res = mag_y_1_merged262_write.extract<96, 111>();
	mag_y_mag_y_1_merged262_102_write(mag_y_mag_y_1_merged262_102_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_103_res = mag_y_1_merged262_write.extract<112, 127>();
	mag_y_mag_y_1_merged262_103_write(mag_y_mag_y_1_merged262_103_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_104_res = mag_y_1_merged262_write.extract<128, 143>();
	mag_y_mag_y_1_merged262_104_write(mag_y_mag_y_1_merged262_104_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_105_res = mag_y_1_merged262_write.extract<144, 159>();
	mag_y_mag_y_1_merged262_105_write(mag_y_mag_y_1_merged262_105_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_106_res = mag_y_1_merged262_write.extract<160, 175>();
	mag_y_mag_y_1_merged262_106_write(mag_y_mag_y_1_merged262_106_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_107_res = mag_y_1_merged262_write.extract<176, 191>();
	mag_y_mag_y_1_merged262_107_write(mag_y_mag_y_1_merged262_107_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_108_res = mag_y_1_merged262_write.extract<192, 207>();
	mag_y_mag_y_1_merged262_108_write(mag_y_mag_y_1_merged262_108_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_109_res = mag_y_1_merged262_write.extract<208, 223>();
	mag_y_mag_y_1_merged262_109_write(mag_y_mag_y_1_merged262_109_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_110_res = mag_y_1_merged262_write.extract<224, 239>();
	mag_y_mag_y_1_merged262_110_write(mag_y_mag_y_1_merged262_110_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_111_res = mag_y_1_merged262_write.extract<240, 255>();
	mag_y_mag_y_1_merged262_111_write(mag_y_mag_y_1_merged262_111_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_112_res = mag_y_1_merged262_write.extract<256, 271>();
	mag_y_mag_y_1_merged262_112_write(mag_y_mag_y_1_merged262_112_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_113_res = mag_y_1_merged262_write.extract<272, 287>();
	mag_y_mag_y_1_merged262_113_write(mag_y_mag_y_1_merged262_113_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_114_res = mag_y_1_merged262_write.extract<288, 303>();
	mag_y_mag_y_1_merged262_114_write(mag_y_mag_y_1_merged262_114_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_115_res = mag_y_1_merged262_write.extract<304, 319>();
	mag_y_mag_y_1_merged262_115_write(mag_y_mag_y_1_merged262_115_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_116_res = mag_y_1_merged262_write.extract<320, 335>();
	mag_y_mag_y_1_merged262_116_write(mag_y_mag_y_1_merged262_116_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_117_res = mag_y_1_merged262_write.extract<336, 351>();
	mag_y_mag_y_1_merged262_117_write(mag_y_mag_y_1_merged262_117_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_118_res = mag_y_1_merged262_write.extract<352, 367>();
	mag_y_mag_y_1_merged262_118_write(mag_y_mag_y_1_merged262_118_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_119_res = mag_y_1_merged262_write.extract<368, 383>();
	mag_y_mag_y_1_merged262_119_write(mag_y_mag_y_1_merged262_119_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_120_res = mag_y_1_merged262_write.extract<384, 399>();
	mag_y_mag_y_1_merged262_120_write(mag_y_mag_y_1_merged262_120_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_121_res = mag_y_1_merged262_write.extract<400, 415>();
	mag_y_mag_y_1_merged262_121_write(mag_y_mag_y_1_merged262_121_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_122_res = mag_y_1_merged262_write.extract<416, 431>();
	mag_y_mag_y_1_merged262_122_write(mag_y_mag_y_1_merged262_122_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_123_res = mag_y_1_merged262_write.extract<432, 447>();
	mag_y_mag_y_1_merged262_123_write(mag_y_mag_y_1_merged262_123_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_124_res = mag_y_1_merged262_write.extract<448, 463>();
	mag_y_mag_y_1_merged262_124_write(mag_y_mag_y_1_merged262_124_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_125_res = mag_y_1_merged262_write.extract<464, 479>();
	mag_y_mag_y_1_merged262_125_write(mag_y_mag_y_1_merged262_125_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_126_res = mag_y_1_merged262_write.extract<480, 495>();
	mag_y_mag_y_1_merged262_126_write(mag_y_mag_y_1_merged262_126_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged262_127_res = mag_y_1_merged262_write.extract<496, 511>();
	mag_y_mag_y_1_merged262_127_write(mag_y_mag_y_1_merged262_127_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
}

// sbl7_32_1_merged271_read
//	mag_y_sbl7_32_1_merged271_33
//	mag_y_sbl7_32_1_merged271_35
//	mag_y_sbl7_32_1_merged271_37
//	mag_y_sbl7_32_1_merged271_39
//	mag_y_sbl7_32_1_merged271_41
//	mag_y_sbl7_32_1_merged271_43
//	mag_y_sbl7_32_1_merged271_45
//	mag_y_sbl7_32_1_merged271_47
//	mag_y_sbl7_32_1_merged271_49
//	mag_y_sbl7_32_1_merged271_51
//	mag_y_sbl7_32_1_merged271_53
//	mag_y_sbl7_32_1_merged271_55
//	mag_y_sbl7_32_1_merged271_57
//	mag_y_sbl7_32_1_merged271_59
//	mag_y_sbl7_32_1_merged271_61
//	mag_y_sbl7_32_1_merged271_63
//	mag_y_sbl7_32_1_merged271_65
//	mag_y_sbl7_32_1_merged271_67
//	mag_y_sbl7_32_1_merged271_69
//	mag_y_sbl7_32_1_merged271_71
//	mag_y_sbl7_32_1_merged271_73
//	mag_y_sbl7_32_1_merged271_75
//	mag_y_sbl7_32_1_merged271_77
//	mag_y_sbl7_32_1_merged271_79
//	mag_y_sbl7_32_1_merged271_81
//	mag_y_sbl7_32_1_merged271_83
//	mag_y_sbl7_32_1_merged271_85
//	mag_y_sbl7_32_1_merged271_87
//	mag_y_sbl7_32_1_merged271_89
//	mag_y_sbl7_32_1_merged271_91
//	mag_y_sbl7_32_1_merged271_93
//	mag_y_sbl7_32_1_merged271_95
inline hw_uint<512> mag_y_sbl7_32_1_merged271_read_bundle_read(mag_y_cache& mag_y, int root, int sbl7_32_0, int sbl7_32_1, int dynamic_address) {
  // # of ports in bundle: 32
    // mag_y_sbl7_32_1_merged271_33
    // mag_y_sbl7_32_1_merged271_35
    // mag_y_sbl7_32_1_merged271_37
    // mag_y_sbl7_32_1_merged271_39
    // mag_y_sbl7_32_1_merged271_41
    // mag_y_sbl7_32_1_merged271_43
    // mag_y_sbl7_32_1_merged271_45
    // mag_y_sbl7_32_1_merged271_47
    // mag_y_sbl7_32_1_merged271_49
    // mag_y_sbl7_32_1_merged271_51
    // mag_y_sbl7_32_1_merged271_53
    // mag_y_sbl7_32_1_merged271_55
    // mag_y_sbl7_32_1_merged271_57
    // mag_y_sbl7_32_1_merged271_59
    // mag_y_sbl7_32_1_merged271_61
    // mag_y_sbl7_32_1_merged271_63
    // mag_y_sbl7_32_1_merged271_65
    // mag_y_sbl7_32_1_merged271_67
    // mag_y_sbl7_32_1_merged271_69
    // mag_y_sbl7_32_1_merged271_71
    // mag_y_sbl7_32_1_merged271_73
    // mag_y_sbl7_32_1_merged271_75
    // mag_y_sbl7_32_1_merged271_77
    // mag_y_sbl7_32_1_merged271_79
    // mag_y_sbl7_32_1_merged271_81
    // mag_y_sbl7_32_1_merged271_83
    // mag_y_sbl7_32_1_merged271_85
    // mag_y_sbl7_32_1_merged271_87
    // mag_y_sbl7_32_1_merged271_89
    // mag_y_sbl7_32_1_merged271_91
    // mag_y_sbl7_32_1_merged271_93
    // mag_y_sbl7_32_1_merged271_95

	hw_uint<512> result;
	hw_uint<16> mag_y_sbl7_32_1_merged271_33_res = mag_y_sbl7_32_1_merged271_33_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<0, 512>(result, mag_y_sbl7_32_1_merged271_33_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_35_res = mag_y_sbl7_32_1_merged271_35_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<16, 512>(result, mag_y_sbl7_32_1_merged271_35_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_37_res = mag_y_sbl7_32_1_merged271_37_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<32, 512>(result, mag_y_sbl7_32_1_merged271_37_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_39_res = mag_y_sbl7_32_1_merged271_39_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<48, 512>(result, mag_y_sbl7_32_1_merged271_39_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_41_res = mag_y_sbl7_32_1_merged271_41_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<64, 512>(result, mag_y_sbl7_32_1_merged271_41_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_43_res = mag_y_sbl7_32_1_merged271_43_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<80, 512>(result, mag_y_sbl7_32_1_merged271_43_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_45_res = mag_y_sbl7_32_1_merged271_45_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<96, 512>(result, mag_y_sbl7_32_1_merged271_45_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_47_res = mag_y_sbl7_32_1_merged271_47_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<112, 512>(result, mag_y_sbl7_32_1_merged271_47_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_49_res = mag_y_sbl7_32_1_merged271_49_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<128, 512>(result, mag_y_sbl7_32_1_merged271_49_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_51_res = mag_y_sbl7_32_1_merged271_51_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<144, 512>(result, mag_y_sbl7_32_1_merged271_51_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_53_res = mag_y_sbl7_32_1_merged271_53_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<160, 512>(result, mag_y_sbl7_32_1_merged271_53_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_55_res = mag_y_sbl7_32_1_merged271_55_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<176, 512>(result, mag_y_sbl7_32_1_merged271_55_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_57_res = mag_y_sbl7_32_1_merged271_57_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<192, 512>(result, mag_y_sbl7_32_1_merged271_57_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_59_res = mag_y_sbl7_32_1_merged271_59_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<208, 512>(result, mag_y_sbl7_32_1_merged271_59_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_61_res = mag_y_sbl7_32_1_merged271_61_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<224, 512>(result, mag_y_sbl7_32_1_merged271_61_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_63_res = mag_y_sbl7_32_1_merged271_63_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<240, 512>(result, mag_y_sbl7_32_1_merged271_63_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_65_res = mag_y_sbl7_32_1_merged271_65_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<256, 512>(result, mag_y_sbl7_32_1_merged271_65_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_67_res = mag_y_sbl7_32_1_merged271_67_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<272, 512>(result, mag_y_sbl7_32_1_merged271_67_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_69_res = mag_y_sbl7_32_1_merged271_69_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<288, 512>(result, mag_y_sbl7_32_1_merged271_69_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_71_res = mag_y_sbl7_32_1_merged271_71_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<304, 512>(result, mag_y_sbl7_32_1_merged271_71_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_73_res = mag_y_sbl7_32_1_merged271_73_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<320, 512>(result, mag_y_sbl7_32_1_merged271_73_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_75_res = mag_y_sbl7_32_1_merged271_75_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<336, 512>(result, mag_y_sbl7_32_1_merged271_75_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_77_res = mag_y_sbl7_32_1_merged271_77_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<352, 512>(result, mag_y_sbl7_32_1_merged271_77_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_79_res = mag_y_sbl7_32_1_merged271_79_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<368, 512>(result, mag_y_sbl7_32_1_merged271_79_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_81_res = mag_y_sbl7_32_1_merged271_81_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<384, 512>(result, mag_y_sbl7_32_1_merged271_81_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_83_res = mag_y_sbl7_32_1_merged271_83_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<400, 512>(result, mag_y_sbl7_32_1_merged271_83_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_85_res = mag_y_sbl7_32_1_merged271_85_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<416, 512>(result, mag_y_sbl7_32_1_merged271_85_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_87_res = mag_y_sbl7_32_1_merged271_87_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<432, 512>(result, mag_y_sbl7_32_1_merged271_87_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_89_res = mag_y_sbl7_32_1_merged271_89_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<448, 512>(result, mag_y_sbl7_32_1_merged271_89_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_91_res = mag_y_sbl7_32_1_merged271_91_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<464, 512>(result, mag_y_sbl7_32_1_merged271_91_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_93_res = mag_y_sbl7_32_1_merged271_93_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<480, 512>(result, mag_y_sbl7_32_1_merged271_93_res);
	hw_uint<16> mag_y_sbl7_32_1_merged271_95_res = mag_y_sbl7_32_1_merged271_95_select(mag_y, root, sbl7_32_0, sbl7_32_1, dynamic_address);
	set_at<496, 512>(result, mag_y_sbl7_32_1_merged271_95_res);
	return result;
}

// Total re-use buffer capacity: 62976 bits


// Operation logic
inline void sbl7_32_1_merged271(mag_x_cache& mag_x, mag_y_cache& mag_y, HWStream<hw_uint<512> >& /* buffer_args num ports = 32 */sbl7_32, int root, int sbl7_32_0, int sbl7_32_1) {
  // Dynamic address computation

	// Consume: mag_x
	auto mag_x_1_m__lp_32_m_sbl7_32_1__p__0_rp___p__0_p_0_c_____1_m_sbl7_32_0__p__0_p_0_value = mag_x_sbl7_32_1_merged271_read_bundle_read(mag_x/* source_delay */, root, sbl7_32_0, sbl7_32_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: mag_y
	auto mag_y_1_m__lp_32_m_sbl7_32_1__p__0_rp___p__0_p_0_c_____1_m_sbl7_32_0__p__0_p_0_value = mag_y_sbl7_32_1_merged271_read_bundle_read(mag_y/* source_delay */, root, sbl7_32_0, sbl7_32_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = sbl7_32_1_cu269(mag_x_1_m__lp_32_m_sbl7_32_1__p__0_rp___p__0_p_0_c_____1_m_sbl7_32_0__p__0_p_0_value, mag_y_1_m__lp_32_m_sbl7_32_1__p__0_rp___p__0_p_0_c_____1_m_sbl7_32_0__p__0_p_0_value);
	// Produce: sbl7_32
	sbl7_32.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void img_1_merged265(HWStream<hw_uint<512> >& /* buffer_args num ports = 32 */off_chip_img, img_cache& img, int root, int img_0, int img_1) {
  // Dynamic address computation

	// Consume: off_chip_img
	auto off_chip_img_1_m__lp__lp_32_m_img_1__p__0_rp___p___m_1_rp___p__0_p_1_c_______1_m__lp_img_0__p___m_1_rp___p__0_p_1_value = off_chip_img.read();
	auto compute_result = img_1_cu263(off_chip_img_1_m__lp__lp_32_m_img_1__p__0_rp___p___m_1_rp___p__0_p_1_c_______1_m__lp_img_0__p___m_1_rp___p__0_p_1_value);
	// Produce: img
	img_img_1_merged265_write_bundle_write(/* arg names */compute_result, img, root, img_0, img_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void mag_y_1_merged262(img_cache& img, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1) {
  // Dynamic address computation

	// Consume: img
	auto img_1_m__lp_32_m_mag_y_1__p__0_rp___p___m_1_p_1_c_____1_m_mag_y_0__p___m_1_p_1_value = img_mag_y_1_merged262_read_bundle_read(img/* source_delay */, root, mag_y_0, mag_y_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = mag_y_1_cu260(img_1_m__lp_32_m_mag_y_1__p__0_rp___p___m_1_p_1_c_____1_m_mag_y_0__p___m_1_p_1_value);
	// Produce: mag_y
	mag_y_mag_y_1_merged262_write_bundle_write(/* arg names */compute_result, mag_y, root, mag_y_0, mag_y_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void mag_x_1_merged268(img_cache& img, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1) {
  // Dynamic address computation

	// Consume: img
	auto img_1_m__lp_32_m_mag_x_1__p__0_rp___p___m_1_p_1_c_____1_m_mag_x_0__p___m_1_p_1_value = img_mag_x_1_merged268_read_bundle_read(img/* source_delay */, root, mag_x_0, mag_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = mag_x_1_cu266(img_1_m__lp_32_m_mag_x_1__p__0_rp___p___m_1_p_1_c_____1_m_mag_x_0__p___m_1_p_1_value);
	// Produce: mag_x
	mag_x_mag_x_1_merged268_write_bundle_write(/* arg names */compute_result, mag_x, root, mag_x_0, mag_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void sbl7_32_opt(HWStream<hw_uint<512> >& /* no bundle get_args num ports = 32 */off_chip_img, HWStream<hw_uint<512> >& /* get_args num ports = 32 */sbl7_32) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("sbl7_32_opt_debug.csv");
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

// schedule: { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59; mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59; sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59; img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
//   { mag_x_1_merged268[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
// Condition for mag_x_1_merged268(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((60 + -1*i2)) >= 0)))
//   { mag_y_1_merged262[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
// Condition for mag_y_1_merged262(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((60 + -1*i2)) >= 0)))
//   { sbl7_32_1_merged271[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 59 }
// Condition for sbl7_32_1_merged271(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((60 + -1*i2)) >= 0)))
//   { img_1_merged265[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 60 }
// Condition for img_1_merged265(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((60 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 2 <= i1 <= 1081 and 0 < i2 <= 60 and 0 < i3 <= 3; [0, i1, i2, 0] : 0 <= i1 <= 1081 and 0 <= i2 <= 60 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1081; i1++) {
	    for (int i2 = 0; i2 <= 60; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          img_1_merged265(off_chip_img /* buf name */, img, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -1 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-1 + 1*i2)) >= 0)))) {
	          mag_y_1_merged262(img /* buf name */, mag_y, 0, ((-2 + 1*i1)), ((-1 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -1 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-1 + 1*i2)) >= 0)))) {
	          mag_x_1_merged268(img /* buf name */, mag_x, 0, ((-2 + 1*i1)), ((-1 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -1 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-1 + 1*i2)) >= 0)))) {
	          sbl7_32_1_merged271(mag_x /* buf name */, mag_y /* buf name */, sbl7_32, 0, ((-2 + 1*i1)), ((-1 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void sbl7_32_opt_wrapper(HWStream<hw_uint<512> >& /* no bundle get_args num ports = 32 */off_chip_img, HWStream<hw_uint<512> >& /* get_args num ports = 32 */sbl7_32, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    sbl7_32_opt(off_chip_img, sbl7_32);
  }
}
#ifdef __VIVADO_SYNTH__
  // { img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[31 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[30 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[29 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[28 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[27 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[26 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[25 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[24 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[23 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[22 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[21 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[20 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[19 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[18 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[17 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[16 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[15 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[14 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[13 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[12 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[11 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[10 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[9 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[8 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[7 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[6 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[5 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[4 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[3 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[2 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[1 + 32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60; img_1_merged265[root = 0, img_0, img_1] -> off_chip_img[32img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 60 }
const int img_1_merged265_read_pipe0_num_transfers = 66002;
  // { sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[31 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[30 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[29 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[28 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[27 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[26 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[25 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[24 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[23 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[22 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[21 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[20 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[19 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[18 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[17 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[16 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[15 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[14 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[13 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[12 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[11 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[10 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[9 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[8 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[7 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[6 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[5 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[4 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[3 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[2 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[1 + 32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59; sbl7_32_1_merged271[root = 0, sbl7_32_0, sbl7_32_1] -> sbl7_32[32sbl7_32_1, sbl7_32_0] : 0 <= sbl7_32_0 <= 1079 and 0 <= sbl7_32_1 <= 59 }
const int sbl7_32_1_merged271_write_pipe0_num_transfers = 64800;


extern "C" {

void sbl7_32_opt_accel(hw_uint<512>* img_1_merged265_read_pipe0, hw_uint<512>* sbl7_32_1_merged271_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = img_1_merged265_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = sbl7_32_1_merged271_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = img_1_merged265_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = sbl7_32_1_merged271_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<512> > img_1_merged265_read_pipe0_channel;
  static HWStream<hw_uint<512> > sbl7_32_1_merged271_write_pipe0_channel;

  burst_read<512>(img_1_merged265_read_pipe0, img_1_merged265_read_pipe0_channel, img_1_merged265_read_pipe0_num_transfers*size);

  sbl7_32_opt_wrapper(img_1_merged265_read_pipe0_channel, sbl7_32_1_merged271_write_pipe0_channel, size);

  burst_write<512>(sbl7_32_1_merged271_write_pipe0, sbl7_32_1_merged271_write_pipe0_channel, sbl7_32_1_merged271_write_pipe0_num_transfers*size);
}

}
extern "C" {

void sbl7_32_opt_rdai(HWStream<hw_uint<512> >& img_1_merged265_read_pipe0, HWStream<hw_uint<512> >&  sbl7_32_1_merged271_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = img_1_merged265_read_pipe0
#pragma HLS INTERFACE axis register port = sbl7_32_1_merged271_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  sbl7_32_opt(img_1_merged265_read_pipe0, sbl7_32_1_merged271_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

