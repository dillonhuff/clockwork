#ifndef __VIVADO_SYNTH__
#include <fstream>
using namespace std;

  // Debug utility
  ofstream* global_debug_handle;

#endif //__VIVADO_SYNTH__
// compute file: sbl9_16_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h
#include "sbl9_16_opt_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h_merged_compute_units.h"

struct img_img_1_merged134_272_merged_banks_12_cache {
	// RAM Box: {[0, 1920], [0, 1081]}
	// Capacity: 244
	// # of read delays: 6
  // 0, 1, 121, 122, 242, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 119> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 119> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_121() {
		return f4;
	}

	inline hw_uint<16> peek_122() {
		return f6;
	}

	inline hw_uint<16> peek_241() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_242() {
		return f8;
	}

	inline hw_uint<16> peek_243() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 119
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 119 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 119
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 119 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct img_img_1_merged134_273_merged_banks_12_cache {
	// RAM Box: {[1, 1921], [0, 1081]}
	// Capacity: 244
	// # of read delays: 6
  // 0, 1, 121, 122, 242, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 119> f3;
	hw_uint<16> f4;
	hw_uint<16> f6;
	fifo<hw_uint<16>, 119> f7;
	hw_uint<16> f8;
	hw_uint<16> f10;


	inline hw_uint<16> peek_0() {
		return f0;
	}

	inline hw_uint<16> peek_1() {
		return f2;
	}

	inline hw_uint<16> peek_120() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f3.back();
	}

	inline hw_uint<16> peek_121() {
		return f4;
	}

	inline hw_uint<16> peek_122() {
		return f6;
	}

	inline hw_uint<16> peek_241() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f7.back();
	}

	inline hw_uint<16> peek_242() {
		return f8;
	}

	inline hw_uint<16> peek_243() {
		return f10;
	}



	inline void push(const hw_uint<16> value) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f10 = f8;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 119
    f8 = f7.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 119 reading from capacity: 1
    f7.push(f6);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f6 = f4;
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 119
    f4 = f3.back();
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 119 reading from capacity: 1
    f3.push(f2);
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
    // cap: 1 reading from capacity: 1
    f2 = f0;
    // cap: 1
    f0 = value;
	}

};

struct img_img_1_merged134_274_merged_banks_12_cache {
	// RAM Box: {[2, 1906], [0, 1081]}
	// Capacity: 244
	// # of read delays: 4
  // 0, 1, 122, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 120> f5;
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

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_243() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged134_275_merged_banks_12_cache {
	// RAM Box: {[3, 1907], [0, 1081]}
	// Capacity: 244
	// # of read delays: 4
  // 0, 1, 122, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 120> f5;
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

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_243() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged134_276_merged_banks_12_cache {
	// RAM Box: {[4, 1908], [0, 1081]}
	// Capacity: 244
	// # of read delays: 4
  // 0, 1, 122, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 120> f5;
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

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_243() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged134_277_merged_banks_12_cache {
	// RAM Box: {[5, 1909], [0, 1081]}
	// Capacity: 244
	// # of read delays: 4
  // 0, 1, 122, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 120> f5;
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

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_243() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged134_278_merged_banks_12_cache {
	// RAM Box: {[6, 1910], [0, 1081]}
	// Capacity: 244
	// # of read delays: 4
  // 0, 1, 122, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 120> f5;
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

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_243() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged134_279_merged_banks_12_cache {
	// RAM Box: {[7, 1911], [0, 1081]}
	// Capacity: 244
	// # of read delays: 4
  // 0, 1, 122, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 120> f5;
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

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_243() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged134_280_merged_banks_12_cache {
	// RAM Box: {[8, 1912], [0, 1081]}
	// Capacity: 244
	// # of read delays: 4
  // 0, 1, 122, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 120> f5;
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

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_243() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged134_281_merged_banks_12_cache {
	// RAM Box: {[9, 1913], [0, 1081]}
	// Capacity: 244
	// # of read delays: 4
  // 0, 1, 122, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 120> f5;
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

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_243() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged134_282_merged_banks_12_cache {
	// RAM Box: {[10, 1914], [0, 1081]}
	// Capacity: 244
	// # of read delays: 4
  // 0, 1, 122, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 120> f5;
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

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_243() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged134_283_merged_banks_12_cache {
	// RAM Box: {[11, 1915], [0, 1081]}
	// Capacity: 244
	// # of read delays: 4
  // 0, 1, 122, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 120> f5;
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

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_243() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged134_284_merged_banks_12_cache {
	// RAM Box: {[12, 1916], [0, 1081]}
	// Capacity: 244
	// # of read delays: 4
  // 0, 1, 122, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 120> f5;
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

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_243() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged134_285_merged_banks_12_cache {
	// RAM Box: {[13, 1917], [0, 1081]}
	// Capacity: 244
	// # of read delays: 4
  // 0, 1, 122, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 120> f5;
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

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_243() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged134_286_merged_banks_12_cache {
	// RAM Box: {[14, 1918], [0, 1081]}
	// Capacity: 244
	// # of read delays: 4
  // 0, 1, 122, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 120> f5;
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

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_243() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_img_1_merged134_287_merged_banks_12_cache {
	// RAM Box: {[15, 1919], [0, 1081]}
	// Capacity: 244
	// # of read delays: 4
  // 0, 1, 122, 243
	hw_uint<16> f0;
	hw_uint<16> f2;
	fifo<hw_uint<16>, 120> f3;
	hw_uint<16> f4;
	fifo<hw_uint<16>, 120> f5;
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

	inline hw_uint<16> peek_242() {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
		return f5.back();
	}

	inline hw_uint<16> peek_243() {
		return f6;
	}



	inline void push(const hw_uint<16> value) {
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

struct img_cache {
  // Reader addrs...
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[2 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[2 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[2 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[1 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[1 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[1 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[3 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[3 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[3 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[2 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[2 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[2 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[4 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[4 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[4 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[3 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[3 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[3 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[5 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[5 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[5 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[4 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[4 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[4 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[6 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[6 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[6 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[5 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[5 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[5 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[7 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[7 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[7 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[6 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[6 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[6 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[8 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[8 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[8 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[7 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[7 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[7 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[9 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[9 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[9 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[8 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[8 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[8 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[10 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[10 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[10 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[9 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[9 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[9 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[11 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[11 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[11 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[10 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[10 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[10 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[12 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[12 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[12 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[11 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[11 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[11 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[13 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[13 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[13 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[12 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[12 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[12 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[14 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[14 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[14 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[13 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[13 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[13 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[15 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[15 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[15 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[14 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[14 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[14 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[16 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[16 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[16 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[15 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[15 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[15 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[17 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[17 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[17 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[6 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[6 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[7 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[7 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[8 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[8 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[7 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[7 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[8 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[8 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[9 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[9 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[8 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[8 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[9 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[9 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[10 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[10 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[9 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[9 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[10 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[10 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[11 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[11 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[10 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[10 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[11 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[11 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[12 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[12 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[11 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[11 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[12 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[12 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[13 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[13 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[12 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[12 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[13 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[13 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[14 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[14 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[13 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[13 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[14 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[14 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[15 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[15 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[14 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[14 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[15 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[15 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[16 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[16 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[15 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[15 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[16 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[16 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[17 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[17 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[1 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[1 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[2 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[2 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[1 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[1 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[2 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[2 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[3 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[3 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[2 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[2 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[3 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[3 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[4 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[4 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[3 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[3 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[4 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[4 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[5 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[5 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[4 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[4 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[5 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[5 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[6 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[6 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[5 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[5 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[6 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[6 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[7 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
    // { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[7 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // # of banks: 16
  img_img_1_merged134_272_merged_banks_12_cache img_img_1_merged134_272_merged_banks_12;
  img_img_1_merged134_273_merged_banks_12_cache img_img_1_merged134_273_merged_banks_12;
  img_img_1_merged134_274_merged_banks_12_cache img_img_1_merged134_274_merged_banks_12;
  img_img_1_merged134_275_merged_banks_12_cache img_img_1_merged134_275_merged_banks_12;
  img_img_1_merged134_276_merged_banks_12_cache img_img_1_merged134_276_merged_banks_12;
  img_img_1_merged134_277_merged_banks_12_cache img_img_1_merged134_277_merged_banks_12;
  img_img_1_merged134_278_merged_banks_12_cache img_img_1_merged134_278_merged_banks_12;
  img_img_1_merged134_279_merged_banks_12_cache img_img_1_merged134_279_merged_banks_12;
  img_img_1_merged134_280_merged_banks_12_cache img_img_1_merged134_280_merged_banks_12;
  img_img_1_merged134_281_merged_banks_12_cache img_img_1_merged134_281_merged_banks_12;
  img_img_1_merged134_282_merged_banks_12_cache img_img_1_merged134_282_merged_banks_12;
  img_img_1_merged134_283_merged_banks_12_cache img_img_1_merged134_283_merged_banks_12;
  img_img_1_merged134_284_merged_banks_12_cache img_img_1_merged134_284_merged_banks_12;
  img_img_1_merged134_285_merged_banks_12_cache img_img_1_merged134_285_merged_banks_12;
  img_img_1_merged134_286_merged_banks_12_cache img_img_1_merged134_286_merged_banks_12;
  img_img_1_merged134_287_merged_banks_12_cache img_img_1_merged134_287_merged_banks_12;
};



inline void img_img_1_merged134_272_write(hw_uint<16>& img_img_1_merged134_272, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged134_272_merged_banks_12.push(img_img_1_merged134_272);
}

inline void img_img_1_merged134_273_write(hw_uint<16>& img_img_1_merged134_273, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged134_273_merged_banks_12.push(img_img_1_merged134_273);
}

inline void img_img_1_merged134_274_write(hw_uint<16>& img_img_1_merged134_274, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged134_274_merged_banks_12.push(img_img_1_merged134_274);
}

inline void img_img_1_merged134_275_write(hw_uint<16>& img_img_1_merged134_275, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged134_275_merged_banks_12.push(img_img_1_merged134_275);
}

inline void img_img_1_merged134_276_write(hw_uint<16>& img_img_1_merged134_276, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged134_276_merged_banks_12.push(img_img_1_merged134_276);
}

inline void img_img_1_merged134_277_write(hw_uint<16>& img_img_1_merged134_277, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged134_277_merged_banks_12.push(img_img_1_merged134_277);
}

inline void img_img_1_merged134_278_write(hw_uint<16>& img_img_1_merged134_278, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged134_278_merged_banks_12.push(img_img_1_merged134_278);
}

inline void img_img_1_merged134_279_write(hw_uint<16>& img_img_1_merged134_279, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged134_279_merged_banks_12.push(img_img_1_merged134_279);
}

inline void img_img_1_merged134_280_write(hw_uint<16>& img_img_1_merged134_280, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged134_280_merged_banks_12.push(img_img_1_merged134_280);
}

inline void img_img_1_merged134_281_write(hw_uint<16>& img_img_1_merged134_281, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged134_281_merged_banks_12.push(img_img_1_merged134_281);
}

inline void img_img_1_merged134_282_write(hw_uint<16>& img_img_1_merged134_282, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged134_282_merged_banks_12.push(img_img_1_merged134_282);
}

inline void img_img_1_merged134_283_write(hw_uint<16>& img_img_1_merged134_283, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged134_283_merged_banks_12.push(img_img_1_merged134_283);
}

inline void img_img_1_merged134_284_write(hw_uint<16>& img_img_1_merged134_284, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged134_284_merged_banks_12.push(img_img_1_merged134_284);
}

inline void img_img_1_merged134_285_write(hw_uint<16>& img_img_1_merged134_285, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged134_285_merged_banks_12.push(img_img_1_merged134_285);
}

inline void img_img_1_merged134_286_write(hw_uint<16>& img_img_1_merged134_286, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged134_286_merged_banks_12.push(img_img_1_merged134_286);
}

inline void img_img_1_merged134_287_write(hw_uint<16>& img_img_1_merged134_287, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
  img.img_img_1_merged134_287_merged_banks_12.push(img_img_1_merged134_287);
}

inline hw_uint<16> img_mag_x_1_merged140_176_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_176 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_272 = img.img_img_1_merged134_272_merged_banks_12.peek_243();
  return value_img_img_1_merged134_272;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_177_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_177 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_272 = img.img_img_1_merged134_272_merged_banks_12.peek_122();
  return value_img_img_1_merged134_272;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_178_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_178 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_272 = img.img_img_1_merged134_272_merged_banks_12.peek_1();
  return value_img_img_1_merged134_272;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_179_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_179 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[2 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_274 = img.img_img_1_merged134_274_merged_banks_12.peek_243();
  return value_img_img_1_merged134_274;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_180_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_180 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[2 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_274 = img.img_img_1_merged134_274_merged_banks_12.peek_122();
  return value_img_img_1_merged134_274;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_181_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_181 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[2 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_274 = img.img_img_1_merged134_274_merged_banks_12.peek_1();
  return value_img_img_1_merged134_274;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_182_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_182 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[1 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_273 = img.img_img_1_merged134_273_merged_banks_12.peek_243();
  return value_img_img_1_merged134_273;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_183_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_183 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[1 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_273 = img.img_img_1_merged134_273_merged_banks_12.peek_122();
  return value_img_img_1_merged134_273;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_184_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_184 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[1 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_273 = img.img_img_1_merged134_273_merged_banks_12.peek_1();
  return value_img_img_1_merged134_273;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_185_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_185 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[3 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_275 = img.img_img_1_merged134_275_merged_banks_12.peek_243();
  return value_img_img_1_merged134_275;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_186_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_186 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[3 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_275 = img.img_img_1_merged134_275_merged_banks_12.peek_122();
  return value_img_img_1_merged134_275;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_187_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_187 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[3 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_275 = img.img_img_1_merged134_275_merged_banks_12.peek_1();
  return value_img_img_1_merged134_275;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_188_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_188 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[2 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_274 = img.img_img_1_merged134_274_merged_banks_12.peek_243();
  return value_img_img_1_merged134_274;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_189_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_189 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[2 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_274 = img.img_img_1_merged134_274_merged_banks_12.peek_122();
  return value_img_img_1_merged134_274;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_190_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_190 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[2 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_274 = img.img_img_1_merged134_274_merged_banks_12.peek_1();
  return value_img_img_1_merged134_274;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_191_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_191 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[4 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_276 = img.img_img_1_merged134_276_merged_banks_12.peek_243();
  return value_img_img_1_merged134_276;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_192_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_192 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[4 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_276 = img.img_img_1_merged134_276_merged_banks_12.peek_122();
  return value_img_img_1_merged134_276;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_193_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_193 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[4 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_276 = img.img_img_1_merged134_276_merged_banks_12.peek_1();
  return value_img_img_1_merged134_276;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_194_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_194 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[3 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_275 = img.img_img_1_merged134_275_merged_banks_12.peek_243();
  return value_img_img_1_merged134_275;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_195_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_195 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[3 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_275 = img.img_img_1_merged134_275_merged_banks_12.peek_122();
  return value_img_img_1_merged134_275;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_196_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_196 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[3 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_275 = img.img_img_1_merged134_275_merged_banks_12.peek_1();
  return value_img_img_1_merged134_275;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_197_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_197 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[5 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_277 = img.img_img_1_merged134_277_merged_banks_12.peek_243();
  return value_img_img_1_merged134_277;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_198_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_198 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[5 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_277 = img.img_img_1_merged134_277_merged_banks_12.peek_122();
  return value_img_img_1_merged134_277;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_199_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_199 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[5 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_277 = img.img_img_1_merged134_277_merged_banks_12.peek_1();
  return value_img_img_1_merged134_277;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_200_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_200 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[4 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_276 = img.img_img_1_merged134_276_merged_banks_12.peek_243();
  return value_img_img_1_merged134_276;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_201_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_201 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[4 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_276 = img.img_img_1_merged134_276_merged_banks_12.peek_122();
  return value_img_img_1_merged134_276;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_202_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_202 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[4 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_276 = img.img_img_1_merged134_276_merged_banks_12.peek_1();
  return value_img_img_1_merged134_276;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_203_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_203 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[6 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_278 = img.img_img_1_merged134_278_merged_banks_12.peek_243();
  return value_img_img_1_merged134_278;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_204_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_204 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[6 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_278 = img.img_img_1_merged134_278_merged_banks_12.peek_122();
  return value_img_img_1_merged134_278;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_205_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_205 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[6 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_278 = img.img_img_1_merged134_278_merged_banks_12.peek_1();
  return value_img_img_1_merged134_278;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_206_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_206 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[5 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_277 = img.img_img_1_merged134_277_merged_banks_12.peek_243();
  return value_img_img_1_merged134_277;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_207_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_207 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[5 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_277 = img.img_img_1_merged134_277_merged_banks_12.peek_122();
  return value_img_img_1_merged134_277;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_208_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_208 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[5 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_277 = img.img_img_1_merged134_277_merged_banks_12.peek_1();
  return value_img_img_1_merged134_277;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_209_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_209 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[7 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_279 = img.img_img_1_merged134_279_merged_banks_12.peek_243();
  return value_img_img_1_merged134_279;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_210_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_210 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[7 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_279 = img.img_img_1_merged134_279_merged_banks_12.peek_122();
  return value_img_img_1_merged134_279;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_211_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_211 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[7 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_279 = img.img_img_1_merged134_279_merged_banks_12.peek_1();
  return value_img_img_1_merged134_279;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_212_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_212 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[6 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_278 = img.img_img_1_merged134_278_merged_banks_12.peek_243();
  return value_img_img_1_merged134_278;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_213_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_213 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[6 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_278 = img.img_img_1_merged134_278_merged_banks_12.peek_122();
  return value_img_img_1_merged134_278;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_214_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_214 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[6 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_278 = img.img_img_1_merged134_278_merged_banks_12.peek_1();
  return value_img_img_1_merged134_278;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_215_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_215 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[8 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_280 = img.img_img_1_merged134_280_merged_banks_12.peek_243();
  return value_img_img_1_merged134_280;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_216_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_216 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[8 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_280 = img.img_img_1_merged134_280_merged_banks_12.peek_122();
  return value_img_img_1_merged134_280;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_217_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_217 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[8 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_280 = img.img_img_1_merged134_280_merged_banks_12.peek_1();
  return value_img_img_1_merged134_280;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_218_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_218 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[7 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_279 = img.img_img_1_merged134_279_merged_banks_12.peek_243();
  return value_img_img_1_merged134_279;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_219_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_219 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[7 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_279 = img.img_img_1_merged134_279_merged_banks_12.peek_122();
  return value_img_img_1_merged134_279;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_220_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_220 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[7 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_279 = img.img_img_1_merged134_279_merged_banks_12.peek_1();
  return value_img_img_1_merged134_279;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_221_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_221 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[9 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_281 = img.img_img_1_merged134_281_merged_banks_12.peek_243();
  return value_img_img_1_merged134_281;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_222_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_222 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[9 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_281 = img.img_img_1_merged134_281_merged_banks_12.peek_122();
  return value_img_img_1_merged134_281;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_223_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_223 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[9 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_281 = img.img_img_1_merged134_281_merged_banks_12.peek_1();
  return value_img_img_1_merged134_281;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_224_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_224 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[8 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_280 = img.img_img_1_merged134_280_merged_banks_12.peek_243();
  return value_img_img_1_merged134_280;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_225_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_225 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[8 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_280 = img.img_img_1_merged134_280_merged_banks_12.peek_122();
  return value_img_img_1_merged134_280;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_226_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_226 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[8 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_280 = img.img_img_1_merged134_280_merged_banks_12.peek_1();
  return value_img_img_1_merged134_280;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_227_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_227 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[10 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_282 = img.img_img_1_merged134_282_merged_banks_12.peek_243();
  return value_img_img_1_merged134_282;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_228_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_228 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[10 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_282 = img.img_img_1_merged134_282_merged_banks_12.peek_122();
  return value_img_img_1_merged134_282;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_229_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_229 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[10 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_282 = img.img_img_1_merged134_282_merged_banks_12.peek_1();
  return value_img_img_1_merged134_282;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_230_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_230 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[9 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_281 = img.img_img_1_merged134_281_merged_banks_12.peek_243();
  return value_img_img_1_merged134_281;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_231_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_231 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[9 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_281 = img.img_img_1_merged134_281_merged_banks_12.peek_122();
  return value_img_img_1_merged134_281;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_232_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_232 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[9 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_281 = img.img_img_1_merged134_281_merged_banks_12.peek_1();
  return value_img_img_1_merged134_281;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_233_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_233 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[11 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_283 = img.img_img_1_merged134_283_merged_banks_12.peek_243();
  return value_img_img_1_merged134_283;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_234_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_234 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[11 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_283 = img.img_img_1_merged134_283_merged_banks_12.peek_122();
  return value_img_img_1_merged134_283;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_235_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_235 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[11 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_283 = img.img_img_1_merged134_283_merged_banks_12.peek_1();
  return value_img_img_1_merged134_283;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_236_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_236 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[10 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_282 = img.img_img_1_merged134_282_merged_banks_12.peek_243();
  return value_img_img_1_merged134_282;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_237_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_237 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[10 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_282 = img.img_img_1_merged134_282_merged_banks_12.peek_122();
  return value_img_img_1_merged134_282;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_238_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_238 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[10 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_282 = img.img_img_1_merged134_282_merged_banks_12.peek_1();
  return value_img_img_1_merged134_282;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_239_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_239 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[12 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_284 = img.img_img_1_merged134_284_merged_banks_12.peek_243();
  return value_img_img_1_merged134_284;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_240_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_240 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[12 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_284 = img.img_img_1_merged134_284_merged_banks_12.peek_122();
  return value_img_img_1_merged134_284;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_241_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_241 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[12 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_284 = img.img_img_1_merged134_284_merged_banks_12.peek_1();
  return value_img_img_1_merged134_284;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_242_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_242 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[11 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_283 = img.img_img_1_merged134_283_merged_banks_12.peek_243();
  return value_img_img_1_merged134_283;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_243_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_243 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[11 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_283 = img.img_img_1_merged134_283_merged_banks_12.peek_122();
  return value_img_img_1_merged134_283;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_244_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_244 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[11 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_283 = img.img_img_1_merged134_283_merged_banks_12.peek_1();
  return value_img_img_1_merged134_283;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_245_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_245 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[13 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_285 = img.img_img_1_merged134_285_merged_banks_12.peek_243();
  return value_img_img_1_merged134_285;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_246_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_246 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[13 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_285 = img.img_img_1_merged134_285_merged_banks_12.peek_122();
  return value_img_img_1_merged134_285;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_247_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_247 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[13 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_285 = img.img_img_1_merged134_285_merged_banks_12.peek_1();
  return value_img_img_1_merged134_285;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_248_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_248 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[12 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_284 = img.img_img_1_merged134_284_merged_banks_12.peek_243();
  return value_img_img_1_merged134_284;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_249_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_249 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[12 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_284 = img.img_img_1_merged134_284_merged_banks_12.peek_122();
  return value_img_img_1_merged134_284;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_250_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_250 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[12 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_284 = img.img_img_1_merged134_284_merged_banks_12.peek_1();
  return value_img_img_1_merged134_284;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_251_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_251 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[14 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_286 = img.img_img_1_merged134_286_merged_banks_12.peek_243();
  return value_img_img_1_merged134_286;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_252_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_252 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[14 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_286 = img.img_img_1_merged134_286_merged_banks_12.peek_122();
  return value_img_img_1_merged134_286;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_253_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_253 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[14 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_286 = img.img_img_1_merged134_286_merged_banks_12.peek_1();
  return value_img_img_1_merged134_286;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_254_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_254 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[13 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_285 = img.img_img_1_merged134_285_merged_banks_12.peek_243();
  return value_img_img_1_merged134_285;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_255_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_255 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[13 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_285 = img.img_img_1_merged134_285_merged_banks_12.peek_122();
  return value_img_img_1_merged134_285;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_256_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_256 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[13 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_285 = img.img_img_1_merged134_285_merged_banks_12.peek_1();
  return value_img_img_1_merged134_285;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_257_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_257 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[15 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_287 = img.img_img_1_merged134_287_merged_banks_12.peek_243();
  return value_img_img_1_merged134_287;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_258_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_258 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[15 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_287 = img.img_img_1_merged134_287_merged_banks_12.peek_122();
  return value_img_img_1_merged134_287;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_259_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_259 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[15 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_287 = img.img_img_1_merged134_287_merged_banks_12.peek_1();
  return value_img_img_1_merged134_287;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_260_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_260 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[14 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_286 = img.img_img_1_merged134_286_merged_banks_12.peek_243();
  return value_img_img_1_merged134_286;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_261_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_261 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[14 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_286 = img.img_img_1_merged134_286_merged_banks_12.peek_122();
  return value_img_img_1_merged134_286;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_262_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_262 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[14 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_286 = img.img_img_1_merged134_286_merged_banks_12.peek_1();
  return value_img_img_1_merged134_286;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_263_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_263 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[16 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_272 = img.img_img_1_merged134_272_merged_banks_12.peek_242();
  return value_img_img_1_merged134_272;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_264_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_264 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[16 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_272 = img.img_img_1_merged134_272_merged_banks_12.peek_121();
  return value_img_img_1_merged134_272;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_265_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_265 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[16 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_272 = img.img_img_1_merged134_272_merged_banks_12.peek_0();
  return value_img_img_1_merged134_272;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_266_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_266 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[15 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_287 = img.img_img_1_merged134_287_merged_banks_12.peek_243();
  return value_img_img_1_merged134_287;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_267_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_267 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[15 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_287 = img.img_img_1_merged134_287_merged_banks_12.peek_122();
  return value_img_img_1_merged134_287;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_268_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_268 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[15 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_287 = img.img_img_1_merged134_287_merged_banks_12.peek_1();
  return value_img_img_1_merged134_287;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_269_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_269 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[17 + 16mag_x_1, mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_273 = img.img_img_1_merged134_273_merged_banks_12.peek_242();
  return value_img_img_1_merged134_273;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_270_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_270 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[17 + 16mag_x_1, 1 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_273 = img.img_img_1_merged134_273_merged_banks_12.peek_121();
  return value_img_img_1_merged134_273;
  return 0;
}

inline hw_uint<16> img_mag_x_1_merged140_271_select(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_x_1_merged140_271 read pattern: { mag_x_1_merged140[root = 0, mag_x_0, mag_x_1] -> img[17 + 16mag_x_1, 2 + mag_x_0] : 0 <= mag_x_0 <= 1079 and 0 <= mag_x_1 <= 119 }
  // Read schedule : { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_273 = img.img_img_1_merged134_273_merged_banks_12.peek_0();
  return value_img_img_1_merged134_273;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_100_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_100 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[6 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_278 = img.img_img_1_merged134_278_merged_banks_12.peek_243();
  return value_img_img_1_merged134_278;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_101_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_101 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[6 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_278 = img.img_img_1_merged134_278_merged_banks_12.peek_1();
  return value_img_img_1_merged134_278;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_102_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_102 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[7 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_279 = img.img_img_1_merged134_279_merged_banks_12.peek_243();
  return value_img_img_1_merged134_279;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_103_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_103 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[7 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_279 = img.img_img_1_merged134_279_merged_banks_12.peek_1();
  return value_img_img_1_merged134_279;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_104_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_104 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[8 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_280 = img.img_img_1_merged134_280_merged_banks_12.peek_243();
  return value_img_img_1_merged134_280;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_105_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_105 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[8 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_280 = img.img_img_1_merged134_280_merged_banks_12.peek_1();
  return value_img_img_1_merged134_280;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_106_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_106 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[7 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_279 = img.img_img_1_merged134_279_merged_banks_12.peek_243();
  return value_img_img_1_merged134_279;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_107_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_107 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[7 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_279 = img.img_img_1_merged134_279_merged_banks_12.peek_1();
  return value_img_img_1_merged134_279;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_108_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_108 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[8 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_280 = img.img_img_1_merged134_280_merged_banks_12.peek_243();
  return value_img_img_1_merged134_280;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_109_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_109 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[8 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_280 = img.img_img_1_merged134_280_merged_banks_12.peek_1();
  return value_img_img_1_merged134_280;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_110_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_110 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[9 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_281 = img.img_img_1_merged134_281_merged_banks_12.peek_243();
  return value_img_img_1_merged134_281;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_111_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_111 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[9 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_281 = img.img_img_1_merged134_281_merged_banks_12.peek_1();
  return value_img_img_1_merged134_281;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_112_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_112 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[8 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_280 = img.img_img_1_merged134_280_merged_banks_12.peek_243();
  return value_img_img_1_merged134_280;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_113_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_113 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[8 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_280 = img.img_img_1_merged134_280_merged_banks_12.peek_1();
  return value_img_img_1_merged134_280;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_114_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_114 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[9 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_281 = img.img_img_1_merged134_281_merged_banks_12.peek_243();
  return value_img_img_1_merged134_281;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_115_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_115 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[9 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_281 = img.img_img_1_merged134_281_merged_banks_12.peek_1();
  return value_img_img_1_merged134_281;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_116_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_116 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[10 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_282 = img.img_img_1_merged134_282_merged_banks_12.peek_243();
  return value_img_img_1_merged134_282;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_117_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_117 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[10 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_282 = img.img_img_1_merged134_282_merged_banks_12.peek_1();
  return value_img_img_1_merged134_282;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_118_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_118 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[9 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_281 = img.img_img_1_merged134_281_merged_banks_12.peek_243();
  return value_img_img_1_merged134_281;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_119_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_119 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[9 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_281 = img.img_img_1_merged134_281_merged_banks_12.peek_1();
  return value_img_img_1_merged134_281;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_120_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_120 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[10 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_282 = img.img_img_1_merged134_282_merged_banks_12.peek_243();
  return value_img_img_1_merged134_282;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_121_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_121 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[10 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_282 = img.img_img_1_merged134_282_merged_banks_12.peek_1();
  return value_img_img_1_merged134_282;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_122_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_122 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[11 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_283 = img.img_img_1_merged134_283_merged_banks_12.peek_243();
  return value_img_img_1_merged134_283;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_123_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_123 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[11 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_283 = img.img_img_1_merged134_283_merged_banks_12.peek_1();
  return value_img_img_1_merged134_283;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_124_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_124 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[10 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_282 = img.img_img_1_merged134_282_merged_banks_12.peek_243();
  return value_img_img_1_merged134_282;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_125_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_125 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[10 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_282 = img.img_img_1_merged134_282_merged_banks_12.peek_1();
  return value_img_img_1_merged134_282;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_126_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_126 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[11 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_283 = img.img_img_1_merged134_283_merged_banks_12.peek_243();
  return value_img_img_1_merged134_283;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_127_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_127 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[11 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_283 = img.img_img_1_merged134_283_merged_banks_12.peek_1();
  return value_img_img_1_merged134_283;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_128_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_128 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[12 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_284 = img.img_img_1_merged134_284_merged_banks_12.peek_243();
  return value_img_img_1_merged134_284;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_129_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_129 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[12 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_284 = img.img_img_1_merged134_284_merged_banks_12.peek_1();
  return value_img_img_1_merged134_284;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_130_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_130 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[11 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_283 = img.img_img_1_merged134_283_merged_banks_12.peek_243();
  return value_img_img_1_merged134_283;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_131_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_131 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[11 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_283 = img.img_img_1_merged134_283_merged_banks_12.peek_1();
  return value_img_img_1_merged134_283;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_132_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_132 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[12 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_284 = img.img_img_1_merged134_284_merged_banks_12.peek_243();
  return value_img_img_1_merged134_284;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_133_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_133 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[12 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_284 = img.img_img_1_merged134_284_merged_banks_12.peek_1();
  return value_img_img_1_merged134_284;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_134_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_134 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[13 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_285 = img.img_img_1_merged134_285_merged_banks_12.peek_243();
  return value_img_img_1_merged134_285;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_135_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_135 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[13 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_285 = img.img_img_1_merged134_285_merged_banks_12.peek_1();
  return value_img_img_1_merged134_285;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_136_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_136 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[12 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_284 = img.img_img_1_merged134_284_merged_banks_12.peek_243();
  return value_img_img_1_merged134_284;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_137_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_137 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[12 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_284 = img.img_img_1_merged134_284_merged_banks_12.peek_1();
  return value_img_img_1_merged134_284;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_138_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_138 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[13 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_285 = img.img_img_1_merged134_285_merged_banks_12.peek_243();
  return value_img_img_1_merged134_285;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_139_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_139 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[13 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_285 = img.img_img_1_merged134_285_merged_banks_12.peek_1();
  return value_img_img_1_merged134_285;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_140_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_140 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[14 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_286 = img.img_img_1_merged134_286_merged_banks_12.peek_243();
  return value_img_img_1_merged134_286;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_141_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_141 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[14 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_286 = img.img_img_1_merged134_286_merged_banks_12.peek_1();
  return value_img_img_1_merged134_286;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_142_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_142 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[13 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_285 = img.img_img_1_merged134_285_merged_banks_12.peek_243();
  return value_img_img_1_merged134_285;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_143_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_143 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[13 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_285 = img.img_img_1_merged134_285_merged_banks_12.peek_1();
  return value_img_img_1_merged134_285;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_144_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_144 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[14 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_286 = img.img_img_1_merged134_286_merged_banks_12.peek_243();
  return value_img_img_1_merged134_286;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_145_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_145 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[14 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_286 = img.img_img_1_merged134_286_merged_banks_12.peek_1();
  return value_img_img_1_merged134_286;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_146_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_146 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[15 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_287 = img.img_img_1_merged134_287_merged_banks_12.peek_243();
  return value_img_img_1_merged134_287;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_147_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_147 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[15 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_287 = img.img_img_1_merged134_287_merged_banks_12.peek_1();
  return value_img_img_1_merged134_287;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_148_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_148 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[14 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_286 = img.img_img_1_merged134_286_merged_banks_12.peek_243();
  return value_img_img_1_merged134_286;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_149_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_149 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[14 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_286 = img.img_img_1_merged134_286_merged_banks_12.peek_1();
  return value_img_img_1_merged134_286;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_150_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_150 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[15 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_287 = img.img_img_1_merged134_287_merged_banks_12.peek_243();
  return value_img_img_1_merged134_287;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_151_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_151 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[15 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_287 = img.img_img_1_merged134_287_merged_banks_12.peek_1();
  return value_img_img_1_merged134_287;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_152_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_152 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[16 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_272 = img.img_img_1_merged134_272_merged_banks_12.peek_242();
  return value_img_img_1_merged134_272;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_153_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_153 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[16 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_272 = img.img_img_1_merged134_272_merged_banks_12.peek_0();
  return value_img_img_1_merged134_272;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_154_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_154 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[15 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_287 = img.img_img_1_merged134_287_merged_banks_12.peek_243();
  return value_img_img_1_merged134_287;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_155_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_155 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[15 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_287 = img.img_img_1_merged134_287_merged_banks_12.peek_1();
  return value_img_img_1_merged134_287;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_156_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_156 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[16 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_272 = img.img_img_1_merged134_272_merged_banks_12.peek_242();
  return value_img_img_1_merged134_272;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_157_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_157 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[16 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_272 = img.img_img_1_merged134_272_merged_banks_12.peek_0();
  return value_img_img_1_merged134_272;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_158_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_158 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[17 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_273 = img.img_img_1_merged134_273_merged_banks_12.peek_242();
  return value_img_img_1_merged134_273;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_159_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_159 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[17 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_273 = img.img_img_1_merged134_273_merged_banks_12.peek_0();
  return value_img_img_1_merged134_273;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_64_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_64 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_272 = img.img_img_1_merged134_272_merged_banks_12.peek_243();
  return value_img_img_1_merged134_272;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_65_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_65 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_272 = img.img_img_1_merged134_272_merged_banks_12.peek_1();
  return value_img_img_1_merged134_272;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_66_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_66 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[1 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_273 = img.img_img_1_merged134_273_merged_banks_12.peek_243();
  return value_img_img_1_merged134_273;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_67_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_67 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[1 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_273 = img.img_img_1_merged134_273_merged_banks_12.peek_1();
  return value_img_img_1_merged134_273;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_68_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_68 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[2 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_274 = img.img_img_1_merged134_274_merged_banks_12.peek_243();
  return value_img_img_1_merged134_274;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_69_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_69 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[2 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_274 = img.img_img_1_merged134_274_merged_banks_12.peek_1();
  return value_img_img_1_merged134_274;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_70_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_70 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[1 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_273 = img.img_img_1_merged134_273_merged_banks_12.peek_243();
  return value_img_img_1_merged134_273;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_71_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_71 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[1 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_273 = img.img_img_1_merged134_273_merged_banks_12.peek_1();
  return value_img_img_1_merged134_273;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_72_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_72 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[2 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_274 = img.img_img_1_merged134_274_merged_banks_12.peek_243();
  return value_img_img_1_merged134_274;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_73_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_73 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[2 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_274 = img.img_img_1_merged134_274_merged_banks_12.peek_1();
  return value_img_img_1_merged134_274;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_74_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_74 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[3 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_275 = img.img_img_1_merged134_275_merged_banks_12.peek_243();
  return value_img_img_1_merged134_275;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_75_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_75 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[3 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_275 = img.img_img_1_merged134_275_merged_banks_12.peek_1();
  return value_img_img_1_merged134_275;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_76_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_76 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[2 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_274 = img.img_img_1_merged134_274_merged_banks_12.peek_243();
  return value_img_img_1_merged134_274;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_77_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_77 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[2 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_274 = img.img_img_1_merged134_274_merged_banks_12.peek_1();
  return value_img_img_1_merged134_274;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_78_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_78 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[3 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_275 = img.img_img_1_merged134_275_merged_banks_12.peek_243();
  return value_img_img_1_merged134_275;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_79_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_79 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[3 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_275 = img.img_img_1_merged134_275_merged_banks_12.peek_1();
  return value_img_img_1_merged134_275;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_80_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_80 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[4 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_276 = img.img_img_1_merged134_276_merged_banks_12.peek_243();
  return value_img_img_1_merged134_276;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_81_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_81 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[4 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_276 = img.img_img_1_merged134_276_merged_banks_12.peek_1();
  return value_img_img_1_merged134_276;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_82_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_82 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[3 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_275 = img.img_img_1_merged134_275_merged_banks_12.peek_243();
  return value_img_img_1_merged134_275;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_83_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_83 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[3 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_275 = img.img_img_1_merged134_275_merged_banks_12.peek_1();
  return value_img_img_1_merged134_275;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_84_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_84 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[4 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_276 = img.img_img_1_merged134_276_merged_banks_12.peek_243();
  return value_img_img_1_merged134_276;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_85_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_85 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[4 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_276 = img.img_img_1_merged134_276_merged_banks_12.peek_1();
  return value_img_img_1_merged134_276;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_86_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_86 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[5 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_277 = img.img_img_1_merged134_277_merged_banks_12.peek_243();
  return value_img_img_1_merged134_277;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_87_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_87 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[5 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_277 = img.img_img_1_merged134_277_merged_banks_12.peek_1();
  return value_img_img_1_merged134_277;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_88_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_88 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[4 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_276 = img.img_img_1_merged134_276_merged_banks_12.peek_243();
  return value_img_img_1_merged134_276;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_89_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_89 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[4 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_276 = img.img_img_1_merged134_276_merged_banks_12.peek_1();
  return value_img_img_1_merged134_276;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_90_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_90 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[5 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_277 = img.img_img_1_merged134_277_merged_banks_12.peek_243();
  return value_img_img_1_merged134_277;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_91_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_91 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[5 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_277 = img.img_img_1_merged134_277_merged_banks_12.peek_1();
  return value_img_img_1_merged134_277;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_92_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_92 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[6 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_278 = img.img_img_1_merged134_278_merged_banks_12.peek_243();
  return value_img_img_1_merged134_278;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_93_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_93 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[6 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_278 = img.img_img_1_merged134_278_merged_banks_12.peek_1();
  return value_img_img_1_merged134_278;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_94_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_94 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[5 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_277 = img.img_img_1_merged134_277_merged_banks_12.peek_243();
  return value_img_img_1_merged134_277;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_95_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_95 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[5 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_277 = img.img_img_1_merged134_277_merged_banks_12.peek_1();
  return value_img_img_1_merged134_277;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_96_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_96 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[6 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_278 = img.img_img_1_merged134_278_merged_banks_12.peek_243();
  return value_img_img_1_merged134_278;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_97_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_97 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[6 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_278 = img.img_img_1_merged134_278_merged_banks_12.peek_1();
  return value_img_img_1_merged134_278;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_98_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_98 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[7 + 16mag_y_1, mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_279 = img.img_img_1_merged134_279_merged_banks_12.peek_243();
  return value_img_img_1_merged134_279;
  return 0;
}

inline hw_uint<16> img_mag_y_1_merged137_99_select(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // img_mag_y_1_merged137_99 read pattern: { mag_y_1_merged137[root = 0, mag_y_0, mag_y_1] -> img[7 + 16mag_y_1, 2 + mag_y_0] : 0 <= mag_y_0 <= 1079 and 0 <= mag_y_1 <= 119 }
  // Read schedule : { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
  auto value_img_img_1_merged134_279 = img.img_img_1_merged134_279_merged_banks_12.peek_1();
  return value_img_img_1_merged134_279;
  return 0;
}

// # of bundles = 3
// img_1_merged134_write
//	img_img_1_merged134_272
//	img_img_1_merged134_273
//	img_img_1_merged134_274
//	img_img_1_merged134_275
//	img_img_1_merged134_276
//	img_img_1_merged134_277
//	img_img_1_merged134_278
//	img_img_1_merged134_279
//	img_img_1_merged134_280
//	img_img_1_merged134_281
//	img_img_1_merged134_282
//	img_img_1_merged134_283
//	img_img_1_merged134_284
//	img_img_1_merged134_285
//	img_img_1_merged134_286
//	img_img_1_merged134_287
inline void img_img_1_merged134_write_bundle_write(hw_uint<256>& img_1_merged134_write, img_cache& img, int root, int img_0, int img_1, int dynamic_address) {
	hw_uint<16> img_img_1_merged134_272_res = img_1_merged134_write.extract<0, 15>();
	img_img_1_merged134_272_write(img_img_1_merged134_272_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged134_273_res = img_1_merged134_write.extract<16, 31>();
	img_img_1_merged134_273_write(img_img_1_merged134_273_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged134_274_res = img_1_merged134_write.extract<32, 47>();
	img_img_1_merged134_274_write(img_img_1_merged134_274_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged134_275_res = img_1_merged134_write.extract<48, 63>();
	img_img_1_merged134_275_write(img_img_1_merged134_275_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged134_276_res = img_1_merged134_write.extract<64, 79>();
	img_img_1_merged134_276_write(img_img_1_merged134_276_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged134_277_res = img_1_merged134_write.extract<80, 95>();
	img_img_1_merged134_277_write(img_img_1_merged134_277_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged134_278_res = img_1_merged134_write.extract<96, 111>();
	img_img_1_merged134_278_write(img_img_1_merged134_278_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged134_279_res = img_1_merged134_write.extract<112, 127>();
	img_img_1_merged134_279_write(img_img_1_merged134_279_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged134_280_res = img_1_merged134_write.extract<128, 143>();
	img_img_1_merged134_280_write(img_img_1_merged134_280_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged134_281_res = img_1_merged134_write.extract<144, 159>();
	img_img_1_merged134_281_write(img_img_1_merged134_281_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged134_282_res = img_1_merged134_write.extract<160, 175>();
	img_img_1_merged134_282_write(img_img_1_merged134_282_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged134_283_res = img_1_merged134_write.extract<176, 191>();
	img_img_1_merged134_283_write(img_img_1_merged134_283_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged134_284_res = img_1_merged134_write.extract<192, 207>();
	img_img_1_merged134_284_write(img_img_1_merged134_284_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged134_285_res = img_1_merged134_write.extract<208, 223>();
	img_img_1_merged134_285_write(img_img_1_merged134_285_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged134_286_res = img_1_merged134_write.extract<224, 239>();
	img_img_1_merged134_286_write(img_img_1_merged134_286_res, img, root, img_0, img_1, dynamic_address);
	hw_uint<16> img_img_1_merged134_287_res = img_1_merged134_write.extract<240, 255>();
	img_img_1_merged134_287_write(img_img_1_merged134_287_res, img, root, img_0, img_1, dynamic_address);
}

// mag_x_1_merged140_read
//	img_mag_x_1_merged140_176
//	img_mag_x_1_merged140_177
//	img_mag_x_1_merged140_178
//	img_mag_x_1_merged140_179
//	img_mag_x_1_merged140_180
//	img_mag_x_1_merged140_181
//	img_mag_x_1_merged140_182
//	img_mag_x_1_merged140_183
//	img_mag_x_1_merged140_184
//	img_mag_x_1_merged140_185
//	img_mag_x_1_merged140_186
//	img_mag_x_1_merged140_187
//	img_mag_x_1_merged140_188
//	img_mag_x_1_merged140_189
//	img_mag_x_1_merged140_190
//	img_mag_x_1_merged140_191
//	img_mag_x_1_merged140_192
//	img_mag_x_1_merged140_193
//	img_mag_x_1_merged140_194
//	img_mag_x_1_merged140_195
//	img_mag_x_1_merged140_196
//	img_mag_x_1_merged140_197
//	img_mag_x_1_merged140_198
//	img_mag_x_1_merged140_199
//	img_mag_x_1_merged140_200
//	img_mag_x_1_merged140_201
//	img_mag_x_1_merged140_202
//	img_mag_x_1_merged140_203
//	img_mag_x_1_merged140_204
//	img_mag_x_1_merged140_205
//	img_mag_x_1_merged140_206
//	img_mag_x_1_merged140_207
//	img_mag_x_1_merged140_208
//	img_mag_x_1_merged140_209
//	img_mag_x_1_merged140_210
//	img_mag_x_1_merged140_211
//	img_mag_x_1_merged140_212
//	img_mag_x_1_merged140_213
//	img_mag_x_1_merged140_214
//	img_mag_x_1_merged140_215
//	img_mag_x_1_merged140_216
//	img_mag_x_1_merged140_217
//	img_mag_x_1_merged140_218
//	img_mag_x_1_merged140_219
//	img_mag_x_1_merged140_220
//	img_mag_x_1_merged140_221
//	img_mag_x_1_merged140_222
//	img_mag_x_1_merged140_223
//	img_mag_x_1_merged140_224
//	img_mag_x_1_merged140_225
//	img_mag_x_1_merged140_226
//	img_mag_x_1_merged140_227
//	img_mag_x_1_merged140_228
//	img_mag_x_1_merged140_229
//	img_mag_x_1_merged140_230
//	img_mag_x_1_merged140_231
//	img_mag_x_1_merged140_232
//	img_mag_x_1_merged140_233
//	img_mag_x_1_merged140_234
//	img_mag_x_1_merged140_235
//	img_mag_x_1_merged140_236
//	img_mag_x_1_merged140_237
//	img_mag_x_1_merged140_238
//	img_mag_x_1_merged140_239
//	img_mag_x_1_merged140_240
//	img_mag_x_1_merged140_241
//	img_mag_x_1_merged140_242
//	img_mag_x_1_merged140_243
//	img_mag_x_1_merged140_244
//	img_mag_x_1_merged140_245
//	img_mag_x_1_merged140_246
//	img_mag_x_1_merged140_247
//	img_mag_x_1_merged140_248
//	img_mag_x_1_merged140_249
//	img_mag_x_1_merged140_250
//	img_mag_x_1_merged140_251
//	img_mag_x_1_merged140_252
//	img_mag_x_1_merged140_253
//	img_mag_x_1_merged140_254
//	img_mag_x_1_merged140_255
//	img_mag_x_1_merged140_256
//	img_mag_x_1_merged140_257
//	img_mag_x_1_merged140_258
//	img_mag_x_1_merged140_259
//	img_mag_x_1_merged140_260
//	img_mag_x_1_merged140_261
//	img_mag_x_1_merged140_262
//	img_mag_x_1_merged140_263
//	img_mag_x_1_merged140_264
//	img_mag_x_1_merged140_265
//	img_mag_x_1_merged140_266
//	img_mag_x_1_merged140_267
//	img_mag_x_1_merged140_268
//	img_mag_x_1_merged140_269
//	img_mag_x_1_merged140_270
//	img_mag_x_1_merged140_271
inline hw_uint<1536> img_mag_x_1_merged140_read_bundle_read(img_cache& img, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  // # of ports in bundle: 96
    // img_mag_x_1_merged140_176
    // img_mag_x_1_merged140_177
    // img_mag_x_1_merged140_178
    // img_mag_x_1_merged140_179
    // img_mag_x_1_merged140_180
    // img_mag_x_1_merged140_181
    // img_mag_x_1_merged140_182
    // img_mag_x_1_merged140_183
    // img_mag_x_1_merged140_184
    // img_mag_x_1_merged140_185
    // img_mag_x_1_merged140_186
    // img_mag_x_1_merged140_187
    // img_mag_x_1_merged140_188
    // img_mag_x_1_merged140_189
    // img_mag_x_1_merged140_190
    // img_mag_x_1_merged140_191
    // img_mag_x_1_merged140_192
    // img_mag_x_1_merged140_193
    // img_mag_x_1_merged140_194
    // img_mag_x_1_merged140_195
    // img_mag_x_1_merged140_196
    // img_mag_x_1_merged140_197
    // img_mag_x_1_merged140_198
    // img_mag_x_1_merged140_199
    // img_mag_x_1_merged140_200
    // img_mag_x_1_merged140_201
    // img_mag_x_1_merged140_202
    // img_mag_x_1_merged140_203
    // img_mag_x_1_merged140_204
    // img_mag_x_1_merged140_205
    // img_mag_x_1_merged140_206
    // img_mag_x_1_merged140_207
    // img_mag_x_1_merged140_208
    // img_mag_x_1_merged140_209
    // img_mag_x_1_merged140_210
    // img_mag_x_1_merged140_211
    // img_mag_x_1_merged140_212
    // img_mag_x_1_merged140_213
    // img_mag_x_1_merged140_214
    // img_mag_x_1_merged140_215
    // img_mag_x_1_merged140_216
    // img_mag_x_1_merged140_217
    // img_mag_x_1_merged140_218
    // img_mag_x_1_merged140_219
    // img_mag_x_1_merged140_220
    // img_mag_x_1_merged140_221
    // img_mag_x_1_merged140_222
    // img_mag_x_1_merged140_223
    // img_mag_x_1_merged140_224
    // img_mag_x_1_merged140_225
    // img_mag_x_1_merged140_226
    // img_mag_x_1_merged140_227
    // img_mag_x_1_merged140_228
    // img_mag_x_1_merged140_229
    // img_mag_x_1_merged140_230
    // img_mag_x_1_merged140_231
    // img_mag_x_1_merged140_232
    // img_mag_x_1_merged140_233
    // img_mag_x_1_merged140_234
    // img_mag_x_1_merged140_235
    // img_mag_x_1_merged140_236
    // img_mag_x_1_merged140_237
    // img_mag_x_1_merged140_238
    // img_mag_x_1_merged140_239
    // img_mag_x_1_merged140_240
    // img_mag_x_1_merged140_241
    // img_mag_x_1_merged140_242
    // img_mag_x_1_merged140_243
    // img_mag_x_1_merged140_244
    // img_mag_x_1_merged140_245
    // img_mag_x_1_merged140_246
    // img_mag_x_1_merged140_247
    // img_mag_x_1_merged140_248
    // img_mag_x_1_merged140_249
    // img_mag_x_1_merged140_250
    // img_mag_x_1_merged140_251
    // img_mag_x_1_merged140_252
    // img_mag_x_1_merged140_253
    // img_mag_x_1_merged140_254
    // img_mag_x_1_merged140_255
    // img_mag_x_1_merged140_256
    // img_mag_x_1_merged140_257
    // img_mag_x_1_merged140_258
    // img_mag_x_1_merged140_259
    // img_mag_x_1_merged140_260
    // img_mag_x_1_merged140_261
    // img_mag_x_1_merged140_262
    // img_mag_x_1_merged140_263
    // img_mag_x_1_merged140_264
    // img_mag_x_1_merged140_265
    // img_mag_x_1_merged140_266
    // img_mag_x_1_merged140_267
    // img_mag_x_1_merged140_268
    // img_mag_x_1_merged140_269
    // img_mag_x_1_merged140_270
    // img_mag_x_1_merged140_271

	hw_uint<1536> result;
	hw_uint<16> img_mag_x_1_merged140_176_res = img_mag_x_1_merged140_176_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<0, 1536>(result, img_mag_x_1_merged140_176_res);
	hw_uint<16> img_mag_x_1_merged140_177_res = img_mag_x_1_merged140_177_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<16, 1536>(result, img_mag_x_1_merged140_177_res);
	hw_uint<16> img_mag_x_1_merged140_178_res = img_mag_x_1_merged140_178_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<32, 1536>(result, img_mag_x_1_merged140_178_res);
	hw_uint<16> img_mag_x_1_merged140_179_res = img_mag_x_1_merged140_179_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<48, 1536>(result, img_mag_x_1_merged140_179_res);
	hw_uint<16> img_mag_x_1_merged140_180_res = img_mag_x_1_merged140_180_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<64, 1536>(result, img_mag_x_1_merged140_180_res);
	hw_uint<16> img_mag_x_1_merged140_181_res = img_mag_x_1_merged140_181_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<80, 1536>(result, img_mag_x_1_merged140_181_res);
	hw_uint<16> img_mag_x_1_merged140_182_res = img_mag_x_1_merged140_182_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<96, 1536>(result, img_mag_x_1_merged140_182_res);
	hw_uint<16> img_mag_x_1_merged140_183_res = img_mag_x_1_merged140_183_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<112, 1536>(result, img_mag_x_1_merged140_183_res);
	hw_uint<16> img_mag_x_1_merged140_184_res = img_mag_x_1_merged140_184_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<128, 1536>(result, img_mag_x_1_merged140_184_res);
	hw_uint<16> img_mag_x_1_merged140_185_res = img_mag_x_1_merged140_185_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<144, 1536>(result, img_mag_x_1_merged140_185_res);
	hw_uint<16> img_mag_x_1_merged140_186_res = img_mag_x_1_merged140_186_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<160, 1536>(result, img_mag_x_1_merged140_186_res);
	hw_uint<16> img_mag_x_1_merged140_187_res = img_mag_x_1_merged140_187_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<176, 1536>(result, img_mag_x_1_merged140_187_res);
	hw_uint<16> img_mag_x_1_merged140_188_res = img_mag_x_1_merged140_188_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<192, 1536>(result, img_mag_x_1_merged140_188_res);
	hw_uint<16> img_mag_x_1_merged140_189_res = img_mag_x_1_merged140_189_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<208, 1536>(result, img_mag_x_1_merged140_189_res);
	hw_uint<16> img_mag_x_1_merged140_190_res = img_mag_x_1_merged140_190_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<224, 1536>(result, img_mag_x_1_merged140_190_res);
	hw_uint<16> img_mag_x_1_merged140_191_res = img_mag_x_1_merged140_191_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<240, 1536>(result, img_mag_x_1_merged140_191_res);
	hw_uint<16> img_mag_x_1_merged140_192_res = img_mag_x_1_merged140_192_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<256, 1536>(result, img_mag_x_1_merged140_192_res);
	hw_uint<16> img_mag_x_1_merged140_193_res = img_mag_x_1_merged140_193_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<272, 1536>(result, img_mag_x_1_merged140_193_res);
	hw_uint<16> img_mag_x_1_merged140_194_res = img_mag_x_1_merged140_194_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<288, 1536>(result, img_mag_x_1_merged140_194_res);
	hw_uint<16> img_mag_x_1_merged140_195_res = img_mag_x_1_merged140_195_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<304, 1536>(result, img_mag_x_1_merged140_195_res);
	hw_uint<16> img_mag_x_1_merged140_196_res = img_mag_x_1_merged140_196_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<320, 1536>(result, img_mag_x_1_merged140_196_res);
	hw_uint<16> img_mag_x_1_merged140_197_res = img_mag_x_1_merged140_197_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<336, 1536>(result, img_mag_x_1_merged140_197_res);
	hw_uint<16> img_mag_x_1_merged140_198_res = img_mag_x_1_merged140_198_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<352, 1536>(result, img_mag_x_1_merged140_198_res);
	hw_uint<16> img_mag_x_1_merged140_199_res = img_mag_x_1_merged140_199_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<368, 1536>(result, img_mag_x_1_merged140_199_res);
	hw_uint<16> img_mag_x_1_merged140_200_res = img_mag_x_1_merged140_200_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<384, 1536>(result, img_mag_x_1_merged140_200_res);
	hw_uint<16> img_mag_x_1_merged140_201_res = img_mag_x_1_merged140_201_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<400, 1536>(result, img_mag_x_1_merged140_201_res);
	hw_uint<16> img_mag_x_1_merged140_202_res = img_mag_x_1_merged140_202_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<416, 1536>(result, img_mag_x_1_merged140_202_res);
	hw_uint<16> img_mag_x_1_merged140_203_res = img_mag_x_1_merged140_203_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<432, 1536>(result, img_mag_x_1_merged140_203_res);
	hw_uint<16> img_mag_x_1_merged140_204_res = img_mag_x_1_merged140_204_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<448, 1536>(result, img_mag_x_1_merged140_204_res);
	hw_uint<16> img_mag_x_1_merged140_205_res = img_mag_x_1_merged140_205_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<464, 1536>(result, img_mag_x_1_merged140_205_res);
	hw_uint<16> img_mag_x_1_merged140_206_res = img_mag_x_1_merged140_206_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<480, 1536>(result, img_mag_x_1_merged140_206_res);
	hw_uint<16> img_mag_x_1_merged140_207_res = img_mag_x_1_merged140_207_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<496, 1536>(result, img_mag_x_1_merged140_207_res);
	hw_uint<16> img_mag_x_1_merged140_208_res = img_mag_x_1_merged140_208_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<512, 1536>(result, img_mag_x_1_merged140_208_res);
	hw_uint<16> img_mag_x_1_merged140_209_res = img_mag_x_1_merged140_209_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<528, 1536>(result, img_mag_x_1_merged140_209_res);
	hw_uint<16> img_mag_x_1_merged140_210_res = img_mag_x_1_merged140_210_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<544, 1536>(result, img_mag_x_1_merged140_210_res);
	hw_uint<16> img_mag_x_1_merged140_211_res = img_mag_x_1_merged140_211_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<560, 1536>(result, img_mag_x_1_merged140_211_res);
	hw_uint<16> img_mag_x_1_merged140_212_res = img_mag_x_1_merged140_212_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<576, 1536>(result, img_mag_x_1_merged140_212_res);
	hw_uint<16> img_mag_x_1_merged140_213_res = img_mag_x_1_merged140_213_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<592, 1536>(result, img_mag_x_1_merged140_213_res);
	hw_uint<16> img_mag_x_1_merged140_214_res = img_mag_x_1_merged140_214_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<608, 1536>(result, img_mag_x_1_merged140_214_res);
	hw_uint<16> img_mag_x_1_merged140_215_res = img_mag_x_1_merged140_215_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<624, 1536>(result, img_mag_x_1_merged140_215_res);
	hw_uint<16> img_mag_x_1_merged140_216_res = img_mag_x_1_merged140_216_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<640, 1536>(result, img_mag_x_1_merged140_216_res);
	hw_uint<16> img_mag_x_1_merged140_217_res = img_mag_x_1_merged140_217_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<656, 1536>(result, img_mag_x_1_merged140_217_res);
	hw_uint<16> img_mag_x_1_merged140_218_res = img_mag_x_1_merged140_218_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<672, 1536>(result, img_mag_x_1_merged140_218_res);
	hw_uint<16> img_mag_x_1_merged140_219_res = img_mag_x_1_merged140_219_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<688, 1536>(result, img_mag_x_1_merged140_219_res);
	hw_uint<16> img_mag_x_1_merged140_220_res = img_mag_x_1_merged140_220_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<704, 1536>(result, img_mag_x_1_merged140_220_res);
	hw_uint<16> img_mag_x_1_merged140_221_res = img_mag_x_1_merged140_221_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<720, 1536>(result, img_mag_x_1_merged140_221_res);
	hw_uint<16> img_mag_x_1_merged140_222_res = img_mag_x_1_merged140_222_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<736, 1536>(result, img_mag_x_1_merged140_222_res);
	hw_uint<16> img_mag_x_1_merged140_223_res = img_mag_x_1_merged140_223_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<752, 1536>(result, img_mag_x_1_merged140_223_res);
	hw_uint<16> img_mag_x_1_merged140_224_res = img_mag_x_1_merged140_224_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<768, 1536>(result, img_mag_x_1_merged140_224_res);
	hw_uint<16> img_mag_x_1_merged140_225_res = img_mag_x_1_merged140_225_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<784, 1536>(result, img_mag_x_1_merged140_225_res);
	hw_uint<16> img_mag_x_1_merged140_226_res = img_mag_x_1_merged140_226_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<800, 1536>(result, img_mag_x_1_merged140_226_res);
	hw_uint<16> img_mag_x_1_merged140_227_res = img_mag_x_1_merged140_227_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<816, 1536>(result, img_mag_x_1_merged140_227_res);
	hw_uint<16> img_mag_x_1_merged140_228_res = img_mag_x_1_merged140_228_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<832, 1536>(result, img_mag_x_1_merged140_228_res);
	hw_uint<16> img_mag_x_1_merged140_229_res = img_mag_x_1_merged140_229_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<848, 1536>(result, img_mag_x_1_merged140_229_res);
	hw_uint<16> img_mag_x_1_merged140_230_res = img_mag_x_1_merged140_230_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<864, 1536>(result, img_mag_x_1_merged140_230_res);
	hw_uint<16> img_mag_x_1_merged140_231_res = img_mag_x_1_merged140_231_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<880, 1536>(result, img_mag_x_1_merged140_231_res);
	hw_uint<16> img_mag_x_1_merged140_232_res = img_mag_x_1_merged140_232_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<896, 1536>(result, img_mag_x_1_merged140_232_res);
	hw_uint<16> img_mag_x_1_merged140_233_res = img_mag_x_1_merged140_233_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<912, 1536>(result, img_mag_x_1_merged140_233_res);
	hw_uint<16> img_mag_x_1_merged140_234_res = img_mag_x_1_merged140_234_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<928, 1536>(result, img_mag_x_1_merged140_234_res);
	hw_uint<16> img_mag_x_1_merged140_235_res = img_mag_x_1_merged140_235_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<944, 1536>(result, img_mag_x_1_merged140_235_res);
	hw_uint<16> img_mag_x_1_merged140_236_res = img_mag_x_1_merged140_236_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<960, 1536>(result, img_mag_x_1_merged140_236_res);
	hw_uint<16> img_mag_x_1_merged140_237_res = img_mag_x_1_merged140_237_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<976, 1536>(result, img_mag_x_1_merged140_237_res);
	hw_uint<16> img_mag_x_1_merged140_238_res = img_mag_x_1_merged140_238_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<992, 1536>(result, img_mag_x_1_merged140_238_res);
	hw_uint<16> img_mag_x_1_merged140_239_res = img_mag_x_1_merged140_239_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1008, 1536>(result, img_mag_x_1_merged140_239_res);
	hw_uint<16> img_mag_x_1_merged140_240_res = img_mag_x_1_merged140_240_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1024, 1536>(result, img_mag_x_1_merged140_240_res);
	hw_uint<16> img_mag_x_1_merged140_241_res = img_mag_x_1_merged140_241_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1040, 1536>(result, img_mag_x_1_merged140_241_res);
	hw_uint<16> img_mag_x_1_merged140_242_res = img_mag_x_1_merged140_242_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1056, 1536>(result, img_mag_x_1_merged140_242_res);
	hw_uint<16> img_mag_x_1_merged140_243_res = img_mag_x_1_merged140_243_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1072, 1536>(result, img_mag_x_1_merged140_243_res);
	hw_uint<16> img_mag_x_1_merged140_244_res = img_mag_x_1_merged140_244_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1088, 1536>(result, img_mag_x_1_merged140_244_res);
	hw_uint<16> img_mag_x_1_merged140_245_res = img_mag_x_1_merged140_245_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1104, 1536>(result, img_mag_x_1_merged140_245_res);
	hw_uint<16> img_mag_x_1_merged140_246_res = img_mag_x_1_merged140_246_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1120, 1536>(result, img_mag_x_1_merged140_246_res);
	hw_uint<16> img_mag_x_1_merged140_247_res = img_mag_x_1_merged140_247_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1136, 1536>(result, img_mag_x_1_merged140_247_res);
	hw_uint<16> img_mag_x_1_merged140_248_res = img_mag_x_1_merged140_248_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1152, 1536>(result, img_mag_x_1_merged140_248_res);
	hw_uint<16> img_mag_x_1_merged140_249_res = img_mag_x_1_merged140_249_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1168, 1536>(result, img_mag_x_1_merged140_249_res);
	hw_uint<16> img_mag_x_1_merged140_250_res = img_mag_x_1_merged140_250_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1184, 1536>(result, img_mag_x_1_merged140_250_res);
	hw_uint<16> img_mag_x_1_merged140_251_res = img_mag_x_1_merged140_251_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1200, 1536>(result, img_mag_x_1_merged140_251_res);
	hw_uint<16> img_mag_x_1_merged140_252_res = img_mag_x_1_merged140_252_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1216, 1536>(result, img_mag_x_1_merged140_252_res);
	hw_uint<16> img_mag_x_1_merged140_253_res = img_mag_x_1_merged140_253_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1232, 1536>(result, img_mag_x_1_merged140_253_res);
	hw_uint<16> img_mag_x_1_merged140_254_res = img_mag_x_1_merged140_254_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1248, 1536>(result, img_mag_x_1_merged140_254_res);
	hw_uint<16> img_mag_x_1_merged140_255_res = img_mag_x_1_merged140_255_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1264, 1536>(result, img_mag_x_1_merged140_255_res);
	hw_uint<16> img_mag_x_1_merged140_256_res = img_mag_x_1_merged140_256_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1280, 1536>(result, img_mag_x_1_merged140_256_res);
	hw_uint<16> img_mag_x_1_merged140_257_res = img_mag_x_1_merged140_257_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1296, 1536>(result, img_mag_x_1_merged140_257_res);
	hw_uint<16> img_mag_x_1_merged140_258_res = img_mag_x_1_merged140_258_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1312, 1536>(result, img_mag_x_1_merged140_258_res);
	hw_uint<16> img_mag_x_1_merged140_259_res = img_mag_x_1_merged140_259_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1328, 1536>(result, img_mag_x_1_merged140_259_res);
	hw_uint<16> img_mag_x_1_merged140_260_res = img_mag_x_1_merged140_260_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1344, 1536>(result, img_mag_x_1_merged140_260_res);
	hw_uint<16> img_mag_x_1_merged140_261_res = img_mag_x_1_merged140_261_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1360, 1536>(result, img_mag_x_1_merged140_261_res);
	hw_uint<16> img_mag_x_1_merged140_262_res = img_mag_x_1_merged140_262_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1376, 1536>(result, img_mag_x_1_merged140_262_res);
	hw_uint<16> img_mag_x_1_merged140_263_res = img_mag_x_1_merged140_263_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1392, 1536>(result, img_mag_x_1_merged140_263_res);
	hw_uint<16> img_mag_x_1_merged140_264_res = img_mag_x_1_merged140_264_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1408, 1536>(result, img_mag_x_1_merged140_264_res);
	hw_uint<16> img_mag_x_1_merged140_265_res = img_mag_x_1_merged140_265_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1424, 1536>(result, img_mag_x_1_merged140_265_res);
	hw_uint<16> img_mag_x_1_merged140_266_res = img_mag_x_1_merged140_266_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1440, 1536>(result, img_mag_x_1_merged140_266_res);
	hw_uint<16> img_mag_x_1_merged140_267_res = img_mag_x_1_merged140_267_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1456, 1536>(result, img_mag_x_1_merged140_267_res);
	hw_uint<16> img_mag_x_1_merged140_268_res = img_mag_x_1_merged140_268_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1472, 1536>(result, img_mag_x_1_merged140_268_res);
	hw_uint<16> img_mag_x_1_merged140_269_res = img_mag_x_1_merged140_269_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1488, 1536>(result, img_mag_x_1_merged140_269_res);
	hw_uint<16> img_mag_x_1_merged140_270_res = img_mag_x_1_merged140_270_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1504, 1536>(result, img_mag_x_1_merged140_270_res);
	hw_uint<16> img_mag_x_1_merged140_271_res = img_mag_x_1_merged140_271_select(img, root, mag_x_0, mag_x_1, dynamic_address);
	set_at<1520, 1536>(result, img_mag_x_1_merged140_271_res);
	return result;
}

// mag_y_1_merged137_read
//	img_mag_y_1_merged137_64
//	img_mag_y_1_merged137_65
//	img_mag_y_1_merged137_66
//	img_mag_y_1_merged137_67
//	img_mag_y_1_merged137_68
//	img_mag_y_1_merged137_69
//	img_mag_y_1_merged137_70
//	img_mag_y_1_merged137_71
//	img_mag_y_1_merged137_72
//	img_mag_y_1_merged137_73
//	img_mag_y_1_merged137_74
//	img_mag_y_1_merged137_75
//	img_mag_y_1_merged137_76
//	img_mag_y_1_merged137_77
//	img_mag_y_1_merged137_78
//	img_mag_y_1_merged137_79
//	img_mag_y_1_merged137_80
//	img_mag_y_1_merged137_81
//	img_mag_y_1_merged137_82
//	img_mag_y_1_merged137_83
//	img_mag_y_1_merged137_84
//	img_mag_y_1_merged137_85
//	img_mag_y_1_merged137_86
//	img_mag_y_1_merged137_87
//	img_mag_y_1_merged137_88
//	img_mag_y_1_merged137_89
//	img_mag_y_1_merged137_90
//	img_mag_y_1_merged137_91
//	img_mag_y_1_merged137_92
//	img_mag_y_1_merged137_93
//	img_mag_y_1_merged137_94
//	img_mag_y_1_merged137_95
//	img_mag_y_1_merged137_96
//	img_mag_y_1_merged137_97
//	img_mag_y_1_merged137_98
//	img_mag_y_1_merged137_99
//	img_mag_y_1_merged137_100
//	img_mag_y_1_merged137_101
//	img_mag_y_1_merged137_102
//	img_mag_y_1_merged137_103
//	img_mag_y_1_merged137_104
//	img_mag_y_1_merged137_105
//	img_mag_y_1_merged137_106
//	img_mag_y_1_merged137_107
//	img_mag_y_1_merged137_108
//	img_mag_y_1_merged137_109
//	img_mag_y_1_merged137_110
//	img_mag_y_1_merged137_111
//	img_mag_y_1_merged137_112
//	img_mag_y_1_merged137_113
//	img_mag_y_1_merged137_114
//	img_mag_y_1_merged137_115
//	img_mag_y_1_merged137_116
//	img_mag_y_1_merged137_117
//	img_mag_y_1_merged137_118
//	img_mag_y_1_merged137_119
//	img_mag_y_1_merged137_120
//	img_mag_y_1_merged137_121
//	img_mag_y_1_merged137_122
//	img_mag_y_1_merged137_123
//	img_mag_y_1_merged137_124
//	img_mag_y_1_merged137_125
//	img_mag_y_1_merged137_126
//	img_mag_y_1_merged137_127
//	img_mag_y_1_merged137_128
//	img_mag_y_1_merged137_129
//	img_mag_y_1_merged137_130
//	img_mag_y_1_merged137_131
//	img_mag_y_1_merged137_132
//	img_mag_y_1_merged137_133
//	img_mag_y_1_merged137_134
//	img_mag_y_1_merged137_135
//	img_mag_y_1_merged137_136
//	img_mag_y_1_merged137_137
//	img_mag_y_1_merged137_138
//	img_mag_y_1_merged137_139
//	img_mag_y_1_merged137_140
//	img_mag_y_1_merged137_141
//	img_mag_y_1_merged137_142
//	img_mag_y_1_merged137_143
//	img_mag_y_1_merged137_144
//	img_mag_y_1_merged137_145
//	img_mag_y_1_merged137_146
//	img_mag_y_1_merged137_147
//	img_mag_y_1_merged137_148
//	img_mag_y_1_merged137_149
//	img_mag_y_1_merged137_150
//	img_mag_y_1_merged137_151
//	img_mag_y_1_merged137_152
//	img_mag_y_1_merged137_153
//	img_mag_y_1_merged137_154
//	img_mag_y_1_merged137_155
//	img_mag_y_1_merged137_156
//	img_mag_y_1_merged137_157
//	img_mag_y_1_merged137_158
//	img_mag_y_1_merged137_159
inline hw_uint<1536> img_mag_y_1_merged137_read_bundle_read(img_cache& img, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  // # of ports in bundle: 96
    // img_mag_y_1_merged137_64
    // img_mag_y_1_merged137_65
    // img_mag_y_1_merged137_66
    // img_mag_y_1_merged137_67
    // img_mag_y_1_merged137_68
    // img_mag_y_1_merged137_69
    // img_mag_y_1_merged137_70
    // img_mag_y_1_merged137_71
    // img_mag_y_1_merged137_72
    // img_mag_y_1_merged137_73
    // img_mag_y_1_merged137_74
    // img_mag_y_1_merged137_75
    // img_mag_y_1_merged137_76
    // img_mag_y_1_merged137_77
    // img_mag_y_1_merged137_78
    // img_mag_y_1_merged137_79
    // img_mag_y_1_merged137_80
    // img_mag_y_1_merged137_81
    // img_mag_y_1_merged137_82
    // img_mag_y_1_merged137_83
    // img_mag_y_1_merged137_84
    // img_mag_y_1_merged137_85
    // img_mag_y_1_merged137_86
    // img_mag_y_1_merged137_87
    // img_mag_y_1_merged137_88
    // img_mag_y_1_merged137_89
    // img_mag_y_1_merged137_90
    // img_mag_y_1_merged137_91
    // img_mag_y_1_merged137_92
    // img_mag_y_1_merged137_93
    // img_mag_y_1_merged137_94
    // img_mag_y_1_merged137_95
    // img_mag_y_1_merged137_96
    // img_mag_y_1_merged137_97
    // img_mag_y_1_merged137_98
    // img_mag_y_1_merged137_99
    // img_mag_y_1_merged137_100
    // img_mag_y_1_merged137_101
    // img_mag_y_1_merged137_102
    // img_mag_y_1_merged137_103
    // img_mag_y_1_merged137_104
    // img_mag_y_1_merged137_105
    // img_mag_y_1_merged137_106
    // img_mag_y_1_merged137_107
    // img_mag_y_1_merged137_108
    // img_mag_y_1_merged137_109
    // img_mag_y_1_merged137_110
    // img_mag_y_1_merged137_111
    // img_mag_y_1_merged137_112
    // img_mag_y_1_merged137_113
    // img_mag_y_1_merged137_114
    // img_mag_y_1_merged137_115
    // img_mag_y_1_merged137_116
    // img_mag_y_1_merged137_117
    // img_mag_y_1_merged137_118
    // img_mag_y_1_merged137_119
    // img_mag_y_1_merged137_120
    // img_mag_y_1_merged137_121
    // img_mag_y_1_merged137_122
    // img_mag_y_1_merged137_123
    // img_mag_y_1_merged137_124
    // img_mag_y_1_merged137_125
    // img_mag_y_1_merged137_126
    // img_mag_y_1_merged137_127
    // img_mag_y_1_merged137_128
    // img_mag_y_1_merged137_129
    // img_mag_y_1_merged137_130
    // img_mag_y_1_merged137_131
    // img_mag_y_1_merged137_132
    // img_mag_y_1_merged137_133
    // img_mag_y_1_merged137_134
    // img_mag_y_1_merged137_135
    // img_mag_y_1_merged137_136
    // img_mag_y_1_merged137_137
    // img_mag_y_1_merged137_138
    // img_mag_y_1_merged137_139
    // img_mag_y_1_merged137_140
    // img_mag_y_1_merged137_141
    // img_mag_y_1_merged137_142
    // img_mag_y_1_merged137_143
    // img_mag_y_1_merged137_144
    // img_mag_y_1_merged137_145
    // img_mag_y_1_merged137_146
    // img_mag_y_1_merged137_147
    // img_mag_y_1_merged137_148
    // img_mag_y_1_merged137_149
    // img_mag_y_1_merged137_150
    // img_mag_y_1_merged137_151
    // img_mag_y_1_merged137_152
    // img_mag_y_1_merged137_153
    // img_mag_y_1_merged137_154
    // img_mag_y_1_merged137_155
    // img_mag_y_1_merged137_156
    // img_mag_y_1_merged137_157
    // img_mag_y_1_merged137_158
    // img_mag_y_1_merged137_159

	hw_uint<1536> result;
	hw_uint<16> img_mag_y_1_merged137_64_res = img_mag_y_1_merged137_64_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<0, 1536>(result, img_mag_y_1_merged137_64_res);
	hw_uint<16> img_mag_y_1_merged137_65_res = img_mag_y_1_merged137_65_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<16, 1536>(result, img_mag_y_1_merged137_65_res);
	hw_uint<16> img_mag_y_1_merged137_66_res = img_mag_y_1_merged137_66_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<32, 1536>(result, img_mag_y_1_merged137_66_res);
	hw_uint<16> img_mag_y_1_merged137_67_res = img_mag_y_1_merged137_67_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<48, 1536>(result, img_mag_y_1_merged137_67_res);
	hw_uint<16> img_mag_y_1_merged137_68_res = img_mag_y_1_merged137_68_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<64, 1536>(result, img_mag_y_1_merged137_68_res);
	hw_uint<16> img_mag_y_1_merged137_69_res = img_mag_y_1_merged137_69_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<80, 1536>(result, img_mag_y_1_merged137_69_res);
	hw_uint<16> img_mag_y_1_merged137_70_res = img_mag_y_1_merged137_70_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<96, 1536>(result, img_mag_y_1_merged137_70_res);
	hw_uint<16> img_mag_y_1_merged137_71_res = img_mag_y_1_merged137_71_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<112, 1536>(result, img_mag_y_1_merged137_71_res);
	hw_uint<16> img_mag_y_1_merged137_72_res = img_mag_y_1_merged137_72_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<128, 1536>(result, img_mag_y_1_merged137_72_res);
	hw_uint<16> img_mag_y_1_merged137_73_res = img_mag_y_1_merged137_73_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<144, 1536>(result, img_mag_y_1_merged137_73_res);
	hw_uint<16> img_mag_y_1_merged137_74_res = img_mag_y_1_merged137_74_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<160, 1536>(result, img_mag_y_1_merged137_74_res);
	hw_uint<16> img_mag_y_1_merged137_75_res = img_mag_y_1_merged137_75_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<176, 1536>(result, img_mag_y_1_merged137_75_res);
	hw_uint<16> img_mag_y_1_merged137_76_res = img_mag_y_1_merged137_76_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<192, 1536>(result, img_mag_y_1_merged137_76_res);
	hw_uint<16> img_mag_y_1_merged137_77_res = img_mag_y_1_merged137_77_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<208, 1536>(result, img_mag_y_1_merged137_77_res);
	hw_uint<16> img_mag_y_1_merged137_78_res = img_mag_y_1_merged137_78_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<224, 1536>(result, img_mag_y_1_merged137_78_res);
	hw_uint<16> img_mag_y_1_merged137_79_res = img_mag_y_1_merged137_79_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<240, 1536>(result, img_mag_y_1_merged137_79_res);
	hw_uint<16> img_mag_y_1_merged137_80_res = img_mag_y_1_merged137_80_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<256, 1536>(result, img_mag_y_1_merged137_80_res);
	hw_uint<16> img_mag_y_1_merged137_81_res = img_mag_y_1_merged137_81_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<272, 1536>(result, img_mag_y_1_merged137_81_res);
	hw_uint<16> img_mag_y_1_merged137_82_res = img_mag_y_1_merged137_82_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<288, 1536>(result, img_mag_y_1_merged137_82_res);
	hw_uint<16> img_mag_y_1_merged137_83_res = img_mag_y_1_merged137_83_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<304, 1536>(result, img_mag_y_1_merged137_83_res);
	hw_uint<16> img_mag_y_1_merged137_84_res = img_mag_y_1_merged137_84_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<320, 1536>(result, img_mag_y_1_merged137_84_res);
	hw_uint<16> img_mag_y_1_merged137_85_res = img_mag_y_1_merged137_85_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<336, 1536>(result, img_mag_y_1_merged137_85_res);
	hw_uint<16> img_mag_y_1_merged137_86_res = img_mag_y_1_merged137_86_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<352, 1536>(result, img_mag_y_1_merged137_86_res);
	hw_uint<16> img_mag_y_1_merged137_87_res = img_mag_y_1_merged137_87_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<368, 1536>(result, img_mag_y_1_merged137_87_res);
	hw_uint<16> img_mag_y_1_merged137_88_res = img_mag_y_1_merged137_88_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<384, 1536>(result, img_mag_y_1_merged137_88_res);
	hw_uint<16> img_mag_y_1_merged137_89_res = img_mag_y_1_merged137_89_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<400, 1536>(result, img_mag_y_1_merged137_89_res);
	hw_uint<16> img_mag_y_1_merged137_90_res = img_mag_y_1_merged137_90_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<416, 1536>(result, img_mag_y_1_merged137_90_res);
	hw_uint<16> img_mag_y_1_merged137_91_res = img_mag_y_1_merged137_91_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<432, 1536>(result, img_mag_y_1_merged137_91_res);
	hw_uint<16> img_mag_y_1_merged137_92_res = img_mag_y_1_merged137_92_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<448, 1536>(result, img_mag_y_1_merged137_92_res);
	hw_uint<16> img_mag_y_1_merged137_93_res = img_mag_y_1_merged137_93_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<464, 1536>(result, img_mag_y_1_merged137_93_res);
	hw_uint<16> img_mag_y_1_merged137_94_res = img_mag_y_1_merged137_94_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<480, 1536>(result, img_mag_y_1_merged137_94_res);
	hw_uint<16> img_mag_y_1_merged137_95_res = img_mag_y_1_merged137_95_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<496, 1536>(result, img_mag_y_1_merged137_95_res);
	hw_uint<16> img_mag_y_1_merged137_96_res = img_mag_y_1_merged137_96_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<512, 1536>(result, img_mag_y_1_merged137_96_res);
	hw_uint<16> img_mag_y_1_merged137_97_res = img_mag_y_1_merged137_97_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<528, 1536>(result, img_mag_y_1_merged137_97_res);
	hw_uint<16> img_mag_y_1_merged137_98_res = img_mag_y_1_merged137_98_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<544, 1536>(result, img_mag_y_1_merged137_98_res);
	hw_uint<16> img_mag_y_1_merged137_99_res = img_mag_y_1_merged137_99_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<560, 1536>(result, img_mag_y_1_merged137_99_res);
	hw_uint<16> img_mag_y_1_merged137_100_res = img_mag_y_1_merged137_100_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<576, 1536>(result, img_mag_y_1_merged137_100_res);
	hw_uint<16> img_mag_y_1_merged137_101_res = img_mag_y_1_merged137_101_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<592, 1536>(result, img_mag_y_1_merged137_101_res);
	hw_uint<16> img_mag_y_1_merged137_102_res = img_mag_y_1_merged137_102_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<608, 1536>(result, img_mag_y_1_merged137_102_res);
	hw_uint<16> img_mag_y_1_merged137_103_res = img_mag_y_1_merged137_103_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<624, 1536>(result, img_mag_y_1_merged137_103_res);
	hw_uint<16> img_mag_y_1_merged137_104_res = img_mag_y_1_merged137_104_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<640, 1536>(result, img_mag_y_1_merged137_104_res);
	hw_uint<16> img_mag_y_1_merged137_105_res = img_mag_y_1_merged137_105_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<656, 1536>(result, img_mag_y_1_merged137_105_res);
	hw_uint<16> img_mag_y_1_merged137_106_res = img_mag_y_1_merged137_106_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<672, 1536>(result, img_mag_y_1_merged137_106_res);
	hw_uint<16> img_mag_y_1_merged137_107_res = img_mag_y_1_merged137_107_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<688, 1536>(result, img_mag_y_1_merged137_107_res);
	hw_uint<16> img_mag_y_1_merged137_108_res = img_mag_y_1_merged137_108_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<704, 1536>(result, img_mag_y_1_merged137_108_res);
	hw_uint<16> img_mag_y_1_merged137_109_res = img_mag_y_1_merged137_109_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<720, 1536>(result, img_mag_y_1_merged137_109_res);
	hw_uint<16> img_mag_y_1_merged137_110_res = img_mag_y_1_merged137_110_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<736, 1536>(result, img_mag_y_1_merged137_110_res);
	hw_uint<16> img_mag_y_1_merged137_111_res = img_mag_y_1_merged137_111_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<752, 1536>(result, img_mag_y_1_merged137_111_res);
	hw_uint<16> img_mag_y_1_merged137_112_res = img_mag_y_1_merged137_112_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<768, 1536>(result, img_mag_y_1_merged137_112_res);
	hw_uint<16> img_mag_y_1_merged137_113_res = img_mag_y_1_merged137_113_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<784, 1536>(result, img_mag_y_1_merged137_113_res);
	hw_uint<16> img_mag_y_1_merged137_114_res = img_mag_y_1_merged137_114_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<800, 1536>(result, img_mag_y_1_merged137_114_res);
	hw_uint<16> img_mag_y_1_merged137_115_res = img_mag_y_1_merged137_115_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<816, 1536>(result, img_mag_y_1_merged137_115_res);
	hw_uint<16> img_mag_y_1_merged137_116_res = img_mag_y_1_merged137_116_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<832, 1536>(result, img_mag_y_1_merged137_116_res);
	hw_uint<16> img_mag_y_1_merged137_117_res = img_mag_y_1_merged137_117_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<848, 1536>(result, img_mag_y_1_merged137_117_res);
	hw_uint<16> img_mag_y_1_merged137_118_res = img_mag_y_1_merged137_118_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<864, 1536>(result, img_mag_y_1_merged137_118_res);
	hw_uint<16> img_mag_y_1_merged137_119_res = img_mag_y_1_merged137_119_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<880, 1536>(result, img_mag_y_1_merged137_119_res);
	hw_uint<16> img_mag_y_1_merged137_120_res = img_mag_y_1_merged137_120_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<896, 1536>(result, img_mag_y_1_merged137_120_res);
	hw_uint<16> img_mag_y_1_merged137_121_res = img_mag_y_1_merged137_121_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<912, 1536>(result, img_mag_y_1_merged137_121_res);
	hw_uint<16> img_mag_y_1_merged137_122_res = img_mag_y_1_merged137_122_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<928, 1536>(result, img_mag_y_1_merged137_122_res);
	hw_uint<16> img_mag_y_1_merged137_123_res = img_mag_y_1_merged137_123_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<944, 1536>(result, img_mag_y_1_merged137_123_res);
	hw_uint<16> img_mag_y_1_merged137_124_res = img_mag_y_1_merged137_124_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<960, 1536>(result, img_mag_y_1_merged137_124_res);
	hw_uint<16> img_mag_y_1_merged137_125_res = img_mag_y_1_merged137_125_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<976, 1536>(result, img_mag_y_1_merged137_125_res);
	hw_uint<16> img_mag_y_1_merged137_126_res = img_mag_y_1_merged137_126_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<992, 1536>(result, img_mag_y_1_merged137_126_res);
	hw_uint<16> img_mag_y_1_merged137_127_res = img_mag_y_1_merged137_127_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1008, 1536>(result, img_mag_y_1_merged137_127_res);
	hw_uint<16> img_mag_y_1_merged137_128_res = img_mag_y_1_merged137_128_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1024, 1536>(result, img_mag_y_1_merged137_128_res);
	hw_uint<16> img_mag_y_1_merged137_129_res = img_mag_y_1_merged137_129_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1040, 1536>(result, img_mag_y_1_merged137_129_res);
	hw_uint<16> img_mag_y_1_merged137_130_res = img_mag_y_1_merged137_130_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1056, 1536>(result, img_mag_y_1_merged137_130_res);
	hw_uint<16> img_mag_y_1_merged137_131_res = img_mag_y_1_merged137_131_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1072, 1536>(result, img_mag_y_1_merged137_131_res);
	hw_uint<16> img_mag_y_1_merged137_132_res = img_mag_y_1_merged137_132_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1088, 1536>(result, img_mag_y_1_merged137_132_res);
	hw_uint<16> img_mag_y_1_merged137_133_res = img_mag_y_1_merged137_133_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1104, 1536>(result, img_mag_y_1_merged137_133_res);
	hw_uint<16> img_mag_y_1_merged137_134_res = img_mag_y_1_merged137_134_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1120, 1536>(result, img_mag_y_1_merged137_134_res);
	hw_uint<16> img_mag_y_1_merged137_135_res = img_mag_y_1_merged137_135_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1136, 1536>(result, img_mag_y_1_merged137_135_res);
	hw_uint<16> img_mag_y_1_merged137_136_res = img_mag_y_1_merged137_136_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1152, 1536>(result, img_mag_y_1_merged137_136_res);
	hw_uint<16> img_mag_y_1_merged137_137_res = img_mag_y_1_merged137_137_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1168, 1536>(result, img_mag_y_1_merged137_137_res);
	hw_uint<16> img_mag_y_1_merged137_138_res = img_mag_y_1_merged137_138_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1184, 1536>(result, img_mag_y_1_merged137_138_res);
	hw_uint<16> img_mag_y_1_merged137_139_res = img_mag_y_1_merged137_139_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1200, 1536>(result, img_mag_y_1_merged137_139_res);
	hw_uint<16> img_mag_y_1_merged137_140_res = img_mag_y_1_merged137_140_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1216, 1536>(result, img_mag_y_1_merged137_140_res);
	hw_uint<16> img_mag_y_1_merged137_141_res = img_mag_y_1_merged137_141_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1232, 1536>(result, img_mag_y_1_merged137_141_res);
	hw_uint<16> img_mag_y_1_merged137_142_res = img_mag_y_1_merged137_142_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1248, 1536>(result, img_mag_y_1_merged137_142_res);
	hw_uint<16> img_mag_y_1_merged137_143_res = img_mag_y_1_merged137_143_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1264, 1536>(result, img_mag_y_1_merged137_143_res);
	hw_uint<16> img_mag_y_1_merged137_144_res = img_mag_y_1_merged137_144_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1280, 1536>(result, img_mag_y_1_merged137_144_res);
	hw_uint<16> img_mag_y_1_merged137_145_res = img_mag_y_1_merged137_145_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1296, 1536>(result, img_mag_y_1_merged137_145_res);
	hw_uint<16> img_mag_y_1_merged137_146_res = img_mag_y_1_merged137_146_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1312, 1536>(result, img_mag_y_1_merged137_146_res);
	hw_uint<16> img_mag_y_1_merged137_147_res = img_mag_y_1_merged137_147_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1328, 1536>(result, img_mag_y_1_merged137_147_res);
	hw_uint<16> img_mag_y_1_merged137_148_res = img_mag_y_1_merged137_148_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1344, 1536>(result, img_mag_y_1_merged137_148_res);
	hw_uint<16> img_mag_y_1_merged137_149_res = img_mag_y_1_merged137_149_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1360, 1536>(result, img_mag_y_1_merged137_149_res);
	hw_uint<16> img_mag_y_1_merged137_150_res = img_mag_y_1_merged137_150_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1376, 1536>(result, img_mag_y_1_merged137_150_res);
	hw_uint<16> img_mag_y_1_merged137_151_res = img_mag_y_1_merged137_151_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1392, 1536>(result, img_mag_y_1_merged137_151_res);
	hw_uint<16> img_mag_y_1_merged137_152_res = img_mag_y_1_merged137_152_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1408, 1536>(result, img_mag_y_1_merged137_152_res);
	hw_uint<16> img_mag_y_1_merged137_153_res = img_mag_y_1_merged137_153_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1424, 1536>(result, img_mag_y_1_merged137_153_res);
	hw_uint<16> img_mag_y_1_merged137_154_res = img_mag_y_1_merged137_154_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1440, 1536>(result, img_mag_y_1_merged137_154_res);
	hw_uint<16> img_mag_y_1_merged137_155_res = img_mag_y_1_merged137_155_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1456, 1536>(result, img_mag_y_1_merged137_155_res);
	hw_uint<16> img_mag_y_1_merged137_156_res = img_mag_y_1_merged137_156_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1472, 1536>(result, img_mag_y_1_merged137_156_res);
	hw_uint<16> img_mag_y_1_merged137_157_res = img_mag_y_1_merged137_157_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1488, 1536>(result, img_mag_y_1_merged137_157_res);
	hw_uint<16> img_mag_y_1_merged137_158_res = img_mag_y_1_merged137_158_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1504, 1536>(result, img_mag_y_1_merged137_158_res);
	hw_uint<16> img_mag_y_1_merged137_159_res = img_mag_y_1_merged137_159_select(img, root, mag_y_0, mag_y_1, dynamic_address);
	set_at<1520, 1536>(result, img_mag_y_1_merged137_159_res);
	return result;
}

struct mag_x_mag_x_1_merged140_160_to_mag_x_sbl9_16_1_merged143_16_cache {
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

struct mag_x_mag_x_1_merged140_161_to_mag_x_sbl9_16_1_merged143_18_cache {
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

struct mag_x_mag_x_1_merged140_162_to_mag_x_sbl9_16_1_merged143_20_cache {
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

struct mag_x_mag_x_1_merged140_163_to_mag_x_sbl9_16_1_merged143_22_cache {
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

struct mag_x_mag_x_1_merged140_164_to_mag_x_sbl9_16_1_merged143_24_cache {
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

struct mag_x_mag_x_1_merged140_165_to_mag_x_sbl9_16_1_merged143_26_cache {
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

struct mag_x_mag_x_1_merged140_166_to_mag_x_sbl9_16_1_merged143_28_cache {
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

struct mag_x_mag_x_1_merged140_167_to_mag_x_sbl9_16_1_merged143_30_cache {
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

struct mag_x_mag_x_1_merged140_168_to_mag_x_sbl9_16_1_merged143_32_cache {
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

struct mag_x_mag_x_1_merged140_169_to_mag_x_sbl9_16_1_merged143_34_cache {
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

struct mag_x_mag_x_1_merged140_170_to_mag_x_sbl9_16_1_merged143_36_cache {
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

struct mag_x_mag_x_1_merged140_171_to_mag_x_sbl9_16_1_merged143_38_cache {
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

struct mag_x_mag_x_1_merged140_172_to_mag_x_sbl9_16_1_merged143_40_cache {
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

struct mag_x_mag_x_1_merged140_173_to_mag_x_sbl9_16_1_merged143_42_cache {
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

struct mag_x_mag_x_1_merged140_174_to_mag_x_sbl9_16_1_merged143_44_cache {
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

struct mag_x_mag_x_1_merged140_175_to_mag_x_sbl9_16_1_merged143_46_cache {
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

struct mag_x_cache {
  // Reader addrs...
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[1 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[2 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[3 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[4 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[5 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[6 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[7 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[8 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[9 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[10 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[11 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[12 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[13 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[14 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[15 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // # of banks: 16
  mag_x_mag_x_1_merged140_160_to_mag_x_sbl9_16_1_merged143_16_cache mag_x_mag_x_1_merged140_160_to_mag_x_sbl9_16_1_merged143_16;
  mag_x_mag_x_1_merged140_161_to_mag_x_sbl9_16_1_merged143_18_cache mag_x_mag_x_1_merged140_161_to_mag_x_sbl9_16_1_merged143_18;
  mag_x_mag_x_1_merged140_162_to_mag_x_sbl9_16_1_merged143_20_cache mag_x_mag_x_1_merged140_162_to_mag_x_sbl9_16_1_merged143_20;
  mag_x_mag_x_1_merged140_163_to_mag_x_sbl9_16_1_merged143_22_cache mag_x_mag_x_1_merged140_163_to_mag_x_sbl9_16_1_merged143_22;
  mag_x_mag_x_1_merged140_164_to_mag_x_sbl9_16_1_merged143_24_cache mag_x_mag_x_1_merged140_164_to_mag_x_sbl9_16_1_merged143_24;
  mag_x_mag_x_1_merged140_165_to_mag_x_sbl9_16_1_merged143_26_cache mag_x_mag_x_1_merged140_165_to_mag_x_sbl9_16_1_merged143_26;
  mag_x_mag_x_1_merged140_166_to_mag_x_sbl9_16_1_merged143_28_cache mag_x_mag_x_1_merged140_166_to_mag_x_sbl9_16_1_merged143_28;
  mag_x_mag_x_1_merged140_167_to_mag_x_sbl9_16_1_merged143_30_cache mag_x_mag_x_1_merged140_167_to_mag_x_sbl9_16_1_merged143_30;
  mag_x_mag_x_1_merged140_168_to_mag_x_sbl9_16_1_merged143_32_cache mag_x_mag_x_1_merged140_168_to_mag_x_sbl9_16_1_merged143_32;
  mag_x_mag_x_1_merged140_169_to_mag_x_sbl9_16_1_merged143_34_cache mag_x_mag_x_1_merged140_169_to_mag_x_sbl9_16_1_merged143_34;
  mag_x_mag_x_1_merged140_170_to_mag_x_sbl9_16_1_merged143_36_cache mag_x_mag_x_1_merged140_170_to_mag_x_sbl9_16_1_merged143_36;
  mag_x_mag_x_1_merged140_171_to_mag_x_sbl9_16_1_merged143_38_cache mag_x_mag_x_1_merged140_171_to_mag_x_sbl9_16_1_merged143_38;
  mag_x_mag_x_1_merged140_172_to_mag_x_sbl9_16_1_merged143_40_cache mag_x_mag_x_1_merged140_172_to_mag_x_sbl9_16_1_merged143_40;
  mag_x_mag_x_1_merged140_173_to_mag_x_sbl9_16_1_merged143_42_cache mag_x_mag_x_1_merged140_173_to_mag_x_sbl9_16_1_merged143_42;
  mag_x_mag_x_1_merged140_174_to_mag_x_sbl9_16_1_merged143_44_cache mag_x_mag_x_1_merged140_174_to_mag_x_sbl9_16_1_merged143_44;
  mag_x_mag_x_1_merged140_175_to_mag_x_sbl9_16_1_merged143_46_cache mag_x_mag_x_1_merged140_175_to_mag_x_sbl9_16_1_merged143_46;
};



inline void mag_x_mag_x_1_merged140_160_write(hw_uint<16>& mag_x_mag_x_1_merged140_160, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged140_160_to_mag_x_sbl9_16_1_merged143_16.push(mag_x_mag_x_1_merged140_160);
}

inline void mag_x_mag_x_1_merged140_161_write(hw_uint<16>& mag_x_mag_x_1_merged140_161, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged140_161_to_mag_x_sbl9_16_1_merged143_18.push(mag_x_mag_x_1_merged140_161);
}

inline void mag_x_mag_x_1_merged140_162_write(hw_uint<16>& mag_x_mag_x_1_merged140_162, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged140_162_to_mag_x_sbl9_16_1_merged143_20.push(mag_x_mag_x_1_merged140_162);
}

inline void mag_x_mag_x_1_merged140_163_write(hw_uint<16>& mag_x_mag_x_1_merged140_163, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged140_163_to_mag_x_sbl9_16_1_merged143_22.push(mag_x_mag_x_1_merged140_163);
}

inline void mag_x_mag_x_1_merged140_164_write(hw_uint<16>& mag_x_mag_x_1_merged140_164, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged140_164_to_mag_x_sbl9_16_1_merged143_24.push(mag_x_mag_x_1_merged140_164);
}

inline void mag_x_mag_x_1_merged140_165_write(hw_uint<16>& mag_x_mag_x_1_merged140_165, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged140_165_to_mag_x_sbl9_16_1_merged143_26.push(mag_x_mag_x_1_merged140_165);
}

inline void mag_x_mag_x_1_merged140_166_write(hw_uint<16>& mag_x_mag_x_1_merged140_166, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged140_166_to_mag_x_sbl9_16_1_merged143_28.push(mag_x_mag_x_1_merged140_166);
}

inline void mag_x_mag_x_1_merged140_167_write(hw_uint<16>& mag_x_mag_x_1_merged140_167, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged140_167_to_mag_x_sbl9_16_1_merged143_30.push(mag_x_mag_x_1_merged140_167);
}

inline void mag_x_mag_x_1_merged140_168_write(hw_uint<16>& mag_x_mag_x_1_merged140_168, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged140_168_to_mag_x_sbl9_16_1_merged143_32.push(mag_x_mag_x_1_merged140_168);
}

inline void mag_x_mag_x_1_merged140_169_write(hw_uint<16>& mag_x_mag_x_1_merged140_169, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged140_169_to_mag_x_sbl9_16_1_merged143_34.push(mag_x_mag_x_1_merged140_169);
}

inline void mag_x_mag_x_1_merged140_170_write(hw_uint<16>& mag_x_mag_x_1_merged140_170, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged140_170_to_mag_x_sbl9_16_1_merged143_36.push(mag_x_mag_x_1_merged140_170);
}

inline void mag_x_mag_x_1_merged140_171_write(hw_uint<16>& mag_x_mag_x_1_merged140_171, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged140_171_to_mag_x_sbl9_16_1_merged143_38.push(mag_x_mag_x_1_merged140_171);
}

inline void mag_x_mag_x_1_merged140_172_write(hw_uint<16>& mag_x_mag_x_1_merged140_172, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged140_172_to_mag_x_sbl9_16_1_merged143_40.push(mag_x_mag_x_1_merged140_172);
}

inline void mag_x_mag_x_1_merged140_173_write(hw_uint<16>& mag_x_mag_x_1_merged140_173, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged140_173_to_mag_x_sbl9_16_1_merged143_42.push(mag_x_mag_x_1_merged140_173);
}

inline void mag_x_mag_x_1_merged140_174_write(hw_uint<16>& mag_x_mag_x_1_merged140_174, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged140_174_to_mag_x_sbl9_16_1_merged143_44.push(mag_x_mag_x_1_merged140_174);
}

inline void mag_x_mag_x_1_merged140_175_write(hw_uint<16>& mag_x_mag_x_1_merged140_175, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
  mag_x.mag_x_mag_x_1_merged140_175_to_mag_x_sbl9_16_1_merged143_46.push(mag_x_mag_x_1_merged140_175);
}

inline hw_uint<16> mag_x_sbl9_16_1_merged143_16_select(mag_x_cache& mag_x, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl9_16_1_merged143_16 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_x_mag_x_1_merged140_160 = mag_x.mag_x_mag_x_1_merged140_160_to_mag_x_sbl9_16_1_merged143_16.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged140_160;
  return 0;
}

inline hw_uint<16> mag_x_sbl9_16_1_merged143_18_select(mag_x_cache& mag_x, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl9_16_1_merged143_18 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[1 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_x_mag_x_1_merged140_161 = mag_x.mag_x_mag_x_1_merged140_161_to_mag_x_sbl9_16_1_merged143_18.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged140_161;
  return 0;
}

inline hw_uint<16> mag_x_sbl9_16_1_merged143_20_select(mag_x_cache& mag_x, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl9_16_1_merged143_20 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[2 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_x_mag_x_1_merged140_162 = mag_x.mag_x_mag_x_1_merged140_162_to_mag_x_sbl9_16_1_merged143_20.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged140_162;
  return 0;
}

inline hw_uint<16> mag_x_sbl9_16_1_merged143_22_select(mag_x_cache& mag_x, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl9_16_1_merged143_22 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[3 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_x_mag_x_1_merged140_163 = mag_x.mag_x_mag_x_1_merged140_163_to_mag_x_sbl9_16_1_merged143_22.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged140_163;
  return 0;
}

inline hw_uint<16> mag_x_sbl9_16_1_merged143_24_select(mag_x_cache& mag_x, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl9_16_1_merged143_24 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[4 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_x_mag_x_1_merged140_164 = mag_x.mag_x_mag_x_1_merged140_164_to_mag_x_sbl9_16_1_merged143_24.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged140_164;
  return 0;
}

inline hw_uint<16> mag_x_sbl9_16_1_merged143_26_select(mag_x_cache& mag_x, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl9_16_1_merged143_26 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[5 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_x_mag_x_1_merged140_165 = mag_x.mag_x_mag_x_1_merged140_165_to_mag_x_sbl9_16_1_merged143_26.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged140_165;
  return 0;
}

inline hw_uint<16> mag_x_sbl9_16_1_merged143_28_select(mag_x_cache& mag_x, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl9_16_1_merged143_28 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[6 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_x_mag_x_1_merged140_166 = mag_x.mag_x_mag_x_1_merged140_166_to_mag_x_sbl9_16_1_merged143_28.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged140_166;
  return 0;
}

inline hw_uint<16> mag_x_sbl9_16_1_merged143_30_select(mag_x_cache& mag_x, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl9_16_1_merged143_30 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[7 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_x_mag_x_1_merged140_167 = mag_x.mag_x_mag_x_1_merged140_167_to_mag_x_sbl9_16_1_merged143_30.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged140_167;
  return 0;
}

inline hw_uint<16> mag_x_sbl9_16_1_merged143_32_select(mag_x_cache& mag_x, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl9_16_1_merged143_32 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[8 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_x_mag_x_1_merged140_168 = mag_x.mag_x_mag_x_1_merged140_168_to_mag_x_sbl9_16_1_merged143_32.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged140_168;
  return 0;
}

inline hw_uint<16> mag_x_sbl9_16_1_merged143_34_select(mag_x_cache& mag_x, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl9_16_1_merged143_34 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[9 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_x_mag_x_1_merged140_169 = mag_x.mag_x_mag_x_1_merged140_169_to_mag_x_sbl9_16_1_merged143_34.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged140_169;
  return 0;
}

inline hw_uint<16> mag_x_sbl9_16_1_merged143_36_select(mag_x_cache& mag_x, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl9_16_1_merged143_36 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[10 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_x_mag_x_1_merged140_170 = mag_x.mag_x_mag_x_1_merged140_170_to_mag_x_sbl9_16_1_merged143_36.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged140_170;
  return 0;
}

inline hw_uint<16> mag_x_sbl9_16_1_merged143_38_select(mag_x_cache& mag_x, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl9_16_1_merged143_38 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[11 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_x_mag_x_1_merged140_171 = mag_x.mag_x_mag_x_1_merged140_171_to_mag_x_sbl9_16_1_merged143_38.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged140_171;
  return 0;
}

inline hw_uint<16> mag_x_sbl9_16_1_merged143_40_select(mag_x_cache& mag_x, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl9_16_1_merged143_40 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[12 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_x_mag_x_1_merged140_172 = mag_x.mag_x_mag_x_1_merged140_172_to_mag_x_sbl9_16_1_merged143_40.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged140_172;
  return 0;
}

inline hw_uint<16> mag_x_sbl9_16_1_merged143_42_select(mag_x_cache& mag_x, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl9_16_1_merged143_42 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[13 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_x_mag_x_1_merged140_173 = mag_x.mag_x_mag_x_1_merged140_173_to_mag_x_sbl9_16_1_merged143_42.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged140_173;
  return 0;
}

inline hw_uint<16> mag_x_sbl9_16_1_merged143_44_select(mag_x_cache& mag_x, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl9_16_1_merged143_44 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[14 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_x_mag_x_1_merged140_174 = mag_x.mag_x_mag_x_1_merged140_174_to_mag_x_sbl9_16_1_merged143_44.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged140_174;
  return 0;
}

inline hw_uint<16> mag_x_sbl9_16_1_merged143_46_select(mag_x_cache& mag_x, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_x_sbl9_16_1_merged143_46 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_x[15 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_x_mag_x_1_merged140_175 = mag_x.mag_x_mag_x_1_merged140_175_to_mag_x_sbl9_16_1_merged143_46.peek(/* one reader or all rams */ 0);
  return value_mag_x_mag_x_1_merged140_175;
  return 0;
}

// # of bundles = 2
// mag_x_1_merged140_write
//	mag_x_mag_x_1_merged140_160
//	mag_x_mag_x_1_merged140_161
//	mag_x_mag_x_1_merged140_162
//	mag_x_mag_x_1_merged140_163
//	mag_x_mag_x_1_merged140_164
//	mag_x_mag_x_1_merged140_165
//	mag_x_mag_x_1_merged140_166
//	mag_x_mag_x_1_merged140_167
//	mag_x_mag_x_1_merged140_168
//	mag_x_mag_x_1_merged140_169
//	mag_x_mag_x_1_merged140_170
//	mag_x_mag_x_1_merged140_171
//	mag_x_mag_x_1_merged140_172
//	mag_x_mag_x_1_merged140_173
//	mag_x_mag_x_1_merged140_174
//	mag_x_mag_x_1_merged140_175
inline void mag_x_mag_x_1_merged140_write_bundle_write(hw_uint<256>& mag_x_1_merged140_write, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1, int dynamic_address) {
	hw_uint<16> mag_x_mag_x_1_merged140_160_res = mag_x_1_merged140_write.extract<0, 15>();
	mag_x_mag_x_1_merged140_160_write(mag_x_mag_x_1_merged140_160_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged140_161_res = mag_x_1_merged140_write.extract<16, 31>();
	mag_x_mag_x_1_merged140_161_write(mag_x_mag_x_1_merged140_161_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged140_162_res = mag_x_1_merged140_write.extract<32, 47>();
	mag_x_mag_x_1_merged140_162_write(mag_x_mag_x_1_merged140_162_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged140_163_res = mag_x_1_merged140_write.extract<48, 63>();
	mag_x_mag_x_1_merged140_163_write(mag_x_mag_x_1_merged140_163_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged140_164_res = mag_x_1_merged140_write.extract<64, 79>();
	mag_x_mag_x_1_merged140_164_write(mag_x_mag_x_1_merged140_164_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged140_165_res = mag_x_1_merged140_write.extract<80, 95>();
	mag_x_mag_x_1_merged140_165_write(mag_x_mag_x_1_merged140_165_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged140_166_res = mag_x_1_merged140_write.extract<96, 111>();
	mag_x_mag_x_1_merged140_166_write(mag_x_mag_x_1_merged140_166_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged140_167_res = mag_x_1_merged140_write.extract<112, 127>();
	mag_x_mag_x_1_merged140_167_write(mag_x_mag_x_1_merged140_167_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged140_168_res = mag_x_1_merged140_write.extract<128, 143>();
	mag_x_mag_x_1_merged140_168_write(mag_x_mag_x_1_merged140_168_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged140_169_res = mag_x_1_merged140_write.extract<144, 159>();
	mag_x_mag_x_1_merged140_169_write(mag_x_mag_x_1_merged140_169_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged140_170_res = mag_x_1_merged140_write.extract<160, 175>();
	mag_x_mag_x_1_merged140_170_write(mag_x_mag_x_1_merged140_170_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged140_171_res = mag_x_1_merged140_write.extract<176, 191>();
	mag_x_mag_x_1_merged140_171_write(mag_x_mag_x_1_merged140_171_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged140_172_res = mag_x_1_merged140_write.extract<192, 207>();
	mag_x_mag_x_1_merged140_172_write(mag_x_mag_x_1_merged140_172_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged140_173_res = mag_x_1_merged140_write.extract<208, 223>();
	mag_x_mag_x_1_merged140_173_write(mag_x_mag_x_1_merged140_173_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged140_174_res = mag_x_1_merged140_write.extract<224, 239>();
	mag_x_mag_x_1_merged140_174_write(mag_x_mag_x_1_merged140_174_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
	hw_uint<16> mag_x_mag_x_1_merged140_175_res = mag_x_1_merged140_write.extract<240, 255>();
	mag_x_mag_x_1_merged140_175_write(mag_x_mag_x_1_merged140_175_res, mag_x, root, mag_x_0, mag_x_1, dynamic_address);
}

// sbl9_16_1_merged143_read
//	mag_x_sbl9_16_1_merged143_16
//	mag_x_sbl9_16_1_merged143_18
//	mag_x_sbl9_16_1_merged143_20
//	mag_x_sbl9_16_1_merged143_22
//	mag_x_sbl9_16_1_merged143_24
//	mag_x_sbl9_16_1_merged143_26
//	mag_x_sbl9_16_1_merged143_28
//	mag_x_sbl9_16_1_merged143_30
//	mag_x_sbl9_16_1_merged143_32
//	mag_x_sbl9_16_1_merged143_34
//	mag_x_sbl9_16_1_merged143_36
//	mag_x_sbl9_16_1_merged143_38
//	mag_x_sbl9_16_1_merged143_40
//	mag_x_sbl9_16_1_merged143_42
//	mag_x_sbl9_16_1_merged143_44
//	mag_x_sbl9_16_1_merged143_46
inline hw_uint<256> mag_x_sbl9_16_1_merged143_read_bundle_read(mag_x_cache& mag_x, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
  // # of ports in bundle: 16
    // mag_x_sbl9_16_1_merged143_16
    // mag_x_sbl9_16_1_merged143_18
    // mag_x_sbl9_16_1_merged143_20
    // mag_x_sbl9_16_1_merged143_22
    // mag_x_sbl9_16_1_merged143_24
    // mag_x_sbl9_16_1_merged143_26
    // mag_x_sbl9_16_1_merged143_28
    // mag_x_sbl9_16_1_merged143_30
    // mag_x_sbl9_16_1_merged143_32
    // mag_x_sbl9_16_1_merged143_34
    // mag_x_sbl9_16_1_merged143_36
    // mag_x_sbl9_16_1_merged143_38
    // mag_x_sbl9_16_1_merged143_40
    // mag_x_sbl9_16_1_merged143_42
    // mag_x_sbl9_16_1_merged143_44
    // mag_x_sbl9_16_1_merged143_46

	hw_uint<256> result;
	hw_uint<16> mag_x_sbl9_16_1_merged143_16_res = mag_x_sbl9_16_1_merged143_16_select(mag_x, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<0, 256>(result, mag_x_sbl9_16_1_merged143_16_res);
	hw_uint<16> mag_x_sbl9_16_1_merged143_18_res = mag_x_sbl9_16_1_merged143_18_select(mag_x, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<16, 256>(result, mag_x_sbl9_16_1_merged143_18_res);
	hw_uint<16> mag_x_sbl9_16_1_merged143_20_res = mag_x_sbl9_16_1_merged143_20_select(mag_x, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<32, 256>(result, mag_x_sbl9_16_1_merged143_20_res);
	hw_uint<16> mag_x_sbl9_16_1_merged143_22_res = mag_x_sbl9_16_1_merged143_22_select(mag_x, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<48, 256>(result, mag_x_sbl9_16_1_merged143_22_res);
	hw_uint<16> mag_x_sbl9_16_1_merged143_24_res = mag_x_sbl9_16_1_merged143_24_select(mag_x, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<64, 256>(result, mag_x_sbl9_16_1_merged143_24_res);
	hw_uint<16> mag_x_sbl9_16_1_merged143_26_res = mag_x_sbl9_16_1_merged143_26_select(mag_x, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<80, 256>(result, mag_x_sbl9_16_1_merged143_26_res);
	hw_uint<16> mag_x_sbl9_16_1_merged143_28_res = mag_x_sbl9_16_1_merged143_28_select(mag_x, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<96, 256>(result, mag_x_sbl9_16_1_merged143_28_res);
	hw_uint<16> mag_x_sbl9_16_1_merged143_30_res = mag_x_sbl9_16_1_merged143_30_select(mag_x, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<112, 256>(result, mag_x_sbl9_16_1_merged143_30_res);
	hw_uint<16> mag_x_sbl9_16_1_merged143_32_res = mag_x_sbl9_16_1_merged143_32_select(mag_x, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<128, 256>(result, mag_x_sbl9_16_1_merged143_32_res);
	hw_uint<16> mag_x_sbl9_16_1_merged143_34_res = mag_x_sbl9_16_1_merged143_34_select(mag_x, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<144, 256>(result, mag_x_sbl9_16_1_merged143_34_res);
	hw_uint<16> mag_x_sbl9_16_1_merged143_36_res = mag_x_sbl9_16_1_merged143_36_select(mag_x, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<160, 256>(result, mag_x_sbl9_16_1_merged143_36_res);
	hw_uint<16> mag_x_sbl9_16_1_merged143_38_res = mag_x_sbl9_16_1_merged143_38_select(mag_x, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<176, 256>(result, mag_x_sbl9_16_1_merged143_38_res);
	hw_uint<16> mag_x_sbl9_16_1_merged143_40_res = mag_x_sbl9_16_1_merged143_40_select(mag_x, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<192, 256>(result, mag_x_sbl9_16_1_merged143_40_res);
	hw_uint<16> mag_x_sbl9_16_1_merged143_42_res = mag_x_sbl9_16_1_merged143_42_select(mag_x, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<208, 256>(result, mag_x_sbl9_16_1_merged143_42_res);
	hw_uint<16> mag_x_sbl9_16_1_merged143_44_res = mag_x_sbl9_16_1_merged143_44_select(mag_x, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<224, 256>(result, mag_x_sbl9_16_1_merged143_44_res);
	hw_uint<16> mag_x_sbl9_16_1_merged143_46_res = mag_x_sbl9_16_1_merged143_46_select(mag_x, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<240, 256>(result, mag_x_sbl9_16_1_merged143_46_res);
	return result;
}

struct mag_y_mag_y_1_merged137_48_to_mag_y_sbl9_16_1_merged143_17_cache {
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

struct mag_y_mag_y_1_merged137_49_to_mag_y_sbl9_16_1_merged143_19_cache {
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

struct mag_y_mag_y_1_merged137_50_to_mag_y_sbl9_16_1_merged143_21_cache {
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

struct mag_y_mag_y_1_merged137_51_to_mag_y_sbl9_16_1_merged143_23_cache {
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

struct mag_y_mag_y_1_merged137_52_to_mag_y_sbl9_16_1_merged143_25_cache {
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

struct mag_y_mag_y_1_merged137_53_to_mag_y_sbl9_16_1_merged143_27_cache {
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

struct mag_y_mag_y_1_merged137_54_to_mag_y_sbl9_16_1_merged143_29_cache {
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

struct mag_y_mag_y_1_merged137_55_to_mag_y_sbl9_16_1_merged143_31_cache {
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

struct mag_y_mag_y_1_merged137_56_to_mag_y_sbl9_16_1_merged143_33_cache {
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

struct mag_y_mag_y_1_merged137_57_to_mag_y_sbl9_16_1_merged143_35_cache {
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

struct mag_y_mag_y_1_merged137_58_to_mag_y_sbl9_16_1_merged143_37_cache {
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

struct mag_y_mag_y_1_merged137_59_to_mag_y_sbl9_16_1_merged143_39_cache {
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

struct mag_y_mag_y_1_merged137_60_to_mag_y_sbl9_16_1_merged143_41_cache {
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

struct mag_y_mag_y_1_merged137_61_to_mag_y_sbl9_16_1_merged143_43_cache {
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

struct mag_y_mag_y_1_merged137_62_to_mag_y_sbl9_16_1_merged143_45_cache {
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

struct mag_y_mag_y_1_merged137_63_to_mag_y_sbl9_16_1_merged143_47_cache {
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

struct mag_y_cache {
  // Reader addrs...
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[1 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[2 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[3 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[4 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[5 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[6 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[7 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[8 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[9 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[10 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[11 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[12 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[13 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[14 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
    // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[15 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // # of banks: 16
  mag_y_mag_y_1_merged137_48_to_mag_y_sbl9_16_1_merged143_17_cache mag_y_mag_y_1_merged137_48_to_mag_y_sbl9_16_1_merged143_17;
  mag_y_mag_y_1_merged137_49_to_mag_y_sbl9_16_1_merged143_19_cache mag_y_mag_y_1_merged137_49_to_mag_y_sbl9_16_1_merged143_19;
  mag_y_mag_y_1_merged137_50_to_mag_y_sbl9_16_1_merged143_21_cache mag_y_mag_y_1_merged137_50_to_mag_y_sbl9_16_1_merged143_21;
  mag_y_mag_y_1_merged137_51_to_mag_y_sbl9_16_1_merged143_23_cache mag_y_mag_y_1_merged137_51_to_mag_y_sbl9_16_1_merged143_23;
  mag_y_mag_y_1_merged137_52_to_mag_y_sbl9_16_1_merged143_25_cache mag_y_mag_y_1_merged137_52_to_mag_y_sbl9_16_1_merged143_25;
  mag_y_mag_y_1_merged137_53_to_mag_y_sbl9_16_1_merged143_27_cache mag_y_mag_y_1_merged137_53_to_mag_y_sbl9_16_1_merged143_27;
  mag_y_mag_y_1_merged137_54_to_mag_y_sbl9_16_1_merged143_29_cache mag_y_mag_y_1_merged137_54_to_mag_y_sbl9_16_1_merged143_29;
  mag_y_mag_y_1_merged137_55_to_mag_y_sbl9_16_1_merged143_31_cache mag_y_mag_y_1_merged137_55_to_mag_y_sbl9_16_1_merged143_31;
  mag_y_mag_y_1_merged137_56_to_mag_y_sbl9_16_1_merged143_33_cache mag_y_mag_y_1_merged137_56_to_mag_y_sbl9_16_1_merged143_33;
  mag_y_mag_y_1_merged137_57_to_mag_y_sbl9_16_1_merged143_35_cache mag_y_mag_y_1_merged137_57_to_mag_y_sbl9_16_1_merged143_35;
  mag_y_mag_y_1_merged137_58_to_mag_y_sbl9_16_1_merged143_37_cache mag_y_mag_y_1_merged137_58_to_mag_y_sbl9_16_1_merged143_37;
  mag_y_mag_y_1_merged137_59_to_mag_y_sbl9_16_1_merged143_39_cache mag_y_mag_y_1_merged137_59_to_mag_y_sbl9_16_1_merged143_39;
  mag_y_mag_y_1_merged137_60_to_mag_y_sbl9_16_1_merged143_41_cache mag_y_mag_y_1_merged137_60_to_mag_y_sbl9_16_1_merged143_41;
  mag_y_mag_y_1_merged137_61_to_mag_y_sbl9_16_1_merged143_43_cache mag_y_mag_y_1_merged137_61_to_mag_y_sbl9_16_1_merged143_43;
  mag_y_mag_y_1_merged137_62_to_mag_y_sbl9_16_1_merged143_45_cache mag_y_mag_y_1_merged137_62_to_mag_y_sbl9_16_1_merged143_45;
  mag_y_mag_y_1_merged137_63_to_mag_y_sbl9_16_1_merged143_47_cache mag_y_mag_y_1_merged137_63_to_mag_y_sbl9_16_1_merged143_47;
};



inline void mag_y_mag_y_1_merged137_48_write(hw_uint<16>& mag_y_mag_y_1_merged137_48, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged137_48_to_mag_y_sbl9_16_1_merged143_17.push(mag_y_mag_y_1_merged137_48);
}

inline void mag_y_mag_y_1_merged137_49_write(hw_uint<16>& mag_y_mag_y_1_merged137_49, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged137_49_to_mag_y_sbl9_16_1_merged143_19.push(mag_y_mag_y_1_merged137_49);
}

inline void mag_y_mag_y_1_merged137_50_write(hw_uint<16>& mag_y_mag_y_1_merged137_50, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged137_50_to_mag_y_sbl9_16_1_merged143_21.push(mag_y_mag_y_1_merged137_50);
}

inline void mag_y_mag_y_1_merged137_51_write(hw_uint<16>& mag_y_mag_y_1_merged137_51, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged137_51_to_mag_y_sbl9_16_1_merged143_23.push(mag_y_mag_y_1_merged137_51);
}

inline void mag_y_mag_y_1_merged137_52_write(hw_uint<16>& mag_y_mag_y_1_merged137_52, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged137_52_to_mag_y_sbl9_16_1_merged143_25.push(mag_y_mag_y_1_merged137_52);
}

inline void mag_y_mag_y_1_merged137_53_write(hw_uint<16>& mag_y_mag_y_1_merged137_53, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged137_53_to_mag_y_sbl9_16_1_merged143_27.push(mag_y_mag_y_1_merged137_53);
}

inline void mag_y_mag_y_1_merged137_54_write(hw_uint<16>& mag_y_mag_y_1_merged137_54, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged137_54_to_mag_y_sbl9_16_1_merged143_29.push(mag_y_mag_y_1_merged137_54);
}

inline void mag_y_mag_y_1_merged137_55_write(hw_uint<16>& mag_y_mag_y_1_merged137_55, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged137_55_to_mag_y_sbl9_16_1_merged143_31.push(mag_y_mag_y_1_merged137_55);
}

inline void mag_y_mag_y_1_merged137_56_write(hw_uint<16>& mag_y_mag_y_1_merged137_56, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged137_56_to_mag_y_sbl9_16_1_merged143_33.push(mag_y_mag_y_1_merged137_56);
}

inline void mag_y_mag_y_1_merged137_57_write(hw_uint<16>& mag_y_mag_y_1_merged137_57, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged137_57_to_mag_y_sbl9_16_1_merged143_35.push(mag_y_mag_y_1_merged137_57);
}

inline void mag_y_mag_y_1_merged137_58_write(hw_uint<16>& mag_y_mag_y_1_merged137_58, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged137_58_to_mag_y_sbl9_16_1_merged143_37.push(mag_y_mag_y_1_merged137_58);
}

inline void mag_y_mag_y_1_merged137_59_write(hw_uint<16>& mag_y_mag_y_1_merged137_59, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged137_59_to_mag_y_sbl9_16_1_merged143_39.push(mag_y_mag_y_1_merged137_59);
}

inline void mag_y_mag_y_1_merged137_60_write(hw_uint<16>& mag_y_mag_y_1_merged137_60, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged137_60_to_mag_y_sbl9_16_1_merged143_41.push(mag_y_mag_y_1_merged137_60);
}

inline void mag_y_mag_y_1_merged137_61_write(hw_uint<16>& mag_y_mag_y_1_merged137_61, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged137_61_to_mag_y_sbl9_16_1_merged143_43.push(mag_y_mag_y_1_merged137_61);
}

inline void mag_y_mag_y_1_merged137_62_write(hw_uint<16>& mag_y_mag_y_1_merged137_62, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged137_62_to_mag_y_sbl9_16_1_merged143_45.push(mag_y_mag_y_1_merged137_62);
}

inline void mag_y_mag_y_1_merged137_63_write(hw_uint<16>& mag_y_mag_y_1_merged137_63, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
  mag_y.mag_y_mag_y_1_merged137_63_to_mag_y_sbl9_16_1_merged143_47.push(mag_y_mag_y_1_merged137_63);
}

inline hw_uint<16> mag_y_sbl9_16_1_merged143_17_select(mag_y_cache& mag_y, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl9_16_1_merged143_17 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_y_mag_y_1_merged137_48 = mag_y.mag_y_mag_y_1_merged137_48_to_mag_y_sbl9_16_1_merged143_17.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged137_48;
  return 0;
}

inline hw_uint<16> mag_y_sbl9_16_1_merged143_19_select(mag_y_cache& mag_y, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl9_16_1_merged143_19 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[1 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_y_mag_y_1_merged137_49 = mag_y.mag_y_mag_y_1_merged137_49_to_mag_y_sbl9_16_1_merged143_19.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged137_49;
  return 0;
}

inline hw_uint<16> mag_y_sbl9_16_1_merged143_21_select(mag_y_cache& mag_y, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl9_16_1_merged143_21 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[2 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_y_mag_y_1_merged137_50 = mag_y.mag_y_mag_y_1_merged137_50_to_mag_y_sbl9_16_1_merged143_21.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged137_50;
  return 0;
}

inline hw_uint<16> mag_y_sbl9_16_1_merged143_23_select(mag_y_cache& mag_y, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl9_16_1_merged143_23 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[3 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_y_mag_y_1_merged137_51 = mag_y.mag_y_mag_y_1_merged137_51_to_mag_y_sbl9_16_1_merged143_23.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged137_51;
  return 0;
}

inline hw_uint<16> mag_y_sbl9_16_1_merged143_25_select(mag_y_cache& mag_y, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl9_16_1_merged143_25 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[4 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_y_mag_y_1_merged137_52 = mag_y.mag_y_mag_y_1_merged137_52_to_mag_y_sbl9_16_1_merged143_25.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged137_52;
  return 0;
}

inline hw_uint<16> mag_y_sbl9_16_1_merged143_27_select(mag_y_cache& mag_y, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl9_16_1_merged143_27 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[5 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_y_mag_y_1_merged137_53 = mag_y.mag_y_mag_y_1_merged137_53_to_mag_y_sbl9_16_1_merged143_27.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged137_53;
  return 0;
}

inline hw_uint<16> mag_y_sbl9_16_1_merged143_29_select(mag_y_cache& mag_y, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl9_16_1_merged143_29 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[6 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_y_mag_y_1_merged137_54 = mag_y.mag_y_mag_y_1_merged137_54_to_mag_y_sbl9_16_1_merged143_29.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged137_54;
  return 0;
}

inline hw_uint<16> mag_y_sbl9_16_1_merged143_31_select(mag_y_cache& mag_y, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl9_16_1_merged143_31 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[7 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_y_mag_y_1_merged137_55 = mag_y.mag_y_mag_y_1_merged137_55_to_mag_y_sbl9_16_1_merged143_31.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged137_55;
  return 0;
}

inline hw_uint<16> mag_y_sbl9_16_1_merged143_33_select(mag_y_cache& mag_y, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl9_16_1_merged143_33 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[8 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_y_mag_y_1_merged137_56 = mag_y.mag_y_mag_y_1_merged137_56_to_mag_y_sbl9_16_1_merged143_33.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged137_56;
  return 0;
}

inline hw_uint<16> mag_y_sbl9_16_1_merged143_35_select(mag_y_cache& mag_y, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl9_16_1_merged143_35 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[9 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_y_mag_y_1_merged137_57 = mag_y.mag_y_mag_y_1_merged137_57_to_mag_y_sbl9_16_1_merged143_35.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged137_57;
  return 0;
}

inline hw_uint<16> mag_y_sbl9_16_1_merged143_37_select(mag_y_cache& mag_y, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl9_16_1_merged143_37 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[10 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_y_mag_y_1_merged137_58 = mag_y.mag_y_mag_y_1_merged137_58_to_mag_y_sbl9_16_1_merged143_37.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged137_58;
  return 0;
}

inline hw_uint<16> mag_y_sbl9_16_1_merged143_39_select(mag_y_cache& mag_y, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl9_16_1_merged143_39 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[11 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_y_mag_y_1_merged137_59 = mag_y.mag_y_mag_y_1_merged137_59_to_mag_y_sbl9_16_1_merged143_39.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged137_59;
  return 0;
}

inline hw_uint<16> mag_y_sbl9_16_1_merged143_41_select(mag_y_cache& mag_y, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl9_16_1_merged143_41 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[12 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_y_mag_y_1_merged137_60 = mag_y.mag_y_mag_y_1_merged137_60_to_mag_y_sbl9_16_1_merged143_41.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged137_60;
  return 0;
}

inline hw_uint<16> mag_y_sbl9_16_1_merged143_43_select(mag_y_cache& mag_y, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl9_16_1_merged143_43 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[13 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_y_mag_y_1_merged137_61 = mag_y.mag_y_mag_y_1_merged137_61_to_mag_y_sbl9_16_1_merged143_43.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged137_61;
  return 0;
}

inline hw_uint<16> mag_y_sbl9_16_1_merged143_45_select(mag_y_cache& mag_y, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl9_16_1_merged143_45 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[14 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_y_mag_y_1_merged137_62 = mag_y.mag_y_mag_y_1_merged137_62_to_mag_y_sbl9_16_1_merged143_45.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged137_62;
  return 0;
}

inline hw_uint<16> mag_y_sbl9_16_1_merged143_47_select(mag_y_cache& mag_y, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
#ifdef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__
  // mag_y_sbl9_16_1_merged143_47 read pattern: { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> mag_y[15 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
  // Read schedule : { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  // Write schedule: { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
  auto value_mag_y_mag_y_1_merged137_63 = mag_y.mag_y_mag_y_1_merged137_63_to_mag_y_sbl9_16_1_merged143_47.peek(/* one reader or all rams */ 0);
  return value_mag_y_mag_y_1_merged137_63;
  return 0;
}

// # of bundles = 2
// mag_y_1_merged137_write
//	mag_y_mag_y_1_merged137_48
//	mag_y_mag_y_1_merged137_49
//	mag_y_mag_y_1_merged137_50
//	mag_y_mag_y_1_merged137_51
//	mag_y_mag_y_1_merged137_52
//	mag_y_mag_y_1_merged137_53
//	mag_y_mag_y_1_merged137_54
//	mag_y_mag_y_1_merged137_55
//	mag_y_mag_y_1_merged137_56
//	mag_y_mag_y_1_merged137_57
//	mag_y_mag_y_1_merged137_58
//	mag_y_mag_y_1_merged137_59
//	mag_y_mag_y_1_merged137_60
//	mag_y_mag_y_1_merged137_61
//	mag_y_mag_y_1_merged137_62
//	mag_y_mag_y_1_merged137_63
inline void mag_y_mag_y_1_merged137_write_bundle_write(hw_uint<256>& mag_y_1_merged137_write, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1, int dynamic_address) {
	hw_uint<16> mag_y_mag_y_1_merged137_48_res = mag_y_1_merged137_write.extract<0, 15>();
	mag_y_mag_y_1_merged137_48_write(mag_y_mag_y_1_merged137_48_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged137_49_res = mag_y_1_merged137_write.extract<16, 31>();
	mag_y_mag_y_1_merged137_49_write(mag_y_mag_y_1_merged137_49_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged137_50_res = mag_y_1_merged137_write.extract<32, 47>();
	mag_y_mag_y_1_merged137_50_write(mag_y_mag_y_1_merged137_50_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged137_51_res = mag_y_1_merged137_write.extract<48, 63>();
	mag_y_mag_y_1_merged137_51_write(mag_y_mag_y_1_merged137_51_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged137_52_res = mag_y_1_merged137_write.extract<64, 79>();
	mag_y_mag_y_1_merged137_52_write(mag_y_mag_y_1_merged137_52_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged137_53_res = mag_y_1_merged137_write.extract<80, 95>();
	mag_y_mag_y_1_merged137_53_write(mag_y_mag_y_1_merged137_53_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged137_54_res = mag_y_1_merged137_write.extract<96, 111>();
	mag_y_mag_y_1_merged137_54_write(mag_y_mag_y_1_merged137_54_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged137_55_res = mag_y_1_merged137_write.extract<112, 127>();
	mag_y_mag_y_1_merged137_55_write(mag_y_mag_y_1_merged137_55_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged137_56_res = mag_y_1_merged137_write.extract<128, 143>();
	mag_y_mag_y_1_merged137_56_write(mag_y_mag_y_1_merged137_56_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged137_57_res = mag_y_1_merged137_write.extract<144, 159>();
	mag_y_mag_y_1_merged137_57_write(mag_y_mag_y_1_merged137_57_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged137_58_res = mag_y_1_merged137_write.extract<160, 175>();
	mag_y_mag_y_1_merged137_58_write(mag_y_mag_y_1_merged137_58_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged137_59_res = mag_y_1_merged137_write.extract<176, 191>();
	mag_y_mag_y_1_merged137_59_write(mag_y_mag_y_1_merged137_59_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged137_60_res = mag_y_1_merged137_write.extract<192, 207>();
	mag_y_mag_y_1_merged137_60_write(mag_y_mag_y_1_merged137_60_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged137_61_res = mag_y_1_merged137_write.extract<208, 223>();
	mag_y_mag_y_1_merged137_61_write(mag_y_mag_y_1_merged137_61_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged137_62_res = mag_y_1_merged137_write.extract<224, 239>();
	mag_y_mag_y_1_merged137_62_write(mag_y_mag_y_1_merged137_62_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
	hw_uint<16> mag_y_mag_y_1_merged137_63_res = mag_y_1_merged137_write.extract<240, 255>();
	mag_y_mag_y_1_merged137_63_write(mag_y_mag_y_1_merged137_63_res, mag_y, root, mag_y_0, mag_y_1, dynamic_address);
}

// sbl9_16_1_merged143_read
//	mag_y_sbl9_16_1_merged143_17
//	mag_y_sbl9_16_1_merged143_19
//	mag_y_sbl9_16_1_merged143_21
//	mag_y_sbl9_16_1_merged143_23
//	mag_y_sbl9_16_1_merged143_25
//	mag_y_sbl9_16_1_merged143_27
//	mag_y_sbl9_16_1_merged143_29
//	mag_y_sbl9_16_1_merged143_31
//	mag_y_sbl9_16_1_merged143_33
//	mag_y_sbl9_16_1_merged143_35
//	mag_y_sbl9_16_1_merged143_37
//	mag_y_sbl9_16_1_merged143_39
//	mag_y_sbl9_16_1_merged143_41
//	mag_y_sbl9_16_1_merged143_43
//	mag_y_sbl9_16_1_merged143_45
//	mag_y_sbl9_16_1_merged143_47
inline hw_uint<256> mag_y_sbl9_16_1_merged143_read_bundle_read(mag_y_cache& mag_y, int root, int sbl9_16_0, int sbl9_16_1, int dynamic_address) {
  // # of ports in bundle: 16
    // mag_y_sbl9_16_1_merged143_17
    // mag_y_sbl9_16_1_merged143_19
    // mag_y_sbl9_16_1_merged143_21
    // mag_y_sbl9_16_1_merged143_23
    // mag_y_sbl9_16_1_merged143_25
    // mag_y_sbl9_16_1_merged143_27
    // mag_y_sbl9_16_1_merged143_29
    // mag_y_sbl9_16_1_merged143_31
    // mag_y_sbl9_16_1_merged143_33
    // mag_y_sbl9_16_1_merged143_35
    // mag_y_sbl9_16_1_merged143_37
    // mag_y_sbl9_16_1_merged143_39
    // mag_y_sbl9_16_1_merged143_41
    // mag_y_sbl9_16_1_merged143_43
    // mag_y_sbl9_16_1_merged143_45
    // mag_y_sbl9_16_1_merged143_47

	hw_uint<256> result;
	hw_uint<16> mag_y_sbl9_16_1_merged143_17_res = mag_y_sbl9_16_1_merged143_17_select(mag_y, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<0, 256>(result, mag_y_sbl9_16_1_merged143_17_res);
	hw_uint<16> mag_y_sbl9_16_1_merged143_19_res = mag_y_sbl9_16_1_merged143_19_select(mag_y, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<16, 256>(result, mag_y_sbl9_16_1_merged143_19_res);
	hw_uint<16> mag_y_sbl9_16_1_merged143_21_res = mag_y_sbl9_16_1_merged143_21_select(mag_y, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<32, 256>(result, mag_y_sbl9_16_1_merged143_21_res);
	hw_uint<16> mag_y_sbl9_16_1_merged143_23_res = mag_y_sbl9_16_1_merged143_23_select(mag_y, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<48, 256>(result, mag_y_sbl9_16_1_merged143_23_res);
	hw_uint<16> mag_y_sbl9_16_1_merged143_25_res = mag_y_sbl9_16_1_merged143_25_select(mag_y, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<64, 256>(result, mag_y_sbl9_16_1_merged143_25_res);
	hw_uint<16> mag_y_sbl9_16_1_merged143_27_res = mag_y_sbl9_16_1_merged143_27_select(mag_y, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<80, 256>(result, mag_y_sbl9_16_1_merged143_27_res);
	hw_uint<16> mag_y_sbl9_16_1_merged143_29_res = mag_y_sbl9_16_1_merged143_29_select(mag_y, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<96, 256>(result, mag_y_sbl9_16_1_merged143_29_res);
	hw_uint<16> mag_y_sbl9_16_1_merged143_31_res = mag_y_sbl9_16_1_merged143_31_select(mag_y, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<112, 256>(result, mag_y_sbl9_16_1_merged143_31_res);
	hw_uint<16> mag_y_sbl9_16_1_merged143_33_res = mag_y_sbl9_16_1_merged143_33_select(mag_y, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<128, 256>(result, mag_y_sbl9_16_1_merged143_33_res);
	hw_uint<16> mag_y_sbl9_16_1_merged143_35_res = mag_y_sbl9_16_1_merged143_35_select(mag_y, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<144, 256>(result, mag_y_sbl9_16_1_merged143_35_res);
	hw_uint<16> mag_y_sbl9_16_1_merged143_37_res = mag_y_sbl9_16_1_merged143_37_select(mag_y, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<160, 256>(result, mag_y_sbl9_16_1_merged143_37_res);
	hw_uint<16> mag_y_sbl9_16_1_merged143_39_res = mag_y_sbl9_16_1_merged143_39_select(mag_y, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<176, 256>(result, mag_y_sbl9_16_1_merged143_39_res);
	hw_uint<16> mag_y_sbl9_16_1_merged143_41_res = mag_y_sbl9_16_1_merged143_41_select(mag_y, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<192, 256>(result, mag_y_sbl9_16_1_merged143_41_res);
	hw_uint<16> mag_y_sbl9_16_1_merged143_43_res = mag_y_sbl9_16_1_merged143_43_select(mag_y, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<208, 256>(result, mag_y_sbl9_16_1_merged143_43_res);
	hw_uint<16> mag_y_sbl9_16_1_merged143_45_res = mag_y_sbl9_16_1_merged143_45_select(mag_y, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<224, 256>(result, mag_y_sbl9_16_1_merged143_45_res);
	hw_uint<16> mag_y_sbl9_16_1_merged143_47_res = mag_y_sbl9_16_1_merged143_47_select(mag_y, root, sbl9_16_0, sbl9_16_1, dynamic_address);
	set_at<240, 256>(result, mag_y_sbl9_16_1_merged143_47_res);
	return result;
}

// Total re-use buffer capacity: 62208 bits


// Operation logic
inline void sbl9_16_1_merged143(mag_x_cache& mag_x, mag_y_cache& mag_y, HWStream<hw_uint<256> >& /* buffer_args num ports = 16 */sbl9_16, int root, int sbl9_16_0, int sbl9_16_1) {
  // Dynamic address computation

	// Consume: mag_x
	auto mag_x_1_m__lp_16_m_sbl9_16_1__p__0_rp___p__0_p_0_c_____1_m_sbl9_16_0__p__0_p_0_value = mag_x_sbl9_16_1_merged143_read_bundle_read(mag_x/* source_delay */, root, sbl9_16_0, sbl9_16_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	// Consume: mag_y
	auto mag_y_1_m__lp_16_m_sbl9_16_1__p__0_rp___p__0_p_0_c_____1_m_sbl9_16_0__p__0_p_0_value = mag_y_sbl9_16_1_merged143_read_bundle_read(mag_y/* source_delay */, root, sbl9_16_0, sbl9_16_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = sbl9_16_1_cu141(mag_x_1_m__lp_16_m_sbl9_16_1__p__0_rp___p__0_p_0_c_____1_m_sbl9_16_0__p__0_p_0_value, mag_y_1_m__lp_16_m_sbl9_16_1__p__0_rp___p__0_p_0_c_____1_m_sbl9_16_0__p__0_p_0_value);
	// Produce: sbl9_16
	sbl9_16.write(compute_result);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void img_1_merged134(HWStream<hw_uint<256> >& /* buffer_args num ports = 16 */off_chip_img, img_cache& img, int root, int img_0, int img_1) {
  // Dynamic address computation

	// Consume: off_chip_img
	auto off_chip_img_1_m__lp__lp_16_m_img_1__p__0_rp___p___m_1_rp___p__0_p_1_c_______1_m__lp_img_0__p___m_1_rp___p__0_p_1_value = off_chip_img.read();
	auto compute_result = img_1_cu132(off_chip_img_1_m__lp__lp_16_m_img_1__p__0_rp___p___m_1_rp___p__0_p_1_c_______1_m__lp_img_0__p___m_1_rp___p__0_p_1_value);
	// Produce: img
	img_img_1_merged134_write_bundle_write(/* arg names */compute_result, img, root, img_0, img_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void mag_y_1_merged137(img_cache& img, mag_y_cache& mag_y, int root, int mag_y_0, int mag_y_1) {
  // Dynamic address computation

	// Consume: img
	auto img_1_m__lp_16_m_mag_y_1__p__0_rp___p___m_1_p_1_c_____1_m_mag_y_0__p___m_1_p_1_value = img_mag_y_1_merged137_read_bundle_read(img/* source_delay */, root, mag_y_0, mag_y_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = mag_y_1_cu135(img_1_m__lp_16_m_mag_y_1__p__0_rp___p___m_1_p_1_c_____1_m_mag_y_0__p___m_1_p_1_value);
	// Produce: mag_y
	mag_y_mag_y_1_merged137_write_bundle_write(/* arg names */compute_result, mag_y, root, mag_y_0, mag_y_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

inline void mag_x_1_merged140(img_cache& img, mag_x_cache& mag_x, int root, int mag_x_0, int mag_x_1) {
  // Dynamic address computation

	// Consume: img
	auto img_1_m__lp_16_m_mag_x_1__p__0_rp___p___m_1_p_1_c_____1_m_mag_x_0__p___m_1_p_1_value = img_mag_x_1_merged140_read_bundle_read(img/* source_delay */, root, mag_x_0, mag_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

	auto compute_result = mag_x_1_cu138(img_1_m__lp_16_m_mag_x_1__p__0_rp___p___m_1_p_1_c_____1_m_mag_x_0__p___m_1_p_1_value);
	// Produce: mag_x
	mag_x_mag_x_1_merged140_write_bundle_write(/* arg names */compute_result, mag_x, root, mag_x_0, mag_x_1, 0);

#ifndef __VIVADO_SYNTH__
#endif //__VIVADO_SYNTH__

}

// Driver function
void sbl9_16_opt(HWStream<hw_uint<256> >& /* no bundle get_args num ports = 16 */off_chip_img, HWStream<hw_uint<256> >& /* get_args num ports = 16 */sbl9_16) {

#ifndef __VIVADO_SYNTH__
  ofstream debug_file("sbl9_16_opt_debug.csv");
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

// schedule: { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119; img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120; mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119; mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
//   { sbl9_16_1_merged143[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 3] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
// Condition for sbl9_16_1_merged143(((((-3 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((120 + -1*i2)) >= 0)))
//   { img_1_merged134[d0 = 0, d1, d2] -> [0, d1, d2, 0] : 0 <= d1 <= 1081 and 0 <= d2 <= 120 }
// Condition for img_1_merged134(((((1*i3)) == 0) && (((1*i0)) == 0) && (((1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((1*i2)) >= 0) && (((120 + -1*i2)) >= 0)))
//   { mag_x_1_merged140[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 1] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
// Condition for mag_x_1_merged140(((((-1 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((120 + -1*i2)) >= 0)))
//   { mag_y_1_merged137[d0 = 0, d1, d2] -> [0, 2 + d1, 1 + d2, 2] : 0 <= d1 <= 1079 and 0 <= d2 <= 119 }
// Condition for mag_y_1_merged137(((((-2 + 1*i3)) == 0) && (((1*i0)) == 0) && (((-2 + 1*i1)) >= 0) && (((1081 + -1*i1)) >= 0) && (((-1 + 1*i2)) >= 0) && (((120 + -1*i2)) >= 0)))

	// time range: { [0, i1, i2, i3] : 2 <= i1 <= 1081 and 0 < i2 <= 120 and 0 < i3 <= 3; [0, i1, i2, 0] : 0 <= i1 <= 1081 and 0 <= i2 <= 120 }
	// # sets: 1
	int i0 = 0;
	  for (int i1 = 0; i1 <= 1081; i1++) {
	    for (int i2 = 0; i2 <= 120; i2++) {
	#pragma HLS pipeline II=1
	        // { [i0, i1, i2] }
	        // { [i0, i1, i2] :  }
	        if ((true)) {
	          img_1_merged134(off_chip_img /* buf name */, img, 0, ((1*i1)), ((1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -1 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-1 + 1*i2)) >= 0)))) {
	          mag_x_1_merged140(img /* buf name */, mag_x, 0, ((-2 + 1*i1)), ((-1 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -1 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-1 + 1*i2)) >= 0)))) {
	          mag_y_1_merged137(img /* buf name */, mag_y, 0, ((-2 + 1*i1)), ((-1 + 1*i2)));
	        }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	        // { [i0, i1, i2] : i1 >= 2 and i2 > 0 }
	          // { [i0, i1, i2] : -2 + i1 >= 0 }
	          // { [i0, i1, i2] : -1 + i2 >= 0 }
	        if ((((((-2 + 1*i1)) >= 0) && (((-1 + 1*i2)) >= 0)))) {
	          sbl9_16_1_merged143(mag_x /* buf name */, mag_y /* buf name */, sbl9_16, 0, ((-2 + 1*i1)), ((-1 + 1*i2)));
	        }
	    }
	  }
	
#ifndef __VIVADO_SYNTH__
  debug_file.close();
#endif //__VIVADO_SYNTH__
}

void sbl9_16_opt_wrapper(HWStream<hw_uint<256> >& /* no bundle get_args num ports = 16 */off_chip_img, HWStream<hw_uint<256> >& /* get_args num ports = 16 */sbl9_16, const int num_epochs) {

  for (int epoch = 0; epoch < num_epochs; epoch++) {
    sbl9_16_opt(off_chip_img, sbl9_16);
  }
}
#ifdef __VIVADO_SYNTH__
  // { img_1_merged134[root = 0, img_0, img_1] -> off_chip_img[15 + 16img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 120; img_1_merged134[root = 0, img_0, img_1] -> off_chip_img[14 + 16img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 120; img_1_merged134[root = 0, img_0, img_1] -> off_chip_img[13 + 16img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 120; img_1_merged134[root = 0, img_0, img_1] -> off_chip_img[12 + 16img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 120; img_1_merged134[root = 0, img_0, img_1] -> off_chip_img[11 + 16img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 120; img_1_merged134[root = 0, img_0, img_1] -> off_chip_img[10 + 16img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 120; img_1_merged134[root = 0, img_0, img_1] -> off_chip_img[9 + 16img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 120; img_1_merged134[root = 0, img_0, img_1] -> off_chip_img[8 + 16img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 120; img_1_merged134[root = 0, img_0, img_1] -> off_chip_img[7 + 16img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 120; img_1_merged134[root = 0, img_0, img_1] -> off_chip_img[6 + 16img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 120; img_1_merged134[root = 0, img_0, img_1] -> off_chip_img[5 + 16img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 120; img_1_merged134[root = 0, img_0, img_1] -> off_chip_img[4 + 16img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 120; img_1_merged134[root = 0, img_0, img_1] -> off_chip_img[3 + 16img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 120; img_1_merged134[root = 0, img_0, img_1] -> off_chip_img[2 + 16img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 120; img_1_merged134[root = 0, img_0, img_1] -> off_chip_img[1 + 16img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 120; img_1_merged134[root = 0, img_0, img_1] -> off_chip_img[16img_1, img_0] : 0 <= img_0 <= 1081 and 0 <= img_1 <= 120 }
const int img_1_merged134_read_pipe0_num_transfers = 130922;
  // { sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> sbl9_16[15 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119; sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> sbl9_16[14 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119; sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> sbl9_16[13 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119; sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> sbl9_16[12 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119; sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> sbl9_16[11 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119; sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> sbl9_16[10 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119; sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> sbl9_16[9 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119; sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> sbl9_16[8 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119; sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> sbl9_16[7 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119; sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> sbl9_16[6 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119; sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> sbl9_16[5 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119; sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> sbl9_16[4 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119; sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> sbl9_16[3 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119; sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> sbl9_16[2 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119; sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> sbl9_16[1 + 16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119; sbl9_16_1_merged143[root = 0, sbl9_16_0, sbl9_16_1] -> sbl9_16[16sbl9_16_1, sbl9_16_0] : 0 <= sbl9_16_0 <= 1079 and 0 <= sbl9_16_1 <= 119 }
const int sbl9_16_1_merged143_write_pipe0_num_transfers = 129600;


extern "C" {

void sbl9_16_opt_accel(hw_uint<256>* img_1_merged134_read_pipe0, hw_uint<256>* sbl9_16_1_merged143_write_pipe0, const int size) { 
#pragma HLS dataflow
#pragma HLS INTERFACE m_axi port = img_1_merged134_read_pipe0 offset = slave depth = 65536 bundle = gmem0
#pragma HLS INTERFACE m_axi port = sbl9_16_1_merged143_write_pipe0 offset = slave depth = 65536 bundle = gmem1

#pragma HLS INTERFACE s_axilite port = img_1_merged134_read_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = sbl9_16_1_merged143_write_pipe0 bundle = control
#pragma HLS INTERFACE s_axilite port = size bundle = control
#pragma HLS INTERFACE s_axilite port = return bundle = control


  // Pipeline # 0
  static HWStream<hw_uint<256> > img_1_merged134_read_pipe0_channel;
  static HWStream<hw_uint<256> > sbl9_16_1_merged143_write_pipe0_channel;

  burst_read<256>(img_1_merged134_read_pipe0, img_1_merged134_read_pipe0_channel, img_1_merged134_read_pipe0_num_transfers*size);

  sbl9_16_opt_wrapper(img_1_merged134_read_pipe0_channel, sbl9_16_1_merged143_write_pipe0_channel, size);

  burst_write<256>(sbl9_16_1_merged143_write_pipe0, sbl9_16_1_merged143_write_pipe0_channel, sbl9_16_1_merged143_write_pipe0_num_transfers*size);
}

}
extern "C" {

void sbl9_16_opt_rdai(HWStream<hw_uint<256> >& img_1_merged134_read_pipe0, HWStream<hw_uint<256> >&  sbl9_16_1_merged143_write_pipe0) { 
#pragma HLS dataflow
#pragma HLS INTERFACE axis register port = img_1_merged134_read_pipe0
#pragma HLS INTERFACE axis register port = sbl9_16_1_merged143_write_pipe0

#pragma HLS INTERFACE ap_ctrl_none port = return


  // Pipeline # 0

  sbl9_16_opt(img_1_merged134_read_pipe0, sbl9_16_1_merged143_write_pipe0);

}

}
#endif //__VIVADO_SYNTH__

